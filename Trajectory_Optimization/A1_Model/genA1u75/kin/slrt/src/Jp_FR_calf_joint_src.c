/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:17:50 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_FR_calf_joint_src.h"

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
  double t70;
  double t1937;
  double t1978;
  double t1883;
  double t1999;
  double t693;
  double t1974;
  double t2173;
  double t2351;
  double t2561;
  double t2731;
  double t2780;
  double t2785;
  double t45;
  double t47;
  double t3111;
  double t3121;
  double t3131;
  double t3160;
  double t3695;
  double t3700;
  double t3763;
  double t3796;
  double t3471;
  double t3528;
  double t3558;
  double t4030;
  double t4127;
  double t4333;
  double t51;
  double t54;
  double t56;
  double t58;
  double t1050;
  double t1122;
  double t1172;
  double t1459;
  double t2883;
  double t2903;
  double t5335;
  double t5375;
  double t5408;
  double t5491;
  double t5552;
  double t5553;
  double t3168;
  double t3211;
  double t5742;
  double t5746;
  double t5789;
  double t3773;
  double t3807;
  double t3938;
  double t4623;
  double t4746;
  double t4768;
  double t5965;
  double t6306;
  double t6308;
  double t6600;
  double t6697;
  double t6714;
  double t7320;
  double t7338;
  double t7342;
  double t7372;
  double t7379;
  double t7401;
  double t7441;
  double t7452;
  double t7454;
  double t7860;
  double t7893;
  double t7933;
  double t7970;
  double t8018;
  double t8039;
  double t8096;
  double t8101;
  double t8229;
  double t8716;
  double t8729;
  double t8773;
  double t8893;
  double t8903;
  double t8904;
  double t8912;
  double t8928;
  double t8948;
  double t9383;
  double t9410;
  double t9426;
  double t9560;
  double t9571;
  double t9572;
  double t9719;
  double t9723;
  double t9724;
  double t2940;
  double t9739;
  double t9741;
  double t9818;
  double t9819;
  double t9820;
  double t9848;
  double t9853;
  double t9733;
  double t9879;
  double t9881;
  double t9882;
  double t9899;
  double t9901;
  double t9804;
  double t9805;
  double t9811;
  double t9813;
  double t9821;
  double t9822;
  double t9823;
  double t9830;
  double t9831;
  double t9835;
  double t9836;
  double t9837;
  double t9839;
  double t9840;
  double t9842;
  double t6732;
  double t9925;
  double t9926;
  double t9927;
  double t9884;
  double t9885;
  double t9948;
  double t9949;
  double t9950;
  double t9945;
  double t9946;
  double t9973;
  double t9975;
  double t9976;
  double t9966;
  double t9968;
  double t9969;
  double t6789;
  double t6810;
  double t9939;
  double t9992;
  double t9994;
  double t9995;
  double t9997;
  double t9999;
  double t9954;
  double t10006;
  double t10007;
  double t10008;
  double t9959;
  double t9978;
  double t10019;
  double t10020;
  double t10021;
  double t9984;
  t70 = Sin(var1[3]);
  t1937 = Cos(var1[5]);
  t1978 = Sin(var1[4]);
  t1883 = Cos(var1[3]);
  t1999 = Sin(var1[5]);
  t693 = Cos(var1[6]);
  t1974 = -1.*t1883*t1937;
  t2173 = -1.*t70*t1978*t1999;
  t2351 = t1974 + t2173;
  t2561 = -1.*t1937*t70*t1978;
  t2731 = t1883*t1999;
  t2780 = t2561 + t2731;
  t2785 = Sin(var1[6]);
  t45 = Cos(var1[4]);
  t47 = Cos(var1[7]);
  t3111 = t693*t2780;
  t3121 = -1.*t2351*t2785;
  t3131 = t3111 + t3121;
  t3160 = Sin(var1[7]);
  t3695 = Cos(var1[8]);
  t3700 = -1.*t3695;
  t3763 = 1. + t3700;
  t3796 = Sin(var1[8]);
  t3471 = -1.*t45*t47*t70;
  t3528 = -1.*t3131*t3160;
  t3558 = t3471 + t3528;
  t4030 = t47*t3131;
  t4127 = -1.*t45*t70*t3160;
  t4333 = t4030 + t4127;
  t51 = -1.*t47;
  t54 = 1. + t51;
  t56 = 0.183*t54;
  t58 = 0. + t56;
  t1050 = -1.*t693;
  t1122 = 1. + t1050;
  t1172 = -0.047*t1122;
  t1459 = 0. + t1172;
  t2883 = 0.047*t2785;
  t2903 = 0. + t2883;
  t5335 = -1.*t1937*t70;
  t5375 = t1883*t1978*t1999;
  t5408 = t5335 + t5375;
  t5491 = t1883*t1937*t1978;
  t5552 = t70*t1999;
  t5553 = t5491 + t5552;
  t3168 = 0.183*t3160;
  t3211 = 0. + t3168;
  t5742 = t693*t5553;
  t5746 = -1.*t5408*t2785;
  t5789 = t5742 + t5746;
  t3773 = 0.183*t3763;
  t3807 = 0.15*t3796;
  t3938 = 0. + t3773 + t3807;
  t4623 = -0.15*t3763;
  t4746 = 0.183*t3796;
  t4768 = 0. + t4623 + t4746;
  t5965 = t1883*t45*t47;
  t6306 = -1.*t5789*t3160;
  t6308 = t5965 + t6306;
  t6600 = t47*t5789;
  t6697 = t1883*t45*t3160;
  t6714 = t6600 + t6697;
  t7320 = t1883*t45*t1937*t693;
  t7338 = -1.*t1883*t45*t1999*t2785;
  t7342 = t7320 + t7338;
  t7372 = -1.*t1883*t47*t1978;
  t7379 = -1.*t7342*t3160;
  t7401 = t7372 + t7379;
  t7441 = t47*t7342;
  t7452 = -1.*t1883*t1978*t3160;
  t7454 = t7441 + t7452;
  t7860 = t45*t1937*t693*t70;
  t7893 = -1.*t45*t70*t1999*t2785;
  t7933 = t7860 + t7893;
  t7970 = -1.*t47*t70*t1978;
  t8018 = -1.*t7933*t3160;
  t8039 = t7970 + t8018;
  t8096 = t47*t7933;
  t8101 = -1.*t70*t1978*t3160;
  t8229 = t8096 + t8101;
  t8716 = -1.*t1937*t693*t1978;
  t8729 = t1978*t1999*t2785;
  t8773 = t8716 + t8729;
  t8893 = -1.*t45*t47;
  t8903 = -1.*t8773*t3160;
  t8904 = t8893 + t8903;
  t8912 = t47*t8773;
  t8928 = -1.*t45*t3160;
  t8948 = t8912 + t8928;
  t9383 = t1937*t70;
  t9410 = -1.*t1883*t1978*t1999;
  t9426 = t9383 + t9410;
  t9560 = t693*t9426;
  t9571 = -1.*t5553*t2785;
  t9572 = t9560 + t9571;
  t9719 = t1937*t70*t1978;
  t9723 = -1.*t1883*t1999;
  t9724 = t9719 + t9723;
  t2940 = t693*t2351;
  t9739 = -1.*t9724*t2785;
  t9741 = t2940 + t9739;
  t9818 = -1.*t45*t693*t1999;
  t9819 = -1.*t45*t1937*t2785;
  t9820 = t9818 + t9819;
  t9848 = -1.*t693*t5408;
  t9853 = t9848 + t9571;
  t9733 = t693*t9724;
  t9879 = t1883*t1937;
  t9881 = t70*t1978*t1999;
  t9882 = t9879 + t9881;
  t9899 = -1.*t693*t9882;
  t9901 = t9899 + t9739;
  t9804 = t45*t1937*t693;
  t9805 = -1.*t45*t1999*t2785;
  t9811 = t9804 + t9805;
  t9813 = -0.11079*t9811;
  t9821 = t9820*t3211;
  t9822 = -1.*t9820*t3160*t3938;
  t9823 = t47*t9820*t4768;
  t9830 = -1.*t3695*t9820*t3160;
  t9831 = -1.*t47*t9820*t3796;
  t9835 = t9830 + t9831;
  t9836 = 0.183*t9835;
  t9837 = t47*t3695*t9820;
  t9839 = -1.*t9820*t3160*t3796;
  t9840 = t9837 + t9839;
  t9842 = -0.15*t9840;
  t6732 = t3695*t6308;
  t9925 = -1.*t47*t5789;
  t9926 = -1.*t1883*t45*t3160;
  t9927 = t9925 + t9926;
  t9884 = -1.*t9882*t2785;
  t9885 = t9733 + t9884;
  t9948 = t45*t47*t70;
  t9949 = -1.*t9885*t3160;
  t9950 = t9948 + t9949;
  t9945 = -1.*t47*t9885;
  t9946 = t9945 + t4127;
  t9973 = -1.*t47*t1978;
  t9975 = -1.*t9811*t3160;
  t9976 = t9973 + t9975;
  t9966 = -1.*t47*t9811;
  t9968 = t1978*t3160;
  t9969 = t9966 + t9968;
  t6789 = -1.*t6714*t3796;
  t6810 = t6732 + t6789;
  t9939 = -1.*t6308*t3796;
  t9992 = 0.183*t3695;
  t9994 = -0.15*t3796;
  t9995 = t9992 + t9994;
  t9997 = 0.15*t3695;
  t9999 = t9997 + t4746;
  t9954 = t3695*t9950;
  t10006 = t47*t9885;
  t10007 = t45*t70*t3160;
  t10008 = t10006 + t10007;
  t9959 = -1.*t9950*t3796;
  t9978 = t3695*t9976;
  t10019 = t47*t9811;
  t10020 = -1.*t1978*t3160;
  t10021 = t10019 + t10020;
  t9984 = -1.*t9976*t3796;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1459*t2351 + t2780*t2903 - 0.11079*(t2780*t2785 + t2940) + t3131*t3211 + t3558*t3938 - 0.15*(t3558*t3796 + t3695*t4333) + 0.183*(t3558*t3695 - 1.*t3796*t4333) + t4333*t4768 - 1.*t45*t58*t70;
  p_output1[10]=t1459*t5408 + t2903*t5553 + t3211*t5789 + t1883*t45*t58 + t3938*t6308 + t4768*t6714 - 0.15*(t3796*t6308 + t3695*t6714) + 0.183*t6810 - 0.11079*(t2785*t5553 + t5408*t693);
  p_output1[11]=0;
  p_output1[12]=t1459*t1883*t1999*t45 + t1883*t1937*t2903*t45 - 1.*t1883*t1978*t58 - 0.11079*(t1883*t1937*t2785*t45 + t1883*t1999*t45*t693) + t3211*t7342 + t3938*t7401 + t4768*t7454 - 0.15*(t3796*t7401 + t3695*t7454) + 0.183*(t3695*t7401 - 1.*t3796*t7454);
  p_output1[13]=t1459*t1999*t45*t70 + t1937*t2903*t45*t70 - 1.*t1978*t58*t70 - 0.11079*(t1937*t2785*t45*t70 + t1999*t45*t693*t70) + t3211*t7933 + t3938*t8039 + t4768*t8229 - 0.15*(t3796*t8039 + t3695*t8229) + 0.183*(t3695*t8039 - 1.*t3796*t8229);
  p_output1[14]=-1.*t1459*t1978*t1999 - 1.*t1937*t1978*t2903 - 1.*t45*t58 - 0.11079*(-1.*t1937*t1978*t2785 - 1.*t1978*t1999*t693) + t3211*t8773 + t3938*t8904 + t4768*t8948 - 0.15*(t3796*t8904 + t3695*t8948) + 0.183*(t3695*t8904 - 1.*t3796*t8948);
  p_output1[15]=t1459*t5553 + t2903*t9426 - 0.11079*(t5742 + t2785*t9426) + t3211*t9572 - 1.*t3160*t3938*t9572 + t47*t4768*t9572 - 0.15*(-1.*t3160*t3796*t9572 + t3695*t47*t9572) + 0.183*(-1.*t3160*t3695*t9572 - 1.*t3796*t47*t9572);
  p_output1[16]=t2351*t2903 + t1459*t9724 - 0.11079*(t2351*t2785 + t9733) + t3211*t9741 - 1.*t3160*t3938*t9741 + t47*t4768*t9741 - 0.15*(-1.*t3160*t3796*t9741 + t3695*t47*t9741) + 0.183*(-1.*t3160*t3695*t9741 - 1.*t3796*t47*t9741);
  p_output1[17]=t1459*t1937*t45 - 1.*t1999*t2903*t45 + t9813 + t9821 + t9822 + t9823 + t9836 + t9842;
  p_output1[18]=-0.047*t2785*t5408 - 0.11079*t5789 + 0.047*t5553*t693 + t3211*t9853 - 1.*t3160*t3938*t9853 + t47*t4768*t9853 - 0.15*(-1.*t3160*t3796*t9853 + t3695*t47*t9853) + 0.183*(-1.*t3160*t3695*t9853 - 1.*t3796*t47*t9853);
  p_output1[19]=0.047*t693*t9724 - 0.047*t2785*t9882 - 0.11079*t9885 + t3211*t9901 - 1.*t3160*t3938*t9901 + t47*t4768*t9901 - 0.15*(-1.*t3160*t3796*t9901 + t3695*t47*t9901) + 0.183*(-1.*t3160*t3695*t9901 - 1.*t3796*t47*t9901);
  p_output1[20]=-0.047*t1999*t2785*t45 + 0.047*t1937*t45*t693 + t9813 + t9821 + t9822 + t9823 + t9836 + t9842;
  p_output1[21]=0.183*t1883*t3160*t45 + 0.183*t47*t5789 + t4768*t6308 + t3938*t9927 - 0.15*(t6732 + t3796*t9927) + 0.183*(t3695*t9927 + t9939);
  p_output1[22]=0.183*t3160*t45*t70 + 0.183*t47*t9885 + t3938*t9946 + t4768*t9950 - 0.15*(t3796*t9946 + t9954) + 0.183*(t3695*t9946 + t9959);
  p_output1[23]=-0.183*t1978*t3160 + 0.183*t47*t9811 + t3938*t9969 + t4768*t9976 - 0.15*(t3796*t9969 + t9978) + 0.183*(t3695*t9969 + t9984);
  p_output1[24]=-0.15*t6810 + 0.183*(-1.*t3695*t6714 + t9939) + t6714*t9995 + t6308*t9999;
  p_output1[25]=-0.15*(-1.*t10008*t3796 + t9954) + 0.183*(-1.*t10008*t3695 + t9959) + t10008*t9995 + t9950*t9999;
  p_output1[26]=-0.15*(-1.*t10021*t3796 + t9978) + 0.183*(-1.*t10021*t3695 + t9984) + t10021*t9995 + t9976*t9999;
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



void Jp_FR_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
