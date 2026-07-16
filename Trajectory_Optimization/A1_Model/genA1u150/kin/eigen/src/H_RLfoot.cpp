/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:27:04 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RLfoot.h"

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
  double t555;
  double t1214;
  double t1743;
  double t1358;
  double t2019;
  double t1158;
  double t615;
  double t888;
  double t1194;
  double t1642;
  double t2115;
  double t2179;
  double t2181;
  double t2218;
  double t2257;
  double t2270;
  double t2321;
  double t2401;
  double t2460;
  double t67;
  double t2849;
  double t3234;
  double t3323;
  double t3329;
  double t3394;
  double t3538;
  double t3612;
  double t3907;
  double t4534;
  double t4627;
  double t5071;
  double t5096;
  double t5100;
  double t1010;
  double t2472;
  double t2511;
  double t2863;
  double t2914;
  double t3141;
  double t3224;
  double t4630;
  double t4648;
  double t4921;
  double t4978;
  double t4987;
  double t5061;
  double t5233;
  double t5244;
  double t5296;
  double t5315;
  double t5325;
  double t5482;
  double t5506;
  double t5531;
  double t6801;
  double t6818;
  double t2728;
  double t3151;
  double t3154;
  double t5859;
  double t5902;
  double t5921;
  double t6334;
  double t6339;
  double t6359;
  double t6381;
  double t6420;
  double t6425;
  double t6439;
  double t6442;
  double t6668;
  double t6681;
  double t5627;
  double t5628;
  double t5659;
  double t6752;
  double t6784;
  double t6847;
  double t6849;
  double t6872;
  double t6982;
  double t6993;
  double t7010;
  double t4750;
  double t5000;
  double t5038;
  double t5966;
  double t6030;
  double t6053;
  double t5667;
  double t5698;
  double t5798;
  double t5258;
  double t5393;
  double t5463;
  double t6253;
  double t6256;
  double t6290;
  t555 = Cos(var1[3]);
  t1214 = Cos(var1[5]);
  t1743 = Sin(var1[3]);
  t1358 = Sin(var1[4]);
  t2019 = Sin(var1[5]);
  t1158 = Cos(var1[16]);
  t615 = Cos(var1[4]);
  t888 = Sin(var1[16]);
  t1194 = Cos(var1[15]);
  t1642 = t555*t1214*t1358;
  t2115 = t1743*t2019;
  t2179 = t1642 + t2115;
  t2181 = t1194*t2179;
  t2218 = Sin(var1[15]);
  t2257 = -1.*t1214*t1743;
  t2270 = t555*t1358*t2019;
  t2321 = t2257 + t2270;
  t2401 = -1.*t2218*t2321;
  t2460 = t2181 + t2401;
  t67 = Sin(var1[17]);
  t2849 = Cos(var1[17]);
  t3234 = t1214*t1743*t1358;
  t3323 = -1.*t555*t2019;
  t3329 = t3234 + t3323;
  t3394 = t1194*t3329;
  t3538 = t555*t1214;
  t3612 = t1743*t1358*t2019;
  t3907 = t3538 + t3612;
  t4534 = -1.*t2218*t3907;
  t4627 = t3394 + t4534;
  t5071 = t1194*t615*t1214;
  t5096 = -1.*t615*t2218*t2019;
  t5100 = t5071 + t5096;
  t1010 = t555*t615*t888;
  t2472 = t1158*t2460;
  t2511 = t1010 + t2472;
  t2863 = t1158*t555*t615;
  t2914 = -1.*t888*t2460;
  t3141 = t2863 + t2914;
  t3224 = t615*t888*t1743;
  t4630 = t1158*t4627;
  t4648 = t3224 + t4630;
  t4921 = t1158*t615*t1743;
  t4978 = -1.*t888*t4627;
  t4987 = t4921 + t4978;
  t5061 = -1.*t888*t1358;
  t5233 = t1158*t5100;
  t5244 = t5061 + t5233;
  t5296 = -1.*t1158*t1358;
  t5315 = -1.*t888*t5100;
  t5325 = t5296 + t5315;
  t5482 = t2218*t2179;
  t5506 = t1194*t2321;
  t5531 = t5482 + t5506;
  t6801 = -1.*t2849;
  t6818 = 1. + t6801;
  t2728 = -1.*t67*t2511;
  t3151 = t2849*t3141;
  t3154 = t2728 + t3151;
  t5859 = t2849*t2511;
  t5902 = t67*t3141;
  t5921 = t5859 + t5902;
  t6334 = -1.*t1158;
  t6339 = 1. + t6334;
  t6359 = -0.183*t6339;
  t6381 = 0. + t6359;
  t6420 = -0.047*t2218;
  t6425 = 0. + t6420;
  t6439 = -1.*t1194;
  t6442 = 1. + t6439;
  t6668 = 0.047*t6442;
  t6681 = 0. + t6668;
  t5627 = t2218*t3329;
  t5628 = t1194*t3907;
  t5659 = t5627 + t5628;
  t6752 = -0.183*t888;
  t6784 = 0. + t6752;
  t6847 = -0.3*t6818;
  t6849 = -0.183*t67;
  t6872 = 0. + t6847 + t6849;
  t6982 = -0.183*t6818;
  t6993 = 0.3*t67;
  t7010 = 0. + t6982 + t6993;
  t4750 = -1.*t67*t4648;
  t5000 = t2849*t4987;
  t5038 = t4750 + t5000;
  t5966 = t2849*t4648;
  t6030 = t67*t4987;
  t6053 = t5966 + t6030;
  t5667 = t615*t1214*t2218;
  t5698 = t1194*t615*t2019;
  t5798 = t5667 + t5698;
  t5258 = -1.*t67*t5244;
  t5393 = t2849*t5325;
  t5463 = t5258 + t5393;
  t6253 = t2849*t5244;
  t6256 = t67*t5325;
  t6290 = t6253 + t6256;

  p_output1(0)=t3154;
  p_output1(1)=t5038;
  p_output1(2)=t5463;
  p_output1(3)=0.;
  p_output1(4)=t5531;
  p_output1(5)=t5659;
  p_output1(6)=t5798;
  p_output1(7)=0.;
  p_output1(8)=t5921;
  p_output1(9)=t6053;
  p_output1(10)=t6290;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.183*t3154 + 0.17458*t5531 - 0.6*t5921 + t555*t615*t6381 + t2179*t6425 + t2321*t6681 + t2460*t6784 + t2511*t6872 + t3141*t7010 + var1(0);
  p_output1(13)=0. - 0.183*t5038 + 0.17458*t5659 - 0.6*t6053 + t1743*t615*t6381 + t3329*t6425 + t3907*t6681 + t4627*t6784 + t4648*t6872 + t4987*t7010 + var1(1);
  p_output1(14)=0. - 0.183*t5463 + 0.17458*t5798 - 0.6*t6290 - 1.*t1358*t6381 + t1214*t615*t6425 + t2019*t615*t6681 + t5100*t6784 + t5244*t6872 + t5325*t7010 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_RLfoot(const Eigen::Matrix<double,18,1> &var1)
//void H_RLfoot(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



