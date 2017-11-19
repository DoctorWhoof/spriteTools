
#include "test.buildv1.1.08/macos_debug/include/test__1source_2atlas.h"

#include "mojo/mojo.buildv1.1.08/macos_debug/include/mojo_graphics_2image.h"
#include "mojo/mojo.buildv1.1.08/macos_debug/include/mojo_graphics_2texture.h"
#include "monkey/monkey.buildv1.1.08/macos_debug/include/monkey_debug.h"
#include "monkey/monkey.buildv1.1.08/macos_debug/include/monkey_math.h"
#include "std/std.buildv1.1.08/macos_debug/include/std_geom_2rect.h"
#include "std/std.buildv1.1.08/macos_debug/include/std_graphics_2pixmap.h"
#include "test.buildv1.1.08/macos_debug/include/test__1source_2atlas.h"
#include "test.buildv1.1.08/macos_debug/include/test_std_collections_2stack.h"
#include "test.buildv1.1.08/macos_debug/include/test_std_geom_2rect.h"

struct t_mojo_graphics_Shader;
#ifdef BB_NEWREFLECTION
bbTypeInfo *bbGetType( t_mojo_graphics_Shader* const& );
#endif
bbString bbDBType(t_mojo_graphics_Shader**);
bbString bbDBValue(t_mojo_graphics_Shader**);
enum class t_std_graphics_PixelFormat;
bbString bbDBType(t_std_graphics_PixelFormat*);
bbString bbDBValue(t_std_graphics_PixelFormat*);

bbInt g_mojo_graphics_NearestPow(bbInt l_number){
  bbDBFrame db_f{"NearestPow:monkey.types.Int(number:monkey.types.Int)","/Users/leo/GoogleDrive/Code/Monkey2/spriteTools/source/atlas.monkey2"};
  bbDBLocal("number",&l_number);
  bbDBStmt(548865);
  return bbInt(std::pow(2.0,std::ceil((std::log(bbDouble(l_number))/std::log(2.0)))));
}

void t_mojo_graphics_Atlas::init(){
  m_coordinates=bbGCNew<t_std_collections_Stack_1Tt_std_geom_Rect_1d_2>();
}

void t_mojo_graphics_Atlas::gcMark(){
  bbGCMark(m_texture);
  bbGCMark(m_image);
  bbGCMark(m_cells);
  bbGCMark(m_coordinates);
}

void t_mojo_graphics_Atlas::dbEmit(){
  puts( "[mojo.graphics.Atlas]");
  bbDBEmit("texture",&m_texture);
  bbDBEmit("image",&m_image);
  bbDBEmit("cells",&m_cells);
  bbDBEmit("coordinates",&m_coordinates);
  bbDBEmit("rows",&m_rows);
  bbDBEmit("columns",&m_columns);
  bbDBEmit("cellWidth",&m_cellWidth);
  bbDBEmit("cellHeight",&m_cellHeight);
}

