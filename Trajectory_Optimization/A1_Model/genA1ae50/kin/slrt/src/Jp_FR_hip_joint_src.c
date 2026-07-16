/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:09:53 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_FR_hip_joint_src.h"

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
  double t666;
  double t826;
  double t868;
  double t825;
  double t886;
  double t763;
  double t854;
  double t889;
  double t892;
  double t923;
  double t937;
  double t940;
  double t942;
  double t586;
  double t789;
  double t796;
  double t805;
  double t820;
  double t955;
  double t959;
  double t993;
  double t1003;
  double t1030;
  double t1039;
  double t1042;
  double t1047;
  double t1281;
  double t1294;
  double t1307;
  double t1389;
  double t1392;
  double t1393;
  double t1315;
  double t1418;
  double t1538;
  double t1541;
  double t1566;
  double t1461;
  double t1467;
  double t1490;
  double t1491;
  t666 = Sin(var1[3]);
  t826 = Cos(var1[5]);
  t868 = Sin(var1[4]);
  t825 = Cos(var1[3]);
  t886 = Sin(var1[5]);
  t763 = Cos(var1[6]);
  t854 = -1.*t825*t826;
  t889 = -1.*t666*t868*t886;
  t892 = t854 + t889;
  t923 = -1.*t826*t666*t868;
  t937 = t825*t886;
  t940 = t923 + t937;
  t942 = Sin(var1[6]);
  t586 = Cos(var1[4]);
  t789 = -1.*t763;
  t796 = 1. + t789;
  t805 = -0.047*t796;
  t820 = 0. + t805;
  t955 = 0.047*t942;
  t959 = 0. + t955;
  t993 = -1.*t826*t666;
  t1003 = t825*t868*t886;
  t1030 = t993 + t1003;
  t1039 = t825*t826*t868;
  t1042 = t666*t886;
  t1047 = t1039 + t1042;
  t1281 = t826*t666;
  t1294 = -1.*t825*t868*t886;
  t1307 = t1281 + t1294;
  t1389 = t826*t666*t868;
  t1392 = -1.*t825*t886;
  t1393 = t1389 + t1392;
  t1315 = t763*t1047;
  t1418 = t763*t1393;
  t1538 = t825*t826;
  t1541 = t666*t868*t886;
  t1566 = t1538 + t1541;
  t1461 = t586*t826*t763;
  t1467 = -1.*t586*t886*t942;
  t1490 = t1461 + t1467;
  t1491 = -0.047*t1490;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=-0.183*t586*t666 + t820*t892 - 0.047*(t763*t892 + t940*t942) + t940*t959;
  p_output1[10]=t1030*t820 + 0.183*t586*t825 - 0.047*(t1030*t763 + t1047*t942) + t1047*t959;
  p_output1[11]=0;
  p_output1[12]=-0.183*t825*t868 + t586*t820*t825*t886 - 0.047*(t586*t763*t825*t886 + t586*t825*t826*t942) + t586*t825*t826*t959;
  p_output1[13]=-0.183*t666*t868 + t586*t666*t820*t886 - 0.047*(t586*t666*t763*t886 + t586*t666*t826*t942) + t586*t666*t826*t959;
  p_output1[14]=-0.183*t586 - 1.*t820*t868*t886 - 0.047*(-1.*t763*t868*t886 - 1.*t826*t868*t942) - 1.*t826*t868*t959;
  p_output1[15]=t1047*t820 - 0.047*(t1315 + t1307*t942) + t1307*t959;
  p_output1[16]=t1393*t820 - 0.047*(t1418 + t892*t942) + t892*t959;
  p_output1[17]=t1491 + t586*t820*t826 - 1.*t586*t886*t959;
  p_output1[18]=0.047*t1047*t763 - 0.047*t1030*t942 - 0.047*(t1315 - 1.*t1030*t942);
  p_output1[19]=0.047*t1393*t763 - 0.047*t1566*t942 - 0.047*(t1418 - 1.*t1566*t942);
  p_output1[20]=t1491 + 0.047*t586*t763*t826 - 0.047*t586*t886*t942;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
}



void Jp_FR_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
