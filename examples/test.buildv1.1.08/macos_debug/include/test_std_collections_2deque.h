
#ifndef MX2_TEST_STD_COLLECTIONS_2DEQUE_H
#define MX2_TEST_STD_COLLECTIONS_2DEQUE_H

#include <bbmonkey.h>
#include "std/std.buildv1.1.08/macos_debug/include/std_collections_2deque.h"

struct t_std_collections_Deque_1Tt_std_geom_Rect_1d_2_Iterator;
struct t_std_collections_Deque_1Tt_std_geom_Rect_1d_2;
struct t_std_collections_Deque_1Tt_mojo_graphics_Image_2_Iterator;
struct t_std_collections_Deque_1Tt_mojo_graphics_Image_2;


// Class std.collections.Deque<std.geom.Rect<monkey.types.Double>>.Iterator

#include "test.buildv1.1.08/macos_debug/include/test_std_collections_2container.h"

struct t_std_collections_Deque_1Tt_std_geom_Rect_1d_2;
bbString bbDBType(t_std_collections_Deque_1Tt_std_geom_Rect_1d_2**);
bbString bbDBValue(t_std_collections_Deque_1Tt_std_geom_Rect_1d_2**);
struct t_std_geom_Rect_1d;
bbString bbDBType(t_std_geom_Rect_1d*);
bbString bbDBValue(t_std_geom_Rect_1d*);


struct t_std_collections_Deque_1Tt_std_geom_Rect_1d_2_Iterator : public virtual t_std_collections_IIterator_1Tt_std_geom_Rect_1d_2{
  typedef t_std_collections_Deque_1Tt_std_geom_Rect_1d_2_Iterator bb_struct_type;
  const char *typeName()const{return "t_std_collections_Deque_1Tt_std_geom_Rect_1d_2_Iterator";}

  bbGCVar<t_std_collections_Deque_1Tt_std_geom_Rect_1d_2> m__0deque{};
  bbInt m__0index{};
  static void dbEmit(t_std_collections_Deque_1Tt_std_geom_Rect_1d_2_Iterator*);

  t_std_collections_Deque_1Tt_std_geom_Rect_1d_2_Iterator(t_std_collections_Deque_1Tt_std_geom_Rect_1d_2* l_deque,bbInt l_index);
  ~t_std_collections_Deque_1Tt_std_geom_Rect_1d_2_Iterator();

  void m_Insert(t_std_geom_Rect_1d l_value);
  void m_Erase();
  void m_Current(t_std_geom_Rect_1d l_current);
  t_std_geom_Rect_1d m_Current();
  void m_Bump();
  bbBool m_AtEnd();
  void m_AssertCurrent();

  t_std_collections_Deque_1Tt_std_geom_Rect_1d_2_Iterator(){
  }

  t_std_collections_Deque_1Tt_std_geom_Rect_1d_2_Iterator(bbNullCtor_t){
  }
};
bbString bbDBType(t_std_collections_Deque_1Tt_std_geom_Rect_1d_2_Iterator*);
bbString bbDBValue(t_std_collections_Deque_1Tt_std_geom_Rect_1d_2_Iterator*);

int bbCompare(const t_std_collections_Deque_1Tt_std_geom_Rect_1d_2_Iterator&x,const t_std_collections_Deque_1Tt_std_geom_Rect_1d_2_Iterator&y);

void bbGCMark(const t_std_collections_Deque_1Tt_std_geom_Rect_1d_2_Iterator&);

// Class std.collections.Deque<std.geom.Rect<monkey.types.Double>>

#include "monkey/monkey.buildv1.1.08/macos_debug/include/monkey_types.h"
#include "test.buildv1.1.08/macos_debug/include/test_std_collections_2container.h"
#include "test.buildv1.1.08/macos_debug/include/test_std_geom_2rect.h"

struct t_std_collections_Deque_1Tt_std_geom_Rect_1d_2_Iterator;
bbString bbDBType(t_std_collections_Deque_1Tt_std_geom_Rect_1d_2_Iterator*);
bbString bbDBValue(t_std_collections_Deque_1Tt_std_geom_Rect_1d_2_Iterator*);


