/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:20:51 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RRfoot_src.h"

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
  double t645;
  double t1160;
  double t915;
  double t924;
  double t1269;
  double t709;
  double t1071;
  double t1272;
  double t1345;
  double t1447;
  double t2336;
  double t2423;
  double t2706;
  double t277;
  double t3059;
  double t46;
  double t3279;
  double t3288;
  double t3656;
  double t3877;
  double t3999;
  double t4119;
  double t4174;
  double t4329;
  double t4367;
  double t4448;
  double t4723;
  double t4819;
  double t4833;
  double t83;
  double t134;
  double t240;
  double t255;
  double t875;
  double t878;
  double t1556;
  double t1938;
  double t2024;
  double t2025;
  double t6470;
  double t6498;
  double t6532;
  double t6608;
  double t6621;
  double t6715;
  double t3128;
  double t3227;
  double t4169;
  double t4265;
  double t4291;
  double t6876;
  double t6996;
  double t7028;
  double t4468;
  double t4526;
  double t4698;
  double t7205;
  double t7226;
  double t7235;
  double t7271;
  double t7275;
  double t7291;
  double t7474;
  double t7498;
  double t7537;
  double t7570;
  double t7587;
  double t7588;
  double t7691;
  double t7702;
  double t7707;
  double t7976;
  double t7989;
  double t8007;
  double t8040;
  double t8060;
  double t8075;
  double t8148;
  double t8197;
  double t8226;
  double t8525;
  double t8528;
  double t8534;
  double t8561;
  double t8564;
  double t8568;
  double t8604;
  double t8632;
  double t8648;
  double t8865;
  double t8868;
  double t8889;
  double t8893;
  double t8894;
  double t8896;
  double t9112;
  double t9115;
  double t9123;
  double t3028;
  double t9142;
  double t9149;
  double t9327;
  double t9330;
  double t9357;
  double t9492;
  double t9495;
  double t9606;
  double t9621;
  double t9628;
  double t9642;
  double t9644;
  double t9178;
  double t9358;
  double t9364;
  double t9366;
  double t9376;
  double t9397;
  double t9421;
  double t9425;
  double t9431;
  double t9433;
  double t9435;
  double t9437;
  double t9441;
  double t9442;
  double t9472;
  double t9482;
  double t9700;
  double t9702;
  double t9703;
  double t7331;
  double t9659;
  double t9661;
  double t9726;
  double t9727;
  double t9732;
  double t9733;
  double t9735;
  double t9763;
  double t9766;
  double t9767;
  double t9772;
  double t9774;
  double t9778;
  double t7326;
  double t7364;
  double t9716;
  double t9798;
  double t9799;
  double t9800;
  double t9803;
  double t9804;
  double t9817;
  double t9818;
  double t9820;
  double t9743;
  double t9750;
  double t9838;
  double t9840;
  double t9841;
  double t9785;
  double t9791;
  t645 = Sin(var1[3]);
  t1160 = Cos(var1[3]);
  t915 = Cos(var1[5]);
  t924 = Sin(var1[4]);
  t1269 = Sin(var1[5]);
  t709 = Sin(var1[12]);
  t1071 = -1.*t915*t645*t924;
  t1272 = t1160*t1269;
  t1345 = t1071 + t1272;
  t1447 = Cos(var1[12]);
  t2336 = -1.*t1160*t915;
  t2423 = -1.*t645*t924*t1269;
  t2706 = t2336 + t2423;
  t277 = Cos(var1[4]);
  t3059 = Sin(var1[13]);
  t46 = Cos(var1[13]);
  t3279 = t1447*t1345;
  t3288 = -1.*t709*t2706;
  t3656 = t3279 + t3288;
  t3877 = Cos(var1[14]);
  t3999 = -1.*t3877;
  t4119 = 1. + t3999;
  t4174 = Sin(var1[14]);
  t4329 = -1.*t277*t3059*t645;
  t4367 = t46*t3656;
  t4448 = t4329 + t4367;
  t4723 = -1.*t46*t277*t645;
  t4819 = -1.*t3059*t3656;
  t4833 = t4723 + t4819;
  t83 = -1.*t46;
  t134 = 1. + t83;
  t240 = -0.183*t134;
  t255 = 0. + t240;
  t875 = 0.047*t709;
  t878 = 0. + t875;
  t1556 = -1.*t1447;
  t1938 = 1. + t1556;
  t2024 = -0.047*t1938;
  t2025 = 0. + t2024;
  t6470 = t1160*t915*t924;
  t6498 = t645*t1269;
  t6532 = t6470 + t6498;
  t6608 = -1.*t915*t645;
  t6621 = t1160*t924*t1269;
  t6715 = t6608 + t6621;
  t3128 = -0.183*t3059;
  t3227 = 0. + t3128;
  t4169 = -0.25*t4119;
  t4265 = -0.183*t4174;
  t4291 = 0. + t4169 + t4265;
  t6876 = t1447*t6532;
  t6996 = -1.*t709*t6715;
  t7028 = t6876 + t6996;
  t4468 = -0.183*t4119;
  t4526 = 0.25*t4174;
  t4698 = 0. + t4468 + t4526;
  t7205 = t1160*t277*t3059;
  t7226 = t46*t7028;
  t7235 = t7205 + t7226;
  t7271 = t46*t1160*t277;
  t7275 = -1.*t3059*t7028;
  t7291 = t7271 + t7275;
  t7474 = t1447*t1160*t277*t915;
  t7498 = -1.*t1160*t277*t709*t1269;
  t7537 = t7474 + t7498;
  t7570 = -1.*t1160*t3059*t924;
  t7587 = t46*t7537;
  t7588 = t7570 + t7587;
  t7691 = -1.*t46*t1160*t924;
  t7702 = -1.*t3059*t7537;
  t7707 = t7691 + t7702;
  t7976 = t1447*t277*t915*t645;
  t7989 = -1.*t277*t709*t645*t1269;
  t8007 = t7976 + t7989;
  t8040 = -1.*t3059*t645*t924;
  t8060 = t46*t8007;
  t8075 = t8040 + t8060;
  t8148 = -1.*t46*t645*t924;
  t8197 = -1.*t3059*t8007;
  t8226 = t8148 + t8197;
  t8525 = -1.*t1447*t915*t924;
  t8528 = t709*t924*t1269;
  t8534 = t8525 + t8528;
  t8561 = -1.*t277*t3059;
  t8564 = t46*t8534;
  t8568 = t8561 + t8564;
  t8604 = -1.*t46*t277;
  t8632 = -1.*t3059*t8534;
  t8648 = t8604 + t8632;
  t8865 = t915*t645;
  t8868 = -1.*t1160*t924*t1269;
  t8889 = t8865 + t8868;
  t8893 = -1.*t709*t6532;
  t8894 = t1447*t8889;
  t8896 = t8893 + t8894;
  t9112 = t915*t645*t924;
  t9115 = -1.*t1160*t1269;
  t9123 = t9112 + t9115;
  t3028 = t1447*t2706;
  t9142 = -1.*t709*t9123;
  t9149 = t9142 + t3028;
  t9327 = -1.*t277*t915*t709;
  t9330 = -1.*t1447*t277*t1269;
  t9357 = t9327 + t9330;
  t9492 = -1.*t1447*t6715;
  t9495 = t8893 + t9492;
  t9606 = t1160*t915;
  t9621 = t645*t924*t1269;
  t9628 = t9606 + t9621;
  t9642 = -1.*t1447*t9628;
  t9644 = t9142 + t9642;
  t9178 = t1447*t9123;
  t9358 = t3227*t9357;
  t9364 = t46*t4291*t9357;
  t9366 = -1.*t3059*t4698*t9357;
  t9376 = t1447*t277*t915;
  t9397 = -1.*t277*t709*t1269;
  t9421 = t9376 + t9397;
  t9425 = -0.15331*t9421;
  t9431 = -1.*t3877*t3059*t9357;
  t9433 = -1.*t46*t4174*t9357;
  t9435 = t9431 + t9433;
  t9437 = -0.183*t9435;
  t9441 = t46*t3877*t9357;
  t9442 = -1.*t3059*t4174*t9357;
  t9472 = t9441 + t9442;
  t9482 = -0.5*t9472;
  t9700 = -1.*t1160*t277*t3059;
  t9702 = -1.*t46*t7028;
  t9703 = t9700 + t9702;
  t7331 = t3877*t7291;
  t9659 = -1.*t709*t9628;
  t9661 = t9178 + t9659;
  t9726 = -1.*t46*t9661;
  t9727 = t4329 + t9726;
  t9732 = t46*t277*t645;
  t9733 = -1.*t3059*t9661;
  t9735 = t9732 + t9733;
  t9763 = t3059*t924;
  t9766 = -1.*t46*t9421;
  t9767 = t9763 + t9766;
  t9772 = -1.*t46*t924;
  t9774 = -1.*t3059*t9421;
  t9778 = t9772 + t9774;
  t7326 = -1.*t4174*t7235;
  t7364 = t7326 + t7331;
  t9716 = -1.*t4174*t7291;
  t9798 = -0.183*t3877;
  t9799 = -0.25*t4174;
  t9800 = t9798 + t9799;
  t9803 = 0.25*t3877;
  t9804 = t9803 + t4265;
  t9817 = t277*t3059*t645;
  t9818 = t46*t9661;
  t9820 = t9817 + t9818;
  t9743 = t3877*t9735;
  t9750 = -1.*t4174*t9735;
  t9838 = -1.*t3059*t924;
  t9840 = t46*t9421;
  t9841 = t9838 + t9840;
  t9785 = t3877*t9778;
  t9791 = -1.*t4174*t9778;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t2025*t2706 + t3227*t3656 + t4291*t4448 + t4698*t4833 - 0.183*(-1.*t4174*t4448 + t3877*t4833) - 0.5*(t3877*t4448 + t4174*t4833) - 1.*t255*t277*t645 - 0.15331*(t3028 + t1345*t709) + t1345*t878;
  p_output1[10]=t1160*t255*t277 + t2025*t6715 + t3227*t7028 - 0.15331*(t1447*t6715 + t6532*t709) + t4291*t7235 + t4698*t7291 - 0.5*(t3877*t7235 + t4174*t7291) - 0.183*t7364 + t6532*t878;
  p_output1[11]=0;
  p_output1[12]=t1160*t1269*t2025*t277 + t3227*t7537 + t4291*t7588 + t4698*t7707 - 0.183*(-1.*t4174*t7588 + t3877*t7707) - 0.5*(t3877*t7588 + t4174*t7707) + t1160*t277*t878*t915 - 0.15331*(t1160*t1269*t1447*t277 + t1160*t277*t709*t915) - 1.*t1160*t255*t924;
  p_output1[13]=t1269*t2025*t277*t645 + t3227*t8007 + t4291*t8075 + t4698*t8226 - 0.183*(-1.*t4174*t8075 + t3877*t8226) - 0.5*(t3877*t8075 + t4174*t8226) + t277*t645*t878*t915 - 0.15331*(t1269*t1447*t277*t645 + t277*t645*t709*t915) - 1.*t255*t645*t924;
  p_output1[14]=-1.*t255*t277 + t3227*t8534 + t4291*t8568 + t4698*t8648 - 0.183*(-1.*t4174*t8568 + t3877*t8648) - 0.5*(t3877*t8568 + t4174*t8648) - 1.*t1269*t2025*t924 - 1.*t878*t915*t924 - 0.15331*(-1.*t1269*t1447*t924 - 1.*t709*t915*t924);
  p_output1[15]=t2025*t6532 + t878*t8889 - 0.15331*(t6876 + t709*t8889) + t3227*t8896 + t4291*t46*t8896 - 1.*t3059*t4698*t8896 - 0.5*(-1.*t3059*t4174*t8896 + t3877*t46*t8896) - 0.183*(-1.*t3059*t3877*t8896 - 1.*t4174*t46*t8896);
  p_output1[16]=t2706*t878 + t2025*t9123 + t3227*t9149 + t4291*t46*t9149 - 1.*t3059*t4698*t9149 - 0.5*(-1.*t3059*t4174*t9149 + t3877*t46*t9149) - 0.183*(-1.*t3059*t3877*t9149 - 1.*t4174*t46*t9149) - 0.15331*(t2706*t709 + t9178);
  p_output1[17]=-1.*t1269*t277*t878 + t2025*t277*t915 + t9358 + t9364 + t9366 + t9425 + t9437 + t9482;
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
  p_output1[36]=0.047*t1447*t6532 - 0.15331*t7028 - 0.047*t6715*t709 + t3227*t9495 + t4291*t46*t9495 - 1.*t3059*t4698*t9495 - 0.5*(-1.*t3059*t4174*t9495 + t3877*t46*t9495) - 0.183*(-1.*t3059*t3877*t9495 - 1.*t4174*t46*t9495);
  p_output1[37]=0.047*t1447*t9123 - 0.047*t709*t9628 + t3227*t9644 + t4291*t46*t9644 - 1.*t3059*t4698*t9644 - 0.5*(-1.*t3059*t4174*t9644 + t3877*t46*t9644) - 0.183*(-1.*t3059*t3877*t9644 - 1.*t4174*t46*t9644) - 0.15331*t9661;
  p_output1[38]=-0.047*t1269*t277*t709 + 0.047*t1447*t277*t915 + t9358 + t9364 + t9366 + t9425 + t9437 + t9482;
  p_output1[39]=-0.183*t1160*t277*t3059 - 0.183*t46*t7028 + t4291*t7291 + t4698*t9703 - 0.5*(t7331 + t4174*t9703) - 0.183*(t3877*t9703 + t9716);
  p_output1[40]=-0.183*t277*t3059*t645 - 0.183*t46*t9661 + t4698*t9727 + t4291*t9735 - 0.5*(t4174*t9727 + t9743) - 0.183*(t3877*t9727 + t9750);
  p_output1[41]=0.183*t3059*t924 - 0.183*t46*t9421 + t4698*t9767 + t4291*t9778 - 0.5*(t4174*t9767 + t9785) - 0.183*(t3877*t9767 + t9791);
  p_output1[42]=-0.5*t7364 - 0.183*(-1.*t3877*t7235 + t9716) + t7235*t9800 + t7291*t9804;
  p_output1[43]=t9735*t9804 + t9800*t9820 - 0.183*(t9750 - 1.*t3877*t9820) - 0.5*(t9743 - 1.*t4174*t9820);
  p_output1[44]=t9778*t9804 + t9800*t9841 - 0.183*(t9791 - 1.*t3877*t9841) - 0.5*(t9785 - 1.*t4174*t9841);
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



void Jp_RRfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
