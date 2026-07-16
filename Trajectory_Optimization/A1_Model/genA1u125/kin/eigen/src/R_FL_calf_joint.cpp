/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:21:24 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_FL_calf_joint.h"

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
  double t749;
  double t2249;
  double t3168;
  double t2305;
  double t3247;
  double t1923;
  double t1365;
  double t1366;
  double t2008;
  double t2424;
  double t3248;
  double t3539;
  double t3608;
  double t3635;
  double t3641;
  double t3727;
  double t3906;
  double t3927;
  double t3990;
  double t518;
  double t4199;
  double t4523;
  double t4530;
  double t4533;
  double t4594;
  double t4608;
  double t4612;
  double t4616;
  double t4619;
  double t4621;
  double t4935;
  double t4943;
  double t4944;
  double t1838;
  double t4004;
  double t4073;
  double t4248;
  double t4334;
  double t4349;
  double t4518;
  double t4689;
  double t4777;
  double t4861;
  double t4892;
  double t4893;
  double t4928;
  double t4999;
  double t5003;
  double t5070;
  double t5089;
  double t5090;
  t749 = Cos(var1[3]);
  t2249 = Cos(var1[5]);
  t3168 = Sin(var1[3]);
  t2305 = Sin(var1[4]);
  t3247 = Sin(var1[5]);
  t1923 = Cos(var1[10]);
  t1365 = Cos(var1[4]);
  t1366 = Sin(var1[10]);
  t2008 = Cos(var1[9]);
  t2424 = t749*t2249*t2305;
  t3248 = t3168*t3247;
  t3539 = t2424 + t3248;
  t3608 = t2008*t3539;
  t3635 = Sin(var1[9]);
  t3641 = -1.*t2249*t3168;
  t3727 = t749*t2305*t3247;
  t3906 = t3641 + t3727;
  t3927 = -1.*t3635*t3906;
  t3990 = t3608 + t3927;
  t518 = Sin(var1[11]);
  t4199 = Cos(var1[11]);
  t4523 = t2249*t3168*t2305;
  t4530 = -1.*t749*t3247;
  t4533 = t4523 + t4530;
  t4594 = t2008*t4533;
  t4608 = t749*t2249;
  t4612 = t3168*t2305*t3247;
  t4616 = t4608 + t4612;
  t4619 = -1.*t3635*t4616;
  t4621 = t4594 + t4619;
  t4935 = t2008*t1365*t2249;
  t4943 = -1.*t1365*t3635*t3247;
  t4944 = t4935 + t4943;
  t1838 = t749*t1365*t1366;
  t4004 = t1923*t3990;
  t4073 = t1838 + t4004;
  t4248 = t1923*t749*t1365;
  t4334 = -1.*t1366*t3990;
  t4349 = t4248 + t4334;
  t4518 = t1365*t1366*t3168;
  t4689 = t1923*t4621;
  t4777 = t4518 + t4689;
  t4861 = t1923*t1365*t3168;
  t4892 = -1.*t1366*t4621;
  t4893 = t4861 + t4892;
  t4928 = -1.*t1366*t2305;
  t4999 = t1923*t4944;
  t5003 = t4928 + t4999;
  t5070 = -1.*t1923*t2305;
  t5089 = -1.*t1366*t4944;
  t5090 = t5070 + t5089;

  p_output1(0)=t4199*t4349 - 1.*t4073*t518;
  p_output1(1)=t4199*t4893 - 1.*t4777*t518;
  p_output1(2)=t4199*t5090 - 1.*t5003*t518;
  p_output1(3)=t3539*t3635 + t2008*t3906;
  p_output1(4)=t3635*t4533 + t2008*t4616;
  p_output1(5)=t1365*t2008*t3247 + t1365*t2249*t3635;
  p_output1(6)=t4073*t4199 + t4349*t518;
  p_output1(7)=t4199*t4777 + t4893*t518;
  p_output1(8)=t4199*t5003 + t5090*t518;
}


       
Eigen::Matrix<double,3,3> R_FL_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_FL_calf_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



