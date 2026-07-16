/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:11:02 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_FL_calf_joint.h"

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
  double t1841;
  double t4454;
  double t5768;
  double t4880;
  double t5889;
  double t4290;
  double t3166;
  double t3599;
  double t4313;
  double t5352;
  double t5911;
  double t5983;
  double t6095;
  double t6176;
  double t6181;
  double t6211;
  double t6224;
  double t6254;
  double t6259;
  double t651;
  double t6311;
  double t6396;
  double t6398;
  double t6399;
  double t6402;
  double t6403;
  double t6406;
  double t6410;
  double t6414;
  double t6429;
  double t6480;
  double t6484;
  double t6487;
  double t4278;
  double t6261;
  double t6262;
  double t6319;
  double t6323;
  double t6327;
  double t6393;
  double t6430;
  double t6442;
  double t6457;
  double t6465;
  double t6466;
  double t6477;
  double t6496;
  double t6497;
  double t6501;
  double t6509;
  double t6514;
  t1841 = Cos(var1[3]);
  t4454 = Cos(var1[5]);
  t5768 = Sin(var1[3]);
  t4880 = Sin(var1[4]);
  t5889 = Sin(var1[5]);
  t4290 = Cos(var1[10]);
  t3166 = Cos(var1[4]);
  t3599 = Sin(var1[10]);
  t4313 = Cos(var1[9]);
  t5352 = t1841*t4454*t4880;
  t5911 = t5768*t5889;
  t5983 = t5352 + t5911;
  t6095 = t4313*t5983;
  t6176 = Sin(var1[9]);
  t6181 = -1.*t4454*t5768;
  t6211 = t1841*t4880*t5889;
  t6224 = t6181 + t6211;
  t6254 = -1.*t6176*t6224;
  t6259 = t6095 + t6254;
  t651 = Sin(var1[11]);
  t6311 = Cos(var1[11]);
  t6396 = t4454*t5768*t4880;
  t6398 = -1.*t1841*t5889;
  t6399 = t6396 + t6398;
  t6402 = t4313*t6399;
  t6403 = t1841*t4454;
  t6406 = t5768*t4880*t5889;
  t6410 = t6403 + t6406;
  t6414 = -1.*t6176*t6410;
  t6429 = t6402 + t6414;
  t6480 = t4313*t3166*t4454;
  t6484 = -1.*t3166*t6176*t5889;
  t6487 = t6480 + t6484;
  t4278 = t1841*t3166*t3599;
  t6261 = t4290*t6259;
  t6262 = t4278 + t6261;
  t6319 = t4290*t1841*t3166;
  t6323 = -1.*t3599*t6259;
  t6327 = t6319 + t6323;
  t6393 = t3166*t3599*t5768;
  t6430 = t4290*t6429;
  t6442 = t6393 + t6430;
  t6457 = t4290*t3166*t5768;
  t6465 = -1.*t3599*t6429;
  t6466 = t6457 + t6465;
  t6477 = -1.*t3599*t4880;
  t6496 = t4290*t6487;
  t6497 = t6477 + t6496;
  t6501 = -1.*t4290*t4880;
  t6509 = -1.*t3599*t6487;
  t6514 = t6501 + t6509;

  p_output1(0)=t6311*t6327 - 1.*t6262*t651;
  p_output1(1)=t6311*t6466 - 1.*t6442*t651;
  p_output1(2)=-1.*t6497*t651 + t6311*t6514;
  p_output1(3)=t5983*t6176 + t4313*t6224;
  p_output1(4)=t6176*t6399 + t4313*t6410;
  p_output1(5)=t3166*t4313*t5889 + t3166*t4454*t6176;
  p_output1(6)=t6262*t6311 + t6327*t651;
  p_output1(7)=t6311*t6442 + t6466*t651;
  p_output1(8)=t6311*t6497 + t651*t6514;
}


       
Eigen::Matrix<double,3,3> R_FL_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_FL_calf_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



