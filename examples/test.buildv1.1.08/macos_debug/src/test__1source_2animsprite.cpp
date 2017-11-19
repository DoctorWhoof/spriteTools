
#include "test.buildv1.1.08/macos_debug/include/test__1source_2animsprite.h"

#include "mojo/mojo.buildv1.1.08/macos_debug/include/mojo_graphics_2texture.h"
#include "mojo3d/mojo3d.buildv1.1.08/macos_debug/include/mojo3d_render_2material.h"
#include "mojo3d/mojo3d.buildv1.1.08/macos_debug/include/mojo3d_render_2materials_2spritematerial.h"
#include "monkey/monkey.buildv1.1.08/macos_debug/include/monkey_types.h"
#include "std/std.buildv1.1.08/macos_debug/include/std_collections_2map.h"
#include "std/std.buildv1.1.08/macos_debug/include/std_collections_2stack.h"
#include "std/std.buildv1.1.08/macos_debug/include/std_geom_2rect.h"
#include "std/std.buildv1.1.08/macos_debug/include/std_misc_2json.h"
#include "test.buildv1.1.08/macos_debug/include/test__1source_2animsprite.h"
#include "test.buildv1.1.08/macos_debug/include/test_std_collections_2map.h"
#include "test.buildv1.1.08/macos_debug/include/test_std_collections_2stack.h"
#include "test.buildv1.1.08/macos_debug/include/test_std_geom_2rect.h"

struct t_mojo3d_Entity;
#ifdef BB_NEWREFLECTION
bbTypeInfo *bbGetType( t_mojo3d_Entity* const& );
#endif
bbString bbDBType(t_mojo3d_Entity**);
bbString bbDBValue(t_mojo3d_Entity**);

extern bbInt g_monkey_math_Clamp_1i(bbInt l_value,bbInt l_min,bbInt l_max);
void t_mojo3d_graphics_AnimSprite::init(){
  m__0coordinates=bbGCNew<t_std_collections_Stack_1Tt_std_geom_Rect_1d_2>();
  m__0animations=bbGCNew<t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2>();
}

void t_mojo3d_graphics_AnimSprite::gcMark(){
  t_mojo3d_Sprite::gcMark();
  bbGCMark(m_onLastFrame);
  bbGCMark(m_onFirstFrame);
  bbGCMark(m__0coordinates);
  bbGCMark(m__0anim);
  bbGCMark(m__0animations);
}

void t_mojo3d_graphics_AnimSprite::dbEmit(){
  t_mojo3d_Sprite::dbEmit();
  puts( "[mojo3d.graphics.AnimSprite]");
  bbDBEmit("onLastFrame",&m_onLastFrame);
  bbDBEmit("onFirstFrame",&m_onFirstFrame);
  bbDBEmit("_frame",&m__0frame);
  bbDBEmit("_coordinates",&m__0coordinates);
  bbDBEmit("_timeScale",&m__0timeScale);
  bbDBEmit("_anim",&m__0anim);
  bbDBEmit("_animations",&m__0animations);
  bbDBEmit("_offset",&m__0offset);
  bbDBEmit("_framerate",&m__0framerate);
  bbDBEmit("_firstFrame",&m__0firstFrame);
  bbDBEmit("_hasReachedEnd",&m__0hasReachedEnd);
  bbDBEmit("_hasReachedStart",&m__0hasReachedStart);
}

