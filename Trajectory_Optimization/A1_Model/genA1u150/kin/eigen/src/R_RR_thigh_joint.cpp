/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:26:46 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RR_thigh_joint.h"

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
  double t507;
  double t3622;
  double t3765;
  double t3624;
  double t4145;
  double t434;
  double t2517;
  double t3505;
  double t3513;
  double t4637;
  double t3732;
  double t4361;
  double t4366;
  double t4723;
  double t4749;
  double t4753;
  double t5185;
  double t5243;
  double t5256;
  double t5434;
  double t5441;
  double t5474;
  double t4613;
  double t4796;
  double t4974;
  double t5287;
  double t5530;
  double t5735;
  double t5883;
  double t5944;
  double t5947;
  t507 = Cos(var1[3]);
  t3622 = Cos(var1[5]);
  t3765 = Sin(var1[3]);
  t3624 = Sin(var1[4]);
  t4145 = Sin(var1[5]);
  t434 = Cos(var1[13]);
  t2517 = Cos(var1[4]);
  t3505 = Sin(var1[13]);
  t3513 = Cos(var1[12]);
  t4637 = Sin(var1[12]);
  t3732 = t507*t3622*t3624;
  t4361 = t3765*t4145;
  t4366 = t3732 + t4361;
  t4723 = -1.*t3622*t3765;
  t4749 = t507*t3624*t4145;
  t4753 = t4723 + t4749;
  t5185 = t3622*t3765*t3624;
  t5243 = -1.*t507*t4145;
  t5256 = t5185 + t5243;
  t5434 = t507*t3622;
  t5441 = t3765*t3624*t4145;
  t5474 = t5434 + t5441;
  t4613 = t3513*t4366;
  t4796 = -1.*t4637*t4753;
  t4974 = t4613 + t4796;
  t5287 = t3513*t5256;
  t5530 = -1.*t4637*t5474;
  t5735 = t5287 + t5530;
  t5883 = t3513*t2517*t3622;
  t5944 = -1.*t2517*t4637*t4145;
  t5947 = t5883 + t5944;

  p_output1(0)=-1.*t3505*t4974 + t2517*t434*t507;
  p_output1(1)=t2517*t3765*t434 - 1.*t3505*t5735;
  p_output1(2)=-1.*t3624*t434 - 1.*t3505*t5947;
  p_output1(3)=t4366*t4637 + t3513*t4753;
  p_output1(4)=t4637*t5256 + t3513*t5474;
  p_output1(5)=t2517*t3513*t4145 + t2517*t3622*t4637;
  p_output1(6)=t434*t4974 + t2517*t3505*t507;
  p_output1(7)=t2517*t3505*t3765 + t434*t5735;
  p_output1(8)=-1.*t3505*t3624 + t434*t5947;
}


       
Eigen::Matrix<double,3,3> R_RR_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_RR_thigh_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



