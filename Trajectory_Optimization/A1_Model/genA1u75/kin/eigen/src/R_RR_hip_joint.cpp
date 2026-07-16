/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:18:54 GMT-05:00
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
  double t1101;
  double t510;
  double t1514;
  double t1507;
  double t2282;
  double t2314;
  double t1684;
  double t3136;
  double t2308;
  double t2325;
  double t2964;
  double t3262;
  double t3359;
  double t3418;
  double t4136;
  double t4157;
  double t4254;
  double t4531;
  double t4585;
  double t4764;
  t1101 = Cos(var1[4]);
  t510 = Cos(var1[3]);
  t1514 = Sin(var1[4]);
  t1507 = Sin(var1[3]);
  t2282 = Cos(var1[5]);
  t2314 = Sin(var1[5]);
  t1684 = Sin(var1[12]);
  t3136 = Cos(var1[12]);
  t2308 = t510*t2282*t1514;
  t2325 = t1507*t2314;
  t2964 = t2308 + t2325;
  t3262 = -1.*t2282*t1507;
  t3359 = t510*t1514*t2314;
  t3418 = t3262 + t3359;
  t4136 = t2282*t1507*t1514;
  t4157 = -1.*t510*t2314;
  t4254 = t4136 + t4157;
  t4531 = t510*t2282;
  t4585 = t1507*t1514*t2314;
  t4764 = t4531 + t4585;

  p_output1(0)=t1101*t510;
  p_output1(1)=t1101*t1507;
  p_output1(2)=-1.*t1514;
  p_output1(3)=t1684*t2964 + t3136*t3418;
  p_output1(4)=t1684*t4254 + t3136*t4764;
  p_output1(5)=t1101*t1684*t2282 + t1101*t2314*t3136;
  p_output1(6)=t2964*t3136 - 1.*t1684*t3418;
  p_output1(7)=t3136*t4254 - 1.*t1684*t4764;
  p_output1(8)=-1.*t1101*t1684*t2314 + t1101*t2282*t3136;
}


       
Eigen::Matrix<double,3,3> R_RR_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_RR_hip_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



