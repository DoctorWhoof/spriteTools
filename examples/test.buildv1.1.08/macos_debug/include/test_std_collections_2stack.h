
#ifndef MX2_TEST_STD_COLLECTIONS_2STACK_H
#define MX2_TEST_STD_COLLECTIONS_2STACK_H

#include <bbmonkey.h>
#include "std/std.buildv1.1.08/macos_debug/include/std_collections_2stack.h"

struct t_std_collections_Stack_1Tt_std_geom_Rect_1d_2_Iterator;
struct t_std_collections_Stack_1Tt_std_geom_Rect_1d_2_BackwardsIterator;
struct t_std_collections_Stack_1Tt_std_geom_Rect_1d_2;
struct t_std_collections_Stack_1Tt_mojo_graphics_Image_2_Iterator;
struct t_std_collections_Stack_1Tt_mojo_graphics_Image_2_BackwardsIterator;
struct t_std_collections_Stack_1Tt_mojo_graphics_Image_2;

struct t_std_collections_List_1Tt_mojo_graphics_Image_2;
bbString bbDBType(t_std_collections_List_1Tt_mojo_graphics_Image_2**);
bbString bbDBValue(t_std_collections_List_1Tt_mojo_graphics_Image_2**);
struct t_std_collections_List_1Tt_std_geom_Rect_1d_2;
bbString bbDBType(t_std_collections_List_1Tt_std_geom_Rect_1d_2**);
bbString bbDBValue(t_std_collections_List_1Tt_std_geom_Rect_1d_2**);
struct t_std_collections_Stack_1Tt_mojo_graphics_Image_2;
bbString bbDBType(t_std_collections_Stack_1Tt_mojo_graphics_Image_2**);
bbString bbDBValue(t_std_collections_Stack_1Tt_mojo_graphics_Image_2**);
struct t_std_collections_Stack_1Tt_std_geom_Rect_1d_2;
bbString bbDBType(t_std_collections_Stack_1Tt_std_geom_Rect_1d_2**);
bbString bbDBValue(t_std_collections_Stack_1Tt_std_geom_Rect_1d_2**);


extern void g_std_collections_Stack_1Tt_std_geom_Rect_1d_2_AddAll_1Tt_std_collections_List_1Tt_std_geom_Rect_1d_2_2(t_std_collections_Stack_1Tt_std_geom_Rect_1d_2* l_self,t_std_collections_List_1Tt_std_geom_Rect_1d_2* l_values);
extern void g_std_collections_Stack_1Tt_mojo_graphics_Image_2_AddAll_1Tt_std_collections_List_1Tt_mojo_graphics_Image_2_2(t_std_collections_Stack_1Tt_mojo_graphics_Image_2* l_self,t_std_collections_List_1Tt_mojo_graphics_Image_2* l_values);

// Class std.collections.Stack<std.geom.Rect<monkey.types.Double>>.Iterator

struct t_std_collections_Stack_1Tt_std_geom_Rect_1d_2;
bbString bbDBType(t_std_collections_Stack_1Tt_std_geom_Rect_1d_2**);
bbString bbDBValue(t_std_collections_Stack_1Tt_std_geom_Rect_1d_2**);
struct t_std_geom_Rect_1d;
bbString bbDBType(t_std_geom_Rect_1d*);
bbString bbDBValue(t_std_geom_Rect_1d*);


struct t_std_collections_Stack_1Tt_std_geom_Rect_1d_2_Iterator{
  typedef t_std_collections_Stack_1Tt_std_geom_Rect_1d_2_Iterator bb_struct_type;
  const char *typeName()const{return "t_std_collections_Stack_1Tt_std_geom_Rect_1d_2_Iterator";}

  bbGCVar<t_std_collections_Stack_1Tt_std_geom_Rect_1d_2> m__0stack{};
  bbInt m__0index{};
  static void dbEmit(t_std_collections_Stack_1Tt_std_geom_Rect_1d_2_Iterator*);

  t_std_collections_Stack_1Tt_std_geom_Rect_1d_2_Iterator(t_std_collections_Stack_1Tt_std_geom_Rect_1d_2* l_stack,bbInt l_index);
  ~t_std_collections_Stack_1Tt_std_geom_Rect_1d_2_Iterator();

