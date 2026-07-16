/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:20:22 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FR_calf_joint_src.h"

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
  double t325;
  double t1471;
  double t1564;
  double t1480;
  double t1575;
  double t1247;
  double t1553;
  double t1707;
  double t1720;
  double t1781;
  double t1796;
  double t1821;
  double t2219;
  double t462;
  double t2914;
  double t2915;
  double t2917;
  double t377;
  double t2924;
  double t3447;
  double t3666;
  double t3735;
  double t3889;
  double t4104;
  double t4259;
  double t4341;
  double t3375;
  double t3386;
  double t3390;
  double t718;
  double t1078;
  double t1141;
  double t1220;
  double t1277;
  double t1280;
  double t1287;
  double t1412;
  double t2230;
  double t2357;
  double t5984;
  double t5987;
  double t5988;
  double t5997;
  double t6117;
  double t6180;
  double t3199;
  double t3218;
  double t6354;
  double t6379;
  double t6395;
  double t3793;
  double t3927;
  double t3955;
  double t4519;
  double t4538;
  double t4556;
  double t6509;
  double t6569;
  double t6596;
  double t6435;
  double t6444;
  double t6447;
  double t7051;
  double t7079;
  double t7089;
  double t7138;
  double t7156;
  double t7168;
  double t7102;
  double t7107;
  double t7114;
  t325 = Cos(var1[3]);
  t1471 = Cos(var1[5]);
  t1564 = Sin(var1[4]);
  t1480 = Sin(var1[3]);
  t1575 = Sin(var1[5]);
  t1247 = Cos(var1[6]);
  t1553 = -1.*t1471*t1480;
  t1707 = t325*t1564*t1575;
  t1720 = t1553 + t1707;
  t1781 = t325*t1471*t1564;
  t1796 = t1480*t1575;
  t1821 = t1781 + t1796;
  t2219 = Sin(var1[6]);
  t462 = Cos(var1[7]);
  t2914 = t1247*t1821;
  t2915 = -1.*t1720*t2219;
  t2917 = t2914 + t2915;
  t377 = Cos(var1[4]);
  t2924 = Sin(var1[7]);
  t3447 = Cos(var1[8]);
  t3666 = -1.*t3447;
  t3735 = 1. + t3666;
  t3889 = Sin(var1[8]);
  t4104 = t325*t377*t462;
  t4259 = -1.*t2917*t2924;
  t4341 = t4104 + t4259;
  t3375 = t462*t2917;
  t3386 = t325*t377*t2924;
  t3390 = t3375 + t3386;
  t718 = -1.*t462;
  t1078 = 1. + t718;
  t1141 = 0.183*t1078;
  t1220 = 0. + t1141;
  t1277 = -1.*t1247;
  t1280 = 1. + t1277;
  t1287 = -0.047*t1280;
  t1412 = 0. + t1287;
  t2230 = 0.047*t2219;
  t2357 = 0. + t2230;
  t5984 = t325*t1471;
  t5987 = t1480*t1564*t1575;
  t5988 = t5984 + t5987;
  t5997 = t1471*t1480*t1564;
  t6117 = -1.*t325*t1575;
  t6180 = t5997 + t6117;
  t3199 = 0.183*t2924;
  t3218 = 0. + t3199;
  t6354 = t1247*t6180;
  t6379 = -1.*t5988*t2219;
  t6395 = t6354 + t6379;
  t3793 = -0.25*t3735;
  t3927 = 0.183*t3889;
  t3955 = 0. + t3793 + t3927;
  t4519 = 0.183*t3735;
  t4538 = 0.25*t3889;
  t4556 = 0. + t4519 + t4538;
  t6509 = t377*t462*t1480;
  t6569 = -1.*t6395*t2924;
  t6596 = t6509 + t6569;
  t6435 = t462*t6395;
  t6444 = t377*t1480*t2924;
  t6447 = t6435 + t6444;
  t7051 = t377*t1471*t1247;
  t7079 = -1.*t377*t1575*t2219;
  t7089 = t7051 + t7079;
  t7138 = -1.*t462*t1564;
  t7156 = -1.*t7089*t2924;
  t7168 = t7138 + t7156;
  t7102 = t462*t7089;
  t7107 = -1.*t1564*t2924;
  t7114 = t7102 + t7107;
  p_output1[0]=0. + t1412*t1720 - 0.15331*(t1247*t1720 + t1821*t2219) + t1821*t2357 + t2917*t3218 + t1220*t325*t377 + t3390*t3955 + 0.183*(-1.*t3390*t3889 + t3447*t4341) - 0.25*(t3390*t3447 + t3889*t4341) + t4341*t4556 + var1[0];
  p_output1[1]=0. + t1220*t1480*t377 + t1412*t5988 + t2357*t6180 - 0.15331*(t1247*t5988 + t2219*t6180) + t3218*t6395 + t3955*t6447 + t4556*t6596 + 0.183*(-1.*t3889*t6447 + t3447*t6596) - 0.25*(t3447*t6447 + t3889*t6596) + var1[1];
  p_output1[2]=0. - 1.*t1220*t1564 + t1412*t1575*t377 + t1471*t2357*t377 - 0.15331*(t1247*t1575*t377 + t1471*t2219*t377) + t3218*t7089 + t3955*t7114 + t4556*t7168 + 0.183*(-1.*t3889*t7114 + t3447*t7168) - 0.25*(t3447*t7114 + t3889*t7168) + var1[2];
}



void p_FR_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
