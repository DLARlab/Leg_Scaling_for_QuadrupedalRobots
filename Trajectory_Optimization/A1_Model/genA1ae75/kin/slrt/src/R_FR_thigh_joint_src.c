/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:50:35 GMT-05:00
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
  double t5449;
  double t7176;
  double t7431;
  double t7193;
  double t7457;
  double t5610;
  double t6953;
  double t6991;
  double t7572;
  double t7589;
  double t7535;
  double t7545;
  double t7567;
  double t7302;
  double t7461;
  double t7476;
  double t7647;
  double t7677;
  double t7689;
  double t7610;
  double t7618;
  double t7620;
  double t7526;
  double t7583;
  double t7584;
  double t7626;
  double t7704;
  double t7713;
  double t7744;
  double t7767;
  double t7797;
  t5449 = Cos(var1[3]);
  t7176 = Cos(var1[5]);
  t7431 = Sin(var1[3]);
  t7193 = Sin(var1[4]);
  t7457 = Sin(var1[5]);
  t5610 = Cos(var1[4]);
  t6953 = Cos(var1[7]);
  t6991 = Cos(var1[6]);
  t7572 = Sin(var1[6]);
  t7589 = Sin(var1[7]);
  t7535 = -1.*t7176*t7431;
  t7545 = t5449*t7193*t7457;
  t7567 = t7535 + t7545;
  t7302 = t5449*t7176*t7193;
  t7461 = t7431*t7457;
  t7476 = t7302 + t7461;
  t7647 = t5449*t7176;
  t7677 = t7431*t7193*t7457;
  t7689 = t7647 + t7677;
  t7610 = t7176*t7431*t7193;
  t7618 = -1.*t5449*t7457;
  t7620 = t7610 + t7618;
  t7526 = t6991*t7476;
  t7583 = -1.*t7567*t7572;
  t7584 = t7526 + t7583;
  t7626 = t6991*t7620;
  t7704 = -1.*t7689*t7572;
  t7713 = t7626 + t7704;
  t7744 = t5610*t7176*t6991;
  t7767 = -1.*t5610*t7457*t7572;
  t7797 = t7744 + t7767;
  p_output1[0]=t5449*t5610*t6953 - 1.*t7584*t7589;
  p_output1[1]=t5610*t6953*t7431 - 1.*t7589*t7713;
  p_output1[2]=-1.*t6953*t7193 - 1.*t7589*t7797;
  p_output1[3]=t6991*t7567 + t7476*t7572;
  p_output1[4]=t7572*t7620 + t6991*t7689;
  p_output1[5]=t5610*t6991*t7457 + t5610*t7176*t7572;
  p_output1[6]=t6953*t7584 + t5449*t5610*t7589;
  p_output1[7]=t5610*t7431*t7589 + t6953*t7713;
  p_output1[8]=-1.*t7193*t7589 + t6953*t7797;
}



void R_FR_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
