/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:13:09 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_FLfoot_src.h"

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
  double t1914;
  double t6449;
  double t6508;
  double t6479;
  double t6526;
  double t6412;
  double t2072;
  double t2508;
  double t6448;
  double t6505;
  double t6531;
  double t6534;
  double t6536;
  double t6544;
  double t6547;
  double t6548;
  double t6549;
  double t6550;
  double t6551;
  double t1913;
  double t6555;
  double t6564;
  double t6566;
  double t6567;
  double t6577;
  double t6585;
  double t6587;
  double t6589;
  double t6592;
  double t6596;
  double t6610;
  double t6611;
  double t6612;
  double t2587;
  double t6552;
  double t6553;
  double t6558;
  double t6559;
  double t6560;
  double t6563;
  double t6597;
  double t6601;
  double t6604;
  double t6605;
  double t6606;
  double t6609;
  double t6613;
  double t6614;
  double t6616;
  double t6617;
  double t6619;
  t1914 = Cos(var1[3]);
  t6449 = Cos(var1[5]);
  t6508 = Sin(var1[3]);
  t6479 = Sin(var1[4]);
  t6526 = Sin(var1[5]);
  t6412 = Cos(var1[10]);
  t2072 = Cos(var1[4]);
  t2508 = Sin(var1[10]);
  t6448 = Cos(var1[9]);
  t6505 = t1914*t6449*t6479;
  t6531 = t6508*t6526;
  t6534 = t6505 + t6531;
  t6536 = t6448*t6534;
  t6544 = Sin(var1[9]);
  t6547 = -1.*t6449*t6508;
  t6548 = t1914*t6479*t6526;
  t6549 = t6547 + t6548;
  t6550 = -1.*t6544*t6549;
  t6551 = t6536 + t6550;
  t1913 = Sin(var1[11]);
  t6555 = Cos(var1[11]);
  t6564 = t6449*t6508*t6479;
  t6566 = -1.*t1914*t6526;
  t6567 = t6564 + t6566;
  t6577 = t6448*t6567;
  t6585 = t1914*t6449;
  t6587 = t6508*t6479*t6526;
  t6589 = t6585 + t6587;
  t6592 = -1.*t6544*t6589;
  t6596 = t6577 + t6592;
  t6610 = t6448*t2072*t6449;
  t6611 = -1.*t2072*t6544*t6526;
  t6612 = t6610 + t6611;
  t2587 = t1914*t2072*t2508;
  t6552 = t6412*t6551;
  t6553 = t2587 + t6552;
  t6558 = t6412*t1914*t2072;
  t6559 = -1.*t2508*t6551;
  t6560 = t6558 + t6559;
  t6563 = t2072*t2508*t6508;
  t6597 = t6412*t6596;
  t6601 = t6563 + t6597;
  t6604 = t6412*t2072*t6508;
  t6605 = -1.*t2508*t6596;
  t6606 = t6604 + t6605;
  t6609 = -1.*t2508*t6479;
  t6613 = t6412*t6612;
  t6614 = t6609 + t6613;
  t6616 = -1.*t6412*t6479;
  t6617 = -1.*t2508*t6612;
  t6619 = t6616 + t6617;
  p_output1[0]=-1.*t1913*t6553 + t6555*t6560;
  p_output1[1]=-1.*t1913*t6601 + t6555*t6606;
  p_output1[2]=-1.*t1913*t6614 + t6555*t6619;
  p_output1[3]=t6534*t6544 + t6448*t6549;
  p_output1[4]=t6544*t6567 + t6448*t6589;
  p_output1[5]=t2072*t6448*t6526 + t2072*t6449*t6544;
  p_output1[6]=t6553*t6555 + t1913*t6560;
  p_output1[7]=t6555*t6601 + t1913*t6606;
  p_output1[8]=t6555*t6614 + t1913*t6619;
}



void R_FLfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
