/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:17:56 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_FL_thigh_joint_src.h"

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
  double t589;
  double t2524;
  double t3602;
  double t3004;
  double t5485;
  double t465;
  double t1153;
  double t2234;
  double t2304;
  double t5892;
  double t3170;
  double t5488;
  double t5533;
  double t5894;
  double t6649;
  double t6747;
  double t7001;
  double t7003;
  double t7014;
  double t7079;
  double t7096;
  double t7116;
  double t5671;
  double t6760;
  double t6829;
  double t7050;
  double t7120;
  double t7125;
  double t7167;
  double t7169;
  double t7170;
  t589 = Cos(var1[3]);
  t2524 = Cos(var1[5]);
  t3602 = Sin(var1[3]);
  t3004 = Sin(var1[4]);
  t5485 = Sin(var1[5]);
  t465 = Cos(var1[10]);
  t1153 = Cos(var1[4]);
  t2234 = Sin(var1[10]);
  t2304 = Cos(var1[9]);
  t5892 = Sin(var1[9]);
  t3170 = t589*t2524*t3004;
  t5488 = t3602*t5485;
  t5533 = t3170 + t5488;
  t5894 = -1.*t2524*t3602;
  t6649 = t589*t3004*t5485;
  t6747 = t5894 + t6649;
  t7001 = t2524*t3602*t3004;
  t7003 = -1.*t589*t5485;
  t7014 = t7001 + t7003;
  t7079 = t589*t2524;
  t7096 = t3602*t3004*t5485;
  t7116 = t7079 + t7096;
  t5671 = t2304*t5533;
  t6760 = -1.*t5892*t6747;
  t6829 = t5671 + t6760;
  t7050 = t2304*t7014;
  t7120 = -1.*t5892*t7116;
  t7125 = t7050 + t7120;
  t7167 = t2304*t1153*t2524;
  t7169 = -1.*t1153*t5892*t5485;
  t7170 = t7167 + t7169;
  p_output1[0]=t1153*t465*t589 - 1.*t2234*t6829;
  p_output1[1]=t1153*t3602*t465 - 1.*t2234*t7125;
  p_output1[2]=-1.*t3004*t465 - 1.*t2234*t7170;
  p_output1[3]=t5533*t5892 + t2304*t6747;
  p_output1[4]=t5892*t7014 + t2304*t7116;
  p_output1[5]=t1153*t2304*t5485 + t1153*t2524*t5892;
  p_output1[6]=t1153*t2234*t589 + t465*t6829;
  p_output1[7]=t1153*t2234*t3602 + t465*t7125;
  p_output1[8]=-1.*t2234*t3004 + t465*t7170;
}



void R_FL_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
