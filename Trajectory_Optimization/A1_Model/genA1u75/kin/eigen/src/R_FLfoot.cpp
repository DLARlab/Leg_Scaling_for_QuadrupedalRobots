/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:19:10 GMT-05:00
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
  double t699;
  double t3613;
  double t3951;
  double t3685;
  double t4084;
  double t1586;
  double t912;
  double t1016;
  double t3365;
  double t3950;
  double t4222;
  double t4227;
  double t4251;
  double t4289;
  double t4356;
  double t4444;
  double t4572;
  double t4575;
  double t4673;
  double t427;
  double t4783;
  double t5000;
  double t5006;
  double t5038;
  double t5074;
  double t5078;
  double t5171;
  double t5187;
  double t5289;
  double t5603;
  double t7041;
  double t7043;
  double t7056;
  double t1018;
  double t4726;
  double t4759;
  double t4785;
  double t4813;
  double t4841;
  double t4950;
  double t6337;
  double t6397;
  double t6571;
  double t6712;
  double t6854;
  double t7033;
  double t7097;
  double t7099;
  double t7175;
  double t7244;
  double t7314;
  t699 = Cos(var1[3]);
  t3613 = Cos(var1[5]);
  t3951 = Sin(var1[3]);
  t3685 = Sin(var1[4]);
  t4084 = Sin(var1[5]);
  t1586 = Cos(var1[10]);
  t912 = Cos(var1[4]);
  t1016 = Sin(var1[10]);
  t3365 = Cos(var1[9]);
  t3950 = t699*t3613*t3685;
  t4222 = t3951*t4084;
  t4227 = t3950 + t4222;
  t4251 = t3365*t4227;
  t4289 = Sin(var1[9]);
  t4356 = -1.*t3613*t3951;
  t4444 = t699*t3685*t4084;
  t4572 = t4356 + t4444;
  t4575 = -1.*t4289*t4572;
  t4673 = t4251 + t4575;
  t427 = Sin(var1[11]);
  t4783 = Cos(var1[11]);
  t5000 = t3613*t3951*t3685;
  t5006 = -1.*t699*t4084;
  t5038 = t5000 + t5006;
  t5074 = t3365*t5038;
  t5078 = t699*t3613;
  t5171 = t3951*t3685*t4084;
  t5187 = t5078 + t5171;
  t5289 = -1.*t4289*t5187;
  t5603 = t5074 + t5289;
  t7041 = t3365*t912*t3613;
  t7043 = -1.*t912*t4289*t4084;
  t7056 = t7041 + t7043;
  t1018 = t699*t912*t1016;
  t4726 = t1586*t4673;
  t4759 = t1018 + t4726;
  t4785 = t1586*t699*t912;
  t4813 = -1.*t1016*t4673;
  t4841 = t4785 + t4813;
  t4950 = t912*t1016*t3951;
  t6337 = t1586*t5603;
  t6397 = t4950 + t6337;
  t6571 = t1586*t912*t3951;
  t6712 = -1.*t1016*t5603;
  t6854 = t6571 + t6712;
  t7033 = -1.*t1016*t3685;
  t7097 = t1586*t7056;
  t7099 = t7033 + t7097;
  t7175 = -1.*t1586*t3685;
  t7244 = -1.*t1016*t7056;
  t7314 = t7175 + t7244;

  p_output1(0)=-1.*t427*t4759 + t4783*t4841;
  p_output1(1)=-1.*t427*t6397 + t4783*t6854;
  p_output1(2)=-1.*t427*t7099 + t4783*t7314;
  p_output1(3)=t4227*t4289 + t3365*t4572;
  p_output1(4)=t4289*t5038 + t3365*t5187;
  p_output1(5)=t3365*t4084*t912 + t3613*t4289*t912;
  p_output1(6)=t4759*t4783 + t427*t4841;
  p_output1(7)=t4783*t6397 + t427*t6854;
  p_output1(8)=t4783*t7099 + t427*t7314;
}


       
Eigen::Matrix<double,3,3> R_FLfoot(const Eigen::Matrix<double,18,1> &var1)
//void R_FLfoot(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



