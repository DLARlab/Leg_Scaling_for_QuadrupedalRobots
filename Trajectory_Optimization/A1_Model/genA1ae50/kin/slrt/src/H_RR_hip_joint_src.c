/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:10:08 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RR_hip_joint_src.h"

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
  double t6331;
  double t4141;
  double t7555;
  double t7363;
  double t7667;
  double t7744;
  double t7612;
  double t7769;
  double t7697;
  double t7753;
  double t7755;
  double t7770;
  double t7771;
  double t7772;
  double t7787;
  double t7788;
  double t7799;
  double t7805;
  double t7807;
  double t7809;
  double t7761;
  double t7778;
  double t7780;
  double t7892;
  double t7894;
  double t7910;
  double t7916;
  double t7925;
  double t7940;
  double t7804;
  double t7810;
  double t7818;
  double t7820;
  double t7822;
  double t7831;
  t6331 = Cos(var1[4]);
  t4141 = Cos(var1[3]);
  t7555 = Sin(var1[4]);
  t7363 = Sin(var1[3]);
  t7667 = Cos(var1[5]);
  t7744 = Sin(var1[5]);
  t7612 = Sin(var1[12]);
  t7769 = Cos(var1[12]);
  t7697 = t4141*t7667*t7555;
  t7753 = t7363*t7744;
  t7755 = t7697 + t7753;
  t7770 = -1.*t7667*t7363;
  t7771 = t4141*t7555*t7744;
  t7772 = t7770 + t7771;
  t7787 = t7667*t7363*t7555;
  t7788 = -1.*t4141*t7744;
  t7799 = t7787 + t7788;
  t7805 = t4141*t7667;
  t7807 = t7363*t7555*t7744;
  t7809 = t7805 + t7807;
  t7761 = t7612*t7755;
  t7778 = t7769*t7772;
  t7780 = t7761 + t7778;
  t7892 = 0.047*t7612;
  t7894 = 0. + t7892;
  t7910 = -1.*t7769;
  t7916 = 1. + t7910;
  t7925 = -0.047*t7916;
  t7940 = 0. + t7925;
  t7804 = t7612*t7799;
  t7810 = t7769*t7809;
  t7818 = t7804 + t7810;
  t7820 = t6331*t7667*t7612;
  t7822 = t7769*t6331*t7744;
  t7831 = t7820 + t7822;
  p_output1[0]=t4141*t6331;
  p_output1[1]=t6331*t7363;
  p_output1[2]=-1.*t7555;
  p_output1[3]=0.;
  p_output1[4]=t7780;
  p_output1[5]=t7818;
  p_output1[6]=t7831;
  p_output1[7]=0.;
  p_output1[8]=t7755*t7769 - 1.*t7612*t7772;
  p_output1[9]=t7769*t7799 - 1.*t7612*t7809;
  p_output1[10]=-1.*t6331*t7612*t7744 + t6331*t7667*t7769;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.183*t4141*t6331 - 0.047*t7780 + t7755*t7894 + t7772*t7940 + var1[0];
  p_output1[13]=0. - 0.183*t6331*t7363 - 0.047*t7818 + t7799*t7894 + t7809*t7940 + var1[1];
  p_output1[14]=0. + 0.183*t7555 - 0.047*t7831 + t6331*t7667*t7894 + t6331*t7744*t7940 + var1[2];
  p_output1[15]=1.;
}



void H_RR_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
