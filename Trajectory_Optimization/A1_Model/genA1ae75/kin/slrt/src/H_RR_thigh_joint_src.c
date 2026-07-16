/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:50:50 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RR_thigh_joint_src.h"

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
  double t932;
  double t2109;
  double t2267;
  double t2171;
  double t2431;
  double t449;
  double t1306;
  double t1429;
  double t1788;
  double t2890;
  double t2246;
  double t2485;
  double t2567;
  double t3348;
  double t4611;
  double t4630;
  double t5596;
  double t5625;
  double t5628;
  double t6103;
  double t6325;
  double t6638;
  double t2687;
  double t4793;
  double t5212;
  double t5950;
  double t6755;
  double t6908;
  double t7833;
  double t8602;
  double t8780;
  double t9088;
  double t9115;
  double t9160;
  double t1321;
  double t5238;
  double t5388;
  double t9396;
  double t9408;
  double t9433;
  double t9434;
  double t9478;
  double t9484;
  double t9519;
  double t9526;
  double t9548;
  double t9569;
  double t9175;
  double t9178;
  double t9217;
  double t9587;
  double t9589;
  double t5408;
  double t7258;
  double t7701;
  double t9223;
  double t9272;
  double t9276;
  double t7721;
  double t8984;
  double t9074;
  t932 = Cos(var1[3]);
  t2109 = Cos(var1[5]);
  t2267 = Sin(var1[3]);
  t2171 = Sin(var1[4]);
  t2431 = Sin(var1[5]);
  t449 = Cos(var1[13]);
  t1306 = Cos(var1[4]);
  t1429 = Sin(var1[13]);
  t1788 = Cos(var1[12]);
  t2890 = Sin(var1[12]);
  t2246 = t932*t2109*t2171;
  t2485 = t2267*t2431;
  t2567 = t2246 + t2485;
  t3348 = -1.*t2109*t2267;
  t4611 = t932*t2171*t2431;
  t4630 = t3348 + t4611;
  t5596 = t2109*t2267*t2171;
  t5625 = -1.*t932*t2431;
  t5628 = t5596 + t5625;
  t6103 = t932*t2109;
  t6325 = t2267*t2171*t2431;
  t6638 = t6103 + t6325;
  t2687 = t1788*t2567;
  t4793 = -1.*t2890*t4630;
  t5212 = t2687 + t4793;
  t5950 = t1788*t5628;
  t6755 = -1.*t2890*t6638;
  t6908 = t5950 + t6755;
  t7833 = t1788*t1306*t2109;
  t8602 = -1.*t1306*t2890*t2431;
  t8780 = t7833 + t8602;
  t9088 = t2890*t2567;
  t9115 = t1788*t4630;
  t9160 = t9088 + t9115;
  t1321 = t449*t932*t1306;
  t5238 = -1.*t1429*t5212;
  t5388 = t1321 + t5238;
  t9396 = -1.*t449;
  t9408 = 1. + t9396;
  t9433 = -0.183*t9408;
  t9434 = 0. + t9433;
  t9478 = 0.047*t2890;
  t9484 = 0. + t9478;
  t9519 = -1.*t1788;
  t9526 = 1. + t9519;
  t9548 = -0.047*t9526;
  t9569 = 0. + t9548;
  t9175 = t2890*t5628;
  t9178 = t1788*t6638;
  t9217 = t9175 + t9178;
  t9587 = -0.183*t1429;
  t9589 = 0. + t9587;
  t5408 = t449*t1306*t2267;
  t7258 = -1.*t1429*t6908;
  t7701 = t5408 + t7258;
  t9223 = t1306*t2109*t2890;
  t9272 = t1788*t1306*t2431;
  t9276 = t9223 + t9272;
  t7721 = -1.*t449*t2171;
  t8984 = -1.*t1429*t8780;
  t9074 = t7721 + t8984;
  p_output1[0]=t5388;
  p_output1[1]=t7701;
  p_output1[2]=t9074;
  p_output1[3]=0.;
  p_output1[4]=t9160;
  p_output1[5]=t9217;
  p_output1[6]=t9276;
  p_output1[7]=0.;
  p_output1[8]=t449*t5212 + t1306*t1429*t932;
  p_output1[9]=t1306*t1429*t2267 + t449*t6908;
  p_output1[10]=-1.*t1429*t2171 + t449*t8780;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.183*t5388 - 0.13205*t9160 + t1306*t932*t9434 + t2567*t9484 + t4630*t9569 + t5212*t9589 + var1[0];
  p_output1[13]=0. - 0.183*t7701 - 0.13205*t9217 + t1306*t2267*t9434 + t5628*t9484 + t6638*t9569 + t6908*t9589 + var1[1];
  p_output1[14]=0. - 0.183*t9074 - 0.13205*t9276 - 1.*t2171*t9434 + t1306*t2109*t9484 + t1306*t2431*t9569 + t8780*t9589 + var1[2];
  p_output1[15]=1.;
}



void H_RR_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
