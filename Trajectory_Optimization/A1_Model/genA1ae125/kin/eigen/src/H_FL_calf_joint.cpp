/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:04:23 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FL_calf_joint.h"

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
  double t571;
  double t1796;
  double t2090;
  double t2003;
  double t2125;
  double t1267;
  double t1023;
  double t1107;
  double t1693;
  double t2056;
  double t2247;
  double t2268;
  double t2340;
  double t2363;
  double t2415;
  double t2444;
  double t2469;
  double t2534;
  double t2544;
  double t429;
  double t2756;
  double t2935;
  double t2960;
  double t2970;
  double t2974;
  double t3004;
  double t3016;
  double t3037;
  double t3038;
  double t3045;
  double t3203;
  double t3220;
  double t3235;
  double t1187;
  double t2635;
  double t2641;
  double t2816;
  double t2876;
  double t2877;
  double t2931;
  double t3056;
  double t3057;
  double t3097;
  double t3116;
  double t3117;
  double t3201;
  double t3272;
  double t3275;
  double t3279;
  double t3280;
  double t3281;
  double t3296;
  double t3302;
  double t3313;
  double t3533;
  double t3538;
  double t2673;
  double t2887;
  double t2920;
  double t3365;
  double t3366;
  double t3377;
  double t3409;
  double t3410;
  double t3417;
  double t3422;
  double t3480;
  double t3491;
  double t3507;
  double t3511;
  double t3512;
  double t3514;
  double t3328;
  double t3353;
  double t3354;
  double t3519;
  double t3522;
  double t3540;
  double t3543;
  double t3549;
  double t3561;
  double t3563;
  double t3581;
  double t3068;
  double t3125;
  double t3188;
  double t3378;
  double t3381;
  double t3394;
  double t3358;
  double t3363;
  double t3364;
  double t3277;
  double t3283;
  double t3293;
  double t3396;
  double t3397;
  double t3403;
  t571 = Cos(var1[3]);
  t1796 = Cos(var1[5]);
  t2090 = Sin(var1[3]);
  t2003 = Sin(var1[4]);
  t2125 = Sin(var1[5]);
  t1267 = Cos(var1[10]);
  t1023 = Cos(var1[4]);
  t1107 = Sin(var1[10]);
  t1693 = Cos(var1[9]);
  t2056 = t571*t1796*t2003;
  t2247 = t2090*t2125;
  t2268 = t2056 + t2247;
  t2340 = t1693*t2268;
  t2363 = Sin(var1[9]);
  t2415 = -1.*t1796*t2090;
  t2444 = t571*t2003*t2125;
  t2469 = t2415 + t2444;
  t2534 = -1.*t2363*t2469;
  t2544 = t2340 + t2534;
  t429 = Sin(var1[11]);
  t2756 = Cos(var1[11]);
  t2935 = t1796*t2090*t2003;
  t2960 = -1.*t571*t2125;
  t2970 = t2935 + t2960;
  t2974 = t1693*t2970;
  t3004 = t571*t1796;
  t3016 = t2090*t2003*t2125;
  t3037 = t3004 + t3016;
  t3038 = -1.*t2363*t3037;
  t3045 = t2974 + t3038;
  t3203 = t1693*t1023*t1796;
  t3220 = -1.*t1023*t2363*t2125;
  t3235 = t3203 + t3220;
  t1187 = t571*t1023*t1107;
  t2635 = t1267*t2544;
  t2641 = t1187 + t2635;
  t2816 = t1267*t571*t1023;
  t2876 = -1.*t1107*t2544;
  t2877 = t2816 + t2876;
  t2931 = t1023*t1107*t2090;
  t3056 = t1267*t3045;
  t3057 = t2931 + t3056;
  t3097 = t1267*t1023*t2090;
  t3116 = -1.*t1107*t3045;
  t3117 = t3097 + t3116;
  t3201 = -1.*t1107*t2003;
  t3272 = t1267*t3235;
  t3275 = t3201 + t3272;
  t3279 = -1.*t1267*t2003;
  t3280 = -1.*t1107*t3235;
  t3281 = t3279 + t3280;
  t3296 = t2363*t2268;
  t3302 = t1693*t2469;
  t3313 = t3296 + t3302;
  t3533 = -1.*t2756;
  t3538 = 1. + t3533;
  t2673 = -1.*t429*t2641;
  t2887 = t2756*t2877;
  t2920 = t2673 + t2887;
  t3365 = t2756*t2641;
  t3366 = t429*t2877;
  t3377 = t3365 + t3366;
  t3409 = -1.*t1267;
  t3410 = 1. + t3409;
  t3417 = 0.183*t3410;
  t3422 = 0. + t3417;
  t3480 = -0.047*t2363;
  t3491 = 0. + t3480;
  t3507 = -1.*t1693;
  t3511 = 1. + t3507;
  t3512 = 0.047*t3511;
  t3514 = 0. + t3512;
  t3328 = t2363*t2970;
  t3353 = t1693*t3037;
  t3354 = t3328 + t3353;
  t3519 = 0.183*t1107;
  t3522 = 0. + t3519;
  t3540 = -0.25*t3538;
  t3543 = 0.183*t429;
  t3549 = 0. + t3540 + t3543;
  t3561 = 0.183*t3538;
  t3563 = 0.25*t429;
  t3581 = 0. + t3561 + t3563;
  t3068 = -1.*t429*t3057;
  t3125 = t2756*t3117;
  t3188 = t3068 + t3125;
  t3378 = t2756*t3057;
  t3381 = t429*t3117;
  t3394 = t3378 + t3381;
  t3358 = t1023*t1796*t2363;
  t3363 = t1693*t1023*t2125;
  t3364 = t3358 + t3363;
  t3277 = -1.*t429*t3275;
  t3283 = t2756*t3281;
  t3293 = t3277 + t3283;
  t3396 = t2756*t3275;
  t3397 = t429*t3281;
  t3403 = t3396 + t3397;

  p_output1(0)=t2920;
  p_output1(1)=t3188;
  p_output1(2)=t3293;
  p_output1(3)=0.;
  p_output1(4)=t3313;
  p_output1(5)=t3354;
  p_output1(6)=t3364;
  p_output1(7)=0.;
  p_output1(8)=t3377;
  p_output1(9)=t3394;
  p_output1(10)=t3403;
  p_output1(11)=0.;
  p_output1(12)=0. + 0.183*t2920 + 0.13205*t3313 - 0.25*t3377 + t2268*t3491 + t2469*t3514 + t2544*t3522 + t2641*t3549 + t2877*t3581 + t1023*t3422*t571 + var1(0);
  p_output1(13)=0. + 0.183*t3188 + 0.13205*t3354 - 0.25*t3394 + t1023*t2090*t3422 + t2970*t3491 + t3037*t3514 + t3045*t3522 + t3057*t3549 + t3117*t3581 + var1(1);
  p_output1(14)=0. + 0.183*t3293 + 0.13205*t3364 - 0.25*t3403 - 1.*t2003*t3422 + t1023*t1796*t3491 + t1023*t2125*t3514 + t3235*t3522 + t3275*t3549 + t3281*t3581 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_FL_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void H_FL_calf_joint(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



