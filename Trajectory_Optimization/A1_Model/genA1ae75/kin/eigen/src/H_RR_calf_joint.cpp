/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:51:49 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RR_calf_joint.h"

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
  double t486;
  double t1138;
  double t1813;
  double t1465;
  double t2005;
  double t1039;
  double t806;
  double t821;
  double t1072;
  double t1495;
  double t2063;
  double t2148;
  double t2254;
  double t2279;
  double t2302;
  double t2350;
  double t2406;
  double t2439;
  double t2520;
  double t259;
  double t3001;
  double t4056;
  double t4067;
  double t4180;
  double t4216;
  double t4253;
  double t4280;
  double t4419;
  double t4420;
  double t4456;
  double t5057;
  double t5058;
  double t5077;
  double t938;
  double t2530;
  double t2540;
  double t3095;
  double t3135;
  double t3191;
  double t4023;
  double t4479;
  double t4530;
  double t4631;
  double t4722;
  double t4729;
  double t5053;
  double t5157;
  double t5159;
  double t5164;
  double t5180;
  double t5235;
  double t5416;
  double t5448;
  double t5467;
  double t7078;
  double t7085;
  double t2687;
  double t3401;
  double t3628;
  double t5813;
  double t5818;
  double t5837;
  double t6147;
  double t6156;
  double t6190;
  double t6211;
  double t6382;
  double t6407;
  double t6482;
  double t6569;
  double t6602;
  double t6626;
  double t5552;
  double t5571;
  double t5599;
  double t6894;
  double t6921;
  double t7090;
  double t7137;
  double t7289;
  double t7600;
  double t7661;
  double t7694;
  double t4548;
  double t4754;
  double t4847;
  double t5873;
  double t5892;
  double t5907;
  double t5715;
  double t5730;
  double t5751;
  double t5160;
  double t5329;
  double t5358;
  double t5975;
  double t5991;
  double t6070;
  t486 = Cos(var1[3]);
  t1138 = Cos(var1[5]);
  t1813 = Sin(var1[3]);
  t1465 = Sin(var1[4]);
  t2005 = Sin(var1[5]);
  t1039 = Cos(var1[13]);
  t806 = Cos(var1[4]);
  t821 = Sin(var1[13]);
  t1072 = Cos(var1[12]);
  t1495 = t486*t1138*t1465;
  t2063 = t1813*t2005;
  t2148 = t1495 + t2063;
  t2254 = t1072*t2148;
  t2279 = Sin(var1[12]);
  t2302 = -1.*t1138*t1813;
  t2350 = t486*t1465*t2005;
  t2406 = t2302 + t2350;
  t2439 = -1.*t2279*t2406;
  t2520 = t2254 + t2439;
  t259 = Sin(var1[14]);
  t3001 = Cos(var1[14]);
  t4056 = t1138*t1813*t1465;
  t4067 = -1.*t486*t2005;
  t4180 = t4056 + t4067;
  t4216 = t1072*t4180;
  t4253 = t486*t1138;
  t4280 = t1813*t1465*t2005;
  t4419 = t4253 + t4280;
  t4420 = -1.*t2279*t4419;
  t4456 = t4216 + t4420;
  t5057 = t1072*t806*t1138;
  t5058 = -1.*t806*t2279*t2005;
  t5077 = t5057 + t5058;
  t938 = t486*t806*t821;
  t2530 = t1039*t2520;
  t2540 = t938 + t2530;
  t3095 = t1039*t486*t806;
  t3135 = -1.*t821*t2520;
  t3191 = t3095 + t3135;
  t4023 = t806*t821*t1813;
  t4479 = t1039*t4456;
  t4530 = t4023 + t4479;
  t4631 = t1039*t806*t1813;
  t4722 = -1.*t821*t4456;
  t4729 = t4631 + t4722;
  t5053 = -1.*t821*t1465;
  t5157 = t1039*t5077;
  t5159 = t5053 + t5157;
  t5164 = -1.*t1039*t1465;
  t5180 = -1.*t821*t5077;
  t5235 = t5164 + t5180;
  t5416 = t2279*t2148;
  t5448 = t1072*t2406;
  t5467 = t5416 + t5448;
  t7078 = -1.*t3001;
  t7085 = 1. + t7078;
  t2687 = -1.*t259*t2540;
  t3401 = t3001*t3191;
  t3628 = t2687 + t3401;
  t5813 = t3001*t2540;
  t5818 = t259*t3191;
  t5837 = t5813 + t5818;
  t6147 = -1.*t1039;
  t6156 = 1. + t6147;
  t6190 = -0.183*t6156;
  t6211 = 0. + t6190;
  t6382 = 0.047*t2279;
  t6407 = 0. + t6382;
  t6482 = -1.*t1072;
  t6569 = 1. + t6482;
  t6602 = -0.047*t6569;
  t6626 = 0. + t6602;
  t5552 = t2279*t4180;
  t5571 = t1072*t4419;
  t5599 = t5552 + t5571;
  t6894 = -0.183*t821;
  t6921 = 0. + t6894;
  t7090 = -0.15*t7085;
  t7137 = -0.183*t259;
  t7289 = 0. + t7090 + t7137;
  t7600 = -0.183*t7085;
  t7661 = 0.15*t259;
  t7694 = 0. + t7600 + t7661;
  t4548 = -1.*t259*t4530;
  t4754 = t3001*t4729;
  t4847 = t4548 + t4754;
  t5873 = t3001*t4530;
  t5892 = t259*t4729;
  t5907 = t5873 + t5892;
  t5715 = t806*t1138*t2279;
  t5730 = t1072*t806*t2005;
  t5751 = t5715 + t5730;
  t5160 = -1.*t259*t5159;
  t5329 = t3001*t5235;
  t5358 = t5160 + t5329;
  t5975 = t3001*t5159;
  t5991 = t259*t5235;
  t6070 = t5975 + t5991;

  p_output1(0)=t3628;
  p_output1(1)=t4847;
  p_output1(2)=t5358;
  p_output1(3)=0.;
  p_output1(4)=t5467;
  p_output1(5)=t5599;
  p_output1(6)=t5751;
  p_output1(7)=0.;
  p_output1(8)=t5837;
  p_output1(9)=t5907;
  p_output1(10)=t6070;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.183*t3628 - 0.13205*t5467 - 0.15*t5837 + t2148*t6407 + t2406*t6626 + t2520*t6921 + t2540*t7289 + t3191*t7694 + t486*t6211*t806 + var1(0);
  p_output1(13)=0. - 0.183*t4847 - 0.13205*t5599 - 0.15*t5907 + t4180*t6407 + t4419*t6626 + t4456*t6921 + t4530*t7289 + t4729*t7694 + t1813*t6211*t806 + var1(1);
  p_output1(14)=0. - 0.183*t5358 - 0.13205*t5751 - 0.15*t6070 - 1.*t1465*t6211 + t5077*t6921 + t5159*t7289 + t5235*t7694 + t1138*t6407*t806 + t2005*t6626*t806 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_RR_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void H_RR_calf_joint(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



