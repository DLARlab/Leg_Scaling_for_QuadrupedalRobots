/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:11:22 GMT-05:00
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
  double t572;
  double t1673;
  double t2334;
  double t1965;
  double t2477;
  double t1173;
  double t772;
  double t1010;
  double t1455;
  double t2241;
  double t2493;
  double t2525;
  double t2529;
  double t2578;
  double t2580;
  double t2583;
  double t2604;
  double t2815;
  double t2889;
  double t352;
  double t3050;
  double t3721;
  double t3791;
  double t3802;
  double t3843;
  double t3882;
  double t3888;
  double t3890;
  double t3913;
  double t3944;
  double t4528;
  double t4537;
  double t4542;
  double t1017;
  double t2988;
  double t2991;
  double t3120;
  double t3237;
  double t3574;
  double t3709;
  double t3989;
  double t4016;
  double t4038;
  double t4156;
  double t4186;
  double t4396;
  double t4547;
  double t4601;
  double t4632;
  double t4663;
  double t4681;
  double t4750;
  double t4766;
  double t4790;
  double t5859;
  double t5878;
  double t3014;
  double t3624;
  double t3626;
  double t4925;
  double t4929;
  double t4982;
  double t5177;
  double t5227;
  double t5231;
  double t5282;
  double t5334;
  double t5342;
  double t5392;
  double t5428;
  double t5593;
  double t5598;
  double t4803;
  double t4823;
  double t4866;
  double t5681;
  double t5772;
  double t5899;
  double t5970;
  double t5980;
  double t6037;
  double t6042;
  double t6050;
  double t4026;
  double t4247;
  double t4303;
  double t5018;
  double t5113;
  double t5155;
  double t4876;
  double t4887;
  double t4889;
  double t4628;
  double t4703;
  double t4709;
  double t5162;
  double t5167;
  double t5169;
  t572 = Cos(var1[3]);
  t1673 = Cos(var1[5]);
  t2334 = Sin(var1[3]);
  t1965 = Sin(var1[4]);
  t2477 = Sin(var1[5]);
  t1173 = Cos(var1[13]);
  t772 = Cos(var1[4]);
  t1010 = Sin(var1[13]);
  t1455 = Cos(var1[12]);
  t2241 = t572*t1673*t1965;
  t2493 = t2334*t2477;
  t2525 = t2241 + t2493;
  t2529 = t1455*t2525;
  t2578 = Sin(var1[12]);
  t2580 = -1.*t1673*t2334;
  t2583 = t572*t1965*t2477;
  t2604 = t2580 + t2583;
  t2815 = -1.*t2578*t2604;
  t2889 = t2529 + t2815;
  t352 = Sin(var1[14]);
  t3050 = Cos(var1[14]);
  t3721 = t1673*t2334*t1965;
  t3791 = -1.*t572*t2477;
  t3802 = t3721 + t3791;
  t3843 = t1455*t3802;
  t3882 = t572*t1673;
  t3888 = t2334*t1965*t2477;
  t3890 = t3882 + t3888;
  t3913 = -1.*t2578*t3890;
  t3944 = t3843 + t3913;
  t4528 = t1455*t772*t1673;
  t4537 = -1.*t772*t2578*t2477;
  t4542 = t4528 + t4537;
  t1017 = t572*t772*t1010;
  t2988 = t1173*t2889;
  t2991 = t1017 + t2988;
  t3120 = t1173*t572*t772;
  t3237 = -1.*t1010*t2889;
  t3574 = t3120 + t3237;
  t3709 = t772*t1010*t2334;
  t3989 = t1173*t3944;
  t4016 = t3709 + t3989;
  t4038 = t1173*t772*t2334;
  t4156 = -1.*t1010*t3944;
  t4186 = t4038 + t4156;
  t4396 = -1.*t1010*t1965;
  t4547 = t1173*t4542;
  t4601 = t4396 + t4547;
  t4632 = -1.*t1173*t1965;
  t4663 = -1.*t1010*t4542;
  t4681 = t4632 + t4663;
  t4750 = t2578*t2525;
  t4766 = t1455*t2604;
  t4790 = t4750 + t4766;
  t5859 = -1.*t3050;
  t5878 = 1. + t5859;
  t3014 = -1.*t352*t2991;
  t3624 = t3050*t3574;
  t3626 = t3014 + t3624;
  t4925 = t3050*t2991;
  t4929 = t352*t3574;
  t4982 = t4925 + t4929;
  t5177 = -1.*t1173;
  t5227 = 1. + t5177;
  t5231 = -0.183*t5227;
  t5282 = 0. + t5231;
  t5334 = 0.047*t2578;
  t5342 = 0. + t5334;
  t5392 = -1.*t1455;
  t5428 = 1. + t5392;
  t5593 = -0.047*t5428;
  t5598 = 0. + t5593;
  t4803 = t2578*t3802;
  t4823 = t1455*t3890;
  t4866 = t4803 + t4823;
  t5681 = -0.183*t1010;
  t5772 = 0. + t5681;
  t5899 = -0.1*t5878;
  t5970 = -0.183*t352;
  t5980 = 0. + t5899 + t5970;
  t6037 = -0.183*t5878;
  t6042 = 0.1*t352;
  t6050 = 0. + t6037 + t6042;
  t4026 = -1.*t352*t4016;
  t4247 = t3050*t4186;
  t4303 = t4026 + t4247;
  t5018 = t3050*t4016;
  t5113 = t352*t4186;
  t5155 = t5018 + t5113;
  t4876 = t772*t1673*t2578;
  t4887 = t1455*t772*t2477;
  t4889 = t4876 + t4887;
  t4628 = -1.*t352*t4601;
  t4703 = t3050*t4681;
  t4709 = t4628 + t4703;
  t5162 = t3050*t4601;
  t5167 = t352*t4681;
  t5169 = t5162 + t5167;

  p_output1(0)=t3626;
  p_output1(1)=t4303;
  p_output1(2)=t4709;
  p_output1(3)=0.;
  p_output1(4)=t4790;
  p_output1(5)=t4866;
  p_output1(6)=t4889;
  p_output1(7)=0.;
  p_output1(8)=t4982;
  p_output1(9)=t5155;
  p_output1(10)=t5169;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.183*t3626 - 0.13205*t4790 - 0.2*t4982 + t2525*t5342 + t2604*t5598 + t2889*t5772 + t2991*t5980 + t3574*t6050 + t5282*t572*t772 + var1(0);
  p_output1(13)=0. - 0.183*t4303 - 0.13205*t4866 - 0.2*t5155 + t3802*t5342 + t3890*t5598 + t3944*t5772 + t4016*t5980 + t4186*t6050 + t2334*t5282*t772 + var1(1);
  p_output1(14)=0. - 0.183*t4709 - 0.13205*t4889 - 0.2*t5169 - 1.*t1965*t5282 + t4542*t5772 + t4601*t5980 + t4681*t6050 + t1673*t5342*t772 + t2477*t5598*t772 + var1(2);
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



