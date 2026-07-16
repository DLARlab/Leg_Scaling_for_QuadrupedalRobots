/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:26:36 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FL_hip_joint.h"

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
  double t1694;
  double t967;
  double t2212;
  double t2024;
  double t3455;
  double t4139;
  double t2992;
  double t5130;
  double t3997;
  double t4275;
  double t4331;
  double t5369;
  double t5511;
  double t5521;
  double t5561;
  double t5562;
  double t5576;
  double t5613;
  double t5618;
  double t5624;
  double t4917;
  double t5524;
  double t5527;
  double t5832;
  double t5844;
  double t5858;
  double t5887;
  double t5897;
  double t5917;
  double t5608;
  double t5642;
  double t5646;
  double t5663;
  double t5684;
  double t5686;
  t1694 = Cos(var1[4]);
  t967 = Cos(var1[3]);
  t2212 = Sin(var1[4]);
  t2024 = Sin(var1[3]);
  t3455 = Cos(var1[5]);
  t4139 = Sin(var1[5]);
  t2992 = Sin(var1[9]);
  t5130 = Cos(var1[9]);
  t3997 = t967*t3455*t2212;
  t4275 = t2024*t4139;
  t4331 = t3997 + t4275;
  t5369 = -1.*t3455*t2024;
  t5511 = t967*t2212*t4139;
  t5521 = t5369 + t5511;
  t5561 = t3455*t2024*t2212;
  t5562 = -1.*t967*t4139;
  t5576 = t5561 + t5562;
  t5613 = t967*t3455;
  t5618 = t2024*t2212*t4139;
  t5624 = t5613 + t5618;
  t4917 = t2992*t4331;
  t5524 = t5130*t5521;
  t5527 = t4917 + t5524;
  t5832 = -0.047*t2992;
  t5844 = 0. + t5832;
  t5858 = -1.*t5130;
  t5887 = 1. + t5858;
  t5897 = 0.047*t5887;
  t5917 = 0. + t5897;
  t5608 = t2992*t5576;
  t5642 = t5130*t5624;
  t5646 = t5608 + t5642;
  t5663 = t1694*t3455*t2992;
  t5684 = t5130*t1694*t4139;
  t5686 = t5663 + t5684;

  p_output1(0)=t1694*t967;
  p_output1(1)=t1694*t2024;
  p_output1(2)=-1.*t2212;
  p_output1(3)=0.;
  p_output1(4)=t5527;
  p_output1(5)=t5646;
  p_output1(6)=t5686;
  p_output1(7)=0.;
  p_output1(8)=t4331*t5130 - 1.*t2992*t5521;
  p_output1(9)=t5130*t5576 - 1.*t2992*t5624;
  p_output1(10)=-1.*t1694*t2992*t4139 + t1694*t3455*t5130;
  p_output1(11)=0.;
  p_output1(12)=0. + 0.047*t5527 + t4331*t5844 + t5521*t5917 + 0.183*t1694*t967 + var1(0);
  p_output1(13)=0. + 0.183*t1694*t2024 + 0.047*t5646 + t5576*t5844 + t5624*t5917 + var1(1);
  p_output1(14)=0. - 0.183*t2212 + 0.047*t5686 + t1694*t3455*t5844 + t1694*t4139*t5917 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_FL_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void H_FL_hip_joint(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



