/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:20:19 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FR_thigh_joint_src.h"

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
  double t641;
  double t6361;
  double t6389;
  double t6376;
  double t6390;
  double t3953;
  double t6388;
  double t6401;
  double t6419;
  double t6428;
  double t6438;
  double t6494;
  double t6507;
  double t662;
  double t742;
  double t6716;
  double t6728;
  double t6733;
  double t6744;
  double t1054;
  double t1585;
  double t2835;
  double t2987;
  double t4370;
  double t6108;
  double t6176;
  double t6181;
  double t6509;
  double t6572;
  double t7007;
  double t7060;
  double t7061;
  double t7073;
  double t7075;
  double t7076;
  double t6754;
  double t6769;
  double t7114;
  double t7117;
  double t7120;
  double t7299;
  double t7311;
  double t7331;
  t641 = Cos(var1[3]);
  t6361 = Cos(var1[5]);
  t6389 = Sin(var1[4]);
  t6376 = Sin(var1[3]);
  t6390 = Sin(var1[5]);
  t3953 = Cos(var1[6]);
  t6388 = -1.*t6361*t6376;
  t6401 = t641*t6389*t6390;
  t6419 = t6388 + t6401;
  t6428 = t641*t6361*t6389;
  t6438 = t6376*t6390;
  t6494 = t6428 + t6438;
  t6507 = Sin(var1[6]);
  t662 = Cos(var1[4]);
  t742 = Cos(var1[7]);
  t6716 = t3953*t6494;
  t6728 = -1.*t6419*t6507;
  t6733 = t6716 + t6728;
  t6744 = Sin(var1[7]);
  t1054 = -1.*t742;
  t1585 = 1. + t1054;
  t2835 = 0.183*t1585;
  t2987 = 0. + t2835;
  t4370 = -1.*t3953;
  t6108 = 1. + t4370;
  t6176 = -0.047*t6108;
  t6181 = 0. + t6176;
  t6509 = 0.047*t6507;
  t6572 = 0. + t6509;
  t7007 = t641*t6361;
  t7060 = t6376*t6389*t6390;
  t7061 = t7007 + t7060;
  t7073 = t6361*t6376*t6389;
  t7075 = -1.*t641*t6390;
  t7076 = t7073 + t7075;
  t6754 = 0.183*t6744;
  t6769 = 0. + t6754;
  t7114 = t3953*t7076;
  t7117 = -1.*t7061*t6507;
  t7120 = t7114 + t7117;
  t7299 = t662*t6361*t3953;
  t7311 = -1.*t662*t6390*t6507;
  t7331 = t7299 + t7311;
  p_output1[0]=0. + t6181*t6419 - 0.15331*(t3953*t6419 + t6494*t6507) + t6494*t6572 + t2987*t641*t662 + t6733*t6769 + 0.183*(-1.*t6733*t6744 + t641*t662*t742) + var1[0];
  p_output1[1]=0. + t2987*t6376*t662 + t6181*t7061 + t6572*t7076 - 0.15331*(t3953*t7061 + t6507*t7076) + t6769*t7120 + 0.183*(-1.*t6744*t7120 + t6376*t662*t742) + var1[1];
  p_output1[2]=0. - 1.*t2987*t6389 + t6181*t6390*t662 + t6361*t6572*t662 - 0.15331*(t3953*t6390*t662 + t6361*t6507*t662) + t6769*t7331 + 0.183*(-1.*t6744*t7331 - 1.*t6389*t742) + var1[2];
}



void p_FR_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
