/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:26:46 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RR_thigh_joint.h"

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
  double t300;
  double t1036;
  double t1418;
  double t1109;
  double t1491;
  double t35;
  double t327;
  double t617;
  double t896;
  double t2284;
  double t1234;
  double t1948;
  double t2025;
  double t2285;
  double t2419;
  double t2474;
  double t3513;
  double t3866;
  double t3867;
  double t3928;
  double t3940;
  double t3944;
  double t2100;
  double t2805;
  double t3023;
  double t3916;
  double t4002;
  double t4005;
  double t4145;
  double t4191;
  double t4208;
  double t4366;
  double t4517;
  double t4570;
  double t507;
  double t3344;
  double t3444;
  double t5597;
  double t5622;
  double t5735;
  double t5739;
  double t5839;
  double t5843;
  double t5901;
  double t5903;
  double t5944;
  double t5947;
  double t4611;
  double t4613;
  double t4637;
  double t5962;
  double t6006;
  double t3505;
  double t4009;
  double t4041;
  double t4796;
  double t4974;
  double t5013;
  double t4123;
  double t4213;
  double t4361;
  t300 = Cos(var1[3]);
  t1036 = Cos(var1[5]);
  t1418 = Sin(var1[3]);
  t1109 = Sin(var1[4]);
  t1491 = Sin(var1[5]);
  t35 = Cos(var1[13]);
  t327 = Cos(var1[4]);
  t617 = Sin(var1[13]);
  t896 = Cos(var1[12]);
  t2284 = Sin(var1[12]);
  t1234 = t300*t1036*t1109;
  t1948 = t1418*t1491;
  t2025 = t1234 + t1948;
  t2285 = -1.*t1036*t1418;
  t2419 = t300*t1109*t1491;
  t2474 = t2285 + t2419;
  t3513 = t1036*t1418*t1109;
  t3866 = -1.*t300*t1491;
  t3867 = t3513 + t3866;
  t3928 = t300*t1036;
  t3940 = t1418*t1109*t1491;
  t3944 = t3928 + t3940;
  t2100 = t896*t2025;
  t2805 = -1.*t2284*t2474;
  t3023 = t2100 + t2805;
  t3916 = t896*t3867;
  t4002 = -1.*t2284*t3944;
  t4005 = t3916 + t4002;
  t4145 = t896*t327*t1036;
  t4191 = -1.*t327*t2284*t1491;
  t4208 = t4145 + t4191;
  t4366 = t2284*t2025;
  t4517 = t896*t2474;
  t4570 = t4366 + t4517;
  t507 = t35*t300*t327;
  t3344 = -1.*t617*t3023;
  t3444 = t507 + t3344;
  t5597 = -1.*t35;
  t5622 = 1. + t5597;
  t5735 = -0.183*t5622;
  t5739 = 0. + t5735;
  t5839 = 0.047*t2284;
  t5843 = 0. + t5839;
  t5901 = -1.*t896;
  t5903 = 1. + t5901;
  t5944 = -0.047*t5903;
  t5947 = 0. + t5944;
  t4611 = t2284*t3867;
  t4613 = t896*t3944;
  t4637 = t4611 + t4613;
  t5962 = -0.183*t617;
  t6006 = 0. + t5962;
  t3505 = t35*t327*t1418;
  t4009 = -1.*t617*t4005;
  t4041 = t3505 + t4009;
  t4796 = t327*t1036*t2284;
  t4974 = t896*t327*t1491;
  t5013 = t4796 + t4974;
  t4123 = -1.*t35*t1109;
  t4213 = -1.*t617*t4208;
  t4361 = t4123 + t4213;

  p_output1(0)=t3444;
  p_output1(1)=t4041;
  p_output1(2)=t4361;
  p_output1(3)=0.;
  p_output1(4)=t4570;
  p_output1(5)=t4637;
  p_output1(6)=t5013;
  p_output1(7)=0.;
  p_output1(8)=t3023*t35 + t300*t327*t617;
  p_output1(9)=t35*t4005 + t1418*t327*t617;
  p_output1(10)=t35*t4208 - 1.*t1109*t617;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.183*t3444 - 0.17458*t4570 + t300*t327*t5739 + t2025*t5843 + t2474*t5947 + t3023*t6006 + var1(0);
  p_output1(13)=0. - 0.183*t4041 - 0.17458*t4637 + t1418*t327*t5739 + t3867*t5843 + t3944*t5947 + t4005*t6006 + var1(1);
  p_output1(14)=0. - 0.183*t4361 - 0.17458*t5013 - 1.*t1109*t5739 + t1036*t327*t5843 + t1491*t327*t5947 + t4208*t6006 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_RR_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void H_RR_thigh_joint(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



