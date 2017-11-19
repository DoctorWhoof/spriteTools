
#ifndef MX2_TEST_STD_COLLECTIONS_2CONTAINER_H
#define MX2_TEST_STD_COLLECTIONS_2CONTAINER_H

#include <bbmonkey.h>
#include "std/std.buildv1.1.08/macos_debug/include/std_collections_2container.h"

struct t_std_collections_IContainer_1Tt_std_geom_Rect_1d_2;
struct t_std_collections_IIterator_1Tt_std_geom_Rect_1d_2;
struct t_std_collections_IContainer_1Tt_mojo_graphics_Image_2;
struct t_std_collections_IIterator_1Tt_mojo_graphics_Image_2;


// Class std.collections.IContainer<std.geom.Rect<monkey.types.Double>>


struct t_std_collections_IContainer_1Tt_std_geom_Rect_1d_2 : public virtual bbInterface{
  typedef t_std_collections_IContainer_1Tt_std_geom_Rect_1d_2 *bb_object_type;
  const char *typeName()const{return "t_std_collections_IContainer_1Tt_std_geom_Rect_1d_2";}

  ~t_std_collections_IContainer_1Tt_std_geom_Rect_1d_2();

};
bbString bbDBType(t_std_collections_IContainer_1Tt_std_geom_Rect_1d_2**);
bbString bbDBValue(t_std_collections_IContainer_1Tt_std_geom_Rect_1d_2**);

// Class std.collections.IIterator<std.geom.Rect<monkey.types.Double>>


struct t_std_collections_IIterator_1Tt_std_geom_Rect_1d_2 : public virtual bbInterface{
  typedef t_std_collections_IIterator_1Tt_std_geom_Rect_1d_2 *bb_object_type;
  const char *typeName()const{return "t_std_collections_IIterator_1Tt_std_geom_Rect_1d_2";}

  ~t_std_collections_IIterator_1Tt_std_geom_Rect_1d_2();

};
bbString bbDBType(t_std_collections_IIterator_1Tt_std_geom_Rect_1d_2**);
bbString bbDBValue(t_std_collections_IIterator_1Tt_std_geom_Rect_1d_2**);

// Class std.collections.IContainer<mojo.graphics.Image>


struct t_std_collections_IContainer_1Tt_mojo_graphics_Image_2 : public virtual bbInterface{
  typedef t_std_collections_IContainer_1Tt_mojo_graphics_Image_2 *bb_object_type;
  const char *typeName()const{return "t_std_collections_IContainer_1Tt_mojo_graphics_Image_2";}

  ~t_std_collections_IContainer_1Tt_mojo_graphics_Image_2();

};
bbString bbDBType(t_std_collections_IContainer_1Tt_mojo_graphics_Image_2**);
bbString bbDBValue(t_std_collections_IContainer_1Tt_mojo_graphics_Image_2**);

// Class std.collections.IIterator<mojo.graphics.Image>


struct t_std_collections_IIterator_1Tt_mojo_graphics_Image_2 : public virtual bbInterface{
  typedef t_std_collections_IIterator_1Tt_mojo_graphics_Image_2 *bb_object_type;
  const char *typeName()const{return "t_std_collections_IIterator_1Tt_mojo_graphics_Image_2";}

  ~t_std_collections_IIterator_1Tt_mojo_graphics_Image_2();

};
bbString bbDBType(t_std_collections_IIterator_1Tt_mojo_graphics_Image_2**);
bbString bbDBValue(t_std_collections_IIterator_1Tt_mojo_graphics_Image_2**);

#endif
