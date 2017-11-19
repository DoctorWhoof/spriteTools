
#include "test.buildv1.1.08/macos_debug/include/test_monkey_math.h"

bbDouble g_monkey_math_Max_1d(bbDouble l_x,bbDouble l_y){
  bbDBFrame db_f{"Max<monkey.types.Double>:monkey.types.Double(x:monkey.types.Double,y:monkey.types.Double)","/Applications/Blitz/Monkey2/modules/monkey/math.monkey2"};
  bbDBLocal("x",&l_x);
  bbDBLocal("y",&l_y);
  bbDBStmt(823297);
  if((l_x>=l_y)){
    bbDBBlock db_blk;
    return l_x;
  }
  bbDBStmt(827393);
  return l_y;
}

bbDouble g_monkey_math_Min_1d(bbDouble l_x,bbDouble l_y){
  bbDBFrame db_f{"Min<monkey.types.Double>:monkey.types.Double(x:monkey.types.Double,y:monkey.types.Double)","/Applications/Blitz/Monkey2/modules/monkey/math.monkey2"};
  bbDBLocal("x",&l_x);
  bbDBLocal("y",&l_y);
  bbDBStmt(782337);
  if((l_x<=l_y)){
    bbDBBlock db_blk;
    return l_x;
  }
  bbDBStmt(786433);
  return l_y;
}

void mx2_test_monkey_math_init_f(){
}
