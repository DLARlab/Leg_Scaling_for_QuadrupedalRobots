/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:13:37 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FL_hip_joint.h"

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
  double t575;
  double t3553;
  double t5470;
  double t5058;
  double t5919;
  double t2219;
  double t5466;
  double t8200;
  double t8245;
  double t8286;
  double t8311;
  double t8312;
  double t8313;
  double t943;
  double t2223;
  double t3546;
  double t8291;
  double t8302;
  double t8306;
  double t8310;
  double t8329;
  double t8330;
  double t8331;
  double t8333;
  double t8334;
  double t8337;
  t575 = Cos(var1[3]);
  t3553 = Cos(var1[5]);
  t5470 = Sin(var1[3]);
  t5058 = Sin(var1[4]);
  t5919 = Sin(var1[5]);
  t2219 = Sin(var1[9]);
  t5466 = t575*t3553*t5058;
  t8200 = t5470*t5919;
  t8245 = t5466 + t8200;
  t8286 = Cos(var1[9]);
  t8311 = -1.*t3553*t5470;
  t8312 = t575*t5058*t5919;
  t8313 = t8311 + t8312;
  t943 = Cos(var1[4]);
  t2223 = -0.047*t2219;
  t3546 = 0. + t2223;
  t8291 = -1.*t8286;
  t8302 = 1. + t8291;
  t8306 = 0.047*t8302;
  t8310 = 0. + t8306;
  t8329 = t3553*t5470*t5058;
  t8330 = -1.*t575*t5919;
  t8331 = t8329 + t8330;
  t8333 = t575*t3553;
  t8334 = t5470*t5058*t5919;
  t8337 = t8333 + t8334;

  p_output1(0)=0. + t3546*t8245 + t8310*t8313 + 0.047*(t2219*t8245 + t8286*t8313) + 0.183*t575*t943 + var1(0);
  p_output1(1)=0. + t3546*t8331 + t8310*t8337 + 0.047*(t2219*t8331 + t8286*t8337) + 0.183*t5470*t943 + var1(1);
  p_output1(2)=0. - 0.183*t5058 + t3546*t3553*t943 + t5919*t8310*t943 + 0.047*(t2219*t3553*t943 + t5919*t8286*t943) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_FL_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_FL_hip_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



