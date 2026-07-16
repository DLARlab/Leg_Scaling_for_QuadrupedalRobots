/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:18:42 GMT-05:00
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
  double t36;
  double t2127;
  double t2320;
  double t2239;
  double t2764;
  double t285;
  double t867;
  double t1617;
  double t4718;
  double t4845;
  double t4038;
  double t4170;
  double t4439;
  double t2266;
  double t2807;
  double t3043;
  double t6510;
  double t6545;
  double t6572;
  double t5867;
  double t5900;
  double t6256;
  double t3987;
  double t4782;
  double t4789;
  double t6420;
  double t6583;
  double t6620;
  double t6869;
  double t6904;
  double t6925;
  double t7084;
  double t7091;
  double t7097;
  double t1060;
  double t5027;
  double t5102;
  double t7829;
  double t7830;
  double t7860;
  double t7866;
  double t7917;
  double t7938;
  double t7950;
  double t7956;
  double t7989;
  double t7991;
  double t7112;
  double t7183;
  double t7230;
  double t8000;
  double t8039;
  double t5185;
  double t6683;
  double t6763;
  double t7253;
  double t7404;
  double t7465;
  double t6858;
  double t6964;
  double t6966;
  t36 = Cos(var1[3]);
  t2127 = Cos(var1[5]);
  t2320 = Sin(var1[3]);
  t2239 = Sin(var1[4]);
  t2764 = Sin(var1[5]);
  t285 = Cos(var1[4]);
  t867 = Cos(var1[7]);
  t1617 = Cos(var1[6]);
  t4718 = Sin(var1[6]);
  t4845 = Sin(var1[7]);
  t4038 = -1.*t2127*t2320;
  t4170 = t36*t2239*t2764;
  t4439 = t4038 + t4170;
  t2266 = t36*t2127*t2239;
  t2807 = t2320*t2764;
  t3043 = t2266 + t2807;
  t6510 = t36*t2127;
  t6545 = t2320*t2239*t2764;
  t6572 = t6510 + t6545;
  t5867 = t2127*t2320*t2239;
  t5900 = -1.*t36*t2764;
  t6256 = t5867 + t5900;
  t3987 = t1617*t3043;
  t4782 = -1.*t4439*t4718;
  t4789 = t3987 + t4782;
  t6420 = t1617*t6256;
  t6583 = -1.*t6572*t4718;
  t6620 = t6420 + t6583;
  t6869 = t285*t2127*t1617;
  t6904 = -1.*t285*t2764*t4718;
  t6925 = t6869 + t6904;
  t7084 = t1617*t4439;
  t7091 = t3043*t4718;
  t7097 = t7084 + t7091;
  t1060 = t36*t285*t867;
  t5027 = -1.*t4789*t4845;
  t5102 = t1060 + t5027;
  t7829 = -1.*t867;
  t7830 = 1. + t7829;
  t7860 = 0.183*t7830;
  t7866 = 0. + t7860;
  t7917 = -1.*t1617;
  t7938 = 1. + t7917;
  t7950 = -0.047*t7938;
  t7956 = 0. + t7950;
  t7989 = 0.047*t4718;
  t7991 = 0. + t7989;
  t7112 = t1617*t6572;
  t7183 = t6256*t4718;
  t7230 = t7112 + t7183;
  t8000 = 0.183*t4845;
  t8039 = 0. + t8000;
  t5185 = t285*t867*t2320;
  t6683 = -1.*t6620*t4845;
  t6763 = t5185 + t6683;
  t7253 = t285*t1617*t2764;
  t7404 = t285*t2127*t4718;
  t7465 = t7253 + t7404;
  t6858 = -1.*t867*t2239;
  t6964 = -1.*t6925*t4845;
  t6966 = t6858 + t6964;

  p_output1(0)=t5102;
  p_output1(1)=t6763;
  p_output1(2)=t6966;
  p_output1(3)=0.;
  p_output1(4)=t7097;
  p_output1(5)=t7230;
  p_output1(6)=t7465;
  p_output1(7)=0.;
  p_output1(8)=t285*t36*t4845 + t4789*t867;
  p_output1(9)=t2320*t285*t4845 + t6620*t867;
  p_output1(10)=-1.*t2239*t4845 + t6925*t867;
  p_output1(11)=0.;
  p_output1(12)=0. + 0.183*t5102 - 0.11079*t7097 + t285*t36*t7866 + t4439*t7956 + t3043*t7991 + t4789*t8039 + var1(0);
  p_output1(13)=0. + 0.183*t6763 - 0.11079*t7230 + t2320*t285*t7866 + t6572*t7956 + t6256*t7991 + t6620*t8039 + var1(1);
  p_output1(14)=0. + 0.183*t6966 - 0.11079*t7465 - 1.*t2239*t7866 + t2764*t285*t7956 + t2127*t285*t7991 + t6925*t8039 + var1(2);
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



