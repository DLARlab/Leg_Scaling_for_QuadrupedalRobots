/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:11:10 GMT-05:00
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
  double t186;
  double t170;
  double t2980;
  double t2430;
  double t3228;
  double t3303;
  double t3202;
  double t3380;
  double t3254;
  double t3314;
  double t3332;
  double t3412;
  double t3526;
  double t3542;
  double t3588;
  double t3591;
  double t3595;
  double t3618;
  double t3641;
  double t3668;
  double t3369;
  double t3544;
  double t3579;
  double t3932;
  double t3945;
  double t4048;
  double t4347;
  double t4354;
  double t4402;
  double t3602;
  double t3687;
  double t3693;
  double t3707;
  double t3741;
  double t3816;
  t186 = Cos(var1[4]);
  t170 = Cos(var1[3]);
  t2980 = Sin(var1[4]);
  t2430 = Sin(var1[3]);
  t3228 = Cos(var1[5]);
  t3303 = Sin(var1[5]);
  t3202 = Sin(var1[15]);
  t3380 = Cos(var1[15]);
  t3254 = t170*t3228*t2980;
  t3314 = t2430*t3303;
  t3332 = t3254 + t3314;
  t3412 = -1.*t3228*t2430;
  t3526 = t170*t2980*t3303;
  t3542 = t3412 + t3526;
  t3588 = t3228*t2430*t2980;
  t3591 = -1.*t170*t3303;
  t3595 = t3588 + t3591;
  t3618 = t170*t3228;
  t3641 = t2430*t2980*t3303;
  t3668 = t3618 + t3641;
  t3369 = t3202*t3332;
  t3544 = t3380*t3542;
  t3579 = t3369 + t3544;
  t3932 = -0.047*t3202;
  t3945 = 0. + t3932;
  t4048 = -1.*t3380;
  t4347 = 1. + t4048;
  t4354 = 0.047*t4347;
  t4402 = 0. + t4354;
  t3602 = t3202*t3595;
  t3687 = t3380*t3668;
  t3693 = t3602 + t3687;
  t3707 = t186*t3228*t3202;
  t3741 = t3380*t186*t3303;
  t3816 = t3707 + t3741;

  p_output1(0)=t170*t186;
  p_output1(1)=t186*t2430;
  p_output1(2)=-1.*t2980;
  p_output1(3)=0.;
  p_output1(4)=t3579;
  p_output1(5)=t3693;
  p_output1(6)=t3816;
  p_output1(7)=0.;
  p_output1(8)=t3332*t3380 - 1.*t3202*t3542;
  p_output1(9)=t3380*t3595 - 1.*t3202*t3668;
  p_output1(10)=-1.*t186*t3202*t3303 + t186*t3228*t3380;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.183*t170*t186 + 0.047*t3579 + t3332*t3945 + t3542*t4402 + var1(0);
  p_output1(13)=0. - 0.183*t186*t2430 + 0.047*t3693 + t3595*t3945 + t3668*t4402 + var1(1);
  p_output1(14)=0. + 0.183*t2980 + 0.047*t3816 + t186*t3228*t3945 + t186*t3303*t4402 + var1(2);
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



