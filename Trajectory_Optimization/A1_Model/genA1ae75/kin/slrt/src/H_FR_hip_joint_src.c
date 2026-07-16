/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:50:32 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FR_hip_joint_src.h"

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
  double t1686;
  double t1723;
  double t1674;
  double t1739;
  double t1763;
  double t1769;
  double t1755;
  double t1834;
  double t1816;
  double t1817;
  double t1819;
  double t1768;
  double t1790;
  double t1800;
  double t1860;
  double t1864;
  double t1865;
  double t1849;
  double t1852;
  double t1857;
  double t1814;
  double t1837;
  double t1839;
  double t2097;
  double t2133;
  double t2141;
  double t2159;
  double t2190;
  double t2204;
  double t1858;
  double t1871;
  double t1908;
  double t1921;
  double t1922;
  double t1927;
  t1686 = Cos(var1[4]);
  t1723 = Sin(var1[3]);
  t1674 = Cos(var1[3]);
  t1739 = Sin(var1[4]);
  t1763 = Cos(var1[5]);
  t1769 = Sin(var1[5]);
  t1755 = Cos(var1[6]);
  t1834 = Sin(var1[6]);
  t1816 = t1674*t1763*t1739;
  t1817 = t1723*t1769;
  t1819 = t1816 + t1817;
  t1768 = -1.*t1763*t1723;
  t1790 = t1674*t1739*t1769;
  t1800 = t1768 + t1790;
  t1860 = t1763*t1723*t1739;
  t1864 = -1.*t1674*t1769;
  t1865 = t1860 + t1864;
  t1849 = t1674*t1763;
  t1852 = t1723*t1739*t1769;
  t1857 = t1849 + t1852;
  t1814 = t1755*t1800;
  t1837 = t1819*t1834;
  t1839 = t1814 + t1837;
  t2097 = -1.*t1755;
  t2133 = 1. + t2097;
  t2141 = -0.047*t2133;
  t2159 = 0. + t2141;
  t2190 = 0.047*t1834;
  t2204 = 0. + t2190;
  t1858 = t1755*t1857;
  t1871 = t1865*t1834;
  t1908 = t1858 + t1871;
  t1921 = t1686*t1755*t1769;
  t1922 = t1686*t1763*t1834;
  t1927 = t1921 + t1922;
  p_output1[0]=t1674*t1686;
  p_output1[1]=t1686*t1723;
  p_output1[2]=-1.*t1739;
  p_output1[3]=0.;
  p_output1[4]=t1839;
  p_output1[5]=t1908;
  p_output1[6]=t1927;
  p_output1[7]=0.;
  p_output1[8]=t1755*t1819 - 1.*t1800*t1834;
  p_output1[9]=-1.*t1834*t1857 + t1755*t1865;
  p_output1[10]=t1686*t1755*t1763 - 1.*t1686*t1769*t1834;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.183*t1674*t1686 - 0.047*t1839 + t1800*t2159 + t1819*t2204 + var1[0];
  p_output1[13]=0. + 0.183*t1686*t1723 - 0.047*t1908 + t1857*t2159 + t1865*t2204 + var1[1];
  p_output1[14]=0. - 0.183*t1739 - 0.047*t1927 + t1686*t1769*t2159 + t1686*t1763*t2204 + var1[2];
  p_output1[15]=1.;
}



void H_FR_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
