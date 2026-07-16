/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:26:11 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RLfoot_src.h"

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
  double t274;
  double t993;
  double t1492;
  double t1025;
  double t1565;
  double t840;
  double t657;
  double t784;
  double t868;
  double t1354;
  double t1591;
  double t1595;
  double t1605;
  double t1616;
  double t1633;
  double t1652;
  double t1654;
  double t1656;
  double t1733;
  double t228;
  double t2169;
  double t2694;
  double t2721;
  double t2761;
  double t2782;
  double t2789;
  double t2823;
  double t2826;
  double t2903;
  double t2905;
  double t3137;
  double t3150;
  double t3235;
  double t789;
  double t1974;
  double t2106;
  double t2187;
  double t2304;
  double t2427;
  double t2682;
  double t2949;
  double t2972;
  double t3031;
  double t3083;
  double t3093;
  double t3134;
  double t3289;
  double t3391;
  double t3470;
  double t3507;
  double t3558;
  double t3622;
  double t3640;
  double t3645;
  double t4649;
  double t4660;
  double t2142;
  double t2557;
  double t2680;
  double t3853;
  double t3855;
  double t3871;
  double t4233;
  double t4284;
  double t4312;
  double t4338;
  double t4360;
  double t4403;
  double t4468;
  double t4503;
  double t4525;
  double t4544;
  double t3659;
  double t3680;
  double t3775;
  double t4631;
  double t4639;
  double t4695;
  double t4711;
  double t4714;
  double t4725;
  double t4733;
  double t4750;
  double t3026;
  double t3111;
  double t3130;
  double t3884;
  double t3902;
  double t3910;
  double t3804;
  double t3841;
  double t3851;
  double t3454;
  double t3604;
  double t3619;
  double t3939;
  double t4114;
  double t4131;
  t274 = Cos(var1[3]);
  t993 = Cos(var1[5]);
  t1492 = Sin(var1[3]);
  t1025 = Sin(var1[4]);
  t1565 = Sin(var1[5]);
  t840 = Cos(var1[16]);
  t657 = Cos(var1[4]);
  t784 = Sin(var1[16]);
  t868 = Cos(var1[15]);
  t1354 = t274*t993*t1025;
  t1591 = t1492*t1565;
  t1595 = t1354 + t1591;
  t1605 = t868*t1595;
  t1616 = Sin(var1[15]);
  t1633 = -1.*t993*t1492;
  t1652 = t274*t1025*t1565;
  t1654 = t1633 + t1652;
  t1656 = -1.*t1616*t1654;
  t1733 = t1605 + t1656;
  t228 = Sin(var1[17]);
  t2169 = Cos(var1[17]);
  t2694 = t993*t1492*t1025;
  t2721 = -1.*t274*t1565;
  t2761 = t2694 + t2721;
  t2782 = t868*t2761;
  t2789 = t274*t993;
  t2823 = t1492*t1025*t1565;
  t2826 = t2789 + t2823;
  t2903 = -1.*t1616*t2826;
  t2905 = t2782 + t2903;
  t3137 = t868*t657*t993;
  t3150 = -1.*t657*t1616*t1565;
  t3235 = t3137 + t3150;
  t789 = t274*t657*t784;
  t1974 = t840*t1733;
  t2106 = t789 + t1974;
  t2187 = t840*t274*t657;
  t2304 = -1.*t784*t1733;
  t2427 = t2187 + t2304;
  t2682 = t657*t784*t1492;
  t2949 = t840*t2905;
  t2972 = t2682 + t2949;
  t3031 = t840*t657*t1492;
  t3083 = -1.*t784*t2905;
  t3093 = t3031 + t3083;
  t3134 = -1.*t784*t1025;
  t3289 = t840*t3235;
  t3391 = t3134 + t3289;
  t3470 = -1.*t840*t1025;
  t3507 = -1.*t784*t3235;
  t3558 = t3470 + t3507;
  t3622 = t1616*t1595;
  t3640 = t868*t1654;
  t3645 = t3622 + t3640;
  t4649 = -1.*t2169;
  t4660 = 1. + t4649;
  t2142 = -1.*t228*t2106;
  t2557 = t2169*t2427;
  t2680 = t2142 + t2557;
  t3853 = t2169*t2106;
  t3855 = t228*t2427;
  t3871 = t3853 + t3855;
  t4233 = -1.*t840;
  t4284 = 1. + t4233;
  t4312 = -0.183*t4284;
  t4338 = 0. + t4312;
  t4360 = -0.047*t1616;
  t4403 = 0. + t4360;
  t4468 = -1.*t868;
  t4503 = 1. + t4468;
  t4525 = 0.047*t4503;
  t4544 = 0. + t4525;
  t3659 = t1616*t2761;
  t3680 = t868*t2826;
  t3775 = t3659 + t3680;
  t4631 = -0.183*t784;
  t4639 = 0. + t4631;
  t4695 = -0.3*t4660;
  t4711 = -0.183*t228;
  t4714 = 0. + t4695 + t4711;
  t4725 = -0.183*t4660;
  t4733 = 0.3*t228;
  t4750 = 0. + t4725 + t4733;
  t3026 = -1.*t228*t2972;
  t3111 = t2169*t3093;
  t3130 = t3026 + t3111;
  t3884 = t2169*t2972;
  t3902 = t228*t3093;
  t3910 = t3884 + t3902;
  t3804 = t657*t993*t1616;
  t3841 = t868*t657*t1565;
  t3851 = t3804 + t3841;
  t3454 = -1.*t228*t3391;
  t3604 = t2169*t3558;
  t3619 = t3454 + t3604;
  t3939 = t2169*t3391;
  t4114 = t228*t3558;
  t4131 = t3939 + t4114;
  p_output1[0]=t2680;
  p_output1[1]=t3130;
  p_output1[2]=t3619;
  p_output1[3]=0.;
  p_output1[4]=t3645;
  p_output1[5]=t3775;
  p_output1[6]=t3851;
  p_output1[7]=0.;
  p_output1[8]=t3871;
  p_output1[9]=t3910;
  p_output1[10]=t4131;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.183*t2680 + 0.17458*t3645 - 0.6*t3871 + t1595*t4403 + t1654*t4544 + t1733*t4639 + t2106*t4714 + t2427*t4750 + t274*t4338*t657 + var1[0];
  p_output1[13]=0. - 0.183*t3130 + 0.17458*t3775 - 0.6*t3910 + t2761*t4403 + t2826*t4544 + t2905*t4639 + t2972*t4714 + t3093*t4750 + t1492*t4338*t657 + var1[1];
  p_output1[14]=0. - 0.183*t3619 + 0.17458*t3851 - 0.6*t4131 - 1.*t1025*t4338 + t3235*t4639 + t3391*t4714 + t3558*t4750 + t1565*t4544*t657 + t4403*t657*t993 + var1[2];
  p_output1[15]=1.;
}



void H_RLfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
