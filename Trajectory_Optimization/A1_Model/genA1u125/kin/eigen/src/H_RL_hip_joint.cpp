/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:21:33 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RL_hip_joint.h"

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
  double t759;
  double t598;
  double t2645;
  double t1298;
  double t5269;
  double t5895;
  double t4918;
  double t6119;
  double t5824;
  double t5969;
  double t6060;
  double t6151;
  double t6219;
  double t6372;
  double t6449;
  double t6450;
  double t6464;
  double t6621;
  double t6658;
  double t6694;
  double t6068;
  double t6418;
  double t6444;
  double t6945;
  double t6958;
  double t7006;
  double t7050;
  double t7083;
  double t7090;
  double t6501;
  double t6702;
  double t6703;
  double t6738;
  double t6751;
  double t6757;
  t759 = Cos(var1[4]);
  t598 = Cos(var1[3]);
  t2645 = Sin(var1[4]);
  t1298 = Sin(var1[3]);
  t5269 = Cos(var1[5]);
  t5895 = Sin(var1[5]);
  t4918 = Sin(var1[15]);
  t6119 = Cos(var1[15]);
  t5824 = t598*t5269*t2645;
  t5969 = t1298*t5895;
  t6060 = t5824 + t5969;
  t6151 = -1.*t5269*t1298;
  t6219 = t598*t2645*t5895;
  t6372 = t6151 + t6219;
  t6449 = t5269*t1298*t2645;
  t6450 = -1.*t598*t5895;
  t6464 = t6449 + t6450;
  t6621 = t598*t5269;
  t6658 = t1298*t2645*t5895;
  t6694 = t6621 + t6658;
  t6068 = t4918*t6060;
  t6418 = t6119*t6372;
  t6444 = t6068 + t6418;
  t6945 = -0.047*t4918;
  t6958 = 0. + t6945;
  t7006 = -1.*t6119;
  t7050 = 1. + t7006;
  t7083 = 0.047*t7050;
  t7090 = 0. + t7083;
  t6501 = t4918*t6464;
  t6702 = t6119*t6694;
  t6703 = t6501 + t6702;
  t6738 = t759*t5269*t4918;
  t6751 = t6119*t759*t5895;
  t6757 = t6738 + t6751;

  p_output1(0)=t598*t759;
  p_output1(1)=t1298*t759;
  p_output1(2)=-1.*t2645;
  p_output1(3)=0.;
  p_output1(4)=t6444;
  p_output1(5)=t6703;
  p_output1(6)=t6757;
  p_output1(7)=0.;
  p_output1(8)=t6060*t6119 - 1.*t4918*t6372;
  p_output1(9)=t6119*t6464 - 1.*t4918*t6694;
  p_output1(10)=-1.*t4918*t5895*t759 + t5269*t6119*t759;
  p_output1(11)=0.;
  p_output1(12)=0. + 0.047*t6444 + t6060*t6958 + t6372*t7090 - 0.183*t598*t759 + var1(0);
  p_output1(13)=0. + 0.047*t6703 + t6464*t6958 + t6694*t7090 - 0.183*t1298*t759 + var1(1);
  p_output1(14)=0. + 0.183*t2645 + 0.047*t6757 + t5269*t6958*t759 + t5895*t7090*t759 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_RL_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void H_RL_hip_joint(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



