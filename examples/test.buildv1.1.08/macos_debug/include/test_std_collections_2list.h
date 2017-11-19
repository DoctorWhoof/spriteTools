
#ifndef MX2_TEST_STD_COLLECTIONS_2LIST_H
#define MX2_TEST_STD_COLLECTIONS_2LIST_H

#include <bbmonkey.h>
#include "std/std.buildv1.1.08/macos_debug/include/std_collections_2list.h"

struct t_std_collections_List_1Tt_std_geom_Rect_1d_2_Node;
struct t_std_collections_List_1Tt_std_geom_Rect_1d_2_Iterator;
struct t_std_collections_List_1Tt_std_geom_Rect_1d_2_BackwardsIterator;
struct t_std_collections_List_1Tt_std_geom_Rect_1d_2;
struct t_std_collections_List_1Tt_mojo_graphics_Image_2_Node;
struct t_std_collections_List_1Tt_mojo_graphics_Image_2_Iterator;
struct t_std_collections_List_1Tt_mojo_graphics_Image_2_BackwardsIterator;
struct t_std_collections_List_1Tt_mojo_graphics_Image_2;

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


extern void g_std_collections_List_1Tt_std_geom_Rect_1d_2_AddAll_1Tt_std_collections_List_1Tt_std_geom_Rect_1d_2_2(t_std_collections_List_1Tt_std_geom_Rect_1d_2* l_self,t_std_collections_List_1Tt_std_geom_Rect_1d_2* l_values);
extern void g_std_collections_List_1Tt_std_geom_Rect_1d_2_AddAll_1Tt_std_collections_Stack_1Tt_std_geom_Rect_1d_2_2(t_std_collections_List_1Tt_std_geom_Rect_1d_2* l_self,t_std_collections_Stack_1Tt_std_geom_Rect_1d_2* l_values);
extern void g_std_collections_List_1Tt_mojo_graphics_Image_2_AddAll_1Tt_std_collections_List_1Tt_mojo_graphics_Image_2_2(t_std_collections_List_1Tt_mojo_graphics_Image_2* l_self,t_std_collections_List_1Tt_mojo_graphics_Image_2* l_values);
extern void g_std_collections_List_1Tt_mojo_graphics_Image_2_AddAll_1Tt_std_collections_Stack_1Tt_mojo_graphics_Image_2_2(t_std_collections_List_1Tt_mojo_graphics_Image_2* l_self,t_std_collections_Stack_1Tt_mojo_graphics_Image_2* l_values);

// Class std.collections.List<std.geom.Rect<monkey.types.Double>>.Node

#include "monkey/monkey.buildv1.1.08/macos_debug/include/monkey_types.h"
#include "test.buildv1.1.08/macos_debug/include/test_std_geom_2rect.h"

struct t_std_collections_List_1Tt_std_geom_Rect_1d_2_Node;
bbString bbDBType(t_std_collections_List_1Tt_std_geom_Rect_1d_2_Node**);
bbString bbDBValue(t_std_collections_List_1Tt_std_geom_Rect_1d_2_Node**);


struct t_std_collections_List_1Tt_std_geom_Rect_1d_2_Node : public bbObject{
  typedef t_std_collections_List_1Tt_std_geom_Rect_1d_2_Node *bb_object_type;

  const char *typeName()const{return "t_std_collections_List_1Tt_std_geom_Rect_1d_2_Node";}

  bbGCVar<t_std_collections_List_1Tt_std_geom_Rect_1d_2_Node> m__0succ{};
  bbGCVar<t_std_collections_List_1Tt_std_geom_Rect_1d_2_Node> m__0pred{};
  t_std_geom_Rect_1d m__0value{};

  void gcMark();
  void dbEmit();

  t_std_collections_List_1Tt_std_geom_Rect_1d_2_Node(t_std_geom_Rect_1d l_value,t_std_collections_List_1Tt_std_geom_Rect_1d_2_Node* l_succ);
  t_std_collections_List_1Tt_std_geom_Rect_1d_2_Node(t_std_geom_Rect_1d l_value);
  ~t_std_collections_List_1Tt_std_geom_Rect_1d_2_Node();

