/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:25:46 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FL_calf_joint_src.h"

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
  double t982;
  double t2521;
  double t2619;
  double t2535;
  double t2716;
  double t1690;
  double t2574;
  double t2751;
  double t2812;
  double t2849;
  double t3390;
  double t3447;
  double t3548;
  double t1216;
  double t4048;
  double t92;
  double t4108;
  double t4133;
  double t4317;
  double t4539;
  double t4688;
  double t4710;
  double t4740;
  double t4890;
  double t4995;
  double t4996;
  double t5294;
  double t5433;
  double t5469;
  double t451;
  double t684;
  double t713;
  double t740;
  double t1726;
  double t2087;
  double t2877;
  double t3001;
  double t3082;
  double t3205;
  double t5800;
  double t5820;
  double t5923;
  double t5982;
  double t6005;
  double t6007;
  double t4077;
  double t4080;
  double t4728;
  double t4766;
  double t4879;
  double t6322;
  double t6343;
  double t6427;
  double t5076;
  double t5171;
  double t5207;
  double t6513;
  double t6577;
  double t6652;
  double t6734;
  double t6741;
  double t6749;
  double t7350;
  double t7424;
  double t7470;
  double t7519;
  double t7527;
  double t7546;
  double t7555;
  double t7557;
  double t7660;
  t982 = Cos(var1[3]);
  t2521 = Cos(var1[5]);
  t2619 = Sin(var1[3]);
  t2535 = Sin(var1[4]);
  t2716 = Sin(var1[5]);
  t1690 = Sin(var1[9]);
  t2574 = t982*t2521*t2535;
  t2751 = t2619*t2716;
  t2812 = t2574 + t2751;
  t2849 = Cos(var1[9]);
  t3390 = -1.*t2521*t2619;
  t3447 = t982*t2535*t2716;
  t3548 = t3390 + t3447;
  t1216 = Cos(var1[4]);
  t4048 = Sin(var1[10]);
  t92 = Cos(var1[10]);
  t4108 = t2849*t2812;
  t4133 = -1.*t1690*t3548;
  t4317 = t4108 + t4133;
  t4539 = Cos(var1[11]);
  t4688 = -1.*t4539;
  t4710 = 1. + t4688;
  t4740 = Sin(var1[11]);
  t4890 = t982*t1216*t4048;
  t4995 = t92*t4317;
  t4996 = t4890 + t4995;
  t5294 = t92*t982*t1216;
  t5433 = -1.*t4048*t4317;
  t5469 = t5294 + t5433;
  t451 = -1.*t92;
  t684 = 1. + t451;
  t713 = 0.183*t684;
  t740 = 0. + t713;
  t1726 = -0.047*t1690;
  t2087 = 0. + t1726;
  t2877 = -1.*t2849;
  t3001 = 1. + t2877;
  t3082 = 0.047*t3001;
  t3205 = 0. + t3082;
  t5800 = t2521*t2619*t2535;
  t5820 = -1.*t982*t2716;
  t5923 = t5800 + t5820;
  t5982 = t982*t2521;
  t6005 = t2619*t2535*t2716;
  t6007 = t5982 + t6005;
  t4077 = 0.183*t4048;
  t4080 = 0. + t4077;
  t4728 = -0.3*t4710;
  t4766 = 0.183*t4740;
  t4879 = 0. + t4728 + t4766;
  t6322 = t2849*t5923;
  t6343 = -1.*t1690*t6007;
  t6427 = t6322 + t6343;
  t5076 = 0.183*t4710;
  t5171 = 0.3*t4740;
  t5207 = 0. + t5076 + t5171;
  t6513 = t1216*t4048*t2619;
  t6577 = t92*t6427;
  t6652 = t6513 + t6577;
  t6734 = t92*t1216*t2619;
  t6741 = -1.*t4048*t6427;
  t6749 = t6734 + t6741;
  t7350 = t2849*t1216*t2521;
  t7424 = -1.*t1216*t1690*t2716;
  t7470 = t7350 + t7424;
  t7519 = -1.*t4048*t2535;
  t7527 = t92*t7470;
  t7546 = t7519 + t7527;
  t7555 = -1.*t92*t2535;
  t7557 = -1.*t4048*t7470;
  t7660 = t7555 + t7557;
  p_output1[0]=0. + t2087*t2812 + t3205*t3548 + 0.17458*(t1690*t2812 + t2849*t3548) + t4080*t4317 + t4879*t4996 + t5207*t5469 + 0.183*(-1.*t4740*t4996 + t4539*t5469) - 0.3*(t4539*t4996 + t4740*t5469) + t1216*t740*t982 + var1[0];
  p_output1[1]=0. + t2087*t5923 + t3205*t6007 + 0.17458*(t1690*t5923 + t2849*t6007) + t4080*t6427 + t4879*t6652 + t5207*t6749 + 0.183*(-1.*t4740*t6652 + t4539*t6749) - 0.3*(t4539*t6652 + t4740*t6749) + t1216*t2619*t740 + var1[1];
  p_output1[2]=0. + t1216*t2087*t2521 + 0.17458*(t1216*t1690*t2521 + t1216*t2716*t2849) + t1216*t2716*t3205 - 1.*t2535*t740 + t4080*t7470 + t4879*t7546 + t5207*t7660 + 0.183*(-1.*t4740*t7546 + t4539*t7660) - 0.3*(t4539*t7546 + t4740*t7660) + var1[2];
}



void p_FL_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