t_mojo3d_graphics_AnimSprite::t_mojo3d_graphics_AnimSprite(bbString l_path,bbInt l_cellWidth,bbInt l_cellHeight,bbInt l_padding,bbInt l_border,t_mojo_graphics_TextureFlags l_flags):t_mojo3d_Sprite(bbGC::tmp(((t_mojo3d_Material*)(g_mojo3d_SpriteMaterial_Load(l_path,l_flags)))),((t_mojo3d_Entity*)0)){
  bbGC::popTmps(1);
  init();
  struct f0_t : public bbGCFrame{
    t_mojo_graphics_Texture* l_texture{};
    t_mojo3d_SpriteMaterial* t0{};
    void gcMark(){
      bbGCMark(l_texture);
      bbGCMark(t0);
    }
  }f0{};
  bbDBFrame db_f{"new:Void(path:monkey.types.String,cellWidth:monkey.types.Int,cellHeight:monkey.types.Int,padding:monkey.types.Int,border:monkey.types.Int,flags:mojo.graphics.TextureFlags)","/Users/leo/GoogleDrive/Code/Monkey2/spriteTools/source/animsprite.monkey2"};
  t_mojo3d_graphics_AnimSprite*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("path",&l_path);
  bbDBLocal("cellWidth",&l_cellWidth);
  bbDBLocal("cellHeight",&l_cellHeight);
  bbDBLocal("padding",&l_padding);
  bbDBLocal("border",&l_border);
  bbDBLocal("flags",&l_flags);
  bbDBStmt(581640);
  f0.l_texture=(f0.t0=bb_object_cast<t_mojo3d_SpriteMaterial*>(this->m_Material()))->m_ColorTexture();
  bbDBLocal("texture",&f0.l_texture);
  bbDBStmt(585736);
  bbDouble l__0paddedWidth=bbDouble((l_cellWidth+(l_padding*2)));
  bbDBLocal("_paddedWidth",&l__0paddedWidth);
  bbDBStmt(589832);
  bbDouble l__0paddedHeight=bbDouble((l_cellHeight+(l_padding*2)));
  bbDBLocal("_paddedHeight",&l__0paddedHeight);
  bbDBStmt(593928);
  bbInt l__0rows=bbInt((bbDouble(((f0.l_texture->m_Height()-l_border)-l_border))/l__0paddedHeight));
  bbDBLocal("_rows",&l__0rows);
  bbDBStmt(598024);
  bbInt l__0columns=bbInt((bbDouble(((f0.l_texture->m_Width()-l_border)-l_border))/l__0paddedWidth));
  bbDBLocal("_columns",&l__0columns);
  bbDBStmt(606216);
  bbInt l_numFrames=(l__0rows*l__0columns);
  bbDBLocal("numFrames",&l_numFrames);
  bbDBStmt(610312);
  bbDouble l_w=bbDouble(f0.l_texture->m_Width());
  bbDBLocal("w",&l_w);
  bbDBStmt(614408);
  bbDouble l_h=bbDouble(f0.l_texture->m_Height());
  bbDBLocal("h",&l_h);
  bbDBStmt(618498);
  {
    bbDBLoop db_loop;
    bbInt l_i=bbInt(0);
    bbDBLocal("i",&l_i);
    for(;(l_i<l_numFrames);l_i+=1){
      struct f2_t : public bbGCFrame{
        t_std_geom_Rect_1f t0{};
        void gcMark(){
          bbGCMark(t0);
        }
      }f2{};
      bbDBBlock db_blk;
      bbDBStmt(622601);
      bbInt l_col=(l_i%l__0columns);
      bbDBLocal("col",&l_col);
      bbDBStmt(626697);
      bbDouble l_x=(((bbDouble(l_col)*l__0paddedWidth)+bbDouble(l_padding))+bbDouble(l_border));
      bbDBLocal("x",&l_x);
      bbDBStmt(630793);
      bbDouble l_y=(((bbDouble((l_i/l__0columns))*l__0paddedHeight)+bbDouble(l_padding))+bbDouble(l_border));
      bbDBLocal("y",&l_y);
      bbDBStmt(634883);
      this->m__0coordinates.get()->m_Push(g_std_geom_Rect_1f_to_Tt_std_geom_Rect_1d_2_1d((f2.t0=t_std_geom_Rect_1f{bbFloat((l_x/l_w)),bbFloat((l_y/l_h)),bbFloat(((l_x+bbDouble(l_cellWidth))/l_w)),bbFloat(((l_y+bbDouble(l_cellHeight))/l_h))})));
    }
  }
  bbDBStmt(647170);
  this->m_Frame(bbInt(0));
}
t_mojo3d_graphics_AnimSprite::~t_mojo3d_graphics_AnimSprite(){
}

