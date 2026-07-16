/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:10:15 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RL_hip_joint_src.h"

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
  double t2449;
  double t2196;
  double t6503;
  double t2887;
  double t9554;
  double t9580;
  double t8322;
  double t9598;
  double t9560;
  double t9586;
  double t9588;
  double t9599;
  double t9604;
  double t9608;
  double t9622;
  double t9623;
  double t9624;
  double t9626;
  double t9631;
  double t9633;
  double t9596;
  double t9612;
  double t9614;
  double t9680;
  double t9681;
  double t9688;
  double t9694;
  double t9697;
  double t9699;
  double t9625;
  double t9637;
  double t9639;
  double t9642;
  double t9643;
  double t9644;
  t2449 = Cos(var1[4]);
  t2196 = Cos(var1[3]);
  t6503 = Sin(var1[4]);
  t2887 = Sin(var1[3]);
  t9554 = Cos(var1[5]);
  t9580 = Sin(var1[5]);
  t8322 = Sin(var1[15]);
  t9598 = Cos(var1[15]);
  t9560 = t2196*t9554*t6503;
  t9586 = t2887*t9580;
  t9588 = t9560 + t9586;
  t9599 = -1.*t9554*t2887;
  t9604 = t2196*t6503*t9580;
  t9608 = t9599 + t9604;
  t9622 = t9554*t2887*t6503;
  t9623 = -1.*t2196*t9580;
  t9624 = t9622 + t9623;
  t9626 = t2196*t9554;
  t9631 = t2887*t6503*t9580;
  t9633 = t9626 + t9631;
  t9596 = t8322*t9588;
  t9612 = t9598*t9608;
  t9614 = t9596 + t9612;
  t9680 = -0.047*t8322;
  t9681 = 0. + t9680;
  t9688 = -1.*t9598;
  t9694 = 1. + t9688;
  t9697 = 0.047*t9694;
  t9699 = 0. + t9697;
  t9625 = t8322*t9624;
  t9637 = t9598*t9633;
  t9639 = t9625 + t9637;
  t9642 = t2449*t9554*t8322;
  t9643 = t9598*t2449*t9580;
  t9644 = t9642 + t9643;
  p_output1[0]=t2196*t2449;
  p_output1[1]=t2449*t2887;
  p_output1[2]=-1.*t6503;
  p_output1[3]=0.;
  p_output1[4]=t9614;
  p_output1[5]=t9639;
  p_output1[6]=t9644;
  p_output1[7]=0.;
  p_output1[8]=t9588*t9598 - 1.*t8322*t9608;
  p_output1[9]=t9598*t9624 - 1.*t8322*t9633;
  p_output1[10]=-1.*t2449*t8322*t9580 + t2449*t9554*t9598;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.183*t2196*t2449 + 0.047*t9614 + t9588*t9681 + t9608*t9699 + var1[0];
  p_output1[13]=0. - 0.183*t2449*t2887 + 0.047*t9639 + t9624*t9681 + t9633*t9699 + var1[1];
  p_output1[14]=0. + 0.183*t6503 + 0.047*t9644 + t2449*t9554*t9681 + t2449*t9580*t9699 + var1[2];
  p_output1[15]=1.;
}



void H_RL_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