  void m_Insert(t_std_geom_Rect_1d l_value);
  void m_Erase();
  void m_Current(t_std_geom_Rect_1d l_current);
  t_std_geom_Rect_1d m_Current();
  void m_Bump();
  bbBool m_AtEnd();
  void m_AssertCurrent();

  t_std_collections_Stack_1Tt_std_geom_Rect_1d_2_Iterator(){
  }

  t_std_collections_Stack_1Tt_std_geom_Rect_1d_2_Iterator(bbNullCtor_t){
  }
};
bbString bbDBType(t_std_collections_Stack_1Tt_std_geom_Rect_1d_2_Iterator*);
bbString bbDBValue(t_std_collections_Stack_1Tt_std_geom_Rect_1d_2_Iterator*);

int bbCompare(const t_std_collections_Stack_1Tt_std_geom_Rect_1d_2_Iterator&x,const t_std_collections_Stack_1Tt_std_geom_Rect_1d_2_Iterator&y);

void bbGCMark(const t_std_collections_Stack_1Tt_std_geom_Rect_1d_2_Iterator&);

// Class std.collections.Stack<std.geom.Rect<monkey.types.Double>>.BackwardsIterator

struct t_std_collections_Stack_1Tt_std_geom_Rect_1d_2;
bbString bbDBType(t_std_collections_Stack_1Tt_std_geom_Rect_1d_2**);
bbString bbDBValue(t_std_collections_Stack_1Tt_std_geom_Rect_1d_2**);
struct t_std_geom_Rect_1d;
bbString bbDBType(t_std_geom_Rect_1d*);
bbString bbDBValue(t_std_geom_Rect_1d*);


struct t_std_collections_Stack_1Tt_std_geom_Rect_1d_2_BackwardsIterator{
  typedef t_std_collections_Stack_1Tt_std_geom_Rect_1d_2_BackwardsIterator bb_struct_type;
  const char *typeName()const{return "t_std_collections_Stack_1Tt_std_geom_Rect_1d_2_BackwardsIterator";}

  bbGCVar<t_std_collections_Stack_1Tt_std_geom_Rect_1d_2> m__0stack{};
  bbInt m__0index{};
  static void dbEmit(t_std_collections_Stack_1Tt_std_geom_Rect_1d_2_BackwardsIterator*);

  t_std_collections_Stack_1Tt_std_geom_Rect_1d_2_BackwardsIterator(t_std_collections_Stack_1Tt_std_geom_Rect_1d_2* l_stack,bbInt l_index);
  ~t_std_collections_Stack_1Tt_std_geom_Rect_1d_2_BackwardsIterator();

  void m_Insert(t_std_geom_Rect_1d l_value);
  void m_Erase();
  void m_Current(t_std_geom_Rect_1d l_current);
  t_std_geom_Rect_1d m_Current();
  void m_Bump();
  bbBool m_AtEnd();
  void m_AssertCurrent();

  t_std_collections_Stack_1Tt_std_geom_Rect_1d_2_BackwardsIterator(){
  }

  t_std_collections_Stack_1Tt_std_geom_Rect_1d_2_BackwardsIterator(bbNullCtor_t){
  }
};
bbString bbDBType(t_std_collections_Stack_1Tt_std_geom_Rect_1d_2_BackwardsIterator*);
bbString bbDBValue(t_std_collections_Stack_1Tt_std_geom_Rect_1d_2_BackwardsIterator*);

int bbCompare(const t_std_collections_Stack_1Tt_std_geom_Rect_1d_2_BackwardsIterator&x,const t_std_collections_Stack_1Tt_std_geom_Rect_1d_2_BackwardsIterator&y);

void bbGCMark(const t_std_collections_Stack_1Tt_std_geom_Rect_1d_2_BackwardsIterator&);

// Class std.collections.Stack<std.geom.Rect<monkey.types.Double>>

#include "monkey/monkey.buildv1.1.08/macos_debug/include/monkey_types.h"
#include "test.buildv1.1.08/macos_debug/include/test_std_collections_2container.h"
#include "test.buildv1.1.08/macos_debug/include/test_std_geom_2rect.h"

