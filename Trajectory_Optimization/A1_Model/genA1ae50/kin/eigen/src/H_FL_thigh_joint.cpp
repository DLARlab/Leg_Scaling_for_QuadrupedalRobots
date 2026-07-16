/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:10:59 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FL_thigh_joint.h"

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
static void output1(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  double t440;
  double t1115;
  double t1368;
  double t1135;
  double t1424;
  double t335;
  double t836;
  double t1014;
  double t1080;
  double t1700;
  double t1169;
  double t1528;
  double t1681;
  double t1752;
  double t1767;
  double t1771;
  double t2705;
  double t2732;
  double t2734;
  double t2838;
  double t2839;
  double t2850;
  double t1685;
  double t1839;
  double t1979;
  double t2776;
  double t2898;
  double t2930;
  double t3144;
  double t3178;
  double t3206;
  double t3239;
  double t3243;
  double t3287;
  double t987;
  double t2006;
  double t2524;
  double t4603;
  double t4633;
  double t4646;
  double t4731;
  double t4748;
  double t4899;
  double t4922;
  double t4970;
  double t4989;
  double t5013;
  double t3333;
  double t3365;
  double t3422;
  double t5037;
  double t5055;
  double t2558;
  double t3051;
  double t3072;
  double t3519;
  double t3531;
  double t3705;
  double t3119;
  double t3234;
  double t3236;
  t440 = Cos(var1[3]);
  t1115 = Cos(var1[5]);
  t1368 = Sin(var1[3]);
  t1135 = Sin(var1[4]);
  t1424 = Sin(var1[5]);
  t335 = Cos(var1[10]);
  t836 = Cos(var1[4]);
  t1014 = Sin(var1[10]);
  t1080 = Cos(var1[9]);
  t1700 = Sin(var1[9]);
  t1169 = t440*t1115*t1135;
  t1528 = t1368*t1424;
  t1681 = t1169 + t1528;
  t1752 = -1.*t1115*t1368;
  t1767 = t440*t1135*t1424;
  t1771 = t1752 + t1767;
  t2705 = t1115*t1368*t1135;
  t2732 = -1.*t440*t1424;
  t2734 = t2705 + t2732;
  t2838 = t440*t1115;
  t2839 = t1368*t1135*t1424;
  t2850 = t2838 + t2839;
  t1685 = t1080*t1681;
  t1839 = -1.*t1700*t1771;
  t1979 = t1685 + t1839;
  t2776 = t1080*t2734;
  t2898 = -1.*t1700*t2850;
  t2930 = t2776 + t2898;
  t3144 = t1080*t836*t1115;
  t3178 = -1.*t836*t1700*t1424;
  t3206 = t3144 + t3178;
  t3239 = t1700*t1681;
  t3243 = t1080*t1771;
  t3287 = t3239 + t3243;
  t987 = t335*t440*t836;
  t2006 = -1.*t1014*t1979;
  t2524 = t987 + t2006;
  t4603 = -1.*t335;
  t4633 = 1. + t4603;
  t4646 = 0.183*t4633;
  t4731 = 0. + t4646;
  t4748 = -0.047*t1700;
  t4899 = 0. + t4748;
  t4922 = -1.*t1080;
  t4970 = 1. + t4922;
  t4989 = 0.047*t4970;
  t5013 = 0. + t4989;
  t3333 = t1700*t2734;
  t3365 = t1080*t2850;
  t3422 = t3333 + t3365;
  t5037 = 0.183*t1014;
  t5055 = 0. + t5037;
  t2558 = t335*t836*t1368;
  t3051 = -1.*t1014*t2930;
  t3072 = t2558 + t3051;
  t3519 = t836*t1115*t1700;
  t3531 = t1080*t836*t1424;
  t3705 = t3519 + t3531;
  t3119 = -1.*t335*t1135;
  t3234 = -1.*t1014*t3206;
  t3236 = t3119 + t3234;

  p_output1(0)=t2524;
  p_output1(1)=t3072;
  p_output1(2)=t3236;
  p_output1(3)=0.;
  p_output1(4)=t3287;
  p_output1(5)=t3422;
  p_output1(6)=t3705;
  p_output1(7)=0.;
  p_output1(8)=t1979*t335 + t1014*t440*t836;
  p_output1(9)=t2930*t335 + t1014*t1368*t836;
  p_output1(10)=-1.*t1014*t1135 + t3206*t335;
  p_output1(11)=0.;
  p_output1(12)=0. + 0.183*t2524 + 0.13205*t3287 + t1681*t4899 + t1771*t5013 + t1979*t5055 + t440*t4731*t836 + var1(0);
  p_output1(13)=0. + 0.183*t3072 + 0.13205*t3422 + t2734*t4899 + t2850*t5013 + t2930*t5055 + t1368*t4731*t836 + var1(1);
  p_output1(14)=0. + 0.183*t3236 + 0.13205*t3705 - 1.*t1135*t4731 + t3206*t5055 + t1115*t4899*t836 + t1424*t5013*t836 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_FL_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void H_FL_thigh_joint(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



