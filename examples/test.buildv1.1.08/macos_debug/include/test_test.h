
#ifndef MX2_TEST_TEST_H
#define MX2_TEST_TEST_H

#include <bbmonkey.h>

struct t_default_MyWindow;

struct t_mojo_graphics_Font;
#ifdef BB_NEWREFLECTION
bbTypeInfo *bbGetType( t_mojo_graphics_Font* const& );
#endif
bbString bbDBType(t_mojo_graphics_Font**);
bbString bbDBValue(t_mojo_graphics_Font**);


extern bbGCVar<t_mojo_graphics_Font> g_default_smallFont;

extern void bbMain();

// Class default.MyWindow

#include "mojo/mojo.buildv1.1.08/macos_debug/include/mojo_app_2window.h"

struct t_mojo_graphics_Atlas;
#ifdef BB_NEWREFLECTION
bbTypeInfo *bbGetType( t_mojo_graphics_Atlas* const& );
#endif
bbString bbDBType(t_mojo_graphics_Atlas**);
bbString bbDBValue(t_mojo_graphics_Atlas**);
struct t_mojo_graphics_Canvas;
#ifdef BB_NEWREFLECTION
bbTypeInfo *bbGetType( t_mojo_graphics_Canvas* const& );
#endif
bbString bbDBType(t_mojo_graphics_Canvas**);
bbString bbDBValue(t_mojo_graphics_Canvas**);
struct t_mojo_graphics_Image;
#ifdef BB_NEWREFLECTION
bbTypeInfo *bbGetType( t_mojo_graphics_Image* const& );
#endif
bbString bbDBType(t_mojo_graphics_Image**);
bbString bbDBValue(t_mojo_graphics_Image**);


struct t_default_MyWindow : public t_mojo_app_Window{
  typedef t_default_MyWindow *bb_object_type;

  bbTypeInfo *typeof()const;
  const char *typeName()const{return "t_default_MyWindow";}

  bbGCVar<t_mojo_graphics_Image> m_srcImage{};
  bbGCVar<t_mojo_graphics_Image> m_imageWithGaps{};
  bbGCVar<t_mojo_graphics_Atlas> m_atlas{};
  bbInt m_scl=2;

  void gcMark();
  void dbEmit();

  t_default_MyWindow();
  ~t_default_MyWindow();

  void m_OnRender(t_mojo_graphics_Canvas* l_canvas);
};
bbTypeInfo *bbGetType( t_default_MyWindow* const& );
bbString bbDBType(t_default_MyWindow**);
bbString bbDBValue(t_default_MyWindow**);

#endif