struct t_std_collections_Deque_1Tt_std_geom_Rect_1d_2;
bbString bbDBType(t_std_collections_Deque_1Tt_std_geom_Rect_1d_2**);
bbString bbDBValue(t_std_collections_Deque_1Tt_std_geom_Rect_1d_2**);
struct t_std_collections_List_1Tt_std_geom_Rect_1d_2;
bbString bbDBType(t_std_collections_List_1Tt_std_geom_Rect_1d_2**);
bbString bbDBValue(t_std_collections_List_1Tt_std_geom_Rect_1d_2**);
struct t_std_collections_Stack_1Tt_std_geom_Rect_1d_2;
bbString bbDBType(t_std_collections_Stack_1Tt_std_geom_Rect_1d_2**);
bbString bbDBValue(t_std_collections_Stack_1Tt_std_geom_Rect_1d_2**);
struct t_std_collections_Stack_1Tt_std_geom_Rect_1d_2_BackwardsIterator;
bbString bbDBType(t_std_collections_Stack_1Tt_std_geom_Rect_1d_2_BackwardsIterator*);
bbString bbDBValue(t_std_collections_Stack_1Tt_std_geom_Rect_1d_2_BackwardsIterator*);
struct t_std_collections_Stack_1Tt_std_geom_Rect_1d_2_Iterator;
bbString bbDBType(t_std_collections_Stack_1Tt_std_geom_Rect_1d_2_Iterator*);
bbString bbDBValue(t_std_collections_Stack_1Tt_std_geom_Rect_1d_2_Iterator*);


struct t_std_collections_Stack_1Tt_std_geom_Rect_1d_2 : public bbObject,public virtual t_std_collections_IContainer_1Tt_std_geom_Rect_1d_2{
  typedef t_std_collections_Stack_1Tt_std_geom_Rect_1d_2 *bb_object_type;

  const char *typeName()const{return "t_std_collections_Stack_1Tt_std_geom_Rect_1d_2";}

  bbArray<t_std_geom_Rect_1d> m__0data{};
  bbInt m__0length{};

  void gcMark();
  void dbEmit();

  t_std_collections_Stack_1Tt_std_geom_Rect_1d_2(t_std_collections_Stack_1Tt_std_geom_Rect_1d_2* l_values);
  t_std_collections_Stack_1Tt_std_geom_Rect_1d_2(t_std_collections_Deque_1Tt_std_geom_Rect_1d_2* l_values);
  t_std_collections_Stack_1Tt_std_geom_Rect_1d_2(t_std_collections_List_1Tt_std_geom_Rect_1d_2* l_values);
  t_std_collections_Stack_1Tt_std_geom_Rect_1d_2(bbArray<t_std_geom_Rect_1d> l_values);
  t_std_collections_Stack_1Tt_std_geom_Rect_1d_2(bbInt l_length);
  t_std_collections_Stack_1Tt_std_geom_Rect_1d_2();
  ~t_std_collections_Stack_1Tt_std_geom_Rect_1d_2();

