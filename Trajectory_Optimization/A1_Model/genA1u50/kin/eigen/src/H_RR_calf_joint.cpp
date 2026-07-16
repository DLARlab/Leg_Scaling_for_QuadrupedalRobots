/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:13:50 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RR_calf_joint.h"

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
  double t74;
  double t724;
  double t929;
  double t725;
  double t1150;
  double t579;
  double t180;
  double t301;
  double t723;
  double t773;
  double t1185;
  double t1482;
  double t1656;
  double t1678;
  double t1749;
  double t1800;
  double t1859;
  double t1862;
  double t1897;
  double t8;
  double t2415;
  double t2951;
  double t2952;
  double t2956;
  double t2961;
  double t2974;
  double t2990;
  double t3118;
  double t3143;
  double t3152;
  double t3468;
  double t3480;
  double t3615;
  double t577;
  double t2081;
  double t2398;
  double t2648;
  double t2689;
  double t2717;
  double t2920;
  double t3182;
  double t3233;
  double t3256;
  double t3291;
  double t3310;
  double t3457;
  double t3617;
  double t3620;
  double t3871;
  double t3906;
  double t4074;
  double t4219;
  double t4235;
  double t4380;
  double t5499;
  double t5507;
  double t2414;
  double t2760;
  double t2824;
  double t4771;
  double t4806;
  double t4835;
  double t4982;
  double t5072;
  double t5084;
  double t5095;
  double t5123;
  double t5140;
  double t5184;
  double t5231;
  double t5235;
  double t5329;
  double t4470;
  double t4471;
  double t4505;
  double t5446;
  double t5459;
  double t5535;
  double t5549;
  double t5606;
  double t5638;
  double t5642;
  double t5719;
  double t3249;
  double t3358;
  double t3369;
  double t4907;
  double t4909;
  double t4913;
  double t4524;
  double t4633;
  double t4726;
  double t3770;
  double t4078;
  double t4080;
  double t4915;
  double t4956;
  double t4964;
  t74 = Cos(var1[3]);
  t724 = Cos(var1[5]);
  t929 = Sin(var1[3]);
  t725 = Sin(var1[4]);
  t1150 = Sin(var1[5]);
  t579 = Cos(var1[13]);
  t180 = Cos(var1[4]);
  t301 = Sin(var1[13]);
  t723 = Cos(var1[12]);
  t773 = t74*t724*t725;
  t1185 = t929*t1150;
  t1482 = t773 + t1185;
  t1656 = t723*t1482;
  t1678 = Sin(var1[12]);
  t1749 = -1.*t724*t929;
  t1800 = t74*t725*t1150;
  t1859 = t1749 + t1800;
  t1862 = -1.*t1678*t1859;
  t1897 = t1656 + t1862;
  t8 = Sin(var1[14]);
  t2415 = Cos(var1[14]);
  t2951 = t724*t929*t725;
  t2952 = -1.*t74*t1150;
  t2956 = t2951 + t2952;
  t2961 = t723*t2956;
  t2974 = t74*t724;
  t2990 = t929*t725*t1150;
  t3118 = t2974 + t2990;
  t3143 = -1.*t1678*t3118;
  t3152 = t2961 + t3143;
  t3468 = t723*t180*t724;
  t3480 = -1.*t180*t1678*t1150;
  t3615 = t3468 + t3480;
  t577 = t74*t180*t301;
  t2081 = t579*t1897;
  t2398 = t577 + t2081;
  t2648 = t579*t74*t180;
  t2689 = -1.*t301*t1897;
  t2717 = t2648 + t2689;
  t2920 = t180*t301*t929;
  t3182 = t579*t3152;
  t3233 = t2920 + t3182;
  t3256 = t579*t180*t929;
  t3291 = -1.*t301*t3152;
  t3310 = t3256 + t3291;
  t3457 = -1.*t301*t725;
  t3617 = t579*t3615;
  t3620 = t3457 + t3617;
  t3871 = -1.*t579*t725;
  t3906 = -1.*t301*t3615;
  t4074 = t3871 + t3906;
  t4219 = t1678*t1482;
  t4235 = t723*t1859;
  t4380 = t4219 + t4235;
  t5499 = -1.*t2415;
  t5507 = 1. + t5499;
  t2414 = -1.*t8*t2398;
  t2760 = t2415*t2717;
  t2824 = t2414 + t2760;
  t4771 = t2415*t2398;
  t4806 = t8*t2717;
  t4835 = t4771 + t4806;
  t4982 = -1.*t579;
  t5072 = 1. + t4982;
  t5084 = -0.183*t5072;
  t5095 = 0. + t5084;
  t5123 = 0.047*t1678;
  t5140 = 0. + t5123;
  t5184 = -1.*t723;
  t5231 = 1. + t5184;
  t5235 = -0.047*t5231;
  t5329 = 0. + t5235;
  t4470 = t1678*t2956;
  t4471 = t723*t3118;
  t4505 = t4470 + t4471;
  t5446 = -0.183*t301;
  t5459 = 0. + t5446;
  t5535 = -0.1*t5507;
  t5549 = -0.183*t8;
  t5606 = 0. + t5535 + t5549;
  t5638 = -0.183*t5507;
  t5642 = 0.1*t8;
  t5719 = 0. + t5638 + t5642;
  t3249 = -1.*t8*t3233;
  t3358 = t2415*t3310;
  t3369 = t3249 + t3358;
  t4907 = t2415*t3233;
  t4909 = t8*t3310;
  t4913 = t4907 + t4909;
  t4524 = t180*t724*t1678;
  t4633 = t723*t180*t1150;
  t4726 = t4524 + t4633;
  t3770 = -1.*t8*t3620;
  t4078 = t2415*t4074;
  t4080 = t3770 + t4078;
  t4915 = t2415*t3620;
  t4956 = t8*t4074;
  t4964 = t4915 + t4956;

  p_output1(0)=t2824;
  p_output1(1)=t3369;
  p_output1(2)=t4080;
  p_output1(3)=0.;
  p_output1(4)=t4380;
  p_output1(5)=t4505;
  p_output1(6)=t4726;
  p_output1(7)=0.;
  p_output1(8)=t4835;
  p_output1(9)=t4913;
  p_output1(10)=t4964;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.183*t2824 - 0.08953*t4380 - 0.1*t4835 + t1482*t5140 + t1859*t5329 + t1897*t5459 + t2398*t5606 + t2717*t5719 + t180*t5095*t74 + var1(0);
  p_output1(13)=0. - 0.183*t3369 - 0.08953*t4505 - 0.1*t4913 + t2956*t5140 + t3118*t5329 + t3152*t5459 + t3233*t5606 + t3310*t5719 + t180*t5095*t929 + var1(1);
  p_output1(14)=0. - 0.183*t4080 - 0.08953*t4726 - 0.1*t4964 + t1150*t180*t5329 + t3615*t5459 + t3620*t5606 + t4074*t5719 + t180*t5140*t724 - 1.*t5095*t725 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_RR_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void H_RR_calf_joint(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



