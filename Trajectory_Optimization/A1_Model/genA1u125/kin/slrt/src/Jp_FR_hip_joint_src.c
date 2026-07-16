/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:20:18 GMT-05:00
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
  double t747;
  double t5686;
  double t5736;
  double t5554;
  double t5739;
  double t2770;
  double t5702;
  double t5756;
  double t5760;
  double t5797;
  double t5827;
  double t5850;
  double t5883;
  double t417;
  double t2863;
  double t3808;
  double t3981;
  double t5326;
  double t5914;
  double t5927;
  double t6073;
  double t6075;
  double t6076;
  double t6101;
  double t6147;
  double t6166;
  double t6572;
  double t6602;
  double t6615;
  double t6805;
  double t6834;
  double t6909;
  double t6683;
  double t7022;
  double t7193;
  double t7249;
  double t7285;
  double t7079;
  double t7083;
  double t7092;
  double t7116;
  t747 = Sin(var1[3]);
  t5686 = Cos(var1[5]);
  t5736 = Sin(var1[4]);
  t5554 = Cos(var1[3]);
  t5739 = Sin(var1[5]);
  t2770 = Cos(var1[6]);
  t5702 = -1.*t5554*t5686;
  t5756 = -1.*t747*t5736*t5739;
  t5760 = t5702 + t5756;
  t5797 = -1.*t5686*t747*t5736;
  t5827 = t5554*t5739;
  t5850 = t5797 + t5827;
  t5883 = Sin(var1[6]);
  t417 = Cos(var1[4]);
  t2863 = -1.*t2770;
  t3808 = 1. + t2863;
  t3981 = -0.047*t3808;
  t5326 = 0. + t3981;
  t5914 = 0.047*t5883;
  t5927 = 0. + t5914;
  t6073 = -1.*t5686*t747;
  t6075 = t5554*t5736*t5739;
  t6076 = t6073 + t6075;
  t6101 = t5554*t5686*t5736;
  t6147 = t747*t5739;
  t6166 = t6101 + t6147;
  t6572 = t5686*t747;
  t6602 = -1.*t5554*t5736*t5739;
  t6615 = t6572 + t6602;
  t6805 = t5686*t747*t5736;
  t6834 = -1.*t5554*t5739;
  t6909 = t6805 + t6834;
  t6683 = t2770*t6166;
  t7022 = t2770*t6909;
  t7193 = t5554*t5686;
  t7249 = t747*t5736*t5739;
  t7285 = t7193 + t7249;
  t7079 = t417*t5686*t2770;
  t7083 = -1.*t417*t5739*t5883;
  t7092 = t7079 + t7083;
  t7116 = -0.047*t7092;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t5326*t5760 - 0.047*(t2770*t5760 + t5850*t5883) + t5850*t5927 - 0.183*t417*t747;
  p_output1[10]=0.183*t417*t5554 + t5326*t6076 + t5927*t6166 - 0.047*(t2770*t6076 + t5883*t6166);
  p_output1[11]=0;
  p_output1[12]=-0.183*t5554*t5736 + t417*t5326*t5554*t5739 - 0.047*(t2770*t417*t5554*t5739 + t417*t5554*t5686*t5883) + t417*t5554*t5686*t5927;
  p_output1[13]=-0.183*t5736*t747 + t417*t5326*t5739*t747 + t417*t5686*t5927*t747 - 0.047*(t2770*t417*t5739*t747 + t417*t5686*t5883*t747);
  p_output1[14]=-0.183*t417 - 1.*t5326*t5736*t5739 - 0.047*(-1.*t2770*t5736*t5739 - 1.*t5686*t5736*t5883) - 1.*t5686*t5736*t5927;
  p_output1[15]=t5326*t6166 + t5927*t6615 - 0.047*(t5883*t6615 + t6683);
  p_output1[16]=t5760*t5927 + t5326*t6909 - 0.047*(t5760*t5883 + t7022);
  p_output1[17]=t417*t5326*t5686 - 1.*t417*t5739*t5927 + t7116;
  p_output1[18]=-0.047*t5883*t6076 + 0.047*t2770*t6166 - 0.047*(-1.*t5883*t6076 + t6683);
  p_output1[19]=0.047*t2770*t6909 - 0.047*t5883*t7285 - 0.047*(t7022 - 1.*t5883*t7285);
  p_output1[20]=0.047*t2770*t417*t5686 - 0.047*t417*t5739*t5883 + t7116;
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
