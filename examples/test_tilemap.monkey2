#Import "../Atlas"
#Import "images/"

Const smallFont:Font = Font.Load( "font::DejaVuSans.ttf", 12 )

Function Main()
	New AppInstance
	New MyWindow
	App.Run()
End

'************************************************************************************************

Class MyWindow Extends Window
	
	Field srcImage: Image
	Field imageWithGaps:Image
	
	Field atlas :Atlas
	Field scl := 2

	Method New()
		Super.New( "Sprite Test", 1024, 768, WindowFlags.HighDPI | WindowFlags.Resizable )
		
		srcImage = Image.Load( "asset::crystalcave.png", Null, TextureFlags.None )
		atlas = New Atlas( "asset::crystalcave.png", 32, 32, 0, 0, TextureFlags.None, False )
		
		ClearColor = Color.DarkGrey
	End

	Method OnRender( canvas:Canvas ) Override
		App.RequestRender()
		canvas.Font = smallFont
		
		canvas.DrawText( "Source image, " + srcImage.Width + "x" + srcImage.Height,Width*.1, Height*.05 )
		canvas.DrawImage( srcImage, Width*.1, Height*.07, 0, 2, 2 )
		
		canvas.DrawText( "Atlas with tile gaps filled, " + atlas.Image.Width + "x" + atlas.Image.Height, Width*.1, Height*.55 )
		canvas.DrawImage( atlas.Image, Width*.1, Height*.57, 0, 2, 2 )
		
		canvas.DrawText( "Resulting tiles with indices",Width*.5, Height*.05 )
		For Local x := 0 Until atlas.Columns
			For Local y := 0 Until atlas.Rows
				Local n := x + ( atlas.Columns * y )
				Local pos := New Vec2i( (atlas.CellWidth * x * scl)+(x*scl), (atlas.CellHeight * y * scl)+(y*scl) )
				canvas.DrawImage( atlas.Cells[ n ], pos.X + Width*.5, pos.Y + Height*.07, 0, scl, scl )
				canvas.DrawText( n, pos.X + Width*.5, pos.Y + Height*.07 )
			Next
		Next
	End

End

