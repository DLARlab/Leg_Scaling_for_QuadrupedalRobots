/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:13:58 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FRfoot.h"

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
  double t9;
  double t3757;
  double t4204;
  double t3803;
  double t4305;
  double t1919;
  double t3890;
  double t4360;
  double t4415;
  double t4816;
  double t5036;
  double t5188;
  double t5302;
  double t527;
  double t530;
  double t5588;
  double t5607;
  double t5619;
  double t5805;
  double t6392;
  double t6396;
  double t6410;
  double t6477;
  double t6317;
  double t6337;
  double t6384;
  double t6576;
  double t6595;
  double t6641;
  double t706;
  double t712;
  double t1681;
  double t1760;
  double t2622;
  double t2733;
  double t3272;
  double t3704;
  double t5343;
  double t5374;
  double t7067;
  double t7071;
  double t7132;
  double t7165;
  double t7327;
  double t7400;
  double t5882;
  double t5889;
  double t7900;
  double t7903;
  double t7904;
  double t6439;
  double t6519;
  double t6539;
  double t6711;
  double t6712;
  double t6741;
  double t8326;
  double t8423;
  double t8822;
  double t8868;
  double t8870;
  double t8883;
  double t9215;
  double t9221;
  double t9228;
  double t9234;
  double t9239;
  double t9248;
  double t9253;
  double t9254;
  double t9255;
  t9 = Cos(var1[3]);
  t3757 = Cos(var1[5]);
  t4204 = Sin(var1[4]);
  t3803 = Sin(var1[3]);
  t4305 = Sin(var1[5]);
  t1919 = Cos(var1[6]);
  t3890 = -1.*t3757*t3803;
  t4360 = t9*t4204*t4305;
  t4415 = t3890 + t4360;
  t4816 = t9*t3757*t4204;
  t5036 = t3803*t4305;
  t5188 = t4816 + t5036;
  t5302 = Sin(var1[6]);
  t527 = Cos(var1[4]);
  t530 = Cos(var1[7]);
  t5588 = t1919*t5188;
  t5607 = -1.*t4415*t5302;
  t5619 = t5588 + t5607;
  t5805 = Sin(var1[7]);
  t6392 = Cos(var1[8]);
  t6396 = -1.*t6392;
  t6410 = 1. + t6396;
  t6477 = Sin(var1[8]);
  t6317 = t9*t527*t530;
  t6337 = -1.*t5619*t5805;
  t6384 = t6317 + t6337;
  t6576 = t530*t5619;
  t6595 = t9*t527*t5805;
  t6641 = t6576 + t6595;
  t706 = -1.*t530;
  t712 = 1. + t706;
  t1681 = 0.183*t712;
  t1760 = 0. + t1681;
  t2622 = -1.*t1919;
  t2733 = 1. + t2622;
  t3272 = -0.047*t2733;
  t3704 = 0. + t3272;
  t5343 = 0.047*t5302;
  t5374 = 0. + t5343;
  t7067 = t9*t3757;
  t7071 = t3803*t4204*t4305;
  t7132 = t7067 + t7071;
  t7165 = t3757*t3803*t4204;
  t7327 = -1.*t9*t4305;
  t7400 = t7165 + t7327;
  t5882 = 0.183*t5805;
  t5889 = 0. + t5882;
  t7900 = t1919*t7400;
  t7903 = -1.*t7132*t5302;
  t7904 = t7900 + t7903;
  t6439 = 0.183*t6410;
  t6519 = 0.1*t6477;
  t6539 = 0. + t6439 + t6519;
  t6711 = -0.1*t6410;
  t6712 = 0.183*t6477;
  t6741 = 0. + t6711 + t6712;
  t8326 = t527*t530*t3803;
  t8423 = -1.*t7904*t5805;
  t8822 = t8326 + t8423;
  t8868 = t530*t7904;
  t8870 = t527*t3803*t5805;
  t8883 = t8868 + t8870;
  t9215 = t527*t3757*t1919;
  t9221 = -1.*t527*t4305*t5302;
  t9228 = t9215 + t9221;
  t9234 = -1.*t530*t4204;
  t9239 = -1.*t9228*t5805;
  t9248 = t9234 + t9239;
  t9253 = t530*t9228;
  t9254 = -1.*t4204*t5805;
  t9255 = t9253 + t9254;

  p_output1(0)=0. + t3704*t4415 - 0.08953*(t1919*t4415 + t5188*t5302) + t5188*t5374 + t5619*t5889 + t6384*t6539 - 0.2*(t6384*t6477 + t6392*t6641) + 0.183*(t6384*t6392 - 1.*t6477*t6641) + t6641*t6741 + t1760*t527*t9 + var1(0);
  p_output1(1)=0. + t1760*t3803*t527 + t3704*t7132 + t5374*t7400 - 0.08953*(t1919*t7132 + t5302*t7400) + t5889*t7904 + t6539*t8822 + t6741*t8883 - 0.2*(t6477*t8822 + t6392*t8883) + 0.183*(t6392*t8822 - 1.*t6477*t8883) + var1(1);
  p_output1(2)=0. - 1.*t1760*t4204 + t3704*t4305*t527 - 0.08953*(t1919*t4305*t527 + t3757*t527*t5302) + t3757*t527*t5374 + t5889*t9228 + t6539*t9248 + t6741*t9255 - 0.2*(t6477*t9248 + t6392*t9255) + 0.183*(t6392*t9248 - 1.*t6477*t9255) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_FRfoot(const Eigen::Matrix<double,18,1> &var1)
//void p_FRfoot(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



