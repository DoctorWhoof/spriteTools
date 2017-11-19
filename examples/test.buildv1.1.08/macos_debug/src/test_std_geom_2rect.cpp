
#include "test.buildv1.1.08/macos_debug/include/test_std_geom_2rect.h"

#include "std/std.buildv1.1.08/macos_debug/include/std_geom_2rect.h"
#include "std/std.buildv1.1.08/macos_debug/include/std_geom_2vec2.h"
#include "test.buildv1.1.08/macos_debug/include/test_std_geom_2rect.h"

extern bbDouble g_monkey_math_Max_1d(bbDouble l_x,bbDouble l_y);
extern bbDouble g_monkey_math_Min_1d(bbDouble l_x,bbDouble l_y);
t_std_geom_Rect_1d g_std_geom_Rect_1f_to_Tt_std_geom_Rect_1d_2_1d(t_std_geom_Rect_1f &l_self){
  bbDBFrame db_f{"to<monkey.types.Double>:std.geom.Rect<monkey.types.Double>()","/Applications/Blitz/Monkey2/modules/std/geom/rect.monkey2"};
  t_std_geom_Rect_1f*self=&l_self;
  bbDBLocal("Self",self);
  bbDBStmt(217090);
  return t_std_geom_Rect_1d{bbDouble(l_self.m_min.m_x),bbDouble(l_self.m_min.m_y),bbDouble(l_self.m_max.m_x),bbDouble(l_self.m_max.m_y)};
}

t_std_geom_Rect_1f g_std_geom_Rect_1d_to_Tt_std_geom_Rect_1f_2_1f(t_std_geom_Rect_1d &l_self){
  bbDBFrame db_f{"to<monkey.types.Float>:std.geom.Rect<monkey.types.Float>()","/Applications/Blitz/Monkey2/modules/std/geom/rect.monkey2"};
  t_std_geom_Rect_1d*self=&l_self;
  bbDBLocal("Self",self);
  return t_std_geom_Rect_1f{bbFloat(l_self.m_min.m_x),bbFloat(l_self.m_min.m_y),bbFloat(l_self.m_max.m_x),bbFloat(l_self.m_max.m_y)};
}

void t_std_geom_Rect_1d::dbEmit(t_std_geom_Rect_1d*p){
  bbDBEmit("min",&p->m_min);
  bbDBEmit("max",&p->m_max);
}

t_std_geom_Rect_1d::t_std_geom_Rect_1d(t_std_geom_Vec2_1d l_min,bbDouble l_x1,bbDouble l_y1){
  bbDBFrame db_f{"new:Void(min:std.geom.Vec2<monkey.types.Double>,x1:monkey.types.Double,y1:monkey.types.Double)","/Applications/Blitz/Monkey2/modules/std/geom/rect.monkey2"};
  t_std_geom_Rect_1d*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("min",&l_min);
  bbDBLocal("x1",&l_x1);
  bbDBLocal("y1",&l_y1);
  bbDBStmt(188418);
  (*this).m_min=l_min;
  bbDBStmt(192514);
  (*this).m_max=t_std_geom_Vec2_1d{l_x1,l_y1};
}

t_std_geom_Rect_1d::t_std_geom_Rect_1d(bbDouble l_x0,bbDouble l_y0,t_std_geom_Vec2_1d l_max){
  bbDBFrame db_f{"new:Void(x0:monkey.types.Double,y0:monkey.types.Double,max:std.geom.Vec2<monkey.types.Double>)","/Applications/Blitz/Monkey2/modules/std/geom/rect.monkey2"};
  t_std_geom_Rect_1d*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("x0",&l_x0);
  bbDBLocal("y0",&l_y0);
  bbDBLocal("max",&l_max);
  bbDBStmt(167938);
  (*this).m_min=t_std_geom_Vec2_1d{l_x0,l_y0};
  bbDBStmt(172034);
  (*this).m_max=l_max;
}

