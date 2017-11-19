
#include "test.buildv1.1.08/macos_debug/include/test_std_collections_2map.h"

bbString bbDBType(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node_Color*p){
  	return "std.collections.Map<monkey.types.String,mojo3d.graphics.AnimationClip>.Node.Color";
}
bbString bbDBValue(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node_Color*p){
  	return bbString( *(int*)p );
}

#include "test.buildv1.1.08/macos_debug/include/test__1source_2animsprite.h"
#include "test.buildv1.1.08/macos_debug/include/test_std_collections_2map.h"


void t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node::gcMark(){
  bbGCMark(m__0value);
  bbGCMark(m__0left);
  bbGCMark(m__0right);
  bbGCMark(m__0parent);
}

void t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node::dbEmit(){
  puts( "[std.collections.Map<monkey.types.String,mojo3d.graphics.AnimationClip>.Node]");
  bbDBEmit("_key",&m__0key);
  bbDBEmit("_value",&m__0value);
  bbDBEmit("_color",&m__0color);
  bbDBEmit("_left",&m__0left);
  bbDBEmit("_right",&m__0right);
  bbDBEmit("_parent",&m__0parent);
}

t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node::t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node(bbString l_key,t_mojo3d_graphics_AnimationClip* l_value,t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node_Color l_color,t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node* l_parent){
  bbDBFrame db_f{"new:Void(key:monkey.types.String,value:mojo3d.graphics.AnimationClip,color:std.collections.Map<monkey.types.String,mojo3d.graphics.AnimationClip>.Node.Color,parent:std.collections.Map<monkey.types.String,mojo3d.graphics.AnimationClip>.Node)","/Applications/Blitz/Monkey2/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("key",&l_key);
  bbDBLocal("value",&l_value);
  bbDBLocal("color",&l_color);
  bbDBLocal("parent",&l_parent);
  bbDBStmt(278531);
  this->m__0key=l_key;
  bbDBStmt(282627);
  this->m__0value=l_value;
  bbDBStmt(286723);
  this->m__0color=l_color;
  bbDBStmt(290819);
  this->m__0parent=l_parent;
}
t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node::~t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node(){
}

void t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node::m_Value(t_mojo3d_graphics_AnimationClip* l_value){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Value:Void(value:mojo3d.graphics.AnimationClip)","/Applications/Blitz/Monkey2/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("value",&l_value);
  bbDBStmt(204803);
  this->m__0value=l_value;
}

t_mojo3d_graphics_AnimationClip* t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node::m_Value(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Value:mojo3d.graphics.AnimationClip()","/Applications/Blitz/Monkey2/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(196611);
  return this->m__0value.get();
}

t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node* t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node::m_PrevNode(){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node* l_node{};
    t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node* l_parent{};
    void gcMark(){
      bbGCMark(l_node);
      bbGCMark(l_parent);
    }
  }f0{};
  bbDBFrame db_f{"PrevNode:std.collections.Map<monkey.types.String,mojo3d.graphics.AnimationClip>.Node()","/Applications/Blitz/Monkey2/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(397315);
  if(bbBool(this->m__0left.get())){
    struct f1_t : public bbGCFrame{
      t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node* l_node{};
      void gcMark(){
        bbGCMark(l_node);
      }
    }f1{};
    bbDBBlock db_blk;
    bbDBStmt(401418);
    f1.l_node=this->m__0left.get();
    bbDBLocal("node",&f1.l_node);
    bbDBStmt(405508);
    {
      bbDBLoop db_loop;
      while(bbBool(f1.l_node->m__0right.get())){
        bbDBBlock db_blk;
        bbDBStmt(409605);
        f1.l_node=f1.l_node->m__0right.get();
      }
    }
    bbDBStmt(417796);
    return f1.l_node;
  }
  bbDBStmt(425993);
  f0.l_node=this;
  bbDBLocal("node",&f0.l_node);
  f0.l_parent=this->m__0parent.get();
  bbDBLocal("parent",&f0.l_parent);
  bbDBStmt(430083);
  {
    bbDBLoop db_loop;
    while((bbBool(f0.l_parent)&&(f0.l_node==f0.l_parent->m__0left.get()))){
      bbDBBlock db_blk;
      bbDBStmt(434180);
      f0.l_node=f0.l_parent;
      bbDBStmt(438276);
      f0.l_parent=f0.l_parent->m__0parent.get();
    }
  }
  bbDBStmt(446467);
  return f0.l_parent;
}

t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node* t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node::m_NextNode(){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node* l_node{};
    t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node* l_parent{};
    void gcMark(){
      bbGCMark(l_node);
      bbGCMark(l_parent);
    }
  }f0{};
  bbDBFrame db_f{"NextNode:std.collections.Map<monkey.types.String,mojo3d.graphics.AnimationClip>.Node()","/Applications/Blitz/Monkey2/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(331779);
  if(bbBool(this->m__0right.get())){
    struct f1_t : public bbGCFrame{
      t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node* l_node{};
      void gcMark(){
        bbGCMark(l_node);
      }
    }f1{};
    bbDBBlock db_blk;
    bbDBStmt(335882);
    f1.l_node=this->m__0right.get();
    bbDBLocal("node",&f1.l_node);
    bbDBStmt(339972);
    {
      bbDBLoop db_loop;
      while(bbBool(f1.l_node->m__0left.get())){
        bbDBBlock db_blk;
        bbDBStmt(344069);
        f1.l_node=f1.l_node->m__0left.get();
      }
    }
    bbDBStmt(352260);
    return f1.l_node;
  }
  bbDBStmt(360457);
  f0.l_node=this;
  bbDBLocal("node",&f0.l_node);
  f0.l_parent=this->m__0parent.get();
  bbDBLocal("parent",&f0.l_parent);
  bbDBStmt(364547);
  {
    bbDBLoop db_loop;
    while((bbBool(f0.l_parent)&&(f0.l_node==f0.l_parent->m__0right.get()))){
      bbDBBlock db_blk;
      bbDBStmt(368644);
      f0.l_node=f0.l_parent;
      bbDBStmt(372740);
      f0.l_parent=f0.l_parent->m__0parent.get();
    }
  }
  bbDBStmt(380931);
  return f0.l_parent;
}

bbString t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node::m_Key(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Key:monkey.types.String()","/Applications/Blitz/Monkey2/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(159747);
  return this->m__0key;
}

bbInt t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node::m_Count(bbInt l_n){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Count:monkey.types.Int(n:monkey.types.Int)","/Applications/Blitz/Monkey2/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("n",&l_n);
  bbDBStmt(307203);
  if(bbBool(this->m__0left.get())){
    bbDBBlock db_blk;
    l_n=this->m__0left.get()->m_Count(l_n);
  }
  bbDBStmt(311299);
  if(bbBool(this->m__0right.get())){
    bbDBBlock db_blk;
    l_n=this->m__0right.get()->m_Count(l_n);
  }
  bbDBStmt(315395);
  return (l_n+1);
}

t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node* t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node::m_Copy(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node* l_parent){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node* l_node{};
    void gcMark(){
      bbGCMark(l_node);
    }
  }f0{};
  bbDBFrame db_f{"Copy:std.collections.Map<monkey.types.String,mojo3d.graphics.AnimationClip>.Node(parent:std.collections.Map<monkey.types.String,mojo3d.graphics.AnimationClip>.Node)","/Applications/Blitz/Monkey2/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("parent",&l_parent);
  bbDBStmt(462857);
  f0.l_node=bbGCNew<t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node>(this->m__0key,this->m__0value.get(),this->m__0color,l_parent);
  bbDBLocal("node",&f0.l_node);
  bbDBStmt(466947);
  if(bbBool(this->m__0left.get())){
    bbDBBlock db_blk;
    f0.l_node->m__0left=this->m__0left.get()->m_Copy(f0.l_node);
  }
  bbDBStmt(471043);
  if(bbBool(this->m__0right.get())){
    bbDBBlock db_blk;
    f0.l_node->m__0right=this->m__0right.get()->m_Copy(f0.l_node);
  }
  bbDBStmt(475139);
  return f0.l_node;
}
bbString bbDBType(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node**){
  return "std.collections.Map<monkey.types.String,mojo3d.graphics.AnimationClip>.Node";
}
bbString bbDBValue(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node**p){
  return bbDBObjectValue(*p);
}

void t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Iterator::dbEmit(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Iterator*p){
  bbDBEmit("_node",&p->m__0node);
}

t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Iterator::t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Iterator(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node* l_node){
  bbDBFrame db_f{"new:Void(node:std.collections.Map<monkey.types.String,mojo3d.graphics.AnimationClip>.Node)","/Applications/Blitz/Monkey2/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Iterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("node",&l_node);
  bbDBStmt(573443);
  (*this).m__0node=l_node;
}
t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Iterator::~t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Iterator(){
}

bbBool t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Iterator::m_Valid(){
  bbDBFrame db_f{"Valid:monkey.types.Bool()","/Applications/Blitz/Monkey2/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Iterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(507907);
  return bbBool((*this).m__0node.get());
}

t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node* t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Iterator::m_Current(){
  bbDBFrame db_f{"Current:std.collections.Map<monkey.types.String,mojo3d.graphics.AnimationClip>.Node()","/Applications/Blitz/Monkey2/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Iterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(524291);
  return (*this).m__0node.get();
}

void t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Iterator::m_Bump(){
  bbDBFrame db_f{"Bump:Void()","/Applications/Blitz/Monkey2/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Iterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(540675);
  (*this).m__0node=(*this).m__0node.get()->m_NextNode();
}
bbString bbDBType(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Iterator*){
  return "std.collections.Map<monkey.types.String,mojo3d.graphics.AnimationClip>.Iterator";
}
bbString bbDBValue(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Iterator*p){
  return bbDBStructValue(p);
}

int bbCompare(const t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Iterator&x,const t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Iterator&y){
  if(int t=bbCompare(x.m__0node,y.m__0node)) return t;
  return 0;
}

void bbGCMark(const t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Iterator&t){
  bbGCMark(t.m__0node);
}

void t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_KeyIterator::dbEmit(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_KeyIterator*p){
  bbDBEmit("_node",&p->m__0node);
}

t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_KeyIterator::t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_KeyIterator(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node* l_node){
  bbDBFrame db_f{"new:Void(node:std.collections.Map<monkey.types.String,mojo3d.graphics.AnimationClip>.Node)","/Applications/Blitz/Monkey2/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_KeyIterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("node",&l_node);
  bbDBStmt(671747);
  (*this).m__0node=l_node;
}
t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_KeyIterator::~t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_KeyIterator(){
}

bbBool t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_KeyIterator::m_Valid(){
  bbDBFrame db_f{"Valid:monkey.types.Bool()","/Applications/Blitz/Monkey2/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_KeyIterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(606211);
  return bbBool((*this).m__0node.get());
}

bbString t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_KeyIterator::m_Current(){
  bbDBFrame db_f{"Current:monkey.types.String()","/Applications/Blitz/Monkey2/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_KeyIterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(622595);
  return (*this).m__0node.get()->m__0key;
}

void t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_KeyIterator::m_Bump(){
  bbDBFrame db_f{"Bump:Void()","/Applications/Blitz/Monkey2/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_KeyIterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(638979);
  (*this).m__0node=(*this).m__0node.get()->m_NextNode();
}
bbString bbDBType(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_KeyIterator*){
  return "std.collections.Map<monkey.types.String,mojo3d.graphics.AnimationClip>.KeyIterator";
}
bbString bbDBValue(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_KeyIterator*p){
  return bbDBStructValue(p);
}

int bbCompare(const t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_KeyIterator&x,const t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_KeyIterator&y){
  if(int t=bbCompare(x.m__0node,y.m__0node)) return t;
  return 0;
}

void bbGCMark(const t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_KeyIterator&t){
  bbGCMark(t.m__0node);
}

void t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_MapKeys::dbEmit(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_MapKeys*p){
  bbDBEmit("_map",&p->m__0map);
}

t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_MapKeys::t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_MapKeys(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2* l_map){
  bbDBFrame db_f{"new:Void(map:std.collections.Map<monkey.types.String,mojo3d.graphics.AnimationClip>)","/Applications/Blitz/Monkey2/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_MapKeys*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("map",&l_map);
  bbDBStmt(835587);
  (*this).m__0map=l_map;
}
t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_MapKeys::~t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_MapKeys(){
}

t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_KeyIterator t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_MapKeys::m_All(){
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  bbDBFrame db_f{"All:std.collections.Map<monkey.types.String,mojo3d.graphics.AnimationClip>.KeyIterator()","/Applications/Blitz/Monkey2/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_MapKeys*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(802819);
  return t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_KeyIterator{f0.t0=(*this).m__0map.get()->m_FirstNode()};
}
bbString bbDBType(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_MapKeys*){
  return "std.collections.Map<monkey.types.String,mojo3d.graphics.AnimationClip>.MapKeys";
}
bbString bbDBValue(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_MapKeys*p){
  return bbDBStructValue(p);
}

int bbCompare(const t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_MapKeys&x,const t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_MapKeys&y){
  if(int t=bbCompare(x.m__0map,y.m__0map)) return t;
  return 0;
}

void bbGCMark(const t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_MapKeys&t){
  bbGCMark(t.m__0map);
}

void t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_ValueIterator::dbEmit(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_ValueIterator*p){
  bbDBEmit("_node",&p->m__0node);
}

t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_ValueIterator::t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_ValueIterator(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node* l_node){
  bbDBFrame db_f{"new:Void(node:std.collections.Map<monkey.types.String,mojo3d.graphics.AnimationClip>.Node)","/Applications/Blitz/Monkey2/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_ValueIterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("node",&l_node);
  bbDBStmt(770051);
  (*this).m__0node=l_node;
}
t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_ValueIterator::~t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_ValueIterator(){
}

bbBool t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_ValueIterator::m_Valid(){
  bbDBFrame db_f{"Valid:monkey.types.Bool()","/Applications/Blitz/Monkey2/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_ValueIterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(704515);
  return bbBool((*this).m__0node.get());
}

t_mojo3d_graphics_AnimationClip* t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_ValueIterator::m_Current(){
  bbDBFrame db_f{"Current:mojo3d.graphics.AnimationClip()","/Applications/Blitz/Monkey2/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_ValueIterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(720899);
  return (*this).m__0node.get()->m__0value.get();
}

void t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_ValueIterator::m_Bump(){
  bbDBFrame db_f{"Bump:Void()","/Applications/Blitz/Monkey2/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_ValueIterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(737283);
  (*this).m__0node=(*this).m__0node.get()->m_NextNode();
}
bbString bbDBType(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_ValueIterator*){
  return "std.collections.Map<monkey.types.String,mojo3d.graphics.AnimationClip>.ValueIterator";
}
bbString bbDBValue(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_ValueIterator*p){
  return bbDBStructValue(p);
}

int bbCompare(const t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_ValueIterator&x,const t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_ValueIterator&y){
  if(int t=bbCompare(x.m__0node,y.m__0node)) return t;
  return 0;
}

void bbGCMark(const t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_ValueIterator&t){
  bbGCMark(t.m__0node);
}

void t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_MapValues::dbEmit(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_MapValues*p){
  bbDBEmit("_map",&p->m__0map);
}

t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_MapValues::t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_MapValues(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2* l_map){
  bbDBFrame db_f{"new:Void(map:std.collections.Map<monkey.types.String,mojo3d.graphics.AnimationClip>)","/Applications/Blitz/Monkey2/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_MapValues*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("map",&l_map);
  bbDBStmt(901123);
  (*this).m__0map=l_map;
}
t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_MapValues::~t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_MapValues(){
}

t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_ValueIterator t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_MapValues::m_All(){
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  bbDBFrame db_f{"All:std.collections.Map<monkey.types.String,mojo3d.graphics.AnimationClip>.ValueIterator()","/Applications/Blitz/Monkey2/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_MapValues*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(868355);
  return t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_ValueIterator{f0.t0=(*this).m__0map.get()->m_FirstNode()};
}
bbString bbDBType(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_MapValues*){
  return "std.collections.Map<monkey.types.String,mojo3d.graphics.AnimationClip>.MapValues";
}
bbString bbDBValue(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_MapValues*p){
  return bbDBStructValue(p);
}

int bbCompare(const t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_MapValues&x,const t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_MapValues&y){
  if(int t=bbCompare(x.m__0map,y.m__0map)) return t;
  return 0;
}

void bbGCMark(const t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_MapValues&t){
  bbGCMark(t.m__0map);
}

void t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2::gcMark(){
  bbGCMark(m__0root);
}

void t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2::dbEmit(){
  puts( "[std.collections.Map<monkey.types.String,mojo3d.graphics.AnimationClip>]");
  bbDBEmit("_root",&m__0root);
}

t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2::t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node* l_root){
  bbDBFrame db_f{"new:Void(root:std.collections.Map<monkey.types.String,mojo3d.graphics.AnimationClip>.Node)","/Applications/Blitz/Monkey2/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("root",&l_root);
  bbDBStmt(1949698);
  this->m__0root=l_root;
}

t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2::t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2(){
  bbDBFrame db_f{"new:Void()","/Applications/Blitz/Monkey2/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2*self=this;
  bbDBLocal("Self",&self);
}
t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2::~t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2(){
}

void t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2::m__idxeq(bbString l_key,t_mojo3d_graphics_AnimationClip* l_value){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"[]=:Void(key:monkey.types.String,value:mojo3d.graphics.AnimationClip)","/Applications/Blitz/Monkey2/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("key",&l_key);
  bbDBLocal("value",&l_value);
  bbDBStmt(1323010);
  this->m_Set(l_key,l_value);
}

t_mojo3d_graphics_AnimationClip* t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2::m__idx(bbString l_key){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node* l_node{};
    void gcMark(){
      bbGCMark(l_node);
    }
  }f0{};
  bbDBFrame db_f{"[]:mojo3d.graphics.AnimationClip(key:monkey.types.String)","/Applications/Blitz/Monkey2/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("key",&l_key);
  bbDBStmt(1368072);
  f0.l_node=this->m_FindNode(l_key);
  bbDBLocal("node",&f0.l_node);
  bbDBStmt(1372162);
  if(!bbBool(f0.l_node)){
    bbDBBlock db_blk;
    return ((t_mojo3d_graphics_AnimationClip*)0);
  }
  bbDBStmt(1376258);
  return f0.l_node->m__0value.get();
}

t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_MapValues t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2::m_Values(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Values:std.collections.Map<monkey.types.String,mojo3d.graphics.AnimationClip>.MapValues()","/Applications/Blitz/Monkey2/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(1052674);
  return t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_MapValues{this};
}

bbBool t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2::m_Update(bbString l_key,t_mojo3d_graphics_AnimationClip* l_value){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node* l_node{};
    void gcMark(){
      bbGCMark(l_node);
    }
  }f0{};
  bbDBFrame db_f{"Update:monkey.types.Bool(key:monkey.types.String,value:mojo3d.graphics.AnimationClip)","/Applications/Blitz/Monkey2/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("key",&l_key);
  bbDBLocal("value",&l_value);
  bbDBStmt(1794056);
  f0.l_node=this->m_FindNode(l_key);
  bbDBLocal("node",&f0.l_node);
  bbDBStmt(1798146);
  if(!bbBool(f0.l_node)){
    bbDBBlock db_blk;
    return false;
  }
  bbDBStmt(1802242);
  f0.l_node->m__0value=l_value;
  bbDBStmt(1806338);
  return true;
}

bbBool t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2::m_Set(bbString l_key,t_mojo3d_graphics_AnimationClip* l_value){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node* l_node{};
    t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node* l_parent{};
    void gcMark(){
      bbGCMark(l_node);
      bbGCMark(l_parent);
    }
  }f0{};
  bbDBFrame db_f{"Set:monkey.types.Bool(key:monkey.types.String,value:mojo3d.graphics.AnimationClip)","/Applications/Blitz/Monkey2/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("key",&l_key);
  bbDBLocal("value",&l_value);
  bbDBStmt(1445890);
  if(!bbBool(this->m__0root.get())){
    bbDBBlock db_blk;
    bbDBStmt(1449987);
    this->m__0root=bbGCNew<t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node>(l_key,l_value,t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node_Color(0),((t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node*)0));
    bbDBStmt(1454083);
    return true;
  }
  bbDBStmt(1466376);
  f0.l_node=this->m__0root.get();
  bbDBLocal("node",&f0.l_node);
  bbDBLocal("parent",&f0.l_parent);
  bbInt l_cmp{};
  bbDBLocal("cmp",&l_cmp);
  bbDBStmt(1474562);
  {
    bbDBLoop db_loop;
    while(bbBool(f0.l_node)){
      bbDBBlock db_blk;
      bbDBStmt(1478659);
      f0.l_parent=f0.l_node;
      bbDBStmt(1482755);
      l_cmp=bbCompare(l_key,f0.l_node->m__0key);
      bbDBStmt(1486851);
      if((l_cmp>bbInt(0))){
        bbDBBlock db_blk;
        bbDBStmt(1490948);
        f0.l_node=f0.l_node->m__0right.get();
      }else if(bbDBStmt(1495043),(l_cmp<bbInt(0))){
        bbDBBlock db_blk;
        bbDBStmt(1499140);
        f0.l_node=f0.l_node->m__0left.get();
      }else{
        bbDBStmt(1503235);
        bbDBBlock db_blk;
        bbDBStmt(1507332);
        f0.l_node->m__0value=l_value;
        bbDBStmt(1511428);
        return false;
      }
    }
  }
  bbDBStmt(1527810);
  f0.l_node=bbGCNew<t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node>(l_key,l_value,t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node_Color(0),f0.l_parent);
  bbDBStmt(1536002);
  if((l_cmp>bbInt(0))){
    bbDBBlock db_blk;
    f0.l_parent->m__0right=f0.l_node;
  }else{
    bbDBBlock db_blk;
    f0.l_parent->m__0left=f0.l_node;
  }
  bbDBStmt(1544194);
  this->m_InsertFixup(f0.l_node);
  bbDBStmt(1552386);
  return true;
}

void t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2::m_RotateRight(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node* l_node){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node* l_child{};
    void gcMark(){
      bbGCMark(l_child);
    }
  }f0{};
  bbDBFrame db_f{"RotateRight:Void(node:std.collections.Map<monkey.types.String,mojo3d.graphics.AnimationClip>.Node)","/Applications/Blitz/Monkey2/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("node",&l_node);
  bbDBStmt(2359304);
  f0.l_child=l_node->m__0left.get();
  bbDBLocal("child",&f0.l_child);
  bbDBStmt(2363394);
  l_node->m__0left=f0.l_child->m__0right.get();
  bbDBStmt(2367490);
  if(bbBool(f0.l_child->m__0right.get())){
    bbDBBlock db_blk;
    bbDBStmt(2371587);
    f0.l_child->m__0right.get()->m__0parent=l_node;
  }
  bbDBStmt(2379778);
  f0.l_child->m__0parent=l_node->m__0parent.get();
  bbDBStmt(2383874);
  if(bbBool(l_node->m__0parent.get())){
    bbDBBlock db_blk;
    bbDBStmt(2387971);
    if((l_node==l_node->m__0parent.get()->m__0right.get())){
      bbDBBlock db_blk;
      bbDBStmt(2392068);
      l_node->m__0parent.get()->m__0right=f0.l_child;
    }else{
      bbDBStmt(2396163);
      bbDBBlock db_blk;
      bbDBStmt(2400260);
      l_node->m__0parent.get()->m__0left=f0.l_child;
    }
  }else{
    bbDBStmt(2408450);
    bbDBBlock db_blk;
    bbDBStmt(2412547);
    this->m__0root=f0.l_child;
  }
  bbDBStmt(2420738);
  f0.l_child->m__0right=l_node;
  bbDBStmt(2424834);
  l_node->m__0parent=f0.l_child;
}

void t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2::m_RotateLeft(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node* l_node){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node* l_child{};
    void gcMark(){
      bbGCMark(l_child);
    }
  }f0{};
  bbDBFrame db_f{"RotateLeft:Void(node:std.collections.Map<monkey.types.String,mojo3d.graphics.AnimationClip>.Node)","/Applications/Blitz/Monkey2/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("node",&l_node);
  bbDBStmt(2277384);
  f0.l_child=l_node->m__0right.get();
  bbDBLocal("child",&f0.l_child);
  bbDBStmt(2281474);
  l_node->m__0right=f0.l_child->m__0left.get();
  bbDBStmt(2285570);
  if(bbBool(f0.l_child->m__0left.get())){
    bbDBBlock db_blk;
    bbDBStmt(2289667);
    f0.l_child->m__0left.get()->m__0parent=l_node;
  }
  bbDBStmt(2297858);
  f0.l_child->m__0parent=l_node->m__0parent.get();
  bbDBStmt(2301954);
  if(bbBool(l_node->m__0parent.get())){
    bbDBBlock db_blk;
    bbDBStmt(2306051);
    if((l_node==l_node->m__0parent.get()->m__0left.get())){
      bbDBBlock db_blk;
      bbDBStmt(2310148);
      l_node->m__0parent.get()->m__0left=f0.l_child;
    }else{
      bbDBStmt(2314243);
      bbDBBlock db_blk;
      bbDBStmt(2318340);
      l_node->m__0parent.get()->m__0right=f0.l_child;
    }
  }else{
    bbDBStmt(2326530);
    bbDBBlock db_blk;
    bbDBStmt(2330627);
    this->m__0root=f0.l_child;
  }
  bbDBStmt(2338818);
  f0.l_child->m__0left=l_node;
  bbDBStmt(2342914);
  l_node->m__0parent=f0.l_child;
}

void t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2::m_RemoveNode(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node* l_node){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node* l_child{};
    t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node* l_parent{};
    t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node* l_splice{};
    void gcMark(){
      bbGCMark(l_child);
      bbGCMark(l_parent);
      bbGCMark(l_splice);
    }
  }f0{};
  bbDBFrame db_f{"RemoveNode:Void(node:std.collections.Map<monkey.types.String,mojo3d.graphics.AnimationClip>.Node)","/Applications/Blitz/Monkey2/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("node",&l_node);
  bbDBStmt(2109448);
  bbDBLocal("splice",&f0.l_splice);
  bbDBLocal("child",&f0.l_child);
  bbDBStmt(2117634);
  if(!bbBool(l_node->m__0left.get())){
    bbDBBlock db_blk;
    bbDBStmt(2121731);
    f0.l_splice=l_node;
    bbDBStmt(2125827);
    f0.l_child=l_node->m__0right.get();
  }else if(bbDBStmt(2129922),!bbBool(l_node->m__0right.get())){
    bbDBBlock db_blk;
    bbDBStmt(2134019);
    f0.l_splice=l_node;
    bbDBStmt(2138115);
    f0.l_child=l_node->m__0left.get();
  }else{
    bbDBStmt(2142210);
    bbDBBlock db_blk;
    bbDBStmt(2146307);
    f0.l_splice=l_node->m__0left.get();
    bbDBStmt(2150403);
    {
      bbDBLoop db_loop;
      while(bbBool(f0.l_splice->m__0right.get())){
        bbDBBlock db_blk;
        bbDBStmt(2154500);
        f0.l_splice=f0.l_splice->m__0right.get();
      }
    }
    bbDBStmt(2162691);
    f0.l_child=f0.l_splice->m__0left.get();
    bbDBStmt(2166787);
    l_node->m__0key=f0.l_splice->m__0key;
    bbDBStmt(2170883);
    l_node->m__0value=f0.l_splice->m__0value.get();
  }
  bbDBStmt(2183176);
  f0.l_parent=f0.l_splice->m__0parent.get();
  bbDBLocal("parent",&f0.l_parent);
  bbDBStmt(2191362);
  if(bbBool(f0.l_child)){
    bbDBBlock db_blk;
    bbDBStmt(2195459);
    f0.l_child->m__0parent=f0.l_parent;
  }
  bbDBStmt(2207746);
  if(!bbBool(f0.l_parent)){
    bbDBBlock db_blk;
    bbDBStmt(2211843);
    this->m__0root=f0.l_child;
    bbDBStmt(2215939);
    return;
  }
  bbDBStmt(2228226);
  if((f0.l_splice==f0.l_parent->m__0left.get())){
    bbDBBlock db_blk;
    bbDBStmt(2232323);
    f0.l_parent->m__0left=f0.l_child;
  }else{
    bbDBStmt(2236418);
    bbDBBlock db_blk;
    bbDBStmt(2240515);
    f0.l_parent->m__0right=f0.l_child;
  }
  bbDBStmt(2252802);
  if((f0.l_splice->m__0color==t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node_Color(1))){
    bbDBBlock db_blk;
    bbDBStmt(2256899);
    this->m_DeleteFixup(f0.l_child,f0.l_parent);
  }
}

bbBool t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2::m_Remove(bbString l_key){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node* l_node{};
    void gcMark(){
      bbGCMark(l_node);
    }
  }f0{};
  bbDBFrame db_f{"Remove:monkey.types.Bool(key:monkey.types.String)","/Applications/Blitz/Monkey2/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("key",&l_key);
  bbDBStmt(1904648);
  f0.l_node=this->m_FindNode(l_key);
  bbDBLocal("node",&f0.l_node);
  bbDBStmt(1908738);
  if(!bbBool(f0.l_node)){
    bbDBBlock db_blk;
    return false;
  }
  bbDBStmt(1912834);
  this->m_RemoveNode(f0.l_node);
  bbDBStmt(1916930);
  return true;
}

t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node* t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2::m_LastNode(){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node* l_node{};
    void gcMark(){
      bbGCMark(l_node);
    }
  }f0{};
  bbDBFrame db_f{"LastNode:std.collections.Map<monkey.types.String,mojo3d.graphics.AnimationClip>.Node()","/Applications/Blitz/Monkey2/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(2007042);
  if(!bbBool(this->m__0root.get())){
    bbDBBlock db_blk;
    return ((t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node*)0);
  }
  bbDBStmt(2015240);
  f0.l_node=this->m__0root.get();
  bbDBLocal("node",&f0.l_node);
  bbDBStmt(2019330);
  {
    bbDBLoop db_loop;
    while(bbBool(f0.l_node->m__0right.get())){
      bbDBBlock db_blk;
      bbDBStmt(2023427);
      f0.l_node=f0.l_node->m__0right.get();
    }
  }
  bbDBStmt(2031618);
  return f0.l_node;
}

t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_MapKeys t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2::m_Keys(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Keys:std.collections.Map<monkey.types.String,mojo3d.graphics.AnimationClip>.MapKeys()","/Applications/Blitz/Monkey2/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(1007618);
  return t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_MapKeys{this};
}

void t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2::m_InsertFixup(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node* l_node){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node* l_node{};
    f0_t(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node* l_node):l_node(l_node){
    }
    void gcMark(){
      bbGCMark(l_node);
    }
  }f0{l_node};
  bbDBFrame db_f{"InsertFixup:Void(node:std.collections.Map<monkey.types.String,mojo3d.graphics.AnimationClip>.Node)","/Applications/Blitz/Monkey2/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("node",&f0.l_node);
  bbDBStmt(2441218);
  {
    bbDBLoop db_loop;
    while(((bbBool(f0.l_node->m__0parent.get())&&(f0.l_node->m__0parent.get()->m__0color==t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node_Color(0)))&&bbBool(f0.l_node->m__0parent.get()->m__0parent.get()))){
      bbDBBlock db_blk;
      bbDBStmt(2445315);
      if((f0.l_node->m__0parent.get()==f0.l_node->m__0parent.get()->m__0parent.get()->m__0left.get())){
        struct f2_t : public bbGCFrame{
          t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node* l_uncle{};
          void gcMark(){
            bbGCMark(l_uncle);
          }
        }f2{};
        bbDBBlock db_blk;
        bbDBStmt(2449418);
        f2.l_uncle=f0.l_node->m__0parent.get()->m__0parent.get()->m__0right.get();
        bbDBLocal("uncle",&f2.l_uncle);
        bbDBStmt(2453508);
        if((bbBool(f2.l_uncle)&&(f2.l_uncle->m__0color==t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node_Color(0)))){
          bbDBBlock db_blk;
          bbDBStmt(2457605);
          f0.l_node->m__0parent.get()->m__0color=t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node_Color(1);
          bbDBStmt(2461701);
          f2.l_uncle->m__0color=t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node_Color(1);
          bbDBStmt(2465797);
          f2.l_uncle->m__0parent.get()->m__0color=t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node_Color(0);
          bbDBStmt(2469893);
          f0.l_node=f2.l_uncle->m__0parent.get();
        }else{
          bbDBStmt(2473988);
          bbDBBlock db_blk;
          bbDBStmt(2478085);
          if((f0.l_node==f0.l_node->m__0parent.get()->m__0right.get())){
            bbDBBlock db_blk;
            bbDBStmt(2482182);
            f0.l_node=f0.l_node->m__0parent.get();
            bbDBStmt(2486278);
            this->m_RotateLeft(f0.l_node);
          }
          bbDBStmt(2494469);
          f0.l_node->m__0parent.get()->m__0color=t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node_Color(1);
          bbDBStmt(2498565);
          f0.l_node->m__0parent.get()->m__0parent.get()->m__0color=t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node_Color(0);
          bbDBStmt(2502661);
          this->m_RotateRight(f0.l_node->m__0parent.get()->m__0parent.get());
        }
      }else{
        bbDBStmt(2510851);
        struct f2_t : public bbGCFrame{
          t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node* l_uncle{};
          void gcMark(){
            bbGCMark(l_uncle);
          }
        }f2{};
        bbDBBlock db_blk;
        bbDBStmt(2514954);
        f2.l_uncle=f0.l_node->m__0parent.get()->m__0parent.get()->m__0left.get();
        bbDBLocal("uncle",&f2.l_uncle);
        bbDBStmt(2519044);
        if((bbBool(f2.l_uncle)&&(f2.l_uncle->m__0color==t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node_Color(0)))){
          bbDBBlock db_blk;
          bbDBStmt(2523141);
          f0.l_node->m__0parent.get()->m__0color=t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node_Color(1);
          bbDBStmt(2527237);
          f2.l_uncle->m__0color=t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node_Color(1);
          bbDBStmt(2531333);
          f2.l_uncle->m__0parent.get()->m__0color=t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node_Color(0);
          bbDBStmt(2535429);
          f0.l_node=f2.l_uncle->m__0parent.get();
        }else{
          bbDBStmt(2539524);
          bbDBBlock db_blk;
          bbDBStmt(2543621);
          if((f0.l_node==f0.l_node->m__0parent.get()->m__0left.get())){
            bbDBBlock db_blk;
            bbDBStmt(2547718);
            f0.l_node=f0.l_node->m__0parent.get();
            bbDBStmt(2551814);
            this->m_RotateRight(f0.l_node);
          }
          bbDBStmt(2560005);
          f0.l_node->m__0parent.get()->m__0color=t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node_Color(1);
          bbDBStmt(2564101);
          f0.l_node->m__0parent.get()->m__0parent.get()->m__0color=t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node_Color(0);
          bbDBStmt(2568197);
          this->m_RotateLeft(f0.l_node->m__0parent.get()->m__0parent.get());
        }
      }
    }
  }
  bbDBStmt(2584578);
  this->m__0root.get()->m__0color=t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node_Color(1);
}

t_mojo3d_graphics_AnimationClip* t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2::m_Get(bbString l_key){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node* l_node{};
    void gcMark(){
      bbGCMark(l_node);
    }
  }f0{};
  bbDBFrame db_f{"Get:mojo3d.graphics.AnimationClip(key:monkey.types.String)","/Applications/Blitz/Monkey2/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("key",&l_key);
  bbDBStmt(1851400);
  f0.l_node=this->m_FindNode(l_key);
  bbDBLocal("node",&f0.l_node);
  bbDBStmt(1855490);
  if(bbBool(f0.l_node)){
    bbDBBlock db_blk;
    return f0.l_node->m__0value.get();
  }
  bbDBStmt(1859586);
  return ((t_mojo3d_graphics_AnimationClip*)0);
}

t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node* t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2::m_FirstNode(){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node* l_node{};
    void gcMark(){
      bbGCMark(l_node);
    }
  }f0{};
  bbDBFrame db_f{"FirstNode:std.collections.Map<monkey.types.String,mojo3d.graphics.AnimationClip>.Node()","/Applications/Blitz/Monkey2/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(1966082);
  if(!bbBool(this->m__0root.get())){
    bbDBBlock db_blk;
    return ((t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node*)0);
  }
  bbDBStmt(1974280);
  f0.l_node=this->m__0root.get();
  bbDBLocal("node",&f0.l_node);
  bbDBStmt(1978370);
  {
    bbDBLoop db_loop;
    while(bbBool(f0.l_node->m__0left.get())){
      bbDBBlock db_blk;
      bbDBStmt(1982467);
      f0.l_node=f0.l_node->m__0left.get();
    }
  }
  bbDBStmt(1990658);
  return f0.l_node;
}

t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node* t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2::m_FindNode(bbString l_key){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node* l_node{};
    void gcMark(){
      bbGCMark(l_node);
    }
  }f0{};
  bbDBFrame db_f{"FindNode:std.collections.Map<monkey.types.String,mojo3d.graphics.AnimationClip>.Node(key:monkey.types.String)","/Applications/Blitz/Monkey2/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("key",&l_key);
  bbDBStmt(2048008);
  f0.l_node=this->m__0root.get();
  bbDBLocal("node",&f0.l_node);
  bbDBStmt(2052098);
  {
    bbDBLoop db_loop;
    while(bbBool(f0.l_node)){
      bbDBBlock db_blk;
      bbDBStmt(2056201);
      bbInt l_cmp=bbCompare(l_key,f0.l_node->m__0key);
      bbDBLocal("cmp",&l_cmp);
      bbDBStmt(2060291);
      if((l_cmp>bbInt(0))){
        bbDBBlock db_blk;
        bbDBStmt(2064388);
        f0.l_node=f0.l_node->m__0right.get();
      }else if(bbDBStmt(2068483),(l_cmp<bbInt(0))){
        bbDBBlock db_blk;
        bbDBStmt(2072580);
        f0.l_node=f0.l_node->m__0left.get();
      }else{
        bbDBStmt(2076675);
        bbDBBlock db_blk;
        bbDBStmt(2080772);
        return f0.l_node;
      }
    }
  }
  bbDBStmt(2093058);
  return ((t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node*)0);
}

bbBool t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2::m_Empty(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Empty:monkey.types.Bool()","/Applications/Blitz/Monkey2/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(1200130);
  return (this->m__0root.get()==((t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node*)0));
}

void t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2::m_DeleteFixup(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node* l_node,t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node* l_parent){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node* l_node{};
    t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node* l_parent{};
    f0_t(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node* l_node,t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node* l_parent):l_node(l_node),l_parent(l_parent){
    }
    void gcMark(){
      bbGCMark(l_node);
      bbGCMark(l_parent);
    }
  }f0{l_node,l_parent};
  bbDBFrame db_f{"DeleteFixup:Void(node:std.collections.Map<monkey.types.String,mojo3d.graphics.AnimationClip>.Node,parent:std.collections.Map<monkey.types.String,mojo3d.graphics.AnimationClip>.Node)","/Applications/Blitz/Monkey2/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("node",&f0.l_node);
  bbDBLocal("parent",&f0.l_parent);
  bbDBStmt(2605058);
  {
    bbDBLoop db_loop;
    while(((f0.l_node!=this->m__0root.get())&&(!bbBool(f0.l_node)||(f0.l_node->m__0color==t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node_Color(1))))){
      bbDBBlock db_blk;
      bbDBStmt(2613251);
      if((f0.l_node==f0.l_parent->m__0left.get())){
        struct f2_t : public bbGCFrame{
          t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node* l_sib{};
          void gcMark(){
            bbGCMark(l_sib);
          }
        }f2{};
        bbDBBlock db_blk;
        bbDBStmt(2621450);
        f2.l_sib=f0.l_parent->m__0right.get();
        bbDBLocal("sib",&f2.l_sib);
        bbDBStmt(2629636);
        if((f2.l_sib->m__0color==t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node_Color(0))){
          bbDBBlock db_blk;
          bbDBStmt(2633733);
          f2.l_sib->m__0color=t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node_Color(1);
          bbDBStmt(2637829);
          f0.l_parent->m__0color=t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node_Color(0);
          bbDBStmt(2641925);
          this->m_RotateLeft(f0.l_parent);
          bbDBStmt(2646021);
          f2.l_sib=f0.l_parent->m__0right.get();
        }
        bbDBStmt(2658308);
        if(((!bbBool(f2.l_sib->m__0left.get())||(f2.l_sib->m__0left.get()->m__0color==t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node_Color(1)))&&(!bbBool(f2.l_sib->m__0right.get())||(f2.l_sib->m__0right.get()->m__0color==t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node_Color(1))))){
          bbDBBlock db_blk;
          bbDBStmt(2662405);
          f2.l_sib->m__0color=t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node_Color(0);
          bbDBStmt(2666501);
          f0.l_node=f0.l_parent;
          bbDBStmt(2670597);
          f0.l_parent=f0.l_parent->m__0parent.get();
        }else{
          bbDBStmt(2674692);
          bbDBBlock db_blk;
          bbDBStmt(2678789);
          if((!bbBool(f2.l_sib->m__0right.get())||(f2.l_sib->m__0right.get()->m__0color==t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node_Color(1)))){
            bbDBBlock db_blk;
            bbDBStmt(2682886);
            f2.l_sib->m__0left.get()->m__0color=t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node_Color(1);
            bbDBStmt(2686982);
            f2.l_sib->m__0color=t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node_Color(0);
            bbDBStmt(2691078);
            this->m_RotateRight(f2.l_sib);
            bbDBStmt(2695174);
            f2.l_sib=f0.l_parent->m__0right.get();
          }
          bbDBStmt(2703365);
          f2.l_sib->m__0color=f0.l_parent->m__0color;
          bbDBStmt(2707461);
          f0.l_parent->m__0color=t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node_Color(1);
          bbDBStmt(2711557);
          f2.l_sib->m__0right.get()->m__0color=t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node_Color(1);
          bbDBStmt(2715653);
          this->m_RotateLeft(f0.l_parent);
          bbDBStmt(2719749);
          f0.l_node=this->m__0root.get();
        }
      }else{
        bbDBStmt(2727939);
        struct f2_t : public bbGCFrame{
          t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node* l_sib{};
          void gcMark(){
            bbGCMark(l_sib);
          }
        }f2{};
        bbDBBlock db_blk;
        bbDBStmt(2732042);
        f2.l_sib=f0.l_parent->m__0left.get();
        bbDBLocal("sib",&f2.l_sib);
        bbDBStmt(2740228);
        if((f2.l_sib->m__0color==t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node_Color(0))){
          bbDBBlock db_blk;
          bbDBStmt(2744325);
          f2.l_sib->m__0color=t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node_Color(1);
          bbDBStmt(2748421);
          f0.l_parent->m__0color=t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node_Color(0);
          bbDBStmt(2752517);
          this->m_RotateRight(f0.l_parent);
          bbDBStmt(2756613);
          f2.l_sib=f0.l_parent->m__0left.get();
        }
        bbDBStmt(2768900);
        if(((!bbBool(f2.l_sib->m__0right.get())||(f2.l_sib->m__0right.get()->m__0color==t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node_Color(1)))&&(!bbBool(f2.l_sib->m__0left.get())||(f2.l_sib->m__0left.get()->m__0color==t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node_Color(1))))){
          bbDBBlock db_blk;
          bbDBStmt(2772997);
          f2.l_sib->m__0color=t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node_Color(0);
          bbDBStmt(2777093);
          f0.l_node=f0.l_parent;
          bbDBStmt(2781189);
          f0.l_parent=f0.l_parent->m__0parent.get();
        }else{
          bbDBStmt(2785284);
          bbDBBlock db_blk;
          bbDBStmt(2789381);
          if((!bbBool(f2.l_sib->m__0left.get())||(f2.l_sib->m__0left.get()->m__0color==t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node_Color(1)))){
            bbDBBlock db_blk;
            bbDBStmt(2793478);
            f2.l_sib->m__0right.get()->m__0color=t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node_Color(1);
            bbDBStmt(2797574);
            f2.l_sib->m__0color=t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node_Color(0);
            bbDBStmt(2801670);
            this->m_RotateLeft(f2.l_sib);
            bbDBStmt(2805766);
            f2.l_sib=f0.l_parent->m__0left.get();
          }
          bbDBStmt(2813957);
          f2.l_sib->m__0color=f0.l_parent->m__0color;
          bbDBStmt(2818053);
          f0.l_parent->m__0color=t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node_Color(1);
          bbDBStmt(2822149);
          f2.l_sib->m__0left.get()->m__0color=t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node_Color(1);
          bbDBStmt(2826245);
          this->m_RotateRight(f0.l_parent);
          bbDBStmt(2830341);
          f0.l_node=this->m__0root.get();
        }
      }
    }
  }
  bbDBStmt(2846722);
  if(bbBool(f0.l_node)){
    bbDBBlock db_blk;
    f0.l_node->m__0color=t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node_Color(1);
  }
}

bbInt t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2::m_Count(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Count:monkey.types.Int()","/Applications/Blitz/Monkey2/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(1159170);
  if(!bbBool(this->m__0root.get())){
    bbDBBlock db_blk;
    return bbInt(0);
  }
  bbDBStmt(1163266);
  return this->m__0root.get()->m_Count(bbInt(0));
}

t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2* t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2::m_Copy(){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node* l_root{};
    void gcMark(){
      bbGCMark(l_root);
    }
  }f0{};
  bbDBFrame db_f{"Copy:std.collections.Map<monkey.types.String,mojo3d.graphics.AnimationClip>()","/Applications/Blitz/Monkey2/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(1089544);
  bbDBLocal("root",&f0.l_root);
  bbDBStmt(1093634);
  if(bbBool(this->m__0root.get())){
    bbDBBlock db_blk;
    f0.l_root=this->m__0root.get()->m_Copy(((t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node*)0));
  }
  bbDBStmt(1097730);
  return bbGCNew<t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2>(f0.l_root);
}

bbBool t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2::m_Contains(bbString l_key){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Contains:monkey.types.Bool(key:monkey.types.String)","/Applications/Blitz/Monkey2/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("key",&l_key);
  bbDBStmt(1245186);
  return (this->m_FindNode(l_key)!=((t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node*)0));
}

void t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2::m_Clear(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Clear:Void()","/Applications/Blitz/Monkey2/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(1122306);
  this->m__0root=((t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node*)0);
}

t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Iterator t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2::m_All(){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  bbDBFrame db_f{"All:std.collections.Map<monkey.types.String,mojo3d.graphics.AnimationClip>.Iterator()","/Applications/Blitz/Monkey2/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(962562);
  return t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Iterator{f0.t0=this->m_FirstNode()};
}

bbBool t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2::m_Add(bbString l_key,t_mojo3d_graphics_AnimationClip* l_value){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node* l_node{};
    t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node* l_parent{};
    void gcMark(){
      bbGCMark(l_node);
      bbGCMark(l_parent);
    }
  }f0{};
  bbDBFrame db_f{"Add:monkey.types.Bool(key:monkey.types.String,value:mojo3d.graphics.AnimationClip)","/Applications/Blitz/Monkey2/modules/std/collections/map.monkey2"};
  t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("key",&l_key);
  bbDBLocal("value",&l_value);
  bbDBStmt(1622018);
  if(!bbBool(this->m__0root.get())){
    bbDBBlock db_blk;
    bbDBStmt(1626115);
    this->m__0root=bbGCNew<t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node>(l_key,l_value,t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node_Color(0),((t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node*)0));
    bbDBStmt(1630211);
    return true;
  }
  bbDBStmt(1642504);
  f0.l_node=this->m__0root.get();
  bbDBLocal("node",&f0.l_node);
  bbDBLocal("parent",&f0.l_parent);
  bbInt l_cmp{};
  bbDBLocal("cmp",&l_cmp);
  bbDBStmt(1650690);
  {
    bbDBLoop db_loop;
    while(bbBool(f0.l_node)){
      bbDBBlock db_blk;
      bbDBStmt(1654787);
      f0.l_parent=f0.l_node;
      bbDBStmt(1658883);
      l_cmp=bbCompare(l_key,f0.l_node->m__0key);
      bbDBStmt(1662979);
      if((l_cmp>bbInt(0))){
        bbDBBlock db_blk;
        bbDBStmt(1667076);
        f0.l_node=f0.l_node->m__0right.get();
      }else if(bbDBStmt(1671171),(l_cmp<bbInt(0))){
        bbDBBlock db_blk;
        bbDBStmt(1675268);
        f0.l_node=f0.l_node->m__0left.get();
      }else{
        bbDBStmt(1679363);
        bbDBBlock db_blk;
        bbDBStmt(1683460);
        return false;
      }
    }
  }
  bbDBStmt(1699842);
  f0.l_node=bbGCNew<t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node>(l_key,l_value,t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2_Node_Color(0),f0.l_parent);
  bbDBStmt(1708034);
  if((l_cmp>bbInt(0))){
    bbDBBlock db_blk;
    f0.l_parent->m__0right=f0.l_node;
  }else{
    bbDBBlock db_blk;
    f0.l_parent->m__0left=f0.l_node;
  }
  bbDBStmt(1716226);
  this->m_InsertFixup(f0.l_node);
  bbDBStmt(1724418);
  return true;
}
bbString bbDBType(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2**){
  return "std.collections.Map<monkey.types.String,mojo3d.graphics.AnimationClip>";
}
bbString bbDBValue(t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2**p){
  return bbDBObjectValue(*p);
}

void mx2_test_std_collections_2map_init_f(){
}
