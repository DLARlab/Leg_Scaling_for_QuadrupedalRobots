/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:20:50 GMT-05:00
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
  double t860;
  double t3226;
  double t3708;
  double t3254;
  double t3827;
  double t2080;
  double t1216;
  double t1219;
  double t2877;
  double t3276;
  double t4598;
  double t4728;
  double t4745;
  double t4996;
  double t5107;
  double t5136;
  double t5294;
  double t5445;
  double t5457;
  double t288;
  double t5794;
  double t6033;
  double t6086;
  double t6104;
  double t6129;
  double t6130;
  double t6137;
  double t6150;
  double t6166;
  double t6181;
  double t6269;
  double t6278;
  double t6281;
  double t2032;
  double t5485;
  double t5547;
  double t5898;
  double t5957;
  double t5982;
  double t5999;
  double t6183;
  double t6189;
  double t6205;
  double t6221;
  double t6222;
  double t6267;
  double t6303;
  double t6305;
  double t6313;
  double t6317;
  double t6322;
  t860 = Cos(var1[3]);
  t3226 = Cos(var1[5]);
  t3708 = Sin(var1[3]);
  t3254 = Sin(var1[4]);
  t3827 = Sin(var1[5]);
  t2080 = Cos(var1[10]);
  t1216 = Cos(var1[4]);
  t1219 = Sin(var1[10]);
  t2877 = Cos(var1[9]);
  t3276 = t860*t3226*t3254;
  t4598 = t3708*t3827;
  t4728 = t3276 + t4598;
  t4745 = t2877*t4728;
  t4996 = Sin(var1[9]);
  t5107 = -1.*t3226*t3708;
  t5136 = t860*t3254*t3827;
  t5294 = t5107 + t5136;
  t5445 = -1.*t4996*t5294;
  t5457 = t4745 + t5445;
  t288 = Sin(var1[11]);
  t5794 = Cos(var1[11]);
  t6033 = t3226*t3708*t3254;
  t6086 = -1.*t860*t3827;
  t6104 = t6033 + t6086;
  t6129 = t2877*t6104;
  t6130 = t860*t3226;
  t6137 = t3708*t3254*t3827;
  t6150 = t6130 + t6137;
  t6166 = -1.*t4996*t6150;
  t6181 = t6129 + t6166;
  t6269 = t2877*t1216*t3226;
  t6278 = -1.*t1216*t4996*t3827;
  t6281 = t6269 + t6278;
  t2032 = t860*t1216*t1219;
  t5485 = t2080*t5457;
  t5547 = t2032 + t5485;
  t5898 = t2080*t860*t1216;
  t5957 = -1.*t1219*t5457;
  t5982 = t5898 + t5957;
  t5999 = t1216*t1219*t3708;
  t6183 = t2080*t6181;
  t6189 = t5999 + t6183;
  t6205 = t2080*t1216*t3708;
  t6221 = -1.*t1219*t6181;
  t6222 = t6205 + t6221;
  t6267 = -1.*t1219*t3254;
  t6303 = t2080*t6281;
  t6305 = t6267 + t6303;
  t6313 = -1.*t2080*t3254;
  t6317 = -1.*t1219*t6281;
  t6322 = t6313 + t6317;
  p_output1[0]=-1.*t288*t5547 + t5794*t5982;
  p_output1[1]=-1.*t288*t6189 + t5794*t6222;
  p_output1[2]=-1.*t288*t6305 + t5794*t6322;
  p_output1[3]=t4728*t4996 + t2877*t5294;
  p_output1[4]=t4996*t6104 + t2877*t6150;
  p_output1[5]=t1216*t2877*t3827 + t1216*t3226*t4996;
  p_output1[6]=t5547*t5794 + t288*t5982;
  p_output1[7]=t5794*t6189 + t288*t6222;
  p_output1[8]=t5794*t6305 + t288*t6322;
}



void R_FLfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
