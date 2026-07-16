/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:51:33 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FR_calf_joint.h"

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
  double t1895;
  double t3031;
  double t3058;
  double t3034;
  double t3060;
  double t3004;
  double t3051;
  double t3075;
  double t3084;
  double t3090;
  double t3110;
  double t3115;
  double t3130;
  double t2894;
  double t2911;
  double t3222;
  double t3224;
  double t3230;
  double t3231;
  double t3315;
  double t3317;
  double t3342;
  double t3368;
  double t3289;
  double t3312;
  double t3314;
  double t3390;
  double t3397;
  double t3400;
  double t2969;
  double t2971;
  double t2990;
  double t2996;
  double t3013;
  double t3022;
  double t3025;
  double t3029;
  double t3131;
  double t3140;
  double t3541;
  double t3544;
  double t3552;
  double t3555;
  double t3557;
  double t3559;
  double t3256;
  double t3285;
  double t3616;
  double t3617;
  double t3619;
  double t3345;
  double t3369;
  double t3379;
  double t3411;
  double t3417;
  double t3435;
  double t3624;
  double t3633;
  double t3634;
  double t3644;
  double t3659;
  double t3671;
  double t3778;
  double t3785;
  double t3787;
  double t3804;
  double t3806;
  double t3808;
  double t3865;
  double t3866;
  double t3867;
  t1895 = Cos(var1[3]);
  t3031 = Cos(var1[5]);
  t3058 = Sin(var1[4]);
  t3034 = Sin(var1[3]);
  t3060 = Sin(var1[5]);
  t3004 = Cos(var1[6]);
  t3051 = -1.*t3031*t3034;
  t3075 = t1895*t3058*t3060;
  t3084 = t3051 + t3075;
  t3090 = t1895*t3031*t3058;
  t3110 = t3034*t3060;
  t3115 = t3090 + t3110;
  t3130 = Sin(var1[6]);
  t2894 = Cos(var1[4]);
  t2911 = Cos(var1[7]);
  t3222 = t3004*t3115;
  t3224 = -1.*t3084*t3130;
  t3230 = t3222 + t3224;
  t3231 = Sin(var1[7]);
  t3315 = Cos(var1[8]);
  t3317 = -1.*t3315;
  t3342 = 1. + t3317;
  t3368 = Sin(var1[8]);
  t3289 = t1895*t2894*t2911;
  t3312 = -1.*t3230*t3231;
  t3314 = t3289 + t3312;
  t3390 = t2911*t3230;
  t3397 = t1895*t2894*t3231;
  t3400 = t3390 + t3397;
  t2969 = -1.*t2911;
  t2971 = 1. + t2969;
  t2990 = 0.183*t2971;
  t2996 = 0. + t2990;
  t3013 = -1.*t3004;
  t3022 = 1. + t3013;
  t3025 = -0.047*t3022;
  t3029 = 0. + t3025;
  t3131 = 0.047*t3130;
  t3140 = 0. + t3131;
  t3541 = t1895*t3031;
  t3544 = t3034*t3058*t3060;
  t3552 = t3541 + t3544;
  t3555 = t3031*t3034*t3058;
  t3557 = -1.*t1895*t3060;
  t3559 = t3555 + t3557;
  t3256 = 0.183*t3231;
  t3285 = 0. + t3256;
  t3616 = t3004*t3559;
  t3617 = -1.*t3552*t3130;
  t3619 = t3616 + t3617;
  t3345 = 0.183*t3342;
  t3369 = 0.15*t3368;
  t3379 = 0. + t3345 + t3369;
  t3411 = -0.15*t3342;
  t3417 = 0.183*t3368;
  t3435 = 0. + t3411 + t3417;
  t3624 = t2894*t2911*t3034;
  t3633 = -1.*t3619*t3231;
  t3634 = t3624 + t3633;
  t3644 = t2911*t3619;
  t3659 = t2894*t3034*t3231;
  t3671 = t3644 + t3659;
  t3778 = t2894*t3031*t3004;
  t3785 = -1.*t2894*t3060*t3130;
  t3787 = t3778 + t3785;
  t3804 = -1.*t2911*t3058;
  t3806 = -1.*t3787*t3231;
  t3808 = t3804 + t3806;
  t3865 = t2911*t3787;
  t3866 = -1.*t3058*t3231;
  t3867 = t3865 + t3866;

  p_output1(0)=0. + t1895*t2894*t2996 + t3029*t3084 - 0.13205*(t3004*t3084 + t3115*t3130) + t3115*t3140 + t3230*t3285 + t3314*t3379 - 0.15*(t3314*t3368 + t3315*t3400) + 0.183*(t3314*t3315 - 1.*t3368*t3400) + t3400*t3435 + var1(0);
  p_output1(1)=0. + t2894*t2996*t3034 + t3029*t3552 + t3140*t3559 - 0.13205*(t3004*t3552 + t3130*t3559) + t3285*t3619 + t3379*t3634 + t3435*t3671 - 0.15*(t3368*t3634 + t3315*t3671) + 0.183*(t3315*t3634 - 1.*t3368*t3671) + var1(1);
  p_output1(2)=0. - 1.*t2996*t3058 + t2894*t3029*t3060 - 0.13205*(t2894*t3004*t3060 + t2894*t3031*t3130) + t2894*t3031*t3140 + t3285*t3787 + t3379*t3808 + t3435*t3867 - 0.15*(t3368*t3808 + t3315*t3867) + 0.183*(t3315*t3808 - 1.*t3368*t3867) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_FR_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_FR_calf_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



