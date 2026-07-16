/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:17:49 GMT-05:00
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
  double t652;
  double t2344;
  double t3022;
  double t2988;
  double t3785;
  double t1092;
  double t1925;
  double t2189;
  double t5887;
  double t5928;
  double t5855;
  double t5857;
  double t5879;
  double t2989;
  double t5634;
  double t5743;
  double t5946;
  double t5947;
  double t5949;
  double t5940;
  double t5943;
  double t5944;
  double t5773;
  double t5891;
  double t5925;
  double t5945;
  double t5950;
  double t5952;
  double t5963;
  double t5966;
  double t5967;
  t652 = Cos(var1[3]);
  t2344 = Cos(var1[5]);
  t3022 = Sin(var1[3]);
  t2988 = Sin(var1[4]);
  t3785 = Sin(var1[5]);
  t1092 = Cos(var1[4]);
  t1925 = Cos(var1[7]);
  t2189 = Cos(var1[6]);
  t5887 = Sin(var1[6]);
  t5928 = Sin(var1[7]);
  t5855 = -1.*t2344*t3022;
  t5857 = t652*t2988*t3785;
  t5879 = t5855 + t5857;
  t2989 = t652*t2344*t2988;
  t5634 = t3022*t3785;
  t5743 = t2989 + t5634;
  t5946 = t652*t2344;
  t5947 = t3022*t2988*t3785;
  t5949 = t5946 + t5947;
  t5940 = t2344*t3022*t2988;
  t5943 = -1.*t652*t3785;
  t5944 = t5940 + t5943;
  t5773 = t2189*t5743;
  t5891 = -1.*t5879*t5887;
  t5925 = t5773 + t5891;
  t5945 = t2189*t5944;
  t5950 = -1.*t5949*t5887;
  t5952 = t5945 + t5950;
  t5963 = t1092*t2344*t2189;
  t5966 = -1.*t1092*t3785*t5887;
  t5967 = t5963 + t5966;
  p_output1[0]=-1.*t5925*t5928 + t1092*t1925*t652;
  p_output1[1]=t1092*t1925*t3022 - 1.*t5928*t5952;
  p_output1[2]=-1.*t1925*t2988 - 1.*t5928*t5967;
  p_output1[3]=t2189*t5879 + t5743*t5887;
  p_output1[4]=t5887*t5944 + t2189*t5949;
  p_output1[5]=t1092*t2189*t3785 + t1092*t2344*t5887;
  p_output1[6]=t1925*t5925 + t1092*t5928*t652;
  p_output1[7]=t1092*t3022*t5928 + t1925*t5952;
  p_output1[8]=-1.*t2988*t5928 + t1925*t5967;
}



void R_FR_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
