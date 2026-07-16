/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:27:02 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RRfoot.h"

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
  double t407;
  double t1299;
  double t1731;
  double t1450;
  double t1742;
  double t1141;
  double t864;
  double t961;
  double t1185;
  double t1681;
  double t1767;
  double t1768;
  double t1851;
  double t1892;
  double t1966;
  double t1972;
  double t2066;
  double t2093;
  double t2104;
  double t383;
  double t2464;
  double t3365;
  double t3392;
  double t3509;
  double t3516;
  double t3560;
  double t3637;
  double t3641;
  double t3657;
  double t3674;
  double t4134;
  double t4164;
  double t4201;
  double t1041;
  double t2151;
  double t2380;
  double t2585;
  double t2641;
  double t2826;
  double t3353;
  double t3758;
  double t3909;
  double t3956;
  double t3959;
  double t4035;
  double t4110;
  double t4239;
  double t4401;
  double t4651;
  double t4740;
  double t4855;
  double t5079;
  double t5085;
  double t5095;
  double t6152;
  double t6160;
  double t2410;
  double t2958;
  double t3337;
  double t5558;
  double t5572;
  double t5615;
  double t5850;
  double t5862;
  double t5868;
  double t5900;
  double t5930;
  double t5977;
  double t6009;
  double t6036;
  double t6049;
  double t6064;
  double t5099;
  double t5224;
  double t5335;
  double t6088;
  double t6104;
  double t6167;
  double t6169;
  double t6205;
  double t6233;
  double t6262;
  double t6263;
  double t3948;
  double t4056;
  double t4095;
  double t5658;
  double t5671;
  double t5672;
  double t5348;
  double t5476;
  double t5494;
  double t4423;
  double t4967;
  double t5003;
  double t5683;
  double t5698;
  double t5836;
  t407 = Cos(var1[3]);
  t1299 = Cos(var1[5]);
  t1731 = Sin(var1[3]);
  t1450 = Sin(var1[4]);
  t1742 = Sin(var1[5]);
  t1141 = Cos(var1[13]);
  t864 = Cos(var1[4]);
  t961 = Sin(var1[13]);
  t1185 = Cos(var1[12]);
  t1681 = t407*t1299*t1450;
  t1767 = t1731*t1742;
  t1768 = t1681 + t1767;
  t1851 = t1185*t1768;
  t1892 = Sin(var1[12]);
  t1966 = -1.*t1299*t1731;
  t1972 = t407*t1450*t1742;
  t2066 = t1966 + t1972;
  t2093 = -1.*t1892*t2066;
  t2104 = t1851 + t2093;
  t383 = Sin(var1[14]);
  t2464 = Cos(var1[14]);
  t3365 = t1299*t1731*t1450;
  t3392 = -1.*t407*t1742;
  t3509 = t3365 + t3392;
  t3516 = t1185*t3509;
  t3560 = t407*t1299;
  t3637 = t1731*t1450*t1742;
  t3641 = t3560 + t3637;
  t3657 = -1.*t1892*t3641;
  t3674 = t3516 + t3657;
  t4134 = t1185*t864*t1299;
  t4164 = -1.*t864*t1892*t1742;
  t4201 = t4134 + t4164;
  t1041 = t407*t864*t961;
  t2151 = t1141*t2104;
  t2380 = t1041 + t2151;
  t2585 = t1141*t407*t864;
  t2641 = -1.*t961*t2104;
  t2826 = t2585 + t2641;
  t3353 = t864*t961*t1731;
  t3758 = t1141*t3674;
  t3909 = t3353 + t3758;
  t3956 = t1141*t864*t1731;
  t3959 = -1.*t961*t3674;
  t4035 = t3956 + t3959;
  t4110 = -1.*t961*t1450;
  t4239 = t1141*t4201;
  t4401 = t4110 + t4239;
  t4651 = -1.*t1141*t1450;
  t4740 = -1.*t961*t4201;
  t4855 = t4651 + t4740;
  t5079 = t1892*t1768;
  t5085 = t1185*t2066;
  t5095 = t5079 + t5085;
  t6152 = -1.*t2464;
  t6160 = 1. + t6152;
  t2410 = -1.*t383*t2380;
  t2958 = t2464*t2826;
  t3337 = t2410 + t2958;
  t5558 = t2464*t2380;
  t5572 = t383*t2826;
  t5615 = t5558 + t5572;
  t5850 = -1.*t1141;
  t5862 = 1. + t5850;
  t5868 = -0.183*t5862;
  t5900 = 0. + t5868;
  t5930 = 0.047*t1892;
  t5977 = 0. + t5930;
  t6009 = -1.*t1185;
  t6036 = 1. + t6009;
  t6049 = -0.047*t6036;
  t6064 = 0. + t6049;
  t5099 = t1892*t3509;
  t5224 = t1185*t3641;
  t5335 = t5099 + t5224;
  t6088 = -0.183*t961;
  t6104 = 0. + t6088;
  t6167 = -0.3*t6160;
  t6169 = -0.183*t383;
  t6205 = 0. + t6167 + t6169;
  t6233 = -0.183*t6160;
  t6262 = 0.3*t383;
  t6263 = 0. + t6233 + t6262;
  t3948 = -1.*t383*t3909;
  t4056 = t2464*t4035;
  t4095 = t3948 + t4056;
  t5658 = t2464*t3909;
  t5671 = t383*t4035;
  t5672 = t5658 + t5671;
  t5348 = t864*t1299*t1892;
  t5476 = t1185*t864*t1742;
  t5494 = t5348 + t5476;
  t4423 = -1.*t383*t4401;
  t4967 = t2464*t4855;
  t5003 = t4423 + t4967;
  t5683 = t2464*t4401;
  t5698 = t383*t4855;
  t5836 = t5683 + t5698;

  p_output1(0)=t3337;
  p_output1(1)=t4095;
  p_output1(2)=t5003;
  p_output1(3)=0.;
  p_output1(4)=t5095;
  p_output1(5)=t5335;
  p_output1(6)=t5494;
  p_output1(7)=0.;
  p_output1(8)=t5615;
  p_output1(9)=t5672;
  p_output1(10)=t5836;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.183*t3337 - 0.17458*t5095 - 0.6*t5615 + t1768*t5977 + t2066*t6064 + t2104*t6104 + t2380*t6205 + t2826*t6263 + t407*t5900*t864 + var1(0);
  p_output1(13)=0. - 0.183*t4095 - 0.17458*t5335 - 0.6*t5672 + t3509*t5977 + t3641*t6064 + t3674*t6104 + t3909*t6205 + t4035*t6263 + t1731*t5900*t864 + var1(1);
  p_output1(14)=0. - 0.183*t5003 - 0.17458*t5494 - 0.6*t5836 - 1.*t1450*t5900 + t4201*t6104 + t4401*t6205 + t4855*t6263 + t1299*t5977*t864 + t1742*t6064*t864 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_RRfoot(const Eigen::Matrix<double,18,1> &var1)
//void H_RRfoot(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



