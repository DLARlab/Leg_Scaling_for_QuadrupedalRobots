/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:04:18 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_FL_hip_joint.h"

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
  double t1439;
  double t1414;
  double t5689;
  double t1763;
  double t6128;
  double t6315;
  double t5906;
  double t6357;
  double t6162;
  double t6342;
  double t6345;
  double t6358;
  double t6369;
  double t6371;
  double t6380;
  double t6381;
  double t6385;
  double t6405;
  double t6424;
  double t6431;
  t1439 = Cos(var1[4]);
  t1414 = Cos(var1[3]);
  t5689 = Sin(var1[4]);
  t1763 = Sin(var1[3]);
  t6128 = Cos(var1[5]);
  t6315 = Sin(var1[5]);
  t5906 = Sin(var1[9]);
  t6357 = Cos(var1[9]);
  t6162 = t1414*t6128*t5689;
  t6342 = t1763*t6315;
  t6345 = t6162 + t6342;
  t6358 = -1.*t6128*t1763;
  t6369 = t1414*t5689*t6315;
  t6371 = t6358 + t6369;
  t6380 = t6128*t1763*t5689;
  t6381 = -1.*t1414*t6315;
  t6385 = t6380 + t6381;
  t6405 = t1414*t6128;
  t6424 = t1763*t5689*t6315;
  t6431 = t6405 + t6424;

  p_output1(0)=t1414*t1439;
  p_output1(1)=t1439*t1763;
  p_output1(2)=-1.*t5689;
  p_output1(3)=t5906*t6345 + t6357*t6371;
  p_output1(4)=t5906*t6385 + t6357*t6431;
  p_output1(5)=t1439*t5906*t6128 + t1439*t6315*t6357;
  p_output1(6)=t6345*t6357 - 1.*t5906*t6371;
  p_output1(7)=t6357*t6385 - 1.*t5906*t6431;
  p_output1(8)=-1.*t1439*t5906*t6315 + t1439*t6128*t6357;
}


       
Eigen::Matrix<double,3,3> R_FL_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_FL_hip_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



