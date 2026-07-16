/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:21:43 GMT-05:00
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
  double t1638;
  double t2694;
  double t3851;
  double t3108;
  double t3917;
  double t2034;
  double t3476;
  double t3957;
  double t4015;
  double t4978;
  double t5834;
  double t5886;
  double t6111;
  double t1679;
  double t6779;
  double t177;
  double t6881;
  double t6884;
  double t6910;
  double t6949;
  double t6959;
  double t6963;
  double t6970;
  double t7034;
  double t7086;
  double t7160;
  double t7299;
  double t7329;
  double t7353;
  double t788;
  double t978;
  double t1167;
  double t1389;
  double t2359;
  double t2482;
  double t5059;
  double t5097;
  double t5316;
  double t5398;
  double t7530;
  double t7554;
  double t7558;
  double t7574;
  double t7575;
  double t7594;
  double t6788;
  double t6802;
  double t6969;
  double t7001;
  double t7014;
  double t7668;
  double t7693;
  double t7694;
  double t7188;
  double t7237;
  double t7256;
  double t7727;
  double t7728;
  double t7828;
  double t7877;
  double t7886;
  double t7890;
  double t8212;
  double t8217;
  double t8245;
  double t8271;
  double t8315;
  double t8323;
  double t8343;
  double t8356;
  double t8361;
  t1638 = Cos(var1[3]);
  t2694 = Cos(var1[5]);
  t3851 = Sin(var1[3]);
  t3108 = Sin(var1[4]);
  t3917 = Sin(var1[5]);
  t2034 = Sin(var1[12]);
  t3476 = t1638*t2694*t3108;
  t3957 = t3851*t3917;
  t4015 = t3476 + t3957;
  t4978 = Cos(var1[12]);
  t5834 = -1.*t2694*t3851;
  t5886 = t1638*t3108*t3917;
  t6111 = t5834 + t5886;
  t1679 = Cos(var1[4]);
  t6779 = Sin(var1[13]);
  t177 = Cos(var1[13]);
  t6881 = t4978*t4015;
  t6884 = -1.*t2034*t6111;
  t6910 = t6881 + t6884;
  t6949 = Cos(var1[14]);
  t6959 = -1.*t6949;
  t6963 = 1. + t6959;
  t6970 = Sin(var1[14]);
  t7034 = t1638*t1679*t6779;
  t7086 = t177*t6910;
  t7160 = t7034 + t7086;
  t7299 = t177*t1638*t1679;
  t7329 = -1.*t6779*t6910;
  t7353 = t7299 + t7329;
  t788 = -1.*t177;
  t978 = 1. + t788;
  t1167 = -0.183*t978;
  t1389 = 0. + t1167;
  t2359 = 0.047*t2034;
  t2482 = 0. + t2359;
  t5059 = -1.*t4978;
  t5097 = 1. + t5059;
  t5316 = -0.047*t5097;
  t5398 = 0. + t5316;
  t7530 = t2694*t3851*t3108;
  t7554 = -1.*t1638*t3917;
  t7558 = t7530 + t7554;
  t7574 = t1638*t2694;
  t7575 = t3851*t3108*t3917;
  t7594 = t7574 + t7575;
  t6788 = -0.183*t6779;
  t6802 = 0. + t6788;
  t6969 = -0.25*t6963;
  t7001 = -0.183*t6970;
  t7014 = 0. + t6969 + t7001;
  t7668 = t4978*t7558;
  t7693 = -1.*t2034*t7594;
  t7694 = t7668 + t7693;
  t7188 = -0.183*t6963;
  t7237 = 0.25*t6970;
  t7256 = 0. + t7188 + t7237;
  t7727 = t1679*t6779*t3851;
  t7728 = t177*t7694;
  t7828 = t7727 + t7728;
  t7877 = t177*t1679*t3851;
  t7886 = -1.*t6779*t7694;
  t7890 = t7877 + t7886;
  t8212 = t4978*t1679*t2694;
  t8217 = -1.*t1679*t2034*t3917;
  t8245 = t8212 + t8217;
  t8271 = -1.*t6779*t3108;
  t8315 = t177*t8245;
  t8323 = t8271 + t8315;
  t8343 = -1.*t177*t3108;
  t8356 = -1.*t6779*t8245;
  t8361 = t8343 + t8356;

  p_output1(0)=0. + t1389*t1638*t1679 + t2482*t4015 + t5398*t6111 - 0.15331*(t2034*t4015 + t4978*t6111) + t6802*t6910 + t7014*t7160 + t7256*t7353 - 0.183*(-1.*t6970*t7160 + t6949*t7353) - 0.5*(t6949*t7160 + t6970*t7353) + var1(0);
  p_output1(1)=0. + t1389*t1679*t3851 + t2482*t7558 + t5398*t7594 - 0.15331*(t2034*t7558 + t4978*t7594) + t6802*t7694 + t7014*t7828 + t7256*t7890 - 0.183*(-1.*t6970*t7828 + t6949*t7890) - 0.5*(t6949*t7828 + t6970*t7890) + var1(1);
  p_output1(2)=0. + t1679*t2482*t2694 - 1.*t1389*t3108 - 0.15331*(t1679*t2034*t2694 + t1679*t3917*t4978) + t1679*t3917*t5398 + t6802*t8245 + t7014*t8323 + t7256*t8361 - 0.183*(-1.*t6970*t8323 + t6949*t8361) - 0.5*(t6949*t8323 + t6970*t8361) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_RRfoot(const Eigen::Matrix<double,18,1> &var1)
//void p_RRfoot(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



