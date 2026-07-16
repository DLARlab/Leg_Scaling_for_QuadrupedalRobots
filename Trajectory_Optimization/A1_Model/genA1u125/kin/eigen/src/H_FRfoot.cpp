/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:21:40 GMT-05:00
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
  double t738;
  double t1212;
  double t1589;
  double t1311;
  double t1616;
  double t1081;
  double t1158;
  double t1369;
  double t1661;
  double t1675;
  double t1680;
  double t1904;
  double t1973;
  double t1990;
  double t2142;
  double t2163;
  double t2186;
  double t868;
  double t2235;
  double t431;
  double t3000;
  double t3069;
  double t3209;
  double t3216;
  double t3255;
  double t3267;
  double t3270;
  double t3289;
  double t3297;
  double t2659;
  double t3546;
  double t3604;
  double t3678;
  double t2513;
  double t2541;
  double t2585;
  double t1137;
  double t2277;
  double t2462;
  double t3332;
  double t3370;
  double t3413;
  double t2961;
  double t3305;
  double t3310;
  double t3885;
  double t3934;
  double t4037;
  double t3502;
  double t3751;
  double t3806;
  double t4130;
  double t4141;
  double t4212;
  double t5756;
  double t5768;
  double t2472;
  double t2832;
  double t2866;
  double t4422;
  double t4428;
  double t4555;
  double t4920;
  double t4940;
  double t5053;
  double t5163;
  double t5233;
  double t5243;
  double t5256;
  double t5335;
  double t5493;
  double t5504;
  double t4242;
  double t4243;
  double t4293;
  double t5543;
  double t5552;
  double t5781;
  double t5806;
  double t5808;
  double t5816;
  double t5841;
  double t5843;
  double t3321;
  double t3472;
  double t3493;
  double t4609;
  double t4622;
  double t4627;
  double t4296;
  double t4355;
  double t4379;
  double t3842;
  double t4060;
  double t4090;
  double t4630;
  double t4776;
  double t4904;
  t738 = Cos(var1[3]);
  t1212 = Cos(var1[5]);
  t1589 = Sin(var1[3]);
  t1311 = Sin(var1[4]);
  t1616 = Sin(var1[5]);
  t1081 = Cos(var1[7]);
  t1158 = Cos(var1[6]);
  t1369 = t738*t1212*t1311;
  t1661 = t1589*t1616;
  t1675 = t1369 + t1661;
  t1680 = t1158*t1675;
  t1904 = -1.*t1212*t1589;
  t1973 = t738*t1311*t1616;
  t1990 = t1904 + t1973;
  t2142 = Sin(var1[6]);
  t2163 = -1.*t1990*t2142;
  t2186 = t1680 + t2163;
  t868 = Cos(var1[4]);
  t2235 = Sin(var1[7]);
  t431 = Cos(var1[8]);
  t3000 = t1212*t1589*t1311;
  t3069 = -1.*t738*t1616;
  t3209 = t3000 + t3069;
  t3216 = t1158*t3209;
  t3255 = t738*t1212;
  t3267 = t1589*t1311*t1616;
  t3270 = t3255 + t3267;
  t3289 = -1.*t3270*t2142;
  t3297 = t3216 + t3289;
  t2659 = Sin(var1[8]);
  t3546 = t868*t1212*t1158;
  t3604 = -1.*t868*t1616*t2142;
  t3678 = t3546 + t3604;
  t2513 = t1081*t2186;
  t2541 = t738*t868*t2235;
  t2585 = t2513 + t2541;
  t1137 = t738*t868*t1081;
  t2277 = -1.*t2186*t2235;
  t2462 = t1137 + t2277;
  t3332 = t1081*t3297;
  t3370 = t868*t1589*t2235;
  t3413 = t3332 + t3370;
  t2961 = t868*t1081*t1589;
  t3305 = -1.*t3297*t2235;
  t3310 = t2961 + t3305;
  t3885 = t1081*t3678;
  t3934 = -1.*t1311*t2235;
  t4037 = t3885 + t3934;
  t3502 = -1.*t1081*t1311;
  t3751 = -1.*t3678*t2235;
  t3806 = t3502 + t3751;
  t4130 = t1158*t1990;
  t4141 = t1675*t2142;
  t4212 = t4130 + t4141;
  t5756 = -1.*t431;
  t5768 = 1. + t5756;
  t2472 = t431*t2462;
  t2832 = -1.*t2585*t2659;
  t2866 = t2472 + t2832;
  t4422 = t431*t2585;
  t4428 = t2462*t2659;
  t4555 = t4422 + t4428;
  t4920 = -1.*t1081;
  t4940 = 1. + t4920;
  t5053 = 0.183*t4940;
  t5163 = 0. + t5053;
  t5233 = -1.*t1158;
  t5243 = 1. + t5233;
  t5256 = -0.047*t5243;
  t5335 = 0. + t5256;
  t5493 = 0.047*t2142;
  t5504 = 0. + t5493;
  t4242 = t1158*t3270;
  t4243 = t3209*t2142;
  t4293 = t4242 + t4243;
  t5543 = 0.183*t2235;
  t5552 = 0. + t5543;
  t5781 = -0.25*t5768;
  t5806 = 0.183*t2659;
  t5808 = 0. + t5781 + t5806;
  t5816 = 0.183*t5768;
  t5841 = 0.25*t2659;
  t5843 = 0. + t5816 + t5841;
  t3321 = t431*t3310;
  t3472 = -1.*t3413*t2659;
  t3493 = t3321 + t3472;
  t4609 = t431*t3413;
  t4622 = t3310*t2659;
  t4627 = t4609 + t4622;
  t4296 = t868*t1158*t1616;
  t4355 = t868*t1212*t2142;
  t4379 = t4296 + t4355;
  t3842 = t431*t3806;
  t4060 = -1.*t4037*t2659;
  t4090 = t3842 + t4060;
  t4630 = t431*t4037;
  t4776 = t3806*t2659;
  t4904 = t4630 + t4776;

  p_output1(0)=t2866;
  p_output1(1)=t3493;
  p_output1(2)=t4090;
  p_output1(3)=0.;
  p_output1(4)=t4212;
  p_output1(5)=t4293;
  p_output1(6)=t4379;
  p_output1(7)=0.;
  p_output1(8)=t4555;
  p_output1(9)=t4627;
  p_output1(10)=t4904;
  p_output1(11)=0.;
  p_output1(12)=0. + 0.183*t2866 - 0.15331*t4212 - 0.5*t4555 + t1990*t5335 + t1675*t5504 + t2186*t5552 + t2585*t5808 + t2462*t5843 + t5163*t738*t868 + var1(0);
  p_output1(13)=0. + 0.183*t3493 - 0.15331*t4293 - 0.5*t4627 + t3270*t5335 + t3209*t5504 + t3297*t5552 + t3413*t5808 + t3310*t5843 + t1589*t5163*t868 + var1(1);
  p_output1(14)=0. + 0.183*t4090 - 0.15331*t4379 - 0.5*t4904 - 1.*t1311*t5163 + t3678*t5552 + t4037*t5808 + t3806*t5843 + t1616*t5335*t868 + t1212*t5504*t868 + var1(2);
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



