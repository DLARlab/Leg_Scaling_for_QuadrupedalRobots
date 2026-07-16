/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:50:42 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_FL_thigh_joint_src.h"

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
  double t2932;
  double t3297;
  double t3251;
  double t3254;
  double t3309;
  double t3158;
  double t3293;
  double t3319;
  double t3321;
  double t3355;
  double t3395;
  double t3420;
  double t3421;
  double t1356;
  double t2829;
  double t3518;
  double t3537;
  double t3545;
  double t3547;
  double t1856;
  double t2424;
  double t2426;
  double t2736;
  double t3202;
  double t3211;
  double t3356;
  double t3359;
  double t3360;
  double t3385;
  double t3606;
  double t3608;
  double t3626;
  double t3632;
  double t3660;
  double t3677;
  double t3519;
  double t3522;
  double t3697;
  double t3698;
  double t3700;
  double t3872;
  double t3884;
  double t3888;
  double t4077;
  double t4080;
  double t4094;
  double t4177;
  double t4179;
  double t4185;
  double t4274;
  double t4296;
  double t4301;
  double t4304;
  double t4306;
  double t4333;
  double t4466;
  double t4477;
  double t4479;
  double t3485;
  double t4514;
  double t4522;
  double t4640;
  double t4641;
  double t4646;
  double t4716;
  double t4718;
  double t4757;
  double t4765;
  double t4768;
  double t4772;
  double t4774;
  double t4587;
  double t4651;
  double t4657;
  double t4659;
  double t4673;
  double t4679;
  double t4681;
  double t4784;
  double t4787;
  t2932 = Sin(var1[3]);
  t3297 = Cos(var1[3]);
  t3251 = Cos(var1[5]);
  t3254 = Sin(var1[4]);
  t3309 = Sin(var1[5]);
  t3158 = Sin(var1[9]);
  t3293 = -1.*t3251*t2932*t3254;
  t3319 = t3297*t3309;
  t3321 = t3293 + t3319;
  t3355 = Cos(var1[9]);
  t3395 = -1.*t3297*t3251;
  t3420 = -1.*t2932*t3254*t3309;
  t3421 = t3395 + t3420;
  t1356 = Cos(var1[10]);
  t2829 = Cos(var1[4]);
  t3518 = Sin(var1[10]);
  t3537 = t3355*t3321;
  t3545 = -1.*t3158*t3421;
  t3547 = t3537 + t3545;
  t1856 = -1.*t1356;
  t2424 = 1. + t1856;
  t2426 = 0.183*t2424;
  t2736 = 0. + t2426;
  t3202 = -0.047*t3158;
  t3211 = 0. + t3202;
  t3356 = -1.*t3355;
  t3359 = 1. + t3356;
  t3360 = 0.047*t3359;
  t3385 = 0. + t3360;
  t3606 = t3297*t3251*t3254;
  t3608 = t2932*t3309;
  t3626 = t3606 + t3608;
  t3632 = -1.*t3251*t2932;
  t3660 = t3297*t3254*t3309;
  t3677 = t3632 + t3660;
  t3519 = 0.183*t3518;
  t3522 = 0. + t3519;
  t3697 = t3355*t3626;
  t3698 = -1.*t3158*t3677;
  t3700 = t3697 + t3698;
  t3872 = t3355*t3297*t2829*t3251;
  t3884 = -1.*t3297*t2829*t3158*t3309;
  t3888 = t3872 + t3884;
  t4077 = t3355*t2829*t3251*t2932;
  t4080 = -1.*t2829*t3158*t2932*t3309;
  t4094 = t4077 + t4080;
  t4177 = -1.*t3355*t3251*t3254;
  t4179 = t3158*t3254*t3309;
  t4185 = t4177 + t4179;
  t4274 = t3251*t2932;
  t4296 = -1.*t3297*t3254*t3309;
  t4301 = t4274 + t4296;
  t4304 = -1.*t3158*t3626;
  t4306 = t3355*t4301;
  t4333 = t4304 + t4306;
  t4466 = t3251*t2932*t3254;
  t4477 = -1.*t3297*t3309;
  t4479 = t4466 + t4477;
  t3485 = t3355*t3421;
  t4514 = -1.*t3158*t4479;
  t4522 = t4514 + t3485;
  t4640 = -1.*t2829*t3251*t3158;
  t4641 = -1.*t3355*t2829*t3309;
  t4646 = t4640 + t4641;
  t4716 = -1.*t3355*t3677;
  t4718 = t4304 + t4716;
  t4757 = t3297*t3251;
  t4765 = t2932*t3254*t3309;
  t4768 = t4757 + t4765;
  t4772 = -1.*t3355*t4768;
  t4774 = t4514 + t4772;
  t4587 = t3355*t4479;
  t4651 = t3522*t4646;
  t4657 = -0.183*t3518*t4646;
  t4659 = t3355*t2829*t3251;
  t4673 = -1.*t2829*t3158*t3309;
  t4679 = t4659 + t4673;
  t4681 = 0.13205*t4679;
  t4784 = -1.*t3158*t4768;
  t4787 = t4587 + t4784;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=-1.*t2736*t2829*t2932 + t3211*t3321 + t3385*t3421 + 0.13205*(t3158*t3321 + t3485) + t3522*t3547 + 0.183*(-1.*t1356*t2829*t2932 - 1.*t3518*t3547);
  p_output1[10]=t2736*t2829*t3297 + t3211*t3626 + t3385*t3677 + 0.13205*(t3158*t3626 + t3355*t3677) + t3522*t3700 + 0.183*(t1356*t2829*t3297 - 1.*t3518*t3700);
  p_output1[11]=0;
  p_output1[12]=t2829*t3211*t3251*t3297 - 1.*t2736*t3254*t3297 + 0.13205*(t2829*t3158*t3251*t3297 + t2829*t3297*t3309*t3355) + t2829*t3297*t3309*t3385 + t3522*t3888 + 0.183*(-1.*t1356*t3254*t3297 - 1.*t3518*t3888);
  p_output1[13]=t2829*t2932*t3211*t3251 - 1.*t2736*t2932*t3254 + 0.13205*(t2829*t2932*t3158*t3251 + t2829*t2932*t3309*t3355) + t2829*t2932*t3309*t3385 + t3522*t4094 + 0.183*(-1.*t1356*t2932*t3254 - 1.*t3518*t4094);
  p_output1[14]=-1.*t2736*t2829 - 1.*t3211*t3251*t3254 + 0.13205*(-1.*t3158*t3251*t3254 - 1.*t3254*t3309*t3355) - 1.*t3254*t3309*t3385 + t3522*t4185 + 0.183*(-1.*t1356*t2829 - 1.*t3518*t4185);
  p_output1[15]=t3385*t3626 + t3211*t4301 + 0.13205*(t3697 + t3158*t4301) - 0.183*t3518*t4333 + t3522*t4333;
  p_output1[16]=t3211*t3421 + t3385*t4479 - 0.183*t3518*t4522 + t3522*t4522 + 0.13205*(t3158*t3421 + t4587);
  p_output1[17]=-1.*t2829*t3211*t3309 + t2829*t3251*t3385 + t4651 + t4657 + t4681;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=-0.047*t3355*t3626 + 0.047*t3158*t3677 + 0.13205*t3700 - 0.183*t3518*t4718 + t3522*t4718;
  p_output1[28]=-0.047*t3355*t4479 + 0.047*t3158*t4768 - 0.183*t3518*t4774 + t3522*t4774 + 0.13205*t4787;
  p_output1[29]=0.047*t2829*t3158*t3309 - 0.047*t2829*t3251*t3355 + t4651 + t4657 + t4681;
  p_output1[30]=0.183*t2829*t3297*t3518 + 0.183*t1356*t3700 + 0.183*(-1.*t2829*t3297*t3518 - 1.*t1356*t3700);
  p_output1[31]=0.183*t2829*t2932*t3518 + 0.183*t1356*t4787 + 0.183*(-1.*t2829*t2932*t3518 - 1.*t1356*t4787);
  p_output1[32]=-0.183*t3254*t3518 + 0.183*t1356*t4679 + 0.183*(t3254*t3518 - 1.*t1356*t4679);
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
}



void Jp_FL_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
