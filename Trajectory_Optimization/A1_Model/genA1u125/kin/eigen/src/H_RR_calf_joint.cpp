/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:21:30 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RR_calf_joint.h"

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
  double t421;
  double t768;
  double t929;
  double t815;
  double t949;
  double t592;
  double t504;
  double t532;
  double t685;
  double t876;
  double t1028;
  double t1034;
  double t1057;
  double t1070;
  double t1147;
  double t1150;
  double t1164;
  double t1260;
  double t1511;
  double t282;
  double t1677;
  double t2104;
  double t2121;
  double t2143;
  double t2174;
  double t2198;
  double t2200;
  double t2205;
  double t2206;
  double t2227;
  double t2415;
  double t2441;
  double t2484;
  double t538;
  double t1628;
  double t1633;
  double t1819;
  double t1929;
  double t1932;
  double t1974;
  double t2260;
  double t2278;
  double t2317;
  double t2345;
  double t2352;
  double t2391;
  double t2485;
  double t2533;
  double t2631;
  double t2640;
  double t2655;
  double t2718;
  double t2784;
  double t2807;
  double t3511;
  double t3543;
  double t1656;
  double t1942;
  double t1959;
  double t3077;
  double t3103;
  double t3120;
  double t3184;
  double t3208;
  double t3211;
  double t3265;
  double t3292;
  double t3301;
  double t3384;
  double t3388;
  double t3411;
  double t3412;
  double t2871;
  double t2959;
  double t2970;
  double t3443;
  double t3504;
  double t3576;
  double t3600;
  double t3609;
  double t3611;
  double t3647;
  double t3711;
  double t2310;
  double t2360;
  double t2368;
  double t3125;
  double t3130;
  double t3142;
  double t2994;
  double t3021;
  double t3043;
  double t2553;
  double t2705;
  double t2714;
  double t3148;
  double t3159;
  double t3164;
  t421 = Cos(var1[3]);
  t768 = Cos(var1[5]);
  t929 = Sin(var1[3]);
  t815 = Sin(var1[4]);
  t949 = Sin(var1[5]);
  t592 = Cos(var1[13]);
  t504 = Cos(var1[4]);
  t532 = Sin(var1[13]);
  t685 = Cos(var1[12]);
  t876 = t421*t768*t815;
  t1028 = t929*t949;
  t1034 = t876 + t1028;
  t1057 = t685*t1034;
  t1070 = Sin(var1[12]);
  t1147 = -1.*t768*t929;
  t1150 = t421*t815*t949;
  t1164 = t1147 + t1150;
  t1260 = -1.*t1070*t1164;
  t1511 = t1057 + t1260;
  t282 = Sin(var1[14]);
  t1677 = Cos(var1[14]);
  t2104 = t768*t929*t815;
  t2121 = -1.*t421*t949;
  t2143 = t2104 + t2121;
  t2174 = t685*t2143;
  t2198 = t421*t768;
  t2200 = t929*t815*t949;
  t2205 = t2198 + t2200;
  t2206 = -1.*t1070*t2205;
  t2227 = t2174 + t2206;
  t2415 = t685*t504*t768;
  t2441 = -1.*t504*t1070*t949;
  t2484 = t2415 + t2441;
  t538 = t421*t504*t532;
  t1628 = t592*t1511;
  t1633 = t538 + t1628;
  t1819 = t592*t421*t504;
  t1929 = -1.*t532*t1511;
  t1932 = t1819 + t1929;
  t1974 = t504*t532*t929;
  t2260 = t592*t2227;
  t2278 = t1974 + t2260;
  t2317 = t592*t504*t929;
  t2345 = -1.*t532*t2227;
  t2352 = t2317 + t2345;
  t2391 = -1.*t532*t815;
  t2485 = t592*t2484;
  t2533 = t2391 + t2485;
  t2631 = -1.*t592*t815;
  t2640 = -1.*t532*t2484;
  t2655 = t2631 + t2640;
  t2718 = t1070*t1034;
  t2784 = t685*t1164;
  t2807 = t2718 + t2784;
  t3511 = -1.*t1677;
  t3543 = 1. + t3511;
  t1656 = -1.*t282*t1633;
  t1942 = t1677*t1932;
  t1959 = t1656 + t1942;
  t3077 = t1677*t1633;
  t3103 = t282*t1932;
  t3120 = t3077 + t3103;
  t3184 = -1.*t592;
  t3208 = 1. + t3184;
  t3211 = -0.183*t3208;
  t3265 = 0. + t3211;
  t3292 = 0.047*t1070;
  t3301 = 0. + t3292;
  t3384 = -1.*t685;
  t3388 = 1. + t3384;
  t3411 = -0.047*t3388;
  t3412 = 0. + t3411;
  t2871 = t1070*t2143;
  t2959 = t685*t2205;
  t2970 = t2871 + t2959;
  t3443 = -0.183*t532;
  t3504 = 0. + t3443;
  t3576 = -0.25*t3543;
  t3600 = -0.183*t282;
  t3609 = 0. + t3576 + t3600;
  t3611 = -0.183*t3543;
  t3647 = 0.25*t282;
  t3711 = 0. + t3611 + t3647;
  t2310 = -1.*t282*t2278;
  t2360 = t1677*t2352;
  t2368 = t2310 + t2360;
  t3125 = t1677*t2278;
  t3130 = t282*t2352;
  t3142 = t3125 + t3130;
  t2994 = t504*t768*t1070;
  t3021 = t685*t504*t949;
  t3043 = t2994 + t3021;
  t2553 = -1.*t282*t2533;
  t2705 = t1677*t2655;
  t2714 = t2553 + t2705;
  t3148 = t1677*t2533;
  t3159 = t282*t2655;
  t3164 = t3148 + t3159;

  p_output1(0)=t1959;
  p_output1(1)=t2368;
  p_output1(2)=t2714;
  p_output1(3)=0.;
  p_output1(4)=t2807;
  p_output1(5)=t2970;
  p_output1(6)=t3043;
  p_output1(7)=0.;
  p_output1(8)=t3120;
  p_output1(9)=t3142;
  p_output1(10)=t3164;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.183*t1959 - 0.15331*t2807 - 0.25*t3120 + t1034*t3301 + t1164*t3412 + t1511*t3504 + t1633*t3609 + t1932*t3711 + t3265*t421*t504 + var1(0);
  p_output1(13)=0. - 0.183*t2368 - 0.15331*t2970 - 0.25*t3142 + t2143*t3301 + t2205*t3412 + t2227*t3504 + t2278*t3609 + t2352*t3711 + t3265*t504*t929 + var1(1);
  p_output1(14)=0. - 0.183*t2714 - 0.15331*t3043 - 0.25*t3164 + t2484*t3504 + t2533*t3609 + t2655*t3711 + t3301*t504*t768 - 1.*t3265*t815 + t3412*t504*t949 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_RR_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void H_RR_calf_joint(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



