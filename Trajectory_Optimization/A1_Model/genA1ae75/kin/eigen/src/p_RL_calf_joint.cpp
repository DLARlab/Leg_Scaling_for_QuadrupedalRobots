/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:51:55 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RL_calf_joint.h"

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
  double t3041;
  double t5842;
  double t6542;
  double t6372;
  double t6790;
  double t3705;
  double t6526;
  double t6821;
  double t6965;
  double t6997;
  double t7387;
  double t7392;
  double t7405;
  double t3531;
  double t7687;
  double t160;
  double t7919;
  double t7930;
  double t7941;
  double t8257;
  double t9245;
  double t9251;
  double t9353;
  double t9433;
  double t9444;
  double t9455;
  double t9609;
  double t9622;
  double t9637;
  double t668;
  double t1716;
  double t2066;
  double t2870;
  double t4322;
  double t5277;
  double t7199;
  double t7203;
  double t7246;
  double t7357;
  double t9852;
  double t9854;
  double t9860;
  double t9892;
  double t9894;
  double t9900;
  double t7753;
  double t7820;
  double t9333;
  double t9357;
  double t9418;
  double t9931;
  double t9940;
  double t9943;
  double t9474;
  double t9535;
  double t9599;
  double t9947;
  double t9948;
  double t9949;
  double t9954;
  double t9956;
  double t9957;
  double t10088;
  double t10090;
  double t10094;
  double t10103;
  double t10104;
  double t10106;
  double t10108;
  double t10111;
  double t10117;
  t3041 = Cos(var1[3]);
  t5842 = Cos(var1[5]);
  t6542 = Sin(var1[3]);
  t6372 = Sin(var1[4]);
  t6790 = Sin(var1[5]);
  t3705 = Sin(var1[15]);
  t6526 = t3041*t5842*t6372;
  t6821 = t6542*t6790;
  t6965 = t6526 + t6821;
  t6997 = Cos(var1[15]);
  t7387 = -1.*t5842*t6542;
  t7392 = t3041*t6372*t6790;
  t7405 = t7387 + t7392;
  t3531 = Cos(var1[4]);
  t7687 = Sin(var1[16]);
  t160 = Cos(var1[16]);
  t7919 = t6997*t6965;
  t7930 = -1.*t3705*t7405;
  t7941 = t7919 + t7930;
  t8257 = Cos(var1[17]);
  t9245 = -1.*t8257;
  t9251 = 1. + t9245;
  t9353 = Sin(var1[17]);
  t9433 = t3041*t3531*t7687;
  t9444 = t160*t7941;
  t9455 = t9433 + t9444;
  t9609 = t160*t3041*t3531;
  t9622 = -1.*t7687*t7941;
  t9637 = t9609 + t9622;
  t668 = -1.*t160;
  t1716 = 1. + t668;
  t2066 = -0.183*t1716;
  t2870 = 0. + t2066;
  t4322 = -0.047*t3705;
  t5277 = 0. + t4322;
  t7199 = -1.*t6997;
  t7203 = 1. + t7199;
  t7246 = 0.047*t7203;
  t7357 = 0. + t7246;
  t9852 = t5842*t6542*t6372;
  t9854 = -1.*t3041*t6790;
  t9860 = t9852 + t9854;
  t9892 = t3041*t5842;
  t9894 = t6542*t6372*t6790;
  t9900 = t9892 + t9894;
  t7753 = -0.183*t7687;
  t7820 = 0. + t7753;
  t9333 = -0.15*t9251;
  t9357 = -0.183*t9353;
  t9418 = 0. + t9333 + t9357;
  t9931 = t6997*t9860;
  t9940 = -1.*t3705*t9900;
  t9943 = t9931 + t9940;
  t9474 = -0.183*t9251;
  t9535 = 0.15*t9353;
  t9599 = 0. + t9474 + t9535;
  t9947 = t3531*t7687*t6542;
  t9948 = t160*t9943;
  t9949 = t9947 + t9948;
  t9954 = t160*t3531*t6542;
  t9956 = -1.*t7687*t9943;
  t9957 = t9954 + t9956;
  t10088 = t6997*t3531*t5842;
  t10090 = -1.*t3531*t3705*t6790;
  t10094 = t10088 + t10090;
  t10103 = -1.*t7687*t6372;
  t10104 = t160*t10094;
  t10106 = t10103 + t10104;
  t10108 = -1.*t160*t6372;
  t10111 = -1.*t7687*t10094;
  t10117 = t10108 + t10111;

  p_output1(0)=0. + t2870*t3041*t3531 + t5277*t6965 + t7357*t7405 + 0.13205*(t3705*t6965 + t6997*t7405) + t7820*t7941 + t9418*t9455 + t9599*t9637 - 0.183*(-1.*t9353*t9455 + t8257*t9637) - 0.15*(t8257*t9455 + t9353*t9637) + var1(0);
  p_output1(1)=0. + t2870*t3531*t6542 + t5277*t9860 + t7357*t9900 + 0.13205*(t3705*t9860 + t6997*t9900) + t7820*t9943 + t9418*t9949 + t9599*t9957 - 0.183*(-1.*t9353*t9949 + t8257*t9957) - 0.15*(t8257*t9949 + t9353*t9957) + var1(1);
  p_output1(2)=0. + t3531*t5277*t5842 - 1.*t2870*t6372 + 0.13205*(t3531*t3705*t5842 + t3531*t6790*t6997) + t3531*t6790*t7357 + t10094*t7820 - 0.183*(t10117*t8257 - 1.*t10106*t9353) - 0.15*(t10106*t8257 + t10117*t9353) + t10106*t9418 + t10117*t9599 + var1(2);
}


       
Eigen::Matrix<double,3,1> p_RL_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_RL_calf_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