t_mojo_graphics_Atlas::t_mojo_graphics_Atlas(bbString l_path,bbInt l__0cellWidth,bbInt l__0cellHeight,bbInt l__0padding,bbInt l__0border,t_mojo_graphics_TextureFlags l__0flags){
  init();
  struct f0_t : public bbGCFrame{
    t_std_graphics_Pixmap* l_pix{};
    t_std_graphics_Pixmap* l_srcPix{};
    void gcMark(){
      bbGCMark(l_pix);
      bbGCMark(l_srcPix);
    }
  }f0{};
  bbDBFrame db_f{"new:Void(path:monkey.types.String,_cellWidth:monkey.types.Int,_cellHeight:monkey.types.Int,_padding:monkey.types.Int,_border:monkey.types.Int,_flags:mojo.graphics.TextureFlags)","/Users/leo/GoogleDrive/Code/Monkey2/spriteTools/source/atlas.monkey2"};
  t_mojo_graphics_Atlas*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("path",&l_path);
  bbDBLocal("_cellWidth",&l__0cellWidth);
  bbDBLocal("_cellHeight",&l__0cellHeight);
  bbDBLocal("_padding",&l__0padding);
  bbDBLocal("_border",&l__0border);
  bbDBLocal("_flags",&l__0flags);
  bbDBStmt(311304);
  f0.l_srcPix=g_std_graphics_Pixmap_Load(l_path,t_std_graphics_PixelFormat(0),false);
  bbDBLocal("srcPix",&f0.l_srcPix);
  bbDBStmt(315394);
  bbAssert(bbBool(f0.l_srcPix),((bbString(L"\n\nAtlas: Failed to load ",24)+l_path)+bbString(L"\n\n",2)));
  bbDBStmt(327682);
  this->m_cellWidth=l__0cellWidth;
  bbDBStmt(331778);
  this->m_cellHeight=l__0cellHeight;
  bbDBStmt(335880);
  bbInt l_padding=l__0padding;
  bbDBLocal("padding",&l_padding);
  bbDBStmt(339976);
  bbInt l_border=l__0border;
  bbDBLocal("border",&l_border);
  bbDBStmt(344072);
  bbInt l_paddedWidth=(this->m_cellWidth+(l_padding*2));
  bbDBLocal("paddedWidth",&l_paddedWidth);
  bbDBStmt(348168);
  bbInt l_paddedHeight=(this->m_cellHeight+(l_padding*2));
  bbDBLocal("paddedHeight",&l_paddedHeight);
  bbDBStmt(352258);
  this->m_rows=(((f0.l_srcPix->m_Height()-l_border)-l_border)/l_paddedHeight);
  bbDBStmt(356354);
  this->m_columns=(((f0.l_srcPix->m_Width()-l_border)-l_border)/l_paddedWidth);
  bbDBStmt(368648);
  bbInt l_pCellWidth=(this->m_cellWidth+2);
  bbDBLocal("pCellWidth",&l_pCellWidth);
  bbDBStmt(372744);
  bbInt l_pCellHeight=(this->m_cellHeight+2);
  bbDBLocal("pCellHeight",&l_pCellHeight);
  bbDBStmt(376840);
  bbInt l_pWidth=g_mojo_graphics_NearestPow((l_pCellWidth*this->m_columns));
  bbDBLocal("pWidth",&l_pWidth);
  bbDBStmt(380936);
  bbInt l_pHeight=g_mojo_graphics_NearestPow((l_pCellHeight*this->m_rows));
  bbDBLocal("pHeight",&l_pHeight);
  bbDBStmt(385032);
  f0.l_pix=bbGCNew<t_std_graphics_Pixmap>(l_pWidth,l_pHeight,t_std_graphics_PixelFormat(5));
  bbDBLocal("pix",&f0.l_pix);
  bbDBStmt(389122);
  bb_print(((bbString(l_pWidth)+bbString(L",",1))+bbString(l_pHeight)));
  bbDBStmt(401416);
  bbInt l_numFrames=(this->m_rows*this->m_columns);
  bbDBLocal("numFrames",&l_numFrames);
  bbDBStmt(405512);
  bbDouble l_w=bbDouble(f0.l_srcPix->m_Width());
  bbDBLocal("w",&l_w);
  bbDBStmt(409608);
  bbDouble l_h=bbDouble(f0.l_srcPix->m_Height());
  bbDBLocal("h",&l_h);
  bbDBStmt(417794);
  {
    bbDBLoop db_loop;
    bbInt l_i=bbInt(0);
    bbDBLocal("i",&l_i);
    for(;(l_i<l_numFrames);l_i+=1){
      struct f2_t : public bbGCFrame{
        t_std_graphics_Pixmap* l_window{};
        t_std_geom_Rect_1f t0{};
        void gcMark(){
          bbGCMark(l_window);
          bbGCMark(t0);
        }
      }f2{};
      bbDBBlock db_blk;
      bbDBStmt(421897);
      bbInt l_col=(l_i%this->m_columns);
      bbDBLocal("col",&l_col);
      bbDBStmt(430089);
      bbDouble l_x=bbDouble((((l_col*l_paddedWidth)+l_padding)+l_border));
      bbDBLocal("x",&l_x);
      bbDBStmt(434185);
      bbDouble l_y=bbDouble(((((l_i/this->m_columns)*l_paddedHeight)+l_padding)+l_border));
      bbDBLocal("y",&l_y);
      bbDBStmt(442377);
      bbDouble l_xPix=bbDouble(((l_col*l_pCellWidth)+1));
      bbDBLocal("xPix",&l_xPix);
      bbDBStmt(446473);
      bbDouble l_yPix=bbDouble((((l_i/this->m_columns)*l_pCellHeight)+1));
      bbDBLocal("yPix",&l_yPix);
      bbDBStmt(454665);
      f2.l_window=f0.l_srcPix->m_Window(bbInt(l_x),bbInt(l_y),this->m_cellWidth,this->m_cellHeight);
      bbDBLocal("window",&f2.l_window);
      bbDBStmt(458755);
      f0.l_pix->m_Paste(f2.l_window,bbInt((l_xPix-1.0)),bbInt(l_yPix));
      bbDBStmt(462851);
      f0.l_pix->m_Paste(f2.l_window,bbInt((l_xPix+1.0)),bbInt(l_yPix));
      bbDBStmt(466947);
      f0.l_pix->m_Paste(f2.l_window,bbInt(l_xPix),bbInt((l_yPix-1.0)));
      bbDBStmt(471043);
      f0.l_pix->m_Paste(f2.l_window,bbInt(l_xPix),bbInt((l_yPix+1.0)));
      bbDBStmt(479235);
      f0.l_pix->m_Paste(f2.l_window,bbInt(l_xPix),bbInt(l_yPix));
      bbDBStmt(487427);
      this->m_coordinates.get()->m_Push(g_std_geom_Rect_1f_to_Tt_std_geom_Rect_1d_2_1d((f2.t0=t_std_geom_Rect_1f{bbFloat((l_xPix/bbDouble(l_pWidth))),bbFloat((l_yPix/bbDouble(l_pHeight))),bbFloat(((l_xPix+bbDouble(this->m_cellWidth))/bbDouble(l_pWidth))),bbFloat(((l_yPix+bbDouble(this->m_cellHeight))/bbDouble(l_pHeight)))})));
    }
  }
  bbDBStmt(499714);
  this->m_image=bbGCNew<t_mojo_graphics_Image>(l_pWidth,l_pHeight,t_std_graphics_PixelFormat(5),l__0flags,((t_mojo_graphics_Shader*)0));
  bbDBStmt(503810);
  this->m_texture=this->m_image.get()->m_Texture();
  bbDBStmt(507906);
  this->m_texture.get()->m_PastePixmap(f0.l_pix,bbInt(0),bbInt(0));
  bbDBStmt(516098);
  f0.l_pix->m_Discard();
  bbDBStmt(520194);
  f0.l_srcPix->m_Discard();
}
t_mojo_graphics_Atlas::~t_mojo_graphics_Atlas(){
}

