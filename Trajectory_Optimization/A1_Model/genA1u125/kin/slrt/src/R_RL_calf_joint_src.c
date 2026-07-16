/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:20:45 GMT-05:00
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
  double t321;
  double t1176;
  double t2103;
  double t1204;
  double t2126;
  double t1123;
  double t405;
  double t661;
  double t1143;
  double t1607;
  double t2333;
  double t2743;
  double t2902;
  double t4275;
  double t4460;
  double t4480;
  double t5088;
  double t5191;
  double t5196;
  double t302;
  double t5473;
  double t5677;
  double t5747;
  double t5749;
  double t5786;
  double t5809;
  double t5854;
  double t5881;
  double t5920;
  double t5932;
  double t6157;
  double t6174;
  double t6197;
  double t753;
  double t5396;
  double t5434;
  double t5480;
  double t5483;
  double t5488;
  double t5649;
  double t5942;
  double t5962;
  double t6009;
  double t6029;
  double t6054;
  double t6133;
  double t6199;
  double t6242;
  double t6284;
  double t6329;
  double t6348;
  t321 = Cos(var1[3]);
  t1176 = Cos(var1[5]);
  t2103 = Sin(var1[3]);
  t1204 = Sin(var1[4]);
  t2126 = Sin(var1[5]);
  t1123 = Cos(var1[16]);
  t405 = Cos(var1[4]);
  t661 = Sin(var1[16]);
  t1143 = Cos(var1[15]);
  t1607 = t321*t1176*t1204;
  t2333 = t2103*t2126;
  t2743 = t1607 + t2333;
  t2902 = t1143*t2743;
  t4275 = Sin(var1[15]);
  t4460 = -1.*t1176*t2103;
  t4480 = t321*t1204*t2126;
  t5088 = t4460 + t4480;
  t5191 = -1.*t4275*t5088;
  t5196 = t2902 + t5191;
  t302 = Sin(var1[17]);
  t5473 = Cos(var1[17]);
  t5677 = t1176*t2103*t1204;
  t5747 = -1.*t321*t2126;
  t5749 = t5677 + t5747;
  t5786 = t1143*t5749;
  t5809 = t321*t1176;
  t5854 = t2103*t1204*t2126;
  t5881 = t5809 + t5854;
  t5920 = -1.*t4275*t5881;
  t5932 = t5786 + t5920;
  t6157 = t1143*t405*t1176;
  t6174 = -1.*t405*t4275*t2126;
  t6197 = t6157 + t6174;
  t753 = t321*t405*t661;
  t5396 = t1123*t5196;
  t5434 = t753 + t5396;
  t5480 = t1123*t321*t405;
  t5483 = -1.*t661*t5196;
  t5488 = t5480 + t5483;
  t5649 = t405*t661*t2103;
  t5942 = t1123*t5932;
  t5962 = t5649 + t5942;
  t6009 = t1123*t405*t2103;
  t6029 = -1.*t661*t5932;
  t6054 = t6009 + t6029;
  t6133 = -1.*t661*t1204;
  t6199 = t1123*t6197;
  t6242 = t6133 + t6199;
  t6284 = -1.*t1123*t1204;
  t6329 = -1.*t661*t6197;
  t6348 = t6284 + t6329;
  p_output1[0]=-1.*t302*t5434 + t5473*t5488;
  p_output1[1]=-1.*t302*t5962 + t5473*t6054;
  p_output1[2]=-1.*t302*t6242 + t5473*t6348;
  p_output1[3]=t2743*t4275 + t1143*t5088;
  p_output1[4]=t4275*t5749 + t1143*t5881;
  p_output1[5]=t1143*t2126*t405 + t1176*t405*t4275;
  p_output1[6]=t5434*t5473 + t302*t5488;
  p_output1[7]=t5473*t5962 + t302*t6054;
  p_output1[8]=t5473*t6242 + t302*t6348;
}



void R_RL_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
