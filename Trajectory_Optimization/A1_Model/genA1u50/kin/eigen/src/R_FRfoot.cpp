/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:14:00 GMT-05:00
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
  double t193;
  double t756;
  double t2359;
  double t882;
  double t2595;
  double t215;
  double t716;
  double t2206;
  double t2650;
  double t2766;
  double t2767;
  double t2887;
  double t3221;
  double t3586;
  double t3593;
  double t3667;
  double t3669;
  double t199;
  double t3793;
  double t168;
  double t4251;
  double t4260;
  double t4261;
  double t4294;
  double t4342;
  double t4402;
  double t4423;
  double t4434;
  double t4442;
  double t4218;
  double t4529;
  double t4555;
  double t4598;
  double t3997;
  double t4131;
  double t4216;
  double t509;
  double t3896;
  double t3901;
  double t4453;
  double t4473;
  double t4476;
  double t4237;
  double t4444;
  double t4447;
  double t4610;
  double t4611;
  double t4627;
  double t4508;
  double t4599;
  double t4603;
  t193 = Cos(var1[3]);
  t756 = Cos(var1[5]);
  t2359 = Sin(var1[3]);
  t882 = Sin(var1[4]);
  t2595 = Sin(var1[5]);
  t215 = Cos(var1[7]);
  t716 = Cos(var1[6]);
  t2206 = t193*t756*t882;
  t2650 = t2359*t2595;
  t2766 = t2206 + t2650;
  t2767 = t716*t2766;
  t2887 = -1.*t756*t2359;
  t3221 = t193*t882*t2595;
  t3586 = t2887 + t3221;
  t3593 = Sin(var1[6]);
  t3667 = -1.*t3586*t3593;
  t3669 = t2767 + t3667;
  t199 = Cos(var1[4]);
  t3793 = Sin(var1[7]);
  t168 = Cos(var1[8]);
  t4251 = t756*t2359*t882;
  t4260 = -1.*t193*t2595;
  t4261 = t4251 + t4260;
  t4294 = t716*t4261;
  t4342 = t193*t756;
  t4402 = t2359*t882*t2595;
  t4423 = t4342 + t4402;
  t4434 = -1.*t4423*t3593;
  t4442 = t4294 + t4434;
  t4218 = Sin(var1[8]);
  t4529 = t199*t756*t716;
  t4555 = -1.*t199*t2595*t3593;
  t4598 = t4529 + t4555;
  t3997 = t215*t3669;
  t4131 = t193*t199*t3793;
  t4216 = t3997 + t4131;
  t509 = t193*t199*t215;
  t3896 = -1.*t3669*t3793;
  t3901 = t509 + t3896;
  t4453 = t215*t4442;
  t4473 = t199*t2359*t3793;
  t4476 = t4453 + t4473;
  t4237 = t199*t215*t2359;
  t4444 = -1.*t4442*t3793;
  t4447 = t4237 + t4444;
  t4610 = t215*t4598;
  t4611 = -1.*t882*t3793;
  t4627 = t4610 + t4611;
  t4508 = -1.*t215*t882;
  t4599 = -1.*t4598*t3793;
  t4603 = t4508 + t4599;

  p_output1(0)=t168*t3901 - 1.*t4216*t4218;
  p_output1(1)=t168*t4447 - 1.*t4218*t4476;
  p_output1(2)=t168*t4603 - 1.*t4218*t4627;
  p_output1(3)=t2766*t3593 + t3586*t716;
  p_output1(4)=t3593*t4261 + t4423*t716;
  p_output1(5)=t199*t2595*t716 + t199*t3593*t756;
  p_output1(6)=t168*t4216 + t3901*t4218;
  p_output1(7)=t4218*t4447 + t168*t4476;
  p_output1(8)=t4218*t4603 + t168*t4627;
}


       
Eigen::Matrix<double,3,3> R_FRfoot(const Eigen::Matrix<double,18,1> &var1)
//void R_FRfoot(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



