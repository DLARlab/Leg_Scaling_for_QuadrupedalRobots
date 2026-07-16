/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:21:29 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RR_calf_joint.h"

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
  double t1605;
  double t2434;
  double t3861;
  double t3464;
  double t4117;
  double t2258;
  double t3511;
  double t4597;
  double t4812;
  double t6076;
  double t6904;
  double t6907;
  double t6955;
  double t1833;
  double t7136;
  double t64;
  double t7290;
  double t7302;
  double t7340;
  double t7370;
  double t7394;
  double t7437;
  double t7459;
  double t7485;
  double t7517;
  double t7540;
  double t7599;
  double t7622;
  double t7623;
  double t840;
  double t902;
  double t1014;
  double t1407;
  double t2345;
  double t2355;
  double t6127;
  double t6206;
  double t6683;
  double t6786;
  double t7849;
  double t7855;
  double t7857;
  double t7882;
  double t7902;
  double t7924;
  double t7214;
  double t7249;
  double t7450;
  double t7468;
  double t7478;
  double t8074;
  double t8079;
  double t8082;
  double t7564;
  double t7566;
  double t7591;
  double t8087;
  double t8088;
  double t8092;
  double t8116;
  double t8128;
  double t8138;
  double t8322;
  double t8337;
  double t8364;
  double t8384;
  double t8387;
  double t8392;
  double t8394;
  double t8399;
  double t8408;
  t1605 = Cos(var1[3]);
  t2434 = Cos(var1[5]);
  t3861 = Sin(var1[3]);
  t3464 = Sin(var1[4]);
  t4117 = Sin(var1[5]);
  t2258 = Sin(var1[12]);
  t3511 = t1605*t2434*t3464;
  t4597 = t3861*t4117;
  t4812 = t3511 + t4597;
  t6076 = Cos(var1[12]);
  t6904 = -1.*t2434*t3861;
  t6907 = t1605*t3464*t4117;
  t6955 = t6904 + t6907;
  t1833 = Cos(var1[4]);
  t7136 = Sin(var1[13]);
  t64 = Cos(var1[13]);
  t7290 = t6076*t4812;
  t7302 = -1.*t2258*t6955;
  t7340 = t7290 + t7302;
  t7370 = Cos(var1[14]);
  t7394 = -1.*t7370;
  t7437 = 1. + t7394;
  t7459 = Sin(var1[14]);
  t7485 = t1605*t1833*t7136;
  t7517 = t64*t7340;
  t7540 = t7485 + t7517;
  t7599 = t64*t1605*t1833;
  t7622 = -1.*t7136*t7340;
  t7623 = t7599 + t7622;
  t840 = -1.*t64;
  t902 = 1. + t840;
  t1014 = -0.183*t902;
  t1407 = 0. + t1014;
  t2345 = 0.047*t2258;
  t2355 = 0. + t2345;
  t6127 = -1.*t6076;
  t6206 = 1. + t6127;
  t6683 = -0.047*t6206;
  t6786 = 0. + t6683;
  t7849 = t2434*t3861*t3464;
  t7855 = -1.*t1605*t4117;
  t7857 = t7849 + t7855;
  t7882 = t1605*t2434;
  t7902 = t3861*t3464*t4117;
  t7924 = t7882 + t7902;
  t7214 = -0.183*t7136;
  t7249 = 0. + t7214;
  t7450 = -0.25*t7437;
  t7468 = -0.183*t7459;
  t7478 = 0. + t7450 + t7468;
  t8074 = t6076*t7857;
  t8079 = -1.*t2258*t7924;
  t8082 = t8074 + t8079;
  t7564 = -0.183*t7437;
  t7566 = 0.25*t7459;
  t7591 = 0. + t7564 + t7566;
  t8087 = t1833*t7136*t3861;
  t8088 = t64*t8082;
  t8092 = t8087 + t8088;
  t8116 = t64*t1833*t3861;
  t8128 = -1.*t7136*t8082;
  t8138 = t8116 + t8128;
  t8322 = t6076*t1833*t2434;
  t8337 = -1.*t1833*t2258*t4117;
  t8364 = t8322 + t8337;
  t8384 = -1.*t7136*t3464;
  t8387 = t64*t8364;
  t8392 = t8384 + t8387;
  t8394 = -1.*t64*t3464;
  t8399 = -1.*t7136*t8364;
  t8408 = t8394 + t8399;

  p_output1(0)=0. + t1407*t1605*t1833 + t2355*t4812 + t6786*t6955 - 0.15331*(t2258*t4812 + t6076*t6955) + t7249*t7340 + t7478*t7540 + t7591*t7623 - 0.183*(-1.*t7459*t7540 + t7370*t7623) - 0.25*(t7370*t7540 + t7459*t7623) + var1(0);
  p_output1(1)=0. + t1407*t1833*t3861 + t2355*t7857 + t6786*t7924 - 0.15331*(t2258*t7857 + t6076*t7924) + t7249*t8082 + t7478*t8092 + t7591*t8138 - 0.183*(-1.*t7459*t8092 + t7370*t8138) - 0.25*(t7370*t8092 + t7459*t8138) + var1(1);
  p_output1(2)=0. + t1833*t2355*t2434 - 1.*t1407*t3464 - 0.15331*(t1833*t2258*t2434 + t1833*t4117*t6076) + t1833*t4117*t6786 + t7249*t8364 + t7478*t8392 + t7591*t8408 - 0.183*(-1.*t7459*t8392 + t7370*t8408) - 0.25*(t7370*t8392 + t7459*t8408) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_RR_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_RR_calf_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



