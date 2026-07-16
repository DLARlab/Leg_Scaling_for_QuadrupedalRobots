/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:21:35 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RL_thigh_joint.h"

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
  double t544;
  double t1031;
  double t1417;
  double t1131;
  double t1608;
  double t222;
  double t574;
  double t675;
  double t676;
  double t2191;
  double t1354;
  double t1646;
  double t1727;
  double t2422;
  double t2430;
  double t2527;
  double t2755;
  double t3419;
  double t3470;
  double t3845;
  double t3856;
  double t3858;
  double t2169;
  double t2534;
  double t2600;
  double t3802;
  double t3973;
  double t3982;
  double t4339;
  double t4369;
  double t4377;
  double t4424;
  double t4438;
  double t4493;
  double t602;
  double t2616;
  double t2617;
  double t4994;
  double t5020;
  double t5069;
  double t5083;
  double t5101;
  double t5102;
  double t5128;
  double t5143;
  double t5147;
  double t5201;
  double t4503;
  double t4544;
  double t4548;
  double t5237;
  double t5261;
  double t2680;
  double t4139;
  double t4306;
  double t4581;
  double t4596;
  double t4660;
  double t4329;
  double t4386;
  double t4403;
  t544 = Cos(var1[3]);
  t1031 = Cos(var1[5]);
  t1417 = Sin(var1[3]);
  t1131 = Sin(var1[4]);
  t1608 = Sin(var1[5]);
  t222 = Cos(var1[16]);
  t574 = Cos(var1[4]);
  t675 = Sin(var1[16]);
  t676 = Cos(var1[15]);
  t2191 = Sin(var1[15]);
  t1354 = t544*t1031*t1131;
  t1646 = t1417*t1608;
  t1727 = t1354 + t1646;
  t2422 = -1.*t1031*t1417;
  t2430 = t544*t1131*t1608;
  t2527 = t2422 + t2430;
  t2755 = t1031*t1417*t1131;
  t3419 = -1.*t544*t1608;
  t3470 = t2755 + t3419;
  t3845 = t544*t1031;
  t3856 = t1417*t1131*t1608;
  t3858 = t3845 + t3856;
  t2169 = t676*t1727;
  t2534 = -1.*t2191*t2527;
  t2600 = t2169 + t2534;
  t3802 = t676*t3470;
  t3973 = -1.*t2191*t3858;
  t3982 = t3802 + t3973;
  t4339 = t676*t574*t1031;
  t4369 = -1.*t574*t2191*t1608;
  t4377 = t4339 + t4369;
  t4424 = t2191*t1727;
  t4438 = t676*t2527;
  t4493 = t4424 + t4438;
  t602 = t222*t544*t574;
  t2616 = -1.*t675*t2600;
  t2617 = t602 + t2616;
  t4994 = -1.*t222;
  t5020 = 1. + t4994;
  t5069 = -0.183*t5020;
  t5083 = 0. + t5069;
  t5101 = -0.047*t2191;
  t5102 = 0. + t5101;
  t5128 = -1.*t676;
  t5143 = 1. + t5128;
  t5147 = 0.047*t5143;
  t5201 = 0. + t5147;
  t4503 = t2191*t3470;
  t4544 = t676*t3858;
  t4548 = t4503 + t4544;
  t5237 = -0.183*t675;
  t5261 = 0. + t5237;
  t2680 = t222*t574*t1417;
  t4139 = -1.*t675*t3982;
  t4306 = t2680 + t4139;
  t4581 = t574*t1031*t2191;
  t4596 = t676*t574*t1608;
  t4660 = t4581 + t4596;
  t4329 = -1.*t222*t1131;
  t4386 = -1.*t675*t4377;
  t4403 = t4329 + t4386;

  p_output1(0)=t2617;
  p_output1(1)=t4306;
  p_output1(2)=t4403;
  p_output1(3)=0.;
  p_output1(4)=t4493;
  p_output1(5)=t4548;
  p_output1(6)=t4660;
  p_output1(7)=0.;
  p_output1(8)=t222*t2600 + t544*t574*t675;
  p_output1(9)=t222*t3982 + t1417*t574*t675;
  p_output1(10)=t222*t4377 - 1.*t1131*t675;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.183*t2617 + 0.15331*t4493 + t1727*t5102 + t2527*t5201 + t2600*t5261 + t5083*t544*t574 + var1(0);
  p_output1(13)=0. - 0.183*t4306 + 0.15331*t4548 + t3470*t5102 + t3858*t5201 + t3982*t5261 + t1417*t5083*t574 + var1(1);
  p_output1(14)=0. - 0.183*t4403 + 0.15331*t4660 - 1.*t1131*t5083 + t4377*t5261 + t1031*t5102*t574 + t1608*t5201*t574 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_RL_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void H_RL_thigh_joint(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



