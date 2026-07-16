/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:18:01 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RR_hip_joint_src.h"

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
  double t192;
  double t176;
  double t2148;
  double t860;
  double t3078;
  double t3936;
  double t2209;
  double t6437;
  double t3675;
  double t5644;
  double t6236;
  double t6444;
  double t6690;
  double t6748;
  double t6793;
  double t6797;
  double t6807;
  double t6832;
  double t6836;
  double t6845;
  t192 = Cos(var1[4]);
  t176 = Cos(var1[3]);
  t2148 = Sin(var1[4]);
  t860 = Sin(var1[3]);
  t3078 = Cos(var1[5]);
  t3936 = Sin(var1[5]);
  t2209 = Sin(var1[12]);
  t6437 = Cos(var1[12]);
  t3675 = t176*t3078*t2148;
  t5644 = t860*t3936;
  t6236 = t3675 + t5644;
  t6444 = -1.*t3078*t860;
  t6690 = t176*t2148*t3936;
  t6748 = t6444 + t6690;
  t6793 = t3078*t860*t2148;
  t6797 = -1.*t176*t3936;
  t6807 = t6793 + t6797;
  t6832 = t176*t3078;
  t6836 = t860*t2148*t3936;
  t6845 = t6832 + t6836;
  p_output1[0]=t176*t192;
  p_output1[1]=t192*t860;
  p_output1[2]=-1.*t2148;
  p_output1[3]=t2209*t6236 + t6437*t6748;
  p_output1[4]=t2209*t6807 + t6437*t6845;
  p_output1[5]=t192*t2209*t3078 + t192*t3936*t6437;
  p_output1[6]=t6236*t6437 - 1.*t2209*t6748;
  p_output1[7]=t6437*t6807 - 1.*t2209*t6845;
  p_output1[8]=-1.*t192*t2209*t3936 + t192*t3078*t6437;
}



void R_RR_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