void t_mojo3d_graphics_AnimSprite::m_Update(bbDouble l_time){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Update:Void(time:monkey.types.Double)","/Users/leo/GoogleDrive/Code/Monkey2/spriteTools/source/animsprite.monkey2"};
  t_mojo3d_graphics_AnimSprite*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("time",&l_time);
  bbDBStmt(671752);
  bbDouble l_frameLength=((1.0/this->m_FrameRate())/bbDouble(this->m__0timeScale));
  bbDBLocal("frameLength",&l_frameLength);
  bbDBStmt(675842);
  l_time+=(bbDouble(this->m__0offset)*l_frameLength);
  bbDBStmt(684034);
  if(bbBool(this->m__0anim.get())){
    bbDBBlock db_blk;
    bbDBStmt(688131);
    if(this->m__0anim.get()->m_loop){
      bbDBBlock db_blk;
      bbDBStmt(692228);
      this->m_Frame(this->m__0anim.get()->m_frames[bbInt((std::fmod(l_time,this->m_Duration())/l_frameLength))]);
    }else{
      bbDBStmt(696323);
      bbDBBlock db_blk;
      bbDBStmt(700420);
      this->m_Frame(this->m__0anim.get()->m_frames[bbInt((l_time/l_frameLength))]);
    }
  }else{
    bbDBStmt(708610);
    bbDBBlock db_blk;
    bbDBStmt(712707);
    this->m_Frame(bbInt((std::fmod(l_time,this->m_Duration())/l_frameLength)));
  }
}

void t_mojo3d_graphics_AnimSprite::m_LoadAnimations(bbString l_path){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_std_json_JsonObject* l_json{};
    void gcMark(){
      bbGCMark(l_json);
    }
  }f0{};
  bbDBFrame db_f{"LoadAnimations:Void(path:monkey.types.String)","/Users/leo/GoogleDrive/Code/Monkey2/spriteTools/source/animsprite.monkey2"};
  t_mojo3d_graphics_AnimSprite*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("path",&l_path);
  bbDBStmt(786440);
  f0.l_json=g_std_json_JsonObject_Load(l_path,false);
  bbDBLocal("json",&f0.l_json);
  bbDBStmt(790530);
  if(bbBool(f0.l_json)){
    struct f1_t : public bbGCFrame{
      t_std_json_JsonObject* l_anims{};
      void gcMark(){
        bbGCMark(l_anims);
      }
    }f1{};
    bbDBBlock db_blk;
    bbDBStmt(794633);
    f1.l_anims=f0.l_json->m_GetObject(bbString(L"animations",10));
    bbDBLocal("anims",&f1.l_anims);
    bbDBStmt(798723);
    if(bbBool(f1.l_anims)){
      bbDBBlock db_blk;
      bbDBStmt(802820);
      {
        struct f3_t : public bbGCFrame{
          t_std_collections_Map_1sTt_std_json_JsonValue_2_Iterator l_0{};
          t_std_collections_Map_1sTt_std_json_JsonValue_2* t0{};
          void gcMark(){
            bbGCMark(l_0);
            bbGCMark(t0);
          }
        }f3{};
        bbDBLoop db_loop;
        f3.l_0=(f3.t0=f1.l_anims->m_ToObject())->m_All();
        bbDBLocal("0",&f3.l_0);
        for(;f3.l_0.m_Valid();f3.l_0.m_Bump()){
          struct f4_t : public bbGCFrame{
            t_std_collections_Map_1sTt_std_json_JsonValue_2_Node* l_a{};
            t_std_collections_Stack_1Tt_std_json_JsonValue_2* l_frameStack{};
            bbArray<bbInt> l_frames{};
            t_std_collections_Map_1sTt_std_json_JsonValue_2* l_obj{};
            t_std_json_JsonValue* t0{};
            void gcMark(){
              bbGCMark(l_a);
              bbGCMark(l_frameStack);
              bbGCMark(l_frames);
              bbGCMark(l_obj);
              bbGCMark(t0);
            }
          }f4{};
          bbDBBlock db_blk;
          f4.l_a=f3.l_0.m_Current();
          bbDBLocal("a",&f4.l_a);
          bbDBStmt(806923);
          f4.l_obj=(f4.t0=f4.l_a->m_Value())->m_ToObject();
          bbDBLocal("obj",&f4.l_obj);
          bbDBStmt(811019);
          bbBool l_loop=(f4.t0=f4.l_obj->m__idx(bbString(L"loop",4)))->m_ToBool();
          bbDBLocal("loop",&l_loop);
          bbDBStmt(815115);
          bbDouble l_rate=(f4.t0=f4.l_obj->m__idx(bbString(L"rate",4)))->m_ToNumber();
          bbDBLocal("rate",&l_rate);
          bbDBStmt(823307);
          f4.l_frameStack=(f4.t0=f4.l_obj->m__idx(bbString(L"frames",6)))->m_ToArray();
          bbDBLocal("frameStack",&f4.l_frameStack);
          bbDBStmt(827403);
          f4.l_frames=bbArray<bbInt>(f4.l_frameStack->m_Length());
          bbDBLocal("frames",&f4.l_frames);
          bbDBStmt(831493);
          {
            bbDBLoop db_loop;
            bbInt l_n=bbInt(0);
            bbDBLocal("n",&l_n);
            for(;(l_n<f4.l_frameStack->m_Length());l_n+=1){
              struct f6_t : public bbGCFrame{
                t_std_json_JsonValue* t0{};
                void gcMark(){
                  bbGCMark(t0);
                }
              }f6{};
              bbDBBlock db_blk;
              bbDBStmt(835590);
              f4.l_frames[l_n]=bbInt((f6.t0=f4.l_frameStack->m__idx(l_n))->m_ToNumber());
            }
          }
          bbDBStmt(847877);
          this->m_AddAnimationClip(f4.l_a->m_Key(),l_loop,bbInt(l_rate),f4.l_frames);
        }
      }
    }
  }else{
    bbDBStmt(860162);
    bbDBBlock db_blk;
    bbDBStmt(864259);
    bb_print(bbString(L"AnimSprite: Warning, json file not found or invalid",51));
  }
}

