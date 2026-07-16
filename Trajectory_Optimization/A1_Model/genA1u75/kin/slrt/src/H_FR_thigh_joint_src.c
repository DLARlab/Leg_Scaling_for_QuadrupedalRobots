/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:17:49 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FR_thigh_joint_src.h"

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
  double t504;
  double t1131;
  double t1888;
  double t1173;
  double t1959;
  double t1090;
  double t1094;
  double t1105;
  double t3932;
  double t4158;
  double t3157;
  double t3176;
  double t3878;
  double t1834;
  double t1969;
  double t2238;
  double t5172;
  double t5174;
  double t5182;
  double t4791;
  double t4822;
  double t4941;
  double t3062;
  double t3949;
  double t4052;
  double t4968;
  double t5341;
  double t5424;
  double t5510;
  double t5516;
  double t5592;
  double t5653;
  double t5743;
  double t5985;
  double t1095;
  double t4179;
  double t4347;
  double t6621;
  double t6664;
  double t6695;
  double t6717;
  double t6772;
  double t6805;
  double t6852;
  double t6867;
  double t6882;
  double t6973;
  double t6031;
  double t6044;
  double t6090;
  double t7029;
  double t7044;
  double t4452;
  double t5425;
  double t5440;
  double t6118;
  double t6181;
  double t6206;
  double t5500;
  double t5633;
  double t5634;
  t504 = Cos(var1[3]);
  t1131 = Cos(var1[5]);
  t1888 = Sin(var1[3]);
  t1173 = Sin(var1[4]);
  t1959 = Sin(var1[5]);
  t1090 = Cos(var1[4]);
  t1094 = Cos(var1[7]);
  t1105 = Cos(var1[6]);
  t3932 = Sin(var1[6]);
  t4158 = Sin(var1[7]);
  t3157 = -1.*t1131*t1888;
  t3176 = t504*t1173*t1959;
  t3878 = t3157 + t3176;
  t1834 = t504*t1131*t1173;
  t1969 = t1888*t1959;
  t2238 = t1834 + t1969;
  t5172 = t504*t1131;
  t5174 = t1888*t1173*t1959;
  t5182 = t5172 + t5174;
  t4791 = t1131*t1888*t1173;
  t4822 = -1.*t504*t1959;
  t4941 = t4791 + t4822;
  t3062 = t1105*t2238;
  t3949 = -1.*t3878*t3932;
  t4052 = t3062 + t3949;
  t4968 = t1105*t4941;
  t5341 = -1.*t5182*t3932;
  t5424 = t4968 + t5341;
  t5510 = t1090*t1131*t1105;
  t5516 = -1.*t1090*t1959*t3932;
  t5592 = t5510 + t5516;
  t5653 = t1105*t3878;
  t5743 = t2238*t3932;
  t5985 = t5653 + t5743;
  t1095 = t504*t1090*t1094;
  t4179 = -1.*t4052*t4158;
  t4347 = t1095 + t4179;
  t6621 = -1.*t1094;
  t6664 = 1. + t6621;
  t6695 = 0.183*t6664;
  t6717 = 0. + t6695;
  t6772 = -1.*t1105;
  t6805 = 1. + t6772;
  t6852 = -0.047*t6805;
  t6867 = 0. + t6852;
  t6882 = 0.047*t3932;
  t6973 = 0. + t6882;
  t6031 = t1105*t5182;
  t6044 = t4941*t3932;
  t6090 = t6031 + t6044;
  t7029 = 0.183*t4158;
  t7044 = 0. + t7029;
  t4452 = t1090*t1094*t1888;
  t5425 = -1.*t5424*t4158;
  t5440 = t4452 + t5425;
  t6118 = t1090*t1105*t1959;
  t6181 = t1090*t1131*t3932;
  t6206 = t6118 + t6181;
  t5500 = -1.*t1094*t1173;
  t5633 = -1.*t5592*t4158;
  t5634 = t5500 + t5633;
  p_output1[0]=t4347;
  p_output1[1]=t5440;
  p_output1[2]=t5634;
  p_output1[3]=0.;
  p_output1[4]=t5985;
  p_output1[5]=t6090;
  p_output1[6]=t6206;
  p_output1[7]=0.;
  p_output1[8]=t1094*t4052 + t1090*t4158*t504;
  p_output1[9]=t1090*t1888*t4158 + t1094*t5424;
  p_output1[10]=-1.*t1173*t4158 + t1094*t5592;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.183*t4347 - 0.11079*t5985 + t1090*t504*t6717 + t3878*t6867 + t2238*t6973 + t4052*t7044 + var1[0];
  p_output1[13]=0. + 0.183*t5440 - 0.11079*t6090 + t1090*t1888*t6717 + t5182*t6867 + t4941*t6973 + t5424*t7044 + var1[1];
  p_output1[14]=0. + 0.183*t5634 - 0.11079*t6206 - 1.*t1173*t6717 + t1090*t1959*t6867 + t1090*t1131*t6973 + t5592*t7044 + var1[2];
  p_output1[15]=1.;
}



void H_FR_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
