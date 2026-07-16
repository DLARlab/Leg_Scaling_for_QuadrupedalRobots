/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:21:28 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RR_thigh_joint.h"

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
  double t472;
  double t1185;
  double t1283;
  double t1241;
  double t1449;
  double t25;
  double t541;
  double t1096;
  double t1175;
  double t2375;
  double t1248;
  double t2323;
  double t2346;
  double t2395;
  double t2538;
  double t2547;
  double t3278;
  double t3565;
  double t3579;
  double t4143;
  double t4160;
  double t4411;
  double t2357;
  double t2656;
  double t2882;
  double t3849;
  double t4457;
  double t4464;
  double t4515;
  double t4598;
  double t4615;
  double t4934;
  double t5136;
  double t5235;
  double t909;
  double t2895;
  double t3004;
  double t6267;
  double t6269;
  double t6317;
  double t6327;
  double t6405;
  double t6543;
  double t6569;
  double t6579;
  double t6607;
  double t6673;
  double t5296;
  double t5485;
  double t5534;
  double t6845;
  double t6856;
  double t3123;
  double t4471;
  double t4479;
  double t5580;
  double t5842;
  double t5957;
  double t4498;
  double t4724;
  double t4799;
  t472 = Cos(var1[3]);
  t1185 = Cos(var1[5]);
  t1283 = Sin(var1[3]);
  t1241 = Sin(var1[4]);
  t1449 = Sin(var1[5]);
  t25 = Cos(var1[13]);
  t541 = Cos(var1[4]);
  t1096 = Sin(var1[13]);
  t1175 = Cos(var1[12]);
  t2375 = Sin(var1[12]);
  t1248 = t472*t1185*t1241;
  t2323 = t1283*t1449;
  t2346 = t1248 + t2323;
  t2395 = -1.*t1185*t1283;
  t2538 = t472*t1241*t1449;
  t2547 = t2395 + t2538;
  t3278 = t1185*t1283*t1241;
  t3565 = -1.*t472*t1449;
  t3579 = t3278 + t3565;
  t4143 = t472*t1185;
  t4160 = t1283*t1241*t1449;
  t4411 = t4143 + t4160;
  t2357 = t1175*t2346;
  t2656 = -1.*t2375*t2547;
  t2882 = t2357 + t2656;
  t3849 = t1175*t3579;
  t4457 = -1.*t2375*t4411;
  t4464 = t3849 + t4457;
  t4515 = t1175*t541*t1185;
  t4598 = -1.*t541*t2375*t1449;
  t4615 = t4515 + t4598;
  t4934 = t2375*t2346;
  t5136 = t1175*t2547;
  t5235 = t4934 + t5136;
  t909 = t25*t472*t541;
  t2895 = -1.*t1096*t2882;
  t3004 = t909 + t2895;
  t6267 = -1.*t25;
  t6269 = 1. + t6267;
  t6317 = -0.183*t6269;
  t6327 = 0. + t6317;
  t6405 = 0.047*t2375;
  t6543 = 0. + t6405;
  t6569 = -1.*t1175;
  t6579 = 1. + t6569;
  t6607 = -0.047*t6579;
  t6673 = 0. + t6607;
  t5296 = t2375*t3579;
  t5485 = t1175*t4411;
  t5534 = t5296 + t5485;
  t6845 = -0.183*t1096;
  t6856 = 0. + t6845;
  t3123 = t25*t541*t1283;
  t4471 = -1.*t1096*t4464;
  t4479 = t3123 + t4471;
  t5580 = t541*t1185*t2375;
  t5842 = t1175*t541*t1449;
  t5957 = t5580 + t5842;
  t4498 = -1.*t25*t1241;
  t4724 = -1.*t1096*t4615;
  t4799 = t4498 + t4724;

  p_output1(0)=t3004;
  p_output1(1)=t4479;
  p_output1(2)=t4799;
  p_output1(3)=0.;
  p_output1(4)=t5235;
  p_output1(5)=t5534;
  p_output1(6)=t5957;
  p_output1(7)=0.;
  p_output1(8)=t25*t2882 + t1096*t472*t541;
  p_output1(9)=t25*t4464 + t1096*t1283*t541;
  p_output1(10)=-1.*t1096*t1241 + t25*t4615;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.183*t3004 - 0.15331*t5235 + t472*t541*t6327 + t2346*t6543 + t2547*t6673 + t2882*t6856 + var1(0);
  p_output1(13)=0. - 0.183*t4479 - 0.15331*t5534 + t1283*t541*t6327 + t3579*t6543 + t4411*t6673 + t4464*t6856 + var1(1);
  p_output1(14)=0. - 0.183*t4799 - 0.15331*t5957 - 1.*t1241*t6327 + t1185*t541*t6543 + t1449*t541*t6673 + t4615*t6856 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_RR_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void H_RR_thigh_joint(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



