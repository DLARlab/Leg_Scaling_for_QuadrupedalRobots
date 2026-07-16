/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:51:35 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_FR_calf_joint.h"

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
  double t382;
  double t4079;
  double t4326;
  double t4085;
  double t4346;
  double t1876;
  double t3939;
  double t4160;
  double t4347;
  double t4592;
  double t4621;
  double t4640;
  double t4665;
  double t4701;
  double t4703;
  double t4709;
  double t4710;
  double t465;
  double t4723;
  double t307;
  double t4844;
  double t4850;
  double t4853;
  double t4857;
  double t4860;
  double t4863;
  double t4864;
  double t4869;
  double t4875;
  double t4790;
  double t5003;
  double t5004;
  double t5018;
  double t4765;
  double t4781;
  double t4787;
  double t3471;
  double t4736;
  double t4746;
  double t4910;
  double t4911;
  double t4917;
  double t4832;
  double t4888;
  double t4891;
  double t5047;
  double t5049;
  double t5050;
  double t4952;
  double t5019;
  double t5028;
  t382 = Cos(var1[3]);
  t4079 = Cos(var1[5]);
  t4326 = Sin(var1[3]);
  t4085 = Sin(var1[4]);
  t4346 = Sin(var1[5]);
  t1876 = Cos(var1[7]);
  t3939 = Cos(var1[6]);
  t4160 = t382*t4079*t4085;
  t4347 = t4326*t4346;
  t4592 = t4160 + t4347;
  t4621 = t3939*t4592;
  t4640 = -1.*t4079*t4326;
  t4665 = t382*t4085*t4346;
  t4701 = t4640 + t4665;
  t4703 = Sin(var1[6]);
  t4709 = -1.*t4701*t4703;
  t4710 = t4621 + t4709;
  t465 = Cos(var1[4]);
  t4723 = Sin(var1[7]);
  t307 = Cos(var1[8]);
  t4844 = t4079*t4326*t4085;
  t4850 = -1.*t382*t4346;
  t4853 = t4844 + t4850;
  t4857 = t3939*t4853;
  t4860 = t382*t4079;
  t4863 = t4326*t4085*t4346;
  t4864 = t4860 + t4863;
  t4869 = -1.*t4864*t4703;
  t4875 = t4857 + t4869;
  t4790 = Sin(var1[8]);
  t5003 = t465*t4079*t3939;
  t5004 = -1.*t465*t4346*t4703;
  t5018 = t5003 + t5004;
  t4765 = t1876*t4710;
  t4781 = t382*t465*t4723;
  t4787 = t4765 + t4781;
  t3471 = t382*t465*t1876;
  t4736 = -1.*t4710*t4723;
  t4746 = t3471 + t4736;
  t4910 = t1876*t4875;
  t4911 = t465*t4326*t4723;
  t4917 = t4910 + t4911;
  t4832 = t465*t1876*t4326;
  t4888 = -1.*t4875*t4723;
  t4891 = t4832 + t4888;
  t5047 = t1876*t5018;
  t5049 = -1.*t4085*t4723;
  t5050 = t5047 + t5049;
  t4952 = -1.*t1876*t4085;
  t5019 = -1.*t5018*t4723;
  t5028 = t4952 + t5019;

  p_output1(0)=t307*t4746 - 1.*t4787*t4790;
  p_output1(1)=t307*t4891 - 1.*t4790*t4917;
  p_output1(2)=t307*t5028 - 1.*t4790*t5050;
  p_output1(3)=t3939*t4701 + t4592*t4703;
  p_output1(4)=t4703*t4853 + t3939*t4864;
  p_output1(5)=t3939*t4346*t465 + t4079*t465*t4703;
  p_output1(6)=t307*t4787 + t4746*t4790;
  p_output1(7)=t4790*t4891 + t307*t4917;
  p_output1(8)=t4790*t5028 + t307*t5050;
}


       
Eigen::Matrix<double,3,3> R_FR_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_FR_calf_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



