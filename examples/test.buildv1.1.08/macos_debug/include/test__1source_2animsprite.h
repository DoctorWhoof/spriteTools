
#ifndef MX2_TEST__1SOURCE_2ANIMSPRITE_H
#define MX2_TEST__1SOURCE_2ANIMSPRITE_H

#include <bbmonkey.h>

struct t_mojo3d_graphics_AnimSprite;
struct t_mojo3d_graphics_AnimationClip;


// Class mojo3d.graphics.AnimSprite

#include "mojo3d/mojo3d.buildv1.1.08/macos_debug/include/mojo3d_entities_2sprite.h"

enum class t_mojo_graphics_TextureFlags;
bbString bbDBType(t_mojo_graphics_TextureFlags*);
bbString bbDBValue(t_mojo_graphics_TextureFlags*);
struct t_mojo3d_graphics_AnimationClip;
#ifdef BB_NEWREFLECTION
bbTypeInfo *bbGetType( t_mojo3d_graphics_AnimationClip* const& );
#endif
bbString bbDBType(t_mojo3d_graphics_AnimationClip**);
bbString bbDBValue(t_mojo3d_graphics_AnimationClip**);
struct t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2;
bbString bbDBType(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2**);
bbString bbDBValue(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2**);
struct t_std_collections_Stack_1Tt_std_geom_Rect_1d_2;
bbString bbDBType(t_std_collections_Stack_1Tt_std_geom_Rect_1d_2**);
bbString bbDBValue(t_std_collections_Stack_1Tt_std_geom_Rect_1d_2**);


struct t_mojo3d_graphics_AnimSprite : public t_mojo3d_Sprite{
  typedef t_mojo3d_graphics_AnimSprite *bb_object_type;

  bbTypeInfo *typeof()const;
  const char *typeName()const{return "t_mojo3d_graphics_AnimSprite";}

  bbFunction<void()> m_onLastFrame{};
  bbFunction<void()> m_onFirstFrame{};
  bbInt m__0frame=bbInt(0);
  bbGCVar<t_std_collections_Stack_1Tt_std_geom_Rect_1d_2> m__0coordinates{};
  bbFloat m__0timeScale=1.0f;
  bbGCVar<t_mojo3d_graphics_AnimationClip> m__0anim{};
  bbGCVar<t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2> m__0animations{};
  bbInt m__0offset{};
  bbDouble m__0framerate=15.0;
  bbBool m__0firstFrame=true;
  bbBool m__0hasReachedEnd=false;
  bbBool m__0hasReachedStart=false;

  void init();

  void gcMark();
  void dbEmit();

  t_mojo3d_graphics_AnimSprite(bbString l_path,bbInt l_cellWidth,bbInt l_cellHeight,bbInt l_padding,bbInt l_border,t_mojo_graphics_TextureFlags l_flags);
  ~t_mojo3d_graphics_AnimSprite();

  void m_Update(bbDouble l_time);
  void m_LoadAnimations(bbString l_path);
  bbInt m_LastFrame();
  void m_FrameRate(bbDouble l_value);
  bbDouble m_FrameRate();
  void m_FrameOffset(bbInt l_number);
  bbInt m_FrameOffset();
  void m_Frame(bbInt l_number);
  bbInt m_Frame();
  bbInt m_FirstFrame();
  bbDouble m_Duration();
  void m_Animation(bbString l_name);
  bbString m_Animation();
  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2* m_AllAnimations();
  void m_AddAnimationClip(bbString l__0name,bbBool l__0loop,bbInt l_framerate,bbArray<bbInt> l__0frames);

  t_mojo3d_graphics_AnimSprite(){
    init();
  }
};
bbTypeInfo *bbGetType( t_mojo3d_graphics_AnimSprite* const& );
bbString bbDBType(t_mojo3d_graphics_AnimSprite**);
bbString bbDBValue(t_mojo3d_graphics_AnimSprite**);

// Class mojo3d.graphics.AnimationClip

#include "monkey/monkey.buildv1.1.08/macos_debug/include/monkey_types.h"


struct t_mojo3d_graphics_AnimationClip : public bbObject{
  typedef t_mojo3d_graphics_AnimationClip *bb_object_type;

  bbTypeInfo *typeof()const;
  const char *typeName()const{return "t_mojo3d_graphics_AnimationClip";}

  bbString m_name{};
  bbBool m_loop=true;
  bbArray<bbInt> m_frames{};
  bbFloat m_framerate=15.0f;

  void gcMark();
  void dbEmit();

  ~t_mojo3d_graphics_AnimationClip();

  bbInt m_FrameCount();

  t_mojo3d_graphics_AnimationClip(){
  }
};
bbTypeInfo *bbGetType( t_mojo3d_graphics_AnimationClip* const& );
bbString bbDBType(t_mojo3d_graphics_AnimationClip**);
bbString bbDBValue(t_mojo3d_graphics_AnimationClip**);

#endif
