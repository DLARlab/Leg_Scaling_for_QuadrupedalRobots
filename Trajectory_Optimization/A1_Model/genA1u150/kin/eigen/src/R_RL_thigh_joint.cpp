/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:26:53 GMT-05:00
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
  double t1183;
  double t4955;
  double t5592;
  double t5006;
  double t6469;
  double t87;
  double t1623;
  double t1857;
  double t1950;
  double t6567;
  double t5329;
  double t6486;
  double t6510;
  double t6587;
  double t6634;
  double t6762;
  double t6932;
  double t6971;
  double t7008;
  double t7055;
  double t7064;
  double t7150;
  double t6519;
  double t6785;
  double t6813;
  double t7044;
  double t7168;
  double t7180;
  double t7294;
  double t7295;
  double t7313;
  t1183 = Cos(var1[3]);
  t4955 = Cos(var1[5]);
  t5592 = Sin(var1[3]);
  t5006 = Sin(var1[4]);
  t6469 = Sin(var1[5]);
  t87 = Cos(var1[16]);
  t1623 = Cos(var1[4]);
  t1857 = Sin(var1[16]);
  t1950 = Cos(var1[15]);
  t6567 = Sin(var1[15]);
  t5329 = t1183*t4955*t5006;
  t6486 = t5592*t6469;
  t6510 = t5329 + t6486;
  t6587 = -1.*t4955*t5592;
  t6634 = t1183*t5006*t6469;
  t6762 = t6587 + t6634;
  t6932 = t4955*t5592*t5006;
  t6971 = -1.*t1183*t6469;
  t7008 = t6932 + t6971;
  t7055 = t1183*t4955;
  t7064 = t5592*t5006*t6469;
  t7150 = t7055 + t7064;
  t6519 = t1950*t6510;
  t6785 = -1.*t6567*t6762;
  t6813 = t6519 + t6785;
  t7044 = t1950*t7008;
  t7168 = -1.*t6567*t7150;
  t7180 = t7044 + t7168;
  t7294 = t1950*t1623*t4955;
  t7295 = -1.*t1623*t6567*t6469;
  t7313 = t7294 + t7295;

  p_output1(0)=-1.*t1857*t6813 + t1183*t1623*t87;
  p_output1(1)=-1.*t1857*t7180 + t1623*t5592*t87;
  p_output1(2)=-1.*t1857*t7313 - 1.*t5006*t87;
  p_output1(3)=t6510*t6567 + t1950*t6762;
  p_output1(4)=t6567*t7008 + t1950*t7150;
  p_output1(5)=t1623*t1950*t6469 + t1623*t4955*t6567;
  p_output1(6)=t1183*t1623*t1857 + t6813*t87;
  p_output1(7)=t1623*t1857*t5592 + t7180*t87;
  p_output1(8)=-1.*t1857*t5006 + t7313*t87;
}


       
Eigen::Matrix<double,3,3> R_RL_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_RL_thigh_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



