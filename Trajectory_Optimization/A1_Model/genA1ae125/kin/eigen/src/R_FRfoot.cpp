/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:04:43 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_FRfoot.h"

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
  double t1752;
  double t3485;
  double t4110;
  double t3716;
  double t4470;
  double t2768;
  double t3435;
  double t3844;
  double t5293;
  double t5798;
  double t5836;
  double t6057;
  double t6318;
  double t6342;
  double t6366;
  double t6369;
  double t6380;
  double t2515;
  double t6381;
  double t1733;
  double t6766;
  double t6787;
  double t6795;
  double t6804;
  double t6840;
  double t6850;
  double t6871;
  double t6873;
  double t6899;
  double t6711;
  double t7008;
  double t7012;
  double t7019;
  double t6471;
  double t6478;
  double t6487;
  double t3376;
  double t6405;
  double t6413;
  double t6986;
  double t6987;
  double t6992;
  double t6764;
  double t6935;
  double t6951;
  double t7032;
  double t7044;
  double t7046;
  double t7007;
  double t7021;
  double t7023;
  t1752 = Cos(var1[3]);
  t3485 = Cos(var1[5]);
  t4110 = Sin(var1[3]);
  t3716 = Sin(var1[4]);
  t4470 = Sin(var1[5]);
  t2768 = Cos(var1[7]);
  t3435 = Cos(var1[6]);
  t3844 = t1752*t3485*t3716;
  t5293 = t4110*t4470;
  t5798 = t3844 + t5293;
  t5836 = t3435*t5798;
  t6057 = -1.*t3485*t4110;
  t6318 = t1752*t3716*t4470;
  t6342 = t6057 + t6318;
  t6366 = Sin(var1[6]);
  t6369 = -1.*t6342*t6366;
  t6380 = t5836 + t6369;
  t2515 = Cos(var1[4]);
  t6381 = Sin(var1[7]);
  t1733 = Cos(var1[8]);
  t6766 = t3485*t4110*t3716;
  t6787 = -1.*t1752*t4470;
  t6795 = t6766 + t6787;
  t6804 = t3435*t6795;
  t6840 = t1752*t3485;
  t6850 = t4110*t3716*t4470;
  t6871 = t6840 + t6850;
  t6873 = -1.*t6871*t6366;
  t6899 = t6804 + t6873;
  t6711 = Sin(var1[8]);
  t7008 = t2515*t3485*t3435;
  t7012 = -1.*t2515*t4470*t6366;
  t7019 = t7008 + t7012;
  t6471 = t2768*t6380;
  t6478 = t1752*t2515*t6381;
  t6487 = t6471 + t6478;
  t3376 = t1752*t2515*t2768;
  t6405 = -1.*t6380*t6381;
  t6413 = t3376 + t6405;
  t6986 = t2768*t6899;
  t6987 = t2515*t4110*t6381;
  t6992 = t6986 + t6987;
  t6764 = t2515*t2768*t4110;
  t6935 = -1.*t6899*t6381;
  t6951 = t6764 + t6935;
  t7032 = t2768*t7019;
  t7044 = -1.*t3716*t6381;
  t7046 = t7032 + t7044;
  t7007 = -1.*t2768*t3716;
  t7021 = -1.*t7019*t6381;
  t7023 = t7007 + t7021;

  p_output1(0)=t1733*t6413 - 1.*t6487*t6711;
  p_output1(1)=t1733*t6951 - 1.*t6711*t6992;
  p_output1(2)=t1733*t7023 - 1.*t6711*t7046;
  p_output1(3)=t3435*t6342 + t5798*t6366;
  p_output1(4)=t6366*t6795 + t3435*t6871;
  p_output1(5)=t2515*t3435*t4470 + t2515*t3485*t6366;
  p_output1(6)=t1733*t6487 + t6413*t6711;
  p_output1(7)=t6711*t6951 + t1733*t6992;
  p_output1(8)=t6711*t7023 + t1733*t7046;
}


       
Eigen::Matrix<double,3,3> R_FRfoot(const Eigen::Matrix<double,18,1> &var1)
//void R_FRfoot(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



