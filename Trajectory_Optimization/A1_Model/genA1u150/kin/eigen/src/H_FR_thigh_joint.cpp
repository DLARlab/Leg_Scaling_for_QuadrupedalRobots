/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:26:32 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FR_thigh_joint.h"

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
  double t418;
  double t1522;
  double t1716;
  double t1542;
  double t2359;
  double t827;
  double t1152;
  double t1493;
  double t3114;
  double t3236;
  double t2928;
  double t2987;
  double t3039;
  double t1563;
  double t2383;
  double t2503;
  double t5456;
  double t5644;
  double t5826;
  double t4938;
  double t5202;
  double t5409;
  double t2702;
  double t3117;
  double t3188;
  double t5411;
  double t5849;
  double t5955;
  double t6107;
  double t6121;
  double t6146;
  double t6170;
  double t6185;
  double t6215;
  double t1193;
  double t4469;
  double t4698;
  double t7449;
  double t7476;
  double t7522;
  double t7529;
  double t7559;
  double t7563;
  double t7575;
  double t7583;
  double t7628;
  double t7641;
  double t6225;
  double t6232;
  double t6235;
  double t7714;
  double t7715;
  double t4702;
  double t6005;
  double t6007;
  double t6255;
  double t6321;
  double t6591;
  double t6085;
  double t6160;
  double t6168;
  t418 = Cos(var1[3]);
  t1522 = Cos(var1[5]);
  t1716 = Sin(var1[3]);
  t1542 = Sin(var1[4]);
  t2359 = Sin(var1[5]);
  t827 = Cos(var1[4]);
  t1152 = Cos(var1[7]);
  t1493 = Cos(var1[6]);
  t3114 = Sin(var1[6]);
  t3236 = Sin(var1[7]);
  t2928 = -1.*t1522*t1716;
  t2987 = t418*t1542*t2359;
  t3039 = t2928 + t2987;
  t1563 = t418*t1522*t1542;
  t2383 = t1716*t2359;
  t2503 = t1563 + t2383;
  t5456 = t418*t1522;
  t5644 = t1716*t1542*t2359;
  t5826 = t5456 + t5644;
  t4938 = t1522*t1716*t1542;
  t5202 = -1.*t418*t2359;
  t5409 = t4938 + t5202;
  t2702 = t1493*t2503;
  t3117 = -1.*t3039*t3114;
  t3188 = t2702 + t3117;
  t5411 = t1493*t5409;
  t5849 = -1.*t5826*t3114;
  t5955 = t5411 + t5849;
  t6107 = t827*t1522*t1493;
  t6121 = -1.*t827*t2359*t3114;
  t6146 = t6107 + t6121;
  t6170 = t1493*t3039;
  t6185 = t2503*t3114;
  t6215 = t6170 + t6185;
  t1193 = t418*t827*t1152;
  t4469 = -1.*t3188*t3236;
  t4698 = t1193 + t4469;
  t7449 = -1.*t1152;
  t7476 = 1. + t7449;
  t7522 = 0.183*t7476;
  t7529 = 0. + t7522;
  t7559 = -1.*t1493;
  t7563 = 1. + t7559;
  t7575 = -0.047*t7563;
  t7583 = 0. + t7575;
  t7628 = 0.047*t3114;
  t7641 = 0. + t7628;
  t6225 = t1493*t5826;
  t6232 = t5409*t3114;
  t6235 = t6225 + t6232;
  t7714 = 0.183*t3236;
  t7715 = 0. + t7714;
  t4702 = t827*t1152*t1716;
  t6005 = -1.*t5955*t3236;
  t6007 = t4702 + t6005;
  t6255 = t827*t1493*t2359;
  t6321 = t827*t1522*t3114;
  t6591 = t6255 + t6321;
  t6085 = -1.*t1152*t1542;
  t6160 = -1.*t6146*t3236;
  t6168 = t6085 + t6160;

  p_output1(0)=t4698;
  p_output1(1)=t6007;
  p_output1(2)=t6168;
  p_output1(3)=0.;
  p_output1(4)=t6215;
  p_output1(5)=t6235;
  p_output1(6)=t6591;
  p_output1(7)=0.;
  p_output1(8)=t1152*t3188 + t3236*t418*t827;
  p_output1(9)=t1152*t5955 + t1716*t3236*t827;
  p_output1(10)=-1.*t1542*t3236 + t1152*t6146;
  p_output1(11)=0.;
  p_output1(12)=0. + 0.183*t4698 - 0.17458*t6215 + t3039*t7583 + t2503*t7641 + t3188*t7715 + t418*t7529*t827 + var1(0);
  p_output1(13)=0. + 0.183*t6007 - 0.17458*t6235 + t5826*t7583 + t5409*t7641 + t5955*t7715 + t1716*t7529*t827 + var1(1);
  p_output1(14)=0. + 0.183*t6168 - 0.17458*t6591 - 1.*t1542*t7529 + t6146*t7715 + t2359*t7583*t827 + t1522*t7641*t827 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_FR_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void H_FR_thigh_joint(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



