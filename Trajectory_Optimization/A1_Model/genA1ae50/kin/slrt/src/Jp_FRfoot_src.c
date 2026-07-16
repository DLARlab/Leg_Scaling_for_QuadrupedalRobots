/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:10:22 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_FRfoot_src.h"

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
  double t1207;
  double t2660;
  double t2940;
  double t2473;
  double t2959;
  double t1599;
  double t2901;
  double t2983;
  double t3268;
  double t3399;
  double t3401;
  double t3631;
  double t3846;
  double t197;
  double t282;
  double t5170;
  double t5205;
  double t5332;
  double t5388;
  double t6210;
  double t6227;
  double t6249;
  double t6325;
  double t5979;
  double t6010;
  double t6147;
  double t6753;
  double t6758;
  double t6815;
  double t456;
  double t790;
  double t870;
  double t898;
  double t1645;
  double t2246;
  double t2247;
  double t2435;
  double t4051;
  double t4168;
  double t7505;
  double t7509;
  double t7535;
  double t7565;
  double t7587;
  double t7623;
  double t5403;
  double t5865;
  double t7817;
  double t7854;
  double t7929;
  double t6314;
  double t6330;
  double t6441;
  double t7037;
  double t7073;
  double t7105;
  double t8002;
  double t8024;
  double t8078;
  double t8170;
  double t8209;
  double t8228;
  double t8873;
  double t8965;
  double t8974;
  double t9088;
  double t9094;
  double t9114;
  double t9131;
  double t9144;
  double t9175;
  double t10157;
  double t10160;
  double t10163;
  double t10179;
  double t10209;
  double t10239;
  double t10438;
  double t10447;
  double t10459;
  double t10661;
  double t10663;
  double t10666;
  double t10680;
  double t10681;
  double t10687;
  double t10697;
  double t10702;
  double t10707;
  double t10763;
  double t10765;
  double t10766;
  double t10790;
  double t10803;
  double t10806;
  double t10881;
  double t10894;
  double t10897;
  double t4909;
  double t10921;
  double t10924;
  double t10967;
  double t10968;
  double t10969;
  double t11005;
  double t11006;
  double t10913;
  double t11031;
  double t11032;
  double t11035;
  double t11044;
  double t11045;
  double t10959;
  double t10961;
  double t10964;
  double t10966;
  double t10970;
  double t10973;
  double t10975;
  double t10979;
  double t10980;
  double t10981;
  double t10983;
  double t10990;
  double t10991;
  double t10992;
  double t10996;
  double t8260;
  double t11067;
  double t11070;
  double t11071;
  double t11037;
  double t11041;
  double t11104;
  double t11105;
  double t11106;
  double t11101;
  double t11102;
  double t11127;
  double t11130;
  double t11131;
  double t11122;
  double t11124;
  double t11125;
  double t8271;
  double t8288;
  double t11084;
  double t11144;
  double t11145;
  double t11146;
  double t11150;
  double t11152;
  double t11108;
  double t11161;
  double t11163;
  double t11164;
  double t11113;
  double t11134;
  double t11178;
  double t11179;
  double t11181;
  double t11139;
  t1207 = Sin(var1[3]);
  t2660 = Cos(var1[5]);
  t2940 = Sin(var1[4]);
  t2473 = Cos(var1[3]);
  t2959 = Sin(var1[5]);
  t1599 = Cos(var1[6]);
  t2901 = -1.*t2473*t2660;
  t2983 = -1.*t1207*t2940*t2959;
  t3268 = t2901 + t2983;
  t3399 = -1.*t2660*t1207*t2940;
  t3401 = t2473*t2959;
  t3631 = t3399 + t3401;
  t3846 = Sin(var1[6]);
  t197 = Cos(var1[4]);
  t282 = Cos(var1[7]);
  t5170 = t1599*t3631;
  t5205 = -1.*t3268*t3846;
  t5332 = t5170 + t5205;
  t5388 = Sin(var1[7]);
  t6210 = Cos(var1[8]);
  t6227 = -1.*t6210;
  t6249 = 1. + t6227;
  t6325 = Sin(var1[8]);
  t5979 = -1.*t197*t282*t1207;
  t6010 = -1.*t5332*t5388;
  t6147 = t5979 + t6010;
  t6753 = t282*t5332;
  t6758 = -1.*t197*t1207*t5388;
  t6815 = t6753 + t6758;
  t456 = -1.*t282;
  t790 = 1. + t456;
  t870 = 0.183*t790;
  t898 = 0. + t870;
  t1645 = -1.*t1599;
  t2246 = 1. + t1645;
  t2247 = -0.047*t2246;
  t2435 = 0. + t2247;
  t4051 = 0.047*t3846;
  t4168 = 0. + t4051;
  t7505 = -1.*t2660*t1207;
  t7509 = t2473*t2940*t2959;
  t7535 = t7505 + t7509;
  t7565 = t2473*t2660*t2940;
  t7587 = t1207*t2959;
  t7623 = t7565 + t7587;
  t5403 = 0.183*t5388;
  t5865 = 0. + t5403;
  t7817 = t1599*t7623;
  t7854 = -1.*t7535*t3846;
  t7929 = t7817 + t7854;
  t6314 = 0.183*t6249;
  t6330 = 0.1*t6325;
  t6441 = 0. + t6314 + t6330;
  t7037 = -0.1*t6249;
  t7073 = 0.183*t6325;
  t7105 = 0. + t7037 + t7073;
  t8002 = t2473*t197*t282;
  t8024 = -1.*t7929*t5388;
  t8078 = t8002 + t8024;
  t8170 = t282*t7929;
  t8209 = t2473*t197*t5388;
  t8228 = t8170 + t8209;
  t8873 = t2473*t197*t2660*t1599;
  t8965 = -1.*t2473*t197*t2959*t3846;
  t8974 = t8873 + t8965;
  t9088 = -1.*t2473*t282*t2940;
  t9094 = -1.*t8974*t5388;
  t9114 = t9088 + t9094;
  t9131 = t282*t8974;
  t9144 = -1.*t2473*t2940*t5388;
  t9175 = t9131 + t9144;
  t10157 = t197*t2660*t1599*t1207;
  t10160 = -1.*t197*t1207*t2959*t3846;
  t10163 = t10157 + t10160;
  t10179 = -1.*t282*t1207*t2940;
  t10209 = -1.*t10163*t5388;
  t10239 = t10179 + t10209;
  t10438 = t282*t10163;
  t10447 = -1.*t1207*t2940*t5388;
  t10459 = t10438 + t10447;
  t10661 = -1.*t2660*t1599*t2940;
  t10663 = t2940*t2959*t3846;
  t10666 = t10661 + t10663;
  t10680 = -1.*t197*t282;
  t10681 = -1.*t10666*t5388;
  t10687 = t10680 + t10681;
  t10697 = t282*t10666;
  t10702 = -1.*t197*t5388;
  t10707 = t10697 + t10702;
  t10763 = t2660*t1207;
  t10765 = -1.*t2473*t2940*t2959;
  t10766 = t10763 + t10765;
  t10790 = t1599*t10766;
  t10803 = -1.*t7623*t3846;
  t10806 = t10790 + t10803;
  t10881 = t2660*t1207*t2940;
  t10894 = -1.*t2473*t2959;
  t10897 = t10881 + t10894;
  t4909 = t1599*t3268;
  t10921 = -1.*t10897*t3846;
  t10924 = t4909 + t10921;
  t10967 = -1.*t197*t1599*t2959;
  t10968 = -1.*t197*t2660*t3846;
  t10969 = t10967 + t10968;
  t11005 = -1.*t1599*t7535;
  t11006 = t11005 + t10803;
  t10913 = t1599*t10897;
  t11031 = t2473*t2660;
  t11032 = t1207*t2940*t2959;
  t11035 = t11031 + t11032;
  t11044 = -1.*t1599*t11035;
  t11045 = t11044 + t10921;
  t10959 = t197*t2660*t1599;
  t10961 = -1.*t197*t2959*t3846;
  t10964 = t10959 + t10961;
  t10966 = -0.13205*t10964;
  t10970 = t10969*t5865;
  t10973 = -1.*t10969*t5388*t6441;
  t10975 = t282*t10969*t7105;
  t10979 = -1.*t6210*t10969*t5388;
  t10980 = -1.*t282*t10969*t6325;
  t10981 = t10979 + t10980;
  t10983 = 0.183*t10981;
  t10990 = t282*t6210*t10969;
  t10991 = -1.*t10969*t5388*t6325;
  t10992 = t10990 + t10991;
  t10996 = -0.2*t10992;
  t8260 = t6210*t8078;
  t11067 = -1.*t282*t7929;
  t11070 = -1.*t2473*t197*t5388;
  t11071 = t11067 + t11070;
  t11037 = -1.*t11035*t3846;
  t11041 = t10913 + t11037;
  t11104 = t197*t282*t1207;
  t11105 = -1.*t11041*t5388;
  t11106 = t11104 + t11105;
  t11101 = -1.*t282*t11041;
  t11102 = t11101 + t6758;
  t11127 = -1.*t282*t2940;
  t11130 = -1.*t10964*t5388;
  t11131 = t11127 + t11130;
  t11122 = -1.*t282*t10964;
  t11124 = t2940*t5388;
  t11125 = t11122 + t11124;
  t8271 = -1.*t8228*t6325;
  t8288 = t8260 + t8271;
  t11084 = -1.*t8078*t6325;
  t11144 = 0.183*t6210;
  t11145 = -0.1*t6325;
  t11146 = t11144 + t11145;
  t11150 = 0.1*t6210;
  t11152 = t11150 + t7073;
  t11108 = t6210*t11106;
  t11161 = t282*t11041;
  t11163 = t197*t1207*t5388;
  t11164 = t11161 + t11163;
  t11113 = -1.*t11106*t6325;
  t11134 = t6210*t11131;
  t11178 = t282*t10964;
  t11179 = -1.*t2940*t5388;
  t11181 = t11178 + t11179;
  t11139 = -1.*t11131*t6325;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t2435*t3268 + t3631*t4168 - 0.13205*(t3631*t3846 + t4909) + t5332*t5865 + t6147*t6441 - 0.2*(t6147*t6325 + t6210*t6815) + 0.183*(t6147*t6210 - 1.*t6325*t6815) + t6815*t7105 - 1.*t1207*t197*t898;
  p_output1[10]=t2435*t7535 + t4168*t7623 - 0.13205*(t1599*t7535 + t3846*t7623) + t5865*t7929 + t6441*t8078 + t7105*t8228 - 0.2*(t6325*t8078 + t6210*t8228) + 0.183*t8288 + t197*t2473*t898;
  p_output1[11]=0;
  p_output1[12]=t197*t2435*t2473*t2959 - 0.13205*(t1599*t197*t2473*t2959 + t197*t2473*t2660*t3846) + t197*t2473*t2660*t4168 + t5865*t8974 - 1.*t2473*t2940*t898 + t6441*t9114 + t7105*t9175 - 0.2*(t6325*t9114 + t6210*t9175) + 0.183*(t6210*t9114 - 1.*t6325*t9175);
  p_output1[13]=t1207*t197*t2435*t2959 - 0.13205*(t1207*t1599*t197*t2959 + t1207*t197*t2660*t3846) + t1207*t197*t2660*t4168 + t10163*t5865 - 0.2*(t10459*t6210 + t10239*t6325) + 0.183*(t10239*t6210 - 1.*t10459*t6325) + t10239*t6441 + t10459*t7105 - 1.*t1207*t2940*t898;
  p_output1[14]=-1.*t2435*t2940*t2959 - 0.13205*(-1.*t1599*t2940*t2959 - 1.*t2660*t2940*t3846) - 1.*t2660*t2940*t4168 + t10666*t5865 - 0.2*(t10707*t6210 + t10687*t6325) + 0.183*(t10687*t6210 - 1.*t10707*t6325) + t10687*t6441 + t10707*t7105 - 1.*t197*t898;
  p_output1[15]=t10766*t4168 + t10806*t5865 + 0.183*(-1.*t10806*t5388*t6210 - 1.*t10806*t282*t6325) - 0.2*(t10806*t282*t6210 - 1.*t10806*t5388*t6325) - 1.*t10806*t5388*t6441 + t10806*t282*t7105 + t2435*t7623 - 0.13205*(t10766*t3846 + t7817);
  p_output1[16]=t10897*t2435 - 0.13205*(t10913 + t3268*t3846) + t3268*t4168 + t10924*t5865 + 0.183*(-1.*t10924*t5388*t6210 - 1.*t10924*t282*t6325) - 0.2*(t10924*t282*t6210 - 1.*t10924*t5388*t6325) - 1.*t10924*t5388*t6441 + t10924*t282*t7105;
  p_output1[17]=t10966 + t10970 + t10973 + t10975 + t10983 + t10996 + t197*t2435*t2660 - 1.*t197*t2959*t4168;
  p_output1[18]=t11006*t5865 + 0.183*(-1.*t11006*t5388*t6210 - 1.*t11006*t282*t6325) - 0.2*(t11006*t282*t6210 - 1.*t11006*t5388*t6325) - 1.*t11006*t5388*t6441 + t11006*t282*t7105 - 0.047*t3846*t7535 + 0.047*t1599*t7623 - 0.13205*t7929;
  p_output1[19]=-0.13205*t11041 + 0.047*t10897*t1599 - 0.047*t11035*t3846 + t11045*t5865 + 0.183*(-1.*t11045*t5388*t6210 - 1.*t11045*t282*t6325) - 0.2*(t11045*t282*t6210 - 1.*t11045*t5388*t6325) - 1.*t11045*t5388*t6441 + t11045*t282*t7105;
  p_output1[20]=t10966 + t10970 + t10973 + t10975 + t10983 + t10996 + 0.047*t1599*t197*t2660 - 0.047*t197*t2959*t3846;
  p_output1[21]=0.183*t197*t2473*t5388 + 0.183*(t11084 + t11071*t6210) + t11071*t6441 + 0.183*t282*t7929 + t7105*t8078 - 0.2*(t11071*t6325 + t8260);
  p_output1[22]=0.183*t11041*t282 + 0.183*t1207*t197*t5388 + 0.183*(t11113 + t11102*t6210) - 0.2*(t11108 + t11102*t6325) + t11102*t6441 + t11106*t7105;
  p_output1[23]=0.183*t10964*t282 - 0.183*t2940*t5388 + 0.183*(t11139 + t11125*t6210) - 0.2*(t11134 + t11125*t6325) + t11125*t6441 + t11131*t7105;
  p_output1[24]=t11152*t8078 + t11146*t8228 + 0.183*(t11084 - 1.*t6210*t8228) - 0.2*t8288;
  p_output1[25]=t11106*t11152 + t11146*t11164 + 0.183*(t11113 - 1.*t11164*t6210) - 0.2*(t11108 - 1.*t11164*t6325);
  p_output1[26]=t11131*t11152 + t11146*t11181 + 0.183*(t11139 - 1.*t11181*t6210) - 0.2*(t11134 - 1.*t11181*t6325);
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



void Jp_FRfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