  void m_Value(t_std_geom_Rect_1d l_value);
  t_std_geom_Rect_1d m_Value();
  t_std_collections_List_1Tt_std_geom_Rect_1d_2_Node* m_Succ();
  void m_Remove();
  t_std_collections_List_1Tt_std_geom_Rect_1d_2_Node* m_Pred();
  void m_InsertBefore(t_std_collections_List_1Tt_std_geom_Rect_1d_2_Node* l_node);
  void m_InsertAfter(t_std_collections_List_1Tt_std_geom_Rect_1d_2_Node* l_node);

  t_std_collections_List_1Tt_std_geom_Rect_1d_2_Node(){
  }
};
bbString bbDBType(t_std_collections_List_1Tt_std_geom_Rect_1d_2_Node**);
bbString bbDBValue(t_std_collections_List_1Tt_std_geom_Rect_1d_2_Node**);

// Class std.collections.List<std.geom.Rect<monkey.types.Double>>.Iterator

struct t_std_collections_List_1Tt_std_geom_Rect_1d_2;
bbString bbDBType(t_std_collections_List_1Tt_std_geom_Rect_1d_2**);
bbString bbDBValue(t_std_collections_List_1Tt_std_geom_Rect_1d_2**);
struct t_std_collections_List_1Tt_std_geom_Rect_1d_2_Node;
bbString bbDBType(t_std_collections_List_1Tt_std_geom_Rect_1d_2_Node**);
bbString bbDBValue(t_std_collections_List_1Tt_std_geom_Rect_1d_2_Node**);
struct t_std_geom_Rect_1d;
bbString bbDBType(t_std_geom_Rect_1d*);
bbString bbDBValue(t_std_geom_Rect_1d*);


struct t_std_collections_List_1Tt_std_geom_Rect_1d_2_Iterator{
  typedef t_std_collections_List_1Tt_std_geom_Rect_1d_2_Iterator bb_struct_type;
  const char *typeName()const{return "t_std_collections_List_1Tt_std_geom_Rect_1d_2_Iterator";}

  bbGCVar<t_std_collections_List_1Tt_std_geom_Rect_1d_2> m__0list{};
  bbGCVar<t_std_collections_List_1Tt_std_geom_Rect_1d_2_Node> m__0node{};
  static void dbEmit(t_std_collections_List_1Tt_std_geom_Rect_1d_2_Iterator*);

  t_std_collections_List_1Tt_std_geom_Rect_1d_2_Iterator(t_std_collections_List_1Tt_std_geom_Rect_1d_2* l_list,t_std_collections_List_1Tt_std_geom_Rect_1d_2_Node* l_node);
  ~t_std_collections_List_1Tt_std_geom_Rect_1d_2_Iterator();

  void m_Insert(t_std_geom_Rect_1d l_value);
  void m_Erase();
  void m_Current(t_std_geom_Rect_1d l_current);
  t_std_geom_Rect_1d m_Current();
  void m_Bump();
  bbBool m_AtEnd();
  void m_AssertCurrent();

  t_std_collections_List_1Tt_std_geom_Rect_1d_2_Iterator(){
  }

  t_std_collections_List_1Tt_std_geom_Rect_1d_2_Iterator(bbNullCtor_t){
  }
};
bbString bbDBType(t_std_collections_List_1Tt_std_geom_Rect_1d_2_Iterator*);
bbString bbDBValue(t_std_collections_List_1Tt_std_geom_Rect_1d_2_Iterator*);

int bbCompare(const t_std_collections_List_1Tt_std_geom_Rect_1d_2_Iterator&x,const t_std_collections_List_1Tt_std_geom_Rect_1d_2_Iterator&y);

void bbGCMark(const t_std_collections_List_1Tt_std_geom_Rect_1d_2_Iterator&);

// Class std.collections.List<std.geom.Rect<monkey.types.Double>>.BackwardsIterator

struct t_std_collections_List_1Tt_std_geom_Rect_1d_2;
bbString bbDBType(t_std_collections_List_1Tt_std_geom_Rect_1d_2**);
bbString bbDBValue(t_std_collections_List_1Tt_std_geom_Rect_1d_2**);
struct t_std_collections_List_1Tt_std_geom_Rect_1d_2_Node;
bbString bbDBType(t_std_collections_List_1Tt_std_geom_Rect_1d_2_Node**);
bbString bbDBValue(t_std_collections_List_1Tt_std_geom_Rect_1d_2_Node**);
struct t_std_geom_Rect_1d;
bbString bbDBType(t_std_geom_Rect_1d*);
bbString bbDBValue(t_std_geom_Rect_1d*);