bbInt t_mojo3d_graphics_AnimSprite::m_LastFrame(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"LastFrame:monkey.types.Int()","/Users/leo/GoogleDrive/Code/Monkey2/spriteTools/source/animsprite.monkey2"};
  t_mojo3d_graphics_AnimSprite*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(524290);
  if(bbBool(this->m__0anim.get())){
    bbDBBlock db_blk;
    bbDBStmt(528387);
    return this->m__0anim.get()->m_frames[(this->m__0anim.get()->m_frames.length()-1)];
  }else{
    bbDBStmt(532482);
    bbDBBlock db_blk;
    bbDBStmt(536579);
    return (this->m__0coordinates.get()->m_Length()-1);
  }
}

void t_mojo3d_graphics_AnimSprite::m_FrameRate(bbDouble l_value){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"FrameRate:Void(value:monkey.types.Double)","/Users/leo/GoogleDrive/Code/Monkey2/spriteTools/source/animsprite.monkey2"};
  t_mojo3d_graphics_AnimSprite*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("value",&l_value);
  bbDBStmt(397314);
  if(bbBool(this->m__0anim.get())){
    bbDBBlock db_blk;
    bbDBStmt(401411);
    this->m__0anim.get()->m_framerate=bbFloat(l_value);
  }else{
    bbDBStmt(405506);
    bbDBBlock db_blk;
    bbDBStmt(409603);
    this->m__0framerate=l_value;
  }
}

bbDouble t_mojo3d_graphics_AnimSprite::m_FrameRate(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"FrameRate:monkey.types.Double()","/Users/leo/GoogleDrive/Code/Monkey2/spriteTools/source/animsprite.monkey2"};
  t_mojo3d_graphics_AnimSprite*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(372738);
  if(bbBool(this->m__0anim.get())){
    bbDBBlock db_blk;
    bbDBStmt(376835);
    return bbDouble(this->m__0anim.get()->m_framerate);
  }else{
    bbDBStmt(380930);
    bbDBBlock db_blk;
    bbDBStmt(385027);
    return this->m__0framerate;
  }
}

void t_mojo3d_graphics_AnimSprite::m_FrameOffset(bbInt l_number){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"FrameOffset:Void(number:monkey.types.Int)","/Users/leo/GoogleDrive/Code/Monkey2/spriteTools/source/animsprite.monkey2"};
  t_mojo3d_graphics_AnimSprite*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("number",&l_number);
  bbDBStmt(348162);
  this->m__0offset=l_number;
}

bbInt t_mojo3d_graphics_AnimSprite::m_FrameOffset(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"FrameOffset:monkey.types.Int()","/Users/leo/GoogleDrive/Code/Monkey2/spriteTools/source/animsprite.monkey2"};
  t_mojo3d_graphics_AnimSprite*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(339970);
  return this->m__0offset;
}

