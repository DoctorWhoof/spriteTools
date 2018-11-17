Namespace mojo.graphics

#Import "<mojo>"
Using mojo..
Using std..

#rem monkeydoc The Atlas class.
An Atlas contains a single texture shared by all individual "Cells" (frames, in the case of an animated sprite, or tiles, if used as a tileset).
#end
Class Atlas

	Protected

	Field _texture:Texture							'Our main texture, contains all cell
	Field _image:Image								'Image that simply holds the main texture
	
	Field _cells:Image[]							'Array with all cells as individual images
	Field _coordinates:= New Stack<Rect<Float>>		'A stack containing the UV coordinates for each cell
	
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
	Returns an array containing all UV coordinates for each cell. Read Only.
	#end
	Property Coords:Rect<Float>[]()
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
	Method New( path:String, cellWidth:Int, cellHeight:Int, padding:Int = 0, border:Int = 0, flags:TextureFlags = TextureFlags.FilterMipmap, wrapTiles:Bool = True )
		
		'Temp pixmap holding the original pixels for manipulation
		Local srcPix := Pixmap.Load( path )
		Assert( srcPix, "~n~nAtlas: Failed to load " + path + "~n~n" )
		
		'Source spritesheet values
		_cellWidth = cellWidth
		_cellHeight = cellHeight
		Local _paddedWidth := _cellWidth + ( padding * 2 )
		Local _paddedHeight := _cellHeight + ( padding * 2 )
		_rows = ( srcPix.Height - border - border ) / _paddedHeight
		_columns = ( srcPix.Width - border - border ) / _paddedWidth
		
		'Destination Pixmap's values. The padding is always 1 here, so there's 2 extra pixels on each axis.
		Local pCellWidth := _cellWidth + 2
		Local pCellHeight := _cellHeight + 2
		Local pWidth :=  NearestPow( ( pCellWidth * _columns ) )
		Local pHeight := NearestPow( ( pCellHeight * _rows ) )
		
		'Temp destination pixmap
		Local pix := New Pixmap( pWidth, pHeight)
		pix.Clear( New Color(0,0,0,0) )
		Print "Atlas Pixmap: " + pWidth + "," + pHeight
		
		'Calculates the values for each cell
		Local numFrames := _rows * _columns
		Local w:Double = srcPix.Width
		Local h:Double = srcPix.Height
		
		For Local i:= 0 Until numFrames
			Local col := i Mod _columns
			'Source coordinates
			Local x:Double = ( col * _paddedWidth ) + padding + border
			Local y:Double = ( ( i / _columns ) * _paddedHeight ) + padding + border
			'Destination coordinates
			Local xPix:Double = ( col * pCellWidth ) + 1
			Local yPix:Double = ( ( i / _columns ) * pCellHeight ) + 1
			'Fills the gaps between cells with redundant pixels
			If wrapTiles
				'Edge pixels are expanded to filter with other edge. Best for repeating patterns.
				pix.Paste( srcPix.Window( x, y, 1, _cellHeight ), xPix+_cellWidth, yPix )
				pix.Paste( srcPix.Window( x + _cellWidth-1, y, 1, _cellHeight ),xPix-1, yPix )
				pix.Paste( srcPix.Window( x, y, _cellWidth, 1 ), xPix, yPix+_cellHeight )
				pix.Paste( srcPix.Window( x, y + _cellHeight-1, _cellWidth, 1 ), xPix, yPix-1 )
			Else
				'Edge pixels expand to their own colors. Best for tiles with transparency and sprites.
				pix.Paste( srcPix.Window( x, y, 1, _cellHeight ), xPix-1, yPix )
				pix.Paste( srcPix.Window( x + _cellWidth-1, y, 1, _cellHeight ), xPix+_cellWidth, yPix )
				pix.Paste( srcPix.Window( x, y, _cellWidth, 1 ), xPix, yPix-1 )
				pix.Paste( srcPix.Window( x, y + _cellHeight-1, _cellWidth, 1 ), xPix, yPix+_cellHeight )
			End
			'Draw the cell
			pix.Paste( srcPix.Window( x, y, _cellWidth, _cellHeight ), xPix, yPix )
			'Fill the gap "corners"
			If wrapTiles
				pix.SetPixel( xPix-1, yPix-1, pix.GetPixel( xPix+_cellWidth-1, yPix+cellHeight-1 ) )
				pix.SetPixel( xPix+_cellWidth, yPix-1, pix.GetPixel( xPix, yPix+cellHeight-1 ) )
				pix.SetPixel( xPix+_cellWidth, yPix+_cellHeight, pix.GetPixel( xPix, yPix ) )
				pix.SetPixel( xPix-1, yPix+_cellHeight, pix.GetPixel( xPix+_cellWidth-1, yPix ) )
			Else
				pix.SetPixel( xPix-1, yPix-1, pix.GetPixel( xPix, yPix ) )
				pix.SetPixel( xPix+_cellWidth, yPix-1, pix.GetPixel( xPix+_cellWidth-1, yPix ) )
				pix.SetPixel( xPix+_cellWidth, yPix+_cellHeight, pix.GetPixel( xPix+_cellWidth-1, yPix+_cellHeight-1 ) )
				pix.SetPixel( xPix-1, yPix+_cellHeight, pix.GetPixel( xPix, yPix+_cellHeight-1 ) )
			End
			'Populates UV coordinates
			_coordinates.Push( New Rectf( xPix/pWidth, yPix/pHeight, (xPix+_cellWidth)/pWidth, (yPix+_cellHeight)/pHeight ) )
		Next
		
		pix.PremultiplyAlpha()
		
		_image = New Image( pWidth, pHeight, PixelFormat.RGBA8, flags )
		_texture = _image.Texture
		_texture.PastePixmap( pix, 0, 0 )
		
		pix.Discard()
		srcPix.Discard()
	End

End


Function NearestPow:Int( number:Int )
	Return Pow( 2, Ceil( Log( number )/Log( 2 ) ) )
End