t_std_geom_Rect_1d::t_std_geom_Rect_1d(bbDouble l_x0,bbDouble l_y0,bbDouble l_x1,bbDouble l_y1){
  bbDBFrame db_f{"new:Void(x0:monkey.types.Double,y0:monkey.types.Double,x1:monkey.types.Double,y1:monkey.types.Double)","/Applications/Blitz/Monkey2/modules/std/geom/rect.monkey2"};
  t_std_geom_Rect_1d*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("x0",&l_x0);
  bbDBLocal("y0",&l_y0);
  bbDBLocal("x1",&l_x1);
  bbDBLocal("y1",&l_y1);
  bbDBStmt(147458);
  (*this).m_min=t_std_geom_Vec2_1d{l_x0,l_y0};
  bbDBStmt(151554);
  (*this).m_max=t_std_geom_Vec2_1d{l_x1,l_y1};
}

t_std_geom_Rect_1d::t_std_geom_Rect_1d(t_std_geom_Vec2_1d l_min,t_std_geom_Vec2_1d l_max){
  bbDBFrame db_f{"new:Void(min:std.geom.Vec2<monkey.types.Double>,max:std.geom.Vec2<monkey.types.Double>)","/Applications/Blitz/Monkey2/modules/std/geom/rect.monkey2"};
  t_std_geom_Rect_1d*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("min",&l_min);
  bbDBLocal("max",&l_max);
  bbDBStmt(126978);
  (*this).m_min=l_min;
  bbDBStmt(131074);
  (*this).m_max=l_max;
}

t_std_geom_Rect_1d::t_std_geom_Rect_1d(bbNullCtor_t){
  bbDBFrame db_f{"new:Void()","/Applications/Blitz/Monkey2/modules/std/geom/rect.monkey2"};
  t_std_geom_Rect_1d*self=&(*this);
  bbDBLocal("Self",self);
}
t_std_geom_Rect_1d::~t_std_geom_Rect_1d(){
}

void t_std_geom_Rect_1d::m__oreq(t_std_geom_Rect_1d l_r){
  bbDBFrame db_f{"|=:Void(r:std.geom.Rect<monkey.types.Double>)","/Applications/Blitz/Monkey2/modules/std/geom/rect.monkey2"};
  t_std_geom_Rect_1d*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("r",&l_r);
  bbDBStmt(1249282);
  (*this).m_min.m_x=g_monkey_math_Min_1d((*this).m_min.m_x,l_r.m_min.m_x);
  bbDBStmt(1253378);
  (*this).m_min.m_y=g_monkey_math_Min_1d((*this).m_min.m_y,l_r.m_min.m_y);
  bbDBStmt(1257474);
  (*this).m_max.m_x=g_monkey_math_Max_1d((*this).m_max.m_x,l_r.m_max.m_x);
  bbDBStmt(1261570);
  (*this).m_max.m_y=g_monkey_math_Max_1d((*this).m_max.m_y,l_r.m_max.m_y);
}

t_std_geom_Rect_1d t_std_geom_Rect_1d::m__or(t_std_geom_Rect_1d l_r){
  bbDBFrame db_f{"|:std.geom.Rect<monkey.types.Double>(r:std.geom.Rect<monkey.types.Double>)","/Applications/Blitz/Monkey2/modules/std/geom/rect.monkey2"};
  t_std_geom_Rect_1d*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("r",&l_r);
  bbDBStmt(1171464);
  bbDouble l_x0=g_monkey_math_Min_1d((*this).m_min.m_x,l_r.m_min.m_x);
  bbDBLocal("x0",&l_x0);
  bbDBStmt(1175560);
  bbDouble l_y0=g_monkey_math_Min_1d((*this).m_min.m_y,l_r.m_min.m_y);
  bbDBLocal("y0",&l_y0);
  bbDBStmt(1179656);
  bbDouble l_x1=g_monkey_math_Max_1d((*this).m_max.m_x,l_r.m_max.m_x);
  bbDBLocal("x1",&l_x1);
  bbDBStmt(1183752);
  bbDouble l_y1=g_monkey_math_Max_1d((*this).m_max.m_y,l_r.m_max.m_y);
  bbDBLocal("y1",&l_y1);
  bbDBStmt(1187842);
  return t_std_geom_Rect_1d{l_x0,l_y0,l_x1,l_y1};
}

