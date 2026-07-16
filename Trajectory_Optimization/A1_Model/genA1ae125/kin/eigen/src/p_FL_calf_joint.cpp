/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:04:21 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FL_calf_joint.h"

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
static void output1(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  double t1803;
  double t2237;
  double t2433;
  double t2381;
  double t2522;
  double t1931;
  double t2387;
  double t2549;
  double t2550;
  double t2590;
  double t2627;
  double t2629;
  double t2630;
  double t1846;
  double t2747;
  double t668;
  double t2764;
  double t2765;
  double t2771;
  double t2778;
  double t2779;
  double t2788;
  double t2810;
  double t2818;
  double t2819;
  double t2826;
  double t2850;
  double t2855;
  double t2856;
  double t1190;
  double t1602;
  double t1658;
  double t1790;
  double t1936;
  double t2043;
  double t2591;
  double t2607;
  double t2614;
  double t2616;
  double t2935;
  double t2949;
  double t2950;
  double t2957;
  double t2966;
  double t2969;
  double t2759;
  double t2760;
  double t2809;
  double t2816;
  double t2817;
  double t3021;
  double t3022;
  double t3026;
  double t2832;
  double t2844;
  double t2846;
  double t3038;
  double t3045;
  double t3055;
  double t3057;
  double t3058;
  double t3059;
  double t3203;
  double t3208;
  double t3209;
  double t3212;
  double t3220;
  double t3222;
  double t3240;
  double t3242;
  double t3249;
  t1803 = Cos(var1[3]);
  t2237 = Cos(var1[5]);
  t2433 = Sin(var1[3]);
  t2381 = Sin(var1[4]);
  t2522 = Sin(var1[5]);
  t1931 = Sin(var1[9]);
  t2387 = t1803*t2237*t2381;
  t2549 = t2433*t2522;
  t2550 = t2387 + t2549;
  t2590 = Cos(var1[9]);
  t2627 = -1.*t2237*t2433;
  t2629 = t1803*t2381*t2522;
  t2630 = t2627 + t2629;
  t1846 = Cos(var1[4]);
  t2747 = Sin(var1[10]);
  t668 = Cos(var1[10]);
  t2764 = t2590*t2550;
  t2765 = -1.*t1931*t2630;
  t2771 = t2764 + t2765;
  t2778 = Cos(var1[11]);
  t2779 = -1.*t2778;
  t2788 = 1. + t2779;
  t2810 = Sin(var1[11]);
  t2818 = t1803*t1846*t2747;
  t2819 = t668*t2771;
  t2826 = t2818 + t2819;
  t2850 = t668*t1803*t1846;
  t2855 = -1.*t2747*t2771;
  t2856 = t2850 + t2855;
  t1190 = -1.*t668;
  t1602 = 1. + t1190;
  t1658 = 0.183*t1602;
  t1790 = 0. + t1658;
  t1936 = -0.047*t1931;
  t2043 = 0. + t1936;
  t2591 = -1.*t2590;
  t2607 = 1. + t2591;
  t2614 = 0.047*t2607;
  t2616 = 0. + t2614;
  t2935 = t2237*t2433*t2381;
  t2949 = -1.*t1803*t2522;
  t2950 = t2935 + t2949;
  t2957 = t1803*t2237;
  t2966 = t2433*t2381*t2522;
  t2969 = t2957 + t2966;
  t2759 = 0.183*t2747;
  t2760 = 0. + t2759;
  t2809 = -0.25*t2788;
  t2816 = 0.183*t2810;
  t2817 = 0. + t2809 + t2816;
  t3021 = t2590*t2950;
  t3022 = -1.*t1931*t2969;
  t3026 = t3021 + t3022;
  t2832 = 0.183*t2788;
  t2844 = 0.25*t2810;
  t2846 = 0. + t2832 + t2844;
  t3038 = t1846*t2747*t2433;
  t3045 = t668*t3026;
  t3055 = t3038 + t3045;
  t3057 = t668*t1846*t2433;
  t3058 = -1.*t2747*t3026;
  t3059 = t3057 + t3058;
  t3203 = t2590*t1846*t2237;
  t3208 = -1.*t1846*t1931*t2522;
  t3209 = t3203 + t3208;
  t3212 = -1.*t2747*t2381;
  t3220 = t668*t3209;
  t3222 = t3212 + t3220;
  t3240 = -1.*t668*t2381;
  t3242 = -1.*t2747*t3209;
  t3249 = t3240 + t3242;

  p_output1(0)=0. + t1790*t1803*t1846 + t2043*t2550 + t2616*t2630 + 0.13205*(t1931*t2550 + t2590*t2630) + t2760*t2771 + t2817*t2826 + t2846*t2856 + 0.183*(-1.*t2810*t2826 + t2778*t2856) - 0.25*(t2778*t2826 + t2810*t2856) + var1(0);
  p_output1(1)=0. + t1790*t1846*t2433 + t2043*t2950 + t2616*t2969 + 0.13205*(t1931*t2950 + t2590*t2969) + t2760*t3026 + t2817*t3055 + t2846*t3059 + 0.183*(-1.*t2810*t3055 + t2778*t3059) - 0.25*(t2778*t3055 + t2810*t3059) + var1(1);
  p_output1(2)=0. + t1846*t2043*t2237 - 1.*t1790*t2381 + 0.13205*(t1846*t1931*t2237 + t1846*t2522*t2590) + t1846*t2522*t2616 + t2760*t3209 + t2817*t3222 + t2846*t3249 + 0.183*(-1.*t2810*t3222 + t2778*t3249) - 0.25*(t2778*t3222 + t2810*t3249) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_FL_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_FL_calf_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