struct t_std_collections_Deque_1Tt_std_geom_Rect_1d_2 : public bbObject,public virtual t_std_collections_IContainer_1Tt_std_geom_Rect_1d_2{
  typedef t_std_collections_Deque_1Tt_std_geom_Rect_1d_2 *bb_object_type;

  const char *typeName()const{return "t_std_collections_Deque_1Tt_std_geom_Rect_1d_2";}

  bbArray<t_std_geom_Rect_1d> m__0data{};
  bbInt m__0head{};
  bbInt m__0tail{};

  void gcMark();
  void dbEmit();

  t_std_collections_Deque_1Tt_std_geom_Rect_1d_2(bbInt l_length);
  t_std_collections_Deque_1Tt_std_geom_Rect_1d_2();
  ~t_std_collections_Deque_1Tt_std_geom_Rect_1d_2();

  void m__idxeq(bbInt l_index,t_std_geom_Rect_1d l_value);
  t_std_geom_Rect_1d m__idx(bbInt l_index);
  bbArray<t_std_geom_Rect_1d> m_ToArray();
  void m_Set(bbInt l_index,t_std_geom_Rect_1d l_value);
  void m_Reserve(bbInt l_capacity);
  t_std_geom_Rect_1d m_RemoveLast();
  t_std_geom_Rect_1d m_RemoveFirst();
  void m_PushLast(t_std_geom_Rect_1d l_value);
  void m_PushFirst(t_std_geom_Rect_1d l_value);
  t_std_geom_Rect_1d m_PopLast();
  t_std_geom_Rect_1d m_PopFirst();
  void m_Normalize(bbInt l_capacity);
  bbInt m_Length();
  t_std_geom_Rect_1d m_Last();
  t_std_geom_Rect_1d m_Get(bbInt l_index);
  t_std_geom_Rect_1d m_First();
  bbBool m_Empty();
  bbArray<t_std_geom_Rect_1d> m_Data();
  void m_Clear();
  bbInt m_Capacity();
  t_std_collections_Deque_1Tt_std_geom_Rect_1d_2_Iterator m_All();
  void m_AddLast(t_std_geom_Rect_1d l_value);
  void m_AddFirst(t_std_geom_Rect_1d l_value);
};
bbString bbDBType(t_std_collections_Deque_1Tt_std_geom_Rect_1d_2**);
bbString bbDBValue(t_std_collections_Deque_1Tt_std_geom_Rect_1d_2**);

// Class std.collections.Deque<mojo.graphics.Image>.Iterator

#include "test.buildv1.1.08/macos_debug/include/test_std_collections_2container.h"

struct t_mojo_graphics_Image;
#ifdef BB_NEWREFLECTION
bbTypeInfo *bbGetType( t_mojo_graphics_Image* const& );
#endif
bbString bbDBType(t_mojo_graphics_Image**);
bbString bbDBValue(t_mojo_graphics_Image**);
struct t_std_collections_Deque_1Tt_mojo_graphics_Image_2;
bbString bbDBType(t_std_collections_Deque_1Tt_mojo_graphics_Image_2**);
bbString bbDBValue(t_std_collections_Deque_1Tt_mojo_graphics_Image_2**);


struct t_std_collections_Deque_1Tt_mojo_graphics_Image_2_Iterator : public virtual t_std_collections_IIterator_1Tt_mojo_graphics_Image_2{
  typedef t_std_collections_Deque_1Tt_mojo_graphics_Image_2_Iterator bb_struct_type;
  const char *typeName()const{return "t_std_collections_Deque_1Tt_mojo_graphics_Image_2_Iterator";}

  bbGCVar<t_std_collections_Deque_1Tt_mojo_graphics_Image_2> m__0deque{};
  bbInt m__0index{};
  static void dbEmit(t_std_collections_Deque_1Tt_mojo_graphics_Image_2_Iterator*);

  t_std_collections_Deque_1Tt_mojo_graphics_Image_2_Iterator(t_std_collections_Deque_1Tt_mojo_graphics_Image_2* l_deque,bbInt l_index);
  ~t_std_collections_Deque_1Tt_mojo_graphics_Image_2_Iterator();

  void m_Insert(t_mojo_graphics_Image* l_value);
  void m_Erase();
  void m_Current(t_mojo_graphics_Image* l_current);
  t_mojo_graphics_Image* m_Current();
  void m_Bump();
  bbBool m_AtEnd();
  void m_AssertCurrent();

