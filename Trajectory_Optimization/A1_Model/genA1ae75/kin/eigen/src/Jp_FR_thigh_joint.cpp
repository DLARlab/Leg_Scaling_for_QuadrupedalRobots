/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:51:31 GMT-05:00
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
  double t1506;
  double t1954;
  double t1985;
  double t1951;
  double t1987;
  double t1573;
  double t1959;
  double t2022;
  double t2043;
  double t2060;
  double t2064;
  double t2090;
  double t2100;
  double t168;
  double t679;
  double t2138;
  double t2174;
  double t2183;
  double t2355;
  double t744;
  double t881;
  double t981;
  double t1193;
  double t1603;
  double t1700;
  double t1718;
  double t1935;
  double t2105;
  double t2111;
  double t2419;
  double t2427;
  double t2429;
  double t2432;
  double t2433;
  double t2438;
  double t2366;
  double t2373;
  double t2473;
  double t2477;
  double t2480;
  double t2570;
  double t2575;
  double t2576;
  double t2619;
  double t2633;
  double t2636;
  double t2702;
  double t2704;
  double t2712;
  double t2761;
  double t2765;
  double t2767;
  double t2788;
  double t2794;
  double t2795;
  double t2812;
  double t2816;
  double t2817;
  double t2115;
  double t2889;
  double t2894;
  double t2929;
  double t2936;
  double t2946;
  double t2976;
  double t2982;
  double t2865;
  double t2996;
  double t3002;
  double t3003;
  double t3017;
  double t3021;
  double t2922;
  double t2923;
  double t2924;
  double t2925;
  double t2954;
  double t2960;
  double t3006;
  double t3011;
  t1506 = Sin(var1[3]);
  t1954 = Cos(var1[5]);
  t1985 = Sin(var1[4]);
  t1951 = Cos(var1[3]);
  t1987 = Sin(var1[5]);
  t1573 = Cos(var1[6]);
  t1959 = -1.*t1951*t1954;
  t2022 = -1.*t1506*t1985*t1987;
  t2043 = t1959 + t2022;
  t2060 = -1.*t1954*t1506*t1985;
  t2064 = t1951*t1987;
  t2090 = t2060 + t2064;
  t2100 = Sin(var1[6]);
  t168 = Cos(var1[4]);
  t679 = Cos(var1[7]);
  t2138 = t1573*t2090;
  t2174 = -1.*t2043*t2100;
  t2183 = t2138 + t2174;
  t2355 = Sin(var1[7]);
  t744 = -1.*t679;
  t881 = 1. + t744;
  t981 = 0.183*t881;
  t1193 = 0. + t981;
  t1603 = -1.*t1573;
  t1700 = 1. + t1603;
  t1718 = -0.047*t1700;
  t1935 = 0. + t1718;
  t2105 = 0.047*t2100;
  t2111 = 0. + t2105;
  t2419 = -1.*t1954*t1506;
  t2427 = t1951*t1985*t1987;
  t2429 = t2419 + t2427;
  t2432 = t1951*t1954*t1985;
  t2433 = t1506*t1987;
  t2438 = t2432 + t2433;
  t2366 = 0.183*t2355;
  t2373 = 0. + t2366;
  t2473 = t1573*t2438;
  t2477 = -1.*t2429*t2100;
  t2480 = t2473 + t2477;
  t2570 = t1951*t168*t1954*t1573;
  t2575 = -1.*t1951*t168*t1987*t2100;
  t2576 = t2570 + t2575;
  t2619 = t168*t1954*t1573*t1506;
  t2633 = -1.*t168*t1506*t1987*t2100;
  t2636 = t2619 + t2633;
  t2702 = -1.*t1954*t1573*t1985;
  t2704 = t1985*t1987*t2100;
  t2712 = t2702 + t2704;
  t2761 = t1954*t1506;
  t2765 = -1.*t1951*t1985*t1987;
  t2767 = t2761 + t2765;
  t2788 = t1573*t2767;
  t2794 = -1.*t2438*t2100;
  t2795 = t2788 + t2794;
  t2812 = t1954*t1506*t1985;
  t2816 = -1.*t1951*t1987;
  t2817 = t2812 + t2816;
  t2115 = t1573*t2043;
  t2889 = -1.*t2817*t2100;
  t2894 = t2115 + t2889;
  t2929 = -1.*t168*t1573*t1987;
  t2936 = -1.*t168*t1954*t2100;
  t2946 = t2929 + t2936;
  t2976 = -1.*t1573*t2429;
  t2982 = t2976 + t2794;
  t2865 = t1573*t2817;
  t2996 = t1951*t1954;
  t3002 = t1506*t1985*t1987;
  t3003 = t2996 + t3002;
  t3017 = -1.*t1573*t3003;
  t3021 = t3017 + t2889;
  t2922 = t168*t1954*t1573;
  t2923 = -1.*t168*t1987*t2100;
  t2924 = t2922 + t2923;
  t2925 = -0.13205*t2924;
  t2954 = t2946*t2373;
  t2960 = -0.183*t2946*t2355;
  t3006 = -1.*t3003*t2100;
  t3011 = t2865 + t3006;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=-1.*t1193*t1506*t168 + t1935*t2043 + t2090*t2111 - 0.13205*(t2090*t2100 + t2115) + t2183*t2373 + 0.183*(-1.*t2183*t2355 - 1.*t1506*t168*t679);
  p_output1(10)=t1193*t168*t1951 + t1935*t2429 + t2111*t2438 - 0.13205*(t1573*t2429 + t2100*t2438) + t2373*t2480 + 0.183*(-1.*t2355*t2480 + t168*t1951*t679);
  p_output1(11)=0;
  p_output1(12)=-1.*t1193*t1951*t1985 + t168*t1935*t1951*t1987 - 0.13205*(t1573*t168*t1951*t1987 + t168*t1951*t1954*t2100) + t168*t1951*t1954*t2111 + t2373*t2576 + 0.183*(-1.*t2355*t2576 - 1.*t1951*t1985*t679);
  p_output1(13)=-1.*t1193*t1506*t1985 + t1506*t168*t1935*t1987 - 0.13205*(t1506*t1573*t168*t1987 + t1506*t168*t1954*t2100) + t1506*t168*t1954*t2111 + t2373*t2636 + 0.183*(-1.*t2355*t2636 - 1.*t1506*t1985*t679);
  p_output1(14)=-1.*t1193*t168 - 1.*t1935*t1985*t1987 - 0.13205*(-1.*t1573*t1985*t1987 - 1.*t1954*t1985*t2100) - 1.*t1954*t1985*t2111 + t2373*t2712 + 0.183*(-1.*t2355*t2712 - 1.*t168*t679);
  p_output1(15)=t1935*t2438 + t2111*t2767 - 0.13205*(t2473 + t2100*t2767) - 0.183*t2355*t2795 + t2373*t2795;
  p_output1(16)=t2043*t2111 + t1935*t2817 - 0.13205*(t2043*t2100 + t2865) - 0.183*t2355*t2894 + t2373*t2894;
  p_output1(17)=t168*t1935*t1954 - 1.*t168*t1987*t2111 + t2925 + t2954 + t2960;
  p_output1(18)=-0.047*t2100*t2429 + 0.047*t1573*t2438 - 0.13205*t2480 - 0.183*t2355*t2982 + t2373*t2982;
  p_output1(19)=0.047*t1573*t2817 - 0.047*t2100*t3003 - 0.13205*t3011 - 0.183*t2355*t3021 + t2373*t3021;
  p_output1(20)=0.047*t1573*t168*t1954 - 0.047*t168*t1987*t2100 + t2925 + t2954 + t2960;
  p_output1(21)=0.183*t168*t1951*t2355 + 0.183*t2480*t679 + 0.183*(-1.*t168*t1951*t2355 - 1.*t2480*t679);
  p_output1(22)=0.183*t1506*t168*t2355 + 0.183*t3011*t679 + 0.183*(-1.*t1506*t168*t2355 - 1.*t3011*t679);
  p_output1(23)=-0.183*t1985*t2355 + 0.183*t2924*t679 + 0.183*(t1985*t2355 - 1.*t2924*t679);
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



