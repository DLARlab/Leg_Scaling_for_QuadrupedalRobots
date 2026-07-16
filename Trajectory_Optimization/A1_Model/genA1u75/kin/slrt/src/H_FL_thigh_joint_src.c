/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:17:56 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FL_thigh_joint_src.h"

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
  double t454;
  double t1469;
  double t1766;
  double t1616;
  double t1778;
  double t431;
  double t632;
  double t1282;
  double t1468;
  double t2102;
  double t1735;
  double t1961;
  double t2076;
  double t2925;
  double t2946;
  double t2952;
  double t3560;
  double t4066;
  double t4117;
  double t4479;
  double t4530;
  double t4557;
  double t2088;
  double t3099;
  double t3104;
  double t4373;
  double t4570;
  double t4616;
  double t5090;
  double t5241;
  double t5479;
  double t5486;
  double t5492;
  double t5501;
  double t1001;
  double t3240;
  double t3348;
  double t6699;
  double t6730;
  double t6747;
  double t6755;
  double t6766;
  double t6767;
  double t6821;
  double t6826;
  double t6829;
  double t6850;
  double t5532;
  double t5533;
  double t5546;
  double t7014;
  double t7050;
  double t3443;
  double t4618;
  double t4669;
  double t5671;
  double t5798;
  double t5845;
  double t4966;
  double t5480;
  double t5482;
  t454 = Cos(var1[3]);
  t1469 = Cos(var1[5]);
  t1766 = Sin(var1[3]);
  t1616 = Sin(var1[4]);
  t1778 = Sin(var1[5]);
  t431 = Cos(var1[10]);
  t632 = Cos(var1[4]);
  t1282 = Sin(var1[10]);
  t1468 = Cos(var1[9]);
  t2102 = Sin(var1[9]);
  t1735 = t454*t1469*t1616;
  t1961 = t1766*t1778;
  t2076 = t1735 + t1961;
  t2925 = -1.*t1469*t1766;
  t2946 = t454*t1616*t1778;
  t2952 = t2925 + t2946;
  t3560 = t1469*t1766*t1616;
  t4066 = -1.*t454*t1778;
  t4117 = t3560 + t4066;
  t4479 = t454*t1469;
  t4530 = t1766*t1616*t1778;
  t4557 = t4479 + t4530;
  t2088 = t1468*t2076;
  t3099 = -1.*t2102*t2952;
  t3104 = t2088 + t3099;
  t4373 = t1468*t4117;
  t4570 = -1.*t2102*t4557;
  t4616 = t4373 + t4570;
  t5090 = t1468*t632*t1469;
  t5241 = -1.*t632*t2102*t1778;
  t5479 = t5090 + t5241;
  t5486 = t2102*t2076;
  t5492 = t1468*t2952;
  t5501 = t5486 + t5492;
  t1001 = t431*t454*t632;
  t3240 = -1.*t1282*t3104;
  t3348 = t1001 + t3240;
  t6699 = -1.*t431;
  t6730 = 1. + t6699;
  t6747 = 0.183*t6730;
  t6755 = 0. + t6747;
  t6766 = -0.047*t2102;
  t6767 = 0. + t6766;
  t6821 = -1.*t1468;
  t6826 = 1. + t6821;
  t6829 = 0.047*t6826;
  t6850 = 0. + t6829;
  t5532 = t2102*t4117;
  t5533 = t1468*t4557;
  t5546 = t5532 + t5533;
  t7014 = 0.183*t1282;
  t7050 = 0. + t7014;
  t3443 = t431*t632*t1766;
  t4618 = -1.*t1282*t4616;
  t4669 = t3443 + t4618;
  t5671 = t632*t1469*t2102;
  t5798 = t1468*t632*t1778;
  t5845 = t5671 + t5798;
  t4966 = -1.*t431*t1616;
  t5480 = -1.*t1282*t5479;
  t5482 = t4966 + t5480;
  p_output1[0]=t3348;
  p_output1[1]=t4669;
  p_output1[2]=t5482;
  p_output1[3]=0.;
  p_output1[4]=t5501;
  p_output1[5]=t5546;
  p_output1[6]=t5845;
  p_output1[7]=0.;
  p_output1[8]=t3104*t431 + t1282*t454*t632;
  p_output1[9]=t431*t4616 + t1282*t1766*t632;
  p_output1[10]=-1.*t1282*t1616 + t431*t5479;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.183*t3348 + 0.11079*t5501 + t454*t632*t6755 + t2076*t6767 + t2952*t6850 + t3104*t7050 + var1[0];
  p_output1[13]=0. + 0.183*t4669 + 0.11079*t5546 + t1766*t632*t6755 + t4117*t6767 + t4557*t6850 + t4616*t7050 + var1[1];
  p_output1[14]=0. + 0.183*t5482 + 0.11079*t5845 - 1.*t1616*t6755 + t1469*t632*t6767 + t1778*t632*t6850 + t5479*t7050 + var1[2];
  p_output1[15]=1.;
}



void H_FL_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
