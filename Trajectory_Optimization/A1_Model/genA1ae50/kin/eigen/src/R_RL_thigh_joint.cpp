/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:11:13 GMT-05:00
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
  double t1829;
  double t5620;
  double t6431;
  double t5668;
  double t6450;
  double t777;
  double t2222;
  double t3659;
  double t5557;
  double t6676;
  double t5912;
  double t6482;
  double t6606;
  double t6775;
  double t6824;
  double t6851;
  double t6999;
  double t7003;
  double t7005;
  double t7024;
  double t7027;
  double t7075;
  double t6673;
  double t6863;
  double t6920;
  double t7018;
  double t7089;
  double t7092;
  double t7119;
  double t7153;
  double t7192;
  t1829 = Cos(var1[3]);
  t5620 = Cos(var1[5]);
  t6431 = Sin(var1[3]);
  t5668 = Sin(var1[4]);
  t6450 = Sin(var1[5]);
  t777 = Cos(var1[16]);
  t2222 = Cos(var1[4]);
  t3659 = Sin(var1[16]);
  t5557 = Cos(var1[15]);
  t6676 = Sin(var1[15]);
  t5912 = t1829*t5620*t5668;
  t6482 = t6431*t6450;
  t6606 = t5912 + t6482;
  t6775 = -1.*t5620*t6431;
  t6824 = t1829*t5668*t6450;
  t6851 = t6775 + t6824;
  t6999 = t5620*t6431*t5668;
  t7003 = -1.*t1829*t6450;
  t7005 = t6999 + t7003;
  t7024 = t1829*t5620;
  t7027 = t6431*t5668*t6450;
  t7075 = t7024 + t7027;
  t6673 = t5557*t6606;
  t6863 = -1.*t6676*t6851;
  t6920 = t6673 + t6863;
  t7018 = t5557*t7005;
  t7089 = -1.*t6676*t7075;
  t7092 = t7018 + t7089;
  t7119 = t5557*t2222*t5620;
  t7153 = -1.*t2222*t6676*t6450;
  t7192 = t7119 + t7153;

  p_output1(0)=-1.*t3659*t6920 + t1829*t2222*t777;
  p_output1(1)=-1.*t3659*t7092 + t2222*t6431*t777;
  p_output1(2)=-1.*t3659*t7192 - 1.*t5668*t777;
  p_output1(3)=t6606*t6676 + t5557*t6851;
  p_output1(4)=t6676*t7005 + t5557*t7075;
  p_output1(5)=t2222*t5557*t6450 + t2222*t5620*t6676;
  p_output1(6)=t1829*t2222*t3659 + t6920*t777;
  p_output1(7)=t2222*t3659*t6431 + t7092*t777;
  p_output1(8)=-1.*t3659*t5668 + t7192*t777;
}


       
Eigen::Matrix<double,3,3> R_RL_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_RL_thigh_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



