/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:18:08 GMT-05:00
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
  double t1099;
  double t877;
  double t5150;
  double t3644;
  double t6416;
  double t6580;
  double t5779;
  double t7250;
  double t6465;
  double t6917;
  double t7032;
  double t7370;
  double t7516;
  double t7539;
  double t7863;
  double t7878;
  double t7930;
  double t7974;
  double t7983;
  double t8020;
  t1099 = Cos(var1[4]);
  t877 = Cos(var1[3]);
  t5150 = Sin(var1[4]);
  t3644 = Sin(var1[3]);
  t6416 = Cos(var1[5]);
  t6580 = Sin(var1[5]);
  t5779 = Sin(var1[15]);
  t7250 = Cos(var1[15]);
  t6465 = t877*t6416*t5150;
  t6917 = t3644*t6580;
  t7032 = t6465 + t6917;
  t7370 = -1.*t6416*t3644;
  t7516 = t877*t5150*t6580;
  t7539 = t7370 + t7516;
  t7863 = t6416*t3644*t5150;
  t7878 = -1.*t877*t6580;
  t7930 = t7863 + t7878;
  t7974 = t877*t6416;
  t7983 = t3644*t5150*t6580;
  t8020 = t7974 + t7983;
  p_output1[0]=t1099*t877;
  p_output1[1]=t1099*t3644;
  p_output1[2]=-1.*t5150;
  p_output1[3]=t5779*t7032 + t7250*t7539;
  p_output1[4]=t5779*t7930 + t7250*t8020;
  p_output1[5]=t1099*t5779*t6416 + t1099*t6580*t7250;
  p_output1[6]=t7032*t7250 - 1.*t5779*t7539;
  p_output1[7]=t7250*t7930 - 1.*t5779*t8020;
  p_output1[8]=-1.*t1099*t5779*t6580 + t1099*t6416*t7250;
}



void R_RL_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
