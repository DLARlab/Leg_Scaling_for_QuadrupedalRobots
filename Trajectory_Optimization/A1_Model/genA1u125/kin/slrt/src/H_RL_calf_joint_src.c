/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:20:44 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RL_calf_joint_src.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE static __inline__        /* use standard inline */
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
static void output1(double *p_output1,const double *var1)
{
  double t501;
  double t1741;
  double t1858;
  double t1785;
  double t1971;
  double t1056;
  double t674;
  double t745;
  double t1428;
  double t1798;
  double t2000;
  double t2005;
  double t2051;
  double t2059;
  double t2062;
  double t2082;
  double t2289;
  double t2387;
  double t2414;
  double t247;
  double t2674;
  double t3162;
  double t3236;
  double t3295;
  double t3316;
  double t3380;
  double t3397;
  double t3442;
  double t3448;
  double t3449;
  double t3807;
  double t3831;
  double t3867;
  double t801;
  double t2440;
  double t2443;
  double t2810;
  double t2917;
  double t2971;
  double t3145;
  double t3521;
  double t3633;
  double t3718;
  double t3735;
  double t3757;
  double t3780;
  double t3870;
  double t3890;
  double t4087;
  double t4088;
  double t4138;
  double t4259;
  double t4275;
  double t4315;
  double t5106;
  double t5140;
  double t2594;
  double t3065;
  double t3144;
  double t4445;
  double t4460;
  double t4462;
  double t4737;
  double t4743;
  double t4752;
  double t4754;
  double t4792;
  double t4816;
  double t4905;
  double t4940;
  double t4976;
  double t4988;
  double t4322;
  double t4352;
  double t4357;
  double t5075;
  double t5082;
  double t5153;
  double t5169;
  double t5177;
  double t5196;
  double t5234;
  double t5259;
  double t3699;
  double t3758;
  double t3772;
  double t4475;
  double t4480;
  double t4503;
  double t4380;
  double t4427;
  double t4436;
  double t4085;
  double t4182;
  double t4190;
  double t4512;
  double t4514;
  double t4653;
  t501 = Cos(var1[3]);
  t1741 = Cos(var1[5]);
  t1858 = Sin(var1[3]);
  t1785 = Sin(var1[4]);
  t1971 = Sin(var1[5]);
  t1056 = Cos(var1[16]);
  t674 = Cos(var1[4]);
  t745 = Sin(var1[16]);
  t1428 = Cos(var1[15]);
  t1798 = t501*t1741*t1785;
  t2000 = t1858*t1971;
  t2005 = t1798 + t2000;
  t2051 = t1428*t2005;
  t2059 = Sin(var1[15]);
  t2062 = -1.*t1741*t1858;
  t2082 = t501*t1785*t1971;
  t2289 = t2062 + t2082;
  t2387 = -1.*t2059*t2289;
  t2414 = t2051 + t2387;
  t247 = Sin(var1[17]);
  t2674 = Cos(var1[17]);
  t3162 = t1741*t1858*t1785;
  t3236 = -1.*t501*t1971;
  t3295 = t3162 + t3236;
  t3316 = t1428*t3295;
  t3380 = t501*t1741;
  t3397 = t1858*t1785*t1971;
  t3442 = t3380 + t3397;
  t3448 = -1.*t2059*t3442;
  t3449 = t3316 + t3448;
  t3807 = t1428*t674*t1741;
  t3831 = -1.*t674*t2059*t1971;
  t3867 = t3807 + t3831;
  t801 = t501*t674*t745;
  t2440 = t1056*t2414;
  t2443 = t801 + t2440;
  t2810 = t1056*t501*t674;
  t2917 = -1.*t745*t2414;
  t2971 = t2810 + t2917;
  t3145 = t674*t745*t1858;
  t3521 = t1056*t3449;
  t3633 = t3145 + t3521;
  t3718 = t1056*t674*t1858;
  t3735 = -1.*t745*t3449;
  t3757 = t3718 + t3735;
  t3780 = -1.*t745*t1785;
  t3870 = t1056*t3867;
  t3890 = t3780 + t3870;
  t4087 = -1.*t1056*t1785;
  t4088 = -1.*t745*t3867;
  t4138 = t4087 + t4088;
  t4259 = t2059*t2005;
  t4275 = t1428*t2289;
  t4315 = t4259 + t4275;
  t5106 = -1.*t2674;
  t5140 = 1. + t5106;
  t2594 = -1.*t247*t2443;
  t3065 = t2674*t2971;
  t3144 = t2594 + t3065;
  t4445 = t2674*t2443;
  t4460 = t247*t2971;
  t4462 = t4445 + t4460;
  t4737 = -1.*t1056;
  t4743 = 1. + t4737;
  t4752 = -0.183*t4743;
  t4754 = 0. + t4752;
  t4792 = -0.047*t2059;
  t4816 = 0. + t4792;
  t4905 = -1.*t1428;
  t4940 = 1. + t4905;
  t4976 = 0.047*t4940;
  t4988 = 0. + t4976;
  t4322 = t2059*t3295;
  t4352 = t1428*t3442;
  t4357 = t4322 + t4352;
  t5075 = -0.183*t745;
  t5082 = 0. + t5075;
  t5153 = -0.25*t5140;
  t5169 = -0.183*t247;
  t5177 = 0. + t5153 + t5169;
  t5196 = -0.183*t5140;
  t5234 = 0.25*t247;
  t5259 = 0. + t5196 + t5234;
  t3699 = -1.*t247*t3633;
  t3758 = t2674*t3757;
  t3772 = t3699 + t3758;
  t4475 = t2674*t3633;
  t4480 = t247*t3757;
  t4503 = t4475 + t4480;
  t4380 = t674*t1741*t2059;
  t4427 = t1428*t674*t1971;
  t4436 = t4380 + t4427;
  t4085 = -1.*t247*t3890;
  t4182 = t2674*t4138;
  t4190 = t4085 + t4182;
  t4512 = t2674*t3890;
  t4514 = t247*t4138;
  t4653 = t4512 + t4514;
  p_output1[0]=t3144;
  p_output1[1]=t3772;
  p_output1[2]=t4190;
  p_output1[3]=0.;
  p_output1[4]=t4315;
  p_output1[5]=t4357;
  p_output1[6]=t4436;
  p_output1[7]=0.;
  p_output1[8]=t4462;
  p_output1[9]=t4503;
  p_output1[10]=t4653;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.183*t3144 + 0.15331*t4315 - 0.25*t4462 + t2005*t4816 + t2289*t4988 + t2414*t5082 + t2443*t5177 + t2971*t5259 + t4754*t501*t674 + var1[0];
  p_output1[13]=0. - 0.183*t3772 + 0.15331*t4357 - 0.25*t4503 + t3295*t4816 + t3442*t4988 + t3449*t5082 + t3633*t5177 + t3757*t5259 + t1858*t4754*t674 + var1[1];
  p_output1[14]=0. - 0.183*t4190 + 0.15331*t4436 - 0.25*t4653 - 1.*t1785*t4754 + t3867*t5082 + t3890*t5177 + t4138*t5259 + t1741*t4816*t674 + t1971*t4988*t674 + var1[2];
  p_output1[15]=1.;
}



void H_RL_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
