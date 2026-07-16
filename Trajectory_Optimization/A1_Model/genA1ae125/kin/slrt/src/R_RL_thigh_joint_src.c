/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:03:33 GMT-05:00
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
  double t1257;
  double t1321;
  double t1353;
  double t1347;
  double t1360;
  double t738;
  double t1260;
  double t1314;
  double t1320;
  double t1431;
  double t1350;
  double t1381;
  double t1384;
  double t1445;
  double t1783;
  double t2081;
  double t2427;
  double t2428;
  double t2528;
  double t2728;
  double t2775;
  double t2871;
  double t1394;
  double t2091;
  double t2144;
  double t2669;
  double t2914;
  double t3170;
  double t3374;
  double t3464;
  double t3518;
  t1257 = Cos(var1[3]);
  t1321 = Cos(var1[5]);
  t1353 = Sin(var1[3]);
  t1347 = Sin(var1[4]);
  t1360 = Sin(var1[5]);
  t738 = Cos(var1[16]);
  t1260 = Cos(var1[4]);
  t1314 = Sin(var1[16]);
  t1320 = Cos(var1[15]);
  t1431 = Sin(var1[15]);
  t1350 = t1257*t1321*t1347;
  t1381 = t1353*t1360;
  t1384 = t1350 + t1381;
  t1445 = -1.*t1321*t1353;
  t1783 = t1257*t1347*t1360;
  t2081 = t1445 + t1783;
  t2427 = t1321*t1353*t1347;
  t2428 = -1.*t1257*t1360;
  t2528 = t2427 + t2428;
  t2728 = t1257*t1321;
  t2775 = t1353*t1347*t1360;
  t2871 = t2728 + t2775;
  t1394 = t1320*t1384;
  t2091 = -1.*t1431*t2081;
  t2144 = t1394 + t2091;
  t2669 = t1320*t2528;
  t2914 = -1.*t1431*t2871;
  t3170 = t2669 + t2914;
  t3374 = t1320*t1260*t1321;
  t3464 = -1.*t1260*t1431*t1360;
  t3518 = t3374 + t3464;
  p_output1[0]=-1.*t1314*t2144 + t1257*t1260*t738;
  p_output1[1]=-1.*t1314*t3170 + t1260*t1353*t738;
  p_output1[2]=-1.*t1314*t3518 - 1.*t1347*t738;
  p_output1[3]=t1384*t1431 + t1320*t2081;
  p_output1[4]=t1431*t2528 + t1320*t2871;
  p_output1[5]=t1260*t1320*t1360 + t1260*t1321*t1431;
  p_output1[6]=t1257*t1260*t1314 + t2144*t738;
  p_output1[7]=t1260*t1314*t1353 + t3170*t738;
  p_output1[8]=-1.*t1314*t1347 + t3518*t738;
}



void R_RL_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
