/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:50:55 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RL_hip_joint_src.h"

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
  double t4138;
  double t2437;
  double t7132;
  double t6555;
  double t7428;
  double t7509;
  double t7329;
  double t7565;
  double t7496;
  double t7549;
  double t7562;
  double t7590;
  double t7591;
  double t7609;
  double t7632;
  double t7633;
  double t7637;
  double t7670;
  double t7770;
  double t7823;
  t4138 = Cos(var1[4]);
  t2437 = Cos(var1[3]);
  t7132 = Sin(var1[4]);
  t6555 = Sin(var1[3]);
  t7428 = Cos(var1[5]);
  t7509 = Sin(var1[5]);
  t7329 = Sin(var1[15]);
  t7565 = Cos(var1[15]);
  t7496 = t2437*t7428*t7132;
  t7549 = t6555*t7509;
  t7562 = t7496 + t7549;
  t7590 = -1.*t7428*t6555;
  t7591 = t2437*t7132*t7509;
  t7609 = t7590 + t7591;
  t7632 = t7428*t6555*t7132;
  t7633 = -1.*t2437*t7509;
  t7637 = t7632 + t7633;
  t7670 = t2437*t7428;
  t7770 = t6555*t7132*t7509;
  t7823 = t7670 + t7770;
  p_output1[0]=t2437*t4138;
  p_output1[1]=t4138*t6555;
  p_output1[2]=-1.*t7132;
  p_output1[3]=t7329*t7562 + t7565*t7609;
  p_output1[4]=t7329*t7637 + t7565*t7823;
  p_output1[5]=t4138*t7329*t7428 + t4138*t7509*t7565;
  p_output1[6]=t7562*t7565 - 1.*t7329*t7609;
  p_output1[7]=t7565*t7637 - 1.*t7329*t7823;
  p_output1[8]=-1.*t4138*t7329*t7509 + t4138*t7428*t7565;
}



void R_RL_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
