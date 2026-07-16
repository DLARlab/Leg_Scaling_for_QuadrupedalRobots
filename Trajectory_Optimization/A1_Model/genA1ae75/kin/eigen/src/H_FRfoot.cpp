/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:51:59 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FRfoot.h"

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
  double t420;
  double t805;
  double t851;
  double t809;
  double t1082;
  double t557;
  double t706;
  double t823;
  double t1101;
  double t1108;
  double t1119;
  double t1180;
  double t1185;
  double t1195;
  double t1206;
  double t1208;
  double t1228;
  double t528;
  double t1239;
  double t341;
  double t2245;
  double t2305;
  double t2457;
  double t2503;
  double t2511;
  double t2561;
  double t2590;
  double t2640;
  double t2656;
  double t1776;
  double t3277;
  double t3294;
  double t3445;
  double t1325;
  double t1348;
  double t1353;
  double t586;
  double t1275;
  double t1315;
  double t2707;
  double t2725;
  double t2804;
  double t1965;
  double t2668;
  double t2695;
  double t3800;
  double t4241;
  double t4497;
  double t3253;
  double t3507;
  double t3510;
  double t4574;
  double t4597;
  double t4607;
  double t5470;
  double t5496;
  double t1320;
  double t1861;
  double t1889;
  double t4879;
  double t4894;
  double t4922;
  double t5045;
  double t5095;
  double t5100;
  double t5101;
  double t5138;
  double t5142;
  double t5146;
  double t5257;
  double t5313;
  double t5325;
  double t4659;
  double t4724;
  double t4750;
  double t5409;
  double t5427;
  double t5528;
  double t5597;
  double t5610;
  double t5784;
  double t5785;
  double t5807;
  double t2705;
  double t2819;
  double t3071;
  double t4923;
  double t4946;
  double t4953;
  double t4769;
  double t4800;
  double t4820;
  double t3653;
  double t4508;
  double t4529;
  double t4968;
  double t4975;
  double t5012;
  t420 = Cos(var1[3]);
  t805 = Cos(var1[5]);
  t851 = Sin(var1[3]);
  t809 = Sin(var1[4]);
  t1082 = Sin(var1[5]);
  t557 = Cos(var1[7]);
  t706 = Cos(var1[6]);
  t823 = t420*t805*t809;
  t1101 = t851*t1082;
  t1108 = t823 + t1101;
  t1119 = t706*t1108;
  t1180 = -1.*t805*t851;
  t1185 = t420*t809*t1082;
  t1195 = t1180 + t1185;
  t1206 = Sin(var1[6]);
  t1208 = -1.*t1195*t1206;
  t1228 = t1119 + t1208;
  t528 = Cos(var1[4]);
  t1239 = Sin(var1[7]);
  t341 = Cos(var1[8]);
  t2245 = t805*t851*t809;
  t2305 = -1.*t420*t1082;
  t2457 = t2245 + t2305;
  t2503 = t706*t2457;
  t2511 = t420*t805;
  t2561 = t851*t809*t1082;
  t2590 = t2511 + t2561;
  t2640 = -1.*t2590*t1206;
  t2656 = t2503 + t2640;
  t1776 = Sin(var1[8]);
  t3277 = t528*t805*t706;
  t3294 = -1.*t528*t1082*t1206;
  t3445 = t3277 + t3294;
  t1325 = t557*t1228;
  t1348 = t420*t528*t1239;
  t1353 = t1325 + t1348;
  t586 = t420*t528*t557;
  t1275 = -1.*t1228*t1239;
  t1315 = t586 + t1275;
  t2707 = t557*t2656;
  t2725 = t528*t851*t1239;
  t2804 = t2707 + t2725;
  t1965 = t528*t557*t851;
  t2668 = -1.*t2656*t1239;
  t2695 = t1965 + t2668;
  t3800 = t557*t3445;
  t4241 = -1.*t809*t1239;
  t4497 = t3800 + t4241;
  t3253 = -1.*t557*t809;
  t3507 = -1.*t3445*t1239;
  t3510 = t3253 + t3507;
  t4574 = t706*t1195;
  t4597 = t1108*t1206;
  t4607 = t4574 + t4597;
  t5470 = -1.*t341;
  t5496 = 1. + t5470;
  t1320 = t341*t1315;
  t1861 = -1.*t1353*t1776;
  t1889 = t1320 + t1861;
  t4879 = t341*t1353;
  t4894 = t1315*t1776;
  t4922 = t4879 + t4894;
  t5045 = -1.*t557;
  t5095 = 1. + t5045;
  t5100 = 0.183*t5095;
  t5101 = 0. + t5100;
  t5138 = -1.*t706;
  t5142 = 1. + t5138;
  t5146 = -0.047*t5142;
  t5257 = 0. + t5146;
  t5313 = 0.047*t1206;
  t5325 = 0. + t5313;
  t4659 = t706*t2590;
  t4724 = t2457*t1206;
  t4750 = t4659 + t4724;
  t5409 = 0.183*t1239;
  t5427 = 0. + t5409;
  t5528 = 0.183*t5496;
  t5597 = 0.15*t1776;
  t5610 = 0. + t5528 + t5597;
  t5784 = -0.15*t5496;
  t5785 = 0.183*t1776;
  t5807 = 0. + t5784 + t5785;
  t2705 = t341*t2695;
  t2819 = -1.*t2804*t1776;
  t3071 = t2705 + t2819;
  t4923 = t341*t2804;
  t4946 = t2695*t1776;
  t4953 = t4923 + t4946;
  t4769 = t528*t706*t1082;
  t4800 = t528*t805*t1206;
  t4820 = t4769 + t4800;
  t3653 = t341*t3510;
  t4508 = -1.*t4497*t1776;
  t4529 = t3653 + t4508;
  t4968 = t341*t4497;
  t4975 = t3510*t1776;
  t5012 = t4968 + t4975;

  p_output1(0)=t1889;
  p_output1(1)=t3071;
  p_output1(2)=t4529;
  p_output1(3)=0.;
  p_output1(4)=t4607;
  p_output1(5)=t4750;
  p_output1(6)=t4820;
  p_output1(7)=0.;
  p_output1(8)=t4922;
  p_output1(9)=t4953;
  p_output1(10)=t5012;
  p_output1(11)=0.;
  p_output1(12)=0. + 0.183*t1889 - 0.13205*t4607 - 0.3*t4922 + t1195*t5257 + t420*t5101*t528 + t1108*t5325 + t1228*t5427 + t1315*t5610 + t1353*t5807 + var1(0);
  p_output1(13)=0. + 0.183*t3071 - 0.13205*t4750 - 0.3*t4953 + t2590*t5257 + t2457*t5325 + t2656*t5427 + t2695*t5610 + t2804*t5807 + t5101*t528*t851 + var1(1);
  p_output1(14)=0. + 0.183*t4529 - 0.13205*t4820 - 0.3*t5012 + t1082*t5257*t528 + t3445*t5427 + t3510*t5610 + t4497*t5807 + t528*t5325*t805 - 1.*t5101*t809 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_FRfoot(const Eigen::Matrix<double,18,1> &var1)
//void H_FRfoot(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



