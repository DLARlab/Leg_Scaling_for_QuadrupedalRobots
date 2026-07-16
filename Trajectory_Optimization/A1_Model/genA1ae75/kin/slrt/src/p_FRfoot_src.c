/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:51:01 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FRfoot_src.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE static __inline__        /* use standard inline */
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
static void output1(double *p_output1,const double *var1)
{
  double t746;
  double t2506;
  double t2512;
  double t2507;
  double t2513;
  double t2420;
  double t2508;
  double t2541;
  double t2555;
  double t2566;
  double t2598;
  double t2616;
  double t2622;
  double t2124;
  double t2147;
  double t2775;
  double t2780;
  double t2787;
  double t2809;
  double t2899;
  double t2956;
  double t3014;
  double t3039;
  double t2872;
  double t2875;
  double t2878;
  double t3071;
  double t3078;
  double t3108;
  double t2346;
  double t2351;
  double t2386;
  double t2409;
  double t2446;
  double t2478;
  double t2481;
  double t2498;
  double t2626;
  double t2632;
  double t3277;
  double t3308;
  double t3311;
  double t3351;
  double t3352;
  double t3363;
  double t2813;
  double t2848;
  double t3569;
  double t3600;
  double t3603;
  double t3015;
  double t3041;
  double t3054;
  double t3127;
  double t3133;
  double t3149;
  double t3618;
  double t3676;
  double t3760;
  double t3807;
  double t3825;
  double t3832;
  double t4054;
  double t4068;
  double t4071;
  double t4088;
  double t4096;
  double t4099;
  double t4121;
  double t4123;
  double t4128;
  t746 = Cos(var1[3]);
  t2506 = Cos(var1[5]);
  t2512 = Sin(var1[4]);
  t2507 = Sin(var1[3]);
  t2513 = Sin(var1[5]);
  t2420 = Cos(var1[6]);
  t2508 = -1.*t2506*t2507;
  t2541 = t746*t2512*t2513;
  t2555 = t2508 + t2541;
  t2566 = t746*t2506*t2512;
  t2598 = t2507*t2513;
  t2616 = t2566 + t2598;
  t2622 = Sin(var1[6]);
  t2124 = Cos(var1[4]);
  t2147 = Cos(var1[7]);
  t2775 = t2420*t2616;
  t2780 = -1.*t2555*t2622;
  t2787 = t2775 + t2780;
  t2809 = Sin(var1[7]);
  t2899 = Cos(var1[8]);
  t2956 = -1.*t2899;
  t3014 = 1. + t2956;
  t3039 = Sin(var1[8]);
  t2872 = t746*t2124*t2147;
  t2875 = -1.*t2787*t2809;
  t2878 = t2872 + t2875;
  t3071 = t2147*t2787;
  t3078 = t746*t2124*t2809;
  t3108 = t3071 + t3078;
  t2346 = -1.*t2147;
  t2351 = 1. + t2346;
  t2386 = 0.183*t2351;
  t2409 = 0. + t2386;
  t2446 = -1.*t2420;
  t2478 = 1. + t2446;
  t2481 = -0.047*t2478;
  t2498 = 0. + t2481;
  t2626 = 0.047*t2622;
  t2632 = 0. + t2626;
  t3277 = t746*t2506;
  t3308 = t2507*t2512*t2513;
  t3311 = t3277 + t3308;
  t3351 = t2506*t2507*t2512;
  t3352 = -1.*t746*t2513;
  t3363 = t3351 + t3352;
  t2813 = 0.183*t2809;
  t2848 = 0. + t2813;
  t3569 = t2420*t3363;
  t3600 = -1.*t3311*t2622;
  t3603 = t3569 + t3600;
  t3015 = 0.183*t3014;
  t3041 = 0.15*t3039;
  t3054 = 0. + t3015 + t3041;
  t3127 = -0.15*t3014;
  t3133 = 0.183*t3039;
  t3149 = 0. + t3127 + t3133;
  t3618 = t2124*t2147*t2507;
  t3676 = -1.*t3603*t2809;
  t3760 = t3618 + t3676;
  t3807 = t2147*t3603;
  t3825 = t2124*t2507*t2809;
  t3832 = t3807 + t3825;
  t4054 = t2124*t2506*t2420;
  t4068 = -1.*t2124*t2513*t2622;
  t4071 = t4054 + t4068;
  t4088 = -1.*t2147*t2512;
  t4096 = -1.*t4071*t2809;
  t4099 = t4088 + t4096;
  t4121 = t2147*t4071;
  t4123 = -1.*t2512*t2809;
  t4128 = t4121 + t4123;
  p_output1[0]=0. + t2498*t2555 - 0.13205*(t2420*t2555 + t2616*t2622) + t2616*t2632 + t2787*t2848 + t2878*t3054 - 0.3*(t2878*t3039 + t2899*t3108) + 0.183*(t2878*t2899 - 1.*t3039*t3108) + t3108*t3149 + t2124*t2409*t746 + var1[0];
  p_output1[1]=0. + t2124*t2409*t2507 + t2498*t3311 + t2632*t3363 - 0.13205*(t2420*t3311 + t2622*t3363) + t2848*t3603 + t3054*t3760 + t3149*t3832 - 0.3*(t3039*t3760 + t2899*t3832) + 0.183*(t2899*t3760 - 1.*t3039*t3832) + var1[1];
  p_output1[2]=0. - 1.*t2409*t2512 + t2124*t2498*t2513 - 0.13205*(t2124*t2420*t2513 + t2124*t2506*t2622) + t2124*t2506*t2632 + t2848*t4071 + t3054*t4099 + t3149*t4128 - 0.3*(t3039*t4099 + t2899*t4128) + 0.183*(t2899*t4099 - 1.*t3039*t4128) + var1[2];
}



void p_FRfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
