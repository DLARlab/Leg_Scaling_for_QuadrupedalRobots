/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:18:00 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RR_hip_joint_src.h"

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
  double t1747;
  double t4749;
  double t3833;
  double t4612;
  double t5011;
  double t1789;
  double t4613;
  double t5355;
  double t5398;
  double t6280;
  double t6452;
  double t6458;
  double t6472;
  double t578;
  double t2119;
  double t2158;
  double t6286;
  double t6288;
  double t6400;
  double t6446;
  double t6520;
  double t6528;
  double t6630;
  double t6681;
  double t6690;
  double t6691;
  double t7208;
  double t7210;
  double t7231;
  double t7458;
  double t7469;
  double t7486;
  double t7317;
  double t7572;
  double t7842;
  double t7843;
  double t7846;
  double t7765;
  double t7778;
  double t7790;
  double t7791;
  t1747 = Sin(var1[3]);
  t4749 = Cos(var1[3]);
  t3833 = Cos(var1[5]);
  t4612 = Sin(var1[4]);
  t5011 = Sin(var1[5]);
  t1789 = Sin(var1[12]);
  t4613 = -1.*t3833*t1747*t4612;
  t5355 = t4749*t5011;
  t5398 = t4613 + t5355;
  t6280 = Cos(var1[12]);
  t6452 = -1.*t4749*t3833;
  t6458 = -1.*t1747*t4612*t5011;
  t6472 = t6452 + t6458;
  t578 = Cos(var1[4]);
  t2119 = 0.047*t1789;
  t2158 = 0. + t2119;
  t6286 = -1.*t6280;
  t6288 = 1. + t6286;
  t6400 = -0.047*t6288;
  t6446 = 0. + t6400;
  t6520 = t4749*t3833*t4612;
  t6528 = t1747*t5011;
  t6630 = t6520 + t6528;
  t6681 = -1.*t3833*t1747;
  t6690 = t4749*t4612*t5011;
  t6691 = t6681 + t6690;
  t7208 = t3833*t1747;
  t7210 = -1.*t4749*t4612*t5011;
  t7231 = t7208 + t7210;
  t7458 = t3833*t1747*t4612;
  t7469 = -1.*t4749*t5011;
  t7486 = t7458 + t7469;
  t7317 = t6280*t6630;
  t7572 = t6280*t7486;
  t7842 = t4749*t3833;
  t7843 = t1747*t4612*t5011;
  t7846 = t7842 + t7843;
  t7765 = t6280*t578*t3833;
  t7778 = -1.*t578*t1789*t5011;
  t7790 = t7765 + t7778;
  t7791 = -0.047*t7790;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t2158*t5398 + 0.183*t1747*t578 + t6446*t6472 - 0.047*(t1789*t5398 + t6280*t6472);
  p_output1[10]=-0.183*t4749*t578 + t2158*t6630 + t6446*t6691 - 0.047*(t1789*t6630 + t6280*t6691);
  p_output1[11]=0;
  p_output1[12]=0.183*t4612*t4749 + t2158*t3833*t4749*t578 - 0.047*(t1789*t3833*t4749*t578 + t4749*t5011*t578*t6280) + t4749*t5011*t578*t6446;
  p_output1[13]=0.183*t1747*t4612 + t1747*t2158*t3833*t578 - 0.047*(t1747*t1789*t3833*t578 + t1747*t5011*t578*t6280) + t1747*t5011*t578*t6446;
  p_output1[14]=-1.*t2158*t3833*t4612 + 0.183*t578 - 0.047*(-1.*t1789*t3833*t4612 - 1.*t4612*t5011*t6280) - 1.*t4612*t5011*t6446;
  p_output1[15]=t6446*t6630 + t2158*t7231 - 0.047*(t1789*t7231 + t7317);
  p_output1[16]=t2158*t6472 + t6446*t7486 - 0.047*(t1789*t6472 + t7572);
  p_output1[17]=-1.*t2158*t5011*t578 + t3833*t578*t6446 + t7791;
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
  p_output1[36]=0.047*t6280*t6630 - 0.047*t1789*t6691 - 0.047*(-1.*t1789*t6691 + t7317);
  p_output1[37]=0.047*t6280*t7486 - 0.047*t1789*t7846 - 0.047*(t7572 - 1.*t1789*t7846);
  p_output1[38]=-0.047*t1789*t5011*t578 + 0.047*t3833*t578*t6280 + t7791;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
}



void Jp_RR_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
