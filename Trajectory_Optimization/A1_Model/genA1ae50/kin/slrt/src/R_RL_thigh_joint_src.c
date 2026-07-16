/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:10:19 GMT-05:00
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
  double t300;
  double t6365;
  double t7283;
  double t7238;
  double t7340;
  double t271;
  double t2550;
  double t6356;
  double t6358;
  double t7498;
  double t7244;
  double t7428;
  double t7461;
  double t7502;
  double t7536;
  double t7746;
  double t7921;
  double t7932;
  double t7946;
  double t7974;
  double t7986;
  double t8000;
  double t7466;
  double t7764;
  double t7773;
  double t7952;
  double t8010;
  double t8012;
  double t8323;
  double t8345;
  double t8353;
  t300 = Cos(var1[3]);
  t6365 = Cos(var1[5]);
  t7283 = Sin(var1[3]);
  t7238 = Sin(var1[4]);
  t7340 = Sin(var1[5]);
  t271 = Cos(var1[16]);
  t2550 = Cos(var1[4]);
  t6356 = Sin(var1[16]);
  t6358 = Cos(var1[15]);
  t7498 = Sin(var1[15]);
  t7244 = t300*t6365*t7238;
  t7428 = t7283*t7340;
  t7461 = t7244 + t7428;
  t7502 = -1.*t6365*t7283;
  t7536 = t300*t7238*t7340;
  t7746 = t7502 + t7536;
  t7921 = t6365*t7283*t7238;
  t7932 = -1.*t300*t7340;
  t7946 = t7921 + t7932;
  t7974 = t300*t6365;
  t7986 = t7283*t7238*t7340;
  t8000 = t7974 + t7986;
  t7466 = t6358*t7461;
  t7764 = -1.*t7498*t7746;
  t7773 = t7466 + t7764;
  t7952 = t6358*t7946;
  t8010 = -1.*t7498*t8000;
  t8012 = t7952 + t8010;
  t8323 = t6358*t2550*t6365;
  t8345 = -1.*t2550*t7498*t7340;
  t8353 = t8323 + t8345;
  p_output1[0]=t2550*t271*t300 - 1.*t6356*t7773;
  p_output1[1]=t2550*t271*t7283 - 1.*t6356*t8012;
  p_output1[2]=-1.*t271*t7238 - 1.*t6356*t8353;
  p_output1[3]=t7461*t7498 + t6358*t7746;
  p_output1[4]=t7498*t7946 + t6358*t8000;
  p_output1[5]=t2550*t6358*t7340 + t2550*t6365*t7498;
  p_output1[6]=t2550*t300*t6356 + t271*t7773;
  p_output1[7]=t2550*t6356*t7283 + t271*t8012;
  p_output1[8]=-1.*t6356*t7238 + t271*t8353;
}



void R_RL_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
