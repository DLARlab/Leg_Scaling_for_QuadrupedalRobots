/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:10:51 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_FR_thigh_joint.h"

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
  double t2108;
  double t4346;
  double t4397;
  double t4266;
  double t4398;
  double t2311;
  double t4393;
  double t4402;
  double t4416;
  double t4423;
  double t4424;
  double t4427;
  double t4431;
  double t272;
  double t367;
  double t4492;
  double t4497;
  double t4520;
  double t4529;
  double t724;
  double t984;
  double t1133;
  double t1327;
  double t2765;
  double t3240;
  double t3770;
  double t3990;
  double t4468;
  double t4480;
  double t4565;
  double t4567;
  double t4569;
  double t4579;
  double t4582;
  double t4583;
  double t4530;
  double t4534;
  double t4595;
  double t4611;
  double t4619;
  double t4655;
  double t4657;
  double t4661;
  double t4685;
  double t4687;
  double t4689;
  double t4735;
  double t4736;
  double t4740;
  double t4767;
  double t4770;
  double t4771;
  double t4801;
  double t4809;
  double t4811;
  double t4823;
  double t4830;
  double t4832;
  double t4486;
  double t4857;
  double t4863;
  double t4916;
  double t4917;
  double t4919;
  double t4950;
  double t4954;
  double t4846;
  double t4969;
  double t4971;
  double t4977;
  double t4986;
  double t4997;
  double t4893;
  double t4896;
  double t4904;
  double t4907;
  double t4924;
  double t4934;
  double t4982;
  double t4984;
  t2108 = Sin(var1[3]);
  t4346 = Cos(var1[5]);
  t4397 = Sin(var1[4]);
  t4266 = Cos(var1[3]);
  t4398 = Sin(var1[5]);
  t2311 = Cos(var1[6]);
  t4393 = -1.*t4266*t4346;
  t4402 = -1.*t2108*t4397*t4398;
  t4416 = t4393 + t4402;
  t4423 = -1.*t4346*t2108*t4397;
  t4424 = t4266*t4398;
  t4427 = t4423 + t4424;
  t4431 = Sin(var1[6]);
  t272 = Cos(var1[4]);
  t367 = Cos(var1[7]);
  t4492 = t2311*t4427;
  t4497 = -1.*t4416*t4431;
  t4520 = t4492 + t4497;
  t4529 = Sin(var1[7]);
  t724 = -1.*t367;
  t984 = 1. + t724;
  t1133 = 0.183*t984;
  t1327 = 0. + t1133;
  t2765 = -1.*t2311;
  t3240 = 1. + t2765;
  t3770 = -0.047*t3240;
  t3990 = 0. + t3770;
  t4468 = 0.047*t4431;
  t4480 = 0. + t4468;
  t4565 = -1.*t4346*t2108;
  t4567 = t4266*t4397*t4398;
  t4569 = t4565 + t4567;
  t4579 = t4266*t4346*t4397;
  t4582 = t2108*t4398;
  t4583 = t4579 + t4582;
  t4530 = 0.183*t4529;
  t4534 = 0. + t4530;
  t4595 = t2311*t4583;
  t4611 = -1.*t4569*t4431;
  t4619 = t4595 + t4611;
  t4655 = t4266*t272*t4346*t2311;
  t4657 = -1.*t4266*t272*t4398*t4431;
  t4661 = t4655 + t4657;
  t4685 = t272*t4346*t2311*t2108;
  t4687 = -1.*t272*t2108*t4398*t4431;
  t4689 = t4685 + t4687;
  t4735 = -1.*t4346*t2311*t4397;
  t4736 = t4397*t4398*t4431;
  t4740 = t4735 + t4736;
  t4767 = t4346*t2108;
  t4770 = -1.*t4266*t4397*t4398;
  t4771 = t4767 + t4770;
  t4801 = t2311*t4771;
  t4809 = -1.*t4583*t4431;
  t4811 = t4801 + t4809;
  t4823 = t4346*t2108*t4397;
  t4830 = -1.*t4266*t4398;
  t4832 = t4823 + t4830;
  t4486 = t2311*t4416;
  t4857 = -1.*t4832*t4431;
  t4863 = t4486 + t4857;
  t4916 = -1.*t272*t2311*t4398;
  t4917 = -1.*t272*t4346*t4431;
  t4919 = t4916 + t4917;
  t4950 = -1.*t2311*t4569;
  t4954 = t4950 + t4809;
  t4846 = t2311*t4832;
  t4969 = t4266*t4346;
  t4971 = t2108*t4397*t4398;
  t4977 = t4969 + t4971;
  t4986 = -1.*t2311*t4977;
  t4997 = t4986 + t4857;
  t4893 = t272*t4346*t2311;
  t4896 = -1.*t272*t4398*t4431;
  t4904 = t4893 + t4896;
  t4907 = -0.13205*t4904;
  t4924 = t4919*t4534;
  t4934 = -0.183*t4919*t4529;
  t4982 = -1.*t4977*t4431;
  t4984 = t4846 + t4982;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=-1.*t1327*t2108*t272 + t3990*t4416 + t4427*t4480 - 0.13205*(t4427*t4431 + t4486) + 0.183*(-1.*t2108*t272*t367 - 1.*t4520*t4529) + t4520*t4534;
  p_output1(10)=t1327*t272*t4266 + t3990*t4569 + t4480*t4583 - 0.13205*(t2311*t4569 + t4431*t4583) + t4534*t4619 + 0.183*(t272*t367*t4266 - 1.*t4529*t4619);
  p_output1(11)=0;
  p_output1(12)=-1.*t1327*t4266*t4397 + t272*t3990*t4266*t4398 - 0.13205*(t2311*t272*t4266*t4398 + t272*t4266*t4346*t4431) + t272*t4266*t4346*t4480 + t4534*t4661 + 0.183*(-1.*t367*t4266*t4397 - 1.*t4529*t4661);
  p_output1(13)=-1.*t1327*t2108*t4397 + t2108*t272*t3990*t4398 - 0.13205*(t2108*t2311*t272*t4398 + t2108*t272*t4346*t4431) + t2108*t272*t4346*t4480 + t4534*t4689 + 0.183*(-1.*t2108*t367*t4397 - 1.*t4529*t4689);
  p_output1(14)=-1.*t1327*t272 - 1.*t3990*t4397*t4398 - 0.13205*(-1.*t2311*t4397*t4398 - 1.*t4346*t4397*t4431) - 1.*t4346*t4397*t4480 + t4534*t4740 + 0.183*(-1.*t272*t367 - 1.*t4529*t4740);
  p_output1(15)=t3990*t4583 + t4480*t4771 - 0.13205*(t4595 + t4431*t4771) - 0.183*t4529*t4811 + t4534*t4811;
  p_output1(16)=t4416*t4480 + t3990*t4832 - 0.13205*(t4416*t4431 + t4846) - 0.183*t4529*t4863 + t4534*t4863;
  p_output1(17)=t272*t3990*t4346 - 1.*t272*t4398*t4480 + t4907 + t4924 + t4934;
  p_output1(18)=-0.047*t4431*t4569 + 0.047*t2311*t4583 - 0.13205*t4619 - 0.183*t4529*t4954 + t4534*t4954;
  p_output1(19)=0.047*t2311*t4832 - 0.047*t4431*t4977 - 0.13205*t4984 - 0.183*t4529*t4997 + t4534*t4997;
  p_output1(20)=0.047*t2311*t272*t4346 - 0.047*t272*t4398*t4431 + t4907 + t4924 + t4934;
  p_output1(21)=0.183*t272*t4266*t4529 + 0.183*t367*t4619 + 0.183*(-1.*t272*t4266*t4529 - 1.*t367*t4619);
  p_output1(22)=0.183*t2108*t272*t4529 + 0.183*t367*t4984 + 0.183*(-1.*t2108*t272*t4529 - 1.*t367*t4984);
  p_output1(23)=-0.183*t4397*t4529 + 0.183*t367*t4904 + 0.183*(t4397*t4529 - 1.*t367*t4904);
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


       
Eigen::Matrix<double,3,18> Jp_FR_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void Jp_FR_thigh_joint(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



