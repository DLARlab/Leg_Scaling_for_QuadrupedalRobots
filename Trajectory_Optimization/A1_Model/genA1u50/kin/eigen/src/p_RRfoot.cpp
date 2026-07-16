/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:14:03 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RRfoot.h"

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
  double t2681;
  double t3555;
  double t3956;
  double t3636;
  double t3971;
  double t2779;
  double t3708;
  double t4171;
  double t4213;
  double t4943;
  double t5449;
  double t5453;
  double t5475;
  double t2755;
  double t5573;
  double t100;
  double t5648;
  double t5662;
  double t5664;
  double t5712;
  double t5718;
  double t5733;
  double t5758;
  double t5779;
  double t5780;
  double t5787;
  double t5862;
  double t5863;
  double t5864;
  double t416;
  double t799;
  double t2199;
  double t2310;
  double t2985;
  double t2992;
  double t4959;
  double t5066;
  double t5301;
  double t5350;
  double t5900;
  double t5901;
  double t5904;
  double t5906;
  double t5929;
  double t6028;
  double t5575;
  double t5593;
  double t5747;
  double t5759;
  double t5777;
  double t6302;
  double t6324;
  double t6335;
  double t5843;
  double t5858;
  double t5861;
  double t6342;
  double t6365;
  double t6368;
  double t6373;
  double t6380;
  double t6404;
  double t6751;
  double t6753;
  double t6798;
  double t6828;
  double t6835;
  double t6858;
  double t6895;
  double t6912;
  double t6918;
  t2681 = Cos(var1[3]);
  t3555 = Cos(var1[5]);
  t3956 = Sin(var1[3]);
  t3636 = Sin(var1[4]);
  t3971 = Sin(var1[5]);
  t2779 = Sin(var1[12]);
  t3708 = t2681*t3555*t3636;
  t4171 = t3956*t3971;
  t4213 = t3708 + t4171;
  t4943 = Cos(var1[12]);
  t5449 = -1.*t3555*t3956;
  t5453 = t2681*t3636*t3971;
  t5475 = t5449 + t5453;
  t2755 = Cos(var1[4]);
  t5573 = Sin(var1[13]);
  t100 = Cos(var1[13]);
  t5648 = t4943*t4213;
  t5662 = -1.*t2779*t5475;
  t5664 = t5648 + t5662;
  t5712 = Cos(var1[14]);
  t5718 = -1.*t5712;
  t5733 = 1. + t5718;
  t5758 = Sin(var1[14]);
  t5779 = t2681*t2755*t5573;
  t5780 = t100*t5664;
  t5787 = t5779 + t5780;
  t5862 = t100*t2681*t2755;
  t5863 = -1.*t5573*t5664;
  t5864 = t5862 + t5863;
  t416 = -1.*t100;
  t799 = 1. + t416;
  t2199 = -0.183*t799;
  t2310 = 0. + t2199;
  t2985 = 0.047*t2779;
  t2992 = 0. + t2985;
  t4959 = -1.*t4943;
  t5066 = 1. + t4959;
  t5301 = -0.047*t5066;
  t5350 = 0. + t5301;
  t5900 = t3555*t3956*t3636;
  t5901 = -1.*t2681*t3971;
  t5904 = t5900 + t5901;
  t5906 = t2681*t3555;
  t5929 = t3956*t3636*t3971;
  t6028 = t5906 + t5929;
  t5575 = -0.183*t5573;
  t5593 = 0. + t5575;
  t5747 = -0.1*t5733;
  t5759 = -0.183*t5758;
  t5777 = 0. + t5747 + t5759;
  t6302 = t4943*t5904;
  t6324 = -1.*t2779*t6028;
  t6335 = t6302 + t6324;
  t5843 = -0.183*t5733;
  t5858 = 0.1*t5758;
  t5861 = 0. + t5843 + t5858;
  t6342 = t2755*t5573*t3956;
  t6365 = t100*t6335;
  t6368 = t6342 + t6365;
  t6373 = t100*t2755*t3956;
  t6380 = -1.*t5573*t6335;
  t6404 = t6373 + t6380;
  t6751 = t4943*t2755*t3555;
  t6753 = -1.*t2755*t2779*t3971;
  t6798 = t6751 + t6753;
  t6828 = -1.*t5573*t3636;
  t6835 = t100*t6798;
  t6858 = t6828 + t6835;
  t6895 = -1.*t100*t3636;
  t6912 = -1.*t5573*t6798;
  t6918 = t6895 + t6912;

  p_output1(0)=0. + t2310*t2681*t2755 + t2992*t4213 + t5350*t5475 - 0.08953*(t2779*t4213 + t4943*t5475) + t5593*t5664 + t5777*t5787 + t5861*t5864 - 0.183*(-1.*t5758*t5787 + t5712*t5864) - 0.2*(t5712*t5787 + t5758*t5864) + var1(0);
  p_output1(1)=0. + t2310*t2755*t3956 + t2992*t5904 + t5350*t6028 - 0.08953*(t2779*t5904 + t4943*t6028) + t5593*t6335 + t5777*t6368 + t5861*t6404 - 0.183*(-1.*t5758*t6368 + t5712*t6404) - 0.2*(t5712*t6368 + t5758*t6404) + var1(1);
  p_output1(2)=0. + t2755*t2992*t3555 - 1.*t2310*t3636 - 0.08953*(t2755*t2779*t3555 + t2755*t3971*t4943) + t2755*t3971*t5350 + t5593*t6798 + t5777*t6858 + t5861*t6918 - 0.183*(-1.*t5758*t6858 + t5712*t6918) - 0.2*(t5712*t6858 + t5758*t6918) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_RRfoot(const Eigen::Matrix<double,18,1> &var1)
//void p_RRfoot(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



