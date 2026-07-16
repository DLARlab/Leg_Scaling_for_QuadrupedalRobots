/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:21:44 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RRfoot.h"

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
  double t408;
  double t707;
  double t596;
  double t655;
  double t758;
  double t476;
  double t681;
  double t761;
  double t831;
  double t999;
  double t1399;
  double t1427;
  double t1527;
  double t391;
  double t1893;
  double t6;
  double t1963;
  double t2063;
  double t2251;
  double t2448;
  double t2490;
  double t2524;
  double t2579;
  double t2879;
  double t2889;
  double t2894;
  double t3151;
  double t3174;
  double t3175;
  double t67;
  double t232;
  double t248;
  double t359;
  double t499;
  double t503;
  double t1006;
  double t1151;
  double t1224;
  double t1259;
  double t3679;
  double t3701;
  double t3702;
  double t3793;
  double t3817;
  double t3821;
  double t1906;
  double t1925;
  double t2572;
  double t2828;
  double t2829;
  double t4388;
  double t4409;
  double t4441;
  double t2972;
  double t3010;
  double t3042;
  double t4676;
  double t4727;
  double t4959;
  double t4991;
  double t5173;
  double t5298;
  double t6932;
  double t6933;
  double t6969;
  double t7086;
  double t7183;
  double t7256;
  double t7321;
  double t7396;
  double t7404;
  double t7654;
  double t7668;
  double t7702;
  double t7727;
  double t7745;
  double t7838;
  double t7872;
  double t7941;
  double t7952;
  double t8254;
  double t8304;
  double t8315;
  double t8355;
  double t8363;
  double t8396;
  double t8418;
  double t8436;
  double t8438;
  double t8571;
  double t8575;
  double t8600;
  double t8638;
  double t8649;
  double t8650;
  double t8713;
  double t8747;
  double t8749;
  double t1713;
  double t8802;
  double t8813;
  double t9046;
  double t9047;
  double t9051;
  double t9160;
  double t9168;
  double t9287;
  double t9297;
  double t9299;
  double t9312;
  double t9323;
  double t8900;
  double t9052;
  double t9053;
  double t9056;
  double t9059;
  double t9069;
  double t9076;
  double t9081;
  double t9086;
  double t9100;
  double t9105;
  double t9121;
  double t9124;
  double t9125;
  double t9131;
  double t9142;
  double t9540;
  double t9555;
  double t9573;
  double t5561;
  double t9376;
  double t9378;
  double t9777;
  double t9785;
  double t9801;
  double t9802;
  double t9839;
  double t9875;
  double t9876;
  double t9878;
  double t9888;
  double t9889;
  double t9892;
  double t5459;
  double t5576;
  double t9620;
  double t9908;
  double t9909;
  double t9910;
  double t9913;
  double t9916;
  double t9928;
  double t9929;
  double t9930;
  double t9855;
  double t9864;
  double t9944;
  double t9947;
  double t9948;
  double t9898;
  double t9903;
  t408 = Sin(var1[3]);
  t707 = Cos(var1[3]);
  t596 = Cos(var1[5]);
  t655 = Sin(var1[4]);
  t758 = Sin(var1[5]);
  t476 = Sin(var1[12]);
  t681 = -1.*t596*t408*t655;
  t761 = t707*t758;
  t831 = t681 + t761;
  t999 = Cos(var1[12]);
  t1399 = -1.*t707*t596;
  t1427 = -1.*t408*t655*t758;
  t1527 = t1399 + t1427;
  t391 = Cos(var1[4]);
  t1893 = Sin(var1[13]);
  t6 = Cos(var1[13]);
  t1963 = t999*t831;
  t2063 = -1.*t476*t1527;
  t2251 = t1963 + t2063;
  t2448 = Cos(var1[14]);
  t2490 = -1.*t2448;
  t2524 = 1. + t2490;
  t2579 = Sin(var1[14]);
  t2879 = -1.*t391*t1893*t408;
  t2889 = t6*t2251;
  t2894 = t2879 + t2889;
  t3151 = -1.*t6*t391*t408;
  t3174 = -1.*t1893*t2251;
  t3175 = t3151 + t3174;
  t67 = -1.*t6;
  t232 = 1. + t67;
  t248 = -0.183*t232;
  t359 = 0. + t248;
  t499 = 0.047*t476;
  t503 = 0. + t499;
  t1006 = -1.*t999;
  t1151 = 1. + t1006;
  t1224 = -0.047*t1151;
  t1259 = 0. + t1224;
  t3679 = t707*t596*t655;
  t3701 = t408*t758;
  t3702 = t3679 + t3701;
  t3793 = -1.*t596*t408;
  t3817 = t707*t655*t758;
  t3821 = t3793 + t3817;
  t1906 = -0.183*t1893;
  t1925 = 0. + t1906;
  t2572 = -0.25*t2524;
  t2828 = -0.183*t2579;
  t2829 = 0. + t2572 + t2828;
  t4388 = t999*t3702;
  t4409 = -1.*t476*t3821;
  t4441 = t4388 + t4409;
  t2972 = -0.183*t2524;
  t3010 = 0.25*t2579;
  t3042 = 0. + t2972 + t3010;
  t4676 = t707*t391*t1893;
  t4727 = t6*t4441;
  t4959 = t4676 + t4727;
  t4991 = t6*t707*t391;
  t5173 = -1.*t1893*t4441;
  t5298 = t4991 + t5173;
  t6932 = t999*t707*t391*t596;
  t6933 = -1.*t707*t391*t476*t758;
  t6969 = t6932 + t6933;
  t7086 = -1.*t707*t1893*t655;
  t7183 = t6*t6969;
  t7256 = t7086 + t7183;
  t7321 = -1.*t6*t707*t655;
  t7396 = -1.*t1893*t6969;
  t7404 = t7321 + t7396;
  t7654 = t999*t391*t596*t408;
  t7668 = -1.*t391*t476*t408*t758;
  t7702 = t7654 + t7668;
  t7727 = -1.*t1893*t408*t655;
  t7745 = t6*t7702;
  t7838 = t7727 + t7745;
  t7872 = -1.*t6*t408*t655;
  t7941 = -1.*t1893*t7702;
  t7952 = t7872 + t7941;
  t8254 = -1.*t999*t596*t655;
  t8304 = t476*t655*t758;
  t8315 = t8254 + t8304;
  t8355 = -1.*t391*t1893;
  t8363 = t6*t8315;
  t8396 = t8355 + t8363;
  t8418 = -1.*t6*t391;
  t8436 = -1.*t1893*t8315;
  t8438 = t8418 + t8436;
  t8571 = t596*t408;
  t8575 = -1.*t707*t655*t758;
  t8600 = t8571 + t8575;
  t8638 = -1.*t476*t3702;
  t8649 = t999*t8600;
  t8650 = t8638 + t8649;
  t8713 = t596*t408*t655;
  t8747 = -1.*t707*t758;
  t8749 = t8713 + t8747;
  t1713 = t999*t1527;
  t8802 = -1.*t476*t8749;
  t8813 = t8802 + t1713;
  t9046 = -1.*t391*t596*t476;
  t9047 = -1.*t999*t391*t758;
  t9051 = t9046 + t9047;
  t9160 = -1.*t999*t3821;
  t9168 = t8638 + t9160;
  t9287 = t707*t596;
  t9297 = t408*t655*t758;
  t9299 = t9287 + t9297;
  t9312 = -1.*t999*t9299;
  t9323 = t8802 + t9312;
  t8900 = t999*t8749;
  t9052 = t1925*t9051;
  t9053 = t6*t2829*t9051;
  t9056 = -1.*t1893*t3042*t9051;
  t9059 = t999*t391*t596;
  t9069 = -1.*t391*t476*t758;
  t9076 = t9059 + t9069;
  t9081 = -0.15331*t9076;
  t9086 = -1.*t2448*t1893*t9051;
  t9100 = -1.*t6*t2579*t9051;
  t9105 = t9086 + t9100;
  t9121 = -0.183*t9105;
  t9124 = t6*t2448*t9051;
  t9125 = -1.*t1893*t2579*t9051;
  t9131 = t9124 + t9125;
  t9142 = -0.5*t9131;
  t9540 = -1.*t707*t391*t1893;
  t9555 = -1.*t6*t4441;
  t9573 = t9540 + t9555;
  t5561 = t2448*t5298;
  t9376 = -1.*t476*t9299;
  t9378 = t8900 + t9376;
  t9777 = -1.*t6*t9378;
  t9785 = t2879 + t9777;
  t9801 = t6*t391*t408;
  t9802 = -1.*t1893*t9378;
  t9839 = t9801 + t9802;
  t9875 = t1893*t655;
  t9876 = -1.*t6*t9076;
  t9878 = t9875 + t9876;
  t9888 = -1.*t6*t655;
  t9889 = -1.*t1893*t9076;
  t9892 = t9888 + t9889;
  t5459 = -1.*t2579*t4959;
  t5576 = t5459 + t5561;
  t9620 = -1.*t2579*t5298;
  t9908 = -0.183*t2448;
  t9909 = -0.25*t2579;
  t9910 = t9908 + t9909;
  t9913 = 0.25*t2448;
  t9916 = t9913 + t2828;
  t9928 = t391*t1893*t408;
  t9929 = t6*t9378;
  t9930 = t9928 + t9929;
  t9855 = t2448*t9839;
  t9864 = -1.*t2579*t9839;
  t9944 = -1.*t1893*t655;
  t9947 = t6*t9076;
  t9948 = t9944 + t9947;
  t9898 = t2448*t9892;
  t9903 = -1.*t2579*t9892;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t1259*t1527 + t1925*t2251 + t2829*t2894 + t3042*t3175 - 0.183*(-1.*t2579*t2894 + t2448*t3175) - 0.5*(t2448*t2894 + t2579*t3175) - 1.*t359*t391*t408 + t503*t831 - 0.15331*(t1713 + t476*t831);
  p_output1(10)=t1259*t3821 + t1925*t4441 + t2829*t4959 + t3702*t503 + t3042*t5298 - 0.5*(t2448*t4959 + t2579*t5298) - 0.183*t5576 + t359*t391*t707 - 0.15331*(t3702*t476 + t3821*t999);
  p_output1(11)=0;
  p_output1(12)=t1925*t6969 + t391*t503*t596*t707 - 1.*t359*t655*t707 + t2829*t7256 + t3042*t7404 - 0.183*(-1.*t2579*t7256 + t2448*t7404) - 0.5*(t2448*t7256 + t2579*t7404) + t1259*t391*t707*t758 - 0.15331*(t391*t476*t596*t707 + t391*t707*t758*t999);
  p_output1(13)=t391*t408*t503*t596 - 1.*t359*t408*t655 + t1259*t391*t408*t758 + t1925*t7702 + t2829*t7838 + t3042*t7952 - 0.183*(-1.*t2579*t7838 + t2448*t7952) - 0.5*(t2448*t7838 + t2579*t7952) - 0.15331*(t391*t408*t476*t596 + t391*t408*t758*t999);
  p_output1(14)=-1.*t359*t391 - 1.*t503*t596*t655 - 1.*t1259*t655*t758 + t1925*t8315 + t2829*t8396 + t3042*t8438 - 0.183*(-1.*t2579*t8396 + t2448*t8438) - 0.5*(t2448*t8396 + t2579*t8438) - 0.15331*(-1.*t476*t596*t655 - 1.*t655*t758*t999);
  p_output1(15)=t1259*t3702 + t503*t8600 - 0.15331*(t4388 + t476*t8600) + t1925*t8650 - 1.*t1893*t3042*t8650 + t2829*t6*t8650 - 0.5*(-1.*t1893*t2579*t8650 + t2448*t6*t8650) - 0.183*(-1.*t1893*t2448*t8650 - 1.*t2579*t6*t8650);
  p_output1(16)=t1527*t503 + t1259*t8749 + t1925*t8813 - 1.*t1893*t3042*t8813 + t2829*t6*t8813 - 0.5*(-1.*t1893*t2579*t8813 + t2448*t6*t8813) - 0.183*(-1.*t1893*t2448*t8813 - 1.*t2579*t6*t8813) - 0.15331*(t1527*t476 + t8900);
  p_output1(17)=t1259*t391*t596 - 1.*t391*t503*t758 + t9052 + t9053 + t9056 + t9081 + t9121 + t9142;
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
  p_output1(36)=-0.15331*t4441 - 0.047*t3821*t476 + t1925*t9168 - 1.*t1893*t3042*t9168 + t2829*t6*t9168 - 0.5*(-1.*t1893*t2579*t9168 + t2448*t6*t9168) - 0.183*(-1.*t1893*t2448*t9168 - 1.*t2579*t6*t9168) + 0.047*t3702*t999;
  p_output1(37)=-0.047*t476*t9299 + t1925*t9323 - 1.*t1893*t3042*t9323 + t2829*t6*t9323 - 0.5*(-1.*t1893*t2579*t9323 + t2448*t6*t9323) - 0.183*(-1.*t1893*t2448*t9323 - 1.*t2579*t6*t9323) - 0.15331*t9378 + 0.047*t8749*t999;
  p_output1(38)=-0.047*t391*t476*t758 + t9052 + t9053 + t9056 + t9081 + t9121 + t9142 + 0.047*t391*t596*t999;
  p_output1(39)=t2829*t5298 - 0.183*t4441*t6 - 0.183*t1893*t391*t707 + t3042*t9573 - 0.5*(t5561 + t2579*t9573) - 0.183*(t2448*t9573 + t9620);
  p_output1(40)=-0.183*t1893*t391*t408 - 0.183*t6*t9378 + t3042*t9785 + t2829*t9839 - 0.5*(t2579*t9785 + t9855) - 0.183*(t2448*t9785 + t9864);
  p_output1(41)=0.183*t1893*t655 - 0.183*t6*t9076 + t3042*t9878 + t2829*t9892 - 0.5*(t2579*t9878 + t9898) - 0.183*(t2448*t9878 + t9903);
  p_output1(42)=-0.5*t5576 - 0.183*(-1.*t2448*t4959 + t9620) + t4959*t9910 + t5298*t9916;
  p_output1(43)=t9839*t9916 + t9910*t9930 - 0.183*(t9864 - 1.*t2448*t9930) - 0.5*(t9855 - 1.*t2579*t9930);
  p_output1(44)=t9892*t9916 + t9910*t9948 - 0.183*(t9903 - 1.*t2448*t9948) - 0.5*(t9898 - 1.*t2579*t9948);
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


       
Eigen::Matrix<double,3,18> Jp_RRfoot(const Eigen::Matrix<double,18,1> &var1)
//void Jp_RRfoot(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