void t_mojo3d_graphics_AnimSprite::m_Frame(bbInt l_number){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Frame:Void(number:monkey.types.Int)","/Users/leo/GoogleDrive/Code/Monkey2/spriteTools/source/animsprite.monkey2"};
  t_mojo3d_graphics_AnimSprite*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("number",&l_number);
  bbDBStmt(151554);
  if((l_number!=this->m__0frame)){
    struct f1_t : public bbGCFrame{
      t_std_geom_Rect_1d t0{};
      void gcMark(){
        bbGCMark(t0);
      }
    }f1{};
    bbDBBlock db_blk;
    bbDBStmt(155651);
    this->m__0frame=g_monkey_math_Clamp_1i(l_number,bbInt(0),(this->m__0coordinates.get()->m_Length()-1));
    bbDBStmt(159747);
    this->m_TextureRect(g_std_geom_Rect_1d_to_Tt_std_geom_Rect_1f_2_1f((f1.t0=this->m__0coordinates.get()->m__idx(this->m__0frame))));
    bbDBStmt(163843);
    if((this->m__0frame>=this->m_LastFrame())){
      bbDBBlock db_blk;
      bbDBStmt(167940);
      if(!this->m__0hasReachedEnd){
        bbDBBlock db_blk;
        bbDBStmt(172037);
        this->m_onLastFrame();
        bbDBStmt(176133);
        this->m__0hasReachedEnd=true;
        bbDBStmt(180229);
        this->m__0hasReachedStart=false;
      }
    }
    bbDBStmt(192515);
    if(this->m__0firstFrame){
      bbDBBlock db_blk;
      bbDBStmt(196612);
      this->m_onFirstFrame();
      bbDBStmt(200708);
      this->m__0firstFrame=false;
    }else{
      bbDBStmt(204803);
      bbDBBlock db_blk;
      bbDBStmt(208900);
      if((this->m__0frame==this->m_FirstFrame())){
        bbDBBlock db_blk;
        bbDBStmt(212997);
        if(!this->m__0hasReachedStart){
          bbDBBlock db_blk;
          bbDBStmt(217094);
          this->m_onFirstFrame();
          bbDBStmt(221190);
          this->m__0hasReachedStart=true;
          bbDBStmt(225286);
          this->m__0hasReachedEnd=false;
        }
      }
    }
  }
}

bbInt t_mojo3d_graphics_AnimSprite::m_Frame(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Frame:monkey.types.Int()","/Users/leo/GoogleDrive/Code/Monkey2/spriteTools/source/animsprite.monkey2"};
  t_mojo3d_graphics_AnimSprite*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(143362);
  return this->m__0frame;
}

bbInt t_mojo3d_graphics_AnimSprite::m_FirstFrame(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"FirstFrame:monkey.types.Int()","/Users/leo/GoogleDrive/Code/Monkey2/spriteTools/source/animsprite.monkey2"};
  t_mojo3d_graphics_AnimSprite*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(483330);
  if(bbBool(this->m__0anim.get())){
    bbDBBlock db_blk;
    bbDBStmt(487427);
    return this->m__0anim.get()->m_frames[bbInt(0)];
  }else{
    bbDBStmt(491522);
    bbDBBlock db_blk;
    bbDBStmt(495619);
    return bbInt(0);
  }
}

bbDouble t_mojo3d_graphics_AnimSprite::m_Duration(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Duration:monkey.types.Double()","/Users/leo/GoogleDrive/Code/Monkey2/spriteTools/source/animsprite.monkey2"};
  t_mojo3d_graphics_AnimSprite*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(438280);
  bbDouble l__0period=((1.0/this->m_FrameRate())*bbDouble(this->m__0timeScale));
  bbDBLocal("_period",&l__0period);
  bbDBStmt(442370);
  if(bbBool(this->m__0anim.get())){
    bbDBBlock db_blk;
    bbDBStmt(446467);
    return (l__0period*bbDouble(this->m__0anim.get()->m_frames.length()));
  }else{
    bbDBStmt(450562);
    bbDBBlock db_blk;
    bbDBStmt(454659);
    return (l__0period*bbDouble(this->m__0coordinates.get()->m_Length()));
  }
}

