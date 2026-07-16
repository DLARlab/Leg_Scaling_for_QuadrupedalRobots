/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:20:24 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_FR_calf_joint_src.h"

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
  double t128;
  double t2151;
  double t2763;
  double t2266;
  double t3076;
  double t1792;
  double t2100;
  double t2745;
  double t3138;
  double t3178;
  double t3426;
  double t3556;
  double t3587;
  double t3621;
  double t3639;
  double t3650;
  double t3711;
  double t155;
  double t3714;
  double t32;
  double t4170;
  double t4172;
  double t4208;
  double t4233;
  double t4270;
  double t4271;
  double t4273;
  double t4353;
  double t4382;
  double t3943;
  double t4440;
  double t4453;
  double t4470;
  double t3898;
  double t3921;
  double t3924;
  double t1902;
  double t3752;
  double t3792;
  double t4408;
  double t4411;
  double t4417;
  double t4156;
  double t4397;
  double t4402;
  double t4506;
  double t4507;
  double t4533;
  double t4433;
  double t4474;
  double t4494;
  t128 = Cos(var1[3]);
  t2151 = Cos(var1[5]);
  t2763 = Sin(var1[3]);
  t2266 = Sin(var1[4]);
  t3076 = Sin(var1[5]);
  t1792 = Cos(var1[7]);
  t2100 = Cos(var1[6]);
  t2745 = t128*t2151*t2266;
  t3138 = t2763*t3076;
  t3178 = t2745 + t3138;
  t3426 = t2100*t3178;
  t3556 = -1.*t2151*t2763;
  t3587 = t128*t2266*t3076;
  t3621 = t3556 + t3587;
  t3639 = Sin(var1[6]);
  t3650 = -1.*t3621*t3639;
  t3711 = t3426 + t3650;
  t155 = Cos(var1[4]);
  t3714 = Sin(var1[7]);
  t32 = Cos(var1[8]);
  t4170 = t2151*t2763*t2266;
  t4172 = -1.*t128*t3076;
  t4208 = t4170 + t4172;
  t4233 = t2100*t4208;
  t4270 = t128*t2151;
  t4271 = t2763*t2266*t3076;
  t4273 = t4270 + t4271;
  t4353 = -1.*t4273*t3639;
  t4382 = t4233 + t4353;
  t3943 = Sin(var1[8]);
  t4440 = t155*t2151*t2100;
  t4453 = -1.*t155*t3076*t3639;
  t4470 = t4440 + t4453;
  t3898 = t1792*t3711;
  t3921 = t128*t155*t3714;
  t3924 = t3898 + t3921;
  t1902 = t128*t155*t1792;
  t3752 = -1.*t3711*t3714;
  t3792 = t1902 + t3752;
  t4408 = t1792*t4382;
  t4411 = t155*t2763*t3714;
  t4417 = t4408 + t4411;
  t4156 = t155*t1792*t2763;
  t4397 = -1.*t4382*t3714;
  t4402 = t4156 + t4397;
  t4506 = t1792*t4470;
  t4507 = -1.*t2266*t3714;
  t4533 = t4506 + t4507;
  t4433 = -1.*t1792*t2266;
  t4474 = -1.*t4470*t3714;
  t4494 = t4433 + t4474;
  p_output1[0]=t32*t3792 - 1.*t3924*t3943;
  p_output1[1]=t32*t4402 - 1.*t3943*t4417;
  p_output1[2]=t32*t4494 - 1.*t3943*t4533;
  p_output1[3]=t2100*t3621 + t3178*t3639;
  p_output1[4]=t3639*t4208 + t2100*t4273;
  p_output1[5]=t155*t2100*t3076 + t155*t2151*t3639;
  p_output1[6]=t32*t3924 + t3792*t3943;
  p_output1[7]=t3943*t4402 + t32*t4417;
  p_output1[8]=t3943*t4494 + t32*t4533;
}



void R_FR_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
