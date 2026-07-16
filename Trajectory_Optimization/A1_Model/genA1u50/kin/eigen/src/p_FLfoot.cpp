/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:14:00 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FLfoot.h"

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
  double t751;
  double t2275;
  double t2540;
  double t2316;
  double t2545;
  double t1764;
  double t2406;
  double t2704;
  double t3662;
  double t4097;
  double t4609;
  double t4631;
  double t4711;
  double t1114;
  double t4923;
  double t95;
  double t4978;
  double t5036;
  double t5042;
  double t5101;
  double t5179;
  double t5196;
  double t5221;
  double t5247;
  double t5343;
  double t5347;
  double t5517;
  double t5521;
  double t5534;
  double t96;
  double t97;
  double t152;
  double t379;
  double t1765;
  double t1780;
  double t4231;
  double t4495;
  double t4509;
  double t4589;
  double t5704;
  double t5814;
  double t5815;
  double t5875;
  double t5907;
  double t5968;
  double t4971;
  double t4977;
  double t5197;
  double t5229;
  double t5246;
  double t6648;
  double t6683;
  double t6794;
  double t5471;
  double t5475;
  double t5496;
  double t6799;
  double t6800;
  double t6824;
  double t6849;
  double t6871;
  double t6872;
  double t7516;
  double t7534;
  double t7578;
  double t7897;
  double t8211;
  double t8260;
  double t8326;
  double t8615;
  double t8830;
  t751 = Cos(var1[3]);
  t2275 = Cos(var1[5]);
  t2540 = Sin(var1[3]);
  t2316 = Sin(var1[4]);
  t2545 = Sin(var1[5]);
  t1764 = Sin(var1[9]);
  t2406 = t751*t2275*t2316;
  t2704 = t2540*t2545;
  t3662 = t2406 + t2704;
  t4097 = Cos(var1[9]);
  t4609 = -1.*t2275*t2540;
  t4631 = t751*t2316*t2545;
  t4711 = t4609 + t4631;
  t1114 = Cos(var1[4]);
  t4923 = Sin(var1[10]);
  t95 = Cos(var1[10]);
  t4978 = t4097*t3662;
  t5036 = -1.*t1764*t4711;
  t5042 = t4978 + t5036;
  t5101 = Cos(var1[11]);
  t5179 = -1.*t5101;
  t5196 = 1. + t5179;
  t5221 = Sin(var1[11]);
  t5247 = t751*t1114*t4923;
  t5343 = t95*t5042;
  t5347 = t5247 + t5343;
  t5517 = t95*t751*t1114;
  t5521 = -1.*t4923*t5042;
  t5534 = t5517 + t5521;
  t96 = -1.*t95;
  t97 = 1. + t96;
  t152 = 0.183*t97;
  t379 = 0. + t152;
  t1765 = -0.047*t1764;
  t1780 = 0. + t1765;
  t4231 = -1.*t4097;
  t4495 = 1. + t4231;
  t4509 = 0.047*t4495;
  t4589 = 0. + t4509;
  t5704 = t2275*t2540*t2316;
  t5814 = -1.*t751*t2545;
  t5815 = t5704 + t5814;
  t5875 = t751*t2275;
  t5907 = t2540*t2316*t2545;
  t5968 = t5875 + t5907;
  t4971 = 0.183*t4923;
  t4977 = 0. + t4971;
  t5197 = -0.1*t5196;
  t5229 = 0.183*t5221;
  t5246 = 0. + t5197 + t5229;
  t6648 = t4097*t5815;
  t6683 = -1.*t1764*t5968;
  t6794 = t6648 + t6683;
  t5471 = 0.183*t5196;
  t5475 = 0.1*t5221;
  t5496 = 0. + t5471 + t5475;
  t6799 = t1114*t4923*t2540;
  t6800 = t95*t6794;
  t6824 = t6799 + t6800;
  t6849 = t95*t1114*t2540;
  t6871 = -1.*t4923*t6794;
  t6872 = t6849 + t6871;
  t7516 = t4097*t1114*t2275;
  t7534 = -1.*t1114*t1764*t2545;
  t7578 = t7516 + t7534;
  t7897 = -1.*t4923*t2316;
  t8211 = t95*t7578;
  t8260 = t7897 + t8211;
  t8326 = -1.*t95*t2316;
  t8615 = -1.*t4923*t7578;
  t8830 = t8326 + t8615;

  p_output1(0)=0. + t1780*t3662 + t4589*t4711 + 0.08953*(t1764*t3662 + t4097*t4711) + t4977*t5042 + t5246*t5347 + t5496*t5534 + 0.183*(-1.*t5221*t5347 + t5101*t5534) - 0.2*(t5101*t5347 + t5221*t5534) + t1114*t379*t751 + var1(0);
  p_output1(1)=0. + t1114*t2540*t379 + t1780*t5815 + t4589*t5968 + 0.08953*(t1764*t5815 + t4097*t5968) + t4977*t6794 + t5246*t6824 + t5496*t6872 + 0.183*(-1.*t5221*t6824 + t5101*t6872) - 0.2*(t5101*t6824 + t5221*t6872) + var1(1);
  p_output1(2)=0. + t1114*t1780*t2275 - 1.*t2316*t379 + 0.08953*(t1114*t1764*t2275 + t1114*t2545*t4097) + t1114*t2545*t4589 + t4977*t7578 + t5246*t8260 + t5496*t8830 + 0.183*(-1.*t5221*t8260 + t5101*t8830) - 0.2*(t5101*t8260 + t5221*t8830) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_FLfoot(const Eigen::Matrix<double,18,1> &var1)
//void p_FLfoot(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



