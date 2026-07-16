/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:25:44 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FL_thigh_joint_src.h"

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
  double t2461;
  double t6072;
  double t6565;
  double t6493;
  double t7150;
  double t3427;
  double t6495;
  double t7260;
  double t7261;
  double t7390;
  double t7450;
  double t7454;
  double t7462;
  double t456;
  double t3122;
  double t7553;
  double t7571;
  double t7596;
  double t7602;
  double t739;
  double t1545;
  double t1651;
  double t1976;
  double t4755;
  double t6045;
  double t7399;
  double t7425;
  double t7434;
  double t7449;
  double t7774;
  double t7780;
  double t7799;
  double t7853;
  double t7883;
  double t7894;
  double t7555;
  double t7557;
  double t7953;
  double t7957;
  double t7970;
  double t8275;
  double t8285;
  double t8287;
  t2461 = Cos(var1[3]);
  t6072 = Cos(var1[5]);
  t6565 = Sin(var1[3]);
  t6493 = Sin(var1[4]);
  t7150 = Sin(var1[5]);
  t3427 = Sin(var1[9]);
  t6495 = t2461*t6072*t6493;
  t7260 = t6565*t7150;
  t7261 = t6495 + t7260;
  t7390 = Cos(var1[9]);
  t7450 = -1.*t6072*t6565;
  t7454 = t2461*t6493*t7150;
  t7462 = t7450 + t7454;
  t456 = Cos(var1[10]);
  t3122 = Cos(var1[4]);
  t7553 = Sin(var1[10]);
  t7571 = t7390*t7261;
  t7596 = -1.*t3427*t7462;
  t7602 = t7571 + t7596;
  t739 = -1.*t456;
  t1545 = 1. + t739;
  t1651 = 0.183*t1545;
  t1976 = 0. + t1651;
  t4755 = -0.047*t3427;
  t6045 = 0. + t4755;
  t7399 = -1.*t7390;
  t7425 = 1. + t7399;
  t7434 = 0.047*t7425;
  t7449 = 0. + t7434;
  t7774 = t6072*t6565*t6493;
  t7780 = -1.*t2461*t7150;
  t7799 = t7774 + t7780;
  t7853 = t2461*t6072;
  t7883 = t6565*t6493*t7150;
  t7894 = t7853 + t7883;
  t7555 = 0.183*t7553;
  t7557 = 0. + t7555;
  t7953 = t7390*t7799;
  t7957 = -1.*t3427*t7894;
  t7970 = t7953 + t7957;
  t8275 = t7390*t3122*t6072;
  t8285 = -1.*t3122*t3427*t7150;
  t8287 = t8275 + t8285;
  p_output1[0]=0. + t1976*t2461*t3122 + t6045*t7261 + t7449*t7462 + 0.17458*(t3427*t7261 + t7390*t7462) + t7557*t7602 + 0.183*(t2461*t3122*t456 - 1.*t7553*t7602) + var1[0];
  p_output1[1]=0. + t1976*t3122*t6565 + t6045*t7799 + t7449*t7894 + 0.17458*(t3427*t7799 + t7390*t7894) + t7557*t7970 + 0.183*(t3122*t456*t6565 - 1.*t7553*t7970) + var1[1];
  p_output1[2]=0. + t3122*t6045*t6072 - 1.*t1976*t6493 + 0.17458*(t3122*t3427*t6072 + t3122*t7150*t7390) + t3122*t7150*t7449 + t7557*t8287 + 0.183*(-1.*t456*t6493 - 1.*t7553*t8287) + var1[2];
}



void p_FL_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
