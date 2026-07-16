/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:11:24 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RLfoot.h"

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
  double t2389;
  double t3803;
  double t4189;
  double t3976;
  double t4692;
  double t2735;
  double t4113;
  double t4778;
  double t4886;
  double t4970;
  double t5458;
  double t5641;
  double t6268;
  double t2491;
  double t7019;
  double t307;
  double t7146;
  double t7169;
  double t7206;
  double t7310;
  double t7443;
  double t7486;
  double t7585;
  double t7663;
  double t7667;
  double t7688;
  double t7923;
  double t7927;
  double t7954;
  double t528;
  double t556;
  double t1697;
  double t1745;
  double t3161;
  double t3264;
  double t5099;
  double t5375;
  double t5380;
  double t5406;
  double t8257;
  double t8286;
  double t8290;
  double t8324;
  double t8333;
  double t8335;
  double t7064;
  double t7080;
  double t7522;
  double t7641;
  double t7662;
  double t8413;
  double t8416;
  double t8417;
  double t7750;
  double t7797;
  double t7839;
  double t8431;
  double t8447;
  double t8457;
  double t8483;
  double t8486;
  double t8506;
  double t8717;
  double t8742;
  double t8753;
  double t8759;
  double t8762;
  double t8770;
  double t8801;
  double t8811;
  double t8821;
  t2389 = Cos(var1[3]);
  t3803 = Cos(var1[5]);
  t4189 = Sin(var1[3]);
  t3976 = Sin(var1[4]);
  t4692 = Sin(var1[5]);
  t2735 = Sin(var1[15]);
  t4113 = t2389*t3803*t3976;
  t4778 = t4189*t4692;
  t4886 = t4113 + t4778;
  t4970 = Cos(var1[15]);
  t5458 = -1.*t3803*t4189;
  t5641 = t2389*t3976*t4692;
  t6268 = t5458 + t5641;
  t2491 = Cos(var1[4]);
  t7019 = Sin(var1[16]);
  t307 = Cos(var1[16]);
  t7146 = t4970*t4886;
  t7169 = -1.*t2735*t6268;
  t7206 = t7146 + t7169;
  t7310 = Cos(var1[17]);
  t7443 = -1.*t7310;
  t7486 = 1. + t7443;
  t7585 = Sin(var1[17]);
  t7663 = t2389*t2491*t7019;
  t7667 = t307*t7206;
  t7688 = t7663 + t7667;
  t7923 = t307*t2389*t2491;
  t7927 = -1.*t7019*t7206;
  t7954 = t7923 + t7927;
  t528 = -1.*t307;
  t556 = 1. + t528;
  t1697 = -0.183*t556;
  t1745 = 0. + t1697;
  t3161 = -0.047*t2735;
  t3264 = 0. + t3161;
  t5099 = -1.*t4970;
  t5375 = 1. + t5099;
  t5380 = 0.047*t5375;
  t5406 = 0. + t5380;
  t8257 = t3803*t4189*t3976;
  t8286 = -1.*t2389*t4692;
  t8290 = t8257 + t8286;
  t8324 = t2389*t3803;
  t8333 = t4189*t3976*t4692;
  t8335 = t8324 + t8333;
  t7064 = -0.183*t7019;
  t7080 = 0. + t7064;
  t7522 = -0.1*t7486;
  t7641 = -0.183*t7585;
  t7662 = 0. + t7522 + t7641;
  t8413 = t4970*t8290;
  t8416 = -1.*t2735*t8335;
  t8417 = t8413 + t8416;
  t7750 = -0.183*t7486;
  t7797 = 0.1*t7585;
  t7839 = 0. + t7750 + t7797;
  t8431 = t2491*t7019*t4189;
  t8447 = t307*t8417;
  t8457 = t8431 + t8447;
  t8483 = t307*t2491*t4189;
  t8486 = -1.*t7019*t8417;
  t8506 = t8483 + t8486;
  t8717 = t4970*t2491*t3803;
  t8742 = -1.*t2491*t2735*t4692;
  t8753 = t8717 + t8742;
  t8759 = -1.*t7019*t3976;
  t8762 = t307*t8753;
  t8770 = t8759 + t8762;
  t8801 = -1.*t307*t3976;
  t8811 = -1.*t7019*t8753;
  t8821 = t8801 + t8811;

  p_output1(0)=0. + t1745*t2389*t2491 + t3264*t4886 + t5406*t6268 + 0.13205*(t2735*t4886 + t4970*t6268) + t7080*t7206 + t7662*t7688 + t7839*t7954 - 0.183*(-1.*t7585*t7688 + t7310*t7954) - 0.2*(t7310*t7688 + t7585*t7954) + var1(0);
  p_output1(1)=0. + t1745*t2491*t4189 + t3264*t8290 + t5406*t8335 + 0.13205*(t2735*t8290 + t4970*t8335) + t7080*t8417 + t7662*t8457 + t7839*t8506 - 0.183*(-1.*t7585*t8457 + t7310*t8506) - 0.2*(t7310*t8457 + t7585*t8506) + var1(1);
  p_output1(2)=0. + t2491*t3264*t3803 - 1.*t1745*t3976 + 0.13205*(t2491*t2735*t3803 + t2491*t4692*t4970) + t2491*t4692*t5406 + t7080*t8753 + t7662*t8770 + t7839*t8821 - 0.183*(-1.*t7585*t8770 + t7310*t8821) - 0.2*(t7310*t8770 + t7585*t8821) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_RLfoot(const Eigen::Matrix<double,18,1> &var1)
//void p_RLfoot(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