bbString t_std_geom_Rect_1d::m_to_s(){
  bbDBFrame db_f{"to:monkey.types.String()","/Applications/Blitz/Monkey2/modules/std/geom/rect.monkey2"};
  t_std_geom_Rect_1d*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(241666);
  return ((((((((bbString(L"Rect(",5)+bbString((*this).m_min.m_x))+bbString(L",",1))+bbString((*this).m_min.m_y))+bbString(L",",1))+bbString((*this).m_max.m_x))+bbString(L",",1))+bbString((*this).m_max.m_y))+bbString(L")",1));
}

void t_std_geom_Rect_1d::m_Y(bbDouble l_y){
  bbDBFrame db_f{"Y:Void(y:monkey.types.Double)","/Applications/Blitz/Monkey2/modules/std/geom/rect.monkey2"};
  t_std_geom_Rect_1d*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("y",&l_y);
  bbDBStmt(307202);
  (*this).m_min.m_y=l_y;
}

bbDouble t_std_geom_Rect_1d::m_Y(){
  bbDBFrame db_f{"Y:monkey.types.Double()","/Applications/Blitz/Monkey2/modules/std/geom/rect.monkey2"};
  t_std_geom_Rect_1d*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(299010);
  return (*this).m_min.m_y;
}

void t_std_geom_Rect_1d::m_X(bbDouble l_x){
  bbDBFrame db_f{"X:Void(x:monkey.types.Double)","/Applications/Blitz/Monkey2/modules/std/geom/rect.monkey2"};
  t_std_geom_Rect_1d*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("x",&l_x);
  bbDBStmt(274434);
  (*this).m_min.m_x=l_x;
}

bbDouble t_std_geom_Rect_1d::m_X(){
  bbDBFrame db_f{"X:monkey.types.Double()","/Applications/Blitz/Monkey2/modules/std/geom/rect.monkey2"};
  t_std_geom_Rect_1d*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(266242);
  return (*this).m_min.m_x;
}

bbDouble t_std_geom_Rect_1d::m_Width(){
  bbDBFrame db_f{"Width:monkey.types.Double()","/Applications/Blitz/Monkey2/modules/std/geom/rect.monkey2"};
  t_std_geom_Rect_1d*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(344066);
  return ((*this).m_max.m_x-(*this).m_min.m_x);
}

void t_std_geom_Rect_1d::m_TopRight(t_std_geom_Vec2_1d l_v){
  bbDBFrame db_f{"TopRight:Void(v:std.geom.Vec2<monkey.types.Double>)","/Applications/Blitz/Monkey2/modules/std/geom/rect.monkey2"};
  t_std_geom_Rect_1d*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("v",&l_v);
  bbDBStmt(688130);
  (*this).m_max.m_x=l_v.m_x;
  bbDBStmt(692226);
  (*this).m_min.m_y=l_v.m_y;
}

t_std_geom_Vec2_1d t_std_geom_Rect_1d::m_TopRight(){
  bbDBFrame db_f{"TopRight:std.geom.Vec2<monkey.types.Double>()","/Applications/Blitz/Monkey2/modules/std/geom/rect.monkey2"};
  t_std_geom_Rect_1d*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(679938);
  return t_std_geom_Vec2_1d{(*this).m_max.m_x,(*this).m_min.m_y};
}

void t_std_geom_Rect_1d::m_TopLeft(t_std_geom_Vec2_1d l_v){
  bbDBFrame db_f{"TopLeft:Void(v:std.geom.Vec2<monkey.types.Double>)","/Applications/Blitz/Monkey2/modules/std/geom/rect.monkey2"};
  t_std_geom_Rect_1d*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("v",&l_v);
  bbDBStmt(655362);
  (*this).m_min=l_v;
}

t_std_geom_Vec2_1d t_std_geom_Rect_1d::m_TopLeft(){
  bbDBFrame db_f{"TopLeft:std.geom.Vec2<monkey.types.Double>()","/Applications/Blitz/Monkey2/modules/std/geom/rect.monkey2"};
  t_std_geom_Rect_1d*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(647170);
  return (*this).m_min;
}

