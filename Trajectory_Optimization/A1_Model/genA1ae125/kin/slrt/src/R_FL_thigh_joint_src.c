/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:03:16 GMT-05:00
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
  double t5596;
  double t5703;
  double t5765;
  double t5724;
  double t5779;
  double t4331;
  double t5602;
  double t5689;
  double t5698;
  double t5819;
  double t5729;
  double t5780;
  double t5789;
  double t5823;
  double t5826;
  double t5827;
  double t5852;
  double t5855;
  double t5862;
  double t5871;
  double t5877;
  double t5879;
  double t5816;
  double t5834;
  double t5835;
  double t5869;
  double t5883;
  double t5884;
  double t5901;
  double t5905;
  double t5906;
  t5596 = Cos(var1[3]);
  t5703 = Cos(var1[5]);
  t5765 = Sin(var1[3]);
  t5724 = Sin(var1[4]);
  t5779 = Sin(var1[5]);
  t4331 = Cos(var1[10]);
  t5602 = Cos(var1[4]);
  t5689 = Sin(var1[10]);
  t5698 = Cos(var1[9]);
  t5819 = Sin(var1[9]);
  t5729 = t5596*t5703*t5724;
  t5780 = t5765*t5779;
  t5789 = t5729 + t5780;
  t5823 = -1.*t5703*t5765;
  t5826 = t5596*t5724*t5779;
  t5827 = t5823 + t5826;
  t5852 = t5703*t5765*t5724;
  t5855 = -1.*t5596*t5779;
  t5862 = t5852 + t5855;
  t5871 = t5596*t5703;
  t5877 = t5765*t5724*t5779;
  t5879 = t5871 + t5877;
  t5816 = t5698*t5789;
  t5834 = -1.*t5819*t5827;
  t5835 = t5816 + t5834;
  t5869 = t5698*t5862;
  t5883 = -1.*t5819*t5879;
  t5884 = t5869 + t5883;
  t5901 = t5698*t5602*t5703;
  t5905 = -1.*t5602*t5819*t5779;
  t5906 = t5901 + t5905;
  p_output1[0]=t4331*t5596*t5602 - 1.*t5689*t5835;
  p_output1[1]=t4331*t5602*t5765 - 1.*t5689*t5884;
  p_output1[2]=-1.*t4331*t5724 - 1.*t5689*t5906;
  p_output1[3]=t5789*t5819 + t5698*t5827;
  p_output1[4]=t5819*t5862 + t5698*t5879;
  p_output1[5]=t5602*t5698*t5779 + t5602*t5703*t5819;
  p_output1[6]=t5596*t5602*t5689 + t4331*t5835;
  p_output1[7]=t5602*t5689*t5765 + t4331*t5884;
  p_output1[8]=-1.*t5689*t5724 + t4331*t5906;
}



void R_FL_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
