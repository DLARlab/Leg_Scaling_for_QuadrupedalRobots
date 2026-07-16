/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:10:01 GMT-05:00
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
  double t5554;
  double t5531;
  double t5692;
  double t5656;
  double t5731;
  double t5733;
  double t5730;
  double t5759;
  double t5732;
  double t5748;
  double t5757;
  double t5768;
  double t5775;
  double t5777;
  double t5810;
  double t5813;
  double t5817;
  double t5826;
  double t5827;
  double t5833;
  t5554 = Cos(var1[4]);
  t5531 = Cos(var1[3]);
  t5692 = Sin(var1[4]);
  t5656 = Sin(var1[3]);
  t5731 = Cos(var1[5]);
  t5733 = Sin(var1[5]);
  t5730 = Sin(var1[9]);
  t5759 = Cos(var1[9]);
  t5732 = t5531*t5731*t5692;
  t5748 = t5656*t5733;
  t5757 = t5732 + t5748;
  t5768 = -1.*t5731*t5656;
  t5775 = t5531*t5692*t5733;
  t5777 = t5768 + t5775;
  t5810 = t5731*t5656*t5692;
  t5813 = -1.*t5531*t5733;
  t5817 = t5810 + t5813;
  t5826 = t5531*t5731;
  t5827 = t5656*t5692*t5733;
  t5833 = t5826 + t5827;
  p_output1[0]=t5531*t5554;
  p_output1[1]=t5554*t5656;
  p_output1[2]=-1.*t5692;
  p_output1[3]=t5730*t5757 + t5759*t5777;
  p_output1[4]=t5730*t5817 + t5759*t5833;
  p_output1[5]=t5554*t5730*t5731 + t5554*t5733*t5759;
  p_output1[6]=t5757*t5759 - 1.*t5730*t5777;
  p_output1[7]=t5759*t5817 - 1.*t5730*t5833;
  p_output1[8]=-1.*t5554*t5730*t5733 + t5554*t5731*t5759;
}



void R_FL_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