void t_std_geom_Rect_1d::m_Top(bbDouble l_top){
  bbDBFrame db_f{"Top:Void(top:monkey.types.Double)","/Applications/Blitz/Monkey2/modules/std/geom/rect.monkey2"};
  t_std_geom_Rect_1d*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("top",&l_top);
  bbDBStmt(462850);
  (*this).m_min.m_y=l_top;
}

bbDouble t_std_geom_Rect_1d::m_Top(){
  bbDBFrame db_f{"Top:monkey.types.Double()","/Applications/Blitz/Monkey2/modules/std/geom/rect.monkey2"};
  t_std_geom_Rect_1d*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(454658);
  return (*this).m_min.m_y;
}

bbString t_std_geom_Rect_1d::m_ToString(){
  bbDBFrame db_f{"ToString:monkey.types.String()","/Applications/Blitz/Monkey2/modules/std/geom/rect.monkey2"};
  t_std_geom_Rect_1d*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(1396738);
  return (*this).m_to_s();
}

void t_std_geom_Rect_1d::m_Size(t_std_geom_Vec2_1d l_size){
  bbDBFrame db_f{"Size:Void(size:std.geom.Vec2<monkey.types.Double>)","/Applications/Blitz/Monkey2/modules/std/geom/rect.monkey2"};
  t_std_geom_Rect_1d*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("size",&l_size);
  bbDBStmt(593922);
  (*this).m_max=(*this).m_min.m__add(l_size);
}

t_std_geom_Vec2_1d t_std_geom_Rect_1d::m_Size(){
  bbDBFrame db_f{"Size:std.geom.Vec2<monkey.types.Double>()","/Applications/Blitz/Monkey2/modules/std/geom/rect.monkey2"};
  t_std_geom_Rect_1d*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(585730);
  return (*this).m_max.m__sub((*this).m_min);
}

void t_std_geom_Rect_1d::m_Right(bbDouble l_right){
  bbDBFrame db_f{"Right:Void(right:monkey.types.Double)","/Applications/Blitz/Monkey2/modules/std/geom/rect.monkey2"};
  t_std_geom_Rect_1d*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("right",&l_right);
  bbDBStmt(495618);
  (*this).m_max.m_x=l_right;
}

bbDouble t_std_geom_Rect_1d::m_Right(){
  bbDBFrame db_f{"Right:monkey.types.Double()","/Applications/Blitz/Monkey2/modules/std/geom/rect.monkey2"};
  t_std_geom_Rect_1d*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(487426);
  return (*this).m_max.m_x;
}

void t_std_geom_Rect_1d::m_Origin(t_std_geom_Vec2_1d l_origin){
  bbDBFrame db_f{"Origin:Void(origin:std.geom.Vec2<monkey.types.Double>)","/Applications/Blitz/Monkey2/modules/std/geom/rect.monkey2"};
  t_std_geom_Rect_1d*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("origin",&l_origin);
  bbDBStmt(561154);
  (*this).m_min=l_origin;
}

t_std_geom_Vec2_1d t_std_geom_Rect_1d::m_Origin(){
  bbDBFrame db_f{"Origin:std.geom.Vec2<monkey.types.Double>()","/Applications/Blitz/Monkey2/modules/std/geom/rect.monkey2"};
  t_std_geom_Rect_1d*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(552962);
  return (*this).m_min;
}

void t_std_geom_Rect_1d::m_Left(bbDouble l_left){
  bbDBFrame db_f{"Left:Void(left:monkey.types.Double)","/Applications/Blitz/Monkey2/modules/std/geom/rect.monkey2"};
  t_std_geom_Rect_1d*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("left",&l_left);
  bbDBStmt(430082);
  (*this).m_min.m_x=l_left;
}

bbDouble t_std_geom_Rect_1d::m_Left(){
  bbDBFrame db_f{"Left:monkey.types.Double()","/Applications/Blitz/Monkey2/modules/std/geom/rect.monkey2"};
  t_std_geom_Rect_1d*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(421890);
  return (*this).m_min.m_x;
}

