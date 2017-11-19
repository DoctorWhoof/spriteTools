#include <bbmonkey.h>
#if BB_NEWREFLECTION
#include "_r.h"
#endif

#include "mojo/mojo.buildv1.1.08/macos_debug/include/mojo_app_2window.h"
#include "mojo/mojo.buildv1.1.08/macos_debug/include/mojo_graphics_2canvas.h"
#include "mojo/mojo.buildv1.1.08/macos_debug/include/mojo_graphics_2font.h"
#include "mojo/mojo.buildv1.1.08/macos_debug/include/mojo_graphics_2image.h"
#include "mojo/mojo.buildv1.1.08/macos_debug/include/mojo_graphics_2texture.h"
#include "mojo3d/mojo3d.buildv1.1.08/macos_debug/include/mojo3d_entities_2sprite.h"
#include "monkey/monkey.buildv1.1.08/macos_debug/include/monkey_types.h"
#include "test.buildv1.1.08/macos_debug/include/test__1source_2animsprite.h"
#include "test.buildv1.1.08/macos_debug/include/test__1source_2atlas.h"
#include "test.buildv1.1.08/macos_debug/include/test_std_collections_2map.h"
#include "test.buildv1.1.08/macos_debug/include/test_std_collections_2stack.h"
#include "test.buildv1.1.08/macos_debug/include/test_std_geom_2rect.h"
#include "test.buildv1.1.08/macos_debug/include/test_test.h"

#if BB_R_default || BB_R_default__
static struct mx2_test_test_typeinfo : public bbClassDecls{
  mx2_test_test_typeinfo():bbClassDecls(bbClassTypeInfo::getNamespace("default")){
  }
  bbDeclInfo **initDecls(){
    return bbMembers(bbConstDecl("smallFont",&g_default_smallFont),bbFunctionDecl<void>("Main",&bbMain));
  }
}_mx2_test_test_typeinfo;

struct rt_default_MyWindow : public bbClassTypeInfo{
  static rt_default_MyWindow instance;
  static struct decls_t : public bbClassDecls{
    decls_t():bbClassDecls(&instance){}
    bbDeclInfo **initDecls(){
      return bbMembers(bbCtorDecl<t_default_MyWindow>(),bbFieldDecl("srcImage",&t_default_MyWindow::m_srcImage),bbFieldDecl("imageWithGaps",&t_default_MyWindow::m_imageWithGaps),bbFieldDecl("atlas",&t_default_MyWindow::m_atlas),bbFieldDecl("scl",&t_default_MyWindow::m_scl),bbMethodDecl<t_default_MyWindow,void,t_mojo_graphics_Canvas*>("OnRender",&t_default_MyWindow::m_OnRender));
    }
  }decls;
  rt_default_MyWindow():bbClassTypeInfo("default.MyWindow","Class"){
  }
  bbTypeInfo *superType(){
    return bbGetType<t_mojo_app_Window*>();
  }
};
rt_default_MyWindow rt_default_MyWindow::instance;
rt_default_MyWindow::decls_t rt_default_MyWindow::decls;

bbTypeInfo *bbGetType( t_default_MyWindow* const& ){
  return &rt_default_MyWindow::instance;
}
bbTypeInfo *t_default_MyWindow::typeof()const{
  return &rt_default_MyWindow::instance;
}
#else
bbTypeInfo *bbGetType(t_default_MyWindow* const&){
  return &bbObjectTypeInfo::instance;
}
bbTypeInfo *t_default_MyWindow::typeof()const{
  return &bbObjectTypeInfo::instance;
}
#endif
#if BB_R_mojo_graphics || BB_R_mojo_graphics__ || BB_R_mojo__
static struct mx2_test__1source_2atlas_typeinfo : public bbClassDecls{
  mx2_test__1source_2atlas_typeinfo():bbClassDecls(bbClassTypeInfo::getNamespace("mojo.graphics")){
  }
  bbDeclInfo **initDecls(){
    return bbMembers(bbFunctionDecl<bbInt,bbInt>("NearestPow",&g_mojo_graphics_NearestPow));
  }
}_mx2_test__1source_2atlas_typeinfo;

