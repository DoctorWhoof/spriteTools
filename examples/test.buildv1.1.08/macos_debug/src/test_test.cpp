
#include "test.buildv1.1.08/macos_debug/include/test_test.h"

#include "mojo/mojo.buildv1.1.08/macos_debug/include/mojo_app_2app.h"
#include "mojo/mojo.buildv1.1.08/macos_debug/include/mojo_graphics_2canvas.h"
#include "mojo/mojo.buildv1.1.08/macos_debug/include/mojo_graphics_2font.h"
#include "mojo/mojo.buildv1.1.08/macos_debug/include/mojo_graphics_2image.h"
#include "std/std.buildv1.1.08/macos_debug/include/std_geom_2vec2.h"
#include "test.buildv1.1.08/macos_debug/include/test__1source_2atlas.h"
#include "test.buildv1.1.08/macos_debug/include/test_test.h"

enum class t_mojo_app_WindowFlags;
bbString bbDBType(t_mojo_app_WindowFlags*);
bbString bbDBValue(t_mojo_app_WindowFlags*);
struct t_mojo_graphics_Shader;
#ifdef BB_NEWREFLECTION
bbTypeInfo *bbGetType( t_mojo_graphics_Shader* const& );
#endif
bbString bbDBType(t_mojo_graphics_Shader**);
bbString bbDBValue(t_mojo_graphics_Shader**);
enum class t_mojo_graphics_TextureFlags;
bbString bbDBType(t_mojo_graphics_TextureFlags*);
bbString bbDBValue(t_mojo_graphics_TextureFlags*);
struct t_std_collections_Map_1ss;
bbString bbDBType(t_std_collections_Map_1ss**);
bbString bbDBValue(t_std_collections_Map_1ss**);

bbGCVar<t_mojo_graphics_Font> g_default_smallFont;

void bbMain(){
  static bool done;
  if(done) return;
  done=true;
  void mx2_monkey_main();mx2_monkey_main();
  void mx2_mojo3d_main();mx2_mojo3d_main();
  void mx2_test_monkey_math_init_f();mx2_test_monkey_math_init_f();
  void mx2_test_std_collections_2map_init_f();mx2_test_std_collections_2map_init_f();
  void mx2_test_std_collections_2deque_init_f();mx2_test_std_collections_2deque_init_f();
  void mx2_test_std_collections_2list_init_f();mx2_test_std_collections_2list_init_f();
  void mx2_test_std_collections_2stack_init_f();mx2_test_std_collections_2stack_init_f();
  void mx2_test_std_collections_2container_init_f();mx2_test_std_collections_2container_init_f();
  void mx2_test_std_geom_2rect_init_f();mx2_test_std_geom_2rect_init_f();
  void mx2_test__1source_2animsprite_init_f();mx2_test__1source_2animsprite_init_f();
  void mx2_test__1source_2atlas_init_f();mx2_test__1source_2atlas_init_f();
  void mx2_test__1spritetools_init_f();mx2_test__1spritetools_init_f();
  void mx2_test_test_init_f();mx2_test_test_init_f();
  bbDBFrame db_f{"Main:Void()","/Users/leo/GoogleDrive/Code/Monkey2/spriteTools/examples/test.monkey2"};
  bbDBStmt(28673);
  bbGCNew<t_mojo_app_AppInstance>(((t_std_collections_Map_1ss*)0));
  bbDBStmt(32769);
  bbGCNew<t_default_MyWindow>();
  bbDBStmt(36865);
  g_mojo_app_App.get()->m_Run();
}

void t_default_MyWindow::gcMark(){
  t_mojo_app_Window::gcMark();
  bbGCMark(m_srcImage);
  bbGCMark(m_imageWithGaps);
  bbGCMark(m_atlas);
}

void t_default_MyWindow::dbEmit(){
  t_mojo_app_Window::dbEmit();
  puts( "[default.MyWindow]");
  bbDBEmit("srcImage",&m_srcImage);
  bbDBEmit("imageWithGaps",&m_imageWithGaps);
  bbDBEmit("atlas",&m_atlas);
  bbDBEmit("scl",&m_scl);
}

t_default_MyWindow::t_default_MyWindow():t_mojo_app_Window(bbString(L"Sprite Test",11),400,600,t_mojo_app_WindowFlags(8)){
  bbDBFrame db_f{"new:Void()","/Users/leo/GoogleDrive/Code/Monkey2/spriteTools/examples/test.monkey2"};
  t_default_MyWindow*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(102402);
  this->m_srcImage=g_mojo_graphics_Image_Load(bbString(L"asset::pixelPattern.png",23),((t_mojo_graphics_Shader*)0),t_mojo_graphics_TextureFlags(0));
  bbDBStmt(106498);
  this->m_atlas=bbGCNew<t_mojo_graphics_Atlas>(bbString(L"asset::pixelPattern.png",23),16,16,bbInt(0),bbInt(0),t_mojo_graphics_TextureFlags(0));
}
t_default_MyWindow::~t_default_MyWindow(){
}

