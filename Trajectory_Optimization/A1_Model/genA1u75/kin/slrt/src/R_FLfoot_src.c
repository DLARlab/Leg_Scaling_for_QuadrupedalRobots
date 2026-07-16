/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:18:17 GMT-05:00
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
  double t212;
  double t929;
  double t1194;
  double t1034;
  double t1633;
  double t724;
  double t430;
  double t434;
  double t765;
  double t1070;
  double t1749;
  double t1881;
  double t2151;
  double t2352;
  double t2705;
  double t3076;
  double t3103;
  double t3178;
  double t3287;
  double t191;
  double t3792;
  double t4916;
  double t5161;
  double t5189;
  double t5354;
  double t5395;
  double t5411;
  double t5425;
  double t5445;
  double t5537;
  double t6068;
  double t6084;
  double t6087;
  double t474;
  double t3556;
  double t3621;
  double t3898;
  double t4130;
  double t4208;
  double t4846;
  double t5568;
  double t5586;
  double t5641;
  double t5790;
  double t5810;
  double t6064;
  double t6104;
  double t6112;
  double t6138;
  double t6144;
  double t6145;
  t212 = Cos(var1[3]);
  t929 = Cos(var1[5]);
  t1194 = Sin(var1[3]);
  t1034 = Sin(var1[4]);
  t1633 = Sin(var1[5]);
  t724 = Cos(var1[10]);
  t430 = Cos(var1[4]);
  t434 = Sin(var1[10]);
  t765 = Cos(var1[9]);
  t1070 = t212*t929*t1034;
  t1749 = t1194*t1633;
  t1881 = t1070 + t1749;
  t2151 = t765*t1881;
  t2352 = Sin(var1[9]);
  t2705 = -1.*t929*t1194;
  t3076 = t212*t1034*t1633;
  t3103 = t2705 + t3076;
  t3178 = -1.*t2352*t3103;
  t3287 = t2151 + t3178;
  t191 = Sin(var1[11]);
  t3792 = Cos(var1[11]);
  t4916 = t929*t1194*t1034;
  t5161 = -1.*t212*t1633;
  t5189 = t4916 + t5161;
  t5354 = t765*t5189;
  t5395 = t212*t929;
  t5411 = t1194*t1034*t1633;
  t5425 = t5395 + t5411;
  t5445 = -1.*t2352*t5425;
  t5537 = t5354 + t5445;
  t6068 = t765*t430*t929;
  t6084 = -1.*t430*t2352*t1633;
  t6087 = t6068 + t6084;
  t474 = t212*t430*t434;
  t3556 = t724*t3287;
  t3621 = t474 + t3556;
  t3898 = t724*t212*t430;
  t4130 = -1.*t434*t3287;
  t4208 = t3898 + t4130;
  t4846 = t430*t434*t1194;
  t5568 = t724*t5537;
  t5586 = t4846 + t5568;
  t5641 = t724*t430*t1194;
  t5790 = -1.*t434*t5537;
  t5810 = t5641 + t5790;
  t6064 = -1.*t434*t1034;
  t6104 = t724*t6087;
  t6112 = t6064 + t6104;
  t6138 = -1.*t724*t1034;
  t6144 = -1.*t434*t6087;
  t6145 = t6138 + t6144;
  p_output1[0]=-1.*t191*t3621 + t3792*t4208;
  p_output1[1]=-1.*t191*t5586 + t3792*t5810;
  p_output1[2]=-1.*t191*t6112 + t3792*t6145;
  p_output1[3]=t1881*t2352 + t3103*t765;
  p_output1[4]=t2352*t5189 + t5425*t765;
  p_output1[5]=t1633*t430*t765 + t2352*t430*t929;
  p_output1[6]=t3621*t3792 + t191*t4208;
  p_output1[7]=t3792*t5586 + t191*t5810;
  p_output1[8]=t3792*t6112 + t191*t6145;
}



void R_FLfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
