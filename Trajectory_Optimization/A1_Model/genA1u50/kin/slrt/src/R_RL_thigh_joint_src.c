/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:13:02 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RL_thigh_joint_src.h"

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
  double t4509;
  double t4610;
  double t4621;
  double t4611;
  double t4626;
  double t152;
  double t4589;
  double t4591;
  double t4609;
  double t4630;
  double t4620;
  double t4627;
  double t4628;
  double t4631;
  double t4632;
  double t4633;
  double t4639;
  double t4640;
  double t4641;
  double t4643;
  double t4644;
  double t4645;
  double t4629;
  double t4634;
  double t4635;
  double t4642;
  double t4646;
  double t4647;
  double t4651;
  double t4652;
  double t4653;
  t4509 = Cos(var1[3]);
  t4610 = Cos(var1[5]);
  t4621 = Sin(var1[3]);
  t4611 = Sin(var1[4]);
  t4626 = Sin(var1[5]);
  t152 = Cos(var1[16]);
  t4589 = Cos(var1[4]);
  t4591 = Sin(var1[16]);
  t4609 = Cos(var1[15]);
  t4630 = Sin(var1[15]);
  t4620 = t4509*t4610*t4611;
  t4627 = t4621*t4626;
  t4628 = t4620 + t4627;
  t4631 = -1.*t4610*t4621;
  t4632 = t4509*t4611*t4626;
  t4633 = t4631 + t4632;
  t4639 = t4610*t4621*t4611;
  t4640 = -1.*t4509*t4626;
  t4641 = t4639 + t4640;
  t4643 = t4509*t4610;
  t4644 = t4621*t4611*t4626;
  t4645 = t4643 + t4644;
  t4629 = t4609*t4628;
  t4634 = -1.*t4630*t4633;
  t4635 = t4629 + t4634;
  t4642 = t4609*t4641;
  t4646 = -1.*t4630*t4645;
  t4647 = t4642 + t4646;
  t4651 = t4609*t4589*t4610;
  t4652 = -1.*t4589*t4630*t4626;
  t4653 = t4651 + t4652;
  p_output1[0]=t152*t4509*t4589 - 1.*t4591*t4635;
  p_output1[1]=t152*t4589*t4621 - 1.*t4591*t4647;
  p_output1[2]=-1.*t152*t4611 - 1.*t4591*t4653;
  p_output1[3]=t4628*t4630 + t4609*t4633;
  p_output1[4]=t4630*t4641 + t4609*t4645;
  p_output1[5]=t4589*t4609*t4626 + t4589*t4610*t4630;
  p_output1[6]=t4509*t4589*t4591 + t152*t4635;
  p_output1[7]=t4589*t4591*t4621 + t152*t4647;
  p_output1[8]=-1.*t4591*t4611 + t152*t4653;
}



void R_RL_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
