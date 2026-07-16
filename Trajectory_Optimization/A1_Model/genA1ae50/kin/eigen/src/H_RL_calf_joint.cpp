/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:11:15 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RL_calf_joint.h"

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
  double t485;
  double t1223;
  double t1468;
  double t1246;
  double t1480;
  double t925;
  double t609;
  double t753;
  double t1213;
  double t1345;
  double t1502;
  double t1720;
  double t1877;
  double t1905;
  double t2000;
  double t2026;
  double t2039;
  double t2099;
  double t2196;
  double t276;
  double t2513;
  double t2978;
  double t2984;
  double t3106;
  double t3187;
  double t3190;
  double t3474;
  double t3806;
  double t3977;
  double t3991;
  double t4306;
  double t4321;
  double t4340;
  double t855;
  double t2335;
  double t2358;
  double t2517;
  double t2521;
  double t2590;
  double t2942;
  double t4183;
  double t4212;
  double t4228;
  double t4238;
  double t4244;
  double t4291;
  double t4342;
  double t4343;
  double t4400;
  double t4403;
  double t4426;
  double t4440;
  double t4442;
  double t4449;
  double t5538;
  double t5539;
  double t2497;
  double t2807;
  double t2818;
  double t4495;
  double t4497;
  double t4517;
  double t4983;
  double t5149;
  double t5197;
  double t5200;
  double t5341;
  double t5386;
  double t5411;
  double t5417;
  double t5424;
  double t5426;
  double t4459;
  double t4462;
  double t4470;
  double t5504;
  double t5511;
  double t5552;
  double t5579;
  double t5638;
  double t5839;
  double t5908;
  double t6009;
  double t4224;
  double t4248;
  double t4282;
  double t4519;
  double t4521;
  double t4562;
  double t4474;
  double t4475;
  double t4476;
  double t4358;
  double t4436;
  double t4439;
  double t4819;
  double t4830;
  double t4901;
  t485 = Cos(var1[3]);
  t1223 = Cos(var1[5]);
  t1468 = Sin(var1[3]);
  t1246 = Sin(var1[4]);
  t1480 = Sin(var1[5]);
  t925 = Cos(var1[16]);
  t609 = Cos(var1[4]);
  t753 = Sin(var1[16]);
  t1213 = Cos(var1[15]);
  t1345 = t485*t1223*t1246;
  t1502 = t1468*t1480;
  t1720 = t1345 + t1502;
  t1877 = t1213*t1720;
  t1905 = Sin(var1[15]);
  t2000 = -1.*t1223*t1468;
  t2026 = t485*t1246*t1480;
  t2039 = t2000 + t2026;
  t2099 = -1.*t1905*t2039;
  t2196 = t1877 + t2099;
  t276 = Sin(var1[17]);
  t2513 = Cos(var1[17]);
  t2978 = t1223*t1468*t1246;
  t2984 = -1.*t485*t1480;
  t3106 = t2978 + t2984;
  t3187 = t1213*t3106;
  t3190 = t485*t1223;
  t3474 = t1468*t1246*t1480;
  t3806 = t3190 + t3474;
  t3977 = -1.*t1905*t3806;
  t3991 = t3187 + t3977;
  t4306 = t1213*t609*t1223;
  t4321 = -1.*t609*t1905*t1480;
  t4340 = t4306 + t4321;
  t855 = t485*t609*t753;
  t2335 = t925*t2196;
  t2358 = t855 + t2335;
  t2517 = t925*t485*t609;
  t2521 = -1.*t753*t2196;
  t2590 = t2517 + t2521;
  t2942 = t609*t753*t1468;
  t4183 = t925*t3991;
  t4212 = t2942 + t4183;
  t4228 = t925*t609*t1468;
  t4238 = -1.*t753*t3991;
  t4244 = t4228 + t4238;
  t4291 = -1.*t753*t1246;
  t4342 = t925*t4340;
  t4343 = t4291 + t4342;
  t4400 = -1.*t925*t1246;
  t4403 = -1.*t753*t4340;
  t4426 = t4400 + t4403;
  t4440 = t1905*t1720;
  t4442 = t1213*t2039;
  t4449 = t4440 + t4442;
  t5538 = -1.*t2513;
  t5539 = 1. + t5538;
  t2497 = -1.*t276*t2358;
  t2807 = t2513*t2590;
  t2818 = t2497 + t2807;
  t4495 = t2513*t2358;
  t4497 = t276*t2590;
  t4517 = t4495 + t4497;
  t4983 = -1.*t925;
  t5149 = 1. + t4983;
  t5197 = -0.183*t5149;
  t5200 = 0. + t5197;
  t5341 = -0.047*t1905;
  t5386 = 0. + t5341;
  t5411 = -1.*t1213;
  t5417 = 1. + t5411;
  t5424 = 0.047*t5417;
  t5426 = 0. + t5424;
  t4459 = t1905*t3106;
  t4462 = t1213*t3806;
  t4470 = t4459 + t4462;
  t5504 = -0.183*t753;
  t5511 = 0. + t5504;
  t5552 = -0.1*t5539;
  t5579 = -0.183*t276;
  t5638 = 0. + t5552 + t5579;
  t5839 = -0.183*t5539;
  t5908 = 0.1*t276;
  t6009 = 0. + t5839 + t5908;
  t4224 = -1.*t276*t4212;
  t4248 = t2513*t4244;
  t4282 = t4224 + t4248;
  t4519 = t2513*t4212;
  t4521 = t276*t4244;
  t4562 = t4519 + t4521;
  t4474 = t609*t1223*t1905;
  t4475 = t1213*t609*t1480;
  t4476 = t4474 + t4475;
  t4358 = -1.*t276*t4343;
  t4436 = t2513*t4426;
  t4439 = t4358 + t4436;
  t4819 = t2513*t4343;
  t4830 = t276*t4426;
  t4901 = t4819 + t4830;

  p_output1(0)=t2818;
  p_output1(1)=t4282;
  p_output1(2)=t4439;
  p_output1(3)=0.;
  p_output1(4)=t4449;
  p_output1(5)=t4470;
  p_output1(6)=t4476;
  p_output1(7)=0.;
  p_output1(8)=t4517;
  p_output1(9)=t4562;
  p_output1(10)=t4901;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.183*t2818 + 0.13205*t4449 - 0.1*t4517 + t1720*t5386 + t2039*t5426 + t2196*t5511 + t2358*t5638 + t2590*t6009 + t485*t5200*t609 + var1(0);
  p_output1(13)=0. - 0.183*t4282 + 0.13205*t4470 - 0.1*t4562 + t3106*t5386 + t3806*t5426 + t3991*t5511 + t4212*t5638 + t4244*t6009 + t1468*t5200*t609 + var1(1);
  p_output1(14)=0. - 0.183*t4439 + 0.13205*t4476 - 0.1*t4901 - 1.*t1246*t5200 + t4340*t5511 + t4343*t5638 + t4426*t6009 + t1223*t5386*t609 + t1480*t5426*t609 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_RL_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void H_RL_calf_joint(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



