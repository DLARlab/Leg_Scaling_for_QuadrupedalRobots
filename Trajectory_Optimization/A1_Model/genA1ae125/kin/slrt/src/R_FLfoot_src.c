/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:03:42 GMT-05:00
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
  double t1269;
  double t2751;
  double t3982;
  double t3030;
  double t4050;
  double t2106;
  double t1485;
  double t1713;
  double t2230;
  double t3755;
  double t4061;
  double t5269;
  double t5360;
  double t5607;
  double t5729;
  double t5740;
  double t5826;
  double t5855;
  double t5862;
  double t396;
  double t5920;
  double t6042;
  double t6049;
  double t6062;
  double t6131;
  double t6146;
  double t6157;
  double t6164;
  double t6169;
  double t6177;
  double t6429;
  double t6442;
  double t6443;
  double t1889;
  double t5877;
  double t5889;
  double t5935;
  double t5944;
  double t5981;
  double t6038;
  double t6179;
  double t6184;
  double t6225;
  double t6253;
  double t6298;
  double t6352;
  double t6539;
  double t6613;
  double t6671;
  double t6930;
  double t6972;
  t1269 = Cos(var1[3]);
  t2751 = Cos(var1[5]);
  t3982 = Sin(var1[3]);
  t3030 = Sin(var1[4]);
  t4050 = Sin(var1[5]);
  t2106 = Cos(var1[10]);
  t1485 = Cos(var1[4]);
  t1713 = Sin(var1[10]);
  t2230 = Cos(var1[9]);
  t3755 = t1269*t2751*t3030;
  t4061 = t3982*t4050;
  t5269 = t3755 + t4061;
  t5360 = t2230*t5269;
  t5607 = Sin(var1[9]);
  t5729 = -1.*t2751*t3982;
  t5740 = t1269*t3030*t4050;
  t5826 = t5729 + t5740;
  t5855 = -1.*t5607*t5826;
  t5862 = t5360 + t5855;
  t396 = Sin(var1[11]);
  t5920 = Cos(var1[11]);
  t6042 = t2751*t3982*t3030;
  t6049 = -1.*t1269*t4050;
  t6062 = t6042 + t6049;
  t6131 = t2230*t6062;
  t6146 = t1269*t2751;
  t6157 = t3982*t3030*t4050;
  t6164 = t6146 + t6157;
  t6169 = -1.*t5607*t6164;
  t6177 = t6131 + t6169;
  t6429 = t2230*t1485*t2751;
  t6442 = -1.*t1485*t5607*t4050;
  t6443 = t6429 + t6442;
  t1889 = t1269*t1485*t1713;
  t5877 = t2106*t5862;
  t5889 = t1889 + t5877;
  t5935 = t2106*t1269*t1485;
  t5944 = -1.*t1713*t5862;
  t5981 = t5935 + t5944;
  t6038 = t1485*t1713*t3982;
  t6179 = t2106*t6177;
  t6184 = t6038 + t6179;
  t6225 = t2106*t1485*t3982;
  t6253 = -1.*t1713*t6177;
  t6298 = t6225 + t6253;
  t6352 = -1.*t1713*t3030;
  t6539 = t2106*t6443;
  t6613 = t6352 + t6539;
  t6671 = -1.*t2106*t3030;
  t6930 = -1.*t1713*t6443;
  t6972 = t6671 + t6930;
  p_output1[0]=-1.*t396*t5889 + t5920*t5981;
  p_output1[1]=-1.*t396*t6184 + t5920*t6298;
  p_output1[2]=-1.*t396*t6613 + t5920*t6972;
  p_output1[3]=t5269*t5607 + t2230*t5826;
  p_output1[4]=t5607*t6062 + t2230*t6164;
  p_output1[5]=t1485*t2230*t4050 + t1485*t2751*t5607;
  p_output1[6]=t5889*t5920 + t396*t5981;
  p_output1[7]=t5920*t6184 + t396*t6298;
  p_output1[8]=t5920*t6613 + t396*t6972;
}



void R_FLfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
