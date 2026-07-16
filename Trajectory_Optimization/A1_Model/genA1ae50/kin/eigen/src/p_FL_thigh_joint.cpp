/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:10:57 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FL_thigh_joint.h"

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
  double t863;
  double t1992;
  double t2107;
  double t1994;
  double t2444;
  double t1238;
  double t2053;
  double t3325;
  double t3501;
  double t4650;
  double t5719;
  double t5743;
  double t5763;
  double t151;
  double t888;
  double t5808;
  double t5819;
  double t5825;
  double t5835;
  double t439;
  double t583;
  double t601;
  double t738;
  double t1635;
  double t1685;
  double t5612;
  double t5686;
  double t5707;
  double t5710;
  double t5887;
  double t5892;
  double t5911;
  double t5920;
  double t5921;
  double t5923;
  double t5812;
  double t5815;
  double t5954;
  double t5960;
  double t5966;
  double t6021;
  double t6034;
  double t6048;
  t863 = Cos(var1[3]);
  t1992 = Cos(var1[5]);
  t2107 = Sin(var1[3]);
  t1994 = Sin(var1[4]);
  t2444 = Sin(var1[5]);
  t1238 = Sin(var1[9]);
  t2053 = t863*t1992*t1994;
  t3325 = t2107*t2444;
  t3501 = t2053 + t3325;
  t4650 = Cos(var1[9]);
  t5719 = -1.*t1992*t2107;
  t5743 = t863*t1994*t2444;
  t5763 = t5719 + t5743;
  t151 = Cos(var1[10]);
  t888 = Cos(var1[4]);
  t5808 = Sin(var1[10]);
  t5819 = t4650*t3501;
  t5825 = -1.*t1238*t5763;
  t5835 = t5819 + t5825;
  t439 = -1.*t151;
  t583 = 1. + t439;
  t601 = 0.183*t583;
  t738 = 0. + t601;
  t1635 = -0.047*t1238;
  t1685 = 0. + t1635;
  t5612 = -1.*t4650;
  t5686 = 1. + t5612;
  t5707 = 0.047*t5686;
  t5710 = 0. + t5707;
  t5887 = t1992*t2107*t1994;
  t5892 = -1.*t863*t2444;
  t5911 = t5887 + t5892;
  t5920 = t863*t1992;
  t5921 = t2107*t1994*t2444;
  t5923 = t5920 + t5921;
  t5812 = 0.183*t5808;
  t5815 = 0. + t5812;
  t5954 = t4650*t5911;
  t5960 = -1.*t1238*t5923;
  t5966 = t5954 + t5960;
  t6021 = t4650*t888*t1992;
  t6034 = -1.*t888*t1238*t2444;
  t6048 = t6021 + t6034;

  p_output1(0)=0. + t1685*t3501 + t5710*t5763 + 0.13205*(t1238*t3501 + t4650*t5763) + t5815*t5835 + t738*t863*t888 + 0.183*(-1.*t5808*t5835 + t151*t863*t888) + var1(0);
  p_output1(1)=0. + t1685*t5911 + t5710*t5923 + 0.13205*(t1238*t5911 + t4650*t5923) + t5815*t5966 + t2107*t738*t888 + 0.183*(-1.*t5808*t5966 + t151*t2107*t888) + var1(1);
  p_output1(2)=0. + t5815*t6048 + 0.183*(-1.*t151*t1994 - 1.*t5808*t6048) - 1.*t1994*t738 + t1685*t1992*t888 + t2444*t5710*t888 + 0.13205*(t1238*t1992*t888 + t2444*t4650*t888) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_FL_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_FL_thigh_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



