/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:50:40 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_FL_hip_joint_src.h"

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
  double t486;
  double t451;
  double t1992;
  double t1640;
  double t4023;
  double t4456;
  double t2302;
  double t7818;
  double t4253;
  double t5358;
  double t5873;
  double t8358;
  double t8397;
  double t8478;
  double t9954;
  double t9972;
  double t9973;
  double t10037;
  double t10039;
  double t10052;
  t486 = Cos(var1[4]);
  t451 = Cos(var1[3]);
  t1992 = Sin(var1[4]);
  t1640 = Sin(var1[3]);
  t4023 = Cos(var1[5]);
  t4456 = Sin(var1[5]);
  t2302 = Sin(var1[9]);
  t7818 = Cos(var1[9]);
  t4253 = t451*t4023*t1992;
  t5358 = t1640*t4456;
  t5873 = t4253 + t5358;
  t8358 = -1.*t4023*t1640;
  t8397 = t451*t1992*t4456;
  t8478 = t8358 + t8397;
  t9954 = t4023*t1640*t1992;
  t9972 = -1.*t451*t4456;
  t9973 = t9954 + t9972;
  t10037 = t451*t4023;
  t10039 = t1640*t1992*t4456;
  t10052 = t10037 + t10039;
  p_output1[0]=t451*t486;
  p_output1[1]=t1640*t486;
  p_output1[2]=-1.*t1992;
  p_output1[3]=t2302*t5873 + t7818*t8478;
  p_output1[4]=t10052*t7818 + t2302*t9973;
  p_output1[5]=t2302*t4023*t486 + t4456*t486*t7818;
  p_output1[6]=t5873*t7818 - 1.*t2302*t8478;
  p_output1[7]=-1.*t10052*t2302 + t7818*t9973;
  p_output1[8]=-1.*t2302*t4456*t486 + t4023*t486*t7818;
}



void R_FL_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
