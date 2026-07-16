/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:11:25 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RLfoot.h"

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
static void output1(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  double t554;
  double t2431;
  double t2822;
  double t2530;
  double t3246;
  double t1832;
  double t589;
  double t1094;
  double t2326;
  double t2761;
  double t3453;
  double t4288;
  double t4374;
  double t4580;
  double t4737;
  double t4793;
  double t4850;
  double t5109;
  double t5360;
  double t524;
  double t5468;
  double t5694;
  double t5765;
  double t5827;
  double t5840;
  double t5893;
  double t5900;
  double t5998;
  double t6010;
  double t6021;
  double t6356;
  double t6357;
  double t6358;
  double t1456;
  double t5440;
  double t5442;
  double t5530;
  double t5542;
  double t5573;
  double t5660;
  double t6053;
  double t6067;
  double t6196;
  double t6264;
  double t6270;
  double t6345;
  double t6365;
  double t6409;
  double t6494;
  double t6511;
  double t6554;
  t554 = Cos(var1[3]);
  t2431 = Cos(var1[5]);
  t2822 = Sin(var1[3]);
  t2530 = Sin(var1[4]);
  t3246 = Sin(var1[5]);
  t1832 = Cos(var1[16]);
  t589 = Cos(var1[4]);
  t1094 = Sin(var1[16]);
  t2326 = Cos(var1[15]);
  t2761 = t554*t2431*t2530;
  t3453 = t2822*t3246;
  t4288 = t2761 + t3453;
  t4374 = t2326*t4288;
  t4580 = Sin(var1[15]);
  t4737 = -1.*t2431*t2822;
  t4793 = t554*t2530*t3246;
  t4850 = t4737 + t4793;
  t5109 = -1.*t4580*t4850;
  t5360 = t4374 + t5109;
  t524 = Sin(var1[17]);
  t5468 = Cos(var1[17]);
  t5694 = t2431*t2822*t2530;
  t5765 = -1.*t554*t3246;
  t5827 = t5694 + t5765;
  t5840 = t2326*t5827;
  t5893 = t554*t2431;
  t5900 = t2822*t2530*t3246;
  t5998 = t5893 + t5900;
  t6010 = -1.*t4580*t5998;
  t6021 = t5840 + t6010;
  t6356 = t2326*t589*t2431;
  t6357 = -1.*t589*t4580*t3246;
  t6358 = t6356 + t6357;
  t1456 = t554*t589*t1094;
  t5440 = t1832*t5360;
  t5442 = t1456 + t5440;
  t5530 = t1832*t554*t589;
  t5542 = -1.*t1094*t5360;
  t5573 = t5530 + t5542;
  t5660 = t589*t1094*t2822;
  t6053 = t1832*t6021;
  t6067 = t5660 + t6053;
  t6196 = t1832*t589*t2822;
  t6264 = -1.*t1094*t6021;
  t6270 = t6196 + t6264;
  t6345 = -1.*t1094*t2530;
  t6365 = t1832*t6358;
  t6409 = t6345 + t6365;
  t6494 = -1.*t1832*t2530;
  t6511 = -1.*t1094*t6358;
  t6554 = t6494 + t6511;

  p_output1(0)=-1.*t524*t5442 + t5468*t5573;
  p_output1(1)=-1.*t524*t6067 + t5468*t6270;
  p_output1(2)=-1.*t524*t6409 + t5468*t6554;
  p_output1(3)=t4288*t4580 + t2326*t4850;
  p_output1(4)=t4580*t5827 + t2326*t5998;
  p_output1(5)=t2326*t3246*t589 + t2431*t4580*t589;
  p_output1(6)=t5442*t5468 + t524*t5573;
  p_output1(7)=t5468*t6067 + t524*t6270;
  p_output1(8)=t5468*t6409 + t524*t6554;
}


       
Eigen::Matrix<double,3,3> R_RLfoot(const Eigen::Matrix<double,18,1> &var1)
//void R_RLfoot(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