struct rt_mojo_graphics_Atlas : public bbClassTypeInfo{
  static rt_mojo_graphics_Atlas instance;
  static struct decls_t : public bbClassDecls{
    decls_t():bbClassDecls(&instance){}
    bbDeclInfo **initDecls(){
      return bbMembers(bbCtorDecl<t_mojo_graphics_Atlas,bbString,bbInt,bbInt,bbInt,bbInt,t_mojo_graphics_TextureFlags>(),bbFieldDecl("texture",&t_mojo_graphics_Atlas::m_texture),bbFieldDecl("image",&t_mojo_graphics_Atlas::m_image),bbFieldDecl("cells",&t_mojo_graphics_Atlas::m_cells),bbFieldDecl("coordinates",&t_mojo_graphics_Atlas::m_coordinates),bbFieldDecl("rows",&t_mojo_graphics_Atlas::m_rows),bbFieldDecl("columns",&t_mojo_graphics_Atlas::m_columns),bbFieldDecl("cellWidth",&t_mojo_graphics_Atlas::m_cellWidth),bbFieldDecl("cellHeight",&t_mojo_graphics_Atlas::m_cellHeight),bbPropertyDecl<t_mojo_graphics_Atlas,bbInt>("CellHeight",&t_mojo_graphics_Atlas::m_CellHeight,0),bbPropertyDecl<t_mojo_graphics_Atlas,bbInt>("CellWidth",&t_mojo_graphics_Atlas::m_CellWidth,0),bbPropertyDecl<t_mojo_graphics_Atlas,bbArray<bbGCVar<t_mojo_graphics_Image>>>("Cells",&t_mojo_graphics_Atlas::m_Cells,0),bbPropertyDecl<t_mojo_graphics_Atlas,bbInt>("Columns",&t_mojo_graphics_Atlas::m_Columns,0),bbPropertyDecl<t_mojo_graphics_Atlas,bbArray<t_std_geom_Rect_1d>>("Coords",&t_mojo_graphics_Atlas::m_Coords,0),bbPropertyDecl<t_mojo_graphics_Atlas,t_mojo_graphics_Image*>("Image",&t_mojo_graphics_Atlas::m_Image,0),bbPropertyDecl<t_mojo_graphics_Atlas,bbInt>("Rows",&t_mojo_graphics_Atlas::m_Rows,0),bbPropertyDecl<t_mojo_graphics_Atlas,t_mojo_graphics_Texture*>("Texture",&t_mojo_graphics_Atlas::m_Texture,0));
    }
  }decls;
  rt_mojo_graphics_Atlas():bbClassTypeInfo("mojo.graphics.Atlas","Class"){
  }
  bbTypeInfo *superType(){
    return bbGetType<bbObject*>();
  }
};
rt_mojo_graphics_Atlas rt_mojo_graphics_Atlas::instance;
rt_mojo_graphics_Atlas::decls_t rt_mojo_graphics_Atlas::decls;

bbTypeInfo *bbGetType( t_mojo_graphics_Atlas* const& ){
  return &rt_mojo_graphics_Atlas::instance;
}
bbTypeInfo *t_mojo_graphics_Atlas::typeof()const{
  return &rt_mojo_graphics_Atlas::instance;
}
#else
bbTypeInfo *bbGetType(t_mojo_graphics_Atlas* const&){
  return &bbObjectTypeInfo::instance;
}
bbTypeInfo *t_mojo_graphics_Atlas::typeof()const{
  return &bbObjectTypeInfo::instance;
}
#endif
#if BB_R_mojo3d_graphics || BB_R_mojo3d_graphics__ || BB_R_mojo3d__

struct rt_mojo3d_graphics_AnimSprite : public bbClassTypeInfo{
  static rt_mojo3d_graphics_AnimSprite instance;
  static struct decls_t : public bbClassDecls{
    decls_t():bbClassDecls(&instance){}
    bbDeclInfo **initDecls(){
      return bbMembers(bbCtorDecl<t_mojo3d_graphics_AnimSprite,bbString,bbInt,bbInt,bbInt,bbInt,t_mojo_graphics_TextureFlags>(),bbFieldDecl("onLastFrame",&t_mojo3d_graphics_AnimSprite::m_onLastFrame),bbFieldDecl("onFirstFrame",&t_mojo3d_graphics_AnimSprite::m_onFirstFrame),bbFieldDecl("_frame",&t_mojo3d_graphics_AnimSprite::m__0frame),bbFieldDecl("_coordinates",&t_mojo3d_graphics_AnimSprite::m__0coordinates),bbFieldDecl("_timeScale",&t_mojo3d_graphics_AnimSprite::m__0timeScale),bbFieldDecl("_anim",&t_mojo3d_graphics_AnimSprite::m__0anim),bbFieldDecl("_animations",&t_mojo3d_graphics_AnimSprite::m__0animations),bbFieldDecl("_offset",&t_mojo3d_graphics_AnimSprite::m__0offset),bbFieldDecl("_framerate",&t_mojo3d_graphics_AnimSprite::m__0framerate),bbFieldDecl("_firstFrame",&t_mojo3d_graphics_AnimSprite::m__0firstFrame),bbFieldDecl("_hasReachedEnd",&t_mojo3d_graphics_AnimSprite::m__0hasReachedEnd),bbFieldDecl("_hasReachedStart",&t_mojo3d_graphics_AnimSprite::m__0hasReachedStart),bbMethodDecl<t_mojo3d_graphics_AnimSprite,void,bbDouble>("Update",&t_mojo3d_graphics_AnimSprite::m_Update),bbMethodDecl<t_mojo3d_graphics_AnimSprite,void,bbString>("LoadAnimations",&t_mojo3d_graphics_AnimSprite::m_LoadAnimations),bbMethodDecl<t_mojo3d_graphics_AnimSprite,void,bbString,bbBool,bbInt,bbArray<bbInt>>("AddAnimationClip",&t_mojo3d_graphics_AnimSprite::m_AddAnimationClip),bbPropertyDecl<t_mojo3d_graphics_AnimSprite,t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2*>("AllAnimations",&t_mojo3d_graphics_AnimSprite::m_AllAnimations,0),bbPropertyDecl<t_mojo3d_graphics_AnimSprite,bbString>("Animation",&t_mojo3d_graphics_AnimSprite::m_Animation,&t_mojo3d_graphics_AnimSprite::m_Animation),bbPropertyDecl<t_mojo3d_graphics_AnimSprite,bbDouble>("Duration",&t_mojo3d_graphics_AnimSprite::m_Duration,0),bbPropertyDecl<t_mojo3d_graphics_AnimSprite,bbInt>("FirstFrame",&t_mojo3d_graphics_AnimSprite::m_FirstFrame,0),bbPropertyDecl<t_mojo3d_graphics_AnimSprite,bbInt>("Frame",&t_mojo3d_graphics_AnimSprite::m_Frame,&t_mojo3d_graphics_AnimSprite::m_Frame),bbPropertyDecl<t_mojo3d_graphics_AnimSprite,bbInt>("FrameOffset",&t_mojo3d_graphics_AnimSprite::m_FrameOffset,&t_mojo3d_graphics_AnimSprite::m_FrameOffset),bbPropertyDecl<t_mojo3d_graphics_AnimSprite,bbDouble>("FrameRate",&t_mojo3d_graphics_AnimSprite::m_FrameRate,&t_mojo3d_graphics_AnimSprite::m_FrameRate),bbPropertyDecl<t_mojo3d_graphics_AnimSprite,bbInt>("LastFrame",&t_mojo3d_graphics_AnimSprite::m_LastFrame,0));
    }
  }decls;
  rt_mojo3d_graphics_AnimSprite():bbClassTypeInfo("mojo3d.graphics.AnimSprite","Class"){
  }
  bbTypeInfo *superType(){
    return bbGetType<t_mojo3d_Sprite*>();
  }
};
rt_mojo3d_graphics_AnimSprite rt_mojo3d_graphics_AnimSprite::instance;
rt_mojo3d_graphics_AnimSprite::decls_t rt_mojo3d_graphics_AnimSprite::decls;

