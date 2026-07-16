/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:20:35 GMT-05:00
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
  double t227;
  double t580;
  double t621;
  double t616;
  double t623;
  double t184;
  double t291;
  double t509;
  double t525;
  double t1095;
  double t619;
  double t637;
  double t1036;
  double t1133;
  double t1162;
  double t1182;
  double t1757;
  double t1828;
  double t1995;
  double t2149;
  double t2201;
  double t2206;
  double t1069;
  double t1197;
  double t1209;
  double t2061;
  double t2260;
  double t2327;
  double t2504;
  double t2711;
  double t2741;
  double t2873;
  double t2921;
  double t2937;
  double t372;
  double t1630;
  double t1679;
  double t3513;
  double t3590;
  double t3654;
  double t3655;
  double t3688;
  double t3717;
  double t3738;
  double t3783;
  double t3804;
  double t3825;
  double t2975;
  double t3040;
  double t3095;
  double t3854;
  double t3864;
  double t1709;
  double t2452;
  double t2472;
  double t3096;
  double t3152;
  double t3158;
  double t2499;
  double t2748;
  double t2861;
  t227 = Cos(var1[3]);
  t580 = Cos(var1[5]);
  t621 = Sin(var1[3]);
  t616 = Sin(var1[4]);
  t623 = Sin(var1[5]);
  t184 = Cos(var1[13]);
  t291 = Cos(var1[4]);
  t509 = Sin(var1[13]);
  t525 = Cos(var1[12]);
  t1095 = Sin(var1[12]);
  t619 = t227*t580*t616;
  t637 = t621*t623;
  t1036 = t619 + t637;
  t1133 = -1.*t580*t621;
  t1162 = t227*t616*t623;
  t1182 = t1133 + t1162;
  t1757 = t580*t621*t616;
  t1828 = -1.*t227*t623;
  t1995 = t1757 + t1828;
  t2149 = t227*t580;
  t2201 = t621*t616*t623;
  t2206 = t2149 + t2201;
  t1069 = t525*t1036;
  t1197 = -1.*t1095*t1182;
  t1209 = t1069 + t1197;
  t2061 = t525*t1995;
  t2260 = -1.*t1095*t2206;
  t2327 = t2061 + t2260;
  t2504 = t525*t291*t580;
  t2711 = -1.*t291*t1095*t623;
  t2741 = t2504 + t2711;
  t2873 = t1095*t1036;
  t2921 = t525*t1182;
  t2937 = t2873 + t2921;
  t372 = t184*t227*t291;
  t1630 = -1.*t509*t1209;
  t1679 = t372 + t1630;
  t3513 = -1.*t184;
  t3590 = 1. + t3513;
  t3654 = -0.183*t3590;
  t3655 = 0. + t3654;
  t3688 = 0.047*t1095;
  t3717 = 0. + t3688;
  t3738 = -1.*t525;
  t3783 = 1. + t3738;
  t3804 = -0.047*t3783;
  t3825 = 0. + t3804;
  t2975 = t1095*t1995;
  t3040 = t525*t2206;
  t3095 = t2975 + t3040;
  t3854 = -0.183*t509;
  t3864 = 0. + t3854;
  t1709 = t184*t291*t621;
  t2452 = -1.*t509*t2327;
  t2472 = t1709 + t2452;
  t3096 = t291*t580*t1095;
  t3152 = t525*t291*t623;
  t3158 = t3096 + t3152;
  t2499 = -1.*t184*t616;
  t2748 = -1.*t509*t2741;
  t2861 = t2499 + t2748;
  p_output1[0]=t1679;
  p_output1[1]=t2472;
  p_output1[2]=t2861;
  p_output1[3]=0.;
  p_output1[4]=t2937;
  p_output1[5]=t3095;
  p_output1[6]=t3158;
  p_output1[7]=0.;
  p_output1[8]=t1209*t184 + t227*t291*t509;
  p_output1[9]=t184*t2327 + t291*t509*t621;
  p_output1[10]=t184*t2741 - 1.*t509*t616;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.183*t1679 - 0.15331*t2937 + t227*t291*t3655 + t1036*t3717 + t1182*t3825 + t1209*t3864 + var1[0];
  p_output1[13]=0. - 0.183*t2472 - 0.15331*t3095 + t1995*t3717 + t2206*t3825 + t2327*t3864 + t291*t3655*t621 + var1[1];
  p_output1[14]=0. - 0.183*t2861 - 0.15331*t3158 + t2741*t3864 + t291*t3717*t580 - 1.*t3655*t616 + t291*t3825*t623 + var1[2];
  p_output1[15]=1.;
}



void H_RR_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
