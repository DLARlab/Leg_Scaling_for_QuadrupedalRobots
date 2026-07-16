/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:17:46 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FR_hip_joint_src.h"

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
  double t885;
  double t1196;
  double t752;
  double t3225;
  double t3603;
  double t4932;
  double t3446;
  double t5580;
  double t5441;
  double t5456;
  double t5558;
  double t4266;
  double t5026;
  double t5109;
  double t5983;
  double t5992;
  double t5997;
  double t5956;
  double t5958;
  double t5978;
  double t5117;
  double t5657;
  double t5869;
  double t6029;
  double t6030;
  double t6032;
  double t6033;
  double t6035;
  double t6036;
  double t5982;
  double t5998;
  double t5999;
  double t6001;
  double t6002;
  double t6003;
  t885 = Cos(var1[4]);
  t1196 = Sin(var1[3]);
  t752 = Cos(var1[3]);
  t3225 = Sin(var1[4]);
  t3603 = Cos(var1[5]);
  t4932 = Sin(var1[5]);
  t3446 = Cos(var1[6]);
  t5580 = Sin(var1[6]);
  t5441 = t752*t3603*t3225;
  t5456 = t1196*t4932;
  t5558 = t5441 + t5456;
  t4266 = -1.*t3603*t1196;
  t5026 = t752*t3225*t4932;
  t5109 = t4266 + t5026;
  t5983 = t3603*t1196*t3225;
  t5992 = -1.*t752*t4932;
  t5997 = t5983 + t5992;
  t5956 = t752*t3603;
  t5958 = t1196*t3225*t4932;
  t5978 = t5956 + t5958;
  t5117 = t3446*t5109;
  t5657 = t5558*t5580;
  t5869 = t5117 + t5657;
  t6029 = -1.*t3446;
  t6030 = 1. + t6029;
  t6032 = -0.047*t6030;
  t6033 = 0. + t6032;
  t6035 = 0.047*t5580;
  t6036 = 0. + t6035;
  t5982 = t3446*t5978;
  t5998 = t5997*t5580;
  t5999 = t5982 + t5998;
  t6001 = t885*t3446*t4932;
  t6002 = t885*t3603*t5580;
  t6003 = t6001 + t6002;
  p_output1[0]=t752*t885;
  p_output1[1]=t1196*t885;
  p_output1[2]=-1.*t3225;
  p_output1[3]=0.;
  p_output1[4]=t5869;
  p_output1[5]=t5999;
  p_output1[6]=t6003;
  p_output1[7]=0.;
  p_output1[8]=t3446*t5558 - 1.*t5109*t5580;
  p_output1[9]=-1.*t5580*t5978 + t3446*t5997;
  p_output1[10]=t3446*t3603*t885 - 1.*t4932*t5580*t885;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.047*t5869 + t5109*t6033 + t5558*t6036 + 0.183*t752*t885 + var1[0];
  p_output1[13]=0. - 0.047*t5999 + t5978*t6033 + t5997*t6036 + 0.183*t1196*t885 + var1[1];
  p_output1[14]=0. - 0.183*t3225 - 0.047*t6003 + t4932*t6033*t885 + t3603*t6036*t885 + var1[2];
  p_output1[15]=1.;
}



void H_FR_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
