/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:21:22 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_FL_thigh_joint.h"

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
  double t298;
  double t3486;
  double t3693;
  double t3545;
  double t3713;
  double t85;
  double t984;
  double t3189;
  double t3478;
  double t3866;
  double t3655;
  double t3740;
  double t3743;
  double t4123;
  double t4154;
  double t4165;
  double t4280;
  double t4288;
  double t4335;
  double t4397;
  double t4474;
  double t4858;
  double t3774;
  double t4189;
  double t4192;
  double t4361;
  double t4929;
  double t4969;
  double t5036;
  double t5058;
  double t5099;
  t298 = Cos(var1[3]);
  t3486 = Cos(var1[5]);
  t3693 = Sin(var1[3]);
  t3545 = Sin(var1[4]);
  t3713 = Sin(var1[5]);
  t85 = Cos(var1[10]);
  t984 = Cos(var1[4]);
  t3189 = Sin(var1[10]);
  t3478 = Cos(var1[9]);
  t3866 = Sin(var1[9]);
  t3655 = t298*t3486*t3545;
  t3740 = t3693*t3713;
  t3743 = t3655 + t3740;
  t4123 = -1.*t3486*t3693;
  t4154 = t298*t3545*t3713;
  t4165 = t4123 + t4154;
  t4280 = t3486*t3693*t3545;
  t4288 = -1.*t298*t3713;
  t4335 = t4280 + t4288;
  t4397 = t298*t3486;
  t4474 = t3693*t3545*t3713;
  t4858 = t4397 + t4474;
  t3774 = t3478*t3743;
  t4189 = -1.*t3866*t4165;
  t4192 = t3774 + t4189;
  t4361 = t3478*t4335;
  t4929 = -1.*t3866*t4858;
  t4969 = t4361 + t4929;
  t5036 = t3478*t984*t3486;
  t5058 = -1.*t984*t3866*t3713;
  t5099 = t5036 + t5058;

  p_output1(0)=-1.*t3189*t4192 + t298*t85*t984;
  p_output1(1)=-1.*t3189*t4969 + t3693*t85*t984;
  p_output1(2)=-1.*t3189*t5099 - 1.*t3545*t85;
  p_output1(3)=t3743*t3866 + t3478*t4165;
  p_output1(4)=t3866*t4335 + t3478*t4858;
  p_output1(5)=t3478*t3713*t984 + t3486*t3866*t984;
  p_output1(6)=t4192*t85 + t298*t3189*t984;
  p_output1(7)=t4969*t85 + t3189*t3693*t984;
  p_output1(8)=-1.*t3189*t3545 + t5099*t85;
}


       
Eigen::Matrix<double,3,3> R_FL_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_FL_thigh_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



