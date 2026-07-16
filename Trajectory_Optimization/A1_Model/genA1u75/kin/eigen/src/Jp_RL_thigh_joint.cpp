/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:19:02 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RL_thigh_joint.h"

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
  double t1608;
  double t3393;
  double t2550;
  double t2783;
  double t3424;
  double t1905;
  double t2901;
  double t3599;
  double t3619;
  double t4063;
  double t5199;
  double t5267;
  double t5283;
  double t10;
  double t1396;
  double t6123;
  double t6593;
  double t6768;
  double t6828;
  double t238;
  double t547;
  double t852;
  double t1174;
  double t2122;
  double t2335;
  double t4403;
  double t4520;
  double t4614;
  double t4723;
  double t7294;
  double t7302;
  double t7309;
  double t7376;
  double t7518;
  double t7528;
  double t6281;
  double t6326;
  double t7596;
  double t7599;
  double t7600;
  double t7697;
  double t7701;
  double t7703;
  double t7742;
  double t7745;
  double t7746;
  double t7971;
  double t7985;
  double t8025;
  double t8120;
  double t8147;
  double t8183;
  double t8223;
  double t8232;
  double t8286;
  double t8437;
  double t8440;
  double t8443;
  double t5746;
  double t8550;
  double t8585;
  double t8760;
  double t8823;
  double t8856;
  double t8950;
  double t8967;
  double t9073;
  double t9097;
  double t9109;
  double t9142;
  double t9150;
  double t8637;
  double t8876;
  double t8885;
  double t8922;
  double t8923;
  double t8925;
  double t8926;
  double t9176;
  double t9178;
  t1608 = Sin(var1[3]);
  t3393 = Cos(var1[3]);
  t2550 = Cos(var1[5]);
  t2783 = Sin(var1[4]);
  t3424 = Sin(var1[5]);
  t1905 = Sin(var1[15]);
  t2901 = -1.*t2550*t1608*t2783;
  t3599 = t3393*t3424;
  t3619 = t2901 + t3599;
  t4063 = Cos(var1[15]);
  t5199 = -1.*t3393*t2550;
  t5267 = -1.*t1608*t2783*t3424;
  t5283 = t5199 + t5267;
  t10 = Cos(var1[16]);
  t1396 = Cos(var1[4]);
  t6123 = Sin(var1[16]);
  t6593 = t4063*t3619;
  t6768 = -1.*t1905*t5283;
  t6828 = t6593 + t6768;
  t238 = -1.*t10;
  t547 = 1. + t238;
  t852 = -0.183*t547;
  t1174 = 0. + t852;
  t2122 = -0.047*t1905;
  t2335 = 0. + t2122;
  t4403 = -1.*t4063;
  t4520 = 1. + t4403;
  t4614 = 0.047*t4520;
  t4723 = 0. + t4614;
  t7294 = t3393*t2550*t2783;
  t7302 = t1608*t3424;
  t7309 = t7294 + t7302;
  t7376 = -1.*t2550*t1608;
  t7518 = t3393*t2783*t3424;
  t7528 = t7376 + t7518;
  t6281 = -0.183*t6123;
  t6326 = 0. + t6281;
  t7596 = t4063*t7309;
  t7599 = -1.*t1905*t7528;
  t7600 = t7596 + t7599;
  t7697 = t4063*t3393*t1396*t2550;
  t7701 = -1.*t3393*t1396*t1905*t3424;
  t7703 = t7697 + t7701;
  t7742 = t4063*t1396*t2550*t1608;
  t7745 = -1.*t1396*t1905*t1608*t3424;
  t7746 = t7742 + t7745;
  t7971 = -1.*t4063*t2550*t2783;
  t7985 = t1905*t2783*t3424;
  t8025 = t7971 + t7985;
  t8120 = t2550*t1608;
  t8147 = -1.*t3393*t2783*t3424;
  t8183 = t8120 + t8147;
  t8223 = -1.*t1905*t7309;
  t8232 = t4063*t8183;
  t8286 = t8223 + t8232;
  t8437 = t2550*t1608*t2783;
  t8440 = -1.*t3393*t3424;
  t8443 = t8437 + t8440;
  t5746 = t4063*t5283;
  t8550 = -1.*t1905*t8443;
  t8585 = t8550 + t5746;
  t8760 = -1.*t1396*t2550*t1905;
  t8823 = -1.*t4063*t1396*t3424;
  t8856 = t8760 + t8823;
  t8950 = -1.*t4063*t7528;
  t8967 = t8223 + t8950;
  t9073 = t3393*t2550;
  t9097 = t1608*t2783*t3424;
  t9109 = t9073 + t9097;
  t9142 = -1.*t4063*t9109;
  t9150 = t8550 + t9142;
  t8637 = t4063*t8443;
  t8876 = t6326*t8856;
  t8885 = 0.183*t6123*t8856;
  t8922 = t4063*t1396*t2550;
  t8923 = -1.*t1396*t1905*t3424;
  t8925 = t8922 + t8923;
  t8926 = 0.11079*t8925;
  t9176 = -1.*t1905*t9109;
  t9178 = t8637 + t9176;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=-1.*t1174*t1396*t1608 + t2335*t3619 + t4723*t5283 + 0.11079*(t1905*t3619 + t5746) + t6326*t6828 - 0.183*(-1.*t10*t1396*t1608 - 1.*t6123*t6828);
  p_output1(10)=t1174*t1396*t3393 + t2335*t7309 + t4723*t7528 + 0.11079*(t1905*t7309 + t4063*t7528) + t6326*t7600 - 0.183*(t10*t1396*t3393 - 1.*t6123*t7600);
  p_output1(11)=0;
  p_output1(12)=t1396*t2335*t2550*t3393 - 1.*t1174*t2783*t3393 + 0.11079*(t1396*t1905*t2550*t3393 + t1396*t3393*t3424*t4063) + t1396*t3393*t3424*t4723 + t6326*t7703 - 0.183*(-1.*t10*t2783*t3393 - 1.*t6123*t7703);
  p_output1(13)=t1396*t1608*t2335*t2550 - 1.*t1174*t1608*t2783 + 0.11079*(t1396*t1608*t1905*t2550 + t1396*t1608*t3424*t4063) + t1396*t1608*t3424*t4723 + t6326*t7746 - 0.183*(-1.*t10*t1608*t2783 - 1.*t6123*t7746);
  p_output1(14)=-1.*t1174*t1396 - 1.*t2335*t2550*t2783 + 0.11079*(-1.*t1905*t2550*t2783 - 1.*t2783*t3424*t4063) - 1.*t2783*t3424*t4723 + t6326*t8025 - 0.183*(-1.*t10*t1396 - 1.*t6123*t8025);
  p_output1(15)=t4723*t7309 + t2335*t8183 + 0.11079*(t7596 + t1905*t8183) + 0.183*t6123*t8286 + t6326*t8286;
  p_output1(16)=t2335*t5283 + t4723*t8443 + 0.183*t6123*t8585 + t6326*t8585 + 0.11079*(t1905*t5283 + t8637);
  p_output1(17)=-1.*t1396*t2335*t3424 + t1396*t2550*t4723 + t8876 + t8885 + t8926;
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
  p_output1(45)=-0.047*t4063*t7309 + 0.047*t1905*t7528 + 0.11079*t7600 + 0.183*t6123*t8967 + t6326*t8967;
  p_output1(46)=-0.047*t4063*t8443 + 0.047*t1905*t9109 + 0.183*t6123*t9150 + t6326*t9150 + 0.11079*t9178;
  p_output1(47)=0.047*t1396*t1905*t3424 - 0.047*t1396*t2550*t4063 + t8876 + t8885 + t8926;
  p_output1(48)=-0.183*t1396*t3393*t6123 - 0.183*t10*t7600 - 0.183*(-1.*t1396*t3393*t6123 - 1.*t10*t7600);
  p_output1(49)=-0.183*t1396*t1608*t6123 - 0.183*t10*t9178 - 0.183*(-1.*t1396*t1608*t6123 - 1.*t10*t9178);
  p_output1(50)=0.183*t2783*t6123 - 0.183*t10*t8925 - 0.183*(t2783*t6123 - 1.*t10*t8925);
  p_output1(51)=0;
  p_output1(52)=0;
  p_output1(53)=0;
}


       
Eigen::Matrix<double,3,18> Jp_RL_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void Jp_RL_thigh_joint(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



