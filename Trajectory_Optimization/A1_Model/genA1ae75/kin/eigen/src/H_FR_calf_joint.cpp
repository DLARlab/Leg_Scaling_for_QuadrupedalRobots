/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:51:34 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FR_calf_joint.h"

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
  double t478;
  double t987;
  double t1678;
  double t1290;
  double t1706;
  double t558;
  double t906;
  double t1543;
  double t1717;
  double t2338;
  double t2451;
  double t2990;
  double t2995;
  double t3109;
  double t3166;
  double t3222;
  double t3285;
  double t530;
  double t3289;
  double t371;
  double t3685;
  double t3688;
  double t3741;
  double t3742;
  double t3748;
  double t3767;
  double t3783;
  double t3791;
  double t3802;
  double t3616;
  double t3962;
  double t3971;
  double t3974;
  double t3423;
  double t3454;
  double t3583;
  double t895;
  double t3370;
  double t3384;
  double t3895;
  double t3921;
  double t3922;
  double t3657;
  double t3865;
  double t3885;
  double t4013;
  double t4026;
  double t4068;
  double t3948;
  double t3986;
  double t3987;
  double t4085;
  double t4111;
  double t4117;
  double t4679;
  double t4693;
  double t3390;
  double t3623;
  double t3624;
  double t4282;
  double t4295;
  double t4326;
  double t4363;
  double t4364;
  double t4366;
  double t4372;
  double t4378;
  double t4383;
  double t4500;
  double t4528;
  double t4592;
  double t4606;
  double t4121;
  double t4122;
  double t4153;
  double t4621;
  double t4640;
  double t4701;
  double t4703;
  double t4709;
  double t4723;
  double t4736;
  double t4746;
  double t3886;
  double t3932;
  double t3939;
  double t4327;
  double t4340;
  double t4341;
  double t4260;
  double t4278;
  double t4281;
  double t4000;
  double t4072;
  double t4079;
  double t4346;
  double t4347;
  double t4352;
  t478 = Cos(var1[3]);
  t987 = Cos(var1[5]);
  t1678 = Sin(var1[3]);
  t1290 = Sin(var1[4]);
  t1706 = Sin(var1[5]);
  t558 = Cos(var1[7]);
  t906 = Cos(var1[6]);
  t1543 = t478*t987*t1290;
  t1717 = t1678*t1706;
  t2338 = t1543 + t1717;
  t2451 = t906*t2338;
  t2990 = -1.*t987*t1678;
  t2995 = t478*t1290*t1706;
  t3109 = t2990 + t2995;
  t3166 = Sin(var1[6]);
  t3222 = -1.*t3109*t3166;
  t3285 = t2451 + t3222;
  t530 = Cos(var1[4]);
  t3289 = Sin(var1[7]);
  t371 = Cos(var1[8]);
  t3685 = t987*t1678*t1290;
  t3688 = -1.*t478*t1706;
  t3741 = t3685 + t3688;
  t3742 = t906*t3741;
  t3748 = t478*t987;
  t3767 = t1678*t1290*t1706;
  t3783 = t3748 + t3767;
  t3791 = -1.*t3783*t3166;
  t3802 = t3742 + t3791;
  t3616 = Sin(var1[8]);
  t3962 = t530*t987*t906;
  t3971 = -1.*t530*t1706*t3166;
  t3974 = t3962 + t3971;
  t3423 = t558*t3285;
  t3454 = t478*t530*t3289;
  t3583 = t3423 + t3454;
  t895 = t478*t530*t558;
  t3370 = -1.*t3285*t3289;
  t3384 = t895 + t3370;
  t3895 = t558*t3802;
  t3921 = t530*t1678*t3289;
  t3922 = t3895 + t3921;
  t3657 = t530*t558*t1678;
  t3865 = -1.*t3802*t3289;
  t3885 = t3657 + t3865;
  t4013 = t558*t3974;
  t4026 = -1.*t1290*t3289;
  t4068 = t4013 + t4026;
  t3948 = -1.*t558*t1290;
  t3986 = -1.*t3974*t3289;
  t3987 = t3948 + t3986;
  t4085 = t906*t3109;
  t4111 = t2338*t3166;
  t4117 = t4085 + t4111;
  t4679 = -1.*t371;
  t4693 = 1. + t4679;
  t3390 = t371*t3384;
  t3623 = -1.*t3583*t3616;
  t3624 = t3390 + t3623;
  t4282 = t371*t3583;
  t4295 = t3384*t3616;
  t4326 = t4282 + t4295;
  t4363 = -1.*t558;
  t4364 = 1. + t4363;
  t4366 = 0.183*t4364;
  t4372 = 0. + t4366;
  t4378 = -1.*t906;
  t4383 = 1. + t4378;
  t4500 = -0.047*t4383;
  t4528 = 0. + t4500;
  t4592 = 0.047*t3166;
  t4606 = 0. + t4592;
  t4121 = t906*t3783;
  t4122 = t3741*t3166;
  t4153 = t4121 + t4122;
  t4621 = 0.183*t3289;
  t4640 = 0. + t4621;
  t4701 = 0.183*t4693;
  t4703 = 0.15*t3616;
  t4709 = 0. + t4701 + t4703;
  t4723 = -0.15*t4693;
  t4736 = 0.183*t3616;
  t4746 = 0. + t4723 + t4736;
  t3886 = t371*t3885;
  t3932 = -1.*t3922*t3616;
  t3939 = t3886 + t3932;
  t4327 = t371*t3922;
  t4340 = t3885*t3616;
  t4341 = t4327 + t4340;
  t4260 = t530*t906*t1706;
  t4278 = t530*t987*t3166;
  t4281 = t4260 + t4278;
  t4000 = t371*t3987;
  t4072 = -1.*t4068*t3616;
  t4079 = t4000 + t4072;
  t4346 = t371*t4068;
  t4347 = t3987*t3616;
  t4352 = t4346 + t4347;

  p_output1(0)=t3624;
  p_output1(1)=t3939;
  p_output1(2)=t4079;
  p_output1(3)=0.;
  p_output1(4)=t4117;
  p_output1(5)=t4153;
  p_output1(6)=t4281;
  p_output1(7)=0.;
  p_output1(8)=t4326;
  p_output1(9)=t4341;
  p_output1(10)=t4352;
  p_output1(11)=0.;
  p_output1(12)=0. + 0.183*t3624 - 0.13205*t4117 - 0.15*t4326 + t3109*t4528 + t2338*t4606 + t3285*t4640 + t3384*t4709 + t3583*t4746 + t4372*t478*t530 + var1(0);
  p_output1(13)=0. + 0.183*t3939 - 0.13205*t4153 - 0.15*t4341 + t3783*t4528 + t3741*t4606 + t3802*t4640 + t3885*t4709 + t3922*t4746 + t1678*t4372*t530 + var1(1);
  p_output1(14)=0. + 0.183*t4079 - 0.13205*t4281 - 0.15*t4352 - 1.*t1290*t4372 + t3974*t4640 + t3987*t4709 + t4068*t4746 + t1706*t4528*t530 + t4606*t530*t987 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_FR_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void H_FR_calf_joint(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



