/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:04:28 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RR_thigh_joint.h"

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
  double t2257;
  double t3304;
  double t2995;
  double t2996;
  double t3715;
  double t2425;
  double t3144;
  double t3868;
  double t3946;
  double t4055;
  double t4214;
  double t4264;
  double t4309;
  double t938;
  double t1625;
  double t4364;
  double t4380;
  double t4395;
  double t4396;
  double t1169;
  double t1287;
  double t1305;
  double t1595;
  double t2808;
  double t2917;
  double t4127;
  double t4134;
  double t4199;
  double t4207;
  double t4431;
  double t4436;
  double t4438;
  double t4442;
  double t4443;
  double t4444;
  double t4372;
  double t4378;
  double t4464;
  double t4466;
  double t4473;
  double t4506;
  double t4507;
  double t4509;
  double t4574;
  double t4575;
  double t4577;
  double t4646;
  double t4651;
  double t4653;
  double t4679;
  double t4681;
  double t4685;
  double t4692;
  double t4693;
  double t4695;
  double t4711;
  double t4716;
  double t4728;
  double t4357;
  double t4742;
  double t4747;
  double t4768;
  double t4769;
  double t4771;
  double t4792;
  double t4793;
  double t4804;
  double t4805;
  double t4810;
  double t4816;
  double t4818;
  double t4752;
  double t4776;
  double t4780;
  double t4781;
  double t4783;
  double t4784;
  double t4785;
  double t4825;
  double t4828;
  t2257 = Sin(var1[3]);
  t3304 = Cos(var1[3]);
  t2995 = Cos(var1[5]);
  t2996 = Sin(var1[4]);
  t3715 = Sin(var1[5]);
  t2425 = Sin(var1[12]);
  t3144 = -1.*t2995*t2257*t2996;
  t3868 = t3304*t3715;
  t3946 = t3144 + t3868;
  t4055 = Cos(var1[12]);
  t4214 = -1.*t3304*t2995;
  t4264 = -1.*t2257*t2996*t3715;
  t4309 = t4214 + t4264;
  t938 = Cos(var1[13]);
  t1625 = Cos(var1[4]);
  t4364 = Sin(var1[13]);
  t4380 = t4055*t3946;
  t4395 = -1.*t2425*t4309;
  t4396 = t4380 + t4395;
  t1169 = -1.*t938;
  t1287 = 1. + t1169;
  t1305 = -0.183*t1287;
  t1595 = 0. + t1305;
  t2808 = 0.047*t2425;
  t2917 = 0. + t2808;
  t4127 = -1.*t4055;
  t4134 = 1. + t4127;
  t4199 = -0.047*t4134;
  t4207 = 0. + t4199;
  t4431 = t3304*t2995*t2996;
  t4436 = t2257*t3715;
  t4438 = t4431 + t4436;
  t4442 = -1.*t2995*t2257;
  t4443 = t3304*t2996*t3715;
  t4444 = t4442 + t4443;
  t4372 = -0.183*t4364;
  t4378 = 0. + t4372;
  t4464 = t4055*t4438;
  t4466 = -1.*t2425*t4444;
  t4473 = t4464 + t4466;
  t4506 = t4055*t3304*t1625*t2995;
  t4507 = -1.*t3304*t1625*t2425*t3715;
  t4509 = t4506 + t4507;
  t4574 = t4055*t1625*t2995*t2257;
  t4575 = -1.*t1625*t2425*t2257*t3715;
  t4577 = t4574 + t4575;
  t4646 = -1.*t4055*t2995*t2996;
  t4651 = t2425*t2996*t3715;
  t4653 = t4646 + t4651;
  t4679 = t2995*t2257;
  t4681 = -1.*t3304*t2996*t3715;
  t4685 = t4679 + t4681;
  t4692 = -1.*t2425*t4438;
  t4693 = t4055*t4685;
  t4695 = t4692 + t4693;
  t4711 = t2995*t2257*t2996;
  t4716 = -1.*t3304*t3715;
  t4728 = t4711 + t4716;
  t4357 = t4055*t4309;
  t4742 = -1.*t2425*t4728;
  t4747 = t4742 + t4357;
  t4768 = -1.*t1625*t2995*t2425;
  t4769 = -1.*t4055*t1625*t3715;
  t4771 = t4768 + t4769;
  t4792 = -1.*t4055*t4444;
  t4793 = t4692 + t4792;
  t4804 = t3304*t2995;
  t4805 = t2257*t2996*t3715;
  t4810 = t4804 + t4805;
  t4816 = -1.*t4055*t4810;
  t4818 = t4742 + t4816;
  t4752 = t4055*t4728;
  t4776 = t4378*t4771;
  t4780 = 0.183*t4364*t4771;
  t4781 = t4055*t1625*t2995;
  t4783 = -1.*t1625*t2425*t3715;
  t4784 = t4781 + t4783;
  t4785 = -0.13205*t4784;
  t4825 = -1.*t2425*t4810;
  t4828 = t4752 + t4825;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=-1.*t1595*t1625*t2257 + t2917*t3946 + t4207*t4309 - 0.13205*(t2425*t3946 + t4357) + t4378*t4396 - 0.183*(-1.*t4364*t4396 - 1.*t1625*t2257*t938);
  p_output1(10)=t1595*t1625*t3304 + t2917*t4438 + t4207*t4444 - 0.13205*(t2425*t4438 + t4055*t4444) + t4378*t4473 - 0.183*(-1.*t4364*t4473 + t1625*t3304*t938);
  p_output1(11)=0;
  p_output1(12)=t1625*t2917*t2995*t3304 - 1.*t1595*t2996*t3304 - 0.13205*(t1625*t2425*t2995*t3304 + t1625*t3304*t3715*t4055) + t1625*t3304*t3715*t4207 + t4378*t4509 - 0.183*(-1.*t4364*t4509 - 1.*t2996*t3304*t938);
  p_output1(13)=t1625*t2257*t2917*t2995 - 1.*t1595*t2257*t2996 - 0.13205*(t1625*t2257*t2425*t2995 + t1625*t2257*t3715*t4055) + t1625*t2257*t3715*t4207 + t4378*t4577 - 0.183*(-1.*t4364*t4577 - 1.*t2257*t2996*t938);
  p_output1(14)=-1.*t1595*t1625 - 1.*t2917*t2995*t2996 - 0.13205*(-1.*t2425*t2995*t2996 - 1.*t2996*t3715*t4055) - 1.*t2996*t3715*t4207 + t4378*t4653 - 0.183*(-1.*t4364*t4653 - 1.*t1625*t938);
  p_output1(15)=t4207*t4438 + t2917*t4685 - 0.13205*(t4464 + t2425*t4685) + 0.183*t4364*t4695 + t4378*t4695;
  p_output1(16)=t2917*t4309 + t4207*t4728 + 0.183*t4364*t4747 + t4378*t4747 - 0.13205*(t2425*t4309 + t4752);
  p_output1(17)=-1.*t1625*t2917*t3715 + t1625*t2995*t4207 + t4776 + t4780 + t4785;
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
  p_output1(36)=0.047*t4055*t4438 - 0.047*t2425*t4444 - 0.13205*t4473 + 0.183*t4364*t4793 + t4378*t4793;
  p_output1(37)=0.047*t4055*t4728 - 0.047*t2425*t4810 + 0.183*t4364*t4818 + t4378*t4818 - 0.13205*t4828;
  p_output1(38)=-0.047*t1625*t2425*t3715 + 0.047*t1625*t2995*t4055 + t4776 + t4780 + t4785;
  p_output1(39)=-0.183*t1625*t3304*t4364 - 0.183*t4473*t938 - 0.183*(-1.*t1625*t3304*t4364 - 1.*t4473*t938);
  p_output1(40)=-0.183*t1625*t2257*t4364 - 0.183*t4828*t938 - 0.183*(-1.*t1625*t2257*t4364 - 1.*t4828*t938);
  p_output1(41)=0.183*t2996*t4364 - 0.183*t4784*t938 - 0.183*(t2996*t4364 - 1.*t4784*t938);
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


       
Eigen::Matrix<double,3,18> Jp_RR_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void Jp_RR_thigh_joint(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