bbBool t_std_geom_Rect_1d::m_Intersects(t_std_geom_Rect_1d l_r){
  bbDBFrame db_f{"Intersects:monkey.types.Bool(r:std.geom.Rect<monkey.types.Double>)","/Applications/Blitz/Monkey2/modules/std/geom/rect.monkey2"};
  t_std_geom_Rect_1d*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("r",&l_r);
  bbDBStmt(1359874);
  return ((((l_r.m_max.m_x>(*this).m_min.m_x)&&(l_r.m_min.m_x<(*this).m_max.m_x))&&(l_r.m_max.m_y>(*this).m_min.m_y))&&(l_r.m_min.m_y<(*this).m_max.m_y));
}

bbDouble t_std_geom_Rect_1d::m_Height(){
  bbDBFrame db_f{"Height:monkey.types.Double()","/Applications/Blitz/Monkey2/modules/std/geom/rect.monkey2"};
  t_std_geom_Rect_1d*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(389122);
  return ((*this).m_max.m_y-(*this).m_min.m_y);
}

bbBool t_std_geom_Rect_1d::m_Empty(){
  bbDBFrame db_f{"Empty:monkey.types.Bool()","/Applications/Blitz/Monkey2/modules/std/geom/rect.monkey2"};
  t_std_geom_Rect_1d*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(786434);
  return (((*this).m_max.m_x<=(*this).m_min.m_x)||((*this).m_max.m_y<=(*this).m_min.m_y));
}

bbBool t_std_geom_Rect_1d::m_Contains(t_std_geom_Rect_1d l_r){
  bbDBFrame db_f{"Contains:monkey.types.Bool(r:std.geom.Rect<monkey.types.Double>)","/Applications/Blitz/Monkey2/modules/std/geom/rect.monkey2"};
  t_std_geom_Rect_1d*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("r",&l_r);
  bbDBStmt(1335298);
  return (((((*this).m_min.m_x<=l_r.m_min.m_x)&&((*this).m_max.m_x>=l_r.m_max.m_x))&&((*this).m_min.m_y<=l_r.m_min.m_y))&&((*this).m_max.m_y>=l_r.m_max.m_y));
}

bbBool t_std_geom_Rect_1d::m_Contains(t_std_geom_Vec2_1d l_v){
  bbDBFrame db_f{"Contains:monkey.types.Bool(v:std.geom.Vec2<monkey.types.Double>)","/Applications/Blitz/Monkey2/modules/std/geom/rect.monkey2"};
  t_std_geom_Rect_1d*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("v",&l_v);
  bbDBStmt(1318914);
  return ((((l_v.m_x>=(*this).m_min.m_x)&&(l_v.m_x<(*this).m_max.m_x))&&(l_v.m_y>=(*this).m_min.m_y))&&(l_v.m_y<(*this).m_max.m_y));
}

t_std_geom_Rect_1d t_std_geom_Rect_1d::m_Centered(t_std_geom_Rect_1d l_r){
  bbDBFrame db_f{"Centered:std.geom.Rect<monkey.types.Double>(r:std.geom.Rect<monkey.types.Double>)","/Applications/Blitz/Monkey2/modules/std/geom/rect.monkey2"};
  t_std_geom_Rect_1d*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("r",&l_r);
  bbDBStmt(1286152);
  bbDouble l_x=(((l_r.m_Width()-(*this).m_Width())/2.0)+l_r.m_min.m_x);
  bbDBLocal("x",&l_x);
  bbDBStmt(1290248);
  bbDouble l_y=(((l_r.m_Height()-(*this).m_Height())/2.0)+l_r.m_min.m_y);
  bbDBLocal("y",&l_y);
  bbDBStmt(1294338);
  return t_std_geom_Rect_1d{l_x,l_y,(l_x+(*this).m_Width()),(l_y+(*this).m_Height())};
}

t_std_geom_Vec2_1d t_std_geom_Rect_1d::m_Center(){
  bbDBFrame db_f{"Center:std.geom.Vec2<monkey.types.Double>()","/Applications/Blitz/Monkey2/modules/std/geom/rect.monkey2"};
  t_std_geom_Rect_1d*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(618498);
  return (*this).m_min.m__add((*this).m_max).m__div(2.0);
}

