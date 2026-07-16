/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:10:07 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RR_hip_joint_src.h"

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
  double t1363;
  double t3683;
  double t7629;
  double t7520;
  double t7652;
  double t1532;
  double t7538;
  double t7659;
  double t7666;
  double t7679;
  double t7693;
  double t7695;
  double t7696;
  double t1384;
  double t2721;
  double t3520;
  double t7680;
  double t7681;
  double t7689;
  double t7690;
  double t7708;
  double t7722;
  double t7738;
  double t7753;
  double t7758;
  double t7761;
  t1363 = Cos(var1[3]);
  t3683 = Cos(var1[5]);
  t7629 = Sin(var1[3]);
  t7520 = Sin(var1[4]);
  t7652 = Sin(var1[5]);
  t1532 = Sin(var1[12]);
  t7538 = t1363*t3683*t7520;
  t7659 = t7629*t7652;
  t7666 = t7538 + t7659;
  t7679 = Cos(var1[12]);
  t7693 = -1.*t3683*t7629;
  t7695 = t1363*t7520*t7652;
  t7696 = t7693 + t7695;
  t1384 = Cos(var1[4]);
  t2721 = 0.047*t1532;
  t3520 = 0. + t2721;
  t7680 = -1.*t7679;
  t7681 = 1. + t7680;
  t7689 = -0.047*t7681;
  t7690 = 0. + t7689;
  t7708 = t3683*t7629*t7520;
  t7722 = -1.*t1363*t7652;
  t7738 = t7708 + t7722;
  t7753 = t1363*t3683;
  t7758 = t7629*t7520*t7652;
  t7761 = t7753 + t7758;
  p_output1[0]=0. - 0.183*t1363*t1384 + t3520*t7666 + t7690*t7696 - 0.047*(t1532*t7666 + t7679*t7696) + var1[0];
  p_output1[1]=0. - 0.183*t1384*t7629 + t3520*t7738 + t7690*t7761 - 0.047*(t1532*t7738 + t7679*t7761) + var1[1];
  p_output1[2]=0. + t1384*t3520*t3683 + 0.183*t7520 - 0.047*(t1384*t1532*t3683 + t1384*t7652*t7679) + t1384*t7652*t7690 + var1[2];
}



void p_RR_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
