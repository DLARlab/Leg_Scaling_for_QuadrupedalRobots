/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:25:39 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FR_calf_joint_src.h"

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
  double t469;
  double t3876;
  double t6114;
  double t3996;
  double t6295;
  double t2195;
  double t6017;
  double t6837;
  double t7205;
  double t7324;
  double t7335;
  double t7337;
  double t7344;
  double t818;
  double t7430;
  double t7433;
  double t7444;
  double t674;
  double t7472;
  double t7690;
  double t7730;
  double t7731;
  double t7763;
  double t7897;
  double t7909;
  double t7914;
  double t7515;
  double t7550;
  double t7665;
  double t1750;
  double t1824;
  double t1969;
  double t2022;
  double t2639;
  double t2837;
  double t3352;
  double t3385;
  double t7368;
  double t7376;
  double t8064;
  double t8081;
  double t8091;
  double t8099;
  double t8124;
  double t8125;
  double t7475;
  double t7487;
  double t8329;
  double t8332;
  double t8336;
  double t7737;
  double t7806;
  double t7807;
  double t7917;
  double t7934;
  double t7938;
  double t8432;
  double t8437;
  double t8446;
  double t8381;
  double t8405;
  double t8417;
  double t8634;
  double t8639;
  double t8644;
  double t8674;
  double t8679;
  double t8680;
  double t8655;
  double t8657;
  double t8662;
  t469 = Cos(var1[3]);
  t3876 = Cos(var1[5]);
  t6114 = Sin(var1[4]);
  t3996 = Sin(var1[3]);
  t6295 = Sin(var1[5]);
  t2195 = Cos(var1[6]);
  t6017 = -1.*t3876*t3996;
  t6837 = t469*t6114*t6295;
  t7205 = t6017 + t6837;
  t7324 = t469*t3876*t6114;
  t7335 = t3996*t6295;
  t7337 = t7324 + t7335;
  t7344 = Sin(var1[6]);
  t818 = Cos(var1[7]);
  t7430 = t2195*t7337;
  t7433 = -1.*t7205*t7344;
  t7444 = t7430 + t7433;
  t674 = Cos(var1[4]);
  t7472 = Sin(var1[7]);
  t7690 = Cos(var1[8]);
  t7730 = -1.*t7690;
  t7731 = 1. + t7730;
  t7763 = Sin(var1[8]);
  t7897 = t469*t674*t818;
  t7909 = -1.*t7444*t7472;
  t7914 = t7897 + t7909;
  t7515 = t818*t7444;
  t7550 = t469*t674*t7472;
  t7665 = t7515 + t7550;
  t1750 = -1.*t818;
  t1824 = 1. + t1750;
  t1969 = 0.183*t1824;
  t2022 = 0. + t1969;
  t2639 = -1.*t2195;
  t2837 = 1. + t2639;
  t3352 = -0.047*t2837;
  t3385 = 0. + t3352;
  t7368 = 0.047*t7344;
  t7376 = 0. + t7368;
  t8064 = t469*t3876;
  t8081 = t3996*t6114*t6295;
  t8091 = t8064 + t8081;
  t8099 = t3876*t3996*t6114;
  t8124 = -1.*t469*t6295;
  t8125 = t8099 + t8124;
  t7475 = 0.183*t7472;
  t7487 = 0. + t7475;
  t8329 = t2195*t8125;
  t8332 = -1.*t8091*t7344;
  t8336 = t8329 + t8332;
  t7737 = -0.3*t7731;
  t7806 = 0.183*t7763;
  t7807 = 0. + t7737 + t7806;
  t7917 = 0.183*t7731;
  t7934 = 0.3*t7763;
  t7938 = 0. + t7917 + t7934;
  t8432 = t674*t818*t3996;
  t8437 = -1.*t8336*t7472;
  t8446 = t8432 + t8437;
  t8381 = t818*t8336;
  t8405 = t674*t3996*t7472;
  t8417 = t8381 + t8405;
  t8634 = t674*t3876*t2195;
  t8639 = -1.*t674*t6295*t7344;
  t8644 = t8634 + t8639;
  t8674 = -1.*t818*t6114;
  t8679 = -1.*t8644*t7472;
  t8680 = t8674 + t8679;
  t8655 = t818*t8644;
  t8657 = -1.*t6114*t7472;
  t8662 = t8655 + t8657;
  p_output1[0]=0. + t2022*t469*t674 + t3385*t7205 - 0.17458*(t2195*t7205 + t7337*t7344) + t7337*t7376 + t7444*t7487 + t7665*t7807 + 0.183*(-1.*t7665*t7763 + t7690*t7914) - 0.3*(t7665*t7690 + t7763*t7914) + t7914*t7938 + var1[0];
  p_output1[1]=0. + t2022*t3996*t674 + t3385*t8091 + t7376*t8125 - 0.17458*(t2195*t8091 + t7344*t8125) + t7487*t8336 + t7807*t8417 + t7938*t8446 + 0.183*(-1.*t7763*t8417 + t7690*t8446) - 0.3*(t7690*t8417 + t7763*t8446) + var1[1];
  p_output1[2]=0. - 1.*t2022*t6114 + t3385*t6295*t674 - 0.17458*(t2195*t6295*t674 + t3876*t674*t7344) + t3876*t674*t7376 + t7487*t8644 + t7807*t8662 + t7938*t8680 + 0.183*(-1.*t7763*t8662 + t7690*t8680) - 0.3*(t7690*t8662 + t7763*t8680) + var1[2];
}



void p_FR_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