struct t_std_collections_List_1Tt_std_geom_Rect_1d_2_BackwardsIterator{
  typedef t_std_collections_List_1Tt_std_geom_Rect_1d_2_BackwardsIterator bb_struct_type;
  const char *typeName()const{return "t_std_collections_List_1Tt_std_geom_Rect_1d_2_BackwardsIterator";}

  bbGCVar<t_std_collections_List_1Tt_std_geom_Rect_1d_2> m__0list{};
  bbGCVar<t_std_collections_List_1Tt_std_geom_Rect_1d_2_Node> m__0node{};
  static void dbEmit(t_std_collections_List_1Tt_std_geom_Rect_1d_2_BackwardsIterator*);

  t_std_collections_List_1Tt_std_geom_Rect_1d_2_BackwardsIterator(t_std_collections_List_1Tt_std_geom_Rect_1d_2* l_list,t_std_collections_List_1Tt_std_geom_Rect_1d_2_Node* l_node);
  ~t_std_collections_List_1Tt_std_geom_Rect_1d_2_BackwardsIterator();

  void m_Insert(t_std_geom_Rect_1d l_value);
  void m_Erase();
  void m_Current(t_std_geom_Rect_1d l_current);
  t_std_geom_Rect_1d m_Current();
  void m_Bump();
  bbBool m_AtEnd();
  void m_AssertCurrent();

  t_std_collections_List_1Tt_std_geom_Rect_1d_2_BackwardsIterator(){
  }

  t_std_collections_List_1Tt_std_geom_Rect_1d_2_BackwardsIterator(bbNullCtor_t){
  }
};
bbString bbDBType(t_std_collections_List_1Tt_std_geom_Rect_1d_2_BackwardsIterator*);
bbString bbDBValue(t_std_collections_List_1Tt_std_geom_Rect_1d_2_BackwardsIterator*);

int bbCompare(const t_std_collections_List_1Tt_std_geom_Rect_1d_2_BackwardsIterator&x,const t_std_collections_List_1Tt_std_geom_Rect_1d_2_BackwardsIterator&y);

void bbGCMark(const t_std_collections_List_1Tt_std_geom_Rect_1d_2_BackwardsIterator&);

// Class std.collections.List<std.geom.Rect<monkey.types.Double>>

#include "monkey/monkey.buildv1.1.08/macos_debug/include/monkey_types.h"
#include "test.buildv1.1.08/macos_debug/include/test_std_collections_2container.h"
#include "test.buildv1.1.08/macos_debug/include/test_std_geom_2rect.h"

struct t_std_collections_List_1Tt_std_geom_Rect_1d_2;
bbString bbDBType(t_std_collections_List_1Tt_std_geom_Rect_1d_2**);
bbString bbDBValue(t_std_collections_List_1Tt_std_geom_Rect_1d_2**);
struct t_std_collections_List_1Tt_std_geom_Rect_1d_2_BackwardsIterator;
bbString bbDBType(t_std_collections_List_1Tt_std_geom_Rect_1d_2_BackwardsIterator*);
bbString bbDBValue(t_std_collections_List_1Tt_std_geom_Rect_1d_2_BackwardsIterator*);
struct t_std_collections_List_1Tt_std_geom_Rect_1d_2_Iterator;
bbString bbDBType(t_std_collections_List_1Tt_std_geom_Rect_1d_2_Iterator*);
bbString bbDBValue(t_std_collections_List_1Tt_std_geom_Rect_1d_2_Iterator*);
struct t_std_collections_List_1Tt_std_geom_Rect_1d_2_Node;
bbString bbDBType(t_std_collections_List_1Tt_std_geom_Rect_1d_2_Node**);
bbString bbDBValue(t_std_collections_List_1Tt_std_geom_Rect_1d_2_Node**);
struct t_std_collections_Stack_1Tt_std_geom_Rect_1d_2;
bbString bbDBType(t_std_collections_Stack_1Tt_std_geom_Rect_1d_2**);
bbString bbDBValue(t_std_collections_Stack_1Tt_std_geom_Rect_1d_2**);


struct t_std_collections_List_1Tt_std_geom_Rect_1d_2 : public bbObject,public virtual t_std_collections_IContainer_1Tt_std_geom_Rect_1d_2{
  typedef t_std_collections_List_1Tt_std_geom_Rect_1d_2 *bb_object_type;