t_mojo_graphics_Texture* t_mojo_graphics_Atlas::m_Texture(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Texture:mojo.graphics.Texture()","/Users/leo/GoogleDrive/Code/Monkey2/spriteTools/source/atlas.monkey2"};
  t_mojo_graphics_Atlas*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(176130);
  return this->m_image.get()->m_Texture();
}

bbInt t_mojo_graphics_Atlas::m_Rows(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Rows:monkey.types.Int()","/Users/leo/GoogleDrive/Code/Monkey2/spriteTools/source/atlas.monkey2"};
  t_mojo_graphics_Atlas*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(237570);
  return this->m_rows;
}

t_mojo_graphics_Image* t_mojo_graphics_Atlas::m_Image(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Image:mojo.graphics.Image()","/Users/leo/GoogleDrive/Code/Monkey2/spriteTools/source/atlas.monkey2"};
  t_mojo_graphics_Atlas*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(155650);
  return this->m_image.get();
}

bbArray<t_std_geom_Rect_1d> t_mojo_graphics_Atlas::m_Coords(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Coords:std.geom.Rect<monkey.types.Double>[]()","/Users/leo/GoogleDrive/Code/Monkey2/spriteTools/source/atlas.monkey2"};
  t_mojo_graphics_Atlas*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(196610);
  return this->m_coordinates.get()->m_ToArray();
}

