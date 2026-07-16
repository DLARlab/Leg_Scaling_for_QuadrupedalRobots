/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:14:06 GMT-05:00
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
  double t220;
  double t963;
  double t1627;
  double t1069;
  double t1748;
  double t738;
  double t347;
  double t511;
  double t923;
  double t1489;
  double t1767;
  double t1779;
  double t1787;
  double t1793;
  double t1794;
  double t1828;
  double t1863;
  double t1916;
  double t1995;
  double t149;
  double t2356;
  double t3387;
  double t3445;
  double t3634;
  double t3668;
  double t3706;
  double t3737;
  double t3805;
  double t3904;
  double t3921;
  double t4637;
  double t4640;
  double t4642;
  double t737;
  double t2079;
  double t2142;
  double t2666;
  double t2831;
  double t2900;
  double t3203;
  double t3950;
  double t3951;
  double t4103;
  double t4327;
  double t4396;
  double t4590;
  double t4648;
  double t4656;
  double t4774;
  double t4779;
  double t4782;
  double t4802;
  double t4841;
  double t4845;
  double t5244;
  double t5248;
  double t2212;
  double t3061;
  double t3151;
  double t5018;
  double t5078;
  double t5107;
  double t5159;
  double t5162;
  double t5181;
  double t5189;
  double t5198;
  double t5201;
  double t5208;
  double t5209;
  double t5210;
  double t5214;
  double t4865;
  double t4872;
  double t4874;
  double t5236;
  double t5237;
  double t5249;
  double t5251;
  double t5252;
  double t5258;
  double t5259;
  double t5391;
  double t4081;
  double t4525;
  double t4572;
  double t5112;
  double t5113;
  double t5116;
  double t4950;
  double t5000;
  double t5006;
  double t4678;
  double t4785;
  double t4793;
  double t5119;
  double t5157;
  double t5158;
  t220 = Cos(var1[3]);
  t963 = Cos(var1[5]);
  t1627 = Sin(var1[3]);
  t1069 = Sin(var1[4]);
  t1748 = Sin(var1[5]);
  t738 = Cos(var1[16]);
  t347 = Cos(var1[4]);
  t511 = Sin(var1[16]);
  t923 = Cos(var1[15]);
  t1489 = t220*t963*t1069;
  t1767 = t1627*t1748;
  t1779 = t1489 + t1767;
  t1787 = t923*t1779;
  t1793 = Sin(var1[15]);
  t1794 = -1.*t963*t1627;
  t1828 = t220*t1069*t1748;
  t1863 = t1794 + t1828;
  t1916 = -1.*t1793*t1863;
  t1995 = t1787 + t1916;
  t149 = Sin(var1[17]);
  t2356 = Cos(var1[17]);
  t3387 = t963*t1627*t1069;
  t3445 = -1.*t220*t1748;
  t3634 = t3387 + t3445;
  t3668 = t923*t3634;
  t3706 = t220*t963;
  t3737 = t1627*t1069*t1748;
  t3805 = t3706 + t3737;
  t3904 = -1.*t1793*t3805;
  t3921 = t3668 + t3904;
  t4637 = t923*t347*t963;
  t4640 = -1.*t347*t1793*t1748;
  t4642 = t4637 + t4640;
  t737 = t220*t347*t511;
  t2079 = t738*t1995;
  t2142 = t737 + t2079;
  t2666 = t738*t220*t347;
  t2831 = -1.*t511*t1995;
  t2900 = t2666 + t2831;
  t3203 = t347*t511*t1627;
  t3950 = t738*t3921;
  t3951 = t3203 + t3950;
  t4103 = t738*t347*t1627;
  t4327 = -1.*t511*t3921;
  t4396 = t4103 + t4327;
  t4590 = -1.*t511*t1069;
  t4648 = t738*t4642;
  t4656 = t4590 + t4648;
  t4774 = -1.*t738*t1069;
  t4779 = -1.*t511*t4642;
  t4782 = t4774 + t4779;
  t4802 = t1793*t1779;
  t4841 = t923*t1863;
  t4845 = t4802 + t4841;
  t5244 = -1.*t2356;
  t5248 = 1. + t5244;
  t2212 = -1.*t149*t2142;
  t3061 = t2356*t2900;
  t3151 = t2212 + t3061;
  t5018 = t2356*t2142;
  t5078 = t149*t2900;
  t5107 = t5018 + t5078;
  t5159 = -1.*t738;
  t5162 = 1. + t5159;
  t5181 = -0.183*t5162;
  t5189 = 0. + t5181;
  t5198 = -0.047*t1793;
  t5201 = 0. + t5198;
  t5208 = -1.*t923;
  t5209 = 1. + t5208;
  t5210 = 0.047*t5209;
  t5214 = 0. + t5210;
  t4865 = t1793*t3634;
  t4872 = t923*t3805;
  t4874 = t4865 + t4872;
  t5236 = -0.183*t511;
  t5237 = 0. + t5236;
  t5249 = -0.1*t5248;
  t5251 = -0.183*t149;
  t5252 = 0. + t5249 + t5251;
  t5258 = -0.183*t5248;
  t5259 = 0.1*t149;
  t5391 = 0. + t5258 + t5259;
  t4081 = -1.*t149*t3951;
  t4525 = t2356*t4396;
  t4572 = t4081 + t4525;
  t5112 = t2356*t3951;
  t5113 = t149*t4396;
  t5116 = t5112 + t5113;
  t4950 = t347*t963*t1793;
  t5000 = t923*t347*t1748;
  t5006 = t4950 + t5000;
  t4678 = -1.*t149*t4656;
  t4785 = t2356*t4782;
  t4793 = t4678 + t4785;
  t5119 = t2356*t4656;
  t5157 = t149*t4782;
  t5158 = t5119 + t5157;

  p_output1(0)=t3151;
  p_output1(1)=t4572;
  p_output1(2)=t4793;
  p_output1(3)=0.;
  p_output1(4)=t4845;
  p_output1(5)=t4874;
  p_output1(6)=t5006;
  p_output1(7)=0.;
  p_output1(8)=t5107;
  p_output1(9)=t5116;
  p_output1(10)=t5158;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.183*t3151 + 0.08953*t4845 - 0.2*t5107 + t220*t347*t5189 + t1779*t5201 + t1863*t5214 + t1995*t5237 + t2142*t5252 + t2900*t5391 + var1(0);
  p_output1(13)=0. - 0.183*t4572 + 0.08953*t4874 - 0.2*t5116 + t1627*t347*t5189 + t3634*t5201 + t3805*t5214 + t3921*t5237 + t3951*t5252 + t4396*t5391 + var1(1);
  p_output1(14)=0. - 0.183*t4793 + 0.08953*t5006 - 0.2*t5158 - 1.*t1069*t5189 + t1748*t347*t5214 + t4642*t5237 + t4656*t5252 + t4782*t5391 + t347*t5201*t963 + var1(2);
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