void t_std_geom_Rect_1d::m_BottomRight(t_std_geom_Vec2_1d l_v){
  bbDBFrame db_f{"BottomRight:Void(v:std.geom.Vec2<monkey.types.Double>)","/Applications/Blitz/Monkey2/modules/std/geom/rect.monkey2"};
  t_std_geom_Rect_1d*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("v",&l_v);
  bbDBStmt(724994);
  (*this).m_max=l_v;
}

t_std_geom_Vec2_1d t_std_geom_Rect_1d::m_BottomRight(){
  bbDBFrame db_f{"BottomRight:std.geom.Vec2<monkey.types.Double>()","/Applications/Blitz/Monkey2/modules/std/geom/rect.monkey2"};
  t_std_geom_Rect_1d*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(716802);
  return (*this).m_max;
}

void t_std_geom_Rect_1d::m_BottomLeft(t_std_geom_Vec2_1d l_v){
  bbDBFrame db_f{"BottomLeft:Void(v:std.geom.Vec2<monkey.types.Double>)","/Applications/Blitz/Monkey2/modules/std/geom/rect.monkey2"};
  t_std_geom_Rect_1d*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("v",&l_v);
  bbDBStmt(757762);
  (*this).m_min.m_x=l_v.m_x;
  bbDBStmt(761858);
  (*this).m_max.m_y=l_v.m_y;
}

t_std_geom_Vec2_1d t_std_geom_Rect_1d::m_BottomLeft(){
  bbDBFrame db_f{"BottomLeft:std.geom.Vec2<monkey.types.Double>()","/Applications/Blitz/Monkey2/modules/std/geom/rect.monkey2"};
  t_std_geom_Rect_1d*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(749570);
  return t_std_geom_Vec2_1d{(*this).m_min.m_x,(*this).m_max.m_y};
}

void t_std_geom_Rect_1d::m_Bottom(bbDouble l_bottom){
  bbDBFrame db_f{"Bottom:Void(bottom:monkey.types.Double)","/Applications/Blitz/Monkey2/modules/std/geom/rect.monkey2"};
  t_std_geom_Rect_1d*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("bottom",&l_bottom);
  bbDBStmt(528386);
  (*this).m_max.m_y=l_bottom;
}

bbDouble t_std_geom_Rect_1d::m_Bottom(){
  bbDBFrame db_f{"Bottom:monkey.types.Double()","/Applications/Blitz/Monkey2/modules/std/geom/rect.monkey2"};
  t_std_geom_Rect_1d*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(520194);
  return (*this).m_max.m_y;
}

void t_std_geom_Rect_1d::m__diveq(t_std_geom_Vec2_1d l_v){
  bbDBFrame db_f{"/=:Void(v:std.geom.Vec2<monkey.types.Double>)","/Applications/Blitz/Monkey2/modules/std/geom/rect.monkey2"};
  t_std_geom_Rect_1d*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("v",&l_v);
  bbDBStmt(1044482);
  (*this).m_min=(*this).m_min.m__div(l_v);
  bbDBStmt(1048578);
  (*this).m_max=(*this).m_max.m__div(l_v);
}

t_std_geom_Rect_1d t_std_geom_Rect_1d::m__div(t_std_geom_Vec2_1d l_v){
  bbDBFrame db_f{"/:std.geom.Rect<monkey.types.Double>(v:std.geom.Vec2<monkey.types.Double>)","/Applications/Blitz/Monkey2/modules/std/geom/rect.monkey2"};
  t_std_geom_Rect_1d*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("v",&l_v);
  bbDBStmt(884738);
  return t_std_geom_Rect_1d{((*this).m_min.m_x/l_v.m_x),((*this).m_min.m_y/l_v.m_y),((*this).m_max.m_x/l_v.m_x),((*this).m_max.m_y/l_v.m_y)};
}

void t_std_geom_Rect_1d::m__subeq(t_std_geom_Vec2_1d l_v){
  bbDBFrame db_f{"-=:Void(v:std.geom.Vec2<monkey.types.Double>)","/Applications/Blitz/Monkey2/modules/std/geom/rect.monkey2"};
  t_std_geom_Rect_1d*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("v",&l_v);
  bbDBStmt(1101826);
  (*this).m_min=(*this).m_min.m__sub(l_v);
  bbDBStmt(1105922);
  (*this).m_max=(*this).m_max.m__sub(l_v);
}

