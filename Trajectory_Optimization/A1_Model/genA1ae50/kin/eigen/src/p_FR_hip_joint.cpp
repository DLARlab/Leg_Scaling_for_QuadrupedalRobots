/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:10:48 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FR_hip_joint.h"

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
static void output1(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  double t3972;
  double t4084;
  double t4099;
  double t4087;
  double t4100;
  double t4030;
  double t4092;
  double t4101;
  double t4102;
  double t4108;
  double t4109;
  double t4112;
  double t4115;
  double t4005;
  double t4067;
  double t4081;
  double t4082;
  double t4083;
  double t4118;
  double t4121;
  double t4149;
  double t4151;
  double t4154;
  double t4158;
  double t4160;
  double t4161;
  t3972 = Cos(var1[3]);
  t4084 = Cos(var1[5]);
  t4099 = Sin(var1[4]);
  t4087 = Sin(var1[3]);
  t4100 = Sin(var1[5]);
  t4030 = Cos(var1[6]);
  t4092 = -1.*t4084*t4087;
  t4101 = t3972*t4099*t4100;
  t4102 = t4092 + t4101;
  t4108 = t3972*t4084*t4099;
  t4109 = t4087*t4100;
  t4112 = t4108 + t4109;
  t4115 = Sin(var1[6]);
  t4005 = Cos(var1[4]);
  t4067 = -1.*t4030;
  t4081 = 1. + t4067;
  t4082 = -0.047*t4081;
  t4083 = 0. + t4082;
  t4118 = 0.047*t4115;
  t4121 = 0. + t4118;
  t4149 = t3972*t4084;
  t4151 = t4087*t4099*t4100;
  t4154 = t4149 + t4151;
  t4158 = t4084*t4087*t4099;
  t4160 = -1.*t3972*t4100;
  t4161 = t4158 + t4160;

  p_output1(0)=0. + 0.183*t3972*t4005 + t4083*t4102 - 0.047*(t4030*t4102 + t4112*t4115) + t4112*t4121 + var1(0);
  p_output1(1)=0. + 0.183*t4005*t4087 + t4083*t4154 + t4121*t4161 - 0.047*(t4030*t4154 + t4115*t4161) + var1(1);
  p_output1(2)=0. - 0.183*t4099 + t4005*t4083*t4100 - 0.047*(t4005*t4030*t4100 + t4005*t4084*t4115) + t4005*t4084*t4121 + var1(2);
}


       
Eigen::Matrix<double,3,1> p_FR_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_FR_hip_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



