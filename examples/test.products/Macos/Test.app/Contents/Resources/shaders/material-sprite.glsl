//@renderpasses 0

//material uniforms

uniform mat3 m_TextureMatrix;

//renderer uniforms...

uniform mat4 i_ModelViewProjectionMatrix;

//varyings...

varying vec2 v_TexCoord0;

//@vertex

attribute vec4 a_Position;

attribute vec2 a_TexCoord0;

void main(){

	v_TexCoord0=(m_TextureMatrix * vec3(a_TexCoord0,1.0)).st;
	
	gl_Position=i_ModelViewProjectionMatrix * a_Position;
}

//@fragment

uniform sampler2D m_ColorTexture;

uniform vec4 m_ColorFactor;

uniform float m_AlphaDiscard;

void main(){

	vec4 tcolor=texture2D( m_ColorTexture,v_TexCoord0 );

	float alpha=tcolor.a * m_ColorFactor.a;
	
	if( alpha<m_AlphaDiscard ) discard;

	vec3 color=pow( tcolor.rgb,vec3( 2.2 ) ) * m_ColorFactor.rgb;
	
#if defined( MX2_SRGBOUTPUT )
	gl_FragColor=vec4( pow( color,vec3( 1.0/2.2 ) ),alpha );
#else
	gl_FragColor=vec4( color * alpha,alpha );
#endif
}
