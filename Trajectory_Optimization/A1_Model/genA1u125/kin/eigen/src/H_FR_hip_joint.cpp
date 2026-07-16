/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:21:12 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FR_hip_joint.h"

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
  double t540;
  double t772;
  double t422;
  double t999;
  double t2570;
  double t3458;
  double t2307;
  double t6762;
  double t6573;
  double t6611;
  double t6708;
  double t2709;
  double t6437;
  double t6479;
  double t6891;
  double t6895;
  double t6906;
  double t6814;
  double t6848;
  double t6879;
  double t6555;
  double t6775;
  double t6797;
  double t7033;
  double t7039;
  double t7041;
  double t7043;
  double t7067;
  double t7097;
  double t6882;
  double t6908;
  double t6909;
  double t6914;
  double t6921;
  double t6938;
  t540 = Cos(var1[4]);
  t772 = Sin(var1[3]);
  t422 = Cos(var1[3]);
  t999 = Sin(var1[4]);
  t2570 = Cos(var1[5]);
  t3458 = Sin(var1[5]);
  t2307 = Cos(var1[6]);
  t6762 = Sin(var1[6]);
  t6573 = t422*t2570*t999;
  t6611 = t772*t3458;
  t6708 = t6573 + t6611;
  t2709 = -1.*t2570*t772;
  t6437 = t422*t999*t3458;
  t6479 = t2709 + t6437;
  t6891 = t2570*t772*t999;
  t6895 = -1.*t422*t3458;
  t6906 = t6891 + t6895;
  t6814 = t422*t2570;
  t6848 = t772*t999*t3458;
  t6879 = t6814 + t6848;
  t6555 = t2307*t6479;
  t6775 = t6708*t6762;
  t6797 = t6555 + t6775;
  t7033 = -1.*t2307;
  t7039 = 1. + t7033;
  t7041 = -0.047*t7039;
  t7043 = 0. + t7041;
  t7067 = 0.047*t6762;
  t7097 = 0. + t7067;
  t6882 = t2307*t6879;
  t6908 = t6906*t6762;
  t6909 = t6882 + t6908;
  t6914 = t540*t2307*t3458;
  t6921 = t540*t2570*t6762;
  t6938 = t6914 + t6921;

  p_output1(0)=t422*t540;
  p_output1(1)=t540*t772;
  p_output1(2)=-1.*t999;
  p_output1(3)=0.;
  p_output1(4)=t6797;
  p_output1(5)=t6909;
  p_output1(6)=t6938;
  p_output1(7)=0.;
  p_output1(8)=t2307*t6708 - 1.*t6479*t6762;
  p_output1(9)=-1.*t6762*t6879 + t2307*t6906;
  p_output1(10)=t2307*t2570*t540 - 1.*t3458*t540*t6762;
  p_output1(11)=0.;
  p_output1(12)=0. + 0.183*t422*t540 - 0.047*t6797 + t6479*t7043 + t6708*t7097 + var1(0);
  p_output1(13)=0. - 0.047*t6909 + t6879*t7043 + t6906*t7097 + 0.183*t540*t772 + var1(1);
  p_output1(14)=0. - 0.047*t6938 + t3458*t540*t7043 + t2570*t540*t7097 - 0.183*t999 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_FR_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void H_FR_hip_joint(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



