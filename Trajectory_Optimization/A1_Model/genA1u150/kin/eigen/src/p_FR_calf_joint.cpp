/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:26:33 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FR_calf_joint.h"

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
  double t598;
  double t3726;
  double t4365;
  double t3950;
  double t5017;
  double t2494;
  double t4333;
  double t5203;
  double t5651;
  double t5737;
  double t5823;
  double t5895;
  double t5997;
  double t1037;
  double t7593;
  double t7601;
  double t7628;
  double t837;
  double t7641;
  double t7757;
  double t7787;
  double t7788;
  double t7795;
  double t7948;
  double t7953;
  double t7982;
  double t7725;
  double t7740;
  double t7750;
  double t1088;
  double t1262;
  double t2047;
  double t2407;
  double t2649;
  double t3024;
  double t3383;
  double t3636;
  double t6450;
  double t6933;
  double t8192;
  double t8198;
  double t8199;
  double t8210;
  double t8212;
  double t8220;
  double t7678;
  double t7714;
  double t8265;
  double t8290;
  double t8292;
  double t7791;
  double t7825;
  double t7873;
  double t7985;
  double t8024;
  double t8034;
  double t8334;
  double t8348;
  double t8369;
  double t8297;
  double t8322;
  double t8330;
  double t8472;
  double t8494;
  double t8513;
  double t8628;
  double t8645;
  double t8649;
  double t8576;
  double t8582;
  double t8597;
  t598 = Cos(var1[3]);
  t3726 = Cos(var1[5]);
  t4365 = Sin(var1[4]);
  t3950 = Sin(var1[3]);
  t5017 = Sin(var1[5]);
  t2494 = Cos(var1[6]);
  t4333 = -1.*t3726*t3950;
  t5203 = t598*t4365*t5017;
  t5651 = t4333 + t5203;
  t5737 = t598*t3726*t4365;
  t5823 = t3950*t5017;
  t5895 = t5737 + t5823;
  t5997 = Sin(var1[6]);
  t1037 = Cos(var1[7]);
  t7593 = t2494*t5895;
  t7601 = -1.*t5651*t5997;
  t7628 = t7593 + t7601;
  t837 = Cos(var1[4]);
  t7641 = Sin(var1[7]);
  t7757 = Cos(var1[8]);
  t7787 = -1.*t7757;
  t7788 = 1. + t7787;
  t7795 = Sin(var1[8]);
  t7948 = t598*t837*t1037;
  t7953 = -1.*t7628*t7641;
  t7982 = t7948 + t7953;
  t7725 = t1037*t7628;
  t7740 = t598*t837*t7641;
  t7750 = t7725 + t7740;
  t1088 = -1.*t1037;
  t1262 = 1. + t1088;
  t2047 = 0.183*t1262;
  t2407 = 0. + t2047;
  t2649 = -1.*t2494;
  t3024 = 1. + t2649;
  t3383 = -0.047*t3024;
  t3636 = 0. + t3383;
  t6450 = 0.047*t5997;
  t6933 = 0. + t6450;
  t8192 = t598*t3726;
  t8198 = t3950*t4365*t5017;
  t8199 = t8192 + t8198;
  t8210 = t3726*t3950*t4365;
  t8212 = -1.*t598*t5017;
  t8220 = t8210 + t8212;
  t7678 = 0.183*t7641;
  t7714 = 0. + t7678;
  t8265 = t2494*t8220;
  t8290 = -1.*t8199*t5997;
  t8292 = t8265 + t8290;
  t7791 = -0.3*t7788;
  t7825 = 0.183*t7795;
  t7873 = 0. + t7791 + t7825;
  t7985 = 0.183*t7788;
  t8024 = 0.3*t7795;
  t8034 = 0. + t7985 + t8024;
  t8334 = t837*t1037*t3950;
  t8348 = -1.*t8292*t7641;
  t8369 = t8334 + t8348;
  t8297 = t1037*t8292;
  t8322 = t837*t3950*t7641;
  t8330 = t8297 + t8322;
  t8472 = t837*t3726*t2494;
  t8494 = -1.*t837*t5017*t5997;
  t8513 = t8472 + t8494;
  t8628 = -1.*t1037*t4365;
  t8645 = -1.*t8513*t7641;
  t8649 = t8628 + t8645;
  t8576 = t1037*t8513;
  t8582 = -1.*t4365*t7641;
  t8597 = t8576 + t8582;

  p_output1(0)=0. + t3636*t5651 - 0.17458*(t2494*t5651 + t5895*t5997) + t5895*t6933 + t7628*t7714 + t7750*t7873 + 0.183*(-1.*t7750*t7795 + t7757*t7982) - 0.3*(t7750*t7757 + t7795*t7982) + t7982*t8034 + t2407*t598*t837 + var1(0);
  p_output1(1)=0. + t3636*t8199 + t6933*t8220 - 0.17458*(t2494*t8199 + t5997*t8220) + t7714*t8292 + t7873*t8330 + t8034*t8369 + 0.183*(-1.*t7795*t8330 + t7757*t8369) - 0.3*(t7757*t8330 + t7795*t8369) + t2407*t3950*t837 + var1(1);
  p_output1(2)=0. - 1.*t2407*t4365 + t3636*t5017*t837 + t3726*t6933*t837 - 0.17458*(t2494*t5017*t837 + t3726*t5997*t837) + t7714*t8513 + t7873*t8597 + t8034*t8649 + 0.183*(-1.*t7795*t8597 + t7757*t8649) - 0.3*(t7757*t8597 + t7795*t8649) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_FR_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_FR_calf_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