void t_std_geom_Rect_1d::m__subeq(t_std_geom_Rect_1d l_r){
  bbDBFrame db_f{"-=:Void(r:std.geom.Rect<monkey.types.Double>)","/Applications/Blitz/Monkey2/modules/std/geom/rect.monkey2"};
  t_std_geom_Rect_1d*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("r",&l_r);
  bbDBStmt(987138);
  (*this).m_min=(*this).m_min.m__sub(l_r.m_min);
  bbDBStmt(991234);
  (*this).m_max=(*this).m_max.m__sub(l_r.m_max);
}

t_std_geom_Rect_1d t_std_geom_Rect_1d::m__sub(t_std_geom_Vec2_1d l_v){
  bbDBFrame db_f{"-:std.geom.Rect<monkey.types.Double>(v:std.geom.Vec2<monkey.types.Double>)","/Applications/Blitz/Monkey2/modules/std/geom/rect.monkey2"};
  t_std_geom_Rect_1d*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("v",&l_v);
  bbDBStmt(933890);
  return t_std_geom_Rect_1d{(*this).m_min.m__sub(l_v),(*this).m_max.m__sub(l_v)};
}

t_std_geom_Rect_1d t_std_geom_Rect_1d::m__sub(t_std_geom_Rect_1d l_r){
  bbDBFrame db_f{"-:std.geom.Rect<monkey.types.Double>(r:std.geom.Rect<monkey.types.Double>)","/Applications/Blitz/Monkey2/modules/std/geom/rect.monkey2"};
  t_std_geom_Rect_1d*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("r",&l_r);
  bbDBStmt(835586);
  return t_std_geom_Rect_1d{(*this).m_min.m__sub(l_r.m_min),(*this).m_max.m__sub(l_r.m_max)};
}

void t_std_geom_Rect_1d::m__addeq(t_std_geom_Vec2_1d l_v){
  bbDBFrame db_f{"+=:Void(v:std.geom.Vec2<monkey.types.Double>)","/Applications/Blitz/Monkey2/modules/std/geom/rect.monkey2"};
  t_std_geom_Rect_1d*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("v",&l_v);
  bbDBStmt(1073154);
  (*this).m_min=(*this).m_min.m__add(l_v);
  bbDBStmt(1077250);
  (*this).m_max=(*this).m_max.m__add(l_v);
}

void t_std_geom_Rect_1d::m__addeq(t_std_geom_Rect_1d l_r){
  bbDBFrame db_f{"+=:Void(r:std.geom.Rect<monkey.types.Double>)","/Applications/Blitz/Monkey2/modules/std/geom/rect.monkey2"};
  t_std_geom_Rect_1d*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("r",&l_r);
  bbDBStmt(958466);
  (*this).m_min=(*this).m_min.m__add(l_r.m_min);
  bbDBStmt(962562);
  (*this).m_max=(*this).m_max.m__add(l_r.m_max);
}

t_std_geom_Rect_1d t_std_geom_Rect_1d::m__add(t_std_geom_Vec2_1d l_v){
  bbDBFrame db_f{"+:std.geom.Rect<monkey.types.Double>(v:std.geom.Vec2<monkey.types.Double>)","/Applications/Blitz/Monkey2/modules/std/geom/rect.monkey2"};
  t_std_geom_Rect_1d*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("v",&l_v);
  bbDBStmt(909314);
  return t_std_geom_Rect_1d{(*this).m_min.m__add(l_v),(*this).m_max.m__add(l_v)};
}

t_std_geom_Rect_1d t_std_geom_Rect_1d::m__add(t_std_geom_Rect_1d l_r){
  bbDBFrame db_f{"+:std.geom.Rect<monkey.types.Double>(r:std.geom.Rect<monkey.types.Double>)","/Applications/Blitz/Monkey2/modules/std/geom/rect.monkey2"};
  t_std_geom_Rect_1d*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("r",&l_r);
  bbDBStmt(811010);
  return t_std_geom_Rect_1d{(*this).m_min.m__add(l_r.m_min),(*this).m_max.m__add(l_r.m_max)};
}

