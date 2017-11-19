
#ifndef MX2_TEST__1SOURCE_2ATLAS_H
#define MX2_TEST__1SOURCE_2ATLAS_H

#include <bbmonkey.h>

struct t_mojo_graphics_Atlas;


extern bbInt g_mojo_graphics_NearestPow(bbInt l_number);

// Class mojo.graphics.Atlas

#include "monkey/monkey.buildv1.1.08/macos_debug/include/monkey_types.h"
#include "test.buildv1.1.08/macos_debug/include/test_std_geom_2rect.h"

struct t_mojo_graphics_Image;
#ifdef BB_NEWREFLECTION
bbTypeInfo *bbGetType( t_mojo_graphics_Image* const& );
#endif
bbString bbDBType(t_mojo_graphics_Image**);
bbString bbDBValue(t_mojo_graphics_Image**);
struct t_mojo_graphics_Texture;
#ifdef BB_NEWREFLECTION
bbTypeInfo *bbGetType( t_mojo_graphics_Texture* const& );
#endif
bbString bbDBType(t_mojo_graphics_Texture**);
bbString bbDBValue(t_mojo_graphics_Texture**);
enum class t_mojo_graphics_TextureFlags;
bbString bbDBType(t_mojo_graphics_TextureFlags*);
bbString bbDBValue(t_mojo_graphics_TextureFlags*);
struct t_std_collections_Stack_1Tt_std_geom_Rect_1d_2;
bbString bbDBType(t_std_collections_Stack_1Tt_std_geom_Rect_1d_2**);
bbString bbDBValue(t_std_collections_Stack_1Tt_std_geom_Rect_1d_2**);


struct t_mojo_graphics_Atlas : public bbObject{
  typedef t_mojo_graphics_Atlas *bb_object_type;

  bbTypeInfo *typeof()const;
  const char *typeName()const{return "t_mojo_graphics_Atlas";}

  bbGCVar<t_mojo_graphics_Texture> m_texture{};
  bbGCVar<t_mojo_graphics_Image> m_image{};
  bbArray<bbGCVar<t_mojo_graphics_Image>> m_cells{};
  bbGCVar<t_std_collections_Stack_1Tt_std_geom_Rect_1d_2> m_coordinates{};
  bbInt m_rows{};
  bbInt m_columns{};
  bbInt m_cellWidth{};
  bbInt m_cellHeight{};

  void init();

  void gcMark();
  void dbEmit();

  t_mojo_graphics_Atlas(bbString l_path,bbInt l__0cellWidth,bbInt l__0cellHeight,bbInt l__0padding,bbInt l__0border,t_mojo_graphics_TextureFlags l__0flags);
  ~t_mojo_graphics_Atlas();

  t_mojo_graphics_Texture* m_Texture();
  bbInt m_Rows();
  t_mojo_graphics_Image* m_Image();
  bbArray<t_std_geom_Rect_1d> m_Coords();
  bbInt m_Columns();
  bbArray<bbGCVar<t_mojo_graphics_Image>> m_Cells();
  bbInt m_CellWidth();
  bbInt m_CellHeight();

  t_mojo_graphics_Atlas(){
    init();
  }
};
bbTypeInfo *bbGetType( t_mojo_graphics_Atlas* const& );
bbString bbDBType(t_mojo_graphics_Atlas**);
bbString bbDBValue(t_mojo_graphics_Atlas**);

#endif
