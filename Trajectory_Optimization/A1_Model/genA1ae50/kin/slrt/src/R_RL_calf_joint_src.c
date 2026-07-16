/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:10:21 GMT-05:00
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
  double t1515;
  double t5681;
  double t6548;
  double t5683;
  double t7080;
  double t5118;
  double t1529;
  double t1904;
  double t5162;
  double t6547;
  double t7609;
  double t7938;
  double t8233;
  double t8333;
  double t8542;
  double t8597;
  double t8608;
  double t8610;
  double t8611;
  double t421;
  double t8801;
  double t9975;
  double t9981;
  double t9995;
  double t9997;
  double t9999;
  double t10014;
  double t10019;
  double t10022;
  double t10040;
  double t10216;
  double t10217;
  double t10218;
  double t4606;
  double t8738;
  double t8753;
  double t8897;
  double t8961;
  double t9333;
  double t9974;
  double t10055;
  double t10087;
  double t10131;
  double t10150;
  double t10184;
  double t10215;
  double t10219;
  double t10228;
  double t10244;
  double t10254;
  double t10258;
  t1515 = Cos(var1[3]);
  t5681 = Cos(var1[5]);
  t6548 = Sin(var1[3]);
  t5683 = Sin(var1[4]);
  t7080 = Sin(var1[5]);
  t5118 = Cos(var1[16]);
  t1529 = Cos(var1[4]);
  t1904 = Sin(var1[16]);
  t5162 = Cos(var1[15]);
  t6547 = t1515*t5681*t5683;
  t7609 = t6548*t7080;
  t7938 = t6547 + t7609;
  t8233 = t5162*t7938;
  t8333 = Sin(var1[15]);
  t8542 = -1.*t5681*t6548;
  t8597 = t1515*t5683*t7080;
  t8608 = t8542 + t8597;
  t8610 = -1.*t8333*t8608;
  t8611 = t8233 + t8610;
  t421 = Sin(var1[17]);
  t8801 = Cos(var1[17]);
  t9975 = t5681*t6548*t5683;
  t9981 = -1.*t1515*t7080;
  t9995 = t9975 + t9981;
  t9997 = t5162*t9995;
  t9999 = t1515*t5681;
  t10014 = t6548*t5683*t7080;
  t10019 = t9999 + t10014;
  t10022 = -1.*t8333*t10019;
  t10040 = t9997 + t10022;
  t10216 = t5162*t1529*t5681;
  t10217 = -1.*t1529*t8333*t7080;
  t10218 = t10216 + t10217;
  t4606 = t1515*t1529*t1904;
  t8738 = t5118*t8611;
  t8753 = t4606 + t8738;
  t8897 = t5118*t1515*t1529;
  t8961 = -1.*t1904*t8611;
  t9333 = t8897 + t8961;
  t9974 = t1529*t1904*t6548;
  t10055 = t5118*t10040;
  t10087 = t9974 + t10055;
  t10131 = t5118*t1529*t6548;
  t10150 = -1.*t1904*t10040;
  t10184 = t10131 + t10150;
  t10215 = -1.*t1904*t5683;
  t10219 = t5118*t10218;
  t10228 = t10215 + t10219;
  t10244 = -1.*t5118*t5683;
  t10254 = -1.*t1904*t10218;
  t10258 = t10244 + t10254;
  p_output1[0]=-1.*t421*t8753 + t8801*t9333;
  p_output1[1]=-1.*t10087*t421 + t10184*t8801;
  p_output1[2]=-1.*t10228*t421 + t10258*t8801;
  p_output1[3]=t7938*t8333 + t5162*t8608;
  p_output1[4]=t10019*t5162 + t8333*t9995;
  p_output1[5]=t1529*t5162*t7080 + t1529*t5681*t8333;
  p_output1[6]=t8753*t8801 + t421*t9333;
  p_output1[7]=t10184*t421 + t10087*t8801;
  p_output1[8]=t10258*t421 + t10228*t8801;
}



void R_RL_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