  void m__idxeq(bbInt l_index,t_std_geom_Rect_1d l_value);
  t_std_geom_Rect_1d m__idx(bbInt l_index);
  t_std_geom_Rect_1d m_Top();
  bbArray<t_std_geom_Rect_1d> m_ToArray();
  void m_Swap(bbInt l_index1,bbInt l_index2);
  void m_Sort(bbFunction<bbInt(t_std_geom_Rect_1d,t_std_geom_Rect_1d)> l_compareFunc,bbInt l_lo,bbInt l_hi);
  void m_Sort(bbFunction<bbInt(t_std_geom_Rect_1d,t_std_geom_Rect_1d)> l_compareFunc);
  void m_Sort(bbInt l_ascending);
  t_std_collections_Stack_1Tt_std_geom_Rect_1d_2* m_Slice(bbInt l_index1,bbInt l_index2);
  t_std_collections_Stack_1Tt_std_geom_Rect_1d_2* m_Slice(bbInt l_index);
  void m_Set(bbInt l_index,t_std_geom_Rect_1d l_value);
  void m_Resize(bbInt l_length);
  void m_Reserve(bbInt l_capacity);
  bbBool m_RemoveLast(t_std_geom_Rect_1d l_value,bbInt l_start);
  bbInt m_RemoveIf(bbFunction<bbBool(t_std_geom_Rect_1d)> l_condition);
  bbInt m_RemoveEach(t_std_geom_Rect_1d l_value);
  bbBool m_Remove(t_std_geom_Rect_1d l_value,bbInt l_start);
  void m_Push(t_std_geom_Rect_1d l_value);
  t_std_geom_Rect_1d m_Pop();
  bbInt m_Length();
  void m_Insert(bbInt l_index,t_std_geom_Rect_1d l_value);
  t_std_geom_Rect_1d m_Get(bbInt l_index);
  bbInt m_FindLastIndex(t_std_geom_Rect_1d l_value,bbInt l_start);
  bbInt m_FindIndex(t_std_geom_Rect_1d l_value,bbInt l_start);
  void m_Erase(bbInt l_index1,bbInt l_index2);
  void m_Erase(bbInt l_index);
  bbBool m_Empty();
  bbArray<t_std_geom_Rect_1d> m_Data();
  bbBool m_Contains(t_std_geom_Rect_1d l_value);
  void m_Compact();
  void m_Clear();
  bbInt m_Capacity();
  t_std_collections_Stack_1Tt_std_geom_Rect_1d_2_BackwardsIterator m_Backwards();
  t_std_collections_Stack_1Tt_std_geom_Rect_1d_2_Iterator m_All();
  void m_AddAll(bbArray<t_std_geom_Rect_1d> l_values);
  void m_Add(t_std_geom_Rect_1d l_value);
};
bbString bbDBType(t_std_collections_Stack_1Tt_std_geom_Rect_1d_2**);
bbString bbDBValue(t_std_collections_Stack_1Tt_std_geom_Rect_1d_2**);

// Class std.collections.Stack<mojo.graphics.Image>.Iterator

struct t_mojo_graphics_Image;
#ifdef BB_NEWREFLECTION
bbTypeInfo *bbGetType( t_mojo_graphics_Image* const& );
#endif
bbString bbDBType(t_mojo_graphics_Image**);
bbString bbDBValue(t_mojo_graphics_Image**);
struct t_std_collections_Stack_1Tt_mojo_graphics_Image_2;
bbString bbDBType(t_std_collections_Stack_1Tt_mojo_graphics_Image_2**);
bbString bbDBValue(t_std_collections_Stack_1Tt_mojo_graphics_Image_2**);


struct t_std_collections_Stack_1Tt_mojo_graphics_Image_2_Iterator{
  typedef t_std_collections_Stack_1Tt_mojo_graphics_Image_2_Iterator bb_struct_type;
  const char *typeName()const{return "t_std_collections_Stack_1Tt_mojo_graphics_Image_2_Iterator";}

  bbGCVar<t_std_collections_Stack_1Tt_mojo_graphics_Image_2> m__0stack{};
  bbInt m__0index{};
  static void dbEmit(t_std_collections_Stack_1Tt_mojo_graphics_Image_2_Iterator*);

  t_std_collections_Stack_1Tt_mojo_graphics_Image_2_Iterator(t_std_collections_Stack_1Tt_mojo_graphics_Image_2* l_stack,bbInt l_index);
  ~t_std_collections_Stack_1Tt_mojo_graphics_Image_2_Iterator();

  void m_Insert(t_mojo_graphics_Image* l_value);
  void m_Erase();
  void m_Current(t_mojo_graphics_Image* l_current);
  t_mojo_graphics_Image* m_Current();
  void m_Bump();
  bbBool m_AtEnd();
  void m_AssertCurrent();

  t_std_collections_Stack_1Tt_mojo_graphics_Image_2_Iterator(){
  }

  t_std_collections_Stack_1Tt_mojo_graphics_Image_2_Iterator(bbNullCtor_t){
  }
};
bbString bbDBType(t_std_collections_Stack_1Tt_mojo_graphics_Image_2_Iterator*);
bbString bbDBValue(t_std_collections_Stack_1Tt_mojo_graphics_Image_2_Iterator*);

int bbCompare(const t_std_collections_Stack_1Tt_mojo_graphics_Image_2_Iterator&x,const t_std_collections_Stack_1Tt_mojo_graphics_Image_2_Iterator&y);

void bbGCMark(const t_std_collections_Stack_1Tt_mojo_graphics_Image_2_Iterator&);

// Class std.collections.Stack<mojo.graphics.Image>.BackwardsIterator