bbTypeInfo *bbGetType( t_mojo3d_graphics_AnimSprite* const& ){
  return &rt_mojo3d_graphics_AnimSprite::instance;
}
bbTypeInfo *t_mojo3d_graphics_AnimSprite::typeof()const{
  return &rt_mojo3d_graphics_AnimSprite::instance;
}

struct rt_mojo3d_graphics_AnimationClip : public bbClassTypeInfo{
  static rt_mojo3d_graphics_AnimationClip instance;
  static struct decls_t : public bbClassDecls{
    decls_t():bbClassDecls(&instance){}
    bbDeclInfo **initDecls(){
      return bbMembers(bbCtorDecl<t_mojo3d_graphics_AnimationClip>(),bbFieldDecl("name",&t_mojo3d_graphics_AnimationClip::m_name),bbFieldDecl("loop",&t_mojo3d_graphics_AnimationClip::m_loop),bbFieldDecl("frames",&t_mojo3d_graphics_AnimationClip::m_frames),bbFieldDecl("framerate",&t_mojo3d_graphics_AnimationClip::m_framerate),bbPropertyDecl<t_mojo3d_graphics_AnimationClip,bbInt>("FrameCount",&t_mojo3d_graphics_AnimationClip::m_FrameCount,0));
    }
  }decls;
  rt_mojo3d_graphics_AnimationClip():bbClassTypeInfo("mojo3d.graphics.AnimationClip","Class"){
  }
  bbTypeInfo *superType(){
    return bbGetType<bbObject*>();
  }
};
rt_mojo3d_graphics_AnimationClip rt_mojo3d_graphics_AnimationClip::instance;
rt_mojo3d_graphics_AnimationClip::decls_t rt_mojo3d_graphics_AnimationClip::decls;

bbTypeInfo *bbGetType( t_mojo3d_graphics_AnimationClip* const& ){
  return &rt_mojo3d_graphics_AnimationClip::instance;
}
bbTypeInfo *t_mojo3d_graphics_AnimationClip::typeof()const{
  return &rt_mojo3d_graphics_AnimationClip::instance;
}
#else
bbTypeInfo *bbGetType(t_mojo3d_graphics_AnimSprite* const&){
  return &bbObjectTypeInfo::instance;
}
bbTypeInfo *t_mojo3d_graphics_AnimSprite::typeof()const{
  return &bbObjectTypeInfo::instance;
}
bbTypeInfo *bbGetType(t_mojo3d_graphics_AnimationClip* const&){
  return &bbObjectTypeInfo::instance;
}
bbTypeInfo *t_mojo3d_graphics_AnimationClip::typeof()const{
  return &bbObjectTypeInfo::instance;
}
#endif
#if BB_R_monkey_math || BB_R_monkey_math__ || BB_R_monkey__
#else
#endif
#if BB_R_std_collections || BB_R_std_collections__ || BB_R_std__
#else
#endif
#if BB_R_std_geom || BB_R_std_geom__ || BB_R_std__
#else
#endif