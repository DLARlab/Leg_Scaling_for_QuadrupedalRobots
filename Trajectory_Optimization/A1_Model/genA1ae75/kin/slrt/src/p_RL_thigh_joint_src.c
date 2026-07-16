/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:50:56 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RL_thigh_joint_src.h"

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
  double t4631;
  double t7971;
  double t8009;
  double t7981;
  double t8014;
  double t7947;
  double t7984;
  double t8025;
  double t8028;
  double t8072;
  double t8252;
  double t8272;
  double t8273;
  double t1864;
  double t7844;
  double t8400;
  double t8515;
  double t8580;
  double t8603;
  double t2282;
  double t3242;
  double t3715;
  double t4036;
  double t7950;
  double t7961;
  double t8085;
  double t8092;
  double t8241;
  double t8250;
  double t9529;
  double t9530;
  double t9534;
  double t9628;
  double t9754;
  double t9906;
  double t8422;
  double t8514;
  double t10732;
  double t10766;
  double t10774;
  double t10844;
  double t10846;
  double t10855;
  t4631 = Cos(var1[3]);
  t7971 = Cos(var1[5]);
  t8009 = Sin(var1[3]);
  t7981 = Sin(var1[4]);
  t8014 = Sin(var1[5]);
  t7947 = Sin(var1[15]);
  t7984 = t4631*t7971*t7981;
  t8025 = t8009*t8014;
  t8028 = t7984 + t8025;
  t8072 = Cos(var1[15]);
  t8252 = -1.*t7971*t8009;
  t8272 = t4631*t7981*t8014;
  t8273 = t8252 + t8272;
  t1864 = Cos(var1[16]);
  t7844 = Cos(var1[4]);
  t8400 = Sin(var1[16]);
  t8515 = t8072*t8028;
  t8580 = -1.*t7947*t8273;
  t8603 = t8515 + t8580;
  t2282 = -1.*t1864;
  t3242 = 1. + t2282;
  t3715 = -0.183*t3242;
  t4036 = 0. + t3715;
  t7950 = -0.047*t7947;
  t7961 = 0. + t7950;
  t8085 = -1.*t8072;
  t8092 = 1. + t8085;
  t8241 = 0.047*t8092;
  t8250 = 0. + t8241;
  t9529 = t7971*t8009*t7981;
  t9530 = -1.*t4631*t8014;
  t9534 = t9529 + t9530;
  t9628 = t4631*t7971;
  t9754 = t8009*t7981*t8014;
  t9906 = t9628 + t9754;
  t8422 = -0.183*t8400;
  t8514 = 0. + t8422;
  t10732 = t8072*t9534;
  t10766 = -1.*t7947*t9906;
  t10774 = t10732 + t10766;
  t10844 = t8072*t7844*t7971;
  t10846 = -1.*t7844*t7947*t8014;
  t10855 = t10844 + t10846;
  p_output1[0]=0. + t4036*t4631*t7844 + t7961*t8028 + t8250*t8273 + 0.13205*(t7947*t8028 + t8072*t8273) + t8514*t8603 - 0.183*(t1864*t4631*t7844 - 1.*t8400*t8603) + var1[0];
  p_output1[1]=0. + t4036*t7844*t8009 - 0.183*(t1864*t7844*t8009 - 1.*t10774*t8400) + t10774*t8514 + t7961*t9534 + t8250*t9906 + 0.13205*(t7947*t9534 + t8072*t9906) + var1[1];
  p_output1[2]=0. + t7844*t7961*t7971 - 1.*t4036*t7981 + 0.13205*(t7844*t7947*t7971 + t7844*t8014*t8072) + t7844*t8014*t8250 - 0.183*(-1.*t1864*t7981 - 1.*t10855*t8400) + t10855*t8514 + var1[2];
}



void p_RL_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
