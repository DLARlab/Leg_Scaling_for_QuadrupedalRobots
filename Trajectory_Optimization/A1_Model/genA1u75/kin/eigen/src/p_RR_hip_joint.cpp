/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:18:52 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RR_hip_joint.h"

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
  double t848;
  double t6259;
  double t7307;
  double t6421;
  double t7626;
  double t2759;
  double t7205;
  double t7659;
  double t7737;
  double t7744;
  double t8013;
  double t8014;
  double t8054;
  double t1777;
  double t2780;
  double t6066;
  double t7767;
  double t7890;
  double t7989;
  double t8004;
  double t8268;
  double t8317;
  double t8324;
  double t8335;
  double t8347;
  double t8386;
  t848 = Cos(var1[3]);
  t6259 = Cos(var1[5]);
  t7307 = Sin(var1[3]);
  t6421 = Sin(var1[4]);
  t7626 = Sin(var1[5]);
  t2759 = Sin(var1[12]);
  t7205 = t848*t6259*t6421;
  t7659 = t7307*t7626;
  t7737 = t7205 + t7659;
  t7744 = Cos(var1[12]);
  t8013 = -1.*t6259*t7307;
  t8014 = t848*t6421*t7626;
  t8054 = t8013 + t8014;
  t1777 = Cos(var1[4]);
  t2780 = 0.047*t2759;
  t6066 = 0. + t2780;
  t7767 = -1.*t7744;
  t7890 = 1. + t7767;
  t7989 = -0.047*t7890;
  t8004 = 0. + t7989;
  t8268 = t6259*t7307*t6421;
  t8317 = -1.*t848*t7626;
  t8324 = t8268 + t8317;
  t8335 = t848*t6259;
  t8347 = t7307*t6421*t7626;
  t8386 = t8335 + t8347;

  p_output1(0)=0. + t6066*t7737 + t8004*t8054 - 0.047*(t2759*t7737 + t7744*t8054) - 0.183*t1777*t848 + var1(0);
  p_output1(1)=0. - 0.183*t1777*t7307 + t6066*t8324 + t8004*t8386 - 0.047*(t2759*t8324 + t7744*t8386) + var1(1);
  p_output1(2)=0. + t1777*t6066*t6259 + 0.183*t6421 - 0.047*(t1777*t2759*t6259 + t1777*t7626*t7744) + t1777*t7626*t8004 + var1(2);
}


       
Eigen::Matrix<double,3,1> p_RR_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_RR_hip_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