void t_std_geom_Rect_1d::m__muleq(t_std_geom_Vec2_1d l_v){
  bbDBFrame db_f{"*=:Void(v:std.geom.Vec2<monkey.types.Double>)","/Applications/Blitz/Monkey2/modules/std/geom/rect.monkey2"};
  t_std_geom_Rect_1d*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("v",&l_v);
  bbDBStmt(1015810);
  (*this).m_min=(*this).m_min.m__mul(l_v);
  bbDBStmt(1019906);
  (*this).m_max=(*this).m_max.m__mul(l_v);
}

t_std_geom_Rect_1d t_std_geom_Rect_1d::m__mul(t_std_geom_Vec2_1d l_v){
  bbDBFrame db_f{"*:std.geom.Rect<monkey.types.Double>(v:std.geom.Vec2<monkey.types.Double>)","/Applications/Blitz/Monkey2/modules/std/geom/rect.monkey2"};
  t_std_geom_Rect_1d*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("v",&l_v);
  bbDBStmt(860162);
  return t_std_geom_Rect_1d{((*this).m_min.m_x*l_v.m_x),((*this).m_min.m_y*l_v.m_y),((*this).m_max.m_x*l_v.m_x),((*this).m_max.m_y*l_v.m_y)};
}

void t_std_geom_Rect_1d::m__andeq(t_std_geom_Rect_1d l_r){
  bbDBFrame db_f{"&=:Void(r:std.geom.Rect<monkey.types.Double>)","/Applications/Blitz/Monkey2/modules/std/geom/rect.monkey2"};
  t_std_geom_Rect_1d*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("r",&l_r);
  bbDBStmt(1212418);
  (*this).m_min.m_x=g_monkey_math_Max_1d((*this).m_min.m_x,l_r.m_min.m_x);
  bbDBStmt(1216514);
  (*this).m_min.m_y=g_monkey_math_Max_1d((*this).m_min.m_y,l_r.m_min.m_y);
  bbDBStmt(1220610);
  (*this).m_max.m_x=g_monkey_math_Min_1d((*this).m_max.m_x,l_r.m_max.m_x);
  bbDBStmt(1224706);
  (*this).m_max.m_y=g_monkey_math_Min_1d((*this).m_max.m_y,l_r.m_max.m_y);
}

t_std_geom_Rect_1d t_std_geom_Rect_1d::m__and(t_std_geom_Rect_1d l_r){
  bbDBFrame db_f{"&:std.geom.Rect<monkey.types.Double>(r:std.geom.Rect<monkey.types.Double>)","/Applications/Blitz/Monkey2/modules/std/geom/rect.monkey2"};
  t_std_geom_Rect_1d*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("r",&l_r);
  bbDBStmt(1130504);
  bbDouble l_x0=g_monkey_math_Max_1d((*this).m_min.m_x,l_r.m_min.m_x);
  bbDBLocal("x0",&l_x0);
  bbDBStmt(1134600);
  bbDouble l_y0=g_monkey_math_Max_1d((*this).m_min.m_y,l_r.m_min.m_y);
  bbDBLocal("y0",&l_y0);
  bbDBStmt(1138696);
  bbDouble l_x1=g_monkey_math_Min_1d((*this).m_max.m_x,l_r.m_max.m_x);
  bbDBLocal("x1",&l_x1);
  bbDBStmt(1142792);
  bbDouble l_y1=g_monkey_math_Min_1d((*this).m_max.m_y,l_r.m_max.m_y);
  bbDBLocal("y1",&l_y1);
  bbDBStmt(1146882);
  return t_std_geom_Rect_1d{l_x0,l_y0,l_x1,l_y1};
}
bbString bbDBType(t_std_geom_Rect_1d*){
  return "std.geom.Rect<monkey.types.Double>";
}
bbString bbDBValue(t_std_geom_Rect_1d*p){
  return bbDBStructValue(p);
}

int bbCompare(const t_std_geom_Rect_1d&x,const t_std_geom_Rect_1d&y){
  if(int t=bbCompare(x.m_min,y.m_min)) return t;
  if(int t=bbCompare(x.m_max,y.m_max)) return t;
  return 0;
}

void mx2_test_std_geom_2rect_init_f(){
}
