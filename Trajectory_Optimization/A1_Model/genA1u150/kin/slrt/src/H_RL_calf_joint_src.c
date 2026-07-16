/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:26:02 GMT-05:00
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
  double t239;
  double t807;
  double t1012;
  double t886;
  double t1069;
  double t685;
  double t457;
  double t622;
  double t696;
  double t934;
  double t1082;
  double t1094;
  double t1105;
  double t1116;
  double t1154;
  double t1281;
  double t1286;
  double t1381;
  double t1595;
  double t170;
  double t1882;
  double t2266;
  double t2268;
  double t2281;
  double t2288;
  double t2293;
  double t2350;
  double t2394;
  double t2411;
  double t2415;
  double t2572;
  double t2583;
  double t2604;
  double t642;
  double t1662;
  double t1736;
  double t1922;
  double t1974;
  double t2177;
  double t2263;
  double t2434;
  double t2438;
  double t2492;
  double t2495;
  double t2509;
  double t2541;
  double t2654;
  double t2674;
  double t2693;
  double t2725;
  double t2745;
  double t2888;
  double t2897;
  double t2938;
  double t3446;
  double t3452;
  double t1778;
  double t2225;
  double t2251;
  double t3055;
  double t3096;
  double t3113;
  double t3186;
  double t3222;
  double t3229;
  double t3239;
  double t3294;
  double t3319;
  double t3333;
  double t3363;
  double t3373;
  double t3384;
  double t2947;
  double t2955;
  double t2961;
  double t3413;
  double t3430;
  double t3457;
  double t3481;
  double t3489;
  double t3510;
  double t3536;
  double t3567;
  double t2485;
  double t2520;
  double t2530;
  double t3118;
  double t3124;
  double t3125;
  double t3014;
  double t3020;
  double t3027;
  double t2677;
  double t2758;
  double t2866;
  double t3143;
  double t3154;
  double t3182;
  t239 = Cos(var1[3]);
  t807 = Cos(var1[5]);
  t1012 = Sin(var1[3]);
  t886 = Sin(var1[4]);
  t1069 = Sin(var1[5]);
  t685 = Cos(var1[16]);
  t457 = Cos(var1[4]);
  t622 = Sin(var1[16]);
  t696 = Cos(var1[15]);
  t934 = t239*t807*t886;
  t1082 = t1012*t1069;
  t1094 = t934 + t1082;
  t1105 = t696*t1094;
  t1116 = Sin(var1[15]);
  t1154 = -1.*t807*t1012;
  t1281 = t239*t886*t1069;
  t1286 = t1154 + t1281;
  t1381 = -1.*t1116*t1286;
  t1595 = t1105 + t1381;
  t170 = Sin(var1[17]);
  t1882 = Cos(var1[17]);
  t2266 = t807*t1012*t886;
  t2268 = -1.*t239*t1069;
  t2281 = t2266 + t2268;
  t2288 = t696*t2281;
  t2293 = t239*t807;
  t2350 = t1012*t886*t1069;
  t2394 = t2293 + t2350;
  t2411 = -1.*t1116*t2394;
  t2415 = t2288 + t2411;
  t2572 = t696*t457*t807;
  t2583 = -1.*t457*t1116*t1069;
  t2604 = t2572 + t2583;
  t642 = t239*t457*t622;
  t1662 = t685*t1595;
  t1736 = t642 + t1662;
  t1922 = t685*t239*t457;
  t1974 = -1.*t622*t1595;
  t2177 = t1922 + t1974;
  t2263 = t457*t622*t1012;
  t2434 = t685*t2415;
  t2438 = t2263 + t2434;
  t2492 = t685*t457*t1012;
  t2495 = -1.*t622*t2415;
  t2509 = t2492 + t2495;
  t2541 = -1.*t622*t886;
  t2654 = t685*t2604;
  t2674 = t2541 + t2654;
  t2693 = -1.*t685*t886;
  t2725 = -1.*t622*t2604;
  t2745 = t2693 + t2725;
  t2888 = t1116*t1094;
  t2897 = t696*t1286;
  t2938 = t2888 + t2897;
  t3446 = -1.*t1882;
  t3452 = 1. + t3446;
  t1778 = -1.*t170*t1736;
  t2225 = t1882*t2177;
  t2251 = t1778 + t2225;
  t3055 = t1882*t1736;
  t3096 = t170*t2177;
  t3113 = t3055 + t3096;
  t3186 = -1.*t685;
  t3222 = 1. + t3186;
  t3229 = -0.183*t3222;
  t3239 = 0. + t3229;
  t3294 = -0.047*t1116;
  t3319 = 0. + t3294;
  t3333 = -1.*t696;
  t3363 = 1. + t3333;
  t3373 = 0.047*t3363;
  t3384 = 0. + t3373;
  t2947 = t1116*t2281;
  t2955 = t696*t2394;
  t2961 = t2947 + t2955;
  t3413 = -0.183*t622;
  t3430 = 0. + t3413;
  t3457 = -0.3*t3452;
  t3481 = -0.183*t170;
  t3489 = 0. + t3457 + t3481;
  t3510 = -0.183*t3452;
  t3536 = 0.3*t170;
  t3567 = 0. + t3510 + t3536;
  t2485 = -1.*t170*t2438;
  t2520 = t1882*t2509;
  t2530 = t2485 + t2520;
  t3118 = t1882*t2438;
  t3124 = t170*t2509;
  t3125 = t3118 + t3124;
  t3014 = t457*t807*t1116;
  t3020 = t696*t457*t1069;
  t3027 = t3014 + t3020;
  t2677 = -1.*t170*t2674;
  t2758 = t1882*t2745;
  t2866 = t2677 + t2758;
  t3143 = t1882*t2674;
  t3154 = t170*t2745;
  t3182 = t3143 + t3154;
  p_output1[0]=t2251;
  p_output1[1]=t2530;
  p_output1[2]=t2866;
  p_output1[3]=0.;
  p_output1[4]=t2938;
  p_output1[5]=t2961;
  p_output1[6]=t3027;
  p_output1[7]=0.;
  p_output1[8]=t3113;
  p_output1[9]=t3125;
  p_output1[10]=t3182;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.183*t2251 + 0.17458*t2938 - 0.3*t3113 + t1094*t3319 + t1286*t3384 + t1595*t3430 + t1736*t3489 + t2177*t3567 + t239*t3239*t457 + var1[0];
  p_output1[13]=0. - 0.183*t2530 + 0.17458*t2961 - 0.3*t3125 + t2281*t3319 + t2394*t3384 + t2415*t3430 + t2438*t3489 + t2509*t3567 + t1012*t3239*t457 + var1[1];
  p_output1[14]=0. - 0.183*t2866 + 0.17458*t3027 - 0.3*t3182 + t2604*t3430 + t2674*t3489 + t2745*t3567 + t1069*t3384*t457 + t3319*t457*t807 - 1.*t3239*t886 + var1[2];
  p_output1[15]=1.;
}



void H_RL_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
