/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:13:57 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RL_calf_joint.h"

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
  double t441;
  double t1713;
  double t2028;
  double t1771;
  double t2094;
  double t1439;
  double t763;
  double t1113;
  double t1637;
  double t1854;
  double t2101;
  double t2264;
  double t2323;
  double t2331;
  double t2340;
  double t2341;
  double t2365;
  double t2474;
  double t2563;
  double t299;
  double t2697;
  double t2726;
  double t2727;
  double t2728;
  double t2729;
  double t2730;
  double t2736;
  double t2737;
  double t2740;
  double t2742;
  double t2875;
  double t2894;
  double t2896;
  double t1358;
  double t2571;
  double t2612;
  double t2701;
  double t2705;
  double t2706;
  double t2715;
  double t2744;
  double t2761;
  double t2796;
  double t2822;
  double t2844;
  double t2864;
  double t2971;
  double t2976;
  double t3185;
  double t3251;
  double t3254;
  double t3317;
  double t3326;
  double t3395;
  double t4426;
  double t4463;
  double t2652;
  double t2708;
  double t2710;
  double t3580;
  double t3582;
  double t3587;
  double t3713;
  double t3718;
  double t3722;
  double t3726;
  double t3776;
  double t3824;
  double t3869;
  double t3874;
  double t3926;
  double t4209;
  double t3522;
  double t3526;
  double t3530;
  double t4302;
  double t4383;
  double t4545;
  double t4577;
  double t4752;
  double t4761;
  double t4788;
  double t4905;
  double t2787;
  double t2861;
  double t2863;
  double t3625;
  double t3626;
  double t3641;
  double t3533;
  double t3569;
  double t3574;
  double t3012;
  double t3257;
  double t3268;
  double t3682;
  double t3693;
  double t3712;
  t441 = Cos(var1[3]);
  t1713 = Cos(var1[5]);
  t2028 = Sin(var1[3]);
  t1771 = Sin(var1[4]);
  t2094 = Sin(var1[5]);
  t1439 = Cos(var1[16]);
  t763 = Cos(var1[4]);
  t1113 = Sin(var1[16]);
  t1637 = Cos(var1[15]);
  t1854 = t441*t1713*t1771;
  t2101 = t2028*t2094;
  t2264 = t1854 + t2101;
  t2323 = t1637*t2264;
  t2331 = Sin(var1[15]);
  t2340 = -1.*t1713*t2028;
  t2341 = t441*t1771*t2094;
  t2365 = t2340 + t2341;
  t2474 = -1.*t2331*t2365;
  t2563 = t2323 + t2474;
  t299 = Sin(var1[17]);
  t2697 = Cos(var1[17]);
  t2726 = t1713*t2028*t1771;
  t2727 = -1.*t441*t2094;
  t2728 = t2726 + t2727;
  t2729 = t1637*t2728;
  t2730 = t441*t1713;
  t2736 = t2028*t1771*t2094;
  t2737 = t2730 + t2736;
  t2740 = -1.*t2331*t2737;
  t2742 = t2729 + t2740;
  t2875 = t1637*t763*t1713;
  t2894 = -1.*t763*t2331*t2094;
  t2896 = t2875 + t2894;
  t1358 = t441*t763*t1113;
  t2571 = t1439*t2563;
  t2612 = t1358 + t2571;
  t2701 = t1439*t441*t763;
  t2705 = -1.*t1113*t2563;
  t2706 = t2701 + t2705;
  t2715 = t763*t1113*t2028;
  t2744 = t1439*t2742;
  t2761 = t2715 + t2744;
  t2796 = t1439*t763*t2028;
  t2822 = -1.*t1113*t2742;
  t2844 = t2796 + t2822;
  t2864 = -1.*t1113*t1771;
  t2971 = t1439*t2896;
  t2976 = t2864 + t2971;
  t3185 = -1.*t1439*t1771;
  t3251 = -1.*t1113*t2896;
  t3254 = t3185 + t3251;
  t3317 = t2331*t2264;
  t3326 = t1637*t2365;
  t3395 = t3317 + t3326;
  t4426 = -1.*t2697;
  t4463 = 1. + t4426;
  t2652 = -1.*t299*t2612;
  t2708 = t2697*t2706;
  t2710 = t2652 + t2708;
  t3580 = t2697*t2612;
  t3582 = t299*t2706;
  t3587 = t3580 + t3582;
  t3713 = -1.*t1439;
  t3718 = 1. + t3713;
  t3722 = -0.183*t3718;
  t3726 = 0. + t3722;
  t3776 = -0.047*t2331;
  t3824 = 0. + t3776;
  t3869 = -1.*t1637;
  t3874 = 1. + t3869;
  t3926 = 0.047*t3874;
  t4209 = 0. + t3926;
  t3522 = t2331*t2728;
  t3526 = t1637*t2737;
  t3530 = t3522 + t3526;
  t4302 = -0.183*t1113;
  t4383 = 0. + t4302;
  t4545 = -0.1*t4463;
  t4577 = -0.183*t299;
  t4752 = 0. + t4545 + t4577;
  t4761 = -0.183*t4463;
  t4788 = 0.1*t299;
  t4905 = 0. + t4761 + t4788;
  t2787 = -1.*t299*t2761;
  t2861 = t2697*t2844;
  t2863 = t2787 + t2861;
  t3625 = t2697*t2761;
  t3626 = t299*t2844;
  t3641 = t3625 + t3626;
  t3533 = t763*t1713*t2331;
  t3569 = t1637*t763*t2094;
  t3574 = t3533 + t3569;
  t3012 = -1.*t299*t2976;
  t3257 = t2697*t3254;
  t3268 = t3012 + t3257;
  t3682 = t2697*t2976;
  t3693 = t299*t3254;
  t3712 = t3682 + t3693;

  p_output1(0)=t2710;
  p_output1(1)=t2863;
  p_output1(2)=t3268;
  p_output1(3)=0.;
  p_output1(4)=t3395;
  p_output1(5)=t3530;
  p_output1(6)=t3574;
  p_output1(7)=0.;
  p_output1(8)=t3587;
  p_output1(9)=t3641;
  p_output1(10)=t3712;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.183*t2710 + 0.08953*t3395 - 0.1*t3587 + t2264*t3824 + t2365*t4209 + t2563*t4383 + t2612*t4752 + t2706*t4905 + t3726*t441*t763 + var1(0);
  p_output1(13)=0. - 0.183*t2863 + 0.08953*t3530 - 0.1*t3641 + t2728*t3824 + t2737*t4209 + t2742*t4383 + t2761*t4752 + t2844*t4905 + t2028*t3726*t763 + var1(1);
  p_output1(14)=0. - 0.183*t3268 + 0.08953*t3574 - 0.1*t3712 - 1.*t1771*t3726 + t2896*t4383 + t2976*t4752 + t3254*t4905 + t1713*t3824*t763 + t2094*t4209*t763 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_RL_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void H_RL_calf_joint(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



