/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:51:37 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FL_hip_joint.h"

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
  double t432;
  double t128;
  double t1561;
  double t573;
  double t2598;
  double t3473;
  double t2311;
  double t3708;
  double t3160;
  double t3523;
  double t3568;
  double t3732;
  double t3840;
  double t3907;
  double t4075;
  double t4084;
  double t4103;
  double t4137;
  double t4246;
  double t4256;
  double t3613;
  double t3983;
  double t4022;
  double t4694;
  double t4704;
  double t4715;
  double t4717;
  double t4737;
  double t4751;
  double t4109;
  double t4269;
  double t4348;
  double t4402;
  double t4408;
  double t4488;
  t432 = Cos(var1[4]);
  t128 = Cos(var1[3]);
  t1561 = Sin(var1[4]);
  t573 = Sin(var1[3]);
  t2598 = Cos(var1[5]);
  t3473 = Sin(var1[5]);
  t2311 = Sin(var1[9]);
  t3708 = Cos(var1[9]);
  t3160 = t128*t2598*t1561;
  t3523 = t573*t3473;
  t3568 = t3160 + t3523;
  t3732 = -1.*t2598*t573;
  t3840 = t128*t1561*t3473;
  t3907 = t3732 + t3840;
  t4075 = t2598*t573*t1561;
  t4084 = -1.*t128*t3473;
  t4103 = t4075 + t4084;
  t4137 = t128*t2598;
  t4246 = t573*t1561*t3473;
  t4256 = t4137 + t4246;
  t3613 = t2311*t3568;
  t3983 = t3708*t3907;
  t4022 = t3613 + t3983;
  t4694 = -0.047*t2311;
  t4704 = 0. + t4694;
  t4715 = -1.*t3708;
  t4717 = 1. + t4715;
  t4737 = 0.047*t4717;
  t4751 = 0. + t4737;
  t4109 = t2311*t4103;
  t4269 = t3708*t4256;
  t4348 = t4109 + t4269;
  t4402 = t432*t2598*t2311;
  t4408 = t3708*t432*t3473;
  t4488 = t4402 + t4408;

  p_output1(0)=t128*t432;
  p_output1(1)=t432*t573;
  p_output1(2)=-1.*t1561;
  p_output1(3)=0.;
  p_output1(4)=t4022;
  p_output1(5)=t4348;
  p_output1(6)=t4488;
  p_output1(7)=0.;
  p_output1(8)=t3568*t3708 - 1.*t2311*t3907;
  p_output1(9)=t3708*t4103 - 1.*t2311*t4256;
  p_output1(10)=-1.*t2311*t3473*t432 + t2598*t3708*t432;
  p_output1(11)=0.;
  p_output1(12)=0. + 0.047*t4022 + 0.183*t128*t432 + t3568*t4704 + t3907*t4751 + var1(0);
  p_output1(13)=0. + 0.047*t4348 + t4103*t4704 + t4256*t4751 + 0.183*t432*t573 + var1(1);
  p_output1(14)=0. - 0.183*t1561 + 0.047*t4488 + t2598*t432*t4704 + t3473*t432*t4751 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_FL_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void H_FL_hip_joint(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



