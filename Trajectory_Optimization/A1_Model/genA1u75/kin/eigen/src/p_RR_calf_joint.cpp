/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:18:57 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RR_calf_joint.h"

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
  double t3116;
  double t3918;
  double t4502;
  double t3956;
  double t4634;
  double t3555;
  double t4146;
  double t4685;
  double t4694;
  double t5066;
  double t5608;
  double t5704;
  double t6118;
  double t3367;
  double t7439;
  double t1973;
  double t7534;
  double t7774;
  double t7799;
  double t7888;
  double t7999;
  double t8004;
  double t8042;
  double t8238;
  double t8262;
  double t8288;
  double t8394;
  double t8408;
  double t8421;
  double t1986;
  double t2015;
  double t2132;
  double t2548;
  double t3748;
  double t3755;
  double t5190;
  double t5206;
  double t5262;
  double t5449;
  double t8637;
  double t8640;
  double t8644;
  double t8787;
  double t8823;
  double t8829;
  double t7448;
  double t7459;
  double t8034;
  double t8080;
  double t8144;
  double t8935;
  double t8979;
  double t8986;
  double t8324;
  double t8376;
  double t8386;
  double t9024;
  double t9025;
  double t9103;
  double t9150;
  double t9156;
  double t9161;
  double t9329;
  double t9369;
  double t9370;
  double t9387;
  double t9390;
  double t9399;
  double t9423;
  double t9427;
  double t9467;
  t3116 = Cos(var1[3]);
  t3918 = Cos(var1[5]);
  t4502 = Sin(var1[3]);
  t3956 = Sin(var1[4]);
  t4634 = Sin(var1[5]);
  t3555 = Sin(var1[12]);
  t4146 = t3116*t3918*t3956;
  t4685 = t4502*t4634;
  t4694 = t4146 + t4685;
  t5066 = Cos(var1[12]);
  t5608 = -1.*t3918*t4502;
  t5704 = t3116*t3956*t4634;
  t6118 = t5608 + t5704;
  t3367 = Cos(var1[4]);
  t7439 = Sin(var1[13]);
  t1973 = Cos(var1[13]);
  t7534 = t5066*t4694;
  t7774 = -1.*t3555*t6118;
  t7799 = t7534 + t7774;
  t7888 = Cos(var1[14]);
  t7999 = -1.*t7888;
  t8004 = 1. + t7999;
  t8042 = Sin(var1[14]);
  t8238 = t3116*t3367*t7439;
  t8262 = t1973*t7799;
  t8288 = t8238 + t8262;
  t8394 = t1973*t3116*t3367;
  t8408 = -1.*t7439*t7799;
  t8421 = t8394 + t8408;
  t1986 = -1.*t1973;
  t2015 = 1. + t1986;
  t2132 = -0.183*t2015;
  t2548 = 0. + t2132;
  t3748 = 0.047*t3555;
  t3755 = 0. + t3748;
  t5190 = -1.*t5066;
  t5206 = 1. + t5190;
  t5262 = -0.047*t5206;
  t5449 = 0. + t5262;
  t8637 = t3918*t4502*t3956;
  t8640 = -1.*t3116*t4634;
  t8644 = t8637 + t8640;
  t8787 = t3116*t3918;
  t8823 = t4502*t3956*t4634;
  t8829 = t8787 + t8823;
  t7448 = -0.183*t7439;
  t7459 = 0. + t7448;
  t8034 = -0.15*t8004;
  t8080 = -0.183*t8042;
  t8144 = 0. + t8034 + t8080;
  t8935 = t5066*t8644;
  t8979 = -1.*t3555*t8829;
  t8986 = t8935 + t8979;
  t8324 = -0.183*t8004;
  t8376 = 0.15*t8042;
  t8386 = 0. + t8324 + t8376;
  t9024 = t3367*t7439*t4502;
  t9025 = t1973*t8986;
  t9103 = t9024 + t9025;
  t9150 = t1973*t3367*t4502;
  t9156 = -1.*t7439*t8986;
  t9161 = t9150 + t9156;
  t9329 = t5066*t3367*t3918;
  t9369 = -1.*t3367*t3555*t4634;
  t9370 = t9329 + t9369;
  t9387 = -1.*t7439*t3956;
  t9390 = t1973*t9370;
  t9399 = t9387 + t9390;
  t9423 = -1.*t1973*t3956;
  t9427 = -1.*t7439*t9370;
  t9467 = t9423 + t9427;

  p_output1(0)=0. + t2548*t3116*t3367 + t3755*t4694 + t5449*t6118 - 0.11079*(t3555*t4694 + t5066*t6118) + t7459*t7799 + t8144*t8288 + t8386*t8421 - 0.183*(-1.*t8042*t8288 + t7888*t8421) - 0.15*(t7888*t8288 + t8042*t8421) + var1(0);
  p_output1(1)=0. + t2548*t3367*t4502 + t3755*t8644 + t5449*t8829 - 0.11079*(t3555*t8644 + t5066*t8829) + t7459*t8986 + t8144*t9103 + t8386*t9161 - 0.183*(-1.*t8042*t9103 + t7888*t9161) - 0.15*(t7888*t9103 + t8042*t9161) + var1(1);
  p_output1(2)=0. + t3367*t3755*t3918 - 1.*t2548*t3956 - 0.11079*(t3367*t3555*t3918 + t3367*t4634*t5066) + t3367*t4634*t5449 + t7459*t9370 + t8144*t9399 + t8386*t9467 - 0.183*(-1.*t8042*t9399 + t7888*t9467) - 0.15*(t7888*t9399 + t8042*t9467) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_RR_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_RR_calf_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



