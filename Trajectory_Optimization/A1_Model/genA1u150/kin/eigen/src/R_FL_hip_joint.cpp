/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:26:37 GMT-05:00
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
  double t786;
  double t329;
  double t1895;
  double t1445;
  double t3152;
  double t4055;
  double t2525;
  double t4394;
  double t3997;
  double t4098;
  double t4121;
  double t4508;
  double t4511;
  double t4571;
  double t4755;
  double t4821;
  double t4836;
  double t4854;
  double t4971;
  double t5025;
  t786 = Cos(var1[4]);
  t329 = Cos(var1[3]);
  t1895 = Sin(var1[4]);
  t1445 = Sin(var1[3]);
  t3152 = Cos(var1[5]);
  t4055 = Sin(var1[5]);
  t2525 = Sin(var1[9]);
  t4394 = Cos(var1[9]);
  t3997 = t329*t3152*t1895;
  t4098 = t1445*t4055;
  t4121 = t3997 + t4098;
  t4508 = -1.*t3152*t1445;
  t4511 = t329*t1895*t4055;
  t4571 = t4508 + t4511;
  t4755 = t3152*t1445*t1895;
  t4821 = -1.*t329*t4055;
  t4836 = t4755 + t4821;
  t4854 = t329*t3152;
  t4971 = t1445*t1895*t4055;
  t5025 = t4854 + t4971;

  p_output1(0)=t329*t786;
  p_output1(1)=t1445*t786;
  p_output1(2)=-1.*t1895;
  p_output1(3)=t2525*t4121 + t4394*t4571;
  p_output1(4)=t2525*t4836 + t4394*t5025;
  p_output1(5)=t2525*t3152*t786 + t4055*t4394*t786;
  p_output1(6)=t4121*t4394 - 1.*t2525*t4571;
  p_output1(7)=t4394*t4836 - 1.*t2525*t5025;
  p_output1(8)=-1.*t2525*t4055*t786 + t3152*t4394*t786;
}


       
Eigen::Matrix<double,3,3> R_FL_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_FL_hip_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



