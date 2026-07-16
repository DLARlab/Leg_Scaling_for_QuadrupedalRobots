/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:21:27 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RR_thigh_joint.h"

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
  double t1174;
  double t3981;
  double t5985;
  double t4644;
  double t6118;
  double t1297;
  double t5303;
  double t6236;
  double t6327;
  double t6512;
  double t6598;
  double t6607;
  double t6610;
  double t48;
  double t1257;
  double t6868;
  double t6976;
  double t6991;
  double t6999;
  double t367;
  double t806;
  double t992;
  double t1048;
  double t2757;
  double t2783;
  double t6520;
  double t6539;
  double t6588;
  double t6591;
  double t7239;
  double t7269;
  double t7302;
  double t7340;
  double t7349;
  double t7350;
  double t6904;
  double t6924;
  double t7394;
  double t7419;
  double t7429;
  double t7540;
  double t7557;
  double t7592;
  t1174 = Cos(var1[3]);
  t3981 = Cos(var1[5]);
  t5985 = Sin(var1[3]);
  t4644 = Sin(var1[4]);
  t6118 = Sin(var1[5]);
  t1297 = Sin(var1[12]);
  t5303 = t1174*t3981*t4644;
  t6236 = t5985*t6118;
  t6327 = t5303 + t6236;
  t6512 = Cos(var1[12]);
  t6598 = -1.*t3981*t5985;
  t6607 = t1174*t4644*t6118;
  t6610 = t6598 + t6607;
  t48 = Cos(var1[13]);
  t1257 = Cos(var1[4]);
  t6868 = Sin(var1[13]);
  t6976 = t6512*t6327;
  t6991 = -1.*t1297*t6610;
  t6999 = t6976 + t6991;
  t367 = -1.*t48;
  t806 = 1. + t367;
  t992 = -0.183*t806;
  t1048 = 0. + t992;
  t2757 = 0.047*t1297;
  t2783 = 0. + t2757;
  t6520 = -1.*t6512;
  t6539 = 1. + t6520;
  t6588 = -0.047*t6539;
  t6591 = 0. + t6588;
  t7239 = t3981*t5985*t4644;
  t7269 = -1.*t1174*t6118;
  t7302 = t7239 + t7269;
  t7340 = t1174*t3981;
  t7349 = t5985*t4644*t6118;
  t7350 = t7340 + t7349;
  t6904 = -0.183*t6868;
  t6924 = 0. + t6904;
  t7394 = t6512*t7302;
  t7419 = -1.*t1297*t7350;
  t7429 = t7394 + t7419;
  t7540 = t6512*t1257*t3981;
  t7557 = -1.*t1257*t1297*t6118;
  t7592 = t7540 + t7557;

  p_output1(0)=0. + t1048*t1174*t1257 + t2783*t6327 + t6591*t6610 - 0.15331*(t1297*t6327 + t6512*t6610) + t6924*t6999 - 0.183*(t1174*t1257*t48 - 1.*t6868*t6999) + var1(0);
  p_output1(1)=0. + t1048*t1257*t5985 + t2783*t7302 + t6591*t7350 - 0.15331*(t1297*t7302 + t6512*t7350) + t6924*t7429 - 0.183*(t1257*t48*t5985 - 1.*t6868*t7429) + var1(1);
  p_output1(2)=0. + t1257*t2783*t3981 - 1.*t1048*t4644 - 0.15331*(t1257*t1297*t3981 + t1257*t6118*t6512) + t1257*t6118*t6591 + t6924*t7592 - 0.183*(-1.*t4644*t48 - 1.*t6868*t7592) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_RR_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_RR_thigh_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



