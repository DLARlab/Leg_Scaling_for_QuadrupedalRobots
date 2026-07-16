/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:25:51 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RR_thigh_joint_src.h"

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
  double t2719;
  double t4526;
  double t5463;
  double t4605;
  double t6677;
  double t3306;
  double t4646;
  double t6713;
  double t6869;
  double t6899;
  double t7047;
  double t7057;
  double t7059;
  double t182;
  double t2850;
  double t7131;
  double t7199;
  double t7203;
  double t7206;
  double t433;
  double t1203;
  double t1338;
  double t1674;
  double t3432;
  double t4508;
  double t6905;
  double t6946;
  double t6961;
  double t6995;
  double t7372;
  double t7383;
  double t7422;
  double t7463;
  double t7477;
  double t7481;
  double t7161;
  double t7180;
  double t7583;
  double t7590;
  double t7603;
  double t7845;
  double t7887;
  double t7889;
  t2719 = Cos(var1[3]);
  t4526 = Cos(var1[5]);
  t5463 = Sin(var1[3]);
  t4605 = Sin(var1[4]);
  t6677 = Sin(var1[5]);
  t3306 = Sin(var1[12]);
  t4646 = t2719*t4526*t4605;
  t6713 = t5463*t6677;
  t6869 = t4646 + t6713;
  t6899 = Cos(var1[12]);
  t7047 = -1.*t4526*t5463;
  t7057 = t2719*t4605*t6677;
  t7059 = t7047 + t7057;
  t182 = Cos(var1[13]);
  t2850 = Cos(var1[4]);
  t7131 = Sin(var1[13]);
  t7199 = t6899*t6869;
  t7203 = -1.*t3306*t7059;
  t7206 = t7199 + t7203;
  t433 = -1.*t182;
  t1203 = 1. + t433;
  t1338 = -0.183*t1203;
  t1674 = 0. + t1338;
  t3432 = 0.047*t3306;
  t4508 = 0. + t3432;
  t6905 = -1.*t6899;
  t6946 = 1. + t6905;
  t6961 = -0.047*t6946;
  t6995 = 0. + t6961;
  t7372 = t4526*t5463*t4605;
  t7383 = -1.*t2719*t6677;
  t7422 = t7372 + t7383;
  t7463 = t2719*t4526;
  t7477 = t5463*t4605*t6677;
  t7481 = t7463 + t7477;
  t7161 = -0.183*t7131;
  t7180 = 0. + t7161;
  t7583 = t6899*t7422;
  t7590 = -1.*t3306*t7481;
  t7603 = t7583 + t7590;
  t7845 = t6899*t2850*t4526;
  t7887 = -1.*t2850*t3306*t6677;
  t7889 = t7845 + t7887;
  p_output1[0]=0. + t1674*t2719*t2850 + t4508*t6869 + t6995*t7059 - 0.17458*(t3306*t6869 + t6899*t7059) + t7180*t7206 - 0.183*(t182*t2719*t2850 - 1.*t7131*t7206) + var1[0];
  p_output1[1]=0. + t1674*t2850*t5463 + t4508*t7422 + t6995*t7481 - 0.17458*(t3306*t7422 + t6899*t7481) + t7180*t7603 - 0.183*(t182*t2850*t5463 - 1.*t7131*t7603) + var1[1];
  p_output1[2]=0. + t2850*t4508*t4526 - 1.*t1674*t4605 - 0.17458*(t2850*t3306*t4526 + t2850*t6677*t6899) + t2850*t6677*t6995 + t7180*t7889 - 0.183*(-1.*t182*t4605 - 1.*t7131*t7889) + var1[2];
}



void p_RR_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