struct t_mojo_graphics_Image;
#ifdef BB_NEWREFLECTION
bbTypeInfo *bbGetType( t_mojo_graphics_Image* const& );
#endif
bbString bbDBType(t_mojo_graphics_Image**);
bbString bbDBValue(t_mojo_graphics_Image**);
struct t_std_collections_Stack_1Tt_mojo_graphics_Image_2;
bbString bbDBType(t_std_collections_Stack_1Tt_mojo_graphics_Image_2**);
bbString bbDBValue(t_std_collections_Stack_1Tt_mojo_graphics_Image_2**);


struct t_std_collections_Stack_1Tt_mojo_graphics_Image_2_BackwardsIterator{
  typedef t_std_collections_Stack_1Tt_mojo_graphics_Image_2_BackwardsIterator bb_struct_type;
  const char *typeName()const{return "t_std_collections_Stack_1Tt_mojo_graphics_Image_2_BackwardsIterator";}

  bbGCVar<t_std_collections_Stack_1Tt_mojo_graphics_Image_2> m__0stack{};
  bbInt m__0index{};
  static void dbEmit(t_std_collections_Stack_1Tt_mojo_graphics_Image_2_BackwardsIterator*);

  t_std_collections_Stack_1Tt_mojo_graphics_Image_2_BackwardsIterator(t_std_collections_Stack_1Tt_mojo_graphics_Image_2* l_stack,bbInt l_index);
  ~t_std_collections_Stack_1Tt_mojo_graphics_Image_2_BackwardsIterator();

  void m_Insert(t_mojo_graphics_Image* l_value);
  void m_Erase();
  void m_Current(t_mojo_graphics_Image* l_current);
  t_mojo_graphics_Image* m_Current();
  void m_Bump();
  bbBool m_AtEnd();
  void m_AssertCurrent();

  t_std_collections_Stack_1Tt_mojo_graphics_Image_2_BackwardsIterator(){
  }

  t_std_collections_Stack_1Tt_mojo_graphics_Image_2_BackwardsIterator(bbNullCtor_t){
  }
};
bbString bbDBType(t_std_collections_Stack_1Tt_mojo_graphics_Image_2_BackwardsIterator*);
bbString bbDBValue(t_std_collections_Stack_1Tt_mojo_graphics_Image_2_BackwardsIterator*);

int bbCompare(const t_std_collections_Stack_1Tt_mojo_graphics_Image_2_BackwardsIterator&x,const t_std_collections_Stack_1Tt_mojo_graphics_Image_2_BackwardsIterator&y);

void bbGCMark(const t_std_collections_Stack_1Tt_mojo_graphics_Image_2_BackwardsIterator&);

// Class std.collections.Stack<mojo.graphics.Image>

#include "monkey/monkey.buildv1.1.08/macos_debug/include/monkey_types.h"
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
struct t_std_collections_List_1Tt_mojo_graphics_Image_2;
bbString bbDBType(t_std_collections_List_1Tt_mojo_graphics_Image_2**);
bbString bbDBValue(t_std_collections_List_1Tt_mojo_graphics_Image_2**);
struct t_std_collections_Stack_1Tt_mojo_graphics_Image_2;
bbString bbDBType(t_std_collections_Stack_1Tt_mojo_graphics_Image_2**);
bbString bbDBValue(t_std_collections_Stack_1Tt_mojo_graphics_Image_2**);
struct t_std_collections_Stack_1Tt_mojo_graphics_Image_2_BackwardsIterator;
bbString bbDBType(t_std_collections_Stack_1Tt_mojo_graphics_Image_2_BackwardsIterator*);
bbString bbDBValue(t_std_collections_Stack_1Tt_mojo_graphics_Image_2_BackwardsIterator*);
struct t_std_collections_Stack_1Tt_mojo_graphics_Image_2_Iterator;
bbString bbDBType(t_std_collections_Stack_1Tt_mojo_graphics_Image_2_Iterator*);
bbString bbDBValue(t_std_collections_Stack_1Tt_mojo_graphics_Image_2_Iterator*);


struct t_std_collections_Stack_1Tt_mojo_graphics_Image_2 : public bbObject,public virtual t_std_collections_IContainer_1Tt_mojo_graphics_Image_2{
  typedef t_std_collections_Stack_1Tt_mojo_graphics_Image_2 *bb_object_type;

