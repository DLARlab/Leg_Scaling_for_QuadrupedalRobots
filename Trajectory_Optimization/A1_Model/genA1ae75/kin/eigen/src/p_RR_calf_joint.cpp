/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:51:48 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RR_calf_joint.h"

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
static void output1(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  double t3167;
  double t8116;
  double t8526;
  double t8137;
  double t9151;
  double t6419;
  double t8452;
  double t9160;
  double t9227;
  double t9260;
  double t9315;
  double t9316;
  double t9321;
  double t4018;
  double t9374;
  double t1003;
  double t9399;
  double t9402;
  double t9405;
  double t9408;
  double t9429;
  double t9432;
  double t9437;
  double t9449;
  double t9458;
  double t9461;
  double t9486;
  double t9487;
  double t9490;
  double t1240;
  double t2230;
  double t2471;
  double t2544;
  double t7289;
  double t8000;
  double t9286;
  double t9291;
  double t9301;
  double t9314;
  double t9611;
  double t9612;
  double t9617;
  double t9622;
  double t9623;
  double t9625;
  double t9375;
  double t9376;
  double t9433;
  double t9438;
  double t9440;
  double t9677;
  double t9679;
  double t9681;
  double t9470;
  double t9480;
  double t9483;
  double t9694;
  double t9697;
  double t9705;
  double t9724;
  double t9731;
  double t9744;
  double t9810;
  double t9811;
  double t9812;
  double t9815;
  double t9817;
  double t9818;
  double t9827;
  double t9829;
  double t9830;
  t3167 = Cos(var1[3]);
  t8116 = Cos(var1[5]);
  t8526 = Sin(var1[3]);
  t8137 = Sin(var1[4]);
  t9151 = Sin(var1[5]);
  t6419 = Sin(var1[12]);
  t8452 = t3167*t8116*t8137;
  t9160 = t8526*t9151;
  t9227 = t8452 + t9160;
  t9260 = Cos(var1[12]);
  t9315 = -1.*t8116*t8526;
  t9316 = t3167*t8137*t9151;
  t9321 = t9315 + t9316;
  t4018 = Cos(var1[4]);
  t9374 = Sin(var1[13]);
  t1003 = Cos(var1[13]);
  t9399 = t9260*t9227;
  t9402 = -1.*t6419*t9321;
  t9405 = t9399 + t9402;
  t9408 = Cos(var1[14]);
  t9429 = -1.*t9408;
  t9432 = 1. + t9429;
  t9437 = Sin(var1[14]);
  t9449 = t3167*t4018*t9374;
  t9458 = t1003*t9405;
  t9461 = t9449 + t9458;
  t9486 = t1003*t3167*t4018;
  t9487 = -1.*t9374*t9405;
  t9490 = t9486 + t9487;
  t1240 = -1.*t1003;
  t2230 = 1. + t1240;
  t2471 = -0.183*t2230;
  t2544 = 0. + t2471;
  t7289 = 0.047*t6419;
  t8000 = 0. + t7289;
  t9286 = -1.*t9260;
  t9291 = 1. + t9286;
  t9301 = -0.047*t9291;
  t9314 = 0. + t9301;
  t9611 = t8116*t8526*t8137;
  t9612 = -1.*t3167*t9151;
  t9617 = t9611 + t9612;
  t9622 = t3167*t8116;
  t9623 = t8526*t8137*t9151;
  t9625 = t9622 + t9623;
  t9375 = -0.183*t9374;
  t9376 = 0. + t9375;
  t9433 = -0.15*t9432;
  t9438 = -0.183*t9437;
  t9440 = 0. + t9433 + t9438;
  t9677 = t9260*t9617;
  t9679 = -1.*t6419*t9625;
  t9681 = t9677 + t9679;
  t9470 = -0.183*t9432;
  t9480 = 0.15*t9437;
  t9483 = 0. + t9470 + t9480;
  t9694 = t4018*t9374*t8526;
  t9697 = t1003*t9681;
  t9705 = t9694 + t9697;
  t9724 = t1003*t4018*t8526;
  t9731 = -1.*t9374*t9681;
  t9744 = t9724 + t9731;
  t9810 = t9260*t4018*t8116;
  t9811 = -1.*t4018*t6419*t9151;
  t9812 = t9810 + t9811;
  t9815 = -1.*t9374*t8137;
  t9817 = t1003*t9812;
  t9818 = t9815 + t9817;
  t9827 = -1.*t1003*t8137;
  t9829 = -1.*t9374*t9812;
  t9830 = t9827 + t9829;

  p_output1(0)=0. + t2544*t3167*t4018 + t8000*t9227 + t9314*t9321 - 0.13205*(t6419*t9227 + t9260*t9321) + t9376*t9405 + t9440*t9461 + t9483*t9490 - 0.183*(-1.*t9437*t9461 + t9408*t9490) - 0.15*(t9408*t9461 + t9437*t9490) + var1(0);
  p_output1(1)=0. + t2544*t4018*t8526 + t8000*t9617 + t9314*t9625 - 0.13205*(t6419*t9617 + t9260*t9625) + t9376*t9681 + t9440*t9705 + t9483*t9744 - 0.183*(-1.*t9437*t9705 + t9408*t9744) - 0.15*(t9408*t9705 + t9437*t9744) + var1(1);
  p_output1(2)=0. + t4018*t8000*t8116 - 1.*t2544*t8137 - 0.13205*(t4018*t6419*t8116 + t4018*t9151*t9260) + t4018*t9151*t9314 + t9376*t9812 + t9440*t9818 + t9483*t9830 - 0.183*(-1.*t9437*t9818 + t9408*t9830) - 0.15*(t9408*t9818 + t9437*t9830) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_RR_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_RR_calf_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



