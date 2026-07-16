/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:18:12 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RL_calf_joint_src.h"

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
  double t505;
  double t915;
  double t1272;
  double t1267;
  double t1276;
  double t872;
  double t705;
  double t754;
  double t874;
  double t1271;
  double t1362;
  double t1389;
  double t1419;
  double t1426;
  double t1447;
  double t1461;
  double t1481;
  double t1494;
  double t1520;
  double t219;
  double t1983;
  double t2442;
  double t2497;
  double t2514;
  double t2519;
  double t2521;
  double t2522;
  double t2551;
  double t2566;
  double t2567;
  double t2717;
  double t2760;
  double t2769;
  double t791;
  double t1553;
  double t1803;
  double t2106;
  double t2177;
  double t2279;
  double t2435;
  double t2577;
  double t2578;
  double t2616;
  double t2617;
  double t2624;
  double t2690;
  double t2772;
  double t2824;
  double t2847;
  double t2883;
  double t2910;
  double t3064;
  double t3079;
  double t3094;
  double t4054;
  double t4077;
  double t1894;
  double t2281;
  double t2321;
  double t3225;
  double t3305;
  double t3321;
  double t3500;
  double t3504;
  double t3572;
  double t3731;
  double t3842;
  double t3850;
  double t3885;
  double t3892;
  double t3903;
  double t3908;
  double t3096;
  double t3118;
  double t3133;
  double t3933;
  double t3934;
  double t4143;
  double t4151;
  double t4193;
  double t4235;
  double t4253;
  double t4293;
  double t2615;
  double t2648;
  double t2657;
  double t3378;
  double t3386;
  double t3409;
  double t3169;
  double t3171;
  double t3179;
  double t2837;
  double t2939;
  double t2961;
  double t3433;
  double t3438;
  double t3473;
  t505 = Cos(var1[3]);
  t915 = Cos(var1[5]);
  t1272 = Sin(var1[3]);
  t1267 = Sin(var1[4]);
  t1276 = Sin(var1[5]);
  t872 = Cos(var1[16]);
  t705 = Cos(var1[4]);
  t754 = Sin(var1[16]);
  t874 = Cos(var1[15]);
  t1271 = t505*t915*t1267;
  t1362 = t1272*t1276;
  t1389 = t1271 + t1362;
  t1419 = t874*t1389;
  t1426 = Sin(var1[15]);
  t1447 = -1.*t915*t1272;
  t1461 = t505*t1267*t1276;
  t1481 = t1447 + t1461;
  t1494 = -1.*t1426*t1481;
  t1520 = t1419 + t1494;
  t219 = Sin(var1[17]);
  t1983 = Cos(var1[17]);
  t2442 = t915*t1272*t1267;
  t2497 = -1.*t505*t1276;
  t2514 = t2442 + t2497;
  t2519 = t874*t2514;
  t2521 = t505*t915;
  t2522 = t1272*t1267*t1276;
  t2551 = t2521 + t2522;
  t2566 = -1.*t1426*t2551;
  t2567 = t2519 + t2566;
  t2717 = t874*t705*t915;
  t2760 = -1.*t705*t1426*t1276;
  t2769 = t2717 + t2760;
  t791 = t505*t705*t754;
  t1553 = t872*t1520;
  t1803 = t791 + t1553;
  t2106 = t872*t505*t705;
  t2177 = -1.*t754*t1520;
  t2279 = t2106 + t2177;
  t2435 = t705*t754*t1272;
  t2577 = t872*t2567;
  t2578 = t2435 + t2577;
  t2616 = t872*t705*t1272;
  t2617 = -1.*t754*t2567;
  t2624 = t2616 + t2617;
  t2690 = -1.*t754*t1267;
  t2772 = t872*t2769;
  t2824 = t2690 + t2772;
  t2847 = -1.*t872*t1267;
  t2883 = -1.*t754*t2769;
  t2910 = t2847 + t2883;
  t3064 = t1426*t1389;
  t3079 = t874*t1481;
  t3094 = t3064 + t3079;
  t4054 = -1.*t1983;
  t4077 = 1. + t4054;
  t1894 = -1.*t219*t1803;
  t2281 = t1983*t2279;
  t2321 = t1894 + t2281;
  t3225 = t1983*t1803;
  t3305 = t219*t2279;
  t3321 = t3225 + t3305;
  t3500 = -1.*t872;
  t3504 = 1. + t3500;
  t3572 = -0.183*t3504;
  t3731 = 0. + t3572;
  t3842 = -0.047*t1426;
  t3850 = 0. + t3842;
  t3885 = -1.*t874;
  t3892 = 1. + t3885;
  t3903 = 0.047*t3892;
  t3908 = 0. + t3903;
  t3096 = t1426*t2514;
  t3118 = t874*t2551;
  t3133 = t3096 + t3118;
  t3933 = -0.183*t754;
  t3934 = 0. + t3933;
  t4143 = -0.15*t4077;
  t4151 = -0.183*t219;
  t4193 = 0. + t4143 + t4151;
  t4235 = -0.183*t4077;
  t4253 = 0.15*t219;
  t4293 = 0. + t4235 + t4253;
  t2615 = -1.*t219*t2578;
  t2648 = t1983*t2624;
  t2657 = t2615 + t2648;
  t3378 = t1983*t2578;
  t3386 = t219*t2624;
  t3409 = t3378 + t3386;
  t3169 = t705*t915*t1426;
  t3171 = t874*t705*t1276;
  t3179 = t3169 + t3171;
  t2837 = -1.*t219*t2824;
  t2939 = t1983*t2910;
  t2961 = t2837 + t2939;
  t3433 = t1983*t2824;
  t3438 = t219*t2910;
  t3473 = t3433 + t3438;
  p_output1[0]=t2321;
  p_output1[1]=t2657;
  p_output1[2]=t2961;
  p_output1[3]=0.;
  p_output1[4]=t3094;
  p_output1[5]=t3133;
  p_output1[6]=t3179;
  p_output1[7]=0.;
  p_output1[8]=t3321;
  p_output1[9]=t3409;
  p_output1[10]=t3473;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.183*t2321 + 0.11079*t3094 - 0.15*t3321 + t1389*t3850 + t1481*t3908 + t1520*t3934 + t1803*t4193 + t2279*t4293 + t3731*t505*t705 + var1[0];
  p_output1[13]=0. - 0.183*t2657 + 0.11079*t3133 - 0.15*t3409 + t2514*t3850 + t2551*t3908 + t2567*t3934 + t2578*t4193 + t2624*t4293 + t1272*t3731*t705 + var1[1];
  p_output1[14]=0. - 0.183*t2961 + 0.11079*t3179 - 0.15*t3473 - 1.*t1267*t3731 + t2769*t3934 + t2824*t4193 + t2910*t4293 + t1276*t3908*t705 + t3850*t705*t915 + var1[2];
  p_output1[15]=1.;
}



void H_RL_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
