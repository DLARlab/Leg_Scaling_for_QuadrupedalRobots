/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:25:55 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RR_calf_joint_src.h"

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
  double t2455;
  double t4464;
  double t4940;
  double t4471;
  double t4974;
  double t4265;
  double t3940;
  double t3982;
  double t4300;
  double t4917;
  double t5404;
  double t5511;
  double t5561;
  double t5622;
  double t5646;
  double t5663;
  double t5684;
  double t5686;
  double t5736;
  double t2447;
  double t5903;
  double t6097;
  double t6106;
  double t6120;
  double t6156;
  double t6186;
  double t6209;
  double t6217;
  double t6238;
  double t6260;
  double t6413;
  double t6432;
  double t6446;
  double t4139;
  double t5856;
  double t5867;
  double t5917;
  double t5961;
  double t5967;
  double t6034;
  double t6307;
  double t6324;
  double t6356;
  double t6378;
  double t6385;
  double t6402;
  double t6455;
  double t6471;
  double t6479;
  double t6494;
  double t6524;
  t2455 = Cos(var1[3]);
  t4464 = Cos(var1[5]);
  t4940 = Sin(var1[3]);
  t4471 = Sin(var1[4]);
  t4974 = Sin(var1[5]);
  t4265 = Cos(var1[13]);
  t3940 = Cos(var1[4]);
  t3982 = Sin(var1[13]);
  t4300 = Cos(var1[12]);
  t4917 = t2455*t4464*t4471;
  t5404 = t4940*t4974;
  t5511 = t4917 + t5404;
  t5561 = t4300*t5511;
  t5622 = Sin(var1[12]);
  t5646 = -1.*t4464*t4940;
  t5663 = t2455*t4471*t4974;
  t5684 = t5646 + t5663;
  t5686 = -1.*t5622*t5684;
  t5736 = t5561 + t5686;
  t2447 = Sin(var1[14]);
  t5903 = Cos(var1[14]);
  t6097 = t4464*t4940*t4471;
  t6106 = -1.*t2455*t4974;
  t6120 = t6097 + t6106;
  t6156 = t4300*t6120;
  t6186 = t2455*t4464;
  t6209 = t4940*t4471*t4974;
  t6217 = t6186 + t6209;
  t6238 = -1.*t5622*t6217;
  t6260 = t6156 + t6238;
  t6413 = t4300*t3940*t4464;
  t6432 = -1.*t3940*t5622*t4974;
  t6446 = t6413 + t6432;
  t4139 = t2455*t3940*t3982;
  t5856 = t4265*t5736;
  t5867 = t4139 + t5856;
  t5917 = t4265*t2455*t3940;
  t5961 = -1.*t3982*t5736;
  t5967 = t5917 + t5961;
  t6034 = t3940*t3982*t4940;
  t6307 = t4265*t6260;
  t6324 = t6034 + t6307;
  t6356 = t4265*t3940*t4940;
  t6378 = -1.*t3982*t6260;
  t6385 = t6356 + t6378;
  t6402 = -1.*t3982*t4471;
  t6455 = t4265*t6446;
  t6471 = t6402 + t6455;
  t6479 = -1.*t4265*t4471;
  t6494 = -1.*t3982*t6446;
  t6524 = t6479 + t6494;
  p_output1[0]=-1.*t2447*t5867 + t5903*t5967;
  p_output1[1]=-1.*t2447*t6324 + t5903*t6385;
  p_output1[2]=-1.*t2447*t6471 + t5903*t6524;
  p_output1[3]=t5511*t5622 + t4300*t5684;
  p_output1[4]=t5622*t6120 + t4300*t6217;
  p_output1[5]=t3940*t4300*t4974 + t3940*t4464*t5622;
  p_output1[6]=t5867*t5903 + t2447*t5967;
  p_output1[7]=t5903*t6324 + t2447*t6385;
  p_output1[8]=t5903*t6471 + t2447*t6524;
}



void R_RR_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
