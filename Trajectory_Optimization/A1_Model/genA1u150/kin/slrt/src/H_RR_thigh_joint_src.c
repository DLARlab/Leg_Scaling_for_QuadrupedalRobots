/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:25:52 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RR_thigh_joint_src.h"

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
  double t500;
  double t1747;
  double t2049;
  double t1832;
  double t2163;
  double t77;
  double t506;
  double t623;
  double t1573;
  double t2937;
  double t1990;
  double t2243;
  double t2732;
  double t3047;
  double t3057;
  double t3169;
  double t3657;
  double t3889;
  double t3980;
  double t4065;
  double t4100;
  double t4200;
  double t2923;
  double t3181;
  double t3251;
  double t4028;
  double t4333;
  double t4378;
  double t4560;
  double t4610;
  double t4648;
  double t4805;
  double t4909;
  double t4948;
  double t611;
  double t3374;
  double t3520;
  double t5556;
  double t5613;
  double t5616;
  double t5621;
  double t5692;
  double t5721;
  double t5804;
  double t5807;
  double t5810;
  double t5822;
  double t5065;
  double t5092;
  double t5110;
  double t6334;
  double t6382;
  double t3652;
  double t4393;
  double t4482;
  double t5133;
  double t5222;
  double t5272;
  double t4546;
  double t4649;
  double t4655;
  t500 = Cos(var1[3]);
  t1747 = Cos(var1[5]);
  t2049 = Sin(var1[3]);
  t1832 = Sin(var1[4]);
  t2163 = Sin(var1[5]);
  t77 = Cos(var1[13]);
  t506 = Cos(var1[4]);
  t623 = Sin(var1[13]);
  t1573 = Cos(var1[12]);
  t2937 = Sin(var1[12]);
  t1990 = t500*t1747*t1832;
  t2243 = t2049*t2163;
  t2732 = t1990 + t2243;
  t3047 = -1.*t1747*t2049;
  t3057 = t500*t1832*t2163;
  t3169 = t3047 + t3057;
  t3657 = t1747*t2049*t1832;
  t3889 = -1.*t500*t2163;
  t3980 = t3657 + t3889;
  t4065 = t500*t1747;
  t4100 = t2049*t1832*t2163;
  t4200 = t4065 + t4100;
  t2923 = t1573*t2732;
  t3181 = -1.*t2937*t3169;
  t3251 = t2923 + t3181;
  t4028 = t1573*t3980;
  t4333 = -1.*t2937*t4200;
  t4378 = t4028 + t4333;
  t4560 = t1573*t506*t1747;
  t4610 = -1.*t506*t2937*t2163;
  t4648 = t4560 + t4610;
  t4805 = t2937*t2732;
  t4909 = t1573*t3169;
  t4948 = t4805 + t4909;
  t611 = t77*t500*t506;
  t3374 = -1.*t623*t3251;
  t3520 = t611 + t3374;
  t5556 = -1.*t77;
  t5613 = 1. + t5556;
  t5616 = -0.183*t5613;
  t5621 = 0. + t5616;
  t5692 = 0.047*t2937;
  t5721 = 0. + t5692;
  t5804 = -1.*t1573;
  t5807 = 1. + t5804;
  t5810 = -0.047*t5807;
  t5822 = 0. + t5810;
  t5065 = t2937*t3980;
  t5092 = t1573*t4200;
  t5110 = t5065 + t5092;
  t6334 = -0.183*t623;
  t6382 = 0. + t6334;
  t3652 = t77*t506*t2049;
  t4393 = -1.*t623*t4378;
  t4482 = t3652 + t4393;
  t5133 = t506*t1747*t2937;
  t5222 = t1573*t506*t2163;
  t5272 = t5133 + t5222;
  t4546 = -1.*t77*t1832;
  t4649 = -1.*t623*t4648;
  t4655 = t4546 + t4649;
  p_output1[0]=t3520;
  p_output1[1]=t4482;
  p_output1[2]=t4655;
  p_output1[3]=0.;
  p_output1[4]=t4948;
  p_output1[5]=t5110;
  p_output1[6]=t5272;
  p_output1[7]=0.;
  p_output1[8]=t500*t506*t623 + t3251*t77;
  p_output1[9]=t2049*t506*t623 + t4378*t77;
  p_output1[10]=-1.*t1832*t623 + t4648*t77;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.183*t3520 - 0.17458*t4948 + t500*t506*t5621 + t2732*t5721 + t3169*t5822 + t3251*t6382 + var1[0];
  p_output1[13]=0. - 0.183*t4482 - 0.17458*t5110 + t2049*t506*t5621 + t3980*t5721 + t4200*t5822 + t4378*t6382 + var1[1];
  p_output1[14]=0. - 0.183*t4655 - 0.17458*t5272 - 1.*t1832*t5621 + t1747*t506*t5721 + t2163*t506*t5822 + t4648*t6382 + var1[2];
  p_output1[15]=1.;
}



void H_RR_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
