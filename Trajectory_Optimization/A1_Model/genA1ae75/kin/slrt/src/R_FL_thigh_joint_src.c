/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:50:43 GMT-05:00
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
  double t4782;
  double t4957;
  double t5101;
  double t4977;
  double t5102;
  double t4102;
  double t4796;
  double t4948;
  double t4953;
  double t5142;
  double t5018;
  double t5121;
  double t5138;
  double t5144;
  double t5152;
  double t5166;
  double t5262;
  double t5284;
  double t5291;
  double t5321;
  double t5322;
  double t5325;
  double t5140;
  double t5178;
  double t5188;
  double t5320;
  double t5330;
  double t5335;
  double t5352;
  double t5363;
  double t5366;
  t4782 = Cos(var1[3]);
  t4957 = Cos(var1[5]);
  t5101 = Sin(var1[3]);
  t4977 = Sin(var1[4]);
  t5102 = Sin(var1[5]);
  t4102 = Cos(var1[10]);
  t4796 = Cos(var1[4]);
  t4948 = Sin(var1[10]);
  t4953 = Cos(var1[9]);
  t5142 = Sin(var1[9]);
  t5018 = t4782*t4957*t4977;
  t5121 = t5101*t5102;
  t5138 = t5018 + t5121;
  t5144 = -1.*t4957*t5101;
  t5152 = t4782*t4977*t5102;
  t5166 = t5144 + t5152;
  t5262 = t4957*t5101*t4977;
  t5284 = -1.*t4782*t5102;
  t5291 = t5262 + t5284;
  t5321 = t4782*t4957;
  t5322 = t5101*t4977*t5102;
  t5325 = t5321 + t5322;
  t5140 = t4953*t5138;
  t5178 = -1.*t5142*t5166;
  t5188 = t5140 + t5178;
  t5320 = t4953*t5291;
  t5330 = -1.*t5142*t5325;
  t5335 = t5320 + t5330;
  t5352 = t4953*t4796*t4957;
  t5363 = -1.*t4796*t5142*t5102;
  t5366 = t5352 + t5363;
  p_output1[0]=t4102*t4782*t4796 - 1.*t4948*t5188;
  p_output1[1]=t4102*t4796*t5101 - 1.*t4948*t5335;
  p_output1[2]=-1.*t4102*t4977 - 1.*t4948*t5366;
  p_output1[3]=t5138*t5142 + t4953*t5166;
  p_output1[4]=t5142*t5291 + t4953*t5325;
  p_output1[5]=t4796*t4953*t5102 + t4796*t4957*t5142;
  p_output1[6]=t4782*t4796*t4948 + t4102*t5188;
  p_output1[7]=t4796*t4948*t5101 + t4102*t5335;
  p_output1[8]=-1.*t4948*t4977 + t4102*t5366;
}



void R_FL_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
