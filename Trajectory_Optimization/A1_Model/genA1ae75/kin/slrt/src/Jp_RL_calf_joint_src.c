/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:50:59 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RL_calf_joint_src.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE static __inline__        /* use standard inline */
#endif

/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
INLINE double Power(double x, double y) { return pow(x, y); }
INLINE double Sqrt(double x) { return sqrt(x); }

INLINE double Abs(double x) { return fabs(x); }

INLINE double Exp(double x) { return exp(x); }
INLINE double Log(double x) { return log(x); }

INLINE double Sin(double x) { return sin(x); }
INLINE double Cos(double x) { return cos(x); }
INLINE double Tan(double x) { return tan(x); }

INLINE double Csc(double x) { return 1.0/sin(x); }
INLINE double Sec(double x) { return 1.0/cos(x); }

INLINE double ArcSin(double x) { return asin(x); }
INLINE double ArcCos(double x) { return acos(x); }

/* update ArcTan function to use atan2 instead. */
INLINE double ArcTan(double x, double y) { return atan2(y,x); }

INLINE double Sinh(double x) { return sinh(x); }
INLINE double Cosh(double x) { return cosh(x); }
INLINE double Tanh(double x) { return tanh(x); }

#define E 2.71828182845904523536029
#define Pi 3.14159265358979323846264
#define Degree 0.01745329251994329576924

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1)
{
  double t393;
  double t1269;
  double t928;
  double t930;
  double t1270;
  double t686;
  double t1165;
  double t1315;
  double t1385;
  double t1569;
  double t1733;
  double t1771;
  double t1773;
  double t306;
  double t2840;
  double t97;
  double t3362;
  double t3573;
  double t3628;
  double t3654;
  double t3680;
  double t3694;
  double t3956;
  double t4077;
  double t5440;
  double t5818;
  double t7524;
  double t7600;
  double t7925;
  double t176;
  double t197;
  double t198;
  double t297;
  double t838;
  double t899;
  double t1618;
  double t1655;
  double t1680;
  double t1721;
  double t8823;
  double t8865;
  double t8880;
  double t8886;
  double t8888;
  double t8897;
  double t2878;
  double t3015;
  double t3846;
  double t3991;
  double t4049;
  double t9352;
  double t9734;
  double t10339;
  double t6657;
  double t6796;
  double t7000;
  double t10442;
  double t10522;
  double t10524;
  double t10560;
  double t10568;
  double t10692;
  double t11383;
  double t11400;
  double t11402;
  double t11416;
  double t11418;
  double t11422;
  double t11430;
  double t11432;
  double t11433;
  double t11493;
  double t11495;
  double t11496;
  double t11502;
  double t11507;
  double t11509;
  double t11519;
  double t11522;
  double t11541;
  double t11587;
  double t11588;
  double t11589;
  double t11591;
  double t11592;
  double t11593;
  double t11598;
  double t11601;
  double t11606;
  double t11618;
  double t11619;
  double t11620;
  double t11623;
  double t11625;
  double t11627;
  double t11651;
  double t11653;
  double t11655;
  double t2598;
  double t11661;
  double t11663;
  double t11689;
  double t11690;
  double t11691;
  double t11746;
  double t11748;
  double t11779;
  double t11781;
  double t11783;
  double t11791;
  double t11793;
  double t11667;
  double t11692;
  double t11693;
  double t11694;
  double t11695;
  double t11697;
  double t11698;
  double t11699;
  double t11700;
  double t11701;
  double t11703;
  double t11711;
  double t11723;
  double t11725;
  double t11729;
  double t11736;
  double t11823;
  double t11824;
  double t11825;
  double t10966;
  double t11798;
  double t11799;
  double t11848;
  double t11849;
  double t11853;
  double t11855;
  double t11860;
  double t11880;
  double t11882;
  double t11884;
  double t11889;
  double t11890;
  double t11892;
  double t10849;
  double t10968;
  double t11839;
  double t11910;
  double t11913;
  double t11915;
  double t11917;
  double t11918;
  double t11925;
  double t11926;
  double t11927;
  double t11865;
  double t11872;
  double t11937;
  double t11938;
  double t11939;
  double t11898;
  double t11905;
  t393 = Sin(var1[3]);
  t1269 = Cos(var1[3]);
  t928 = Cos(var1[5]);
  t930 = Sin(var1[4]);
  t1270 = Sin(var1[5]);
  t686 = Sin(var1[15]);
  t1165 = -1.*t928*t393*t930;
  t1315 = t1269*t1270;
  t1385 = t1165 + t1315;
  t1569 = Cos(var1[15]);
  t1733 = -1.*t1269*t928;
  t1771 = -1.*t393*t930*t1270;
  t1773 = t1733 + t1771;
  t306 = Cos(var1[4]);
  t2840 = Sin(var1[16]);
  t97 = Cos(var1[16]);
  t3362 = t1569*t1385;
  t3573 = -1.*t686*t1773;
  t3628 = t3362 + t3573;
  t3654 = Cos(var1[17]);
  t3680 = -1.*t3654;
  t3694 = 1. + t3680;
  t3956 = Sin(var1[17]);
  t4077 = -1.*t306*t2840*t393;
  t5440 = t97*t3628;
  t5818 = t4077 + t5440;
  t7524 = -1.*t97*t306*t393;
  t7600 = -1.*t2840*t3628;
  t7925 = t7524 + t7600;
  t176 = -1.*t97;
  t197 = 1. + t176;
  t198 = -0.183*t197;
  t297 = 0. + t198;
  t838 = -0.047*t686;
  t899 = 0. + t838;
  t1618 = -1.*t1569;
  t1655 = 1. + t1618;
  t1680 = 0.047*t1655;
  t1721 = 0. + t1680;
  t8823 = t1269*t928*t930;
  t8865 = t393*t1270;
  t8880 = t8823 + t8865;
  t8886 = -1.*t928*t393;
  t8888 = t1269*t930*t1270;
  t8897 = t8886 + t8888;
  t2878 = -0.183*t2840;
  t3015 = 0. + t2878;
  t3846 = -0.15*t3694;
  t3991 = -0.183*t3956;
  t4049 = 0. + t3846 + t3991;
  t9352 = t1569*t8880;
  t9734 = -1.*t686*t8897;
  t10339 = t9352 + t9734;
  t6657 = -0.183*t3694;
  t6796 = 0.15*t3956;
  t7000 = 0. + t6657 + t6796;
  t10442 = t1269*t306*t2840;
  t10522 = t97*t10339;
  t10524 = t10442 + t10522;
  t10560 = t97*t1269*t306;
  t10568 = -1.*t2840*t10339;
  t10692 = t10560 + t10568;
  t11383 = t1569*t1269*t306*t928;
  t11400 = -1.*t1269*t306*t686*t1270;
  t11402 = t11383 + t11400;
  t11416 = -1.*t1269*t2840*t930;
  t11418 = t97*t11402;
  t11422 = t11416 + t11418;
  t11430 = -1.*t97*t1269*t930;
  t11432 = -1.*t2840*t11402;
  t11433 = t11430 + t11432;
  t11493 = t1569*t306*t928*t393;
  t11495 = -1.*t306*t686*t393*t1270;
  t11496 = t11493 + t11495;
  t11502 = -1.*t2840*t393*t930;
  t11507 = t97*t11496;
  t11509 = t11502 + t11507;
  t11519 = -1.*t97*t393*t930;
  t11522 = -1.*t2840*t11496;
  t11541 = t11519 + t11522;
  t11587 = -1.*t1569*t928*t930;
  t11588 = t686*t930*t1270;
  t11589 = t11587 + t11588;
  t11591 = -1.*t306*t2840;
  t11592 = t97*t11589;
  t11593 = t11591 + t11592;
  t11598 = -1.*t97*t306;
  t11601 = -1.*t2840*t11589;
  t11606 = t11598 + t11601;
  t11618 = t928*t393;
  t11619 = -1.*t1269*t930*t1270;
  t11620 = t11618 + t11619;
  t11623 = -1.*t686*t8880;
  t11625 = t1569*t11620;
  t11627 = t11623 + t11625;
  t11651 = t928*t393*t930;
  t11653 = -1.*t1269*t1270;
  t11655 = t11651 + t11653;
  t2598 = t1569*t1773;
  t11661 = -1.*t686*t11655;
  t11663 = t11661 + t2598;
  t11689 = -1.*t306*t928*t686;
  t11690 = -1.*t1569*t306*t1270;
  t11691 = t11689 + t11690;
  t11746 = -1.*t1569*t8897;
  t11748 = t11623 + t11746;
  t11779 = t1269*t928;
  t11781 = t393*t930*t1270;
  t11783 = t11779 + t11781;
  t11791 = -1.*t1569*t11783;
  t11793 = t11661 + t11791;
  t11667 = t1569*t11655;
  t11692 = t3015*t11691;
  t11693 = t97*t4049*t11691;
  t11694 = -1.*t2840*t7000*t11691;
  t11695 = t1569*t306*t928;
  t11697 = -1.*t306*t686*t1270;
  t11698 = t11695 + t11697;
  t11699 = 0.13205*t11698;
  t11700 = -1.*t3654*t2840*t11691;
  t11701 = -1.*t97*t3956*t11691;
  t11703 = t11700 + t11701;
  t11711 = -0.183*t11703;
  t11723 = t97*t3654*t11691;
  t11725 = -1.*t2840*t3956*t11691;
  t11729 = t11723 + t11725;
  t11736 = -0.15*t11729;
  t11823 = -1.*t1269*t306*t2840;
  t11824 = -1.*t97*t10339;
  t11825 = t11823 + t11824;
  t10966 = t3654*t10692;
  t11798 = -1.*t686*t11783;
  t11799 = t11667 + t11798;
  t11848 = -1.*t97*t11799;
  t11849 = t4077 + t11848;
  t11853 = t97*t306*t393;
  t11855 = -1.*t2840*t11799;
  t11860 = t11853 + t11855;
  t11880 = t2840*t930;
  t11882 = -1.*t97*t11698;
  t11884 = t11880 + t11882;
  t11889 = -1.*t97*t930;
  t11890 = -1.*t2840*t11698;
  t11892 = t11889 + t11890;
  t10849 = -1.*t3956*t10524;
  t10968 = t10849 + t10966;
  t11839 = -1.*t3956*t10692;
  t11910 = -0.183*t3654;
  t11913 = -0.15*t3956;
  t11915 = t11910 + t11913;
  t11917 = 0.15*t3654;
  t11918 = t11917 + t3991;
  t11925 = t306*t2840*t393;
  t11926 = t97*t11799;
  t11927 = t11925 + t11926;
  t11865 = t3654*t11860;
  t11872 = -1.*t3956*t11860;
  t11937 = -1.*t2840*t930;
  t11938 = t97*t11698;
  t11939 = t11937 + t11938;
  t11898 = t3654*t11892;
  t11905 = -1.*t3956*t11892;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1721*t1773 + t3015*t3628 - 1.*t297*t306*t393 + t4049*t5818 + 0.13205*(t2598 + t1385*t686) + t7000*t7925 - 0.183*(-1.*t3956*t5818 + t3654*t7925) - 0.15*(t3654*t5818 + t3956*t7925) + t1385*t899;
  p_output1[10]=-0.183*t10968 + t10339*t3015 + t1269*t297*t306 - 0.15*(t10524*t3654 + t10692*t3956) + t10524*t4049 + t10692*t7000 + t1721*t8897 + 0.13205*(t686*t8880 + t1569*t8897) + t8880*t899;
  p_output1[11]=0;
  p_output1[12]=t11402*t3015 + t1269*t1270*t1721*t306 - 0.183*(t11433*t3654 - 1.*t11422*t3956) - 0.15*(t11422*t3654 + t11433*t3956) + t11422*t4049 + t11433*t7000 + t1269*t306*t899*t928 + 0.13205*(t1269*t1270*t1569*t306 + t1269*t306*t686*t928) - 1.*t1269*t297*t930;
  p_output1[13]=t11496*t3015 + t1270*t1721*t306*t393 - 0.183*(t11541*t3654 - 1.*t11509*t3956) - 0.15*(t11509*t3654 + t11541*t3956) + t11509*t4049 + t11541*t7000 + t306*t393*t899*t928 + 0.13205*(t1270*t1569*t306*t393 + t306*t393*t686*t928) - 1.*t297*t393*t930;
  p_output1[14]=t11589*t3015 - 1.*t297*t306 - 0.183*(t11606*t3654 - 1.*t11593*t3956) - 0.15*(t11593*t3654 + t11606*t3956) + t11593*t4049 + t11606*t7000 - 1.*t1270*t1721*t930 - 1.*t899*t928*t930 + 0.13205*(-1.*t1270*t1569*t930 - 1.*t686*t928*t930);
  p_output1[15]=t11627*t3015 - 1.*t11627*t2840*t7000 + t1721*t8880 + t11620*t899 + 0.13205*(t11620*t686 + t9352) + t11627*t4049*t97 - 0.15*(-1.*t11627*t2840*t3956 + t11627*t3654*t97) - 0.183*(-1.*t11627*t2840*t3654 - 1.*t11627*t3956*t97);
  p_output1[16]=t11655*t1721 + t11663*t3015 + 0.13205*(t11667 + t1773*t686) - 1.*t11663*t2840*t7000 + t1773*t899 + t11663*t4049*t97 - 0.15*(-1.*t11663*t2840*t3956 + t11663*t3654*t97) - 0.183*(-1.*t11663*t2840*t3654 - 1.*t11663*t3956*t97);
  p_output1[17]=t11692 + t11693 + t11694 + t11699 + t11711 + t11736 - 1.*t1270*t306*t899 + t1721*t306*t928;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0.13205*t10339 + t11748*t3015 - 1.*t11748*t2840*t7000 - 0.047*t1569*t8880 + 0.047*t686*t8897 + t11748*t4049*t97 - 0.15*(-1.*t11748*t2840*t3956 + t11748*t3654*t97) - 0.183*(-1.*t11748*t2840*t3654 - 1.*t11748*t3956*t97);
  p_output1[46]=0.13205*t11799 - 0.047*t11655*t1569 + t11793*t3015 + 0.047*t11783*t686 - 1.*t11793*t2840*t7000 + t11793*t4049*t97 - 0.15*(-1.*t11793*t2840*t3956 + t11793*t3654*t97) - 0.183*(-1.*t11793*t2840*t3654 - 1.*t11793*t3956*t97);
  p_output1[47]=t11692 + t11693 + t11694 + t11699 + t11711 + t11736 + 0.047*t1270*t306*t686 - 0.047*t1569*t306*t928;
  p_output1[48]=-0.183*t1269*t2840*t306 - 0.183*(t11839 + t11825*t3654) - 0.15*(t10966 + t11825*t3956) + t10692*t4049 + t11825*t7000 - 0.183*t10339*t97;
  p_output1[49]=-0.183*(t11872 + t11849*t3654) - 0.183*t2840*t306*t393 - 0.15*(t11865 + t11849*t3956) + t11860*t4049 + t11849*t7000 - 0.183*t11799*t97;
  p_output1[50]=-0.183*(t11905 + t11884*t3654) - 0.15*(t11898 + t11884*t3956) + t11892*t4049 + t11884*t7000 + 0.183*t2840*t930 - 0.183*t11698*t97;
  p_output1[51]=-0.15*t10968 + t10524*t11915 + t10692*t11918 - 0.183*(t11839 - 1.*t10524*t3654);
  p_output1[52]=t11860*t11918 + t11915*t11927 - 0.183*(t11872 - 1.*t11927*t3654) - 0.15*(t11865 - 1.*t11927*t3956);
  p_output1[53]=t11892*t11918 + t11915*t11939 - 0.183*(t11905 - 1.*t11939*t3654) - 0.15*(t11898 - 1.*t11939*t3956);
}



void Jp_RL_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
