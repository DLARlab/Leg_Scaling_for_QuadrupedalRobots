/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:21:23 GMT-05:00
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
  double t287;
  double t849;
  double t1133;
  double t1026;
  double t1303;
  double t658;
  double t552;
  double t604;
  double t793;
  double t1126;
  double t1372;
  double t1419;
  double t1442;
  double t1450;
  double t1488;
  double t1504;
  double t1579;
  double t1580;
  double t1581;
  double t125;
  double t1684;
  double t2135;
  double t2181;
  double t2242;
  double t2249;
  double t2305;
  double t2306;
  double t2311;
  double t2348;
  double t2356;
  double t2653;
  double t2687;
  double t2707;
  double t606;
  double t1636;
  double t1645;
  double t1805;
  double t1913;
  double t1945;
  double t2125;
  double t2397;
  double t2412;
  double t2431;
  double t2459;
  double t2483;
  double t2564;
  double t2818;
  double t2822;
  double t2936;
  double t2962;
  double t2964;
  double t3136;
  double t3168;
  double t3178;
  double t4435;
  double t4451;
  double t1678;
  double t2008;
  double t2065;
  double t3401;
  double t3418;
  double t3508;
  double t3662;
  double t3667;
  double t3727;
  double t3812;
  double t3927;
  double t3990;
  double t4007;
  double t4024;
  double t4073;
  double t4179;
  double t3185;
  double t3246;
  double t3247;
  double t4349;
  double t4365;
  double t4518;
  double t4523;
  double t4530;
  double t4594;
  double t4608;
  double t4612;
  double t2427;
  double t2486;
  double t2505;
  double t3531;
  double t3566;
  double t3598;
  double t3248;
  double t3283;
  double t3335;
  double t2928;
  double t2977;
  double t3072;
  double t3608;
  double t3635;
  double t3641;
  t287 = Cos(var1[3]);
  t849 = Cos(var1[5]);
  t1133 = Sin(var1[3]);
  t1026 = Sin(var1[4]);
  t1303 = Sin(var1[5]);
  t658 = Cos(var1[10]);
  t552 = Cos(var1[4]);
  t604 = Sin(var1[10]);
  t793 = Cos(var1[9]);
  t1126 = t287*t849*t1026;
  t1372 = t1133*t1303;
  t1419 = t1126 + t1372;
  t1442 = t793*t1419;
  t1450 = Sin(var1[9]);
  t1488 = -1.*t849*t1133;
  t1504 = t287*t1026*t1303;
  t1579 = t1488 + t1504;
  t1580 = -1.*t1450*t1579;
  t1581 = t1442 + t1580;
  t125 = Sin(var1[11]);
  t1684 = Cos(var1[11]);
  t2135 = t849*t1133*t1026;
  t2181 = -1.*t287*t1303;
  t2242 = t2135 + t2181;
  t2249 = t793*t2242;
  t2305 = t287*t849;
  t2306 = t1133*t1026*t1303;
  t2311 = t2305 + t2306;
  t2348 = -1.*t1450*t2311;
  t2356 = t2249 + t2348;
  t2653 = t793*t552*t849;
  t2687 = -1.*t552*t1450*t1303;
  t2707 = t2653 + t2687;
  t606 = t287*t552*t604;
  t1636 = t658*t1581;
  t1645 = t606 + t1636;
  t1805 = t658*t287*t552;
  t1913 = -1.*t604*t1581;
  t1945 = t1805 + t1913;
  t2125 = t552*t604*t1133;
  t2397 = t658*t2356;
  t2412 = t2125 + t2397;
  t2431 = t658*t552*t1133;
  t2459 = -1.*t604*t2356;
  t2483 = t2431 + t2459;
  t2564 = -1.*t604*t1026;
  t2818 = t658*t2707;
  t2822 = t2564 + t2818;
  t2936 = -1.*t658*t1026;
  t2962 = -1.*t604*t2707;
  t2964 = t2936 + t2962;
  t3136 = t1450*t1419;
  t3168 = t793*t1579;
  t3178 = t3136 + t3168;
  t4435 = -1.*t1684;
  t4451 = 1. + t4435;
  t1678 = -1.*t125*t1645;
  t2008 = t1684*t1945;
  t2065 = t1678 + t2008;
  t3401 = t1684*t1645;
  t3418 = t125*t1945;
  t3508 = t3401 + t3418;
  t3662 = -1.*t658;
  t3667 = 1. + t3662;
  t3727 = 0.183*t3667;
  t3812 = 0. + t3727;
  t3927 = -0.047*t1450;
  t3990 = 0. + t3927;
  t4007 = -1.*t793;
  t4024 = 1. + t4007;
  t4073 = 0.047*t4024;
  t4179 = 0. + t4073;
  t3185 = t1450*t2242;
  t3246 = t793*t2311;
  t3247 = t3185 + t3246;
  t4349 = 0.183*t604;
  t4365 = 0. + t4349;
  t4518 = -0.25*t4451;
  t4523 = 0.183*t125;
  t4530 = 0. + t4518 + t4523;
  t4594 = 0.183*t4451;
  t4608 = 0.25*t125;
  t4612 = 0. + t4594 + t4608;
  t2427 = -1.*t125*t2412;
  t2486 = t1684*t2483;
  t2505 = t2427 + t2486;
  t3531 = t1684*t2412;
  t3566 = t125*t2483;
  t3598 = t3531 + t3566;
  t3248 = t552*t849*t1450;
  t3283 = t793*t552*t1303;
  t3335 = t3248 + t3283;
  t2928 = -1.*t125*t2822;
  t2977 = t1684*t2964;
  t3072 = t2928 + t2977;
  t3608 = t1684*t2822;
  t3635 = t125*t2964;
  t3641 = t3608 + t3635;

  p_output1(0)=t2065;
  p_output1(1)=t2505;
  p_output1(2)=t3072;
  p_output1(3)=0.;
  p_output1(4)=t3178;
  p_output1(5)=t3247;
  p_output1(6)=t3335;
  p_output1(7)=0.;
  p_output1(8)=t3508;
  p_output1(9)=t3598;
  p_output1(10)=t3641;
  p_output1(11)=0.;
  p_output1(12)=0. + 0.183*t2065 + 0.15331*t3178 - 0.25*t3508 + t1419*t3990 + t1579*t4179 + t1581*t4365 + t1645*t4530 + t1945*t4612 + t287*t3812*t552 + var1(0);
  p_output1(13)=0. + 0.183*t2505 + 0.15331*t3247 - 0.25*t3598 + t2242*t3990 + t2311*t4179 + t2356*t4365 + t2412*t4530 + t2483*t4612 + t1133*t3812*t552 + var1(1);
  p_output1(14)=0. + 0.183*t3072 + 0.15331*t3335 - 0.25*t3641 - 1.*t1026*t3812 + t2707*t4365 + t2822*t4530 + t2964*t4612 + t1303*t4179*t552 + t3990*t552*t849 + var1(2);
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



