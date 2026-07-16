/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:21:45 GMT-05:00
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
  double t2058;
  double t2788;
  double t3078;
  double t2798;
  double t3468;
  double t2636;
  double t3067;
  double t3828;
  double t3843;
  double t3936;
  double t5146;
  double t5663;
  double t5741;
  double t2202;
  double t5976;
  double t563;
  double t6302;
  double t6310;
  double t6346;
  double t6386;
  double t6460;
  double t6469;
  double t6668;
  double t6736;
  double t6759;
  double t6788;
  double t6928;
  double t6932;
  double t6964;
  double t1171;
  double t1591;
  double t1739;
  double t2001;
  double t2654;
  double t2727;
  double t4032;
  double t4100;
  double t4114;
  double t4173;
  double t7345;
  double t7359;
  double t7406;
  double t7439;
  double t7447;
  double t7453;
  double t5983;
  double t5986;
  double t6474;
  double t6685;
  double t6724;
  double t7515;
  double t7543;
  double t7558;
  double t6802;
  double t6904;
  double t6923;
  double t7581;
  double t7607;
  double t7624;
  double t7654;
  double t7661;
  double t7667;
  double t7995;
  double t8023;
  double t8025;
  double t8036;
  double t8039;
  double t8051;
  double t8062;
  double t8078;
  double t8109;
  t2058 = Cos(var1[3]);
  t2788 = Cos(var1[5]);
  t3078 = Sin(var1[3]);
  t2798 = Sin(var1[4]);
  t3468 = Sin(var1[5]);
  t2636 = Sin(var1[15]);
  t3067 = t2058*t2788*t2798;
  t3828 = t3078*t3468;
  t3843 = t3067 + t3828;
  t3936 = Cos(var1[15]);
  t5146 = -1.*t2788*t3078;
  t5663 = t2058*t2798*t3468;
  t5741 = t5146 + t5663;
  t2202 = Cos(var1[4]);
  t5976 = Sin(var1[16]);
  t563 = Cos(var1[16]);
  t6302 = t3936*t3843;
  t6310 = -1.*t2636*t5741;
  t6346 = t6302 + t6310;
  t6386 = Cos(var1[17]);
  t6460 = -1.*t6386;
  t6469 = 1. + t6460;
  t6668 = Sin(var1[17]);
  t6736 = t2058*t2202*t5976;
  t6759 = t563*t6346;
  t6788 = t6736 + t6759;
  t6928 = t563*t2058*t2202;
  t6932 = -1.*t5976*t6346;
  t6964 = t6928 + t6932;
  t1171 = -1.*t563;
  t1591 = 1. + t1171;
  t1739 = -0.183*t1591;
  t2001 = 0. + t1739;
  t2654 = -0.047*t2636;
  t2727 = 0. + t2654;
  t4032 = -1.*t3936;
  t4100 = 1. + t4032;
  t4114 = 0.047*t4100;
  t4173 = 0. + t4114;
  t7345 = t2788*t3078*t2798;
  t7359 = -1.*t2058*t3468;
  t7406 = t7345 + t7359;
  t7439 = t2058*t2788;
  t7447 = t3078*t2798*t3468;
  t7453 = t7439 + t7447;
  t5983 = -0.183*t5976;
  t5986 = 0. + t5983;
  t6474 = -0.25*t6469;
  t6685 = -0.183*t6668;
  t6724 = 0. + t6474 + t6685;
  t7515 = t3936*t7406;
  t7543 = -1.*t2636*t7453;
  t7558 = t7515 + t7543;
  t6802 = -0.183*t6469;
  t6904 = 0.25*t6668;
  t6923 = 0. + t6802 + t6904;
  t7581 = t2202*t5976*t3078;
  t7607 = t563*t7558;
  t7624 = t7581 + t7607;
  t7654 = t563*t2202*t3078;
  t7661 = -1.*t5976*t7558;
  t7667 = t7654 + t7661;
  t7995 = t3936*t2202*t2788;
  t8023 = -1.*t2202*t2636*t3468;
  t8025 = t7995 + t8023;
  t8036 = -1.*t5976*t2798;
  t8039 = t563*t8025;
  t8051 = t8036 + t8039;
  t8062 = -1.*t563*t2798;
  t8078 = -1.*t5976*t8025;
  t8109 = t8062 + t8078;

  p_output1(0)=0. + t2001*t2058*t2202 + t2727*t3843 + t4173*t5741 + 0.15331*(t2636*t3843 + t3936*t5741) + t5986*t6346 + t6724*t6788 + t6923*t6964 - 0.183*(-1.*t6668*t6788 + t6386*t6964) - 0.5*(t6386*t6788 + t6668*t6964) + var1(0);
  p_output1(1)=0. + t2001*t2202*t3078 + t2727*t7406 + t4173*t7453 + 0.15331*(t2636*t7406 + t3936*t7453) + t5986*t7558 + t6724*t7624 + t6923*t7667 - 0.183*(-1.*t6668*t7624 + t6386*t7667) - 0.5*(t6386*t7624 + t6668*t7667) + var1(1);
  p_output1(2)=0. + t2202*t2727*t2788 - 1.*t2001*t2798 + 0.15331*(t2202*t2636*t2788 + t2202*t3468*t3936) + t2202*t3468*t4173 + t5986*t8025 + t6724*t8051 + t6923*t8109 - 0.183*(-1.*t6668*t8051 + t6386*t8109) - 0.5*(t6386*t8051 + t6668*t8109) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_RLfoot(const Eigen::Matrix<double,18,1> &var1)
//void p_RLfoot(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



