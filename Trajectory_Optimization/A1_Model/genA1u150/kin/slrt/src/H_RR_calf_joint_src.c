/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:25:55 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RR_calf_joint_src.h"

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
  double t481;
  double t1364;
  double t1897;
  double t1677;
  double t1995;
  double t1078;
  double t626;
  double t672;
  double t1107;
  double t1721;
  double t2054;
  double t2078;
  double t2094;
  double t2145;
  double t2291;
  double t2295;
  double t2363;
  double t2402;
  double t2425;
  double t299;
  double t2820;
  double t3270;
  double t3289;
  double t3354;
  double t3595;
  double t3606;
  double t3636;
  double t3687;
  double t3698;
  double t3717;
  double t4011;
  double t4089;
  double t4101;
  double t1052;
  double t2543;
  double t2737;
  double t2848;
  double t2867;
  double t2936;
  double t3153;
  double t3723;
  double t3766;
  double t3822;
  double t3899;
  double t3940;
  double t4005;
  double t4126;
  double t4147;
  double t4219;
  double t4244;
  double t4265;
  double t4313;
  double t4367;
  double t4426;
  double t5097;
  double t5149;
  double t2770;
  double t2962;
  double t3024;
  double t4529;
  double t4545;
  double t4604;
  double t4789;
  double t4808;
  double t4814;
  double t4822;
  double t4844;
  double t4845;
  double t4866;
  double t4913;
  double t4925;
  double t4936;
  double t4443;
  double t4454;
  double t4468;
  double t4974;
  double t4997;
  double t5267;
  double t5318;
  double t5400;
  double t5436;
  double t5541;
  double t5554;
  double t3775;
  double t3967;
  double t3972;
  double t4641;
  double t4657;
  double t4678;
  double t4470;
  double t4472;
  double t4480;
  double t4148;
  double t4300;
  double t4307;
  double t4749;
  double t4753;
  double t4769;
  t481 = Cos(var1[3]);
  t1364 = Cos(var1[5]);
  t1897 = Sin(var1[3]);
  t1677 = Sin(var1[4]);
  t1995 = Sin(var1[5]);
  t1078 = Cos(var1[13]);
  t626 = Cos(var1[4]);
  t672 = Sin(var1[13]);
  t1107 = Cos(var1[12]);
  t1721 = t481*t1364*t1677;
  t2054 = t1897*t1995;
  t2078 = t1721 + t2054;
  t2094 = t1107*t2078;
  t2145 = Sin(var1[12]);
  t2291 = -1.*t1364*t1897;
  t2295 = t481*t1677*t1995;
  t2363 = t2291 + t2295;
  t2402 = -1.*t2145*t2363;
  t2425 = t2094 + t2402;
  t299 = Sin(var1[14]);
  t2820 = Cos(var1[14]);
  t3270 = t1364*t1897*t1677;
  t3289 = -1.*t481*t1995;
  t3354 = t3270 + t3289;
  t3595 = t1107*t3354;
  t3606 = t481*t1364;
  t3636 = t1897*t1677*t1995;
  t3687 = t3606 + t3636;
  t3698 = -1.*t2145*t3687;
  t3717 = t3595 + t3698;
  t4011 = t1107*t626*t1364;
  t4089 = -1.*t626*t2145*t1995;
  t4101 = t4011 + t4089;
  t1052 = t481*t626*t672;
  t2543 = t1078*t2425;
  t2737 = t1052 + t2543;
  t2848 = t1078*t481*t626;
  t2867 = -1.*t672*t2425;
  t2936 = t2848 + t2867;
  t3153 = t626*t672*t1897;
  t3723 = t1078*t3717;
  t3766 = t3153 + t3723;
  t3822 = t1078*t626*t1897;
  t3899 = -1.*t672*t3717;
  t3940 = t3822 + t3899;
  t4005 = -1.*t672*t1677;
  t4126 = t1078*t4101;
  t4147 = t4005 + t4126;
  t4219 = -1.*t1078*t1677;
  t4244 = -1.*t672*t4101;
  t4265 = t4219 + t4244;
  t4313 = t2145*t2078;
  t4367 = t1107*t2363;
  t4426 = t4313 + t4367;
  t5097 = -1.*t2820;
  t5149 = 1. + t5097;
  t2770 = -1.*t299*t2737;
  t2962 = t2820*t2936;
  t3024 = t2770 + t2962;
  t4529 = t2820*t2737;
  t4545 = t299*t2936;
  t4604 = t4529 + t4545;
  t4789 = -1.*t1078;
  t4808 = 1. + t4789;
  t4814 = -0.183*t4808;
  t4822 = 0. + t4814;
  t4844 = 0.047*t2145;
  t4845 = 0. + t4844;
  t4866 = -1.*t1107;
  t4913 = 1. + t4866;
  t4925 = -0.047*t4913;
  t4936 = 0. + t4925;
  t4443 = t2145*t3354;
  t4454 = t1107*t3687;
  t4468 = t4443 + t4454;
  t4974 = -0.183*t672;
  t4997 = 0. + t4974;
  t5267 = -0.3*t5149;
  t5318 = -0.183*t299;
  t5400 = 0. + t5267 + t5318;
  t5436 = -0.183*t5149;
  t5541 = 0.3*t299;
  t5554 = 0. + t5436 + t5541;
  t3775 = -1.*t299*t3766;
  t3967 = t2820*t3940;
  t3972 = t3775 + t3967;
  t4641 = t2820*t3766;
  t4657 = t299*t3940;
  t4678 = t4641 + t4657;
  t4470 = t626*t1364*t2145;
  t4472 = t1107*t626*t1995;
  t4480 = t4470 + t4472;
  t4148 = -1.*t299*t4147;
  t4300 = t2820*t4265;
  t4307 = t4148 + t4300;
  t4749 = t2820*t4147;
  t4753 = t299*t4265;
  t4769 = t4749 + t4753;
  p_output1[0]=t3024;
  p_output1[1]=t3972;
  p_output1[2]=t4307;
  p_output1[3]=0.;
  p_output1[4]=t4426;
  p_output1[5]=t4468;
  p_output1[6]=t4480;
  p_output1[7]=0.;
  p_output1[8]=t4604;
  p_output1[9]=t4678;
  p_output1[10]=t4769;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.183*t3024 - 0.17458*t4426 - 0.3*t4604 + t2078*t4845 + t2363*t4936 + t2425*t4997 + t2737*t5400 + t2936*t5554 + t481*t4822*t626 + var1[0];
  p_output1[13]=0. - 0.183*t3972 - 0.17458*t4468 - 0.3*t4678 + t3354*t4845 + t3687*t4936 + t3717*t4997 + t3766*t5400 + t3940*t5554 + t1897*t4822*t626 + var1[1];
  p_output1[14]=0. - 0.183*t4307 - 0.17458*t4480 - 0.3*t4769 - 1.*t1677*t4822 + t4101*t4997 + t4147*t5400 + t4265*t5554 + t1364*t4845*t626 + t1995*t4936*t626 + var1[2];
  p_output1[15]=1.;
}



void H_RR_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
