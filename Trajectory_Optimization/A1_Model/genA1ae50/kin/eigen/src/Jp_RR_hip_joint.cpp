/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:11:03 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RR_hip_joint.h"

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
static void output1(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  double t742;
  double t4713;
  double t3324;
  double t4328;
  double t5027;
  double t1652;
  double t4489;
  double t5049;
  double t5285;
  double t6518;
  double t6596;
  double t6601;
  double t6604;
  double t696;
  double t2046;
  double t3260;
  double t6535;
  double t6537;
  double t6545;
  double t6594;
  double t6636;
  double t6643;
  double t6649;
  double t6657;
  double t6658;
  double t6660;
  double t6817;
  double t6818;
  double t6820;
  double t6865;
  double t6867;
  double t6869;
  double t6832;
  double t6886;
  double t7014;
  double t7015;
  double t7021;
  double t6940;
  double t6953;
  double t6963;
  double t6974;
  t742 = Sin(var1[3]);
  t4713 = Cos(var1[3]);
  t3324 = Cos(var1[5]);
  t4328 = Sin(var1[4]);
  t5027 = Sin(var1[5]);
  t1652 = Sin(var1[12]);
  t4489 = -1.*t3324*t742*t4328;
  t5049 = t4713*t5027;
  t5285 = t4489 + t5049;
  t6518 = Cos(var1[12]);
  t6596 = -1.*t4713*t3324;
  t6601 = -1.*t742*t4328*t5027;
  t6604 = t6596 + t6601;
  t696 = Cos(var1[4]);
  t2046 = 0.047*t1652;
  t3260 = 0. + t2046;
  t6535 = -1.*t6518;
  t6537 = 1. + t6535;
  t6545 = -0.047*t6537;
  t6594 = 0. + t6545;
  t6636 = t4713*t3324*t4328;
  t6643 = t742*t5027;
  t6649 = t6636 + t6643;
  t6657 = -1.*t3324*t742;
  t6658 = t4713*t4328*t5027;
  t6660 = t6657 + t6658;
  t6817 = t3324*t742;
  t6818 = -1.*t4713*t4328*t5027;
  t6820 = t6817 + t6818;
  t6865 = t3324*t742*t4328;
  t6867 = -1.*t4713*t5027;
  t6869 = t6865 + t6867;
  t6832 = t6518*t6649;
  t6886 = t6518*t6869;
  t7014 = t4713*t3324;
  t7015 = t742*t4328*t5027;
  t7021 = t7014 + t7015;
  t6940 = t6518*t696*t3324;
  t6953 = -1.*t696*t1652*t5027;
  t6963 = t6940 + t6953;
  t6974 = -0.047*t6963;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t3260*t5285 + t6594*t6604 - 0.047*(t1652*t5285 + t6518*t6604) + 0.183*t696*t742;
  p_output1(10)=t3260*t6649 + t6594*t6660 - 0.047*(t1652*t6649 + t6518*t6660) - 0.183*t4713*t696;
  p_output1(11)=0;
  p_output1(12)=0.183*t4328*t4713 + t3260*t3324*t4713*t696 + t4713*t5027*t6594*t696 - 0.047*(t1652*t3324*t4713*t696 + t4713*t5027*t6518*t696);
  p_output1(13)=0.183*t4328*t742 + t3260*t3324*t696*t742 + t5027*t6594*t696*t742 - 0.047*(t1652*t3324*t696*t742 + t5027*t6518*t696*t742);
  p_output1(14)=-1.*t3260*t3324*t4328 - 0.047*(-1.*t1652*t3324*t4328 - 1.*t4328*t5027*t6518) - 1.*t4328*t5027*t6594 + 0.183*t696;
  p_output1(15)=t6594*t6649 + t3260*t6820 - 0.047*(t1652*t6820 + t6832);
  p_output1(16)=t3260*t6604 + t6594*t6869 - 0.047*(t1652*t6604 + t6886);
  p_output1(17)=-1.*t3260*t5027*t696 + t3324*t6594*t696 + t6974;
  p_output1(18)=0;
  p_output1(19)=0;
  p_output1(20)=0;
  p_output1(21)=0;
  p_output1(22)=0;
  p_output1(23)=0;
  p_output1(24)=0;
  p_output1(25)=0;
  p_output1(26)=0;
  p_output1(27)=0;
  p_output1(28)=0;
  p_output1(29)=0;
  p_output1(30)=0;
  p_output1(31)=0;
  p_output1(32)=0;
  p_output1(33)=0;
  p_output1(34)=0;
  p_output1(35)=0;
  p_output1(36)=0.047*t6518*t6649 - 0.047*t1652*t6660 - 0.047*(-1.*t1652*t6660 + t6832);
  p_output1(37)=0.047*t6518*t6869 - 0.047*t1652*t7021 - 0.047*(t6886 - 1.*t1652*t7021);
  p_output1(38)=-0.047*t1652*t5027*t696 + 0.047*t3324*t6518*t696 + t6974;
  p_output1(39)=0;
  p_output1(40)=0;
  p_output1(41)=0;
  p_output1(42)=0;
  p_output1(43)=0;
  p_output1(44)=0;
  p_output1(45)=0;
  p_output1(46)=0;
  p_output1(47)=0;
  p_output1(48)=0;
  p_output1(49)=0;
  p_output1(50)=0;
  p_output1(51)=0;
  p_output1(52)=0;
  p_output1(53)=0;
}


       
Eigen::Matrix<double,3,18> Jp_RR_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void Jp_RR_hip_joint(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



