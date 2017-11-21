Namespace spritetools

#rem monkeydoc The Atlas class.
An Atlas contains a single texture shared by all individual "Cells" (frames, in the case of an animated sprite, or tiles, if used as a tileset).
#end
Class Atlas

	Protected

	Field _texture:Texture							'Our main texture, contains all cell
	Field _image:Image								'Image that simply holds the main texture
	
	Field _cells:Image[]							'Array with all cells as individual images
	Field _coordinates:= New Stack<Rect<Double>>	'A stack containing the UV coordinates for each cell
	
	Field _rows:Int									'Number of rows in the original image file
	Field _columns:Int								'Number of collumns in the original image file

	Field _cellWidth:Int							'The width of an individual cell (frame or tile), in pixels
	Field _cellHeight:Int							'The height of an individual cell (frame or tile), in pixels

	
	'*************************************** Public Properties ***************************************
	
	Public
	
	#rem monkeydoc
	Returns an array containing all individual cells as images. This is the main way to access the contents of the Atlas.
	Read Only.
	#end
	Property Cells:Image[]()
		If Not _cells
			Local stack := New Stack<Image>
			For Local n := 0 Until _coordinates.Length
				Local c := _coordinates[n]
				stack.Push( New Image( _texture, New Recti( c.Left*_texture.Width, c.Top*_texture.Height, c.Right*_texture.Width, c.Bottom*_texture.Height ) ) )
			Next
			_cells = stack.ToArray()
			stack.Clear()
			stack = Null
		End
		Return _cells
	End
	
	#rem monkeydoc @hidden
	Returns the main image that contains the atlas texture. Read Only.
	#end
	Property Image:Image()
		Return _image
	End
	
	#rem monkeydoc
	The main atlas texture, after initial image processing (power of two sizing, filled gaps between tiles, etc). Read Only.
	#end
	Property Texture:Texture()
		Return _image.Texture
	End
	
	#rem monkeydoc
	Returns an array containig all UV coordinates for each cell. Read Only.
	#end
	Property Coords:Rect<Double>[]()
		Return _coordinates.ToArray()	
	End
	
	#rem monkeydoc
	Returns the number of cell columns. Read Only.
	#end
	Property Columns:Int()
		Return _columns
	End
	
	#rem monkeydoc
	Returns the number of cell rows.
	Read Only.
	#end
	Property Rows:Int()
		Return _rows
	End
	
	#rem monkeydoc
	Returns the width of each individual cell.
	Read Only.
	#end
	Property CellWidth:Int()
		Return _cellWidth
	End
	
	#rem monkeydoc
	Returns the height of each individual cell
	Read Only.
	#end
	Property CellHeight:Int()
		Return _cellHeight
	End
	
	
	'*************************************** Public Methods ***************************************
	
	#rem monkeydoc
	Atlas Constructor. Parameters are:
	@param path The string containing the path to the .png file.
	@param cellWidth The horizontal number of pixels on each cell, not including border and padding.
	@param cellHeight The vertical number of pixels on each cell, not including border and padding.
	@param padding The number of pixels around each cell, creating a gap between cells. Usually 0 or 1.
	@param border The number of pixels around the entire .png texture, in addition to the padding. Usually 0.
	@param flags mojo texture flags. Use TextureFlags.None for "retro", pixelated look.
	#end
	Method New( path:String, cellWidth:Int, cellHeight:Int, padding:Int = 0, border:Int = 0, flags:TextureFlags = TextureFlags.FilterMipmap )
		Local srcPix := Pixmap.Load( path )
		Assert( srcPix, "~n~nAtlas: Failed to load " + path + "~n~n" )
		
		'Source spritesheet values
		_cellWidth = cellWidth
		_cellHeight = cellHeight
		Local _padding := padding
		Local _border := border
		Local _paddedWidth := _cellWidth + ( _padding * 2 )
		Local _paddedHeight := _cellHeight + ( _padding * 2 )
		_rows = ( srcPix.Height - border - _border ) / _paddedHeight
		_columns = ( srcPix.Width - border - _border ) / _paddedWidth
		
		'Destination Pixmap's values. The padding is always 1 here, so there's 2 extra pixels on each axis.
		Local pCellWidth := _cellWidth + 2
		Local pCellHeight := _cellHeight + 2
		Local pWidth :=  NearestPow( ( pCellWidth * _columns ) )
		Local pHeight := NearestPow( ( pCellHeight * _rows ) )
		Local pix := New Pixmap( pWidth, pHeight)
		Print pWidth + "," + pHeight
		
		'Calculates the values for each cell
		Local numFrames := _rows * _columns
		Local w:Double = srcPix.Width
		Local h:Double = srcPix.Height
		
		For Local i:= 0 Until numFrames
			Local col := i Mod _columns
			'Source coordinates
			Local x:Double = ( col * _paddedWidth ) + _padding + _border
			Local y:Double = ( ( i / _columns ) * _paddedHeight ) + _padding + _border
			'Destination coordinates
			Local xPix:Double = ( col * pCellWidth ) + 1
			Local yPix:Double = ( ( i / _columns ) * pCellHeight ) + 1
			'Fills the gaps between cells with redundant pixels
			Local window := srcPix.Window( x, y, _cellWidth, _cellHeight )
			pix.Paste( window, xPix-1, yPix )
			pix.Paste( window, xPix+1, yPix )
			pix.Paste( window, xPix, yPix-1 )
			pix.Paste( window, xPix, yPix+1 )
			'Draws the cell
			pix.Paste( window, xPix, yPix )
			'Populates UV coordinates
			_coordinates.Push( New Rectf( xPix/pWidth, yPix/pHeight, (xPix+_cellWidth)/pWidth, (yPix+_cellHeight)/pHeight ) )
		Next
		
		_image = New Image( pWidth, pHeight, PixelFormat.RGBA8, flags )
		_texture = _image.Texture
		_texture.PastePixmap( pix, 0, 0 )
		
		pix.Discard()
		srcPix.Discard()
	End

End

#rem monkeydoc
Returns the nearest "power of two" number (64, 128, 256, 512, 1024, etc).
#end
Function NearestPow:Int( number:Int )
	Return Pow( 2, Ceil( Log( number )/Log( 2 ) ) )
End








