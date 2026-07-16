/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:03:32 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RL_thigh_joint_src.h"

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
  double t3705;
  double t7406;
  double t6340;
  double t7091;
  double t7682;
  double t5288;
  double t7382;
  double t7700;
  double t7741;
  double t7748;
  double t7785;
  double t7786;
  double t7790;
  double t1140;
  double t3688;
  double t7816;
  double t7823;
  double t7824;
  double t7826;
  double t1144;
  double t1721;
  double t1961;
  double t3401;
  double t5575;
  double t6338;
  double t7756;
  double t7776;
  double t7783;
  double t7784;
  double t7845;
  double t7852;
  double t7854;
  double t7856;
  double t7857;
  double t7858;
  double t7817;
  double t7822;
  double t7867;
  double t7869;
  double t7870;
  double t7893;
  double t7896;
  double t7897;
  double t7921;
  double t7922;
  double t7923;
  double t7946;
  double t7947;
  double t7950;
  double t7962;
  double t7963;
  double t7964;
  double t7969;
  double t7972;
  double t7977;
  double t7988;
  double t7989;
  double t7992;
  double t7800;
  double t7998;
  double t7999;
  double t8017;
  double t8018;
  double t8019;
  double t8032;
  double t8033;
  double t8041;
  double t8043;
  double t8044;
  double t8046;
  double t8049;
  double t8007;
  double t8020;
  double t8021;
  double t8022;
  double t8023;
  double t8025;
  double t8028;
  double t8053;
  double t8054;
  t3705 = Sin(var1[3]);
  t7406 = Cos(var1[3]);
  t6340 = Cos(var1[5]);
  t7091 = Sin(var1[4]);
  t7682 = Sin(var1[5]);
  t5288 = Sin(var1[15]);
  t7382 = -1.*t6340*t3705*t7091;
  t7700 = t7406*t7682;
  t7741 = t7382 + t7700;
  t7748 = Cos(var1[15]);
  t7785 = -1.*t7406*t6340;
  t7786 = -1.*t3705*t7091*t7682;
  t7790 = t7785 + t7786;
  t1140 = Cos(var1[16]);
  t3688 = Cos(var1[4]);
  t7816 = Sin(var1[16]);
  t7823 = t7748*t7741;
  t7824 = -1.*t5288*t7790;
  t7826 = t7823 + t7824;
  t1144 = -1.*t1140;
  t1721 = 1. + t1144;
  t1961 = -0.183*t1721;
  t3401 = 0. + t1961;
  t5575 = -0.047*t5288;
  t6338 = 0. + t5575;
  t7756 = -1.*t7748;
  t7776 = 1. + t7756;
  t7783 = 0.047*t7776;
  t7784 = 0. + t7783;
  t7845 = t7406*t6340*t7091;
  t7852 = t3705*t7682;
  t7854 = t7845 + t7852;
  t7856 = -1.*t6340*t3705;
  t7857 = t7406*t7091*t7682;
  t7858 = t7856 + t7857;
  t7817 = -0.183*t7816;
  t7822 = 0. + t7817;
  t7867 = t7748*t7854;
  t7869 = -1.*t5288*t7858;
  t7870 = t7867 + t7869;
  t7893 = t7748*t7406*t3688*t6340;
  t7896 = -1.*t7406*t3688*t5288*t7682;
  t7897 = t7893 + t7896;
  t7921 = t7748*t3688*t6340*t3705;
  t7922 = -1.*t3688*t5288*t3705*t7682;
  t7923 = t7921 + t7922;
  t7946 = -1.*t7748*t6340*t7091;
  t7947 = t5288*t7091*t7682;
  t7950 = t7946 + t7947;
  t7962 = t6340*t3705;
  t7963 = -1.*t7406*t7091*t7682;
  t7964 = t7962 + t7963;
  t7969 = -1.*t5288*t7854;
  t7972 = t7748*t7964;
  t7977 = t7969 + t7972;
  t7988 = t6340*t3705*t7091;
  t7989 = -1.*t7406*t7682;
  t7992 = t7988 + t7989;
  t7800 = t7748*t7790;
  t7998 = -1.*t5288*t7992;
  t7999 = t7998 + t7800;
  t8017 = -1.*t3688*t6340*t5288;
  t8018 = -1.*t7748*t3688*t7682;
  t8019 = t8017 + t8018;
  t8032 = -1.*t7748*t7858;
  t8033 = t7969 + t8032;
  t8041 = t7406*t6340;
  t8043 = t3705*t7091*t7682;
  t8044 = t8041 + t8043;
  t8046 = -1.*t7748*t8044;
  t8049 = t7998 + t8046;
  t8007 = t7748*t7992;
  t8020 = t7822*t8019;
  t8021 = 0.183*t7816*t8019;
  t8022 = t7748*t3688*t6340;
  t8023 = -1.*t3688*t5288*t7682;
  t8025 = t8022 + t8023;
  t8028 = 0.13205*t8025;
  t8053 = -1.*t5288*t8044;
  t8054 = t8007 + t8053;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=-1.*t3401*t3688*t3705 + t6338*t7741 + t7784*t7790 + 0.13205*(t5288*t7741 + t7800) + t7822*t7826 - 0.183*(-1.*t1140*t3688*t3705 - 1.*t7816*t7826);
  p_output1[10]=t3401*t3688*t7406 + t6338*t7854 + t7784*t7858 + 0.13205*(t5288*t7854 + t7748*t7858) + t7822*t7870 - 0.183*(t1140*t3688*t7406 - 1.*t7816*t7870);
  p_output1[11]=0;
  p_output1[12]=t3688*t6338*t6340*t7406 - 1.*t3401*t7091*t7406 + 0.13205*(t3688*t5288*t6340*t7406 + t3688*t7406*t7682*t7748) + t3688*t7406*t7682*t7784 + t7822*t7897 - 0.183*(-1.*t1140*t7091*t7406 - 1.*t7816*t7897);
  p_output1[13]=t3688*t3705*t6338*t6340 - 1.*t3401*t3705*t7091 + 0.13205*(t3688*t3705*t5288*t6340 + t3688*t3705*t7682*t7748) + t3688*t3705*t7682*t7784 + t7822*t7923 - 0.183*(-1.*t1140*t3705*t7091 - 1.*t7816*t7923);
  p_output1[14]=-1.*t3401*t3688 - 1.*t6338*t6340*t7091 + 0.13205*(-1.*t5288*t6340*t7091 - 1.*t7091*t7682*t7748) - 1.*t7091*t7682*t7784 + t7822*t7950 - 0.183*(-1.*t1140*t3688 - 1.*t7816*t7950);
  p_output1[15]=t7784*t7854 + t6338*t7964 + 0.13205*(t7867 + t5288*t7964) + 0.183*t7816*t7977 + t7822*t7977;
  p_output1[16]=t6338*t7790 + t7784*t7992 + 0.183*t7816*t7999 + t7822*t7999 + 0.13205*(t5288*t7790 + t8007);
  p_output1[17]=-1.*t3688*t6338*t7682 + t3688*t6340*t7784 + t8020 + t8021 + t8028;
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
  p_output1[45]=-0.047*t7748*t7854 + 0.047*t5288*t7858 + 0.13205*t7870 + 0.183*t7816*t8033 + t7822*t8033;
  p_output1[46]=-0.047*t7748*t7992 + 0.047*t5288*t8044 + 0.183*t7816*t8049 + t7822*t8049 + 0.13205*t8054;
  p_output1[47]=0.047*t3688*t5288*t7682 - 0.047*t3688*t6340*t7748 + t8020 + t8021 + t8028;
  p_output1[48]=-0.183*t3688*t7406*t7816 - 0.183*t1140*t7870 - 0.183*(-1.*t3688*t7406*t7816 - 1.*t1140*t7870);
  p_output1[49]=-0.183*t3688*t3705*t7816 - 0.183*t1140*t8054 - 0.183*(-1.*t3688*t3705*t7816 - 1.*t1140*t8054);
  p_output1[50]=0.183*t7091*t7816 - 0.183*t1140*t8025 - 0.183*(t7091*t7816 - 1.*t1140*t8025);
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
}



void Jp_RL_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
