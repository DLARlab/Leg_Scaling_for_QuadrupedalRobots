/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:04:29 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RR_thigh_joint.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE static inline        /* use standard inline */
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
static void output1(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  double t1089;
  double t3273;
  double t3454;
  double t3287;
  double t3476;
  double t801;
  double t1155;
  double t1493;
  double t3217;
  double t3552;
  double t3355;
  double t3482;
  double t3483;
  double t3599;
  double t3600;
  double t3602;
  double t3657;
  double t3664;
  double t3675;
  double t3695;
  double t3712;
  double t3713;
  double t3534;
  double t3612;
  double t3613;
  double t3676;
  double t3722;
  double t3725;
  double t3738;
  double t3750;
  double t3760;
  t1089 = Cos(var1[3]);
  t3273 = Cos(var1[5]);
  t3454 = Sin(var1[3]);
  t3287 = Sin(var1[4]);
  t3476 = Sin(var1[5]);
  t801 = Cos(var1[13]);
  t1155 = Cos(var1[4]);
  t1493 = Sin(var1[13]);
  t3217 = Cos(var1[12]);
  t3552 = Sin(var1[12]);
  t3355 = t1089*t3273*t3287;
  t3482 = t3454*t3476;
  t3483 = t3355 + t3482;
  t3599 = -1.*t3273*t3454;
  t3600 = t1089*t3287*t3476;
  t3602 = t3599 + t3600;
  t3657 = t3273*t3454*t3287;
  t3664 = -1.*t1089*t3476;
  t3675 = t3657 + t3664;
  t3695 = t1089*t3273;
  t3712 = t3454*t3287*t3476;
  t3713 = t3695 + t3712;
  t3534 = t3217*t3483;
  t3612 = -1.*t3552*t3602;
  t3613 = t3534 + t3612;
  t3676 = t3217*t3675;
  t3722 = -1.*t3552*t3713;
  t3725 = t3676 + t3722;
  t3738 = t3217*t1155*t3273;
  t3750 = -1.*t1155*t3552*t3476;
  t3760 = t3738 + t3750;

  p_output1(0)=-1.*t1493*t3613 + t1089*t1155*t801;
  p_output1(1)=-1.*t1493*t3725 + t1155*t3454*t801;
  p_output1(2)=-1.*t1493*t3760 - 1.*t3287*t801;
  p_output1(3)=t3483*t3552 + t3217*t3602;
  p_output1(4)=t3552*t3675 + t3217*t3713;
  p_output1(5)=t1155*t3217*t3476 + t1155*t3273*t3552;
  p_output1(6)=t1089*t1155*t1493 + t3613*t801;
  p_output1(7)=t1155*t1493*t3454 + t3725*t801;
  p_output1(8)=-1.*t1493*t3287 + t3760*t801;
}


       
Eigen::Matrix<double,3,3> R_RR_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_RR_thigh_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



