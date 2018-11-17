Namespace mojo3d

#Import "<mojo3d>"
Using mojo3d..

Class SpriteComponent Extends Behaviour

	'Event functions
	Field onLastFrame :Void()
	Field onFirstFrame :Void()
	
	Field path:String
	Field cellWidth:Int
	Field cellHeight:Int
	Field padding:Int
	Field border:Int
	Field flags:TextureFlags

	Protected
	Field _sprite:Sprite
	
	'Atlas values
	Field _frame:Int = -1									'The frame currently displayed
	Field _atlas:Atlas

	'Animation clip management
	Field _timeScale := 1.0									'Adjusts playback speed. Can be used to create slow motion effects without changing the framerate.
	Field _anim :AnimationClip								'The animation clip currently playing
	Field _animations := New StringMap< AnimationClip >		'List of available animation clips
	Field _offset :Int										'Current frame offset
	Field _framerate:Double	= 15.0							'Frame rate, if a clip is not provided

	'Misc
	Field _firstFrame := True
	Field _hasReachedEnd := False
	Field _hasReachedStart := False
	
	'******************************* Public Properties *******************************
	Public
	
	'Current frame
	Property Frame:Int()
		Return _frame
	Setter( number:Int )
		If number <> _frame
			_frame = Clamp( number, 0, _atlas.Coords.Length-1 )
			_sprite.TextureRect = _atlas.Coords[ _frame ]
			If _frame >= LastFrame
				If Not _hasReachedEnd
					onLastFrame()
					_hasReachedEnd = True
					_hasReachedStart = False
				End
			End
			If _firstFrame
				onFirstFrame()
				_firstFrame = False
			Else
				If _frame = FirstFrame
					If Not _hasReachedStart
						onFirstFrame()
						_hasReachedStart = True
						_hasReachedEnd = False
					End
				End
			End
		End
	End
	
	
	'current AnimationClip
	Property Animation:String()
		Return _anim.name
	Setter( name:String )
		If _animations[ name ]
			_anim = _animations[ name ]
		Else
			Print( "AnimSprite: animation '" + name + "' Not found!" )
		End
	End
	
	
	'Map with all animations as values and their names as keys
	Property AllAnimations:StringMap< AnimationClip >()
		Return _animations
	End
	
	
	'Offsets the current frame, useful when creating multiple copies of the same sprite
	Property FrameOffset:Int()
		Return _offset
	Setter( number:Int )
		_offset = number
	End
	
	
	'Sets the frame rate. If a clip is in use, that clip's frame rate will be set.
	Property FrameRate:Double()
		If _anim
			Return _anim.framerate
		Else
			Return _framerate
		End
	Setter( value:Double )
		If _anim
			_anim.framerate = value
		Else
			_framerate = value
		End
	End
	
	
	'Duration (in seconds) of the current animation clip. If none, duration of the entire spritesheet is provided.
	Property Duration:Double()
		Local _period:Double = ( 1.0 / FrameRate ) * _timeScale
		If _anim
			Return _period * _anim.frames.Length
		Else
			Return _period * _atlas.Coords.Length
		End
	End
	
	
	'Dimensions per frame
	Property CellWidth:Int()
		Return cellWidth
	End
	
	Property CellHeight:Int()
		Return cellHeight
	End

	
	'First frame in clip
	Property FirstFrame:Int()
		If _anim
			Return _anim.frames[ 0 ]
		Else
			Return 0
		End
	End
	
	
	'Last frame in clip
	Property LastFrame:Int()
		If _anim
			Return _anim.frames[ _anim.frames.Length-1 ]
		Else
			Return _atlas.Coords.Length - 1
		End
	End
	
	
	'******************************* Public Methods *******************************
	
	Method New( entity:Entity ) Override
		Super.New( entity )
		_sprite = Cast<Sprite>( Entity )
		Assert( _sprite, "SpriteAnimation: Error, entity needs to be a Sprite")
	End
	
	
	Method Load( path:String, cellWidth:Int, cellHeight:Int, padding:Int = 0, border:Int = 0, flags:TextureFlags = TextureFlags.FilterMipmap )
		
		_atlas = New Atlas( path, cellWidth, cellHeight, padding, border, flags, False )
		
		Local _mat := New SpriteMaterial
		_mat.ColorTexture = _atlas.Texture
		_sprite.Material = _mat
		_sprite.Visible = True
		
		Self.path = path
		Self.cellWidth = cellWidth
		Self.cellHeight = cellHeight
		Self.padding = padding
		Self.border = border
		Self.flags = flags
		
		Frame = 0
	End
	
	
	'Called every frame.
	Method OnUpdate( elapsed:Float ) Override
		
		Local time := Clock.Now()
		
		Local frameLength:Double = ( 1.0 / FrameRate ) / _timeScale
		time += ( _offset * frameLength )
		
		If _anim
			If _anim.loop
				Frame = _anim.frames[ Int( ( time Mod Duration ) / frameLength ) ]
			Else
				Local f := Clamp<Int>( time / frameLength, 0, _anim.frames.Length-1 )
				Frame = _anim.frames[f]
			End
		Else
			Frame = Int( ( time Mod Duration ) /frameLength )
		End
	End
	
	
	'Adds new animation clips.
	Method AddAnimationClip( _name:String, _loop:Bool = True, framerate:Int, _frames:Int[] )
		local animClip := New AnimationClip
		animClip.name = _name
		animClip.loop = _loop
		animClip.frames = _frames
		animClip.framerate = framerate
		_animations.Add( _name, animClip )
		
		Print "Animation " + _name + ", loop=" + _loop + " ,rate=" + _framerate + ", frames=" + ArrayToString( _frames )
	End


	'Loads Json file
	Method LoadAnimations( path:String )
		Local json := JsonObject.Load( path )
		If json
			Local anims := json.GetObject( "animations" )
			If anims
				For Local a := Eachin anims.ToObject()
					Local obj := a.Value.ToObject()
					Local loop := obj[ "loop" ].ToBool()
					Local rate := obj[ "rate" ].ToNumber()

					Local frameStack := obj[ "frames" ].ToArray()
					Local frames:Int[] = New Int[ frameStack.Length ]
					For Local n := 0 Until frameStack.Length
						frames[n] = frameStack[n].ToNumber()
					Next

					AddAnimationClip( a.Key, loop, rate, frames )
				Next
			End
		Else
			Print( "AnimSprite: Warning, json file not found or invalid" )
		End
	End
	
End


'**************************************************************************************************************************************'


Class AnimationClip						'AnimationClips contain a sequence of frames to be played, its name, framerate and loop state.
	
	field name			:String			'Animation name
	field loop			:= True			'looping can be controlled per animation
	field frames 		:Int[]			'Frame list array, contains the sequence in which the frames play
	Field framerate		:= 15.0			'frame rate per clip

	Property FrameCount:Int()
		Return frames.Length
	End
	
End

