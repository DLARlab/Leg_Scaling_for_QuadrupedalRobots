/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:26:50 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RL_hip_joint.h"

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
  double t1917;
  double t4837;
  double t3081;
  double t3217;
  double t4863;
  double t2692;
  double t4006;
  double t4899;
  double t5116;
  double t5656;
  double t5777;
  double t5819;
  double t5824;
  double t1860;
  double t2771;
  double t2944;
  double t5660;
  double t5688;
  double t5722;
  double t5767;
  double t6062;
  double t6068;
  double t6073;
  double t6089;
  double t6095;
  double t6098;
  double t6584;
  double t6598;
  double t6610;
  double t6703;
  double t6704;
  double t6708;
  double t6651;
  double t6766;
  double t7028;
  double t7044;
  double t7049;
  double t6860;
  double t6873;
  double t6924;
  double t6928;
  t1917 = Sin(var1[3]);
  t4837 = Cos(var1[3]);
  t3081 = Cos(var1[5]);
  t3217 = Sin(var1[4]);
  t4863 = Sin(var1[5]);
  t2692 = Sin(var1[15]);
  t4006 = -1.*t3081*t1917*t3217;
  t4899 = t4837*t4863;
  t5116 = t4006 + t4899;
  t5656 = Cos(var1[15]);
  t5777 = -1.*t4837*t3081;
  t5819 = -1.*t1917*t3217*t4863;
  t5824 = t5777 + t5819;
  t1860 = Cos(var1[4]);
  t2771 = -0.047*t2692;
  t2944 = 0. + t2771;
  t5660 = -1.*t5656;
  t5688 = 1. + t5660;
  t5722 = 0.047*t5688;
  t5767 = 0. + t5722;
  t6062 = t4837*t3081*t3217;
  t6068 = t1917*t4863;
  t6073 = t6062 + t6068;
  t6089 = -1.*t3081*t1917;
  t6095 = t4837*t3217*t4863;
  t6098 = t6089 + t6095;
  t6584 = t3081*t1917;
  t6598 = -1.*t4837*t3217*t4863;
  t6610 = t6584 + t6598;
  t6703 = t3081*t1917*t3217;
  t6704 = -1.*t4837*t4863;
  t6708 = t6703 + t6704;
  t6651 = t5656*t6073;
  t6766 = t5656*t6708;
  t7028 = t4837*t3081;
  t7044 = t1917*t3217*t4863;
  t7049 = t7028 + t7044;
  t6860 = t5656*t1860*t3081;
  t6873 = -1.*t1860*t2692*t4863;
  t6924 = t6860 + t6873;
  t6928 = 0.047*t6924;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=0.183*t1860*t1917 + t2944*t5116 + t5767*t5824 + 0.047*(t2692*t5116 + t5656*t5824);
  p_output1(10)=-0.183*t1860*t4837 + t2944*t6073 + t5767*t6098 + 0.047*(t2692*t6073 + t5656*t6098);
  p_output1(11)=0;
  p_output1(12)=t1860*t2944*t3081*t4837 + 0.183*t3217*t4837 + 0.047*(t1860*t2692*t3081*t4837 + t1860*t4837*t4863*t5656) + t1860*t4837*t4863*t5767;
  p_output1(13)=t1860*t1917*t2944*t3081 + 0.183*t1917*t3217 + 0.047*(t1860*t1917*t2692*t3081 + t1860*t1917*t4863*t5656) + t1860*t1917*t4863*t5767;
  p_output1(14)=0.183*t1860 - 1.*t2944*t3081*t3217 + 0.047*(-1.*t2692*t3081*t3217 - 1.*t3217*t4863*t5656) - 1.*t3217*t4863*t5767;
  p_output1(15)=t5767*t6073 + t2944*t6610 + 0.047*(t2692*t6610 + t6651);
  p_output1(16)=t2944*t5824 + t5767*t6708 + 0.047*(t2692*t5824 + t6766);
  p_output1(17)=-1.*t1860*t2944*t4863 + t1860*t3081*t5767 + t6928;
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
  p_output1(36)=0;
  p_output1(37)=0;
  p_output1(38)=0;
  p_output1(39)=0;
  p_output1(40)=0;
  p_output1(41)=0;
  p_output1(42)=0;
  p_output1(43)=0;
  p_output1(44)=0;
  p_output1(45)=-0.047*t5656*t6073 + 0.047*t2692*t6098 + 0.047*(-1.*t2692*t6098 + t6651);
  p_output1(46)=-0.047*t5656*t6708 + 0.047*t2692*t7049 + 0.047*(t6766 - 1.*t2692*t7049);
  p_output1(47)=0.047*t1860*t2692*t4863 - 0.047*t1860*t3081*t5656 + t6928;
  p_output1(48)=0;
  p_output1(49)=0;
  p_output1(50)=0;
  p_output1(51)=0;
  p_output1(52)=0;
  p_output1(53)=0;
}


       
Eigen::Matrix<double,3,18> Jp_RL_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void Jp_RL_hip_joint(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



