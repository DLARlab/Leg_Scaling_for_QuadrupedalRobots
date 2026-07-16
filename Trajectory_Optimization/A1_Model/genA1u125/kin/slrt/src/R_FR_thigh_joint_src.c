/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:20:21 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_FR_thigh_joint_src.h"

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
  double t557;
  double t3433;
  double t4493;
  double t4339;
  double t4647;
  double t1233;
  double t2074;
  double t3343;
  double t5206;
  double t5575;
  double t4838;
  double t5069;
  double t5083;
  double t4377;
  double t4677;
  double t4769;
  double t5754;
  double t5765;
  double t5769;
  double t5665;
  double t5695;
  double t5698;
  double t4779;
  double t5376;
  double t5431;
  double t5705;
  double t5879;
  double t5891;
  double t5938;
  double t5953;
  double t5954;
  t557 = Cos(var1[3]);
  t3433 = Cos(var1[5]);
  t4493 = Sin(var1[3]);
  t4339 = Sin(var1[4]);
  t4647 = Sin(var1[5]);
  t1233 = Cos(var1[4]);
  t2074 = Cos(var1[7]);
  t3343 = Cos(var1[6]);
  t5206 = Sin(var1[6]);
  t5575 = Sin(var1[7]);
  t4838 = -1.*t3433*t4493;
  t5069 = t557*t4339*t4647;
  t5083 = t4838 + t5069;
  t4377 = t557*t3433*t4339;
  t4677 = t4493*t4647;
  t4769 = t4377 + t4677;
  t5754 = t557*t3433;
  t5765 = t4493*t4339*t4647;
  t5769 = t5754 + t5765;
  t5665 = t3433*t4493*t4339;
  t5695 = -1.*t557*t4647;
  t5698 = t5665 + t5695;
  t4779 = t3343*t4769;
  t5376 = -1.*t5083*t5206;
  t5431 = t4779 + t5376;
  t5705 = t3343*t5698;
  t5879 = -1.*t5769*t5206;
  t5891 = t5705 + t5879;
  t5938 = t1233*t3433*t3343;
  t5953 = -1.*t1233*t4647*t5206;
  t5954 = t5938 + t5953;
  p_output1[0]=t1233*t2074*t557 - 1.*t5431*t5575;
  p_output1[1]=t1233*t2074*t4493 - 1.*t5575*t5891;
  p_output1[2]=-1.*t2074*t4339 - 1.*t5575*t5954;
  p_output1[3]=t3343*t5083 + t4769*t5206;
  p_output1[4]=t5206*t5698 + t3343*t5769;
  p_output1[5]=t1233*t3343*t4647 + t1233*t3433*t5206;
  p_output1[6]=t2074*t5431 + t1233*t557*t5575;
  p_output1[7]=t1233*t4493*t5575 + t2074*t5891;
  p_output1[8]=-1.*t4339*t5575 + t2074*t5954;
}



void R_FR_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
