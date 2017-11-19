
#ifndef MX2_TEST_STD_COLLECTIONS_2MAP_H
#define MX2_TEST_STD_COLLECTIONS_2MAP_H

#include <bbmonkey.h>
#include "std/std.buildv1.1.08/macos_debug/include/std_collections_2map.h"

enum class t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node_Color;
bbString bbDBType(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node_Color*);
bbString bbDBValue(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node_Color*);

struct t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node;
struct t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Iterator;
struct t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_KeyIterator;
struct t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_MapKeys;
struct t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_ValueIterator;
struct t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_MapValues;
struct t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2;


// Class std.collections.Map<monkey.types.String,mojo3d.graphics.AnimationClip>.Node

#include "monkey/monkey.buildv1.1.08/macos_debug/include/monkey_types.h"

struct t_mojo3d_graphics_AnimationClip;
#ifdef BB_NEWREFLECTION
bbTypeInfo *bbGetType( t_mojo3d_graphics_AnimationClip* const& );
#endif
bbString bbDBType(t_mojo3d_graphics_AnimationClip**);
bbString bbDBValue(t_mojo3d_graphics_AnimationClip**);
struct t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node;
bbString bbDBType(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node**);
bbString bbDBValue(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node**);
enum class t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node_Color;
bbString bbDBType(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node_Color*);
bbString bbDBValue(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node_Color*);


struct t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node : public bbObject{
  typedef t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node *bb_object_type;

  const char *typeName()const{return "t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node";}

  bbString m__0key{};
  bbGCVar<t_mojo3d_graphics_AnimationClip> m__0value{};
  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node_Color m__0color{};
  bbGCVar<t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node> m__0left{};
  bbGCVar<t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node> m__0right{};
  bbGCVar<t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node> m__0parent{};

  void gcMark();
  void dbEmit();

  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node(bbString l_key,t_mojo3d_graphics_AnimationClip* l_value,t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node_Color l_color,t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node* l_parent);
  ~t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node();

  void m_Value(t_mojo3d_graphics_AnimationClip* l_value);
  t_mojo3d_graphics_AnimationClip* m_Value();
  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node* m_PrevNode();
  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node* m_NextNode();
  bbString m_Key();
  bbInt m_Count(bbInt l_n);
  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node* m_Copy(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node* l_parent);

  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node(){
  }
};
bbString bbDBType(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node**);
bbString bbDBValue(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node**);

// Class std.collections.Map<monkey.types.String,mojo3d.graphics.AnimationClip>.Iterator

struct t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node;
bbString bbDBType(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node**);
bbString bbDBValue(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node**);


struct t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Iterator{
  typedef t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Iterator bb_struct_type;
  const char *typeName()const{return "t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Iterator";}

  bbGCVar<t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node> m__0node{};
  static void dbEmit(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Iterator*);

  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Iterator(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node* l_node);
  ~t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Iterator();

  bbBool m_Valid();
  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node* m_Current();
  void m_Bump();

  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Iterator(){
  }

  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Iterator(bbNullCtor_t){
  }
};
bbString bbDBType(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Iterator*);
bbString bbDBValue(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Iterator*);

int bbCompare(const t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Iterator&x,const t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Iterator&y);

void bbGCMark(const t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Iterator&);

// Class std.collections.Map<monkey.types.String,mojo3d.graphics.AnimationClip>.KeyIterator

struct t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node;
bbString bbDBType(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node**);
bbString bbDBValue(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node**);


struct t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_KeyIterator{
  typedef t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_KeyIterator bb_struct_type;
  const char *typeName()const{return "t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_KeyIterator";}

  bbGCVar<t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node> m__0node{};
  static void dbEmit(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_KeyIterator*);

  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_KeyIterator(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node* l_node);
  ~t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_KeyIterator();

  bbBool m_Valid();
  bbString m_Current();
  void m_Bump();

  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_KeyIterator(){
  }

  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_KeyIterator(bbNullCtor_t){
  }
};
bbString bbDBType(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_KeyIterator*);
bbString bbDBValue(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_KeyIterator*);

int bbCompare(const t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_KeyIterator&x,const t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_KeyIterator&y);

void bbGCMark(const t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_KeyIterator&);

// Class std.collections.Map<monkey.types.String,mojo3d.graphics.AnimationClip>.MapKeys

struct t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2;
bbString bbDBType(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2**);
bbString bbDBValue(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2**);
struct t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_KeyIterator;
bbString bbDBType(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_KeyIterator*);
bbString bbDBValue(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_KeyIterator*);


struct t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_MapKeys{
  typedef t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_MapKeys bb_struct_type;
  const char *typeName()const{return "t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_MapKeys";}

  bbGCVar<t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2> m__0map{};
  static void dbEmit(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_MapKeys*);

  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_MapKeys(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2* l_map);
  ~t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_MapKeys();

  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_KeyIterator m_All();

  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_MapKeys(){
  }

  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_MapKeys(bbNullCtor_t){
  }
};
bbString bbDBType(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_MapKeys*);
bbString bbDBValue(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_MapKeys*);

