/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:51:00 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RL_calf_joint_src.h"

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
  double t1103;
  double t1283;
  double t1366;
  double t1345;
  double t1377;
  double t1261;
  double t1167;
  double t1170;
  double t1276;
  double t1363;
  double t1379;
  double t1382;
  double t1389;
  double t1392;
  double t1396;
  double t1403;
  double t1416;
  double t1422;
  double t1425;
  double t778;
  double t1435;
  double t1481;
  double t1485;
  double t1492;
  double t1497;
  double t1499;
  double t1500;
  double t1501;
  double t1505;
  double t1510;
  double t1550;
  double t1557;
  double t1562;
  double t1187;
  double t1428;
  double t1432;
  double t1436;
  double t1441;
  double t1447;
  double t1470;
  double t1513;
  double t1515;
  double t1532;
  double t1533;
  double t1537;
  double t1544;
  double t1566;
  double t1574;
  double t1582;
  double t1583;
  double t1598;
  t1103 = Cos(var1[3]);
  t1283 = Cos(var1[5]);
  t1366 = Sin(var1[3]);
  t1345 = Sin(var1[4]);
  t1377 = Sin(var1[5]);
  t1261 = Cos(var1[16]);
  t1167 = Cos(var1[4]);
  t1170 = Sin(var1[16]);
  t1276 = Cos(var1[15]);
  t1363 = t1103*t1283*t1345;
  t1379 = t1366*t1377;
  t1382 = t1363 + t1379;
  t1389 = t1276*t1382;
  t1392 = Sin(var1[15]);
  t1396 = -1.*t1283*t1366;
  t1403 = t1103*t1345*t1377;
  t1416 = t1396 + t1403;
  t1422 = -1.*t1392*t1416;
  t1425 = t1389 + t1422;
  t778 = Sin(var1[17]);
  t1435 = Cos(var1[17]);
  t1481 = t1283*t1366*t1345;
  t1485 = -1.*t1103*t1377;
  t1492 = t1481 + t1485;
  t1497 = t1276*t1492;
  t1499 = t1103*t1283;
  t1500 = t1366*t1345*t1377;
  t1501 = t1499 + t1500;
  t1505 = -1.*t1392*t1501;
  t1510 = t1497 + t1505;
  t1550 = t1276*t1167*t1283;
  t1557 = -1.*t1167*t1392*t1377;
  t1562 = t1550 + t1557;
  t1187 = t1103*t1167*t1170;
  t1428 = t1261*t1425;
  t1432 = t1187 + t1428;
  t1436 = t1261*t1103*t1167;
  t1441 = -1.*t1170*t1425;
  t1447 = t1436 + t1441;
  t1470 = t1167*t1170*t1366;
  t1513 = t1261*t1510;
  t1515 = t1470 + t1513;
  t1532 = t1261*t1167*t1366;
  t1533 = -1.*t1170*t1510;
  t1537 = t1532 + t1533;
  t1544 = -1.*t1170*t1345;
  t1566 = t1261*t1562;
  t1574 = t1544 + t1566;
  t1582 = -1.*t1261*t1345;
  t1583 = -1.*t1170*t1562;
  t1598 = t1582 + t1583;
  p_output1[0]=t1435*t1447 - 1.*t1432*t778;
  p_output1[1]=t1435*t1537 - 1.*t1515*t778;
  p_output1[2]=t1435*t1598 - 1.*t1574*t778;
  p_output1[3]=t1382*t1392 + t1276*t1416;
  p_output1[4]=t1392*t1492 + t1276*t1501;
  p_output1[5]=t1167*t1276*t1377 + t1167*t1283*t1392;
  p_output1[6]=t1432*t1435 + t1447*t778;
  p_output1[7]=t1435*t1515 + t1537*t778;
  p_output1[8]=t1435*t1574 + t1598*t778;
}



void R_RL_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
