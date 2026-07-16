/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:04:28 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RR_thigh_joint.h"

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
static void output1(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  double t371;
  double t750;
  double t857;
  double t782;
  double t863;
  double t370;
  double t372;
  double t645;
  double t680;
  double t919;
  double t801;
  double t892;
  double t906;
  double t932;
  double t986;
  double t1104;
  double t1339;
  double t1352;
  double t1449;
  double t1599;
  double t1660;
  double t1665;
  double t911;
  double t1133;
  double t1148;
  double t1463;
  double t1703;
  double t1799;
  double t2253;
  double t2336;
  double t2370;
  double t3217;
  double t3273;
  double t3287;
  double t485;
  double t1218;
  double t1299;
  double t3526;
  double t3550;
  double t3552;
  double t3573;
  double t3600;
  double t3612;
  double t3615;
  double t3617;
  double t3620;
  double t3623;
  double t3362;
  double t3393;
  double t3405;
  double t3664;
  double t3675;
  double t1305;
  double t1865;
  double t2070;
  double t3441;
  double t3446;
  double t3451;
  double t2216;
  double t2386;
  double t2424;
  t371 = Cos(var1[3]);
  t750 = Cos(var1[5]);
  t857 = Sin(var1[3]);
  t782 = Sin(var1[4]);
  t863 = Sin(var1[5]);
  t370 = Cos(var1[13]);
  t372 = Cos(var1[4]);
  t645 = Sin(var1[13]);
  t680 = Cos(var1[12]);
  t919 = Sin(var1[12]);
  t801 = t371*t750*t782;
  t892 = t857*t863;
  t906 = t801 + t892;
  t932 = -1.*t750*t857;
  t986 = t371*t782*t863;
  t1104 = t932 + t986;
  t1339 = t750*t857*t782;
  t1352 = -1.*t371*t863;
  t1449 = t1339 + t1352;
  t1599 = t371*t750;
  t1660 = t857*t782*t863;
  t1665 = t1599 + t1660;
  t911 = t680*t906;
  t1133 = -1.*t919*t1104;
  t1148 = t911 + t1133;
  t1463 = t680*t1449;
  t1703 = -1.*t919*t1665;
  t1799 = t1463 + t1703;
  t2253 = t680*t372*t750;
  t2336 = -1.*t372*t919*t863;
  t2370 = t2253 + t2336;
  t3217 = t919*t906;
  t3273 = t680*t1104;
  t3287 = t3217 + t3273;
  t485 = t370*t371*t372;
  t1218 = -1.*t645*t1148;
  t1299 = t485 + t1218;
  t3526 = -1.*t370;
  t3550 = 1. + t3526;
  t3552 = -0.183*t3550;
  t3573 = 0. + t3552;
  t3600 = 0.047*t919;
  t3612 = 0. + t3600;
  t3615 = -1.*t680;
  t3617 = 1. + t3615;
  t3620 = -0.047*t3617;
  t3623 = 0. + t3620;
  t3362 = t919*t1449;
  t3393 = t680*t1665;
  t3405 = t3362 + t3393;
  t3664 = -0.183*t645;
  t3675 = 0. + t3664;
  t1305 = t370*t372*t857;
  t1865 = -1.*t645*t1799;
  t2070 = t1305 + t1865;
  t3441 = t372*t750*t919;
  t3446 = t680*t372*t863;
  t3451 = t3441 + t3446;
  t2216 = -1.*t370*t782;
  t2386 = -1.*t645*t2370;
  t2424 = t2216 + t2386;

  p_output1(0)=t1299;
  p_output1(1)=t2070;
  p_output1(2)=t2424;
  p_output1(3)=0.;
  p_output1(4)=t3287;
  p_output1(5)=t3405;
  p_output1(6)=t3451;
  p_output1(7)=0.;
  p_output1(8)=t1148*t370 + t371*t372*t645;
  p_output1(9)=t1799*t370 + t372*t645*t857;
  p_output1(10)=t2370*t370 - 1.*t645*t782;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.183*t1299 - 0.13205*t3287 + t1104*t3623 + t1148*t3675 + t3573*t371*t372 + t3612*t906 + var1(0);
  p_output1(13)=0. - 0.183*t2070 - 0.13205*t3405 + t1449*t3612 + t1665*t3623 + t1799*t3675 + t3573*t372*t857 + var1(1);
  p_output1(14)=0. - 0.183*t2424 - 0.13205*t3451 + t2370*t3675 + t3612*t372*t750 - 1.*t3573*t782 + t3623*t372*t863 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_RR_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void H_RR_thigh_joint(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