  const char *typeName()const{return "t_std_collections_List_1Tt_std_geom_Rect_1d_2";}

  bbGCVar<t_std_collections_List_1Tt_std_geom_Rect_1d_2_Node> m__0head{};

  void gcMark();
  void dbEmit();

  t_std_collections_List_1Tt_std_geom_Rect_1d_2(t_std_collections_List_1Tt_std_geom_Rect_1d_2* l_values);
  t_std_collections_List_1Tt_std_geom_Rect_1d_2(t_std_collections_Stack_1Tt_std_geom_Rect_1d_2* l_values);
  t_std_collections_List_1Tt_std_geom_Rect_1d_2(bbArray<t_std_geom_Rect_1d> l_values);
  t_std_collections_List_1Tt_std_geom_Rect_1d_2();
  ~t_std_collections_List_1Tt_std_geom_Rect_1d_2();

  bbArray<t_std_geom_Rect_1d> m_ToArray();
  void m_Sort(bbFunction<bbInt(t_std_geom_Rect_1d,t_std_geom_Rect_1d)> l_compareFunc);
  void m_Sort(bbInt l_ascending);
  t_std_geom_Rect_1d m_RemoveLast();
  bbBool m_RemoveLast(t_std_geom_Rect_1d l_value);
  bbInt m_RemoveIf(bbFunction<bbBool(t_std_geom_Rect_1d)> l_condition);
  t_std_geom_Rect_1d m_RemoveFirst();
  bbInt m_RemoveEach(t_std_geom_Rect_1d l_value);
  bbBool m_Remove(t_std_geom_Rect_1d l_value);
  t_std_collections_List_1Tt_std_geom_Rect_1d_2_Node* m_LastNode();
  t_std_geom_Rect_1d m_Last();
  t_std_collections_List_1Tt_std_geom_Rect_1d_2_Node* m_HeadNode();
  t_std_collections_List_1Tt_std_geom_Rect_1d_2_Node* m_FirstNode();
  t_std_geom_Rect_1d m_First();
  t_std_collections_List_1Tt_std_geom_Rect_1d_2_Node* m_FindNode(t_std_geom_Rect_1d l_value);
  t_std_collections_List_1Tt_std_geom_Rect_1d_2_Node* m_FindLastNode(t_std_geom_Rect_1d l_value);
  bbBool m_Empty();
  bbInt m_Count();
  void m_Clear();
  t_std_collections_List_1Tt_std_geom_Rect_1d_2_BackwardsIterator m_Backwards();
  t_std_collections_List_1Tt_std_geom_Rect_1d_2_Iterator m_All();
  t_std_collections_List_1Tt_std_geom_Rect_1d_2_Node* m_AddLast(t_std_geom_Rect_1d l_value);
  t_std_collections_List_1Tt_std_geom_Rect_1d_2_Node* m_AddFirst(t_std_geom_Rect_1d l_value);
  void m_AddAll(bbArray<t_std_geom_Rect_1d> l_values);
  void m_Add(t_std_geom_Rect_1d l_value);
};
bbString bbDBType(t_std_collections_List_1Tt_std_geom_Rect_1d_2**);
bbString bbDBValue(t_std_collections_List_1Tt_std_geom_Rect_1d_2**);

// Class std.collections.List<mojo.graphics.Image>.Node

#include "monkey/monkey.buildv1.1.08/macos_debug/include/monkey_types.h"

struct t_mojo_graphics_Image;
#ifdef BB_NEWREFLECTION
bbTypeInfo *bbGetType( t_mojo_graphics_Image* const& );
#endif
bbString bbDBType(t_mojo_graphics_Image**);
bbString bbDBValue(t_mojo_graphics_Image**);
struct t_std_collections_List_1Tt_mojo_graphics_Image_2_Node;
bbString bbDBType(t_std_collections_List_1Tt_mojo_graphics_Image_2_Node**);
bbString bbDBValue(t_std_collections_List_1Tt_mojo_graphics_Image_2_Node**);


struct t_std_collections_List_1Tt_mojo_graphics_Image_2_Node : public bbObject{
  typedef t_std_collections_List_1Tt_mojo_graphics_Image_2_Node *bb_object_type;

  const char *typeName()const{return "t_std_collections_List_1Tt_mojo_graphics_Image_2_Node";}

