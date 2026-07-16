/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:18:40 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_FR_hip_joint.h"

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
  double t483;
  double t569;
  double t463;
  double t2309;
  double t3905;
  double t5841;
  double t3626;
  double t6884;
  double t6852;
  double t6880;
  double t6881;
  double t5761;
  double t6652;
  double t6758;
  double t6913;
  double t6968;
  double t6975;
  double t6898;
  double t6906;
  double t6910;
  t483 = Cos(var1[4]);
  t569 = Sin(var1[3]);
  t463 = Cos(var1[3]);
  t2309 = Sin(var1[4]);
  t3905 = Cos(var1[5]);
  t5841 = Sin(var1[5]);
  t3626 = Cos(var1[6]);
  t6884 = Sin(var1[6]);
  t6852 = t463*t3905*t2309;
  t6880 = t569*t5841;
  t6881 = t6852 + t6880;
  t5761 = -1.*t3905*t569;
  t6652 = t463*t2309*t5841;
  t6758 = t5761 + t6652;
  t6913 = t3905*t569*t2309;
  t6968 = -1.*t463*t5841;
  t6975 = t6913 + t6968;
  t6898 = t463*t3905;
  t6906 = t569*t2309*t5841;
  t6910 = t6898 + t6906;

  p_output1(0)=t463*t483;
  p_output1(1)=t483*t569;
  p_output1(2)=-1.*t2309;
  p_output1(3)=t3626*t6758 + t6881*t6884;
  p_output1(4)=t3626*t6910 + t6884*t6975;
  p_output1(5)=t3626*t483*t5841 + t3905*t483*t6884;
  p_output1(6)=t3626*t6881 - 1.*t6758*t6884;
  p_output1(7)=-1.*t6884*t6910 + t3626*t6975;
  p_output1(8)=t3626*t3905*t483 - 1.*t483*t5841*t6884;
}


       
Eigen::Matrix<double,3,3> R_FR_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_FR_hip_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



