Namespace mojo.graphics

Class Atlas

	Protected

	Field texture:Texture						'Our main texture
	Field image:Image							'Image that simply holds the entire texture with all cells
	
	Field cells:Image[]							'Array with all cells
	Field coordinates:= New Stack<Rect<Double>>	'A stack containing the UV coordinates for each cell
	
	Field rows:Int								'Number of rows in the original image file
	Field columns:Int							'Number of collumns in the original image file

	Field cellWidth:Int							'The width of an individual cell (frame or tile), in pixels
	Field cellHeight:Int						'The height of an individual cell (frame or tile), in pixels

	
	'*************************************** Public Properties ***************************************
	
	Public
	
	Property Cells:Image[]()
		If Not cells
			Local stack := New Stack<Image>
			For Local n := 0 Until coordinates.Length
				Local c := coordinates[n]
				stack.Push( New Image( texture, New Recti( c.Left*texture.Width, c.Top*texture.Height, c.Right*texture.Width, c.Bottom*texture.Height ) ) )
			Next
			cells = stack.ToArray()
		End
		Return cells
	End
	
	
	Property Image:Image()
		Return image
	End
	
	
	Property Texture:Texture()
		Return image.Texture
	End
	
	
	Property Coords:Rect<Double>[]()
		Return coordinates.ToArray()	
	End
	
	
	Property Columns:Int()
		Return columns
	End
	
	
	Property Rows:Int()
		Return rows
	End
	
	
	Property CellWidth:Int()
		Return cellWidth
	End
	
	
	Property CellHeight:Int()
		Return cellHeight
	End
	
	
	'*************************************** Public Methods ***************************************
	
	
	Method New( path:String, _cellWidth:Int, _cellHeight:Int, _padding:Int = 0, _border:Int = 0, _flags:TextureFlags = TextureFlags.FilterMipmap )
		Local srcPix := Pixmap.Load( path )
		Assert( srcPix, "~n~nAtlas: Failed to load " + path + "~n~n" )
		
		'Source spritesheet values
		cellWidth = _cellWidth
		cellHeight = _cellHeight
		Local padding := _padding
		Local border := _border
		Local paddedWidth := cellWidth + ( padding * 2 )
		Local paddedHeight := cellHeight + ( padding * 2 )
		rows = ( srcPix.Height - border - border ) / paddedHeight
		columns = ( srcPix.Width - border - border ) / paddedWidth
		
		'Destination Pixmap's values. The padding is always 1 here, so there's 2 extra pixels on each axis.
		Local pCellWidth := cellWidth + 2
		Local pCellHeight := cellHeight + 2
		Local pWidth :=  NearestPow( ( pCellWidth * columns ) )
		Local pHeight := NearestPow( ( pCellHeight * rows ) )
		Local pix := New Pixmap( pWidth, pHeight)
		Print pWidth + "," + pHeight
		
		'Calculates the values for each cell
		Local numFrames := rows * columns
		Local w:Double = srcPix.Width
		Local h:Double = srcPix.Height
		
		For Local i:= 0 Until numFrames
			Local col := i Mod columns
			'Source coordinates
			Local x:Double = ( col * paddedWidth ) + padding + border
			Local y:Double = ( ( i / columns ) * paddedHeight ) + padding + border
			'Destination coordinates
			Local xPix:Double = ( col * pCellWidth ) + 1
			Local yPix:Double = ( ( i / columns ) * pCellHeight ) + 1
			'Fills the gaps between cells with redundant pixels
			Local window := srcPix.Window( x, y, cellWidth, cellHeight )
			pix.Paste( window, xPix-1, yPix )
			pix.Paste( window, xPix+1, yPix )
			pix.Paste( window, xPix, yPix-1 )
			pix.Paste( window, xPix, yPix+1 )
			'Draws the cell
			pix.Paste( window, xPix, yPix )
			'Populates UV coordinates
			coordinates.Push( New Rectf( xPix/pWidth, yPix/pHeight, (xPix+cellWidth)/pWidth, (yPix+cellHeight)/pHeight ) )
		Next
		
		image = New Image( pWidth, pHeight, PixelFormat.RGBA8, _flags )
		texture = image.Texture
		texture.PastePixmap( pix, 0, 0 )
		
		pix.Discard()
		srcPix.Discard()
	End

End


Function NearestPow:Int( number:Int )
	Return Pow( 2, Ceil( Log( number )/Log( 2 ) ) )
End








