/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:26:09 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RRfoot_src.h"

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
  double t189;
  double t915;
  double t1303;
  double t920;
  double t1307;
  double t654;
  double t371;
  double t395;
  double t741;
  double t1059;
  double t1308;
  double t1313;
  double t1361;
  double t1366;
  double t1454;
  double t1460;
  double t1477;
  double t1502;
  double t1683;
  double t112;
  double t1841;
  double t2152;
  double t2157;
  double t2180;
  double t2181;
  double t2211;
  double t2232;
  double t2238;
  double t2249;
  double t2270;
  double t2477;
  double t2563;
  double t2584;
  double t626;
  double t1800;
  double t1823;
  double t1920;
  double t1992;
  double t2077;
  double t2129;
  double t2273;
  double t2276;
  double t2282;
  double t2283;
  double t2287;
  double t2424;
  double t2600;
  double t2628;
  double t2699;
  double t2768;
  double t2817;
  double t2908;
  double t2981;
  double t3019;
  double t3742;
  double t3753;
  double t1838;
  double t2095;
  double t2102;
  double t3216;
  double t3225;
  double t3231;
  double t3352;
  double t3370;
  double t3385;
  double t3404;
  double t3456;
  double t3494;
  double t3539;
  double t3546;
  double t3590;
  double t3594;
  double t3028;
  double t3045;
  double t3089;
  double t3641;
  double t3670;
  double t3792;
  double t3798;
  double t3862;
  double t3893;
  double t3906;
  double t3925;
  double t2278;
  double t2305;
  double t2349;
  double t3240;
  double t3255;
  double t3280;
  double t3108;
  double t3168;
  double t3209;
  double t2691;
  double t2832;
  double t2849;
  double t3321;
  double t3337;
  double t3347;
  t189 = Cos(var1[3]);
  t915 = Cos(var1[5]);
  t1303 = Sin(var1[3]);
  t920 = Sin(var1[4]);
  t1307 = Sin(var1[5]);
  t654 = Cos(var1[13]);
  t371 = Cos(var1[4]);
  t395 = Sin(var1[13]);
  t741 = Cos(var1[12]);
  t1059 = t189*t915*t920;
  t1308 = t1303*t1307;
  t1313 = t1059 + t1308;
  t1361 = t741*t1313;
  t1366 = Sin(var1[12]);
  t1454 = -1.*t915*t1303;
  t1460 = t189*t920*t1307;
  t1477 = t1454 + t1460;
  t1502 = -1.*t1366*t1477;
  t1683 = t1361 + t1502;
  t112 = Sin(var1[14]);
  t1841 = Cos(var1[14]);
  t2152 = t915*t1303*t920;
  t2157 = -1.*t189*t1307;
  t2180 = t2152 + t2157;
  t2181 = t741*t2180;
  t2211 = t189*t915;
  t2232 = t1303*t920*t1307;
  t2238 = t2211 + t2232;
  t2249 = -1.*t1366*t2238;
  t2270 = t2181 + t2249;
  t2477 = t741*t371*t915;
  t2563 = -1.*t371*t1366*t1307;
  t2584 = t2477 + t2563;
  t626 = t189*t371*t395;
  t1800 = t654*t1683;
  t1823 = t626 + t1800;
  t1920 = t654*t189*t371;
  t1992 = -1.*t395*t1683;
  t2077 = t1920 + t1992;
  t2129 = t371*t395*t1303;
  t2273 = t654*t2270;
  t2276 = t2129 + t2273;
  t2282 = t654*t371*t1303;
  t2283 = -1.*t395*t2270;
  t2287 = t2282 + t2283;
  t2424 = -1.*t395*t920;
  t2600 = t654*t2584;
  t2628 = t2424 + t2600;
  t2699 = -1.*t654*t920;
  t2768 = -1.*t395*t2584;
  t2817 = t2699 + t2768;
  t2908 = t1366*t1313;
  t2981 = t741*t1477;
  t3019 = t2908 + t2981;
  t3742 = -1.*t1841;
  t3753 = 1. + t3742;
  t1838 = -1.*t112*t1823;
  t2095 = t1841*t2077;
  t2102 = t1838 + t2095;
  t3216 = t1841*t1823;
  t3225 = t112*t2077;
  t3231 = t3216 + t3225;
  t3352 = -1.*t654;
  t3370 = 1. + t3352;
  t3385 = -0.183*t3370;
  t3404 = 0. + t3385;
  t3456 = 0.047*t1366;
  t3494 = 0. + t3456;
  t3539 = -1.*t741;
  t3546 = 1. + t3539;
  t3590 = -0.047*t3546;
  t3594 = 0. + t3590;
  t3028 = t1366*t2180;
  t3045 = t741*t2238;
  t3089 = t3028 + t3045;
  t3641 = -0.183*t395;
  t3670 = 0. + t3641;
  t3792 = -0.3*t3753;
  t3798 = -0.183*t112;
  t3862 = 0. + t3792 + t3798;
  t3893 = -0.183*t3753;
  t3906 = 0.3*t112;
  t3925 = 0. + t3893 + t3906;
  t2278 = -1.*t112*t2276;
  t2305 = t1841*t2287;
  t2349 = t2278 + t2305;
  t3240 = t1841*t2276;
  t3255 = t112*t2287;
  t3280 = t3240 + t3255;
  t3108 = t371*t915*t1366;
  t3168 = t741*t371*t1307;
  t3209 = t3108 + t3168;
  t2691 = -1.*t112*t2628;
  t2832 = t1841*t2817;
  t2849 = t2691 + t2832;
  t3321 = t1841*t2628;
  t3337 = t112*t2817;
  t3347 = t3321 + t3337;
  p_output1[0]=t2102;
  p_output1[1]=t2349;
  p_output1[2]=t2849;
  p_output1[3]=0.;
  p_output1[4]=t3019;
  p_output1[5]=t3089;
  p_output1[6]=t3209;
  p_output1[7]=0.;
  p_output1[8]=t3231;
  p_output1[9]=t3280;
  p_output1[10]=t3347;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.183*t2102 - 0.17458*t3019 - 0.6*t3231 + t1313*t3494 + t1477*t3594 + t1683*t3670 + t189*t3404*t371 + t1823*t3862 + t2077*t3925 + var1[0];
  p_output1[13]=0. - 0.183*t2349 - 0.17458*t3089 - 0.6*t3280 + t2180*t3494 + t2238*t3594 + t2270*t3670 + t1303*t3404*t371 + t2276*t3862 + t2287*t3925 + var1[1];
  p_output1[14]=0. - 0.183*t2849 - 0.17458*t3209 - 0.6*t3347 + t2584*t3670 + t1307*t3594*t371 + t2628*t3862 + t2817*t3925 + t3494*t371*t915 - 1.*t3404*t920 + var1[2];
  p_output1[15]=1.;
}



void H_RRfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