  const char *typeName()const{return "t_std_collections_Stack_1Tt_mojo_graphics_Image_2";}

  bbArray<bbGCVar<t_mojo_graphics_Image>> m__0data{};
  bbInt m__0length{};

  void gcMark();
  void dbEmit();

  t_std_collections_Stack_1Tt_mojo_graphics_Image_2(t_std_collections_Stack_1Tt_mojo_graphics_Image_2* l_values);
  t_std_collections_Stack_1Tt_mojo_graphics_Image_2(t_std_collections_Deque_1Tt_mojo_graphics_Image_2* l_values);
  t_std_collections_Stack_1Tt_mojo_graphics_Image_2(t_std_collections_List_1Tt_mojo_graphics_Image_2* l_values);
  t_std_collections_Stack_1Tt_mojo_graphics_Image_2(bbArray<bbGCVar<t_mojo_graphics_Image>> l_values);
  t_std_collections_Stack_1Tt_mojo_graphics_Image_2(bbInt l_length);
  t_std_collections_Stack_1Tt_mojo_graphics_Image_2();
  ~t_std_collections_Stack_1Tt_mojo_graphics_Image_2();

  void m__idxeq(bbInt l_index,t_mojo_graphics_Image* l_value);
  t_mojo_graphics_Image* m__idx(bbInt l_index);
  t_mojo_graphics_Image* m_Top();
  bbArray<bbGCVar<t_mojo_graphics_Image>> m_ToArray();
  void m_Swap(bbInt l_index1,bbInt l_index2);
  void m_Sort(bbFunction<bbInt(t_mojo_graphics_Image*,t_mojo_graphics_Image*)> l_compareFunc,bbInt l_lo,bbInt l_hi);
  void m_Sort(bbFunction<bbInt(t_mojo_graphics_Image*,t_mojo_graphics_Image*)> l_compareFunc);
  void m_Sort(bbInt l_ascending);
  t_std_collections_Stack_1Tt_mojo_graphics_Image_2* m_Slice(bbInt l_index1,bbInt l_index2);
  t_std_collections_Stack_1Tt_mojo_graphics_Image_2* m_Slice(bbInt l_index);
  void m_Set(bbInt l_index,t_mojo_graphics_Image* l_value);
  void m_Resize(bbInt l_length);
  void m_Reserve(bbInt l_capacity);
  bbBool m_RemoveLast(t_mojo_graphics_Image* l_value,bbInt l_start);
  bbInt m_RemoveIf(bbFunction<bbBool(t_mojo_graphics_Image*)> l_condition);
  bbInt m_RemoveEach(t_mojo_graphics_Image* l_value);
  bbBool m_Remove(t_mojo_graphics_Image* l_value,bbInt l_start);
  void m_Push(t_mojo_graphics_Image* l_value);
  t_mojo_graphics_Image* m_Pop();
  bbInt m_Length();
  void m_Insert(bbInt l_index,t_mojo_graphics_Image* l_value);
  t_mojo_graphics_Image* m_Get(bbInt l_index);
  bbInt m_FindLastIndex(t_mojo_graphics_Image* l_value,bbInt l_start);
  bbInt m_FindIndex(t_mojo_graphics_Image* l_value,bbInt l_start);
  void m_Erase(bbInt l_index1,bbInt l_index2);
  void m_Erase(bbInt l_index);
  bbBool m_Empty();
  bbArray<bbGCVar<t_mojo_graphics_Image>> m_Data();
  bbBool m_Contains(t_mojo_graphics_Image* l_value);
  void m_Compact();
  void m_Clear();
  bbInt m_Capacity();
  t_std_collections_Stack_1Tt_mojo_graphics_Image_2_BackwardsIterator m_Backwards();
  t_std_collections_Stack_1Tt_mojo_graphics_Image_2_Iterator m_All();
  void m_AddAll(bbArray<bbGCVar<t_mojo_graphics_Image>> l_values);
  void m_Add(t_mojo_graphics_Image* l_value);
};
bbString bbDBType(t_std_collections_Stack_1Tt_mojo_graphics_Image_2**);
bbString bbDBValue(t_std_collections_Stack_1Tt_mojo_graphics_Image_2**);

#endif
