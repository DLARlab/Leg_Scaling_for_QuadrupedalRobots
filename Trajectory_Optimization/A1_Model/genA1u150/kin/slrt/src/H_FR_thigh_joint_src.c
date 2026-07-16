/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:25:38 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FR_thigh_joint_src.h"

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
  double t91;
  double t1289;
  double t1496;
  double t1472;
  double t1542;
  double t226;
  double t313;
  double t1287;
  double t2987;
  double t3377;
  double t2560;
  double t2891;
  double t2968;
  double t1478;
  double t1767;
  double t2134;
  double t4357;
  double t4414;
  double t4538;
  double t4021;
  double t4211;
  double t4221;
  double t2522;
  double t3114;
  double t3353;
  double t4259;
  double t4670;
  double t4859;
  double t5139;
  double t5250;
  double t5329;
  double t5564;
  double t5566;
  double t5598;
  double t803;
  double t3394;
  double t3649;
  double t6618;
  double t6626;
  double t6653;
  double t6664;
  double t6725;
  double t6739;
  double t6791;
  double t6813;
  double t6839;
  double t6841;
  double t5653;
  double t5656;
  double t5688;
  double t6928;
  double t6943;
  double t3975;
  double t4983;
  double t4985;
  double t5735;
  double t5793;
  double t5855;
  double t5087;
  double t5350;
  double t5507;
  t91 = Cos(var1[3]);
  t1289 = Cos(var1[5]);
  t1496 = Sin(var1[3]);
  t1472 = Sin(var1[4]);
  t1542 = Sin(var1[5]);
  t226 = Cos(var1[4]);
  t313 = Cos(var1[7]);
  t1287 = Cos(var1[6]);
  t2987 = Sin(var1[6]);
  t3377 = Sin(var1[7]);
  t2560 = -1.*t1289*t1496;
  t2891 = t91*t1472*t1542;
  t2968 = t2560 + t2891;
  t1478 = t91*t1289*t1472;
  t1767 = t1496*t1542;
  t2134 = t1478 + t1767;
  t4357 = t91*t1289;
  t4414 = t1496*t1472*t1542;
  t4538 = t4357 + t4414;
  t4021 = t1289*t1496*t1472;
  t4211 = -1.*t91*t1542;
  t4221 = t4021 + t4211;
  t2522 = t1287*t2134;
  t3114 = -1.*t2968*t2987;
  t3353 = t2522 + t3114;
  t4259 = t1287*t4221;
  t4670 = -1.*t4538*t2987;
  t4859 = t4259 + t4670;
  t5139 = t226*t1289*t1287;
  t5250 = -1.*t226*t1542*t2987;
  t5329 = t5139 + t5250;
  t5564 = t1287*t2968;
  t5566 = t2134*t2987;
  t5598 = t5564 + t5566;
  t803 = t91*t226*t313;
  t3394 = -1.*t3353*t3377;
  t3649 = t803 + t3394;
  t6618 = -1.*t313;
  t6626 = 1. + t6618;
  t6653 = 0.183*t6626;
  t6664 = 0. + t6653;
  t6725 = -1.*t1287;
  t6739 = 1. + t6725;
  t6791 = -0.047*t6739;
  t6813 = 0. + t6791;
  t6839 = 0.047*t2987;
  t6841 = 0. + t6839;
  t5653 = t1287*t4538;
  t5656 = t4221*t2987;
  t5688 = t5653 + t5656;
  t6928 = 0.183*t3377;
  t6943 = 0. + t6928;
  t3975 = t226*t313*t1496;
  t4983 = -1.*t4859*t3377;
  t4985 = t3975 + t4983;
  t5735 = t226*t1287*t1542;
  t5793 = t226*t1289*t2987;
  t5855 = t5735 + t5793;
  t5087 = -1.*t313*t1472;
  t5350 = -1.*t5329*t3377;
  t5507 = t5087 + t5350;
  p_output1[0]=t3649;
  p_output1[1]=t4985;
  p_output1[2]=t5507;
  p_output1[3]=0.;
  p_output1[4]=t5598;
  p_output1[5]=t5688;
  p_output1[6]=t5855;
  p_output1[7]=0.;
  p_output1[8]=t313*t3353 + t226*t3377*t91;
  p_output1[9]=t1496*t226*t3377 + t313*t4859;
  p_output1[10]=-1.*t1472*t3377 + t313*t5329;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.183*t3649 - 0.17458*t5598 + t2968*t6813 + t2134*t6841 + t3353*t6943 + t226*t6664*t91 + var1[0];
  p_output1[13]=0. + 0.183*t4985 - 0.17458*t5688 + t1496*t226*t6664 + t4538*t6813 + t4221*t6841 + t4859*t6943 + var1[1];
  p_output1[14]=0. + 0.183*t5507 - 0.17458*t5855 - 1.*t1472*t6664 + t1542*t226*t6813 + t1289*t226*t6841 + t5329*t6943 + var1[2];
  p_output1[15]=1.;
}



void H_FR_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
