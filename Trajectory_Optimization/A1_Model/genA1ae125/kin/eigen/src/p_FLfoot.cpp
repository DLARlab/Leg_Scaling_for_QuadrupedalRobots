/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:04:43 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FLfoot.h"

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
  double t2006;
  double t4102;
  double t5774;
  double t5073;
  double t6029;
  double t3486;
  double t5685;
  double t6395;
  double t6453;
  double t6558;
  double t6952;
  double t6969;
  double t6977;
  double t2007;
  double t7147;
  double t438;
  double t7186;
  double t7200;
  double t7206;
  double t7239;
  double t7259;
  double t7270;
  double t7282;
  double t7308;
  double t7324;
  double t7325;
  double t7347;
  double t7348;
  double t7354;
  double t477;
  double t1164;
  double t1728;
  double t1791;
  double t3529;
  double t3878;
  double t6660;
  double t6740;
  double t6745;
  double t6753;
  double t7448;
  double t7459;
  double t7464;
  double t7484;
  double t7487;
  double t7494;
  double t7168;
  double t7173;
  double t7277;
  double t7292;
  double t7294;
  double t7553;
  double t7554;
  double t7555;
  double t7337;
  double t7342;
  double t7344;
  double t7559;
  double t7562;
  double t7565;
  double t7575;
  double t7577;
  double t7579;
  double t7771;
  double t7772;
  double t7773;
  double t7786;
  double t7789;
  double t7790;
  double t7801;
  double t7802;
  double t7810;
  t2006 = Cos(var1[3]);
  t4102 = Cos(var1[5]);
  t5774 = Sin(var1[3]);
  t5073 = Sin(var1[4]);
  t6029 = Sin(var1[5]);
  t3486 = Sin(var1[9]);
  t5685 = t2006*t4102*t5073;
  t6395 = t5774*t6029;
  t6453 = t5685 + t6395;
  t6558 = Cos(var1[9]);
  t6952 = -1.*t4102*t5774;
  t6969 = t2006*t5073*t6029;
  t6977 = t6952 + t6969;
  t2007 = Cos(var1[4]);
  t7147 = Sin(var1[10]);
  t438 = Cos(var1[10]);
  t7186 = t6558*t6453;
  t7200 = -1.*t3486*t6977;
  t7206 = t7186 + t7200;
  t7239 = Cos(var1[11]);
  t7259 = -1.*t7239;
  t7270 = 1. + t7259;
  t7282 = Sin(var1[11]);
  t7308 = t2006*t2007*t7147;
  t7324 = t438*t7206;
  t7325 = t7308 + t7324;
  t7347 = t438*t2006*t2007;
  t7348 = -1.*t7147*t7206;
  t7354 = t7347 + t7348;
  t477 = -1.*t438;
  t1164 = 1. + t477;
  t1728 = 0.183*t1164;
  t1791 = 0. + t1728;
  t3529 = -0.047*t3486;
  t3878 = 0. + t3529;
  t6660 = -1.*t6558;
  t6740 = 1. + t6660;
  t6745 = 0.047*t6740;
  t6753 = 0. + t6745;
  t7448 = t4102*t5774*t5073;
  t7459 = -1.*t2006*t6029;
  t7464 = t7448 + t7459;
  t7484 = t2006*t4102;
  t7487 = t5774*t5073*t6029;
  t7494 = t7484 + t7487;
  t7168 = 0.183*t7147;
  t7173 = 0. + t7168;
  t7277 = -0.25*t7270;
  t7292 = 0.183*t7282;
  t7294 = 0. + t7277 + t7292;
  t7553 = t6558*t7464;
  t7554 = -1.*t3486*t7494;
  t7555 = t7553 + t7554;
  t7337 = 0.183*t7270;
  t7342 = 0.25*t7282;
  t7344 = 0. + t7337 + t7342;
  t7559 = t2007*t7147*t5774;
  t7562 = t438*t7555;
  t7565 = t7559 + t7562;
  t7575 = t438*t2007*t5774;
  t7577 = -1.*t7147*t7555;
  t7579 = t7575 + t7577;
  t7771 = t6558*t2007*t4102;
  t7772 = -1.*t2007*t3486*t6029;
  t7773 = t7771 + t7772;
  t7786 = -1.*t7147*t5073;
  t7789 = t438*t7773;
  t7790 = t7786 + t7789;
  t7801 = -1.*t438*t5073;
  t7802 = -1.*t7147*t7773;
  t7810 = t7801 + t7802;

  p_output1(0)=0. + t1791*t2006*t2007 + t3878*t6453 + t6753*t6977 + 0.13205*(t3486*t6453 + t6558*t6977) + t7173*t7206 + t7294*t7325 + t7344*t7354 + 0.183*(-1.*t7282*t7325 + t7239*t7354) - 0.5*(t7239*t7325 + t7282*t7354) + var1(0);
  p_output1(1)=0. + t1791*t2007*t5774 + t3878*t7464 + t6753*t7494 + 0.13205*(t3486*t7464 + t6558*t7494) + t7173*t7555 + t7294*t7565 + t7344*t7579 + 0.183*(-1.*t7282*t7565 + t7239*t7579) - 0.5*(t7239*t7565 + t7282*t7579) + var1(1);
  p_output1(2)=0. + t2007*t3878*t4102 - 1.*t1791*t5073 + 0.13205*(t2007*t3486*t4102 + t2007*t6029*t6558) + t2007*t6029*t6753 + t7173*t7773 + t7294*t7790 + t7344*t7810 + 0.183*(-1.*t7282*t7790 + t7239*t7810) - 0.5*(t7239*t7790 + t7282*t7810) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_FLfoot(const Eigen::Matrix<double,18,1> &var1)
//void p_FLfoot(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