int bbCompare(const t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_MapKeys&x,const t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_MapKeys&y);

void bbGCMark(const t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_MapKeys&);

// Class std.collections.Map<monkey.types.String,mojo3d.graphics.AnimationClip>.ValueIterator

struct t_mojo3d_graphics_AnimationClip;
#ifdef BB_NEWREFLECTION
bbTypeInfo *bbGetType( t_mojo3d_graphics_AnimationClip* const& );
#endif
bbString bbDBType(t_mojo3d_graphics_AnimationClip**);
bbString bbDBValue(t_mojo3d_graphics_AnimationClip**);
struct t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node;
bbString bbDBType(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node**);
bbString bbDBValue(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node**);


struct t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_ValueIterator{
  typedef t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_ValueIterator bb_struct_type;
  const char *typeName()const{return "t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_ValueIterator";}

  bbGCVar<t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node> m__0node{};
  static void dbEmit(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_ValueIterator*);

  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_ValueIterator(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node* l_node);
  ~t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_ValueIterator();

  bbBool m_Valid();
  t_mojo3d_graphics_AnimationClip* m_Current();
  void m_Bump();

  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_ValueIterator(){
  }

  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_ValueIterator(bbNullCtor_t){
  }
};
bbString bbDBType(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_ValueIterator*);
bbString bbDBValue(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_ValueIterator*);

int bbCompare(const t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_ValueIterator&x,const t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_ValueIterator&y);

void bbGCMark(const t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_ValueIterator&);

// Class std.collections.Map<monkey.types.String,mojo3d.graphics.AnimationClip>.MapValues

struct t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2;
bbString bbDBType(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2**);
bbString bbDBValue(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2**);
struct t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_ValueIterator;
bbString bbDBType(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_ValueIterator*);
bbString bbDBValue(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_ValueIterator*);


struct t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_MapValues{
  typedef t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_MapValues bb_struct_type;
  const char *typeName()const{return "t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_MapValues";}

  bbGCVar<t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2> m__0map{};
  static void dbEmit(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_MapValues*);

  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_MapValues(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2* l_map);
  ~t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_MapValues();

  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_ValueIterator m_All();

  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_MapValues(){
  }

  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_MapValues(bbNullCtor_t){
  }
};
bbString bbDBType(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_MapValues*);
bbString bbDBValue(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_MapValues*);

int bbCompare(const t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_MapValues&x,const t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_MapValues&y);

void bbGCMark(const t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_MapValues&);

// Class std.collections.Map<monkey.types.String,mojo3d.graphics.AnimationClip>

#include "monkey/monkey.buildv1.1.08/macos_debug/include/monkey_types.h"

struct t_mojo3d_graphics_AnimationClip;
#ifdef BB_NEWREFLECTION
bbTypeInfo *bbGetType( t_mojo3d_graphics_AnimationClip* const& );
#endif
bbString bbDBType(t_mojo3d_graphics_AnimationClip**);
bbString bbDBValue(t_mojo3d_graphics_AnimationClip**);
struct t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2;
bbString bbDBType(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2**);
bbString bbDBValue(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2**);
struct t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Iterator;
bbString bbDBType(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Iterator*);
bbString bbDBValue(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Iterator*);
struct t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_MapKeys;
bbString bbDBType(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_MapKeys*);
bbString bbDBValue(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_MapKeys*);
struct t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_MapValues;
bbString bbDBType(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_MapValues*);
bbString bbDBValue(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_MapValues*);
struct t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node;
bbString bbDBType(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node**);
bbString bbDBValue(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node**);


struct t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2 : public bbObject{
  typedef t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2 *bb_object_type;

  const char *typeName()const{return "t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2";}

  bbGCVar<t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node> m__0root{};

  void gcMark();
  void dbEmit();

  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node* l_root);
  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2();
  ~t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2();

  void m__idxeq(bbString l_key,t_mojo3d_graphics_AnimationClip* l_value);
  t_mojo3d_graphics_AnimationClip* m__idx(bbString l_key);
  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_MapValues m_Values();
  bbBool m_Update(bbString l_key,t_mojo3d_graphics_AnimationClip* l_value);
  bbBool m_Set(bbString l_key,t_mojo3d_graphics_AnimationClip* l_value);
  void m_RotateRight(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node* l_node);
  void m_RotateLeft(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node* l_node);
  void m_RemoveNode(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node* l_node);
  bbBool m_Remove(bbString l_key);
  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node* m_LastNode();
  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_MapKeys m_Keys();
  void m_InsertFixup(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node* l_node);
  t_mojo3d_graphics_AnimationClip* m_Get(bbString l_key);
  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node* m_FirstNode();
  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node* m_FindNode(bbString l_key);
  bbBool m_Empty();
  void m_DeleteFixup(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node* l_node,t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node* l_parent);
  bbInt m_Count();
  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2* m_Copy();
  bbBool m_Contains(bbString l_key);
  void m_Clear();
  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Iterator m_All();
  bbBool m_Add(bbString l_key,t_mojo3d_graphics_AnimationClip* l_value);
};
bbString bbDBType(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2**);
bbString bbDBValue(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2**);

#endif