  bbGCVar<t_std_collections_List_1Tt_mojo_graphics_Image_2_Node> m__0succ{};
  bbGCVar<t_std_collections_List_1Tt_mojo_graphics_Image_2_Node> m__0pred{};
  bbGCVar<t_mojo_graphics_Image> m__0value{};

  void gcMark();
  void dbEmit();

  t_std_collections_List_1Tt_mojo_graphics_Image_2_Node(t_mojo_graphics_Image* l_value,t_std_collections_List_1Tt_mojo_graphics_Image_2_Node* l_succ);
  t_std_collections_List_1Tt_mojo_graphics_Image_2_Node(t_mojo_graphics_Image* l_value);
  ~t_std_collections_List_1Tt_mojo_graphics_Image_2_Node();

  void m_Value(t_mojo_graphics_Image* l_value);
  t_mojo_graphics_Image* m_Value();
  t_std_collections_List_1Tt_mojo_graphics_Image_2_Node* m_Succ();
  void m_Remove();
  t_std_collections_List_1Tt_mojo_graphics_Image_2_Node* m_Pred();
  void m_InsertBefore(t_std_collections_List_1Tt_mojo_graphics_Image_2_Node* l_node);
  void m_InsertAfter(t_std_collections_List_1Tt_mojo_graphics_Image_2_Node* l_node);

  t_std_collections_List_1Tt_mojo_graphics_Image_2_Node(){
  }
};
bbString bbDBType(t_std_collections_List_1Tt_mojo_graphics_Image_2_Node**);
bbString bbDBValue(t_std_collections_List_1Tt_mojo_graphics_Image_2_Node**);

// Class std.collections.List<mojo.graphics.Image>.Iterator

struct t_mojo_graphics_Image;
#ifdef BB_NEWREFLECTION
bbTypeInfo *bbGetType( t_mojo_graphics_Image* const& );
#endif
bbString bbDBType(t_mojo_graphics_Image**);
bbString bbDBValue(t_mojo_graphics_Image**);
struct t_std_collections_List_1Tt_mojo_graphics_Image_2;
bbString bbDBType(t_std_collections_List_1Tt_mojo_graphics_Image_2**);
bbString bbDBValue(t_std_collections_List_1Tt_mojo_graphics_Image_2**);
struct t_std_collections_List_1Tt_mojo_graphics_Image_2_Node;
bbString bbDBType(t_std_collections_List_1Tt_mojo_graphics_Image_2_Node**);
bbString bbDBValue(t_std_collections_List_1Tt_mojo_graphics_Image_2_Node**);


struct t_std_collections_List_1Tt_mojo_graphics_Image_2_Iterator{
  typedef t_std_collections_List_1Tt_mojo_graphics_Image_2_Iterator bb_struct_type;
  const char *typeName()const{return "t_std_collections_List_1Tt_mojo_graphics_Image_2_Iterator";}

  bbGCVar<t_std_collections_List_1Tt_mojo_graphics_Image_2> m__0list{};
  bbGCVar<t_std_collections_List_1Tt_mojo_graphics_Image_2_Node> m__0node{};
  static void dbEmit(t_std_collections_List_1Tt_mojo_graphics_Image_2_Iterator*);

  t_std_collections_List_1Tt_mojo_graphics_Image_2_Iterator(t_std_collections_List_1Tt_mojo_graphics_Image_2* l_list,t_std_collections_List_1Tt_mojo_graphics_Image_2_Node* l_node);
  ~t_std_collections_List_1Tt_mojo_graphics_Image_2_Iterator();

  void m_Insert(t_mojo_graphics_Image* l_value);
  void m_Erase();
  void m_Current(t_mojo_graphics_Image* l_current);
  t_mojo_graphics_Image* m_Current();
  void m_Bump();
  bbBool m_AtEnd();
  void m_AssertCurrent();

  t_std_collections_List_1Tt_mojo_graphics_Image_2_Iterator(){
  }

  t_std_collections_List_1Tt_mojo_graphics_Image_2_Iterator(bbNullCtor_t){
  }
};
bbString bbDBType(t_std_collections_List_1Tt_mojo_graphics_Image_2_Iterator*);
bbString bbDBValue(t_std_collections_List_1Tt_mojo_graphics_Image_2_Iterator*);

int bbCompare(const t_std_collections_List_1Tt_mojo_graphics_Image_2_Iterator&x,const t_std_collections_List_1Tt_mojo_graphics_Image_2_Iterator&y);

