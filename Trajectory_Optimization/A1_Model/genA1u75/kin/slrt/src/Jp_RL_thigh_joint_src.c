/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:18:09 GMT-05:00
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
  double t993;
  double t2968;
  double t2675;
  double t2702;
  double t3013;
  double t1711;
  double t2960;
  double t3183;
  double t3327;
  double t3397;
  double t3599;
  double t3606;
  double t3825;
  double t83;
  double t897;
  double t4329;
  double t4996;
  double t5162;
  double t5312;
  double t221;
  double t758;
  double t824;
  double t863;
  double t1725;
  double t2560;
  double t3479;
  double t3480;
  double t3507;
  double t3511;
  double t5732;
  double t5742;
  double t5822;
  double t5836;
  double t5859;
  double t5881;
  double t4370;
  double t4714;
  double t6240;
  double t6242;
  double t6359;
  double t7219;
  double t7285;
  double t7326;
  double t8468;
  double t8474;
  double t8493;
  double t8928;
  double t8959;
  double t8996;
  double t9162;
  double t9173;
  double t9175;
  double t9178;
  double t9199;
  double t9213;
  double t9281;
  double t9286;
  double t9288;
  double t3957;
  double t9297;
  double t9308;
  double t9420;
  double t9421;
  double t9427;
  double t9605;
  double t9607;
  double t9632;
  double t9636;
  double t9638;
  double t9643;
  double t9666;
  double t9317;
  double t9452;
  double t9457;
  double t9465;
  double t9471;
  double t9479;
  double t9521;
  double t9704;
  double t9797;
  t993 = Sin(var1[3]);
  t2968 = Cos(var1[3]);
  t2675 = Cos(var1[5]);
  t2702 = Sin(var1[4]);
  t3013 = Sin(var1[5]);
  t1711 = Sin(var1[15]);
  t2960 = -1.*t2675*t993*t2702;
  t3183 = t2968*t3013;
  t3327 = t2960 + t3183;
  t3397 = Cos(var1[15]);
  t3599 = -1.*t2968*t2675;
  t3606 = -1.*t993*t2702*t3013;
  t3825 = t3599 + t3606;
  t83 = Cos(var1[16]);
  t897 = Cos(var1[4]);
  t4329 = Sin(var1[16]);
  t4996 = t3397*t3327;
  t5162 = -1.*t1711*t3825;
  t5312 = t4996 + t5162;
  t221 = -1.*t83;
  t758 = 1. + t221;
  t824 = -0.183*t758;
  t863 = 0. + t824;
  t1725 = -0.047*t1711;
  t2560 = 0. + t1725;
  t3479 = -1.*t3397;
  t3480 = 1. + t3479;
  t3507 = 0.047*t3480;
  t3511 = 0. + t3507;
  t5732 = t2968*t2675*t2702;
  t5742 = t993*t3013;
  t5822 = t5732 + t5742;
  t5836 = -1.*t2675*t993;
  t5859 = t2968*t2702*t3013;
  t5881 = t5836 + t5859;
  t4370 = -0.183*t4329;
  t4714 = 0. + t4370;
  t6240 = t3397*t5822;
  t6242 = -1.*t1711*t5881;
  t6359 = t6240 + t6242;
  t7219 = t3397*t2968*t897*t2675;
  t7285 = -1.*t2968*t897*t1711*t3013;
  t7326 = t7219 + t7285;
  t8468 = t3397*t897*t2675*t993;
  t8474 = -1.*t897*t1711*t993*t3013;
  t8493 = t8468 + t8474;
  t8928 = -1.*t3397*t2675*t2702;
  t8959 = t1711*t2702*t3013;
  t8996 = t8928 + t8959;
  t9162 = t2675*t993;
  t9173 = -1.*t2968*t2702*t3013;
  t9175 = t9162 + t9173;
  t9178 = -1.*t1711*t5822;
  t9199 = t3397*t9175;
  t9213 = t9178 + t9199;
  t9281 = t2675*t993*t2702;
  t9286 = -1.*t2968*t3013;
  t9288 = t9281 + t9286;
  t3957 = t3397*t3825;
  t9297 = -1.*t1711*t9288;
  t9308 = t9297 + t3957;
  t9420 = -1.*t897*t2675*t1711;
  t9421 = -1.*t3397*t897*t3013;
  t9427 = t9420 + t9421;
  t9605 = -1.*t3397*t5881;
  t9607 = t9178 + t9605;
  t9632 = t2968*t2675;
  t9636 = t993*t2702*t3013;
  t9638 = t9632 + t9636;
  t9643 = -1.*t3397*t9638;
  t9666 = t9297 + t9643;
  t9317 = t3397*t9288;
  t9452 = t4714*t9427;
  t9457 = 0.183*t4329*t9427;
  t9465 = t3397*t897*t2675;
  t9471 = -1.*t897*t1711*t3013;
  t9479 = t9465 + t9471;
  t9521 = 0.11079*t9479;
  t9704 = -1.*t1711*t9638;
  t9797 = t9317 + t9704;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t2560*t3327 + t3511*t3825 + 0.11079*(t1711*t3327 + t3957) + t4714*t5312 - 1.*t863*t897*t993 - 0.183*(-1.*t4329*t5312 - 1.*t83*t897*t993);
  p_output1[10]=t2560*t5822 + t3511*t5881 + 0.11079*(t1711*t5822 + t3397*t5881) + t4714*t6359 + t2968*t863*t897 - 0.183*(-1.*t4329*t6359 + t2968*t83*t897);
  p_output1[11]=0;
  p_output1[12]=t4714*t7326 - 0.183*(-1.*t4329*t7326 - 1.*t2702*t2968*t83) - 1.*t2702*t2968*t863 + t2560*t2675*t2968*t897 + t2968*t3013*t3511*t897 + 0.11079*(t1711*t2675*t2968*t897 + t2968*t3013*t3397*t897);
  p_output1[13]=t4714*t8493 - 1.*t2702*t863*t993 + t2560*t2675*t897*t993 + t3013*t3511*t897*t993 - 0.183*(-1.*t4329*t8493 - 1.*t2702*t83*t993) + 0.11079*(t1711*t2675*t897*t993 + t3013*t3397*t897*t993);
  p_output1[14]=-1.*t2560*t2675*t2702 + 0.11079*(-1.*t1711*t2675*t2702 - 1.*t2702*t3013*t3397) - 1.*t2702*t3013*t3511 - 1.*t863*t897 + t4714*t8996 - 0.183*(-1.*t83*t897 - 1.*t4329*t8996);
  p_output1[15]=t3511*t5822 + t2560*t9175 + 0.11079*(t6240 + t1711*t9175) + 0.183*t4329*t9213 + t4714*t9213;
  p_output1[16]=t2560*t3825 + t3511*t9288 + 0.183*t4329*t9308 + t4714*t9308 + 0.11079*(t1711*t3825 + t9317);
  p_output1[17]=-1.*t2560*t3013*t897 + t2675*t3511*t897 + t9452 + t9457 + t9521;
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
  p_output1[45]=-0.047*t3397*t5822 + 0.047*t1711*t5881 + 0.11079*t6359 + 0.183*t4329*t9607 + t4714*t9607;
  p_output1[46]=-0.047*t3397*t9288 + 0.047*t1711*t9638 + 0.183*t4329*t9666 + t4714*t9666 + 0.11079*t9797;
  p_output1[47]=0.047*t1711*t3013*t897 - 0.047*t2675*t3397*t897 + t9452 + t9457 + t9521;
  p_output1[48]=-0.183*t6359*t83 - 0.183*t2968*t4329*t897 - 0.183*(-1.*t6359*t83 - 1.*t2968*t4329*t897);
  p_output1[49]=-0.183*t83*t9797 - 0.183*t4329*t897*t993 - 0.183*(-1.*t83*t9797 - 1.*t4329*t897*t993);
  p_output1[50]=0.183*t2702*t4329 - 0.183*t83*t9479 - 0.183*(t2702*t4329 - 1.*t83*t9479);
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
}



void Jp_RL_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
