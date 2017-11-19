
#include "test.buildv1.1.08/macos_debug/include/test_std_collections_2deque.h"

#include "mojo/mojo.buildv1.1.08/macos_debug/include/mojo_graphics_2image.h"
#include "monkey/monkey.buildv1.1.08/macos_debug/include/monkey_debug.h"
#include "monkey/monkey.buildv1.1.08/macos_debug/include/monkey_types.h"
#include "std/std.buildv1.1.08/macos_debug/include/std_geom_2vec2.h"
#include "test.buildv1.1.08/macos_debug/include/test_std_collections_2deque.h"
#include "test.buildv1.1.08/macos_debug/include/test_std_geom_2rect.h"

extern bbInt g_monkey_math_Max_1i(bbInt l_x,bbInt l_y);
void t_std_collections_Deque_1Tt_std_geom_Rect_1d_2_Iterator::dbEmit(t_std_collections_Deque_1Tt_std_geom_Rect_1d_2_Iterator*p){
  bbDBEmit("_deque",&p->m__0deque);
  bbDBEmit("_index",&p->m__0index);
}

t_std_collections_Deque_1Tt_std_geom_Rect_1d_2_Iterator::t_std_collections_Deque_1Tt_std_geom_Rect_1d_2_Iterator(t_std_collections_Deque_1Tt_std_geom_Rect_1d_2* l_deque,bbInt l_index){
  bbDBFrame db_f{"new:Void(deque:std.collections.Deque<std.geom.Rect<monkey.types.Double>>,index:monkey.types.Int)","/Applications/Blitz/Monkey2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_std_geom_Rect_1d_2_Iterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("deque",&l_deque);
  bbDBLocal("index",&l_index);
  bbDBStmt(176131);
  (*this).m__0deque=l_deque;
  bbDBStmt(180227);
  (*this).m__0index=l_index;
}
t_std_collections_Deque_1Tt_std_geom_Rect_1d_2_Iterator::~t_std_collections_Deque_1Tt_std_geom_Rect_1d_2_Iterator(){
}

void t_std_collections_Deque_1Tt_std_geom_Rect_1d_2_Iterator::m_Insert(t_std_geom_Rect_1d l_value){
  bbDBFrame db_f{"Insert:Void(value:std.geom.Rect<monkey.types.Double>)","/Applications/Blitz/Monkey2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_std_geom_Rect_1d_2_Iterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("value",&l_value);
  bbDBStmt(339971);
  bbDB::error(bbString(L"Insert not supported for Deques",31));
}

void t_std_collections_Deque_1Tt_std_geom_Rect_1d_2_Iterator::m_Erase(){
  bbDBFrame db_f{"Erase:Void()","/Applications/Blitz/Monkey2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_std_geom_Rect_1d_2_Iterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(303107);
  bbDB::error(bbString(L"Erase not supported for Deques",30));
}

void t_std_collections_Deque_1Tt_std_geom_Rect_1d_2_Iterator::m_Current(t_std_geom_Rect_1d l_current){
  bbDBFrame db_f{"Current:Void(current:std.geom.Rect<monkey.types.Double>)","/Applications/Blitz/Monkey2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_std_geom_Rect_1d_2_Iterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("current",&l_current);
  bbDBStmt(249859);
  (*this).m_AssertCurrent();
  bbDBStmt(253955);
  (*this).m__0deque.get()->m__0data[(*this).m__0index]=l_current;
}

t_std_geom_Rect_1d t_std_collections_Deque_1Tt_std_geom_Rect_1d_2_Iterator::m_Current(){
  bbDBFrame db_f{"Current:std.geom.Rect<monkey.types.Double>()","/Applications/Blitz/Monkey2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_std_geom_Rect_1d_2_Iterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(237571);
  (*this).m_AssertCurrent();
  bbDBStmt(241667);
  return (*this).m__0deque.get()->m__0data[(*this).m__0index];
}

void t_std_collections_Deque_1Tt_std_geom_Rect_1d_2_Iterator::m_Bump(){
  bbDBFrame db_f{"Bump:Void()","/Applications/Blitz/Monkey2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_std_geom_Rect_1d_2_Iterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(278531);
  (*this).m_AssertCurrent();
  bbDBStmt(282627);
  (*this).m__0index+=1;
  bbDBStmt(286723);
  if(((*this).m__0index==(*this).m__0deque.get()->m_Capacity())){
    bbDBBlock db_blk;
    (*this).m__0index=bbInt(0);
  }
}

bbBool t_std_collections_Deque_1Tt_std_geom_Rect_1d_2_Iterator::m_AtEnd(){
  bbDBFrame db_f{"AtEnd:monkey.types.Bool()","/Applications/Blitz/Monkey2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_std_geom_Rect_1d_2_Iterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(212995);
  return ((*this).m__0index==(*this).m__0deque.get()->m__0tail);
}

void t_std_collections_Deque_1Tt_std_geom_Rect_1d_2_Iterator::m_AssertCurrent(){
  bbDBFrame db_f{"AssertCurrent:Void()","/Applications/Blitz/Monkey2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_std_geom_Rect_1d_2_Iterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(159747);
  bbDebugAssert(((*this).m__0index!=(*this).m__0deque.get()->m__0tail),bbString(L"Invalid deque iterator",22));
}
bbString bbDBType(t_std_collections_Deque_1Tt_std_geom_Rect_1d_2_Iterator*){
  return "std.collections.Deque<std.geom.Rect<monkey.types.Double>>.Iterator";
}
bbString bbDBValue(t_std_collections_Deque_1Tt_std_geom_Rect_1d_2_Iterator*p){
  return bbDBStructValue(p);
}

int bbCompare(const t_std_collections_Deque_1Tt_std_geom_Rect_1d_2_Iterator&x,const t_std_collections_Deque_1Tt_std_geom_Rect_1d_2_Iterator&y){
  if(int t=bbCompare(x.m__0deque,y.m__0deque)) return t;
  if(int t=bbCompare(x.m__0index,y.m__0index)) return t;
  return 0;
}

void bbGCMark(const t_std_collections_Deque_1Tt_std_geom_Rect_1d_2_Iterator&t){
  bbGCMark(t.m__0deque);
}

void t_std_collections_Deque_1Tt_std_geom_Rect_1d_2::gcMark(){
  bbGCMark(m__0data);
}

void t_std_collections_Deque_1Tt_std_geom_Rect_1d_2::dbEmit(){
  puts( "[std.collections.Deque<std.geom.Rect<monkey.types.Double>>]");
  bbDBEmit("_data",&m__0data);
  bbDBEmit("_head",&m__0head);
  bbDBEmit("_tail",&m__0tail);
}

t_std_collections_Deque_1Tt_std_geom_Rect_1d_2::t_std_collections_Deque_1Tt_std_geom_Rect_1d_2(bbInt l_length){
  bbDBFrame db_f{"new:Void(length:monkey.types.Int)","/Applications/Blitz/Monkey2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_std_geom_Rect_1d_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("length",&l_length);
  bbDBStmt(507906);
  this->m__0tail=l_length;
  bbDBStmt(512002);
  this->m__0data=bbArray<t_std_geom_Rect_1d>((this->m__0tail+1));
}

t_std_collections_Deque_1Tt_std_geom_Rect_1d_2::t_std_collections_Deque_1Tt_std_geom_Rect_1d_2(){
  bbDBFrame db_f{"new:Void()","/Applications/Blitz/Monkey2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_std_geom_Rect_1d_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(491522);
  this->m__0data=bbArray<t_std_geom_Rect_1d>(10);
}
t_std_collections_Deque_1Tt_std_geom_Rect_1d_2::~t_std_collections_Deque_1Tt_std_geom_Rect_1d_2(){
}

void t_std_collections_Deque_1Tt_std_geom_Rect_1d_2::m__idxeq(bbInt l_index,t_std_geom_Rect_1d l_value){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"[]=:Void(index:monkey.types.Int,value:std.geom.Rect<monkey.types.Double>)","/Applications/Blitz/Monkey2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_std_geom_Rect_1d_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("index",&l_index);
  bbDBLocal("value",&l_value);
  bbDBStmt(1593346);
  bbDebugAssert(((l_index>=bbInt(0))&&(l_index<this->m_Length())),bbString(L"Deque index out of range",24));
  bbDBStmt(1601538);
  this->m__0data[((l_index+this->m__0head)%this->m_Capacity())]=l_value;
}

t_std_geom_Rect_1d t_std_collections_Deque_1Tt_std_geom_Rect_1d_2::m__idx(bbInt l_index){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"[]:std.geom.Rect<monkey.types.Double>(index:monkey.types.Int)","/Applications/Blitz/Monkey2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_std_geom_Rect_1d_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("index",&l_index);
  bbDBStmt(1548290);
  bbDebugAssert(((l_index>=bbInt(0))&&(l_index<this->m_Length())),bbString(L"Deque index out of range",24));
  bbDBStmt(1556482);
  return this->m__0data[((l_index+this->m__0head)%this->m_Capacity())];
}

bbArray<t_std_geom_Rect_1d> t_std_collections_Deque_1Tt_std_geom_Rect_1d_2::m_ToArray(){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    bbArray<t_std_geom_Rect_1d> l_data{};
    void gcMark(){
      bbGCMark(l_data);
    }
  }f0{};
  bbDBFrame db_f{"ToArray:std.geom.Rect<monkey.types.Double>[]()","/Applications/Blitz/Monkey2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_std_geom_Rect_1d_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(798728);
  f0.l_data=bbArray<t_std_geom_Rect_1d>(this->m_Length());
  bbDBLocal("data",&f0.l_data);
  bbDBStmt(806914);
  if((this->m__0head<=this->m__0tail)){
    bbDBBlock db_blk;
    bbDBStmt(811011);
    this->m__0data.copyTo(f0.l_data,this->m__0head,bbInt(0),this->m_Length());
  }else{
    bbDBStmt(815106);
    bbDBBlock db_blk;
    bbDBStmt(819209);
    bbInt l_n=(this->m_Capacity()-this->m__0head);
    bbDBLocal("n",&l_n);
    bbDBStmt(823299);
    this->m__0data.copyTo(f0.l_data,this->m__0head,bbInt(0),l_n);
    bbDBStmt(827395);
    this->m__0data.copyTo(f0.l_data,bbInt(0),l_n,this->m__0tail);
  }
  bbDBStmt(839682);
  return f0.l_data;
}

void t_std_collections_Deque_1Tt_std_geom_Rect_1d_2::m_Set(bbInt l_index,t_std_geom_Rect_1d l_value){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Set:Void(index:monkey.types.Int,value:std.geom.Rect<monkey.types.Double>)","/Applications/Blitz/Monkey2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_std_geom_Rect_1d_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("index",&l_index);
  bbDBLocal("value",&l_value);
  bbDBStmt(1503234);
  bbDebugAssert(((l_index>=bbInt(0))&&(l_index<this->m_Length())),bbString(L"Deque index out of range",24));
  bbDBStmt(1511426);
  this->m__0data[((l_index+this->m__0head)%this->m_Capacity())]=l_value;
}

void t_std_collections_Deque_1Tt_std_geom_Rect_1d_2::m_Reserve(bbInt l_capacity){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Reserve:Void(capacity:monkey.types.Int)","/Applications/Blitz/Monkey2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_std_geom_Rect_1d_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("capacity",&l_capacity);
  bbDBStmt(901122);
  bbDebugAssert((l_capacity>=bbInt(0)),bbString(L"Debug assert failed",19));
  bbDBStmt(909314);
  if((this->m_Capacity()>=l_capacity)){
    bbDBBlock db_blk;
    return;
  }
  bbDBStmt(917506);
  l_capacity=g_monkey_math_Max_1i(((this->m_Length()*2)+this->m_Length()),l_capacity);
  bbDBStmt(925698);
  this->m_Normalize(l_capacity);
}

t_std_geom_Rect_1d t_std_collections_Deque_1Tt_std_geom_Rect_1d_2::m_RemoveLast(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"RemoveLast:std.geom.Rect<monkey.types.Double>()","/Applications/Blitz/Monkey2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_std_geom_Rect_1d_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(1241090);
  bbDebugAssert(!this->m_Empty(),bbString(L"Illegal operation on empty deque",32));
  bbDBStmt(1249282);
  this->m__0tail-=1;
  bbDBStmt(1253378);
  if((this->m__0tail==-1)){
    bbDBBlock db_blk;
    this->m__0tail=(this->m_Capacity()-1);
  }
  bbDBStmt(1257480);
  t_std_geom_Rect_1d l_value=this->m__0data[this->m__0tail];
  bbDBLocal("value",&l_value);
  bbDBStmt(1261570);
  this->m__0data[this->m__0tail]=t_std_geom_Rect_1d{};
  bbDBStmt(1265666);
  return l_value;
}

t_std_geom_Rect_1d t_std_collections_Deque_1Tt_std_geom_Rect_1d_2::m_RemoveFirst(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"RemoveFirst:std.geom.Rect<monkey.types.Double>()","/Applications/Blitz/Monkey2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_std_geom_Rect_1d_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(1179650);
  bbDebugAssert(!this->m_Empty(),bbString(L"Illegal operation on empty deque",32));
  bbDBStmt(1187848);
  t_std_geom_Rect_1d l_value=this->m__0data[this->m__0head];
  bbDBLocal("value",&l_value);
  bbDBStmt(1191938);
  this->m__0data[this->m__0head]=t_std_geom_Rect_1d{};
  bbDBStmt(1196034);
  this->m__0head+=1;
  bbDBStmt(1200130);
  if((this->m__0head==this->m_Capacity())){
    bbDBBlock db_blk;
    this->m__0head=bbInt(0);
  }
  bbDBStmt(1204226);
  return l_value;
}

void t_std_collections_Deque_1Tt_std_geom_Rect_1d_2::m_PushLast(t_std_geom_Rect_1d l_value){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"PushLast:Void(value:std.geom.Rect<monkey.types.Double>)","/Applications/Blitz/Monkey2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_std_geom_Rect_1d_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("value",&l_value);
  bbDBStmt(1142786);
  this->m_AddLast(l_value);
}

void t_std_collections_Deque_1Tt_std_geom_Rect_1d_2::m_PushFirst(t_std_geom_Rect_1d l_value){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"PushFirst:Void(value:std.geom.Rect<monkey.types.Double>)","/Applications/Blitz/Monkey2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_std_geom_Rect_1d_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("value",&l_value);
  bbDBStmt(1114114);
  this->m_AddFirst(l_value);
}

t_std_geom_Rect_1d t_std_collections_Deque_1Tt_std_geom_Rect_1d_2::m_PopLast(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"PopLast:std.geom.Rect<monkey.types.Double>()","/Applications/Blitz/Monkey2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_std_geom_Rect_1d_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(1323010);
  return this->m_RemoveLast();
}

t_std_geom_Rect_1d t_std_collections_Deque_1Tt_std_geom_Rect_1d_2::m_PopFirst(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"PopFirst:std.geom.Rect<monkey.types.Double>()","/Applications/Blitz/Monkey2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_std_geom_Rect_1d_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(1294338);
  return this->m_RemoveFirst();
}

void t_std_collections_Deque_1Tt_std_geom_Rect_1d_2::m_Normalize(bbInt l_capacity){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    bbArray<t_std_geom_Rect_1d> l_data{};
    void gcMark(){
      bbGCMark(l_data);
    }
  }f0{};
  bbDBFrame db_f{"Normalize:Void(capacity:monkey.types.Int)","/Applications/Blitz/Monkey2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_std_geom_Rect_1d_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("capacity",&l_capacity);
  bbDBStmt(389128);
  bbInt l_length=this->m_Length();
  bbDBLocal("length",&l_length);
  bbDBStmt(397320);
  f0.l_data=bbArray<t_std_geom_Rect_1d>(l_capacity);
  bbDBLocal("data",&f0.l_data);
  bbDBStmt(405506);
  if((this->m__0head<=this->m__0tail)){
    bbDBBlock db_blk;
    bbDBStmt(409603);
    this->m__0data.copyTo(f0.l_data,this->m__0head,bbInt(0),l_length);
  }else{
    bbDBStmt(413698);
    bbDBBlock db_blk;
    bbDBStmt(417801);
    bbInt l_n=(this->m_Capacity()-this->m__0head);
    bbDBLocal("n",&l_n);
    bbDBStmt(421891);
    this->m__0data.copyTo(f0.l_data,this->m__0head,bbInt(0),l_n);
    bbDBStmt(425987);
    this->m__0data.copyTo(f0.l_data,bbInt(0),l_n,this->m__0tail);
  }
  bbDBStmt(438274);
  this->m__0data=f0.l_data;
  bbDBStmt(442370);
  this->m__0tail=l_length;
  bbDBStmt(446466);
  this->m__0head=bbInt(0);
}

bbInt t_std_collections_Deque_1Tt_std_geom_Rect_1d_2::m_Length(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Length:monkey.types.Int()","/Applications/Blitz/Monkey2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_std_geom_Rect_1d_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(638978);
  if((this->m__0head<=this->m__0tail)){
    bbDBBlock db_blk;
    return (this->m__0tail-this->m__0head);
  }
  bbDBStmt(643074);
  return ((this->m_Capacity()-this->m__0head)+this->m__0tail);
}

t_std_geom_Rect_1d t_std_collections_Deque_1Tt_std_geom_Rect_1d_2::m_Last(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Last:std.geom.Rect<monkey.types.Double>()","/Applications/Blitz/Monkey2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_std_geom_Rect_1d_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(1413122);
  bbDebugAssert(!this->m_Empty(),bbString(L"Illegal operation on empty deque",32));
  bbDBStmt(1421314);
  return this->m__0data[((this->m__0tail>bbInt(0)) ? (this->m__0tail-1) : (this->m_Capacity()-1))];
}

t_std_geom_Rect_1d t_std_collections_Deque_1Tt_std_geom_Rect_1d_2::m_Get(bbInt l_index){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Get:std.geom.Rect<monkey.types.Double>(index:monkey.types.Int)","/Applications/Blitz/Monkey2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_std_geom_Rect_1d_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("index",&l_index);
  bbDBStmt(1458178);
  bbDebugAssert(((l_index>=bbInt(0))&&(l_index<this->m_Length())),bbString(L"Deque index out of range",24));
  bbDBStmt(1466370);
  return this->m__0data[((l_index+this->m__0head)%this->m_Capacity())];
}

t_std_geom_Rect_1d t_std_collections_Deque_1Tt_std_geom_Rect_1d_2::m_First(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"First:std.geom.Rect<monkey.types.Double>()","/Applications/Blitz/Monkey2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_std_geom_Rect_1d_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(1368066);
  bbDebugAssert(!this->m_Empty(),bbString(L"Illegal operation on empty deque",32));
  bbDBStmt(1376258);
  return this->m__0data[this->m__0head];
}

bbBool t_std_collections_Deque_1Tt_std_geom_Rect_1d_2::m_Empty(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Empty:monkey.types.Bool()","/Applications/Blitz/Monkey2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_std_geom_Rect_1d_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(536578);
  return (this->m__0head==this->m__0tail);
}

bbArray<t_std_geom_Rect_1d> t_std_collections_Deque_1Tt_std_geom_Rect_1d_2::m_Data(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Data:std.geom.Rect<monkey.types.Double>[]()","/Applications/Blitz/Monkey2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_std_geom_Rect_1d_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(692226);
  if(!bbBool(this->m__0head)){
    bbDBBlock db_blk;
    return this->m__0data;
  }
  bbDBStmt(700418);
  this->m_Normalize(this->m_Capacity());
  bbDBStmt(708610);
  return this->m__0data;
}

void t_std_collections_Deque_1Tt_std_geom_Rect_1d_2::m_Clear(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Clear:Void()","/Applications/Blitz/Monkey2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_std_geom_Rect_1d_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(950274);
  if((this->m__0head<=this->m__0tail)){
    bbDBBlock db_blk;
    bbDBStmt(954371);
    {
      bbDBLoop db_loop;
      bbInt l_i=this->m__0head;
      bbDBLocal("i",&l_i);
      for(;(l_i<this->m__0tail);l_i+=1){
        bbDBBlock db_blk;
        bbDBStmt(958468);
        this->m__0data[l_i]=t_std_geom_Rect_1d{};
      }
    }
  }else{
    bbDBStmt(966658);
    bbDBBlock db_blk;
    bbDBStmt(970755);
    {
      bbDBLoop db_loop;
      bbInt l_i=bbInt(0);
      bbDBLocal("i",&l_i);
      for(;(l_i<this->m__0tail);l_i+=1){
        bbDBBlock db_blk;
        bbDBStmt(974852);
        this->m__0data[l_i]=t_std_geom_Rect_1d{};
      }
    }
    bbDBStmt(983043);
    {
      bbDBLoop db_loop;
      bbInt l_i=this->m__0head;
      bbDBLocal("i",&l_i);
      for(;(l_i<this->m_Capacity());l_i+=1){
        bbDBBlock db_blk;
        bbDBStmt(987140);
        this->m__0data[l_i]=t_std_geom_Rect_1d{};
      }
    }
  }
  bbDBStmt(999426);
  this->m__0head=bbInt(0);
  bbDBStmt(1003522);
  this->m__0tail=bbInt(0);
}

bbInt t_std_collections_Deque_1Tt_std_geom_Rect_1d_2::m_Capacity(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Capacity:monkey.types.Int()","/Applications/Blitz/Monkey2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_std_geom_Rect_1d_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(602114);
  return this->m__0data.length();
}

t_std_collections_Deque_1Tt_std_geom_Rect_1d_2_Iterator t_std_collections_Deque_1Tt_std_geom_Rect_1d_2::m_All(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"All:std.collections.Deque<std.geom.Rect<monkey.types.Double>>.Iterator()","/Applications/Blitz/Monkey2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_std_geom_Rect_1d_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(757762);
  return t_std_collections_Deque_1Tt_std_geom_Rect_1d_2_Iterator{this,this->m__0head};
}

void t_std_collections_Deque_1Tt_std_geom_Rect_1d_2::m_AddLast(t_std_geom_Rect_1d l_value){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"AddLast:Void(value:std.geom.Rect<monkey.types.Double>)","/Applications/Blitz/Monkey2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_std_geom_Rect_1d_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("value",&l_value);
  bbDBStmt(1069058);
  if(((this->m_Length()+1)==this->m_Capacity())){
    bbDBBlock db_blk;
    this->m_Reserve((this->m_Capacity()+1));
  }
  bbDBStmt(1077250);
  this->m__0data[this->m__0tail]=l_value;
  bbDBStmt(1081346);
  this->m__0tail+=1;
  bbDBStmt(1085442);
  if((this->m__0tail==this->m_Capacity())){
    bbDBBlock db_blk;
    this->m__0tail=bbInt(0);
  }
}

void t_std_collections_Deque_1Tt_std_geom_Rect_1d_2::m_AddFirst(t_std_geom_Rect_1d l_value){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"AddFirst:Void(value:std.geom.Rect<monkey.types.Double>)","/Applications/Blitz/Monkey2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_std_geom_Rect_1d_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("value",&l_value);
  bbDBStmt(1028098);
  if(((this->m_Length()+1)==this->m_Capacity())){
    bbDBBlock db_blk;
    this->m_Reserve((this->m_Capacity()+1));
  }
  bbDBStmt(1036290);
  this->m__0head-=1;
  bbDBStmt(1040386);
  if((this->m__0head==-1)){
    bbDBBlock db_blk;
    this->m__0head=(this->m_Capacity()-1);
  }
  bbDBStmt(1044482);
  this->m__0data[this->m__0head]=l_value;
}
bbString bbDBType(t_std_collections_Deque_1Tt_std_geom_Rect_1d_2**){
  return "std.collections.Deque<std.geom.Rect<monkey.types.Double>>";
}
bbString bbDBValue(t_std_collections_Deque_1Tt_std_geom_Rect_1d_2**p){
  return bbDBObjectValue(*p);
}

void t_std_collections_Deque_1Tt_mojo_graphics_Image_2_Iterator::dbEmit(t_std_collections_Deque_1Tt_mojo_graphics_Image_2_Iterator*p){
  bbDBEmit("_deque",&p->m__0deque);
  bbDBEmit("_index",&p->m__0index);
}

t_std_collections_Deque_1Tt_mojo_graphics_Image_2_Iterator::t_std_collections_Deque_1Tt_mojo_graphics_Image_2_Iterator(t_std_collections_Deque_1Tt_mojo_graphics_Image_2* l_deque,bbInt l_index){
  bbDBFrame db_f{"new:Void(deque:std.collections.Deque<mojo.graphics.Image>,index:monkey.types.Int)","/Applications/Blitz/Monkey2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_mojo_graphics_Image_2_Iterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("deque",&l_deque);
  bbDBLocal("index",&l_index);
  bbDBStmt(176131);
  (*this).m__0deque=l_deque;
  bbDBStmt(180227);
  (*this).m__0index=l_index;
}
t_std_collections_Deque_1Tt_mojo_graphics_Image_2_Iterator::~t_std_collections_Deque_1Tt_mojo_graphics_Image_2_Iterator(){
}

void t_std_collections_Deque_1Tt_mojo_graphics_Image_2_Iterator::m_Insert(t_mojo_graphics_Image* l_value){
  bbDBFrame db_f{"Insert:Void(value:mojo.graphics.Image)","/Applications/Blitz/Monkey2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_mojo_graphics_Image_2_Iterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("value",&l_value);
  bbDBStmt(339971);
  bbDB::error(bbString(L"Insert not supported for Deques",31));
}

void t_std_collections_Deque_1Tt_mojo_graphics_Image_2_Iterator::m_Erase(){
  bbDBFrame db_f{"Erase:Void()","/Applications/Blitz/Monkey2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_mojo_graphics_Image_2_Iterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(303107);
  bbDB::error(bbString(L"Erase not supported for Deques",30));
}

void t_std_collections_Deque_1Tt_mojo_graphics_Image_2_Iterator::m_Current(t_mojo_graphics_Image* l_current){
  bbDBFrame db_f{"Current:Void(current:mojo.graphics.Image)","/Applications/Blitz/Monkey2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_mojo_graphics_Image_2_Iterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("current",&l_current);
  bbDBStmt(249859);
  (*this).m_AssertCurrent();
  bbDBStmt(253955);
  (*this).m__0deque.get()->m__0data[(*this).m__0index]=l_current;
}

t_mojo_graphics_Image* t_std_collections_Deque_1Tt_mojo_graphics_Image_2_Iterator::m_Current(){
  bbDBFrame db_f{"Current:mojo.graphics.Image()","/Applications/Blitz/Monkey2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_mojo_graphics_Image_2_Iterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(237571);
  (*this).m_AssertCurrent();
  bbDBStmt(241667);
  return (*this).m__0deque.get()->m__0data[(*this).m__0index].get();
}

void t_std_collections_Deque_1Tt_mojo_graphics_Image_2_Iterator::m_Bump(){
  bbDBFrame db_f{"Bump:Void()","/Applications/Blitz/Monkey2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_mojo_graphics_Image_2_Iterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(278531);
  (*this).m_AssertCurrent();
  bbDBStmt(282627);
  (*this).m__0index+=1;
  bbDBStmt(286723);
  if(((*this).m__0index==(*this).m__0deque.get()->m_Capacity())){
    bbDBBlock db_blk;
    (*this).m__0index=bbInt(0);
  }
}

bbBool t_std_collections_Deque_1Tt_mojo_graphics_Image_2_Iterator::m_AtEnd(){
  bbDBFrame db_f{"AtEnd:monkey.types.Bool()","/Applications/Blitz/Monkey2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_mojo_graphics_Image_2_Iterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(212995);
  return ((*this).m__0index==(*this).m__0deque.get()->m__0tail);
}

void t_std_collections_Deque_1Tt_mojo_graphics_Image_2_Iterator::m_AssertCurrent(){
  bbDBFrame db_f{"AssertCurrent:Void()","/Applications/Blitz/Monkey2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_mojo_graphics_Image_2_Iterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(159747);
  bbDebugAssert(((*this).m__0index!=(*this).m__0deque.get()->m__0tail),bbString(L"Invalid deque iterator",22));
}
bbString bbDBType(t_std_collections_Deque_1Tt_mojo_graphics_Image_2_Iterator*){
  return "std.collections.Deque<mojo.graphics.Image>.Iterator";
}
bbString bbDBValue(t_std_collections_Deque_1Tt_mojo_graphics_Image_2_Iterator*p){
  return bbDBStructValue(p);
}

int bbCompare(const t_std_collections_Deque_1Tt_mojo_graphics_Image_2_Iterator&x,const t_std_collections_Deque_1Tt_mojo_graphics_Image_2_Iterator&y){
  if(int t=bbCompare(x.m__0deque,y.m__0deque)) return t;
  if(int t=bbCompare(x.m__0index,y.m__0index)) return t;
  return 0;
}

void bbGCMark(const t_std_collections_Deque_1Tt_mojo_graphics_Image_2_Iterator&t){
  bbGCMark(t.m__0deque);
}

void t_std_collections_Deque_1Tt_mojo_graphics_Image_2::gcMark(){
  bbGCMark(m__0data);
}

void t_std_collections_Deque_1Tt_mojo_graphics_Image_2::dbEmit(){
  puts( "[std.collections.Deque<mojo.graphics.Image>]");
  bbDBEmit("_data",&m__0data);
  bbDBEmit("_head",&m__0head);
  bbDBEmit("_tail",&m__0tail);
}

t_std_collections_Deque_1Tt_mojo_graphics_Image_2::t_std_collections_Deque_1Tt_mojo_graphics_Image_2(bbInt l_length){
  bbDBFrame db_f{"new:Void(length:monkey.types.Int)","/Applications/Blitz/Monkey2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_mojo_graphics_Image_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("length",&l_length);
  bbDBStmt(507906);
  this->m__0tail=l_length;
  bbDBStmt(512002);
  this->m__0data=bbArray<bbGCVar<t_mojo_graphics_Image>>((this->m__0tail+1));
}

t_std_collections_Deque_1Tt_mojo_graphics_Image_2::t_std_collections_Deque_1Tt_mojo_graphics_Image_2(){
  bbDBFrame db_f{"new:Void()","/Applications/Blitz/Monkey2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_mojo_graphics_Image_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(491522);
  this->m__0data=bbArray<bbGCVar<t_mojo_graphics_Image>>(10);
}
t_std_collections_Deque_1Tt_mojo_graphics_Image_2::~t_std_collections_Deque_1Tt_mojo_graphics_Image_2(){
}

void t_std_collections_Deque_1Tt_mojo_graphics_Image_2::m__idxeq(bbInt l_index,t_mojo_graphics_Image* l_value){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"[]=:Void(index:monkey.types.Int,value:mojo.graphics.Image)","/Applications/Blitz/Monkey2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_mojo_graphics_Image_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("index",&l_index);
  bbDBLocal("value",&l_value);
  bbDBStmt(1593346);
  bbDebugAssert(((l_index>=bbInt(0))&&(l_index<this->m_Length())),bbString(L"Deque index out of range",24));
  bbDBStmt(1601538);
  this->m__0data[((l_index+this->m__0head)%this->m_Capacity())]=l_value;
}

t_mojo_graphics_Image* t_std_collections_Deque_1Tt_mojo_graphics_Image_2::m__idx(bbInt l_index){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"[]:mojo.graphics.Image(index:monkey.types.Int)","/Applications/Blitz/Monkey2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_mojo_graphics_Image_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("index",&l_index);
  bbDBStmt(1548290);
  bbDebugAssert(((l_index>=bbInt(0))&&(l_index<this->m_Length())),bbString(L"Deque index out of range",24));
  bbDBStmt(1556482);
  return this->m__0data[((l_index+this->m__0head)%this->m_Capacity())].get();
}

bbArray<bbGCVar<t_mojo_graphics_Image>> t_std_collections_Deque_1Tt_mojo_graphics_Image_2::m_ToArray(){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    bbArray<bbGCVar<t_mojo_graphics_Image>> l_data{};
    void gcMark(){
      bbGCMark(l_data);
    }
  }f0{};
  bbDBFrame db_f{"ToArray:mojo.graphics.Image[]()","/Applications/Blitz/Monkey2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_mojo_graphics_Image_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(798728);
  f0.l_data=bbArray<bbGCVar<t_mojo_graphics_Image>>(this->m_Length());
  bbDBLocal("data",&f0.l_data);
  bbDBStmt(806914);
  if((this->m__0head<=this->m__0tail)){
    bbDBBlock db_blk;
    bbDBStmt(811011);
    this->m__0data.copyTo(f0.l_data,this->m__0head,bbInt(0),this->m_Length());
  }else{
    bbDBStmt(815106);
    bbDBBlock db_blk;
    bbDBStmt(819209);
    bbInt l_n=(this->m_Capacity()-this->m__0head);
    bbDBLocal("n",&l_n);
    bbDBStmt(823299);
    this->m__0data.copyTo(f0.l_data,this->m__0head,bbInt(0),l_n);
    bbDBStmt(827395);
    this->m__0data.copyTo(f0.l_data,bbInt(0),l_n,this->m__0tail);
  }
  bbDBStmt(839682);
  return f0.l_data;
}

void t_std_collections_Deque_1Tt_mojo_graphics_Image_2::m_Set(bbInt l_index,t_mojo_graphics_Image* l_value){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Set:Void(index:monkey.types.Int,value:mojo.graphics.Image)","/Applications/Blitz/Monkey2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_mojo_graphics_Image_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("index",&l_index);
  bbDBLocal("value",&l_value);
  bbDBStmt(1503234);
  bbDebugAssert(((l_index>=bbInt(0))&&(l_index<this->m_Length())),bbString(L"Deque index out of range",24));
  bbDBStmt(1511426);
  this->m__0data[((l_index+this->m__0head)%this->m_Capacity())]=l_value;
}

void t_std_collections_Deque_1Tt_mojo_graphics_Image_2::m_Reserve(bbInt l_capacity){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Reserve:Void(capacity:monkey.types.Int)","/Applications/Blitz/Monkey2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_mojo_graphics_Image_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("capacity",&l_capacity);
  bbDBStmt(901122);
  bbDebugAssert((l_capacity>=bbInt(0)),bbString(L"Debug assert failed",19));
  bbDBStmt(909314);
  if((this->m_Capacity()>=l_capacity)){
    bbDBBlock db_blk;
    return;
  }
  bbDBStmt(917506);
  l_capacity=g_monkey_math_Max_1i(((this->m_Length()*2)+this->m_Length()),l_capacity);
  bbDBStmt(925698);
  this->m_Normalize(l_capacity);
}

t_mojo_graphics_Image* t_std_collections_Deque_1Tt_mojo_graphics_Image_2::m_RemoveLast(){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_mojo_graphics_Image* l_value{};
    void gcMark(){
      bbGCMark(l_value);
    }
  }f0{};
  bbDBFrame db_f{"RemoveLast:mojo.graphics.Image()","/Applications/Blitz/Monkey2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_mojo_graphics_Image_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(1241090);
  bbDebugAssert(!this->m_Empty(),bbString(L"Illegal operation on empty deque",32));
  bbDBStmt(1249282);
  this->m__0tail-=1;
  bbDBStmt(1253378);
  if((this->m__0tail==-1)){
    bbDBBlock db_blk;
    this->m__0tail=(this->m_Capacity()-1);
  }
  bbDBStmt(1257480);
  f0.l_value=this->m__0data[this->m__0tail].get();
  bbDBLocal("value",&f0.l_value);
  bbDBStmt(1261570);
  this->m__0data[this->m__0tail]=((t_mojo_graphics_Image*)0);
  bbDBStmt(1265666);
  return f0.l_value;
}

t_mojo_graphics_Image* t_std_collections_Deque_1Tt_mojo_graphics_Image_2::m_RemoveFirst(){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_mojo_graphics_Image* l_value{};
    void gcMark(){
      bbGCMark(l_value);
    }
  }f0{};
  bbDBFrame db_f{"RemoveFirst:mojo.graphics.Image()","/Applications/Blitz/Monkey2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_mojo_graphics_Image_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(1179650);
  bbDebugAssert(!this->m_Empty(),bbString(L"Illegal operation on empty deque",32));
  bbDBStmt(1187848);
  f0.l_value=this->m__0data[this->m__0head].get();
  bbDBLocal("value",&f0.l_value);
  bbDBStmt(1191938);
  this->m__0data[this->m__0head]=((t_mojo_graphics_Image*)0);
  bbDBStmt(1196034);
  this->m__0head+=1;
  bbDBStmt(1200130);
  if((this->m__0head==this->m_Capacity())){
    bbDBBlock db_blk;
    this->m__0head=bbInt(0);
  }
  bbDBStmt(1204226);
  return f0.l_value;
}

void t_std_collections_Deque_1Tt_mojo_graphics_Image_2::m_PushLast(t_mojo_graphics_Image* l_value){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"PushLast:Void(value:mojo.graphics.Image)","/Applications/Blitz/Monkey2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_mojo_graphics_Image_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("value",&l_value);
  bbDBStmt(1142786);
  this->m_AddLast(l_value);
}

void t_std_collections_Deque_1Tt_mojo_graphics_Image_2::m_PushFirst(t_mojo_graphics_Image* l_value){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"PushFirst:Void(value:mojo.graphics.Image)","/Applications/Blitz/Monkey2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_mojo_graphics_Image_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("value",&l_value);
  bbDBStmt(1114114);
  this->m_AddFirst(l_value);
}

t_mojo_graphics_Image* t_std_collections_Deque_1Tt_mojo_graphics_Image_2::m_PopLast(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"PopLast:mojo.graphics.Image()","/Applications/Blitz/Monkey2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_mojo_graphics_Image_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(1323010);
  return this->m_RemoveLast();
}

t_mojo_graphics_Image* t_std_collections_Deque_1Tt_mojo_graphics_Image_2::m_PopFirst(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"PopFirst:mojo.graphics.Image()","/Applications/Blitz/Monkey2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_mojo_graphics_Image_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(1294338);
  return this->m_RemoveFirst();
}

void t_std_collections_Deque_1Tt_mojo_graphics_Image_2::m_Normalize(bbInt l_capacity){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    bbArray<bbGCVar<t_mojo_graphics_Image>> l_data{};
    void gcMark(){
      bbGCMark(l_data);
    }
  }f0{};
  bbDBFrame db_f{"Normalize:Void(capacity:monkey.types.Int)","/Applications/Blitz/Monkey2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_mojo_graphics_Image_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("capacity",&l_capacity);
  bbDBStmt(389128);
  bbInt l_length=this->m_Length();
  bbDBLocal("length",&l_length);
  bbDBStmt(397320);
  f0.l_data=bbArray<bbGCVar<t_mojo_graphics_Image>>(l_capacity);
  bbDBLocal("data",&f0.l_data);
  bbDBStmt(405506);
  if((this->m__0head<=this->m__0tail)){
    bbDBBlock db_blk;
    bbDBStmt(409603);
    this->m__0data.copyTo(f0.l_data,this->m__0head,bbInt(0),l_length);
  }else{
    bbDBStmt(413698);
    bbDBBlock db_blk;
    bbDBStmt(417801);
    bbInt l_n=(this->m_Capacity()-this->m__0head);
    bbDBLocal("n",&l_n);
    bbDBStmt(421891);
    this->m__0data.copyTo(f0.l_data,this->m__0head,bbInt(0),l_n);
    bbDBStmt(425987);
    this->m__0data.copyTo(f0.l_data,bbInt(0),l_n,this->m__0tail);
  }
  bbDBStmt(438274);
  this->m__0data=f0.l_data;
  bbDBStmt(442370);
  this->m__0tail=l_length;
  bbDBStmt(446466);
  this->m__0head=bbInt(0);
}

bbInt t_std_collections_Deque_1Tt_mojo_graphics_Image_2::m_Length(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Length:monkey.types.Int()","/Applications/Blitz/Monkey2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_mojo_graphics_Image_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(638978);
  if((this->m__0head<=this->m__0tail)){
    bbDBBlock db_blk;
    return (this->m__0tail-this->m__0head);
  }
  bbDBStmt(643074);
  return ((this->m_Capacity()-this->m__0head)+this->m__0tail);
}

t_mojo_graphics_Image* t_std_collections_Deque_1Tt_mojo_graphics_Image_2::m_Last(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Last:mojo.graphics.Image()","/Applications/Blitz/Monkey2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_mojo_graphics_Image_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(1413122);
  bbDebugAssert(!this->m_Empty(),bbString(L"Illegal operation on empty deque",32));
  bbDBStmt(1421314);
  return this->m__0data[((this->m__0tail>bbInt(0)) ? (this->m__0tail-1) : (this->m_Capacity()-1))].get();
}

t_mojo_graphics_Image* t_std_collections_Deque_1Tt_mojo_graphics_Image_2::m_Get(bbInt l_index){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Get:mojo.graphics.Image(index:monkey.types.Int)","/Applications/Blitz/Monkey2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_mojo_graphics_Image_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("index",&l_index);
  bbDBStmt(1458178);
  bbDebugAssert(((l_index>=bbInt(0))&&(l_index<this->m_Length())),bbString(L"Deque index out of range",24));
  bbDBStmt(1466370);
  return this->m__0data[((l_index+this->m__0head)%this->m_Capacity())].get();
}

t_mojo_graphics_Image* t_std_collections_Deque_1Tt_mojo_graphics_Image_2::m_First(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"First:mojo.graphics.Image()","/Applications/Blitz/Monkey2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_mojo_graphics_Image_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(1368066);
  bbDebugAssert(!this->m_Empty(),bbString(L"Illegal operation on empty deque",32));
  bbDBStmt(1376258);
  return this->m__0data[this->m__0head].get();
}

bbBool t_std_collections_Deque_1Tt_mojo_graphics_Image_2::m_Empty(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Empty:monkey.types.Bool()","/Applications/Blitz/Monkey2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_mojo_graphics_Image_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(536578);
  return (this->m__0head==this->m__0tail);
}

bbArray<bbGCVar<t_mojo_graphics_Image>> t_std_collections_Deque_1Tt_mojo_graphics_Image_2::m_Data(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Data:mojo.graphics.Image[]()","/Applications/Blitz/Monkey2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_mojo_graphics_Image_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(692226);
  if(!bbBool(this->m__0head)){
    bbDBBlock db_blk;
    return this->m__0data;
  }
  bbDBStmt(700418);
  this->m_Normalize(this->m_Capacity());
  bbDBStmt(708610);
  return this->m__0data;
}

void t_std_collections_Deque_1Tt_mojo_graphics_Image_2::m_Clear(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Clear:Void()","/Applications/Blitz/Monkey2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_mojo_graphics_Image_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(950274);
  if((this->m__0head<=this->m__0tail)){
    bbDBBlock db_blk;
    bbDBStmt(954371);
    {
      bbDBLoop db_loop;
      bbInt l_i=this->m__0head;
      bbDBLocal("i",&l_i);
      for(;(l_i<this->m__0tail);l_i+=1){
        bbDBBlock db_blk;
        bbDBStmt(958468);
        this->m__0data[l_i]=((t_mojo_graphics_Image*)0);
      }
    }
  }else{
    bbDBStmt(966658);
    bbDBBlock db_blk;
    bbDBStmt(970755);
    {
      bbDBLoop db_loop;
      bbInt l_i=bbInt(0);
      bbDBLocal("i",&l_i);
      for(;(l_i<this->m__0tail);l_i+=1){
        bbDBBlock db_blk;
        bbDBStmt(974852);
        this->m__0data[l_i]=((t_mojo_graphics_Image*)0);
      }
    }
    bbDBStmt(983043);
    {
      bbDBLoop db_loop;
      bbInt l_i=this->m__0head;
      bbDBLocal("i",&l_i);
      for(;(l_i<this->m_Capacity());l_i+=1){
        bbDBBlock db_blk;
        bbDBStmt(987140);
        this->m__0data[l_i]=((t_mojo_graphics_Image*)0);
      }
    }
  }
  bbDBStmt(999426);
  this->m__0head=bbInt(0);
  bbDBStmt(1003522);
  this->m__0tail=bbInt(0);
}

bbInt t_std_collections_Deque_1Tt_mojo_graphics_Image_2::m_Capacity(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Capacity:monkey.types.Int()","/Applications/Blitz/Monkey2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_mojo_graphics_Image_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(602114);
  return this->m__0data.length();
}

t_std_collections_Deque_1Tt_mojo_graphics_Image_2_Iterator t_std_collections_Deque_1Tt_mojo_graphics_Image_2::m_All(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"All:std.collections.Deque<mojo.graphics.Image>.Iterator()","/Applications/Blitz/Monkey2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_mojo_graphics_Image_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(757762);
  return t_std_collections_Deque_1Tt_mojo_graphics_Image_2_Iterator{this,this->m__0head};
}

void t_std_collections_Deque_1Tt_mojo_graphics_Image_2::m_AddLast(t_mojo_graphics_Image* l_value){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"AddLast:Void(value:mojo.graphics.Image)","/Applications/Blitz/Monkey2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_mojo_graphics_Image_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("value",&l_value);
  bbDBStmt(1069058);
  if(((this->m_Length()+1)==this->m_Capacity())){
    bbDBBlock db_blk;
    this->m_Reserve((this->m_Capacity()+1));
  }
  bbDBStmt(1077250);
  this->m__0data[this->m__0tail]=l_value;
  bbDBStmt(1081346);
  this->m__0tail+=1;
  bbDBStmt(1085442);
  if((this->m__0tail==this->m_Capacity())){
    bbDBBlock db_blk;
    this->m__0tail=bbInt(0);
  }
}

void t_std_collections_Deque_1Tt_mojo_graphics_Image_2::m_AddFirst(t_mojo_graphics_Image* l_value){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"AddFirst:Void(value:mojo.graphics.Image)","/Applications/Blitz/Monkey2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_mojo_graphics_Image_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("value",&l_value);
  bbDBStmt(1028098);
  if(((this->m_Length()+1)==this->m_Capacity())){
    bbDBBlock db_blk;
    this->m_Reserve((this->m_Capacity()+1));
  }
  bbDBStmt(1036290);
  this->m__0head-=1;
  bbDBStmt(1040386);
  if((this->m__0head==-1)){
    bbDBBlock db_blk;
    this->m__0head=(this->m_Capacity()-1);
  }
  bbDBStmt(1044482);
  this->m__0data[this->m__0head]=l_value;
}
bbString bbDBType(t_std_collections_Deque_1Tt_mojo_graphics_Image_2**){
  return "std.collections.Deque<mojo.graphics.Image>";
}
bbString bbDBValue(t_std_collections_Deque_1Tt_mojo_graphics_Image_2**p){
  return bbDBObjectValue(*p);
}

void mx2_test_std_collections_2deque_init_f(){
}