void t_mojo3d_graphics_AnimSprite::m_Animation(bbString l_name){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Animation:Void(name:monkey.types.String)","/Users/leo/GoogleDrive/Code/Monkey2/spriteTools/source/animsprite.monkey2"};
  t_mojo3d_graphics_AnimSprite*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("name",&l_name);
  bbDBStmt(274434);
  if(bbBool(this->m__0animations.get()->m__idx(l_name))){
    bbDBBlock db_blk;
    bbDBStmt(278531);
    this->m__0anim=this->m__0animations.get()->m__idx(l_name);
  }else{
    bbDBStmt(282626);
    bbDBBlock db_blk;
    bbDBStmt(286723);
    bb_print(((bbString(L"AnimSprite: animation '",23)+l_name)+bbString(L"' Not found!",12)));
  }
}

bbString t_mojo3d_graphics_AnimSprite::m_Animation(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Animation:monkey.types.String()","/Users/leo/GoogleDrive/Code/Monkey2/spriteTools/source/animsprite.monkey2"};
  t_mojo3d_graphics_AnimSprite*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(266242);
  return this->m__0anim.get()->m_name;
}

t_std_collections_Map_1sTt_mojo3d_graphics_AnimationClip_2* t_mojo3d_graphics_AnimSprite::m_AllAnimations(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"AllAnimations:StringMap:std.collections.Map<monkey.types.String,mojo3d.graphics.AnimationClip>()","/Users/leo/GoogleDrive/Code/Monkey2/spriteTools/source/animsprite.monkey2"};
  t_mojo3d_graphics_AnimSprite*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(315394);
  return this->m__0animations.get();
}

void t_mojo3d_graphics_AnimSprite::m_AddAnimationClip(bbString l__0name,bbBool l__0loop,bbInt l_framerate,bbArray<bbInt> l__0frames){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_mojo3d_graphics_AnimationClip* l_animClip{};
    void gcMark(){
      bbGCMark(l_animClip);
    }
  }f0{};
  bbDBFrame db_f{"AddAnimationClip:Void(_name:monkey.types.String,_loop:monkey.types.Bool,framerate:monkey.types.Int,_frames:monkey.types.Int[])","/Users/leo/GoogleDrive/Code/Monkey2/spriteTools/source/animsprite.monkey2"};
  t_mojo3d_graphics_AnimSprite*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("_name",&l__0name);
  bbDBLocal("_loop",&l__0loop);
  bbDBLocal("framerate",&l_framerate);
  bbDBLocal("_frames",&l__0frames);
  bbDBStmt(741384);
  f0.l_animClip=bbGCNew<t_mojo3d_graphics_AnimationClip>();
  bbDBLocal("animClip",&f0.l_animClip);
  bbDBStmt(745474);
  f0.l_animClip->m_name=l__0name;
  bbDBStmt(749570);
  f0.l_animClip->m_loop=l__0loop;
  bbDBStmt(753666);
  f0.l_animClip->m_frames=l__0frames;
  bbDBStmt(757762);
  f0.l_animClip->m_framerate=bbFloat(l_framerate);
  bbDBStmt(761858);
  this->m__0animations.get()->m_Add(l__0name,f0.l_animClip);
}
bbString bbDBType(t_mojo3d_graphics_AnimSprite**){
  return "mojo3d.graphics.AnimSprite";
}
bbString bbDBValue(t_mojo3d_graphics_AnimSprite**p){
  return bbDBObjectValue(*p);
}

void t_mojo3d_graphics_AnimationClip::gcMark(){
  bbGCMark(m_frames);
}

void t_mojo3d_graphics_AnimationClip::dbEmit(){
  puts( "[mojo3d.graphics.AnimationClip]");
  bbDBEmit("name",&m_name);
  bbDBEmit("loop",&m_loop);
  bbDBEmit("frames",&m_frames);
  bbDBEmit("framerate",&m_framerate);
}
t_mojo3d_graphics_AnimationClip::~t_mojo3d_graphics_AnimationClip(){
}

bbInt t_mojo3d_graphics_AnimationClip::m_FrameCount(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"FrameCount:monkey.types.Int()","/Users/leo/GoogleDrive/Code/Monkey2/spriteTools/source/animsprite.monkey2"};
  t_mojo3d_graphics_AnimationClip*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(937986);
  return this->m_frames.length();
}
bbString bbDBType(t_mojo3d_graphics_AnimationClip**){
  return "mojo3d.graphics.AnimationClip";
}
bbString bbDBValue(t_mojo3d_graphics_AnimationClip**p){
  return bbDBObjectValue(*p);
}

void mx2_test__1source_2animsprite_init_f(){
}
