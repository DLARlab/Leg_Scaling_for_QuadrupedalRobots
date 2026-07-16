/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:27:00 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_FLfoot.h"

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
  double t562;
  double t2384;
  double t2799;
  double t2443;
  double t2851;
  double t2225;
  double t676;
  double t1150;
  double t2293;
  double t2466;
  double t2909;
  double t2912;
  double t2930;
  double t3104;
  double t3537;
  double t3805;
  double t3874;
  double t3911;
  double t4158;
  double t373;
  double t4636;
  double t4973;
  double t4996;
  double t5012;
  double t5054;
  double t5094;
  double t5119;
  double t5144;
  double t5199;
  double t5251;
  double t5462;
  double t5488;
  double t5514;
  double t1662;
  double t4200;
  double t4289;
  double t4642;
  double t4667;
  double t4739;
  double t4920;
  double t5274;
  double t5291;
  double t5344;
  double t5368;
  double t5378;
  double t5438;
  double t5539;
  double t5559;
  double t5603;
  double t5606;
  double t5641;
  t562 = Cos(var1[3]);
  t2384 = Cos(var1[5]);
  t2799 = Sin(var1[3]);
  t2443 = Sin(var1[4]);
  t2851 = Sin(var1[5]);
  t2225 = Cos(var1[10]);
  t676 = Cos(var1[4]);
  t1150 = Sin(var1[10]);
  t2293 = Cos(var1[9]);
  t2466 = t562*t2384*t2443;
  t2909 = t2799*t2851;
  t2912 = t2466 + t2909;
  t2930 = t2293*t2912;
  t3104 = Sin(var1[9]);
  t3537 = -1.*t2384*t2799;
  t3805 = t562*t2443*t2851;
  t3874 = t3537 + t3805;
  t3911 = -1.*t3104*t3874;
  t4158 = t2930 + t3911;
  t373 = Sin(var1[11]);
  t4636 = Cos(var1[11]);
  t4973 = t2384*t2799*t2443;
  t4996 = -1.*t562*t2851;
  t5012 = t4973 + t4996;
  t5054 = t2293*t5012;
  t5094 = t562*t2384;
  t5119 = t2799*t2443*t2851;
  t5144 = t5094 + t5119;
  t5199 = -1.*t3104*t5144;
  t5251 = t5054 + t5199;
  t5462 = t2293*t676*t2384;
  t5488 = -1.*t676*t3104*t2851;
  t5514 = t5462 + t5488;
  t1662 = t562*t676*t1150;
  t4200 = t2225*t4158;
  t4289 = t1662 + t4200;
  t4642 = t2225*t562*t676;
  t4667 = -1.*t1150*t4158;
  t4739 = t4642 + t4667;
  t4920 = t676*t1150*t2799;
  t5274 = t2225*t5251;
  t5291 = t4920 + t5274;
  t5344 = t2225*t676*t2799;
  t5368 = -1.*t1150*t5251;
  t5378 = t5344 + t5368;
  t5438 = -1.*t1150*t2443;
  t5539 = t2225*t5514;
  t5559 = t5438 + t5539;
  t5603 = -1.*t2225*t2443;
  t5606 = -1.*t1150*t5514;
  t5641 = t5603 + t5606;

  p_output1(0)=-1.*t373*t4289 + t4636*t4739;
  p_output1(1)=-1.*t373*t5291 + t4636*t5378;
  p_output1(2)=-1.*t373*t5559 + t4636*t5641;
  p_output1(3)=t2912*t3104 + t2293*t3874;
  p_output1(4)=t3104*t5012 + t2293*t5144;
  p_output1(5)=t2293*t2851*t676 + t2384*t3104*t676;
  p_output1(6)=t4289*t4636 + t373*t4739;
  p_output1(7)=t4636*t5291 + t373*t5378;
  p_output1(8)=t4636*t5559 + t373*t5641;
}


       
Eigen::Matrix<double,3,3> R_FLfoot(const Eigen::Matrix<double,18,1> &var1)
//void R_FLfoot(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



