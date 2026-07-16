/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:18:40 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FR_hip_joint.h"

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
  double t2377;
  double t3686;
  double t2118;
  double t5204;
  double t6139;
  double t6607;
  double t5296;
  double t6674;
  double t6656;
  double t6663;
  double t6673;
  double t6244;
  double t6633;
  double t6637;
  double t6832;
  double t6836;
  double t6846;
  double t6758;
  double t6779;
  double t6793;
  double t6652;
  double t6688;
  double t6731;
  double t6930;
  double t6940;
  double t6968;
  double t6975;
  double t6983;
  double t7010;
  double t6797;
  double t6848;
  double t6852;
  double t6863;
  double t6870;
  double t6879;
  t2377 = Cos(var1[4]);
  t3686 = Sin(var1[3]);
  t2118 = Cos(var1[3]);
  t5204 = Sin(var1[4]);
  t6139 = Cos(var1[5]);
  t6607 = Sin(var1[5]);
  t5296 = Cos(var1[6]);
  t6674 = Sin(var1[6]);
  t6656 = t2118*t6139*t5204;
  t6663 = t3686*t6607;
  t6673 = t6656 + t6663;
  t6244 = -1.*t6139*t3686;
  t6633 = t2118*t5204*t6607;
  t6637 = t6244 + t6633;
  t6832 = t6139*t3686*t5204;
  t6836 = -1.*t2118*t6607;
  t6846 = t6832 + t6836;
  t6758 = t2118*t6139;
  t6779 = t3686*t5204*t6607;
  t6793 = t6758 + t6779;
  t6652 = t5296*t6637;
  t6688 = t6673*t6674;
  t6731 = t6652 + t6688;
  t6930 = -1.*t5296;
  t6940 = 1. + t6930;
  t6968 = -0.047*t6940;
  t6975 = 0. + t6968;
  t6983 = 0.047*t6674;
  t7010 = 0. + t6983;
  t6797 = t5296*t6793;
  t6848 = t6846*t6674;
  t6852 = t6797 + t6848;
  t6863 = t2377*t5296*t6607;
  t6870 = t2377*t6139*t6674;
  t6879 = t6863 + t6870;

  p_output1(0)=t2118*t2377;
  p_output1(1)=t2377*t3686;
  p_output1(2)=-1.*t5204;
  p_output1(3)=0.;
  p_output1(4)=t6731;
  p_output1(5)=t6852;
  p_output1(6)=t6879;
  p_output1(7)=0.;
  p_output1(8)=t5296*t6673 - 1.*t6637*t6674;
  p_output1(9)=-1.*t6674*t6793 + t5296*t6846;
  p_output1(10)=t2377*t5296*t6139 - 1.*t2377*t6607*t6674;
  p_output1(11)=0.;
  p_output1(12)=0. + 0.183*t2118*t2377 - 0.047*t6731 + t6637*t6975 + t6673*t7010 + var1(0);
  p_output1(13)=0. + 0.183*t2377*t3686 - 0.047*t6852 + t6793*t6975 + t6846*t7010 + var1(1);
  p_output1(14)=0. - 0.183*t5204 - 0.047*t6879 + t2377*t6607*t6975 + t2377*t6139*t7010 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_FR_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void H_FR_hip_joint(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



