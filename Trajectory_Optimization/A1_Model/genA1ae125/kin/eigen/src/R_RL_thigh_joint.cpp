/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:04:37 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RL_thigh_joint.h"

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
  double t2625;
  double t5621;
  double t5806;
  double t5790;
  double t5815;
  double t2541;
  double t2851;
  double t5529;
  double t5602;
  double t5849;
  double t5804;
  double t5816;
  double t5824;
  double t5850;
  double t5851;
  double t5863;
  double t5894;
  double t5900;
  double t5902;
  double t5907;
  double t5910;
  double t5913;
  double t5848;
  double t5864;
  double t5872;
  double t5905;
  double t5922;
  double t5924;
  double t5950;
  double t5951;
  double t5958;
  t2625 = Cos(var1[3]);
  t5621 = Cos(var1[5]);
  t5806 = Sin(var1[3]);
  t5790 = Sin(var1[4]);
  t5815 = Sin(var1[5]);
  t2541 = Cos(var1[16]);
  t2851 = Cos(var1[4]);
  t5529 = Sin(var1[16]);
  t5602 = Cos(var1[15]);
  t5849 = Sin(var1[15]);
  t5804 = t2625*t5621*t5790;
  t5816 = t5806*t5815;
  t5824 = t5804 + t5816;
  t5850 = -1.*t5621*t5806;
  t5851 = t2625*t5790*t5815;
  t5863 = t5850 + t5851;
  t5894 = t5621*t5806*t5790;
  t5900 = -1.*t2625*t5815;
  t5902 = t5894 + t5900;
  t5907 = t2625*t5621;
  t5910 = t5806*t5790*t5815;
  t5913 = t5907 + t5910;
  t5848 = t5602*t5824;
  t5864 = -1.*t5849*t5863;
  t5872 = t5848 + t5864;
  t5905 = t5602*t5902;
  t5922 = -1.*t5849*t5913;
  t5924 = t5905 + t5922;
  t5950 = t5602*t2851*t5621;
  t5951 = -1.*t2851*t5849*t5815;
  t5958 = t5950 + t5951;

  p_output1(0)=t2541*t2625*t2851 - 1.*t5529*t5872;
  p_output1(1)=t2541*t2851*t5806 - 1.*t5529*t5924;
  p_output1(2)=-1.*t2541*t5790 - 1.*t5529*t5958;
  p_output1(3)=t5824*t5849 + t5602*t5863;
  p_output1(4)=t5849*t5902 + t5602*t5913;
  p_output1(5)=t2851*t5602*t5815 + t2851*t5621*t5849;
  p_output1(6)=t2625*t2851*t5529 + t2541*t5872;
  p_output1(7)=t2851*t5529*t5806 + t2541*t5924;
  p_output1(8)=-1.*t5529*t5790 + t2541*t5958;
}


       
Eigen::Matrix<double,3,3> R_RL_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_RL_thigh_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