bbInt t_mojo_graphics_Atlas::m_Columns(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Columns:monkey.types.Int()","/Users/leo/GoogleDrive/Code/Monkey2/spriteTools/source/atlas.monkey2"};
  t_mojo_graphics_Atlas*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(217090);
  return this->m_columns;
}

bbArray<bbGCVar<t_mojo_graphics_Image>> t_mojo_graphics_Atlas::m_Cells(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Cells:mojo.graphics.Image[]()","/Users/leo/GoogleDrive/Code/Monkey2/spriteTools/source/atlas.monkey2"};
  t_mojo_graphics_Atlas*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(102402);
  if(!bbBool(this->m_cells)){
    struct f1_t : public bbGCFrame{
      t_std_collections_Stack_1Tt_mojo_graphics_Image_2* l_stack{};
      void gcMark(){
        bbGCMark(l_stack);
      }
    }f1{};
    bbDBBlock db_blk;
    bbDBStmt(106505);
    f1.l_stack=bbGCNew<t_std_collections_Stack_1Tt_mojo_graphics_Image_2>();
    bbDBLocal("stack",&f1.l_stack);
    bbDBStmt(110595);
    {
      bbDBLoop db_loop;
      bbInt l_n=bbInt(0);
      bbDBLocal("n",&l_n);
      for(;(l_n<this->m_coordinates.get()->m_Length());l_n+=1){
        struct f3_t : public bbGCFrame{
          t_mojo_graphics_Image* t0{};
          void gcMark(){
            bbGCMark(t0);
          }
        }f3{};
        bbDBBlock db_blk;
        bbDBStmt(114698);
        t_std_geom_Rect_1d l_c=this->m_coordinates.get()->m__idx(l_n);
        bbDBLocal("c",&l_c);
        bbDBStmt(118788);
        f1.l_stack->m_Push(f3.t0=bbGCNew<t_mojo_graphics_Image>(this->m_texture.get(),t_std_geom_Rect_1i{bbInt((l_c.m_Left()*bbDouble(this->m_texture.get()->m_Width()))),bbInt((l_c.m_Top()*bbDouble(this->m_texture.get()->m_Height()))),bbInt((l_c.m_Right()*bbDouble(this->m_texture.get()->m_Width()))),bbInt((l_c.m_Bottom()*bbDouble(this->m_texture.get()->m_Height())))},((t_mojo_graphics_Shader*)0)));
      }
    }
    bbDBStmt(126979);
    this->m_cells=f1.l_stack->m_ToArray();
  }
  bbDBStmt(135170);
  return this->m_cells;
}

bbInt t_mojo_graphics_Atlas::m_CellWidth(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"CellWidth:monkey.types.Int()","/Users/leo/GoogleDrive/Code/Monkey2/spriteTools/source/atlas.monkey2"};
  t_mojo_graphics_Atlas*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(258050);
  return this->m_cellWidth;
}

bbInt t_mojo_graphics_Atlas::m_CellHeight(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"CellHeight:monkey.types.Int()","/Users/leo/GoogleDrive/Code/Monkey2/spriteTools/source/atlas.monkey2"};
  t_mojo_graphics_Atlas*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(278530);
  return this->m_cellHeight;
}
bbString bbDBType(t_mojo_graphics_Atlas**){
  return "mojo.graphics.Atlas";
}
bbString bbDBValue(t_mojo_graphics_Atlas**p){
  return bbDBObjectValue(*p);
}

void mx2_test__1source_2atlas_init_f(){
}