  t_std_collections_Deque_1Tt_mojo_graphics_Image_2_Iterator(){
  }

  t_std_collections_Deque_1Tt_mojo_graphics_Image_2_Iterator(bbNullCtor_t){
  }
};
bbString bbDBType(t_std_collections_Deque_1Tt_mojo_graphics_Image_2_Iterator*);
bbString bbDBValue(t_std_collections_Deque_1Tt_mojo_graphics_Image_2_Iterator*);

int bbCompare(const t_std_collections_Deque_1Tt_mojo_graphics_Image_2_Iterator&x,const t_std_collections_Deque_1Tt_mojo_graphics_Image_2_Iterator&y);

void bbGCMark(const t_std_collections_Deque_1Tt_mojo_graphics_Image_2_Iterator&);

// Class std.collections.Deque<mojo.graphics.Image>

#include "monkey/monkey.buildv1.1.08/macos_debug/include/monkey_types.h"
#include "test.buildv1.1.08/macos_debug/include/test_std_collections_2container.h"

struct t_mojo_graphics_Image;
#ifdef BB_NEWREFLECTION
bbTypeInfo *bbGetType( t_mojo_graphics_Image* const& );
#endif
bbString bbDBType(t_mojo_graphics_Image**);
bbString bbDBValue(t_mojo_graphics_Image**);
struct t_std_collections_Deque_1Tt_mojo_graphics_Image_2_Iterator;
bbString bbDBType(t_std_collections_Deque_1Tt_mojo_graphics_Image_2_Iterator*);
bbString bbDBValue(t_std_collections_Deque_1Tt_mojo_graphics_Image_2_Iterator*);


struct t_std_collections_Deque_1Tt_mojo_graphics_Image_2 : public bbObject,public virtual t_std_collections_IContainer_1Tt_mojo_graphics_Image_2{
  typedef t_std_collections_Deque_1Tt_mojo_graphics_Image_2 *bb_object_type;

  const char *typeName()const{return "t_std_collections_Deque_1Tt_mojo_graphics_Image_2";}

  bbArray<bbGCVar<t_mojo_graphics_Image>> m__0data{};
  bbInt m__0head{};
  bbInt m__0tail{};

  void gcMark();
  void dbEmit();

  t_std_collections_Deque_1Tt_mojo_graphics_Image_2(bbInt l_length);
  t_std_collections_Deque_1Tt_mojo_graphics_Image_2();
  ~t_std_collections_Deque_1Tt_mojo_graphics_Image_2();

  void m__idxeq(bbInt l_index,t_mojo_graphics_Image* l_value);
  t_mojo_graphics_Image* m__idx(bbInt l_index);
  bbArray<bbGCVar<t_mojo_graphics_Image>> m_ToArray();
  void m_Set(bbInt l_index,t_mojo_graphics_Image* l_value);
  void m_Reserve(bbInt l_capacity);
  t_mojo_graphics_Image* m_RemoveLast();
  t_mojo_graphics_Image* m_RemoveFirst();
  void m_PushLast(t_mojo_graphics_Image* l_value);
  void m_PushFirst(t_mojo_graphics_Image* l_value);
  t_mojo_graphics_Image* m_PopLast();
  t_mojo_graphics_Image* m_PopFirst();
  void m_Normalize(bbInt l_capacity);
  bbInt m_Length();
  t_mojo_graphics_Image* m_Last();
  t_mojo_graphics_Image* m_Get(bbInt l_index);
  t_mojo_graphics_Image* m_First();
  bbBool m_Empty();
  bbArray<bbGCVar<t_mojo_graphics_Image>> m_Data();
  void m_Clear();
  bbInt m_Capacity();
  t_std_collections_Deque_1Tt_mojo_graphics_Image_2_Iterator m_All();
  void m_AddLast(t_mojo_graphics_Image* l_value);
  void m_AddFirst(t_mojo_graphics_Image* l_value);
};
bbString bbDBType(t_std_collections_Deque_1Tt_mojo_graphics_Image_2**);
bbString bbDBValue(t_std_collections_Deque_1Tt_mojo_graphics_Image_2**);

#endif
