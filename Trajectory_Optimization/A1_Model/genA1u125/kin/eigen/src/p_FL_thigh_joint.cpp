/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:21:20 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FL_thigh_joint.h"

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
  double t3862;
  double t6023;
  double t6459;
  double t6238;
  double t6467;
  double t4487;
  double t6454;
  double t6645;
  double t6657;
  double t6765;
  double t6864;
  double t6889;
  double t6897;
  double t1625;
  double t4207;
  double t7044;
  double t7134;
  double t7138;
  double t7154;
  double t1641;
  double t2077;
  double t2324;
  double t2844;
  double t5268;
  double t5394;
  double t6799;
  double t6800;
  double t6804;
  double t6856;
  double t7225;
  double t7263;
  double t7266;
  double t7297;
  double t7302;
  double t7308;
  double t7073;
  double t7076;
  double t7399;
  double t7411;
  double t7412;
  double t7563;
  double t7571;
  double t7586;
  t3862 = Cos(var1[3]);
  t6023 = Cos(var1[5]);
  t6459 = Sin(var1[3]);
  t6238 = Sin(var1[4]);
  t6467 = Sin(var1[5]);
  t4487 = Sin(var1[9]);
  t6454 = t3862*t6023*t6238;
  t6645 = t6459*t6467;
  t6657 = t6454 + t6645;
  t6765 = Cos(var1[9]);
  t6864 = -1.*t6023*t6459;
  t6889 = t3862*t6238*t6467;
  t6897 = t6864 + t6889;
  t1625 = Cos(var1[10]);
  t4207 = Cos(var1[4]);
  t7044 = Sin(var1[10]);
  t7134 = t6765*t6657;
  t7138 = -1.*t4487*t6897;
  t7154 = t7134 + t7138;
  t1641 = -1.*t1625;
  t2077 = 1. + t1641;
  t2324 = 0.183*t2077;
  t2844 = 0. + t2324;
  t5268 = -0.047*t4487;
  t5394 = 0. + t5268;
  t6799 = -1.*t6765;
  t6800 = 1. + t6799;
  t6804 = 0.047*t6800;
  t6856 = 0. + t6804;
  t7225 = t6023*t6459*t6238;
  t7263 = -1.*t3862*t6467;
  t7266 = t7225 + t7263;
  t7297 = t3862*t6023;
  t7302 = t6459*t6238*t6467;
  t7308 = t7297 + t7302;
  t7073 = 0.183*t7044;
  t7076 = 0. + t7073;
  t7399 = t6765*t7266;
  t7411 = -1.*t4487*t7308;
  t7412 = t7399 + t7411;
  t7563 = t6765*t4207*t6023;
  t7571 = -1.*t4207*t4487*t6467;
  t7586 = t7563 + t7571;

  p_output1(0)=0. + t2844*t3862*t4207 + t5394*t6657 + t6856*t6897 + 0.15331*(t4487*t6657 + t6765*t6897) + t7076*t7154 + 0.183*(t1625*t3862*t4207 - 1.*t7044*t7154) + var1(0);
  p_output1(1)=0. + t2844*t4207*t6459 + t5394*t7266 + t6856*t7308 + 0.15331*(t4487*t7266 + t6765*t7308) + t7076*t7412 + 0.183*(t1625*t4207*t6459 - 1.*t7044*t7412) + var1(1);
  p_output1(2)=0. + t4207*t5394*t6023 - 1.*t2844*t6238 + 0.15331*(t4207*t4487*t6023 + t4207*t6467*t6765) + t4207*t6467*t6856 + t7076*t7586 + 0.183*(-1.*t1625*t6238 - 1.*t7044*t7586) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_FL_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_FL_thigh_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



