/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:17:48 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FR_thigh_joint_src.h"

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
  double t449;
  double t1381;
  double t1384;
  double t1382;
  double t1387;
  double t1374;
  double t1383;
  double t1388;
  double t1393;
  double t1395;
  double t1396;
  double t1397;
  double t1398;
  double t588;
  double t1321;
  double t1413;
  double t1415;
  double t1416;
  double t1417;
  double t1337;
  double t1359;
  double t1360;
  double t1370;
  double t1375;
  double t1376;
  double t1378;
  double t1379;
  double t1399;
  double t1403;
  double t4552;
  double t4928;
  double t4933;
  double t5413;
  double t5414;
  double t5695;
  double t1556;
  double t1629;
  double t6360;
  double t6364;
  double t6492;
  double t6931;
  double t6936;
  double t6948;
  t449 = Cos(var1[3]);
  t1381 = Cos(var1[5]);
  t1384 = Sin(var1[4]);
  t1382 = Sin(var1[3]);
  t1387 = Sin(var1[5]);
  t1374 = Cos(var1[6]);
  t1383 = -1.*t1381*t1382;
  t1388 = t449*t1384*t1387;
  t1393 = t1383 + t1388;
  t1395 = t449*t1381*t1384;
  t1396 = t1382*t1387;
  t1397 = t1395 + t1396;
  t1398 = Sin(var1[6]);
  t588 = Cos(var1[4]);
  t1321 = Cos(var1[7]);
  t1413 = t1374*t1397;
  t1415 = -1.*t1393*t1398;
  t1416 = t1413 + t1415;
  t1417 = Sin(var1[7]);
  t1337 = -1.*t1321;
  t1359 = 1. + t1337;
  t1360 = 0.183*t1359;
  t1370 = 0. + t1360;
  t1375 = -1.*t1374;
  t1376 = 1. + t1375;
  t1378 = -0.047*t1376;
  t1379 = 0. + t1378;
  t1399 = 0.047*t1398;
  t1403 = 0. + t1399;
  t4552 = t449*t1381;
  t4928 = t1382*t1384*t1387;
  t4933 = t4552 + t4928;
  t5413 = t1381*t1382*t1384;
  t5414 = -1.*t449*t1387;
  t5695 = t5413 + t5414;
  t1556 = 0.183*t1417;
  t1629 = 0. + t1556;
  t6360 = t1374*t5695;
  t6364 = -1.*t4933*t1398;
  t6492 = t6360 + t6364;
  t6931 = t588*t1381*t1374;
  t6936 = -1.*t588*t1387*t1398;
  t6948 = t6931 + t6936;
  p_output1[0]=0. + t1379*t1393 - 0.11079*(t1374*t1393 + t1397*t1398) + t1397*t1403 + t1416*t1629 + t1370*t449*t588 + 0.183*(-1.*t1416*t1417 + t1321*t449*t588) + var1[0];
  p_output1[1]=0. + t1379*t4933 + t1403*t5695 - 0.11079*(t1374*t4933 + t1398*t5695) + t1370*t1382*t588 + t1629*t6492 + 0.183*(t1321*t1382*t588 - 1.*t1417*t6492) + var1[1];
  p_output1[2]=0. - 1.*t1370*t1384 + t1379*t1387*t588 + t1381*t1403*t588 - 0.11079*(t1374*t1387*t588 + t1381*t1398*t588) + t1629*t6948 + 0.183*(-1.*t1321*t1384 - 1.*t1417*t6948) + var1[2];
}



void p_FR_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
