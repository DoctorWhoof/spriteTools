#Import "../spritetools"
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
		Super.New( "Sprite Test",400,600, WindowFlags.Resizable )
		
		srcImage = Image.Load( "asset::pixelPattern.png", Null, TextureFlags.None )
		atlas = New Atlas( "asset::pixelPattern.png", 16, 16, 0, 0, TextureFlags.None )
	End

	Method OnRender( canvas:Canvas ) Override
		App.RequestRender()
		canvas.Font = smallFont
		
		canvas.DrawText( "Source image",Width*.1, Height*.05 )
		canvas.DrawImage( srcImage, Width*.1, Height*.07, 0, 2, 2 )
		
		canvas.DrawText( "Atlas with tile gaps filled",Width*.1, Height*.35 )
		canvas.DrawImage( atlas.Image, Width*.1, Height*.37, 0, 2, 2 )
		
		canvas.DrawText( "Resulting tiles with indices",Width*.1, Height*.68 )
		For Local x := 0 Until atlas.Columns
			For Local y := 0 Until atlas.Rows
				Local n := x + ( atlas.Columns * y )
				Local pos := New Vec2i( (atlas.CellWidth * x * scl)+(x*scl), (atlas.CellHeight * y * scl)+(y*scl) )
				canvas.DrawImage( atlas.Cells[ n ], pos.X + Width*.1, pos.Y + Height*.7, 0, scl, scl )
				canvas.DrawText( n, pos.X + Width*.1, pos.Y + Height*.7 )
			Next
		Next
	End

End

