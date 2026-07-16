/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:21:42 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FLfoot.h"

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
  double t620;
  double t886;
  double t1115;
  double t965;
  double t1163;
  double t837;
  double t711;
  double t736;
  double t844;
  double t1048;
  double t1244;
  double t1316;
  double t1403;
  double t1485;
  double t1681;
  double t1806;
  double t1807;
  double t1812;
  double t1847;
  double t213;
  double t1947;
  double t2410;
  double t2467;
  double t2558;
  double t2731;
  double t2808;
  double t3117;
  double t3198;
  double t3203;
  double t3217;
  double t3448;
  double t3454;
  double t3499;
  double t779;
  double t1868;
  double t1933;
  double t1968;
  double t2113;
  double t2129;
  double t2403;
  double t3261;
  double t3319;
  double t3358;
  double t3366;
  double t3368;
  double t3446;
  double t3534;
  double t3561;
  double t3636;
  double t3663;
  double t3674;
  double t3736;
  double t3852;
  double t3966;
  double t5801;
  double t5805;
  double t1944;
  double t2223;
  double t2326;
  double t4412;
  double t4513;
  double t4532;
  double t5216;
  double t5244;
  double t5285;
  double t5309;
  double t5398;
  double t5405;
  double t5452;
  double t5457;
  double t5484;
  double t5551;
  double t3976;
  double t4029;
  double t4033;
  double t5583;
  double t5746;
  double t5830;
  double t5861;
  double t5875;
  double t5912;
  double t6062;
  double t6108;
  double t3324;
  double t3405;
  double t3442;
  double t4559;
  double t4563;
  double t4653;
  double t4045;
  double t4087;
  double t4270;
  double t3616;
  double t3697;
  double t3705;
  double t4718;
  double t4754;
  double t5114;
  t620 = Cos(var1[3]);
  t886 = Cos(var1[5]);
  t1115 = Sin(var1[3]);
  t965 = Sin(var1[4]);
  t1163 = Sin(var1[5]);
  t837 = Cos(var1[10]);
  t711 = Cos(var1[4]);
  t736 = Sin(var1[10]);
  t844 = Cos(var1[9]);
  t1048 = t620*t886*t965;
  t1244 = t1115*t1163;
  t1316 = t1048 + t1244;
  t1403 = t844*t1316;
  t1485 = Sin(var1[9]);
  t1681 = -1.*t886*t1115;
  t1806 = t620*t965*t1163;
  t1807 = t1681 + t1806;
  t1812 = -1.*t1485*t1807;
  t1847 = t1403 + t1812;
  t213 = Sin(var1[11]);
  t1947 = Cos(var1[11]);
  t2410 = t886*t1115*t965;
  t2467 = -1.*t620*t1163;
  t2558 = t2410 + t2467;
  t2731 = t844*t2558;
  t2808 = t620*t886;
  t3117 = t1115*t965*t1163;
  t3198 = t2808 + t3117;
  t3203 = -1.*t1485*t3198;
  t3217 = t2731 + t3203;
  t3448 = t844*t711*t886;
  t3454 = -1.*t711*t1485*t1163;
  t3499 = t3448 + t3454;
  t779 = t620*t711*t736;
  t1868 = t837*t1847;
  t1933 = t779 + t1868;
  t1968 = t837*t620*t711;
  t2113 = -1.*t736*t1847;
  t2129 = t1968 + t2113;
  t2403 = t711*t736*t1115;
  t3261 = t837*t3217;
  t3319 = t2403 + t3261;
  t3358 = t837*t711*t1115;
  t3366 = -1.*t736*t3217;
  t3368 = t3358 + t3366;
  t3446 = -1.*t736*t965;
  t3534 = t837*t3499;
  t3561 = t3446 + t3534;
  t3636 = -1.*t837*t965;
  t3663 = -1.*t736*t3499;
  t3674 = t3636 + t3663;
  t3736 = t1485*t1316;
  t3852 = t844*t1807;
  t3966 = t3736 + t3852;
  t5801 = -1.*t1947;
  t5805 = 1. + t5801;
  t1944 = -1.*t213*t1933;
  t2223 = t1947*t2129;
  t2326 = t1944 + t2223;
  t4412 = t1947*t1933;
  t4513 = t213*t2129;
  t4532 = t4412 + t4513;
  t5216 = -1.*t837;
  t5244 = 1. + t5216;
  t5285 = 0.183*t5244;
  t5309 = 0. + t5285;
  t5398 = -0.047*t1485;
  t5405 = 0. + t5398;
  t5452 = -1.*t844;
  t5457 = 1. + t5452;
  t5484 = 0.047*t5457;
  t5551 = 0. + t5484;
  t3976 = t1485*t2558;
  t4029 = t844*t3198;
  t4033 = t3976 + t4029;
  t5583 = 0.183*t736;
  t5746 = 0. + t5583;
  t5830 = -0.25*t5805;
  t5861 = 0.183*t213;
  t5875 = 0. + t5830 + t5861;
  t5912 = 0.183*t5805;
  t6062 = 0.25*t213;
  t6108 = 0. + t5912 + t6062;
  t3324 = -1.*t213*t3319;
  t3405 = t1947*t3368;
  t3442 = t3324 + t3405;
  t4559 = t1947*t3319;
  t4563 = t213*t3368;
  t4653 = t4559 + t4563;
  t4045 = t711*t886*t1485;
  t4087 = t844*t711*t1163;
  t4270 = t4045 + t4087;
  t3616 = -1.*t213*t3561;
  t3697 = t1947*t3674;
  t3705 = t3616 + t3697;
  t4718 = t1947*t3561;
  t4754 = t213*t3674;
  t5114 = t4718 + t4754;

  p_output1(0)=t2326;
  p_output1(1)=t3442;
  p_output1(2)=t3705;
  p_output1(3)=0.;
  p_output1(4)=t3966;
  p_output1(5)=t4033;
  p_output1(6)=t4270;
  p_output1(7)=0.;
  p_output1(8)=t4532;
  p_output1(9)=t4653;
  p_output1(10)=t5114;
  p_output1(11)=0.;
  p_output1(12)=0. + 0.183*t2326 + 0.15331*t3966 - 0.5*t4532 + t1316*t5405 + t1807*t5551 + t1847*t5746 + t1933*t5875 + t2129*t6108 + t5309*t620*t711 + var1(0);
  p_output1(13)=0. + 0.183*t3442 + 0.15331*t4033 - 0.5*t4653 + t2558*t5405 + t3198*t5551 + t3217*t5746 + t3319*t5875 + t3368*t6108 + t1115*t5309*t711 + var1(1);
  p_output1(14)=0. + 0.183*t3705 + 0.15331*t4270 - 0.5*t5114 + t3499*t5746 + t3561*t5875 + t3674*t6108 + t1163*t5551*t711 + t5405*t711*t886 - 1.*t5309*t965 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_FLfoot(const Eigen::Matrix<double,18,1> &var1)
//void H_FLfoot(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



