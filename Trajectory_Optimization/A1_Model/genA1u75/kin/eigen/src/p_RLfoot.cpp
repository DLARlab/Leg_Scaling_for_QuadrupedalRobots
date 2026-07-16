/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:19:13 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RLfoot.h"

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
  double t4115;
  double t4848;
  double t5301;
  double t4968;
  double t5318;
  double t4345;
  double t5282;
  double t5328;
  double t5454;
  double t5457;
  double t5550;
  double t5564;
  double t5584;
  double t4132;
  double t5861;
  double t710;
  double t5894;
  double t5941;
  double t6060;
  double t6089;
  double t6124;
  double t6146;
  double t6253;
  double t6294;
  double t6390;
  double t6489;
  double t6744;
  double t6760;
  double t6774;
  double t1551;
  double t1874;
  double t2560;
  double t3052;
  double t4624;
  double t4834;
  double t5485;
  double t5488;
  double t5497;
  double t5545;
  double t7017;
  double t7034;
  double t7050;
  double t7078;
  double t7079;
  double t7096;
  double t5872;
  double t5880;
  double t6147;
  double t6261;
  double t6286;
  double t7163;
  double t7169;
  double t7170;
  double t6509;
  double t6511;
  double t6602;
  double t7178;
  double t7185;
  double t7186;
  double t7193;
  double t7195;
  double t7207;
  double t7474;
  double t7498;
  double t7501;
  double t7509;
  double t7519;
  double t7543;
  double t7575;
  double t7594;
  double t7608;
  t4115 = Cos(var1[3]);
  t4848 = Cos(var1[5]);
  t5301 = Sin(var1[3]);
  t4968 = Sin(var1[4]);
  t5318 = Sin(var1[5]);
  t4345 = Sin(var1[15]);
  t5282 = t4115*t4848*t4968;
  t5328 = t5301*t5318;
  t5454 = t5282 + t5328;
  t5457 = Cos(var1[15]);
  t5550 = -1.*t4848*t5301;
  t5564 = t4115*t4968*t5318;
  t5584 = t5550 + t5564;
  t4132 = Cos(var1[4]);
  t5861 = Sin(var1[16]);
  t710 = Cos(var1[16]);
  t5894 = t5457*t5454;
  t5941 = -1.*t4345*t5584;
  t6060 = t5894 + t5941;
  t6089 = Cos(var1[17]);
  t6124 = -1.*t6089;
  t6146 = 1. + t6124;
  t6253 = Sin(var1[17]);
  t6294 = t4115*t4132*t5861;
  t6390 = t710*t6060;
  t6489 = t6294 + t6390;
  t6744 = t710*t4115*t4132;
  t6760 = -1.*t5861*t6060;
  t6774 = t6744 + t6760;
  t1551 = -1.*t710;
  t1874 = 1. + t1551;
  t2560 = -0.183*t1874;
  t3052 = 0. + t2560;
  t4624 = -0.047*t4345;
  t4834 = 0. + t4624;
  t5485 = -1.*t5457;
  t5488 = 1. + t5485;
  t5497 = 0.047*t5488;
  t5545 = 0. + t5497;
  t7017 = t4848*t5301*t4968;
  t7034 = -1.*t4115*t5318;
  t7050 = t7017 + t7034;
  t7078 = t4115*t4848;
  t7079 = t5301*t4968*t5318;
  t7096 = t7078 + t7079;
  t5872 = -0.183*t5861;
  t5880 = 0. + t5872;
  t6147 = -0.15*t6146;
  t6261 = -0.183*t6253;
  t6286 = 0. + t6147 + t6261;
  t7163 = t5457*t7050;
  t7169 = -1.*t4345*t7096;
  t7170 = t7163 + t7169;
  t6509 = -0.183*t6146;
  t6511 = 0.15*t6253;
  t6602 = 0. + t6509 + t6511;
  t7178 = t4132*t5861*t5301;
  t7185 = t710*t7170;
  t7186 = t7178 + t7185;
  t7193 = t710*t4132*t5301;
  t7195 = -1.*t5861*t7170;
  t7207 = t7193 + t7195;
  t7474 = t5457*t4132*t4848;
  t7498 = -1.*t4132*t4345*t5318;
  t7501 = t7474 + t7498;
  t7509 = -1.*t5861*t4968;
  t7519 = t710*t7501;
  t7543 = t7509 + t7519;
  t7575 = -1.*t710*t4968;
  t7594 = -1.*t5861*t7501;
  t7608 = t7575 + t7594;

  p_output1(0)=0. + t3052*t4115*t4132 + t4834*t5454 + t5545*t5584 + 0.11079*(t4345*t5454 + t5457*t5584) + t5880*t6060 + t6286*t6489 + t6602*t6774 - 0.183*(-1.*t6253*t6489 + t6089*t6774) - 0.3*(t6089*t6489 + t6253*t6774) + var1(0);
  p_output1(1)=0. + t3052*t4132*t5301 + t4834*t7050 + t5545*t7096 + 0.11079*(t4345*t7050 + t5457*t7096) + t5880*t7170 + t6286*t7186 + t6602*t7207 - 0.183*(-1.*t6253*t7186 + t6089*t7207) - 0.3*(t6089*t7186 + t6253*t7207) + var1(1);
  p_output1(2)=0. + t4132*t4834*t4848 - 1.*t3052*t4968 + 0.11079*(t4132*t4345*t4848 + t4132*t5318*t5457) + t4132*t5318*t5545 + t5880*t7501 + t6286*t7543 + t6602*t7608 - 0.183*(-1.*t6253*t7543 + t6089*t7608) - 0.3*(t6089*t7543 + t6253*t7608) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_RLfoot(const Eigen::Matrix<double,18,1> &var1)
//void p_RLfoot(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



