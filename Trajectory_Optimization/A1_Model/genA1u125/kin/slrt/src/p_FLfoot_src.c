/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:20:48 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FLfoot_src.h"

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
  double t1419;
  double t3100;
  double t3392;
  double t3101;
  double t3426;
  double t2406;
  double t3232;
  double t3587;
  double t3650;
  double t3898;
  double t4271;
  double t4353;
  double t4411;
  double t1980;
  double t5311;
  double t152;
  double t5503;
  double t5580;
  double t5673;
  double t5758;
  double t5766;
  double t5834;
  double t5925;
  double t6039;
  double t6045;
  double t6058;
  double t6166;
  double t6167;
  double t6177;
  double t166;
  double t187;
  double t803;
  double t806;
  double t2851;
  double t3033;
  double t4115;
  double t4170;
  double t4172;
  double t4186;
  double t6347;
  double t6364;
  double t6368;
  double t6379;
  double t6381;
  double t6386;
  double t5318;
  double t5379;
  double t5842;
  double t5946;
  double t5988;
  double t6472;
  double t6478;
  double t6485;
  double t6078;
  double t6103;
  double t6141;
  double t6491;
  double t6497;
  double t6508;
  double t6514;
  double t6524;
  double t6553;
  double t6825;
  double t6833;
  double t6858;
  double t6939;
  double t6944;
  double t6949;
  double t6981;
  double t6982;
  double t6986;
  t1419 = Cos(var1[3]);
  t3100 = Cos(var1[5]);
  t3392 = Sin(var1[3]);
  t3101 = Sin(var1[4]);
  t3426 = Sin(var1[5]);
  t2406 = Sin(var1[9]);
  t3232 = t1419*t3100*t3101;
  t3587 = t3392*t3426;
  t3650 = t3232 + t3587;
  t3898 = Cos(var1[9]);
  t4271 = -1.*t3100*t3392;
  t4353 = t1419*t3101*t3426;
  t4411 = t4271 + t4353;
  t1980 = Cos(var1[4]);
  t5311 = Sin(var1[10]);
  t152 = Cos(var1[10]);
  t5503 = t3898*t3650;
  t5580 = -1.*t2406*t4411;
  t5673 = t5503 + t5580;
  t5758 = Cos(var1[11]);
  t5766 = -1.*t5758;
  t5834 = 1. + t5766;
  t5925 = Sin(var1[11]);
  t6039 = t1419*t1980*t5311;
  t6045 = t152*t5673;
  t6058 = t6039 + t6045;
  t6166 = t152*t1419*t1980;
  t6167 = -1.*t5311*t5673;
  t6177 = t6166 + t6167;
  t166 = -1.*t152;
  t187 = 1. + t166;
  t803 = 0.183*t187;
  t806 = 0. + t803;
  t2851 = -0.047*t2406;
  t3033 = 0. + t2851;
  t4115 = -1.*t3898;
  t4170 = 1. + t4115;
  t4172 = 0.047*t4170;
  t4186 = 0. + t4172;
  t6347 = t3100*t3392*t3101;
  t6364 = -1.*t1419*t3426;
  t6368 = t6347 + t6364;
  t6379 = t1419*t3100;
  t6381 = t3392*t3101*t3426;
  t6386 = t6379 + t6381;
  t5318 = 0.183*t5311;
  t5379 = 0. + t5318;
  t5842 = -0.25*t5834;
  t5946 = 0.183*t5925;
  t5988 = 0. + t5842 + t5946;
  t6472 = t3898*t6368;
  t6478 = -1.*t2406*t6386;
  t6485 = t6472 + t6478;
  t6078 = 0.183*t5834;
  t6103 = 0.25*t5925;
  t6141 = 0. + t6078 + t6103;
  t6491 = t1980*t5311*t3392;
  t6497 = t152*t6485;
  t6508 = t6491 + t6497;
  t6514 = t152*t1980*t3392;
  t6524 = -1.*t5311*t6485;
  t6553 = t6514 + t6524;
  t6825 = t3898*t1980*t3100;
  t6833 = -1.*t1980*t2406*t3426;
  t6858 = t6825 + t6833;
  t6939 = -1.*t5311*t3101;
  t6944 = t152*t6858;
  t6949 = t6939 + t6944;
  t6981 = -1.*t152*t3101;
  t6982 = -1.*t5311*t6858;
  t6986 = t6981 + t6982;
  p_output1[0]=0. + t3033*t3650 + t4186*t4411 + 0.15331*(t2406*t3650 + t3898*t4411) + t5379*t5673 + t5988*t6058 + t6141*t6177 + 0.183*(-1.*t5925*t6058 + t5758*t6177) - 0.5*(t5758*t6058 + t5925*t6177) + t1419*t1980*t806 + var1[0];
  p_output1[1]=0. + t3033*t6368 + t4186*t6386 + 0.15331*(t2406*t6368 + t3898*t6386) + t5379*t6485 + t5988*t6508 + t6141*t6553 + 0.183*(-1.*t5925*t6508 + t5758*t6553) - 0.5*(t5758*t6508 + t5925*t6553) + t1980*t3392*t806 + var1[1];
  p_output1[2]=0. + t1980*t3033*t3100 + 0.15331*(t1980*t2406*t3100 + t1980*t3426*t3898) + t1980*t3426*t4186 + t5379*t6858 + t5988*t6949 + t6141*t6986 + 0.183*(-1.*t5925*t6949 + t5758*t6986) - 0.5*(t5758*t6949 + t5925*t6986) - 1.*t3101*t806 + var1[2];
}



void p_FLfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
