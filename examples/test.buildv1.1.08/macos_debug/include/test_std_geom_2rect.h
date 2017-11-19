
#ifndef MX2_TEST_STD_GEOM_2RECT_H
#define MX2_TEST_STD_GEOM_2RECT_H

#include <bbmonkey.h>
#include "std/std.buildv1.1.08/macos_debug/include/std_geom_2rect.h"

struct t_std_geom_Rect_1d;

struct t_std_geom_Rect_1d;
bbString bbDBType(t_std_geom_Rect_1d*);
bbString bbDBValue(t_std_geom_Rect_1d*);
struct t_std_geom_Rect_1f;
bbString bbDBType(t_std_geom_Rect_1f*);
bbString bbDBValue(t_std_geom_Rect_1f*);


extern t_std_geom_Rect_1d g_std_geom_Rect_1f_to_Tt_std_geom_Rect_1d_2_1d(t_std_geom_Rect_1f &l_self);
extern t_std_geom_Rect_1f g_std_geom_Rect_1d_to_Tt_std_geom_Rect_1f_2_1f(t_std_geom_Rect_1d &l_self);

// Class std.geom.Rect<monkey.types.Double>

#include "std/std.buildv1.1.08/macos_debug/include/std_geom_2vec2.h"

struct t_std_geom_Rect_1d;
bbString bbDBType(t_std_geom_Rect_1d*);
bbString bbDBValue(t_std_geom_Rect_1d*);


struct t_std_geom_Rect_1d{
  typedef t_std_geom_Rect_1d bb_struct_type;
  const char *typeName()const{return "t_std_geom_Rect_1d";}

  t_std_geom_Vec2_1d m_min{};
  t_std_geom_Vec2_1d m_max{};
  static void dbEmit(t_std_geom_Rect_1d*);

  t_std_geom_Rect_1d(t_std_geom_Vec2_1d l_min,bbDouble l_x1,bbDouble l_y1);
  t_std_geom_Rect_1d(bbDouble l_x0,bbDouble l_y0,t_std_geom_Vec2_1d l_max);
  t_std_geom_Rect_1d(bbDouble l_x0,bbDouble l_y0,bbDouble l_x1,bbDouble l_y1);
  t_std_geom_Rect_1d(t_std_geom_Vec2_1d l_min,t_std_geom_Vec2_1d l_max);
  t_std_geom_Rect_1d(bbNullCtor_t);
  ~t_std_geom_Rect_1d();

  void m__oreq(t_std_geom_Rect_1d l_r);
  t_std_geom_Rect_1d m__or(t_std_geom_Rect_1d l_r);
  bbString m_to_s();
  void m_Y(bbDouble l_y);
  bbDouble m_Y();
  void m_X(bbDouble l_x);
  bbDouble m_X();
  bbDouble m_Width();
  void m_TopRight(t_std_geom_Vec2_1d l_v);
  t_std_geom_Vec2_1d m_TopRight();
  void m_TopLeft(t_std_geom_Vec2_1d l_v);
  t_std_geom_Vec2_1d m_TopLeft();
  void m_Top(bbDouble l_top);
  bbDouble m_Top();
  bbString m_ToString();
  void m_Size(t_std_geom_Vec2_1d l_size);
  t_std_geom_Vec2_1d m_Size();
  void m_Right(bbDouble l_right);
  bbDouble m_Right();
  void m_Origin(t_std_geom_Vec2_1d l_origin);
  t_std_geom_Vec2_1d m_Origin();
  void m_Left(bbDouble l_left);
  bbDouble m_Left();
  bbBool m_Intersects(t_std_geom_Rect_1d l_r);
  bbDouble m_Height();
  bbBool m_Empty();
  bbBool m_Contains(t_std_geom_Rect_1d l_r);
  bbBool m_Contains(t_std_geom_Vec2_1d l_v);
  t_std_geom_Rect_1d m_Centered(t_std_geom_Rect_1d l_r);
  t_std_geom_Vec2_1d m_Center();
  void m_BottomRight(t_std_geom_Vec2_1d l_v);
  t_std_geom_Vec2_1d m_BottomRight();
  void m_BottomLeft(t_std_geom_Vec2_1d l_v);
  t_std_geom_Vec2_1d m_BottomLeft();
  void m_Bottom(bbDouble l_bottom);
  bbDouble m_Bottom();
  void m__diveq(t_std_geom_Vec2_1d l_v);
  t_std_geom_Rect_1d m__div(t_std_geom_Vec2_1d l_v);
  void m__subeq(t_std_geom_Vec2_1d l_v);
  void m__subeq(t_std_geom_Rect_1d l_r);
  t_std_geom_Rect_1d m__sub(t_std_geom_Vec2_1d l_v);
  t_std_geom_Rect_1d m__sub(t_std_geom_Rect_1d l_r);
  void m__addeq(t_std_geom_Vec2_1d l_v);
  void m__addeq(t_std_geom_Rect_1d l_r);
  t_std_geom_Rect_1d m__add(t_std_geom_Vec2_1d l_v);
  t_std_geom_Rect_1d m__add(t_std_geom_Rect_1d l_r);
  void m__muleq(t_std_geom_Vec2_1d l_v);
  t_std_geom_Rect_1d m__mul(t_std_geom_Vec2_1d l_v);
  void m__andeq(t_std_geom_Rect_1d l_r);
  t_std_geom_Rect_1d m__and(t_std_geom_Rect_1d l_r);

  t_std_geom_Rect_1d(){
  }
};
bbString bbDBType(t_std_geom_Rect_1d*);
bbString bbDBValue(t_std_geom_Rect_1d*);

int bbCompare(const t_std_geom_Rect_1d&x,const t_std_geom_Rect_1d&y);

#endif
