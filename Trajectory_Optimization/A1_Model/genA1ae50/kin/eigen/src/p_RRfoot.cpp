/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:11:21 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RRfoot.h"

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
  double t900;
  double t2624;
  double t3089;
  double t2747;
  double t3122;
  double t1779;
  double t2970;
  double t3461;
  double t3897;
  double t3992;
  double t4527;
  double t4650;
  double t4884;
  double t1279;
  double t5121;
  double t125;
  double t5212;
  double t5214;
  double t5229;
  double t5232;
  double t5246;
  double t5299;
  double t5452;
  double t6563;
  double t7064;
  double t7395;
  double t7647;
  double t7651;
  double t7653;
  double t321;
  double t323;
  double t594;
  double t878;
  double t1943;
  double t2583;
  double t3999;
  double t4000;
  double t4276;
  double t4496;
  double t8029;
  double t8095;
  double t8099;
  double t8126;
  double t8150;
  double t8157;
  double t5130;
  double t5142;
  double t5322;
  double t5772;
  double t6215;
  double t8291;
  double t8292;
  double t8294;
  double t7504;
  double t7640;
  double t7641;
  double t8307;
  double t8310;
  double t8311;
  double t8324;
  double t8325;
  double t8326;
  double t8460;
  double t8466;
  double t8467;
  double t8471;
  double t8472;
  double t8473;
  double t8518;
  double t8520;
  double t8521;
  t900 = Cos(var1[3]);
  t2624 = Cos(var1[5]);
  t3089 = Sin(var1[3]);
  t2747 = Sin(var1[4]);
  t3122 = Sin(var1[5]);
  t1779 = Sin(var1[12]);
  t2970 = t900*t2624*t2747;
  t3461 = t3089*t3122;
  t3897 = t2970 + t3461;
  t3992 = Cos(var1[12]);
  t4527 = -1.*t2624*t3089;
  t4650 = t900*t2747*t3122;
  t4884 = t4527 + t4650;
  t1279 = Cos(var1[4]);
  t5121 = Sin(var1[13]);
  t125 = Cos(var1[13]);
  t5212 = t3992*t3897;
  t5214 = -1.*t1779*t4884;
  t5229 = t5212 + t5214;
  t5232 = Cos(var1[14]);
  t5246 = -1.*t5232;
  t5299 = 1. + t5246;
  t5452 = Sin(var1[14]);
  t6563 = t900*t1279*t5121;
  t7064 = t125*t5229;
  t7395 = t6563 + t7064;
  t7647 = t125*t900*t1279;
  t7651 = -1.*t5121*t5229;
  t7653 = t7647 + t7651;
  t321 = -1.*t125;
  t323 = 1. + t321;
  t594 = -0.183*t323;
  t878 = 0. + t594;
  t1943 = 0.047*t1779;
  t2583 = 0. + t1943;
  t3999 = -1.*t3992;
  t4000 = 1. + t3999;
  t4276 = -0.047*t4000;
  t4496 = 0. + t4276;
  t8029 = t2624*t3089*t2747;
  t8095 = -1.*t900*t3122;
  t8099 = t8029 + t8095;
  t8126 = t900*t2624;
  t8150 = t3089*t2747*t3122;
  t8157 = t8126 + t8150;
  t5130 = -0.183*t5121;
  t5142 = 0. + t5130;
  t5322 = -0.1*t5299;
  t5772 = -0.183*t5452;
  t6215 = 0. + t5322 + t5772;
  t8291 = t3992*t8099;
  t8292 = -1.*t1779*t8157;
  t8294 = t8291 + t8292;
  t7504 = -0.183*t5299;
  t7640 = 0.1*t5452;
  t7641 = 0. + t7504 + t7640;
  t8307 = t1279*t5121*t3089;
  t8310 = t125*t8294;
  t8311 = t8307 + t8310;
  t8324 = t125*t1279*t3089;
  t8325 = -1.*t5121*t8294;
  t8326 = t8324 + t8325;
  t8460 = t3992*t1279*t2624;
  t8466 = -1.*t1279*t1779*t3122;
  t8467 = t8460 + t8466;
  t8471 = -1.*t5121*t2747;
  t8472 = t125*t8467;
  t8473 = t8471 + t8472;
  t8518 = -1.*t125*t2747;
  t8520 = -1.*t5121*t8467;
  t8521 = t8518 + t8520;

  p_output1(0)=0. + t2583*t3897 + t4496*t4884 - 0.13205*(t1779*t3897 + t3992*t4884) + t5142*t5229 + t6215*t7395 + t7641*t7653 - 0.183*(-1.*t5452*t7395 + t5232*t7653) - 0.2*(t5232*t7395 + t5452*t7653) + t1279*t878*t900 + var1(0);
  p_output1(1)=0. + t2583*t8099 + t4496*t8157 - 0.13205*(t1779*t8099 + t3992*t8157) + t5142*t8294 + t6215*t8311 + t7641*t8326 - 0.183*(-1.*t5452*t8311 + t5232*t8326) - 0.2*(t5232*t8311 + t5452*t8326) + t1279*t3089*t878 + var1(1);
  p_output1(2)=0. + t1279*t2583*t2624 - 0.13205*(t1279*t1779*t2624 + t1279*t3122*t3992) + t1279*t3122*t4496 + t5142*t8467 + t6215*t8473 + t7641*t8521 - 0.183*(-1.*t5452*t8473 + t5232*t8521) - 0.2*(t5232*t8473 + t5452*t8521) - 1.*t2747*t878 + var1(2);
}


       
Eigen::Matrix<double,3,1> p_RRfoot(const Eigen::Matrix<double,18,1> &var1)
//void p_RRfoot(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



