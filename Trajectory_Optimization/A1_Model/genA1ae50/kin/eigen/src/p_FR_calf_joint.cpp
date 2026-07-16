/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:10:53 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FR_calf_joint.h"

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
static void output1(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  double t374;
  double t4487;
  double t4492;
  double t4490;
  double t4534;
  double t3922;
  double t4491;
  double t4537;
  double t4540;
  double t4548;
  double t4549;
  double t4552;
  double t4564;
  double t1633;
  double t1803;
  double t4636;
  double t4637;
  double t4641;
  double t4643;
  double t4668;
  double t4669;
  double t4671;
  double t4673;
  double t4665;
  double t4666;
  double t4667;
  double t4679;
  double t4685;
  double t4690;
  double t2722;
  double t3222;
  double t3338;
  double t3538;
  double t4052;
  double t4127;
  double t4190;
  double t4481;
  double t4582;
  double t4584;
  double t4767;
  double t4771;
  double t4781;
  double t4792;
  double t4796;
  double t4797;
  double t4645;
  double t4654;
  double t4823;
  double t4838;
  double t4844;
  double t4672;
  double t4674;
  double t4676;
  double t4694;
  double t4696;
  double t4704;
  double t4856;
  double t4881;
  double t4883;
  double t4893;
  double t4919;
  double t4939;
  double t5007;
  double t5009;
  double t5010;
  double t5015;
  double t5022;
  double t5028;
  double t5039;
  double t5041;
  double t5045;
  t374 = Cos(var1[3]);
  t4487 = Cos(var1[5]);
  t4492 = Sin(var1[4]);
  t4490 = Sin(var1[3]);
  t4534 = Sin(var1[5]);
  t3922 = Cos(var1[6]);
  t4491 = -1.*t4487*t4490;
  t4537 = t374*t4492*t4534;
  t4540 = t4491 + t4537;
  t4548 = t374*t4487*t4492;
  t4549 = t4490*t4534;
  t4552 = t4548 + t4549;
  t4564 = Sin(var1[6]);
  t1633 = Cos(var1[4]);
  t1803 = Cos(var1[7]);
  t4636 = t3922*t4552;
  t4637 = -1.*t4540*t4564;
  t4641 = t4636 + t4637;
  t4643 = Sin(var1[7]);
  t4668 = Cos(var1[8]);
  t4669 = -1.*t4668;
  t4671 = 1. + t4669;
  t4673 = Sin(var1[8]);
  t4665 = t374*t1633*t1803;
  t4666 = -1.*t4641*t4643;
  t4667 = t4665 + t4666;
  t4679 = t1803*t4641;
  t4685 = t374*t1633*t4643;
  t4690 = t4679 + t4685;
  t2722 = -1.*t1803;
  t3222 = 1. + t2722;
  t3338 = 0.183*t3222;
  t3538 = 0. + t3338;
  t4052 = -1.*t3922;
  t4127 = 1. + t4052;
  t4190 = -0.047*t4127;
  t4481 = 0. + t4190;
  t4582 = 0.047*t4564;
  t4584 = 0. + t4582;
  t4767 = t374*t4487;
  t4771 = t4490*t4492*t4534;
  t4781 = t4767 + t4771;
  t4792 = t4487*t4490*t4492;
  t4796 = -1.*t374*t4534;
  t4797 = t4792 + t4796;
  t4645 = 0.183*t4643;
  t4654 = 0. + t4645;
  t4823 = t3922*t4797;
  t4838 = -1.*t4781*t4564;
  t4844 = t4823 + t4838;
  t4672 = 0.183*t4671;
  t4674 = 0.1*t4673;
  t4676 = 0. + t4672 + t4674;
  t4694 = -0.1*t4671;
  t4696 = 0.183*t4673;
  t4704 = 0. + t4694 + t4696;
  t4856 = t1633*t1803*t4490;
  t4881 = -1.*t4844*t4643;
  t4883 = t4856 + t4881;
  t4893 = t1803*t4844;
  t4919 = t1633*t4490*t4643;
  t4939 = t4893 + t4919;
  t5007 = t1633*t4487*t3922;
  t5009 = -1.*t1633*t4534*t4564;
  t5010 = t5007 + t5009;
  t5015 = -1.*t1803*t4492;
  t5022 = -1.*t5010*t4643;
  t5028 = t5015 + t5022;
  t5039 = t1803*t5010;
  t5041 = -1.*t4492*t4643;
  t5045 = t5039 + t5041;

  p_output1(0)=0. + t1633*t3538*t374 + t4481*t4540 - 0.13205*(t3922*t4540 + t4552*t4564) + t4552*t4584 + t4641*t4654 + t4667*t4676 - 0.1*(t4667*t4673 + t4668*t4690) + 0.183*(t4667*t4668 - 1.*t4673*t4690) + t4690*t4704 + var1(0);
  p_output1(1)=0. + t1633*t3538*t4490 + t4481*t4781 + t4584*t4797 - 0.13205*(t3922*t4781 + t4564*t4797) + t4654*t4844 + t4676*t4883 + t4704*t4939 - 0.1*(t4673*t4883 + t4668*t4939) + 0.183*(t4668*t4883 - 1.*t4673*t4939) + var1(1);
  p_output1(2)=0. - 1.*t3538*t4492 + t1633*t4481*t4534 - 0.13205*(t1633*t3922*t4534 + t1633*t4487*t4564) + t1633*t4487*t4584 + t4654*t5010 + t4676*t5028 + t4704*t5045 - 0.1*(t4673*t5028 + t4668*t5045) + 0.183*(t4668*t5028 - 1.*t4673*t5045) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_FR_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_FR_calf_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



