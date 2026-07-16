/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:21:34 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RL_thigh_joint.h"

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
  double t2130;
  double t5131;
  double t6942;
  double t5385;
  double t6965;
  double t3479;
  double t6825;
  double t7177;
  double t7200;
  double t7224;
  double t7309;
  double t7320;
  double t7348;
  double t438;
  double t3256;
  double t7566;
  double t7599;
  double t7600;
  double t7605;
  double t964;
  double t1274;
  double t1290;
  double t2061;
  double t3932;
  double t4885;
  double t7277;
  double t7285;
  double t7286;
  double t7303;
  double t7752;
  double t7757;
  double t7760;
  double t7785;
  double t7832;
  double t7836;
  double t7575;
  double t7577;
  double t7882;
  double t7902;
  double t7918;
  double t8150;
  double t8159;
  double t8160;
  t2130 = Cos(var1[3]);
  t5131 = Cos(var1[5]);
  t6942 = Sin(var1[3]);
  t5385 = Sin(var1[4]);
  t6965 = Sin(var1[5]);
  t3479 = Sin(var1[15]);
  t6825 = t2130*t5131*t5385;
  t7177 = t6942*t6965;
  t7200 = t6825 + t7177;
  t7224 = Cos(var1[15]);
  t7309 = -1.*t5131*t6942;
  t7320 = t2130*t5385*t6965;
  t7348 = t7309 + t7320;
  t438 = Cos(var1[16]);
  t3256 = Cos(var1[4]);
  t7566 = Sin(var1[16]);
  t7599 = t7224*t7200;
  t7600 = -1.*t3479*t7348;
  t7605 = t7599 + t7600;
  t964 = -1.*t438;
  t1274 = 1. + t964;
  t1290 = -0.183*t1274;
  t2061 = 0. + t1290;
  t3932 = -0.047*t3479;
  t4885 = 0. + t3932;
  t7277 = -1.*t7224;
  t7285 = 1. + t7277;
  t7286 = 0.047*t7285;
  t7303 = 0. + t7286;
  t7752 = t5131*t6942*t5385;
  t7757 = -1.*t2130*t6965;
  t7760 = t7752 + t7757;
  t7785 = t2130*t5131;
  t7832 = t6942*t5385*t6965;
  t7836 = t7785 + t7832;
  t7575 = -0.183*t7566;
  t7577 = 0. + t7575;
  t7882 = t7224*t7760;
  t7902 = -1.*t3479*t7836;
  t7918 = t7882 + t7902;
  t8150 = t7224*t3256*t5131;
  t8159 = -1.*t3256*t3479*t6965;
  t8160 = t8150 + t8159;

  p_output1(0)=0. + t2061*t2130*t3256 + t4885*t7200 + t7303*t7348 + 0.15331*(t3479*t7200 + t7224*t7348) + t7577*t7605 - 0.183*(t2130*t3256*t438 - 1.*t7566*t7605) + var1(0);
  p_output1(1)=0. + t2061*t3256*t6942 + t4885*t7760 + t7303*t7836 + 0.15331*(t3479*t7760 + t7224*t7836) + t7577*t7918 - 0.183*(t3256*t438*t6942 - 1.*t7566*t7918) + var1(1);
  p_output1(2)=0. + t3256*t4885*t5131 - 1.*t2061*t5385 + 0.15331*(t3256*t3479*t5131 + t3256*t6965*t7224) + t3256*t6965*t7303 + t7577*t8160 - 0.183*(-1.*t438*t5385 - 1.*t7566*t8160) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_RL_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_RL_thigh_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



