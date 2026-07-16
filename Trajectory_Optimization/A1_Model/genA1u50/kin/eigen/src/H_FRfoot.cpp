/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:13:59 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FRfoot.h"

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
  double t562;
  double t936;
  double t1254;
  double t1098;
  double t1366;
  double t764;
  double t888;
  double t1194;
  double t1401;
  double t1526;
  double t1534;
  double t1541;
  double t1582;
  double t1583;
  double t1594;
  double t1598;
  double t1666;
  double t749;
  double t1681;
  double t308;
  double t2420;
  double t2424;
  double t2496;
  double t2516;
  double t2518;
  double t2650;
  double t2694;
  double t2799;
  double t2919;
  double t2284;
  double t3363;
  double t3366;
  double t3371;
  double t1927;
  double t2151;
  double t2250;
  double t765;
  double t1712;
  double t1741;
  double t3076;
  double t3269;
  double t3327;
  double t2352;
  double t3001;
  double t3008;
  double t3621;
  double t3710;
  double t3745;
  double t3347;
  double t3541;
  double t3542;
  double t3813;
  double t3852;
  double t3898;
  double t4461;
  double t4464;
  double t1881;
  double t2299;
  double t2307;
  double t4075;
  double t4130;
  double t4131;
  double t4224;
  double t4230;
  double t4231;
  double t4232;
  double t4238;
  double t4245;
  double t4251;
  double t4260;
  double t4294;
  double t4342;
  double t3982;
  double t3997;
  double t4002;
  double t4434;
  double t4444;
  double t4473;
  double t4476;
  double t4477;
  double t4508;
  double t4529;
  double t4555;
  double t3067;
  double t3333;
  double t3346;
  double t4145;
  double t4154;
  double t4208;
  double t4019;
  double t4020;
  double t4043;
  double t3573;
  double t3754;
  double t3793;
  double t4216;
  double t4218;
  double t4223;
  t562 = Cos(var1[3]);
  t936 = Cos(var1[5]);
  t1254 = Sin(var1[3]);
  t1098 = Sin(var1[4]);
  t1366 = Sin(var1[5]);
  t764 = Cos(var1[7]);
  t888 = Cos(var1[6]);
  t1194 = t562*t936*t1098;
  t1401 = t1254*t1366;
  t1526 = t1194 + t1401;
  t1534 = t888*t1526;
  t1541 = -1.*t936*t1254;
  t1582 = t562*t1098*t1366;
  t1583 = t1541 + t1582;
  t1594 = Sin(var1[6]);
  t1598 = -1.*t1583*t1594;
  t1666 = t1534 + t1598;
  t749 = Cos(var1[4]);
  t1681 = Sin(var1[7]);
  t308 = Cos(var1[8]);
  t2420 = t936*t1254*t1098;
  t2424 = -1.*t562*t1366;
  t2496 = t2420 + t2424;
  t2516 = t888*t2496;
  t2518 = t562*t936;
  t2650 = t1254*t1098*t1366;
  t2694 = t2518 + t2650;
  t2799 = -1.*t2694*t1594;
  t2919 = t2516 + t2799;
  t2284 = Sin(var1[8]);
  t3363 = t749*t936*t888;
  t3366 = -1.*t749*t1366*t1594;
  t3371 = t3363 + t3366;
  t1927 = t764*t1666;
  t2151 = t562*t749*t1681;
  t2250 = t1927 + t2151;
  t765 = t562*t749*t764;
  t1712 = -1.*t1666*t1681;
  t1741 = t765 + t1712;
  t3076 = t764*t2919;
  t3269 = t749*t1254*t1681;
  t3327 = t3076 + t3269;
  t2352 = t749*t764*t1254;
  t3001 = -1.*t2919*t1681;
  t3008 = t2352 + t3001;
  t3621 = t764*t3371;
  t3710 = -1.*t1098*t1681;
  t3745 = t3621 + t3710;
  t3347 = -1.*t764*t1098;
  t3541 = -1.*t3371*t1681;
  t3542 = t3347 + t3541;
  t3813 = t888*t1583;
  t3852 = t1526*t1594;
  t3898 = t3813 + t3852;
  t4461 = -1.*t308;
  t4464 = 1. + t4461;
  t1881 = t308*t1741;
  t2299 = -1.*t2250*t2284;
  t2307 = t1881 + t2299;
  t4075 = t308*t2250;
  t4130 = t1741*t2284;
  t4131 = t4075 + t4130;
  t4224 = -1.*t764;
  t4230 = 1. + t4224;
  t4231 = 0.183*t4230;
  t4232 = 0. + t4231;
  t4238 = -1.*t888;
  t4245 = 1. + t4238;
  t4251 = -0.047*t4245;
  t4260 = 0. + t4251;
  t4294 = 0.047*t1594;
  t4342 = 0. + t4294;
  t3982 = t888*t2694;
  t3997 = t2496*t1594;
  t4002 = t3982 + t3997;
  t4434 = 0.183*t1681;
  t4444 = 0. + t4434;
  t4473 = 0.183*t4464;
  t4476 = 0.1*t2284;
  t4477 = 0. + t4473 + t4476;
  t4508 = -0.1*t4464;
  t4529 = 0.183*t2284;
  t4555 = 0. + t4508 + t4529;
  t3067 = t308*t3008;
  t3333 = -1.*t3327*t2284;
  t3346 = t3067 + t3333;
  t4145 = t308*t3327;
  t4154 = t3008*t2284;
  t4208 = t4145 + t4154;
  t4019 = t749*t888*t1366;
  t4020 = t749*t936*t1594;
  t4043 = t4019 + t4020;
  t3573 = t308*t3542;
  t3754 = -1.*t3745*t2284;
  t3793 = t3573 + t3754;
  t4216 = t308*t3745;
  t4218 = t3542*t2284;
  t4223 = t4216 + t4218;

  p_output1(0)=t2307;
  p_output1(1)=t3346;
  p_output1(2)=t3793;
  p_output1(3)=0.;
  p_output1(4)=t3898;
  p_output1(5)=t4002;
  p_output1(6)=t4043;
  p_output1(7)=0.;
  p_output1(8)=t4131;
  p_output1(9)=t4208;
  p_output1(10)=t4223;
  p_output1(11)=0.;
  p_output1(12)=0. + 0.183*t2307 - 0.08953*t3898 - 0.2*t4131 + t1583*t4260 + t1526*t4342 + t1666*t4444 + t1741*t4477 + t2250*t4555 + t4232*t562*t749 + var1(0);
  p_output1(13)=0. + 0.183*t3346 - 0.08953*t4002 - 0.2*t4208 + t2694*t4260 + t2496*t4342 + t2919*t4444 + t3008*t4477 + t3327*t4555 + t1254*t4232*t749 + var1(1);
  p_output1(14)=0. + 0.183*t3793 - 0.08953*t4043 - 0.2*t4223 - 1.*t1098*t4232 + t3371*t4444 + t3542*t4477 + t3745*t4555 + t1366*t4260*t749 + t4342*t749*t936 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_FRfoot(const Eigen::Matrix<double,18,1> &var1)
//void H_FRfoot(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