void t_default_MyWindow::m_OnRender(t_mojo_graphics_Canvas* l_canvas){
  struct f0_t : public bbGCFrame{
    t_mojo_graphics_Image* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  bbDBFrame db_f{"OnRender:Void(canvas:mojo.graphics.Canvas)","/Users/leo/GoogleDrive/Code/Monkey2/spriteTools/examples/test.monkey2"};
  t_default_MyWindow*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("canvas",&l_canvas);
  bbDBStmt(122882);
  g_mojo_app_App.get()->m_RequestRender();
  bbDBStmt(126978);
  l_canvas->m_Font(g_default_smallFont.get());
  bbDBStmt(135170);
  l_canvas->m_DrawText(bbString(L"Source image",12),(bbFloat(this->m_Width())*0.10000000000000001f),(bbFloat(this->m_Height())*0.050000000000000003f),0.0f,0.0f);
  bbDBStmt(139266);
  l_canvas->m_DrawImage(this->m_srcImage.get(),(bbFloat(this->m_Width())*0.10000000000000001f),(bbFloat(this->m_Height())*0.070000000000000007f),0.0f,2.0f,2.0f);
  bbDBStmt(147458);
  l_canvas->m_DrawText(bbString(L"Atlas with tile gaps filled",27),(bbFloat(this->m_Width())*0.10000000000000001f),(bbFloat(this->m_Height())*0.34999999999999998f),0.0f,0.0f);
  bbDBStmt(151554);
  l_canvas->m_DrawImage(f0.t0=this->m_atlas.get()->m_Image(),(bbFloat(this->m_Width())*0.10000000000000001f),(bbFloat(this->m_Height())*0.37f),0.0f,2.0f,2.0f);
  bbDBStmt(159746);
  l_canvas->m_DrawText(bbString(L"Resulting tiles with indices",28),(bbFloat(this->m_Width())*0.10000000000000001f),(bbFloat(this->m_Height())*0.68000000000000005f),0.0f,0.0f);
  bbDBStmt(163842);
  {
    bbDBLoop db_loop;
    bbInt l_x=bbInt(0);
    bbDBLocal("x",&l_x);
    for(;(l_x<this->m_atlas.get()->m_Columns());l_x+=1){
      bbDBBlock db_blk;
      bbDBStmt(167939);
      {
        bbDBLoop db_loop;
        bbInt l_y=bbInt(0);
        bbDBLocal("y",&l_y);
        for(;(l_y<this->m_atlas.get()->m_Rows());l_y+=1){
          struct f4_t : public bbGCFrame{
            t_mojo_graphics_Image* t0{};
            void gcMark(){
              bbGCMark(t0);
            }
          }f4{};
          bbDBBlock db_blk;
          bbDBStmt(172042);
          bbInt l_n=(l_x+(this->m_atlas.get()->m_Columns()*l_y));
          bbDBLocal("n",&l_n);
          bbDBStmt(176138);
          t_std_geom_Vec2_1i l_pos=t_std_geom_Vec2_1i{(((this->m_atlas.get()->m_CellWidth()*l_x)*this->m_scl)+(l_x*this->m_scl)),(((this->m_atlas.get()->m_CellHeight()*l_y)*this->m_scl)+(l_y*this->m_scl))};
          bbDBLocal("pos",&l_pos);
          bbDBStmt(180228);
          l_canvas->m_DrawImage(f4.t0=this->m_atlas.get()->m_Cells()[l_n].get(),(bbFloat(l_pos.m_X())+(bbFloat(this->m_Width())*0.10000000000000001f)),(bbFloat(l_pos.m_Y())+(bbFloat(this->m_Height())*0.69999999999999996f)),0.0f,bbFloat(this->m_scl),bbFloat(this->m_scl));
          bbDBStmt(184324);
          l_canvas->m_DrawText(bbString(l_n),(bbFloat(l_pos.m_X())+(bbFloat(this->m_Width())*0.10000000000000001f)),(bbFloat(l_pos.m_Y())+(bbFloat(this->m_Height())*0.69999999999999996f)),0.0f,0.0f);
        }
      }
    }
  }
}
bbString bbDBType(t_default_MyWindow**){
  return "default.MyWindow";
}
bbString bbDBValue(t_default_MyWindow**p){
  return bbDBObjectValue(*p);
}

void mx2_test_test_init_f(){
  g_default_smallFont=g_mojo_graphics_Font_Load(bbString(L"font::DejaVuSans.ttf",20),12.0f,((t_mojo_graphics_Shader*)0));
}

struct mx2_test_test_roots_t : bbGCRoot{
  void gcMark(){
    bbGCMark(g_default_smallFont.get());
  }
}mx2_test_test_roots;
