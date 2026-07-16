/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:50:44 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_FL_calf_joint_src.h"

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
  double t417;
  double t822;
  double t631;
  double t681;
  double t915;
  double t504;
  double t762;
  double t924;
  double t964;
  double t1066;
  double t1246;
  double t1249;
  double t1266;
  double t348;
  double t1523;
  double t167;
  double t1752;
  double t1753;
  double t1757;
  double t1761;
  double t1765;
  double t1794;
  double t1804;
  double t1867;
  double t1875;
  double t2058;
  double t3389;
  double t3877;
  double t3897;
  double t255;
  double t283;
  double t290;
  double t321;
  double t549;
  double t564;
  double t1109;
  double t1166;
  double t1194;
  double t1212;
  double t6626;
  double t6627;
  double t6635;
  double t7150;
  double t7360;
  double t7652;
  double t1715;
  double t1716;
  double t1796;
  double t1823;
  double t1824;
  double t10119;
  double t10128;
  double t10130;
  double t2554;
  double t2650;
  double t3263;
  double t10135;
  double t10171;
  double t10177;
  double t10189;
  double t10192;
  double t10195;
  double t10252;
  double t10253;
  double t10257;
  double t10259;
  double t10260;
  double t10271;
  double t10277;
  double t10281;
  double t10282;
  double t10312;
  double t10316;
  double t10318;
  double t10326;
  double t10327;
  double t10328;
  double t10332;
  double t10333;
  double t10334;
  double t10367;
  double t10368;
  double t10369;
  double t10373;
  double t10374;
  double t10375;
  double t10377;
  double t10379;
  double t10380;
  double t10411;
  double t10412;
  double t10413;
  double t10415;
  double t10416;
  double t10417;
  double t10450;
  double t10452;
  double t10453;
  double t1452;
  double t10457;
  double t10460;
  double t10490;
  double t10504;
  double t10513;
  double t10552;
  double t10553;
  double t10585;
  double t10586;
  double t10587;
  double t10591;
  double t10592;
  double t10472;
  double t10516;
  double t10518;
  double t10520;
  double t10521;
  double t10526;
  double t10528;
  double t10533;
  double t10537;
  double t10538;
  double t10539;
  double t10543;
  double t10544;
  double t10545;
  double t10546;
  double t10547;
  double t10638;
  double t10639;
  double t10642;
  double t10210;
  double t10599;
  double t10601;
  double t10672;
  double t10675;
  double t10677;
  double t10679;
  double t10680;
  double t10701;
  double t10703;
  double t10704;
  double t10706;
  double t10707;
  double t10708;
  double t10199;
  double t10213;
  double t10655;
  double t10725;
  double t10726;
  double t10727;
  double t10729;
  double t10732;
  double t10743;
  double t10744;
  double t10745;
  double t10683;
  double t10688;
  double t10767;
  double t10769;
  double t10771;
  double t10712;
  double t10721;
  t417 = Sin(var1[3]);
  t822 = Cos(var1[3]);
  t631 = Cos(var1[5]);
  t681 = Sin(var1[4]);
  t915 = Sin(var1[5]);
  t504 = Sin(var1[9]);
  t762 = -1.*t631*t417*t681;
  t924 = t822*t915;
  t964 = t762 + t924;
  t1066 = Cos(var1[9]);
  t1246 = -1.*t822*t631;
  t1249 = -1.*t417*t681*t915;
  t1266 = t1246 + t1249;
  t348 = Cos(var1[4]);
  t1523 = Sin(var1[10]);
  t167 = Cos(var1[10]);
  t1752 = t1066*t964;
  t1753 = -1.*t504*t1266;
  t1757 = t1752 + t1753;
  t1761 = Cos(var1[11]);
  t1765 = -1.*t1761;
  t1794 = 1. + t1765;
  t1804 = Sin(var1[11]);
  t1867 = -1.*t348*t1523*t417;
  t1875 = t167*t1757;
  t2058 = t1867 + t1875;
  t3389 = -1.*t167*t348*t417;
  t3877 = -1.*t1523*t1757;
  t3897 = t3389 + t3877;
  t255 = -1.*t167;
  t283 = 1. + t255;
  t290 = 0.183*t283;
  t321 = 0. + t290;
  t549 = -0.047*t504;
  t564 = 0. + t549;
  t1109 = -1.*t1066;
  t1166 = 1. + t1109;
  t1194 = 0.047*t1166;
  t1212 = 0. + t1194;
  t6626 = t822*t631*t681;
  t6627 = t417*t915;
  t6635 = t6626 + t6627;
  t7150 = -1.*t631*t417;
  t7360 = t822*t681*t915;
  t7652 = t7150 + t7360;
  t1715 = 0.183*t1523;
  t1716 = 0. + t1715;
  t1796 = -0.15*t1794;
  t1823 = 0.183*t1804;
  t1824 = 0. + t1796 + t1823;
  t10119 = t1066*t6635;
  t10128 = -1.*t504*t7652;
  t10130 = t10119 + t10128;
  t2554 = 0.183*t1794;
  t2650 = 0.15*t1804;
  t3263 = 0. + t2554 + t2650;
  t10135 = t822*t348*t1523;
  t10171 = t167*t10130;
  t10177 = t10135 + t10171;
  t10189 = t167*t822*t348;
  t10192 = -1.*t1523*t10130;
  t10195 = t10189 + t10192;
  t10252 = t1066*t822*t348*t631;
  t10253 = -1.*t822*t348*t504*t915;
  t10257 = t10252 + t10253;
  t10259 = -1.*t822*t1523*t681;
  t10260 = t167*t10257;
  t10271 = t10259 + t10260;
  t10277 = -1.*t167*t822*t681;
  t10281 = -1.*t1523*t10257;
  t10282 = t10277 + t10281;
  t10312 = t1066*t348*t631*t417;
  t10316 = -1.*t348*t504*t417*t915;
  t10318 = t10312 + t10316;
  t10326 = -1.*t1523*t417*t681;
  t10327 = t167*t10318;
  t10328 = t10326 + t10327;
  t10332 = -1.*t167*t417*t681;
  t10333 = -1.*t1523*t10318;
  t10334 = t10332 + t10333;
  t10367 = -1.*t1066*t631*t681;
  t10368 = t504*t681*t915;
  t10369 = t10367 + t10368;
  t10373 = -1.*t348*t1523;
  t10374 = t167*t10369;
  t10375 = t10373 + t10374;
  t10377 = -1.*t167*t348;
  t10379 = -1.*t1523*t10369;
  t10380 = t10377 + t10379;
  t10411 = t631*t417;
  t10412 = -1.*t822*t681*t915;
  t10413 = t10411 + t10412;
  t10415 = -1.*t504*t6635;
  t10416 = t1066*t10413;
  t10417 = t10415 + t10416;
  t10450 = t631*t417*t681;
  t10452 = -1.*t822*t915;
  t10453 = t10450 + t10452;
  t1452 = t1066*t1266;
  t10457 = -1.*t504*t10453;
  t10460 = t10457 + t1452;
  t10490 = -1.*t348*t631*t504;
  t10504 = -1.*t1066*t348*t915;
  t10513 = t10490 + t10504;
  t10552 = -1.*t1066*t7652;
  t10553 = t10415 + t10552;
  t10585 = t822*t631;
  t10586 = t417*t681*t915;
  t10587 = t10585 + t10586;
  t10591 = -1.*t1066*t10587;
  t10592 = t10457 + t10591;
  t10472 = t1066*t10453;
  t10516 = t1716*t10513;
  t10518 = -1.*t1523*t3263*t10513;
  t10520 = t167*t1824*t10513;
  t10521 = t1066*t348*t631;
  t10526 = -1.*t348*t504*t915;
  t10528 = t10521 + t10526;
  t10533 = 0.13205*t10528;
  t10537 = -1.*t1761*t1523*t10513;
  t10538 = -1.*t167*t1804*t10513;
  t10539 = t10537 + t10538;
  t10543 = 0.183*t10539;
  t10544 = t167*t1761*t10513;
  t10545 = -1.*t1523*t1804*t10513;
  t10546 = t10544 + t10545;
  t10547 = -0.15*t10546;
  t10638 = -1.*t822*t348*t1523;
  t10639 = -1.*t167*t10130;
  t10642 = t10638 + t10639;
  t10210 = t1761*t10195;
  t10599 = -1.*t504*t10587;
  t10601 = t10472 + t10599;
  t10672 = -1.*t167*t10601;
  t10675 = t1867 + t10672;
  t10677 = t167*t348*t417;
  t10679 = -1.*t1523*t10601;
  t10680 = t10677 + t10679;
  t10701 = t1523*t681;
  t10703 = -1.*t167*t10528;
  t10704 = t10701 + t10703;
  t10706 = -1.*t167*t681;
  t10707 = -1.*t1523*t10528;
  t10708 = t10706 + t10707;
  t10199 = -1.*t1804*t10177;
  t10213 = t10199 + t10210;
  t10655 = -1.*t1804*t10195;
  t10725 = 0.183*t1761;
  t10726 = -0.15*t1804;
  t10727 = t10725 + t10726;
  t10729 = 0.15*t1761;
  t10732 = t10729 + t1823;
  t10743 = t348*t1523*t417;
  t10744 = t167*t10601;
  t10745 = t10743 + t10744;
  t10683 = t1761*t10680;
  t10688 = -1.*t1804*t10680;
  t10767 = -1.*t1523*t681;
  t10769 = t167*t10528;
  t10771 = t10767 + t10769;
  t10712 = t1761*t10708;
  t10721 = -1.*t1804*t10708;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1212*t1266 + t1716*t1757 + t1824*t2058 + t3263*t3897 + 0.183*(-1.*t1804*t2058 + t1761*t3897) - 0.15*(t1761*t2058 + t1804*t3897) - 1.*t321*t348*t417 + t564*t964 + 0.13205*(t1452 + t504*t964);
  p_output1[10]=0.183*t10213 + t10130*t1716 - 0.15*(t10177*t1761 + t10195*t1804) + t10177*t1824 + t10195*t3263 + t564*t6635 + t1212*t7652 + 0.13205*(t504*t6635 + t1066*t7652) + t321*t348*t822;
  p_output1[11]=0;
  p_output1[12]=t10257*t1716 + 0.183*(t10282*t1761 - 1.*t10271*t1804) - 0.15*(t10271*t1761 + t10282*t1804) + t10271*t1824 + t10282*t3263 + t348*t564*t631*t822 - 1.*t321*t681*t822 + t1212*t348*t822*t915 + 0.13205*(t348*t504*t631*t822 + t1066*t348*t822*t915);
  p_output1[13]=t10318*t1716 + 0.183*(t10334*t1761 - 1.*t10328*t1804) - 0.15*(t10328*t1761 + t10334*t1804) + t10328*t1824 + t10334*t3263 + t348*t417*t564*t631 - 1.*t321*t417*t681 + t1212*t348*t417*t915 + 0.13205*(t348*t417*t504*t631 + t1066*t348*t417*t915);
  p_output1[14]=t10369*t1716 + 0.183*(t10380*t1761 - 1.*t10375*t1804) - 0.15*(t10375*t1761 + t10380*t1804) + t10375*t1824 + t10380*t3263 - 1.*t321*t348 - 1.*t564*t631*t681 - 1.*t1212*t681*t915 + 0.13205*(-1.*t504*t631*t681 - 1.*t1066*t681*t915);
  p_output1[15]=t10417*t1716 - 0.15*(t10417*t167*t1761 - 1.*t10417*t1523*t1804) + 0.183*(-1.*t10417*t1523*t1761 - 1.*t10417*t167*t1804) + t10417*t167*t1824 - 1.*t10417*t1523*t3263 + 0.13205*(t10119 + t10413*t504) + t10413*t564 + t1212*t6635;
  p_output1[16]=t10453*t1212 + t10460*t1716 - 0.15*(t10460*t167*t1761 - 1.*t10460*t1523*t1804) + 0.183*(-1.*t10460*t1523*t1761 - 1.*t10460*t167*t1804) + t10460*t167*t1824 - 1.*t10460*t1523*t3263 + 0.13205*(t10472 + t1266*t504) + t1266*t564;
  p_output1[17]=t10516 + t10518 + t10520 + t10533 + t10543 + t10547 + t1212*t348*t631 - 1.*t348*t564*t915;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0.13205*t10130 + t10553*t1716 - 0.15*(t10553*t167*t1761 - 1.*t10553*t1523*t1804) + 0.183*(-1.*t10553*t1523*t1761 - 1.*t10553*t167*t1804) + t10553*t167*t1824 - 1.*t10553*t1523*t3263 - 0.047*t1066*t6635 + 0.047*t504*t7652;
  p_output1[28]=0.13205*t10601 - 0.047*t10453*t1066 + t10592*t1716 - 0.15*(t10592*t167*t1761 - 1.*t10592*t1523*t1804) + 0.183*(-1.*t10592*t1523*t1761 - 1.*t10592*t167*t1804) + t10592*t167*t1824 - 1.*t10592*t1523*t3263 + 0.047*t10587*t504;
  p_output1[29]=t10516 + t10518 + t10520 + t10533 + t10543 + t10547 - 0.047*t1066*t348*t631 + 0.047*t348*t504*t915;
  p_output1[30]=0.183*t10130*t167 + 0.183*(t10655 + t10642*t1761) - 0.15*(t10210 + t10642*t1804) + t10195*t1824 + t10642*t3263 + 0.183*t1523*t348*t822;
  p_output1[31]=0.183*t10601*t167 + 0.183*(t10688 + t10675*t1761) - 0.15*(t10683 + t10675*t1804) + t10680*t1824 + t10675*t3263 + 0.183*t1523*t348*t417;
  p_output1[32]=0.183*t10528*t167 + 0.183*(t10721 + t10704*t1761) - 0.15*(t10712 + t10704*t1804) + t10708*t1824 + t10704*t3263 - 0.183*t1523*t681;
  p_output1[33]=-0.15*t10213 + t10177*t10727 + t10195*t10732 + 0.183*(t10655 - 1.*t10177*t1761);
  p_output1[34]=t10680*t10732 + t10727*t10745 + 0.183*(t10688 - 1.*t10745*t1761) - 0.15*(t10683 - 1.*t10745*t1804);
  p_output1[35]=t10708*t10732 + t10727*t10771 + 0.183*(t10721 - 1.*t10771*t1761) - 0.15*(t10712 - 1.*t10771*t1804);
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
}



void Jp_FL_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
