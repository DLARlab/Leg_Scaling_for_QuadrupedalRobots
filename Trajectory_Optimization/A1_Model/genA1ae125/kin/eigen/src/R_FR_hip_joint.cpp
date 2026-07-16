/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:04:10 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_FR_hip_joint.h"

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
  double t1476;
  double t2721;
  double t1113;
  double t3192;
  double t4531;
  double t8939;
  double t4267;
  double t9234;
  double t9223;
  double t9225;
  double t9226;
  double t8224;
  double t9063;
  double t9198;
  double t9299;
  double t9303;
  double t9305;
  double t9280;
  double t9284;
  double t9291;
  t1476 = Cos(var1[4]);
  t2721 = Sin(var1[3]);
  t1113 = Cos(var1[3]);
  t3192 = Sin(var1[4]);
  t4531 = Cos(var1[5]);
  t8939 = Sin(var1[5]);
  t4267 = Cos(var1[6]);
  t9234 = Sin(var1[6]);
  t9223 = t1113*t4531*t3192;
  t9225 = t2721*t8939;
  t9226 = t9223 + t9225;
  t8224 = -1.*t4531*t2721;
  t9063 = t1113*t3192*t8939;
  t9198 = t8224 + t9063;
  t9299 = t4531*t2721*t3192;
  t9303 = -1.*t1113*t8939;
  t9305 = t9299 + t9303;
  t9280 = t1113*t4531;
  t9284 = t2721*t3192*t8939;
  t9291 = t9280 + t9284;

  p_output1(0)=t1113*t1476;
  p_output1(1)=t1476*t2721;
  p_output1(2)=-1.*t3192;
  p_output1(3)=t4267*t9198 + t9226*t9234;
  p_output1(4)=t4267*t9291 + t9234*t9305;
  p_output1(5)=t1476*t4267*t8939 + t1476*t4531*t9234;
  p_output1(6)=t4267*t9226 - 1.*t9198*t9234;
  p_output1(7)=-1.*t9234*t9291 + t4267*t9305;
  p_output1(8)=t1476*t4267*t4531 - 1.*t1476*t8939*t9234;
}


       
Eigen::Matrix<double,3,3> R_FR_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_FR_hip_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



