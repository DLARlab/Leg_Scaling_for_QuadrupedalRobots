/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:26:02 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RL_calf_joint_src.h"

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
  double t545;
  double t2704;
  double t3143;
  double t2947;
  double t3556;
  double t2240;
  double t1106;
  double t1335;
  double t2458;
  double t3118;
  double t3567;
  double t3600;
  double t3609;
  double t3707;
  double t3725;
  double t3819;
  double t3829;
  double t3835;
  double t3890;
  double t47;
  double t3913;
  double t4099;
  double t4130;
  double t4141;
  double t4163;
  double t4167;
  double t4169;
  double t4182;
  double t4184;
  double t4202;
  double t4328;
  double t4345;
  double t4348;
  double t2189;
  double t3896;
  double t3897;
  double t3918;
  double t3921;
  double t4003;
  double t4091;
  double t4205;
  double t4222;
  double t4253;
  double t4254;
  double t4290;
  double t4326;
  double t4355;
  double t4356;
  double t4372;
  double t4392;
  double t4399;
  t545 = Cos(var1[3]);
  t2704 = Cos(var1[5]);
  t3143 = Sin(var1[3]);
  t2947 = Sin(var1[4]);
  t3556 = Sin(var1[5]);
  t2240 = Cos(var1[16]);
  t1106 = Cos(var1[4]);
  t1335 = Sin(var1[16]);
  t2458 = Cos(var1[15]);
  t3118 = t545*t2704*t2947;
  t3567 = t3143*t3556;
  t3600 = t3118 + t3567;
  t3609 = t2458*t3600;
  t3707 = Sin(var1[15]);
  t3725 = -1.*t2704*t3143;
  t3819 = t545*t2947*t3556;
  t3829 = t3725 + t3819;
  t3835 = -1.*t3707*t3829;
  t3890 = t3609 + t3835;
  t47 = Sin(var1[17]);
  t3913 = Cos(var1[17]);
  t4099 = t2704*t3143*t2947;
  t4130 = -1.*t545*t3556;
  t4141 = t4099 + t4130;
  t4163 = t2458*t4141;
  t4167 = t545*t2704;
  t4169 = t3143*t2947*t3556;
  t4182 = t4167 + t4169;
  t4184 = -1.*t3707*t4182;
  t4202 = t4163 + t4184;
  t4328 = t2458*t1106*t2704;
  t4345 = -1.*t1106*t3707*t3556;
  t4348 = t4328 + t4345;
  t2189 = t545*t1106*t1335;
  t3896 = t2240*t3890;
  t3897 = t2189 + t3896;
  t3918 = t2240*t545*t1106;
  t3921 = -1.*t1335*t3890;
  t4003 = t3918 + t3921;
  t4091 = t1106*t1335*t3143;
  t4205 = t2240*t4202;
  t4222 = t4091 + t4205;
  t4253 = t2240*t1106*t3143;
  t4254 = -1.*t1335*t4202;
  t4290 = t4253 + t4254;
  t4326 = -1.*t1335*t2947;
  t4355 = t2240*t4348;
  t4356 = t4326 + t4355;
  t4372 = -1.*t2240*t2947;
  t4392 = -1.*t1335*t4348;
  t4399 = t4372 + t4392;
  p_output1[0]=t3913*t4003 - 1.*t3897*t47;
  p_output1[1]=t3913*t4290 - 1.*t4222*t47;
  p_output1[2]=t3913*t4399 - 1.*t4356*t47;
  p_output1[3]=t3600*t3707 + t2458*t3829;
  p_output1[4]=t3707*t4141 + t2458*t4182;
  p_output1[5]=t1106*t2458*t3556 + t1106*t2704*t3707;
  p_output1[6]=t3897*t3913 + t4003*t47;
  p_output1[7]=t3913*t4222 + t4290*t47;
  p_output1[8]=t3913*t4356 + t4399*t47;
}



void R_RL_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
