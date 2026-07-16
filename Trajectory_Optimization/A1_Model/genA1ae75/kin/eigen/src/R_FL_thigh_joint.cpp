/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:51:40 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_FL_thigh_joint.h"

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
  double t1952;
  double t5631;
  double t6149;
  double t6037;
  double t6202;
  double t1058;
  double t3343;
  double t5464;
  double t5545;
  double t6249;
  double t6066;
  double t6215;
  double t6229;
  double t6290;
  double t6316;
  double t6355;
  double t6495;
  double t6498;
  double t6503;
  double t6525;
  double t6544;
  double t6563;
  double t6242;
  double t6366;
  double t6401;
  double t6510;
  double t6616;
  double t6631;
  double t6766;
  double t6771;
  double t6778;
  t1952 = Cos(var1[3]);
  t5631 = Cos(var1[5]);
  t6149 = Sin(var1[3]);
  t6037 = Sin(var1[4]);
  t6202 = Sin(var1[5]);
  t1058 = Cos(var1[10]);
  t3343 = Cos(var1[4]);
  t5464 = Sin(var1[10]);
  t5545 = Cos(var1[9]);
  t6249 = Sin(var1[9]);
  t6066 = t1952*t5631*t6037;
  t6215 = t6149*t6202;
  t6229 = t6066 + t6215;
  t6290 = -1.*t5631*t6149;
  t6316 = t1952*t6037*t6202;
  t6355 = t6290 + t6316;
  t6495 = t5631*t6149*t6037;
  t6498 = -1.*t1952*t6202;
  t6503 = t6495 + t6498;
  t6525 = t1952*t5631;
  t6544 = t6149*t6037*t6202;
  t6563 = t6525 + t6544;
  t6242 = t5545*t6229;
  t6366 = -1.*t6249*t6355;
  t6401 = t6242 + t6366;
  t6510 = t5545*t6503;
  t6616 = -1.*t6249*t6563;
  t6631 = t6510 + t6616;
  t6766 = t5545*t3343*t5631;
  t6771 = -1.*t3343*t6249*t6202;
  t6778 = t6766 + t6771;

  p_output1(0)=t1058*t1952*t3343 - 1.*t5464*t6401;
  p_output1(1)=t1058*t3343*t6149 - 1.*t5464*t6631;
  p_output1(2)=-1.*t1058*t6037 - 1.*t5464*t6778;
  p_output1(3)=t6229*t6249 + t5545*t6355;
  p_output1(4)=t6249*t6503 + t5545*t6563;
  p_output1(5)=t3343*t5545*t6202 + t3343*t5631*t6249;
  p_output1(6)=t1952*t3343*t5464 + t1058*t6401;
  p_output1(7)=t3343*t5464*t6149 + t1058*t6631;
  p_output1(8)=-1.*t5464*t6037 + t1058*t6778;
}


       
Eigen::Matrix<double,3,3> R_FL_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_FL_thigh_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



