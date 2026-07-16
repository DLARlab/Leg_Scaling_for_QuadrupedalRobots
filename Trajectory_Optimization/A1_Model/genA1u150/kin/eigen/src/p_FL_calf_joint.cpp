/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:26:40 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FL_calf_joint.h"

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
  double t1534;
  double t3162;
  double t3957;
  double t3472;
  double t3993;
  double t3005;
  double t3909;
  double t4196;
  double t4325;
  double t4440;
  double t4609;
  double t4622;
  double t4681;
  double t1775;
  double t4818;
  double t463;
  double t4877;
  double t4900;
  double t5092;
  double t6996;
  double t7038;
  double t7139;
  double t7261;
  double t7395;
  double t7401;
  double t7460;
  double t7555;
  double t7556;
  double t7576;
  double t637;
  double t899;
  double t902;
  double t1024;
  double t3124;
  double t3125;
  double t4466;
  double t4516;
  double t4558;
  double t4606;
  double t7842;
  double t7874;
  double t7895;
  double t7918;
  double t7935;
  double t7948;
  double t4822;
  double t4865;
  double t7163;
  double t7332;
  double t7386;
  double t8014;
  double t8044;
  double t8045;
  double t7485;
  double t7506;
  double t7508;
  double t8105;
  double t8127;
  double t8142;
  double t8149;
  double t8155;
  double t8173;
  double t8472;
  double t8499;
  double t8518;
  double t8539;
  double t8567;
  double t8575;
  double t8602;
  double t8611;
  double t8614;
  t1534 = Cos(var1[3]);
  t3162 = Cos(var1[5]);
  t3957 = Sin(var1[3]);
  t3472 = Sin(var1[4]);
  t3993 = Sin(var1[5]);
  t3005 = Sin(var1[9]);
  t3909 = t1534*t3162*t3472;
  t4196 = t3957*t3993;
  t4325 = t3909 + t4196;
  t4440 = Cos(var1[9]);
  t4609 = -1.*t3162*t3957;
  t4622 = t1534*t3472*t3993;
  t4681 = t4609 + t4622;
  t1775 = Cos(var1[4]);
  t4818 = Sin(var1[10]);
  t463 = Cos(var1[10]);
  t4877 = t4440*t4325;
  t4900 = -1.*t3005*t4681;
  t5092 = t4877 + t4900;
  t6996 = Cos(var1[11]);
  t7038 = -1.*t6996;
  t7139 = 1. + t7038;
  t7261 = Sin(var1[11]);
  t7395 = t1534*t1775*t4818;
  t7401 = t463*t5092;
  t7460 = t7395 + t7401;
  t7555 = t463*t1534*t1775;
  t7556 = -1.*t4818*t5092;
  t7576 = t7555 + t7556;
  t637 = -1.*t463;
  t899 = 1. + t637;
  t902 = 0.183*t899;
  t1024 = 0. + t902;
  t3124 = -0.047*t3005;
  t3125 = 0. + t3124;
  t4466 = -1.*t4440;
  t4516 = 1. + t4466;
  t4558 = 0.047*t4516;
  t4606 = 0. + t4558;
  t7842 = t3162*t3957*t3472;
  t7874 = -1.*t1534*t3993;
  t7895 = t7842 + t7874;
  t7918 = t1534*t3162;
  t7935 = t3957*t3472*t3993;
  t7948 = t7918 + t7935;
  t4822 = 0.183*t4818;
  t4865 = 0. + t4822;
  t7163 = -0.3*t7139;
  t7332 = 0.183*t7261;
  t7386 = 0. + t7163 + t7332;
  t8014 = t4440*t7895;
  t8044 = -1.*t3005*t7948;
  t8045 = t8014 + t8044;
  t7485 = 0.183*t7139;
  t7506 = 0.3*t7261;
  t7508 = 0. + t7485 + t7506;
  t8105 = t1775*t4818*t3957;
  t8127 = t463*t8045;
  t8142 = t8105 + t8127;
  t8149 = t463*t1775*t3957;
  t8155 = -1.*t4818*t8045;
  t8173 = t8149 + t8155;
  t8472 = t4440*t1775*t3162;
  t8499 = -1.*t1775*t3005*t3993;
  t8518 = t8472 + t8499;
  t8539 = -1.*t4818*t3472;
  t8567 = t463*t8518;
  t8575 = t8539 + t8567;
  t8602 = -1.*t463*t3472;
  t8611 = -1.*t4818*t8518;
  t8614 = t8602 + t8611;

  p_output1(0)=0. + t1024*t1534*t1775 + t3125*t4325 + t4606*t4681 + 0.17458*(t3005*t4325 + t4440*t4681) + t4865*t5092 + t7386*t7460 + t7508*t7576 + 0.183*(-1.*t7261*t7460 + t6996*t7576) - 0.3*(t6996*t7460 + t7261*t7576) + var1(0);
  p_output1(1)=0. + t1024*t1775*t3957 + t3125*t7895 + t4606*t7948 + 0.17458*(t3005*t7895 + t4440*t7948) + t4865*t8045 + t7386*t8142 + t7508*t8173 + 0.183*(-1.*t7261*t8142 + t6996*t8173) - 0.3*(t6996*t8142 + t7261*t8173) + var1(1);
  p_output1(2)=0. + t1775*t3125*t3162 - 1.*t1024*t3472 + 0.17458*(t1775*t3005*t3162 + t1775*t3993*t4440) + t1775*t3993*t4606 + t4865*t8518 + t7386*t8575 + t7508*t8614 + 0.183*(-1.*t7261*t8575 + t6996*t8614) - 0.3*(t6996*t8575 + t7261*t8614) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_FL_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_FL_calf_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



