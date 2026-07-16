/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:03:12 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FL_hip_joint_src.h"

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
  double t343;
  double t259;
  double t399;
  double t374;
  double t569;
  double t678;
  double t520;
  double t848;
  double t625;
  double t726;
  double t763;
  double t885;
  double t912;
  double t934;
  double t971;
  double t982;
  double t4619;
  double t4809;
  double t4837;
  double t4853;
  double t805;
  double t951;
  double t959;
  double t4964;
  double t4967;
  double t4988;
  double t4989;
  double t4990;
  double t4993;
  double t4791;
  double t4877;
  double t4890;
  double t4898;
  double t4910;
  double t4914;
  t343 = Cos(var1[4]);
  t259 = Cos(var1[3]);
  t399 = Sin(var1[4]);
  t374 = Sin(var1[3]);
  t569 = Cos(var1[5]);
  t678 = Sin(var1[5]);
  t520 = Sin(var1[9]);
  t848 = Cos(var1[9]);
  t625 = t259*t569*t399;
  t726 = t374*t678;
  t763 = t625 + t726;
  t885 = -1.*t569*t374;
  t912 = t259*t399*t678;
  t934 = t885 + t912;
  t971 = t569*t374*t399;
  t982 = -1.*t259*t678;
  t4619 = t971 + t982;
  t4809 = t259*t569;
  t4837 = t374*t399*t678;
  t4853 = t4809 + t4837;
  t805 = t520*t763;
  t951 = t848*t934;
  t959 = t805 + t951;
  t4964 = -0.047*t520;
  t4967 = 0. + t4964;
  t4988 = -1.*t848;
  t4989 = 1. + t4988;
  t4990 = 0.047*t4989;
  t4993 = 0. + t4990;
  t4791 = t520*t4619;
  t4877 = t848*t4853;
  t4890 = t4791 + t4877;
  t4898 = t343*t569*t520;
  t4910 = t848*t343*t678;
  t4914 = t4898 + t4910;
  p_output1[0]=t259*t343;
  p_output1[1]=t343*t374;
  p_output1[2]=-1.*t399;
  p_output1[3]=0.;
  p_output1[4]=t959;
  p_output1[5]=t4890;
  p_output1[6]=t4914;
  p_output1[7]=0.;
  p_output1[8]=t763*t848 - 1.*t520*t934;
  p_output1[9]=-1.*t4853*t520 + t4619*t848;
  p_output1[10]=-1.*t343*t520*t678 + t343*t569*t848;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.183*t259*t343 + t4967*t763 + t4993*t934 + 0.047*t959 + var1[0];
  p_output1[13]=0. + 0.183*t343*t374 + 0.047*t4890 + t4619*t4967 + t4853*t4993 + var1[1];
  p_output1[14]=0. - 0.183*t399 + 0.047*t4914 + t343*t4967*t569 + t343*t4993*t678 + var1[2];
  p_output1[15]=1.;
}



void H_FL_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