void bbGCMark(const t_std_collections_List_1Tt_mojo_graphics_Image_2_Iterator&);

// Class std.collections.List<mojo.graphics.Image>.BackwardsIterator

struct t_mojo_graphics_Image;
#ifdef BB_NEWREFLECTION
bbTypeInfo *bbGetType( t_mojo_graphics_Image* const& );
#endif
bbString bbDBType(t_mojo_graphics_Image**);
bbString bbDBValue(t_mojo_graphics_Image**);
struct t_std_collections_List_1Tt_mojo_graphics_Image_2;
bbString bbDBType(t_std_collections_List_1Tt_mojo_graphics_Image_2**);
bbString bbDBValue(t_std_collections_List_1Tt_mojo_graphics_Image_2**);
struct t_std_collections_List_1Tt_mojo_graphics_Image_2_Node;
bbString bbDBType(t_std_collections_List_1Tt_mojo_graphics_Image_2_Node**);
bbString bbDBValue(t_std_collections_List_1Tt_mojo_graphics_Image_2_Node**);


struct t_std_collections_List_1Tt_mojo_graphics_Image_2_BackwardsIterator{
  typedef t_std_collections_List_1Tt_mojo_graphics_Image_2_BackwardsIterator bb_struct_type;
  const char *typeName()const{return "t_std_collections_List_1Tt_mojo_graphics_Image_2_BackwardsIterator";}

  bbGCVar<t_std_collections_List_1Tt_mojo_graphics_Image_2> m__0list{};
  bbGCVar<t_std_collections_List_1Tt_mojo_graphics_Image_2_Node> m__0node{};
  static void dbEmit(t_std_collections_List_1Tt_mojo_graphics_Image_2_BackwardsIterator*);

  t_std_collections_List_1Tt_mojo_graphics_Image_2_BackwardsIterator(t_std_collections_List_1Tt_mojo_graphics_Image_2* l_list,t_std_collections_List_1Tt_mojo_graphics_Image_2_Node* l_node);
  ~t_std_collections_List_1Tt_mojo_graphics_Image_2_BackwardsIterator();

  void m_Insert(t_mojo_graphics_Image* l_value);
  void m_Erase();
  void m_Current(t_mojo_graphics_Image* l_current);
  t_mojo_graphics_Image* m_Current();
  void m_Bump();
  bbBool m_AtEnd();
  void m_AssertCurrent();

  t_std_collections_List_1Tt_mojo_graphics_Image_2_BackwardsIterator(){
  }

  t_std_collections_List_1Tt_mojo_graphics_Image_2_BackwardsIterator(bbNullCtor_t){
  }
};
bbString bbDBType(t_std_collections_List_1Tt_mojo_graphics_Image_2_BackwardsIterator*);
bbString bbDBValue(t_std_collections_List_1Tt_mojo_graphics_Image_2_BackwardsIterator*);

int bbCompare(const t_std_collections_List_1Tt_mojo_graphics_Image_2_BackwardsIterator&x,const t_std_collections_List_1Tt_mojo_graphics_Image_2_BackwardsIterator&y);

void bbGCMark(const t_std_collections_List_1Tt_mojo_graphics_Image_2_BackwardsIterator&);

// Class std.collections.List<mojo.graphics.Image>

#include "monkey/monkey.buildv1.1.08/macos_debug/include/monkey_types.h"
#include "test.buildv1.1.08/macos_debug/include/test_std_collections_2container.h"

struct t_mojo_graphics_Image;
#ifdef BB_NEWREFLECTION
bbTypeInfo *bbGetType( t_mojo_graphics_Image* const& );
#endif
bbString bbDBType(t_mojo_graphics_Image**);
bbString bbDBValue(t_mojo_graphics_Image**);
struct t_std_collections_List_1Tt_mojo_graphics_Image_2;
bbString bbDBType(t_std_collections_List_1Tt_mojo_graphics_Image_2**);
bbString bbDBValue(t_std_collections_List_1Tt_mojo_graphics_Image_2**);
struct t_std_collections_List_1Tt_mojo_graphics_Image_2_BackwardsIterator;
bbString bbDBType(t_std_collections_List_1Tt_mojo_graphics_Image_2_BackwardsIterator*);
bbString bbDBValue(t_std_collections_List_1Tt_mojo_graphics_Image_2_BackwardsIterator*);
struct t_std_collections_List_1Tt_mojo_graphics_Image_2_Iterator;
bbString bbDBType(t_std_collections_List_1Tt_mojo_graphics_Image_2_Iterator*);
bbString bbDBValue(t_std_collections_List_1Tt_mojo_graphics_Image_2_Iterator*);
struct t_std_collections_List_1Tt_mojo_graphics_Image_2_Node;
bbString bbDBType(t_std_collections_List_1Tt_mojo_graphics_Image_2_Node**);
bbString bbDBValue(t_std_collections_List_1Tt_mojo_graphics_Image_2_Node**);
struct t_std_collections_Stack_1Tt_mojo_graphics_Image_2;
bbString bbDBType(t_std_collections_Stack_1Tt_mojo_graphics_Image_2**);
bbString bbDBValue(t_std_collections_Stack_1Tt_mojo_graphics_Image_2**);


