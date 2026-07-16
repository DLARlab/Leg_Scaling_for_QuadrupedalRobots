/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:04:26 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RR_hip_joint.h"

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
  double t432;
  double t173;
  double t1116;
  double t872;
  double t2008;
  double t2324;
  double t1343;
  double t3178;
  double t2082;
  double t2529;
  double t2674;
  double t3829;
  double t3925;
  double t3929;
  double t3994;
  double t4000;
  double t4001;
  double t4003;
  double t4006;
  double t4007;
  t432 = Cos(var1[4]);
  t173 = Cos(var1[3]);
  t1116 = Sin(var1[4]);
  t872 = Sin(var1[3]);
  t2008 = Cos(var1[5]);
  t2324 = Sin(var1[5]);
  t1343 = Sin(var1[12]);
  t3178 = Cos(var1[12]);
  t2082 = t173*t2008*t1116;
  t2529 = t872*t2324;
  t2674 = t2082 + t2529;
  t3829 = -1.*t2008*t872;
  t3925 = t173*t1116*t2324;
  t3929 = t3829 + t3925;
  t3994 = t2008*t872*t1116;
  t4000 = -1.*t173*t2324;
  t4001 = t3994 + t4000;
  t4003 = t173*t2008;
  t4006 = t872*t1116*t2324;
  t4007 = t4003 + t4006;

  p_output1(0)=t173*t432;
  p_output1(1)=t432*t872;
  p_output1(2)=-1.*t1116;
  p_output1(3)=t1343*t2674 + t3178*t3929;
  p_output1(4)=t1343*t4001 + t3178*t4007;
  p_output1(5)=t1343*t2008*t432 + t2324*t3178*t432;
  p_output1(6)=t2674*t3178 - 1.*t1343*t3929;
  p_output1(7)=t3178*t4001 - 1.*t1343*t4007;
  p_output1(8)=-1.*t1343*t2324*t432 + t2008*t3178*t432;
}


       
Eigen::Matrix<double,3,3> R_RR_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_RR_hip_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



