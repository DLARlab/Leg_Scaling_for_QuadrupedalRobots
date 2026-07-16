/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:11:21 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_FLfoot.h"

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
static void output1(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  double t3078;
  double t4557;
  double t5507;
  double t5069;
  double t6568;
  double t3998;
  double t3127;
  double t3319;
  double t4065;
  double t5472;
  double t6653;
  double t6707;
  double t6708;
  double t6832;
  double t6885;
  double t6889;
  double t6891;
  double t7081;
  double t7172;
  double t835;
  double t7333;
  double t7467;
  double t7477;
  double t7488;
  double t7490;
  double t7491;
  double t7492;
  double t7493;
  double t7494;
  double t7497;
  double t7557;
  double t7560;
  double t7563;
  double t3634;
  double t7204;
  double t7212;
  double t7337;
  double t7363;
  double t7391;
  double t7416;
  double t7500;
  double t7501;
  double t7517;
  double t7548;
  double t7550;
  double t7554;
  double t7570;
  double t7575;
  double t7578;
  double t7614;
  double t7634;
  t3078 = Cos(var1[3]);
  t4557 = Cos(var1[5]);
  t5507 = Sin(var1[3]);
  t5069 = Sin(var1[4]);
  t6568 = Sin(var1[5]);
  t3998 = Cos(var1[10]);
  t3127 = Cos(var1[4]);
  t3319 = Sin(var1[10]);
  t4065 = Cos(var1[9]);
  t5472 = t3078*t4557*t5069;
  t6653 = t5507*t6568;
  t6707 = t5472 + t6653;
  t6708 = t4065*t6707;
  t6832 = Sin(var1[9]);
  t6885 = -1.*t4557*t5507;
  t6889 = t3078*t5069*t6568;
  t6891 = t6885 + t6889;
  t7081 = -1.*t6832*t6891;
  t7172 = t6708 + t7081;
  t835 = Sin(var1[11]);
  t7333 = Cos(var1[11]);
  t7467 = t4557*t5507*t5069;
  t7477 = -1.*t3078*t6568;
  t7488 = t7467 + t7477;
  t7490 = t4065*t7488;
  t7491 = t3078*t4557;
  t7492 = t5507*t5069*t6568;
  t7493 = t7491 + t7492;
  t7494 = -1.*t6832*t7493;
  t7497 = t7490 + t7494;
  t7557 = t4065*t3127*t4557;
  t7560 = -1.*t3127*t6832*t6568;
  t7563 = t7557 + t7560;
  t3634 = t3078*t3127*t3319;
  t7204 = t3998*t7172;
  t7212 = t3634 + t7204;
  t7337 = t3998*t3078*t3127;
  t7363 = -1.*t3319*t7172;
  t7391 = t7337 + t7363;
  t7416 = t3127*t3319*t5507;
  t7500 = t3998*t7497;
  t7501 = t7416 + t7500;
  t7517 = t3998*t3127*t5507;
  t7548 = -1.*t3319*t7497;
  t7550 = t7517 + t7548;
  t7554 = -1.*t3319*t5069;
  t7570 = t3998*t7563;
  t7575 = t7554 + t7570;
  t7578 = -1.*t3998*t5069;
  t7614 = -1.*t3319*t7563;
  t7634 = t7578 + t7614;

  p_output1(0)=t7333*t7391 - 1.*t7212*t835;
  p_output1(1)=t7333*t7550 - 1.*t7501*t835;
  p_output1(2)=t7333*t7634 - 1.*t7575*t835;
  p_output1(3)=t6707*t6832 + t4065*t6891;
  p_output1(4)=t6832*t7488 + t4065*t7493;
  p_output1(5)=t3127*t4065*t6568 + t3127*t4557*t6832;
  p_output1(6)=t7212*t7333 + t7391*t835;
  p_output1(7)=t7333*t7501 + t7550*t835;
  p_output1(8)=t7333*t7575 + t7634*t835;
}


       
Eigen::Matrix<double,3,3> R_FLfoot(const Eigen::Matrix<double,18,1> &var1)
//void R_FLfoot(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



