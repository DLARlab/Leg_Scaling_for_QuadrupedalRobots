/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:03:10 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FR_calf_joint_src.h"

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
  double t944;
  double t1346;
  double t1491;
  double t1362;
  double t1537;
  double t1104;
  double t1305;
  double t1425;
  double t1539;
  double t1598;
  double t1602;
  double t1609;
  double t1616;
  double t1623;
  double t1635;
  double t1640;
  double t1789;
  double t993;
  double t1791;
  double t884;
  double t1906;
  double t1911;
  double t1980;
  double t1981;
  double t1988;
  double t1998;
  double t1999;
  double t2000;
  double t2006;
  double t1883;
  double t3155;
  double t3158;
  double t3162;
  double t1842;
  double t1860;
  double t1863;
  double t1193;
  double t1792;
  double t1798;
  double t2900;
  double t2912;
  double t2953;
  double t1897;
  double t2007;
  double t2012;
  double t3189;
  double t3191;
  double t3192;
  double t3045;
  double t3180;
  double t3185;
  double t3226;
  double t3227;
  double t3229;
  double t3456;
  double t3458;
  double t1803;
  double t1892;
  double t1893;
  double t3288;
  double t3303;
  double t3304;
  double t3343;
  double t3344;
  double t3372;
  double t3382;
  double t3402;
  double t3408;
  double t3412;
  double t3413;
  double t3420;
  double t3431;
  double t3231;
  double t3244;
  double t3246;
  double t3439;
  double t3443;
  double t3470;
  double t3489;
  double t3513;
  double t3525;
  double t3528;
  double t3547;
  double t2036;
  double t3000;
  double t3042;
  double t3307;
  double t3315;
  double t3317;
  double t3248;
  double t3259;
  double t3277;
  double t3188;
  double t3199;
  double t3223;
  double t3318;
  double t3324;
  double t3332;
  t944 = Cos(var1[3]);
  t1346 = Cos(var1[5]);
  t1491 = Sin(var1[3]);
  t1362 = Sin(var1[4]);
  t1537 = Sin(var1[5]);
  t1104 = Cos(var1[7]);
  t1305 = Cos(var1[6]);
  t1425 = t944*t1346*t1362;
  t1539 = t1491*t1537;
  t1598 = t1425 + t1539;
  t1602 = t1305*t1598;
  t1609 = -1.*t1346*t1491;
  t1616 = t944*t1362*t1537;
  t1623 = t1609 + t1616;
  t1635 = Sin(var1[6]);
  t1640 = -1.*t1623*t1635;
  t1789 = t1602 + t1640;
  t993 = Cos(var1[4]);
  t1791 = Sin(var1[7]);
  t884 = Cos(var1[8]);
  t1906 = t1346*t1491*t1362;
  t1911 = -1.*t944*t1537;
  t1980 = t1906 + t1911;
  t1981 = t1305*t1980;
  t1988 = t944*t1346;
  t1998 = t1491*t1362*t1537;
  t1999 = t1988 + t1998;
  t2000 = -1.*t1999*t1635;
  t2006 = t1981 + t2000;
  t1883 = Sin(var1[8]);
  t3155 = t993*t1346*t1305;
  t3158 = -1.*t993*t1537*t1635;
  t3162 = t3155 + t3158;
  t1842 = t1104*t1789;
  t1860 = t944*t993*t1791;
  t1863 = t1842 + t1860;
  t1193 = t944*t993*t1104;
  t1792 = -1.*t1789*t1791;
  t1798 = t1193 + t1792;
  t2900 = t1104*t2006;
  t2912 = t993*t1491*t1791;
  t2953 = t2900 + t2912;
  t1897 = t993*t1104*t1491;
  t2007 = -1.*t2006*t1791;
  t2012 = t1897 + t2007;
  t3189 = t1104*t3162;
  t3191 = -1.*t1362*t1791;
  t3192 = t3189 + t3191;
  t3045 = -1.*t1104*t1362;
  t3180 = -1.*t3162*t1791;
  t3185 = t3045 + t3180;
  t3226 = t1305*t1623;
  t3227 = t1598*t1635;
  t3229 = t3226 + t3227;
  t3456 = -1.*t884;
  t3458 = 1. + t3456;
  t1803 = t884*t1798;
  t1892 = -1.*t1863*t1883;
  t1893 = t1803 + t1892;
  t3288 = t884*t1863;
  t3303 = t1798*t1883;
  t3304 = t3288 + t3303;
  t3343 = -1.*t1104;
  t3344 = 1. + t3343;
  t3372 = 0.183*t3344;
  t3382 = 0. + t3372;
  t3402 = -1.*t1305;
  t3408 = 1. + t3402;
  t3412 = -0.047*t3408;
  t3413 = 0. + t3412;
  t3420 = 0.047*t1635;
  t3431 = 0. + t3420;
  t3231 = t1305*t1999;
  t3244 = t1980*t1635;
  t3246 = t3231 + t3244;
  t3439 = 0.183*t1791;
  t3443 = 0. + t3439;
  t3470 = -0.25*t3458;
  t3489 = 0.183*t1883;
  t3513 = 0. + t3470 + t3489;
  t3525 = 0.183*t3458;
  t3528 = 0.25*t1883;
  t3547 = 0. + t3525 + t3528;
  t2036 = t884*t2012;
  t3000 = -1.*t2953*t1883;
  t3042 = t2036 + t3000;
  t3307 = t884*t2953;
  t3315 = t2012*t1883;
  t3317 = t3307 + t3315;
  t3248 = t993*t1305*t1537;
  t3259 = t993*t1346*t1635;
  t3277 = t3248 + t3259;
  t3188 = t884*t3185;
  t3199 = -1.*t3192*t1883;
  t3223 = t3188 + t3199;
  t3318 = t884*t3192;
  t3324 = t3185*t1883;
  t3332 = t3318 + t3324;
  p_output1[0]=t1893;
  p_output1[1]=t3042;
  p_output1[2]=t3223;
  p_output1[3]=0.;
  p_output1[4]=t3229;
  p_output1[5]=t3246;
  p_output1[6]=t3277;
  p_output1[7]=0.;
  p_output1[8]=t3304;
  p_output1[9]=t3317;
  p_output1[10]=t3332;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.183*t1893 - 0.13205*t3229 - 0.25*t3304 + t1623*t3413 + t1598*t3431 + t1789*t3443 + t1863*t3513 + t1798*t3547 + t3382*t944*t993 + var1[0];
  p_output1[13]=0. + 0.183*t3042 - 0.13205*t3246 - 0.25*t3317 + t1999*t3413 + t1980*t3431 + t2006*t3443 + t2953*t3513 + t2012*t3547 + t1491*t3382*t993 + var1[1];
  p_output1[14]=0. + 0.183*t3223 - 0.13205*t3277 - 0.25*t3332 - 1.*t1362*t3382 + t3162*t3443 + t3192*t3513 + t3185*t3547 + t1537*t3413*t993 + t1346*t3431*t993 + var1[2];
  p_output1[15]=1.;
}



void H_FR_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