struct t_std_collections_List_1Tt_mojo_graphics_Image_2 : public bbObject,public virtual t_std_collections_IContainer_1Tt_mojo_graphics_Image_2{
  typedef t_std_collections_List_1Tt_mojo_graphics_Image_2 *bb_object_type;

  const char *typeName()const{return "t_std_collections_List_1Tt_mojo_graphics_Image_2";}

  bbGCVar<t_std_collections_List_1Tt_mojo_graphics_Image_2_Node> m__0head{};

  void gcMark();
  void dbEmit();

  t_std_collections_List_1Tt_mojo_graphics_Image_2(t_std_collections_List_1Tt_mojo_graphics_Image_2* l_values);
  t_std_collections_List_1Tt_mojo_graphics_Image_2(t_std_collections_Stack_1Tt_mojo_graphics_Image_2* l_values);
  t_std_collections_List_1Tt_mojo_graphics_Image_2(bbArray<bbGCVar<t_mojo_graphics_Image>> l_values);
  t_std_collections_List_1Tt_mojo_graphics_Image_2();
  ~t_std_collections_List_1Tt_mojo_graphics_Image_2();

  bbArray<bbGCVar<t_mojo_graphics_Image>> m_ToArray();
  void m_Sort(bbFunction<bbInt(t_mojo_graphics_Image*,t_mojo_graphics_Image*)> l_compareFunc);
  void m_Sort(bbInt l_ascending);
  t_mojo_graphics_Image* m_RemoveLast();
  bbBool m_RemoveLast(t_mojo_graphics_Image* l_value);
  bbInt m_RemoveIf(bbFunction<bbBool(t_mojo_graphics_Image*)> l_condition);
  t_mojo_graphics_Image* m_RemoveFirst();
  bbInt m_RemoveEach(t_mojo_graphics_Image* l_value);
  bbBool m_Remove(t_mojo_graphics_Image* l_value);
  t_std_collections_List_1Tt_mojo_graphics_Image_2_Node* m_LastNode();
  t_mojo_graphics_Image* m_Last();
  t_std_collections_List_1Tt_mojo_graphics_Image_2_Node* m_HeadNode();
  t_std_collections_List_1Tt_mojo_graphics_Image_2_Node* m_FirstNode();
  t_mojo_graphics_Image* m_First();
  t_std_collections_List_1Tt_mojo_graphics_Image_2_Node* m_FindNode(t_mojo_graphics_Image* l_value);
  t_std_collections_List_1Tt_mojo_graphics_Image_2_Node* m_FindLastNode(t_mojo_graphics_Image* l_value);
  bbBool m_Empty();
  bbInt m_Count();
  void m_Clear();
  t_std_collections_List_1Tt_mojo_graphics_Image_2_BackwardsIterator m_Backwards();
  t_std_collections_List_1Tt_mojo_graphics_Image_2_Iterator m_All();
  t_std_collections_List_1Tt_mojo_graphics_Image_2_Node* m_AddLast(t_mojo_graphics_Image* l_value);
  t_std_collections_List_1Tt_mojo_graphics_Image_2_Node* m_AddFirst(t_mojo_graphics_Image* l_value);
  void m_AddAll(bbArray<bbGCVar<t_mojo_graphics_Image>> l_values);
  void m_Add(t_mojo_graphics_Image* l_value);
};
bbString bbDBType(t_std_collections_List_1Tt_mojo_graphics_Image_2**);
bbString bbDBValue(t_std_collections_List_1Tt_mojo_graphics_Image_2**);

#endif
