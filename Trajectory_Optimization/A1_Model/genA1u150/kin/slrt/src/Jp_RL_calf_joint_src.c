/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:26:01 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RL_calf_joint_src.h"

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
  double t590;
  double t1074;
  double t771;
  double t831;
  double t1326;
  double t665;
  double t936;
  double t1357;
  double t1486;
  double t1679;
  double t1808;
  double t1912;
  double t1926;
  double t566;
  double t2613;
  double t254;
  double t2793;
  double t2837;
  double t2843;
  double t3106;
  double t3176;
  double t3200;
  double t3409;
  double t3472;
  double t3502;
  double t3554;
  double t3678;
  double t3751;
  double t3791;
  double t258;
  double t379;
  double t517;
  double t529;
  double t694;
  double t743;
  double t1684;
  double t1719;
  double t1770;
  double t1801;
  double t4681;
  double t4691;
  double t4716;
  double t4767;
  double t4824;
  double t4829;
  double t2693;
  double t2740;
  double t3333;
  double t3413;
  double t3452;
  double t5061;
  double t5080;
  double t5100;
  double t3586;
  double t3627;
  double t3660;
  double t5134;
  double t5162;
  double t5197;
  double t5216;
  double t5244;
  double t5255;
  double t6604;
  double t6633;
  double t6711;
  double t6809;
  double t6814;
  double t6873;
  double t7039;
  double t7063;
  double t7151;
  double t7924;
  double t7961;
  double t7963;
  double t7977;
  double t7988;
  double t8009;
  double t8101;
  double t8118;
  double t8135;
  double t8653;
  double t8661;
  double t8663;
  double t8834;
  double t8837;
  double t8854;
  double t8919;
  double t8930;
  double t8931;
  double t9200;
  double t9201;
  double t9203;
  double t9210;
  double t9225;
  double t9244;
  double t9486;
  double t9500;
  double t9508;
  double t2320;
  double t9547;
  double t9548;
  double t9709;
  double t9714;
  double t9716;
  double t9831;
  double t9832;
  double t9897;
  double t9902;
  double t9911;
  double t9921;
  double t9935;
  double t9572;
  double t9719;
  double t9720;
  double t9722;
  double t9724;
  double t9725;
  double t9727;
  double t9728;
  double t9732;
  double t9736;
  double t9746;
  double t9755;
  double t9758;
  double t9773;
  double t9799;
  double t9805;
  double t10010;
  double t10012;
  double t10014;
  double t5315;
  double t9947;
  double t9954;
  double t10071;
  double t10072;
  double t10074;
  double t10075;
  double t10076;
  double t10099;
  double t10100;
  double t10101;
  double t10103;
  double t10104;
  double t10105;
  double t5308;
  double t5735;
  double t10061;
  double t10118;
  double t10119;
  double t10120;
  double t10124;
  double t10125;
  double t10135;
  double t10136;
  double t10138;
  double t10081;
  double t10086;
  double t10150;
  double t10154;
  double t10155;
  double t10108;
  double t10112;
  t590 = Sin(var1[3]);
  t1074 = Cos(var1[3]);
  t771 = Cos(var1[5]);
  t831 = Sin(var1[4]);
  t1326 = Sin(var1[5]);
  t665 = Sin(var1[15]);
  t936 = -1.*t771*t590*t831;
  t1357 = t1074*t1326;
  t1486 = t936 + t1357;
  t1679 = Cos(var1[15]);
  t1808 = -1.*t1074*t771;
  t1912 = -1.*t590*t831*t1326;
  t1926 = t1808 + t1912;
  t566 = Cos(var1[4]);
  t2613 = Sin(var1[16]);
  t254 = Cos(var1[16]);
  t2793 = t1679*t1486;
  t2837 = -1.*t665*t1926;
  t2843 = t2793 + t2837;
  t3106 = Cos(var1[17]);
  t3176 = -1.*t3106;
  t3200 = 1. + t3176;
  t3409 = Sin(var1[17]);
  t3472 = -1.*t566*t2613*t590;
  t3502 = t254*t2843;
  t3554 = t3472 + t3502;
  t3678 = -1.*t254*t566*t590;
  t3751 = -1.*t2613*t2843;
  t3791 = t3678 + t3751;
  t258 = -1.*t254;
  t379 = 1. + t258;
  t517 = -0.183*t379;
  t529 = 0. + t517;
  t694 = -0.047*t665;
  t743 = 0. + t694;
  t1684 = -1.*t1679;
  t1719 = 1. + t1684;
  t1770 = 0.047*t1719;
  t1801 = 0. + t1770;
  t4681 = t1074*t771*t831;
  t4691 = t590*t1326;
  t4716 = t4681 + t4691;
  t4767 = -1.*t771*t590;
  t4824 = t1074*t831*t1326;
  t4829 = t4767 + t4824;
  t2693 = -0.183*t2613;
  t2740 = 0. + t2693;
  t3333 = -0.3*t3200;
  t3413 = -0.183*t3409;
  t3452 = 0. + t3333 + t3413;
  t5061 = t1679*t4716;
  t5080 = -1.*t665*t4829;
  t5100 = t5061 + t5080;
  t3586 = -0.183*t3200;
  t3627 = 0.3*t3409;
  t3660 = 0. + t3586 + t3627;
  t5134 = t1074*t566*t2613;
  t5162 = t254*t5100;
  t5197 = t5134 + t5162;
  t5216 = t254*t1074*t566;
  t5244 = -1.*t2613*t5100;
  t5255 = t5216 + t5244;
  t6604 = t1679*t1074*t566*t771;
  t6633 = -1.*t1074*t566*t665*t1326;
  t6711 = t6604 + t6633;
  t6809 = -1.*t1074*t2613*t831;
  t6814 = t254*t6711;
  t6873 = t6809 + t6814;
  t7039 = -1.*t254*t1074*t831;
  t7063 = -1.*t2613*t6711;
  t7151 = t7039 + t7063;
  t7924 = t1679*t566*t771*t590;
  t7961 = -1.*t566*t665*t590*t1326;
  t7963 = t7924 + t7961;
  t7977 = -1.*t2613*t590*t831;
  t7988 = t254*t7963;
  t8009 = t7977 + t7988;
  t8101 = -1.*t254*t590*t831;
  t8118 = -1.*t2613*t7963;
  t8135 = t8101 + t8118;
  t8653 = -1.*t1679*t771*t831;
  t8661 = t665*t831*t1326;
  t8663 = t8653 + t8661;
  t8834 = -1.*t566*t2613;
  t8837 = t254*t8663;
  t8854 = t8834 + t8837;
  t8919 = -1.*t254*t566;
  t8930 = -1.*t2613*t8663;
  t8931 = t8919 + t8930;
  t9200 = t771*t590;
  t9201 = -1.*t1074*t831*t1326;
  t9203 = t9200 + t9201;
  t9210 = -1.*t665*t4716;
  t9225 = t1679*t9203;
  t9244 = t9210 + t9225;
  t9486 = t771*t590*t831;
  t9500 = -1.*t1074*t1326;
  t9508 = t9486 + t9500;
  t2320 = t1679*t1926;
  t9547 = -1.*t665*t9508;
  t9548 = t9547 + t2320;
  t9709 = -1.*t566*t771*t665;
  t9714 = -1.*t1679*t566*t1326;
  t9716 = t9709 + t9714;
  t9831 = -1.*t1679*t4829;
  t9832 = t9210 + t9831;
  t9897 = t1074*t771;
  t9902 = t590*t831*t1326;
  t9911 = t9897 + t9902;
  t9921 = -1.*t1679*t9911;
  t9935 = t9547 + t9921;
  t9572 = t1679*t9508;
  t9719 = t2740*t9716;
  t9720 = t254*t3452*t9716;
  t9722 = -1.*t2613*t3660*t9716;
  t9724 = t1679*t566*t771;
  t9725 = -1.*t566*t665*t1326;
  t9727 = t9724 + t9725;
  t9728 = 0.17458*t9727;
  t9732 = -1.*t3106*t2613*t9716;
  t9736 = -1.*t254*t3409*t9716;
  t9746 = t9732 + t9736;
  t9755 = -0.183*t9746;
  t9758 = t254*t3106*t9716;
  t9773 = -1.*t2613*t3409*t9716;
  t9799 = t9758 + t9773;
  t9805 = -0.3*t9799;
  t10010 = -1.*t1074*t566*t2613;
  t10012 = -1.*t254*t5100;
  t10014 = t10010 + t10012;
  t5315 = t3106*t5255;
  t9947 = -1.*t665*t9911;
  t9954 = t9572 + t9947;
  t10071 = -1.*t254*t9954;
  t10072 = t3472 + t10071;
  t10074 = t254*t566*t590;
  t10075 = -1.*t2613*t9954;
  t10076 = t10074 + t10075;
  t10099 = t2613*t831;
  t10100 = -1.*t254*t9727;
  t10101 = t10099 + t10100;
  t10103 = -1.*t254*t831;
  t10104 = -1.*t2613*t9727;
  t10105 = t10103 + t10104;
  t5308 = -1.*t3409*t5197;
  t5735 = t5308 + t5315;
  t10061 = -1.*t3409*t5255;
  t10118 = -0.183*t3106;
  t10119 = -0.3*t3409;
  t10120 = t10118 + t10119;
  t10124 = 0.3*t3106;
  t10125 = t10124 + t3413;
  t10135 = t566*t2613*t590;
  t10136 = t254*t9954;
  t10138 = t10135 + t10136;
  t10081 = t3106*t10076;
  t10086 = -1.*t3409*t10076;
  t10150 = -1.*t2613*t831;
  t10154 = t254*t9727;
  t10155 = t10150 + t10154;
  t10108 = t3106*t10105;
  t10112 = -1.*t3409*t10105;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1801*t1926 + t2740*t2843 + t3452*t3554 + t3660*t3791 - 0.183*(-1.*t3409*t3554 + t3106*t3791) - 0.3*(t3106*t3554 + t3409*t3791) - 1.*t529*t566*t590 + 0.17458*(t2320 + t1486*t665) + t1486*t743;
  p_output1[10]=t1801*t4829 + t2740*t5100 + t3452*t5197 + t3660*t5255 - 0.3*(t3106*t5197 + t3409*t5255) + t1074*t529*t566 - 0.183*t5735 + 0.17458*(t1679*t4829 + t4716*t665) + t4716*t743;
  p_output1[11]=0;
  p_output1[12]=t1074*t1326*t1801*t566 + t2740*t6711 + t3452*t6873 + t3660*t7151 - 0.183*(-1.*t3409*t6873 + t3106*t7151) - 0.3*(t3106*t6873 + t3409*t7151) + t1074*t566*t743*t771 + 0.17458*(t1074*t1326*t1679*t566 + t1074*t566*t665*t771) - 1.*t1074*t529*t831;
  p_output1[13]=t1326*t1801*t566*t590 + t566*t590*t743*t771 + 0.17458*(t1326*t1679*t566*t590 + t566*t590*t665*t771) + t2740*t7963 + t3452*t8009 + t3660*t8135 - 0.183*(-1.*t3409*t8009 + t3106*t8135) - 0.3*(t3106*t8009 + t3409*t8135) - 1.*t529*t590*t831;
  p_output1[14]=-1.*t529*t566 - 1.*t1326*t1801*t831 - 1.*t743*t771*t831 + 0.17458*(-1.*t1326*t1679*t831 - 1.*t665*t771*t831) + t2740*t8663 + t3452*t8854 + t3660*t8931 - 0.183*(-1.*t3409*t8854 + t3106*t8931) - 0.3*(t3106*t8854 + t3409*t8931);
  p_output1[15]=t1801*t4716 + t743*t9203 + 0.17458*(t5061 + t665*t9203) + t2740*t9244 + t254*t3452*t9244 - 1.*t2613*t3660*t9244 - 0.183*(-1.*t2613*t3106*t9244 - 1.*t254*t3409*t9244) - 0.3*(t254*t3106*t9244 - 1.*t2613*t3409*t9244);
  p_output1[16]=t1926*t743 + t1801*t9508 + t2740*t9548 + t254*t3452*t9548 - 1.*t2613*t3660*t9548 - 0.183*(-1.*t2613*t3106*t9548 - 1.*t254*t3409*t9548) - 0.3*(t254*t3106*t9548 - 1.*t2613*t3409*t9548) + 0.17458*(t1926*t665 + t9572);
  p_output1[17]=-1.*t1326*t566*t743 + t1801*t566*t771 + t9719 + t9720 + t9722 + t9728 + t9755 + t9805;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
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
  p_output1[45]=-0.047*t1679*t4716 + 0.17458*t5100 + 0.047*t4829*t665 + t2740*t9832 + t254*t3452*t9832 - 1.*t2613*t3660*t9832 - 0.183*(-1.*t2613*t3106*t9832 - 1.*t254*t3409*t9832) - 0.3*(t254*t3106*t9832 - 1.*t2613*t3409*t9832);
  p_output1[46]=-0.047*t1679*t9508 + 0.047*t665*t9911 + t2740*t9935 + t254*t3452*t9935 - 1.*t2613*t3660*t9935 - 0.183*(-1.*t2613*t3106*t9935 - 1.*t254*t3409*t9935) - 0.3*(t254*t3106*t9935 - 1.*t2613*t3409*t9935) + 0.17458*t9954;
  p_output1[47]=0.047*t1326*t566*t665 - 0.047*t1679*t566*t771 + t9719 + t9720 + t9722 + t9728 + t9755 + t9805;
  p_output1[48]=-0.183*(t10061 + t10014*t3106) + t10014*t3660 - 0.183*t254*t5100 + t3452*t5255 - 0.3*(t10014*t3409 + t5315) - 0.183*t1074*t2613*t566;
  p_output1[49]=-0.183*(t10086 + t10072*t3106) - 0.3*(t10081 + t10072*t3409) + t10076*t3452 + t10072*t3660 - 0.183*t2613*t566*t590 - 0.183*t254*t9954;
  p_output1[50]=-0.183*(t10112 + t10101*t3106) - 0.3*(t10108 + t10101*t3409) + t10105*t3452 + t10101*t3660 + 0.183*t2613*t831 - 0.183*t254*t9727;
  p_output1[51]=t10120*t5197 - 0.183*(t10061 - 1.*t3106*t5197) + t10125*t5255 - 0.3*t5735;
  p_output1[52]=t10076*t10125 + t10120*t10138 - 0.183*(t10086 - 1.*t10138*t3106) - 0.3*(t10081 - 1.*t10138*t3409);
  p_output1[53]=t10105*t10125 + t10120*t10155 - 0.183*(t10112 - 1.*t10155*t3106) - 0.3*(t10108 - 1.*t10155*t3409);
}



void Jp_RL_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
