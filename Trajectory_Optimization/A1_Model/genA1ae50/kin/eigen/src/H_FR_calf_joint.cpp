/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:10:54 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FR_calf_joint.h"

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
  double t1106;
  double t1434;
  double t1712;
  double t1634;
  double t1727;
  double t1225;
  double t1402;
  double t1684;
  double t1748;
  double t1792;
  double t1894;
  double t2040;
  double t2062;
  double t2097;
  double t2129;
  double t2143;
  double t2149;
  double t1137;
  double t2163;
  double t587;
  double t3108;
  double t3152;
  double t3203;
  double t3315;
  double t3335;
  double t3481;
  double t3563;
  double t3576;
  double t3583;
  double t2582;
  double t4422;
  double t4484;
  double t4525;
  double t2290;
  double t2397;
  double t2515;
  double t1343;
  double t2235;
  double t2240;
  double t3731;
  double t4007;
  double t4075;
  double t2971;
  double t3606;
  double t3611;
  double t4626;
  double t4631;
  double t4635;
  double t4219;
  double t4548;
  double t4582;
  double t4654;
  double t4674;
  double t4676;
  double t5058;
  double t5060;
  double t2273;
  double t2737;
  double t2873;
  double t4801;
  double t4811;
  double t4812;
  double t4938;
  double t4942;
  double t4944;
  double t4954;
  double t4958;
  double t4969;
  double t4985;
  double t4997;
  double t5006;
  double t5007;
  double t4678;
  double t4715;
  double t4732;
  double t5048;
  double t5052;
  double t5061;
  double t5068;
  double t5075;
  double t5091;
  double t5098;
  double t5100;
  double t3665;
  double t4141;
  double t4143;
  double t4818;
  double t4820;
  double t4827;
  double t4771;
  double t4789;
  double t4797;
  double t4586;
  double t4636;
  double t4645;
  double t4837;
  double t4868;
  double t4898;
  t1106 = Cos(var1[3]);
  t1434 = Cos(var1[5]);
  t1712 = Sin(var1[3]);
  t1634 = Sin(var1[4]);
  t1727 = Sin(var1[5]);
  t1225 = Cos(var1[7]);
  t1402 = Cos(var1[6]);
  t1684 = t1106*t1434*t1634;
  t1748 = t1712*t1727;
  t1792 = t1684 + t1748;
  t1894 = t1402*t1792;
  t2040 = -1.*t1434*t1712;
  t2062 = t1106*t1634*t1727;
  t2097 = t2040 + t2062;
  t2129 = Sin(var1[6]);
  t2143 = -1.*t2097*t2129;
  t2149 = t1894 + t2143;
  t1137 = Cos(var1[4]);
  t2163 = Sin(var1[7]);
  t587 = Cos(var1[8]);
  t3108 = t1434*t1712*t1634;
  t3152 = -1.*t1106*t1727;
  t3203 = t3108 + t3152;
  t3315 = t1402*t3203;
  t3335 = t1106*t1434;
  t3481 = t1712*t1634*t1727;
  t3563 = t3335 + t3481;
  t3576 = -1.*t3563*t2129;
  t3583 = t3315 + t3576;
  t2582 = Sin(var1[8]);
  t4422 = t1137*t1434*t1402;
  t4484 = -1.*t1137*t1727*t2129;
  t4525 = t4422 + t4484;
  t2290 = t1225*t2149;
  t2397 = t1106*t1137*t2163;
  t2515 = t2290 + t2397;
  t1343 = t1106*t1137*t1225;
  t2235 = -1.*t2149*t2163;
  t2240 = t1343 + t2235;
  t3731 = t1225*t3583;
  t4007 = t1137*t1712*t2163;
  t4075 = t3731 + t4007;
  t2971 = t1137*t1225*t1712;
  t3606 = -1.*t3583*t2163;
  t3611 = t2971 + t3606;
  t4626 = t1225*t4525;
  t4631 = -1.*t1634*t2163;
  t4635 = t4626 + t4631;
  t4219 = -1.*t1225*t1634;
  t4548 = -1.*t4525*t2163;
  t4582 = t4219 + t4548;
  t4654 = t1402*t2097;
  t4674 = t1792*t2129;
  t4676 = t4654 + t4674;
  t5058 = -1.*t587;
  t5060 = 1. + t5058;
  t2273 = t587*t2240;
  t2737 = -1.*t2515*t2582;
  t2873 = t2273 + t2737;
  t4801 = t587*t2515;
  t4811 = t2240*t2582;
  t4812 = t4801 + t4811;
  t4938 = -1.*t1225;
  t4942 = 1. + t4938;
  t4944 = 0.183*t4942;
  t4954 = 0. + t4944;
  t4958 = -1.*t1402;
  t4969 = 1. + t4958;
  t4985 = -0.047*t4969;
  t4997 = 0. + t4985;
  t5006 = 0.047*t2129;
  t5007 = 0. + t5006;
  t4678 = t1402*t3563;
  t4715 = t3203*t2129;
  t4732 = t4678 + t4715;
  t5048 = 0.183*t2163;
  t5052 = 0. + t5048;
  t5061 = 0.183*t5060;
  t5068 = 0.1*t2582;
  t5075 = 0. + t5061 + t5068;
  t5091 = -0.1*t5060;
  t5098 = 0.183*t2582;
  t5100 = 0. + t5091 + t5098;
  t3665 = t587*t3611;
  t4141 = -1.*t4075*t2582;
  t4143 = t3665 + t4141;
  t4818 = t587*t4075;
  t4820 = t3611*t2582;
  t4827 = t4818 + t4820;
  t4771 = t1137*t1402*t1727;
  t4789 = t1137*t1434*t2129;
  t4797 = t4771 + t4789;
  t4586 = t587*t4582;
  t4636 = -1.*t4635*t2582;
  t4645 = t4586 + t4636;
  t4837 = t587*t4635;
  t4868 = t4582*t2582;
  t4898 = t4837 + t4868;

  p_output1(0)=t2873;
  p_output1(1)=t4143;
  p_output1(2)=t4645;
  p_output1(3)=0.;
  p_output1(4)=t4676;
  p_output1(5)=t4732;
  p_output1(6)=t4797;
  p_output1(7)=0.;
  p_output1(8)=t4812;
  p_output1(9)=t4827;
  p_output1(10)=t4898;
  p_output1(11)=0.;
  p_output1(12)=0. + 0.183*t2873 - 0.13205*t4676 - 0.1*t4812 + t1106*t1137*t4954 + t2097*t4997 + t1792*t5007 + t2149*t5052 + t2240*t5075 + t2515*t5100 + var1(0);
  p_output1(13)=0. + 0.183*t4143 - 0.13205*t4732 - 0.1*t4827 + t1137*t1712*t4954 + t3563*t4997 + t3203*t5007 + t3583*t5052 + t3611*t5075 + t4075*t5100 + var1(1);
  p_output1(14)=0. + 0.183*t4645 - 0.13205*t4797 - 0.1*t4898 - 1.*t1634*t4954 + t1137*t1727*t4997 + t1137*t1434*t5007 + t4525*t5052 + t4582*t5075 + t4635*t5100 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_FR_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void H_FR_calf_joint(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



