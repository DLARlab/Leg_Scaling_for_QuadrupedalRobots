/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:03:22 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RR_hip_joint_src.h"

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
  double t1297;
  double t683;
  double t1524;
  double t1510;
  double t1549;
  double t1555;
  double t1546;
  double t1562;
  double t1552;
  double t1556;
  double t1557;
  double t1563;
  double t1564;
  double t1565;
  double t1568;
  double t1569;
  double t1570;
  double t1572;
  double t1574;
  double t1576;
  t1297 = Cos(var1[4]);
  t683 = Cos(var1[3]);
  t1524 = Sin(var1[4]);
  t1510 = Sin(var1[3]);
  t1549 = Cos(var1[5]);
  t1555 = Sin(var1[5]);
  t1546 = Sin(var1[12]);
  t1562 = Cos(var1[12]);
  t1552 = t683*t1549*t1524;
  t1556 = t1510*t1555;
  t1557 = t1552 + t1556;
  t1563 = -1.*t1549*t1510;
  t1564 = t683*t1524*t1555;
  t1565 = t1563 + t1564;
  t1568 = t1549*t1510*t1524;
  t1569 = -1.*t683*t1555;
  t1570 = t1568 + t1569;
  t1572 = t683*t1549;
  t1574 = t1510*t1524*t1555;
  t1576 = t1572 + t1574;
  p_output1[0]=t1297*t683;
  p_output1[1]=t1297*t1510;
  p_output1[2]=-1.*t1524;
  p_output1[3]=t1546*t1557 + t1562*t1565;
  p_output1[4]=t1546*t1570 + t1562*t1576;
  p_output1[5]=t1297*t1546*t1549 + t1297*t1555*t1562;
  p_output1[6]=t1557*t1562 - 1.*t1546*t1565;
  p_output1[7]=t1562*t1570 - 1.*t1546*t1576;
  p_output1[8]=-1.*t1297*t1546*t1555 + t1297*t1549*t1562;
}



void R_RR_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
