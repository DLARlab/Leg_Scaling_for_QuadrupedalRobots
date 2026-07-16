/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:03:35 GMT-05:00
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
  double t606;
  double t981;
  double t879;
  double t898;
  double t987;
  double t756;
  double t955;
  double t1030;
  double t1080;
  double t1181;
  double t1389;
  double t1591;
  double t1688;
  double t419;
  double t1942;
  double t152;
  double t1995;
  double t2008;
  double t2045;
  double t2857;
  double t2875;
  double t2977;
  double t3028;
  double t3586;
  double t3624;
  double t3719;
  double t4072;
  double t4084;
  double t4236;
  double t258;
  double t282;
  double t320;
  double t365;
  double t806;
  double t852;
  double t1231;
  double t1247;
  double t1270;
  double t1300;
  double t5575;
  double t5754;
  double t6044;
  double t6073;
  double t6082;
  double t6135;
  double t1967;
  double t1972;
  double t2988;
  double t3236;
  double t3500;
  double t6262;
  double t6292;
  double t6319;
  double t3987;
  double t4015;
  double t4019;
  double t6343;
  double t6350;
  double t6361;
  double t6410;
  double t6467;
  double t6487;
  double t7812;
  double t7835;
  double t7881;
  double t7885;
  double t7887;
  double t7889;
  double t7908;
  double t7910;
  double t7927;
  double t8064;
  double t8065;
  double t8066;
  double t8070;
  double t8073;
  double t8077;
  double t8080;
  double t8081;
  double t8082;
  double t8118;
  double t8119;
  double t8120;
  double t8122;
  double t8123;
  double t8126;
  double t8134;
  double t8138;
  double t8139;
  double t8155;
  double t8158;
  double t8159;
  double t8161;
  double t8162;
  double t8165;
  double t8193;
  double t8194;
  double t8195;
  double t1742;
  double t8203;
  double t8205;
  double t8239;
  double t8240;
  double t8241;
  double t8270;
  double t8271;
  double t8309;
  double t8313;
  double t8315;
  double t8318;
  double t8319;
  double t8217;
  double t8242;
  double t8243;
  double t8245;
  double t8246;
  double t8247;
  double t8248;
  double t8249;
  double t8250;
  double t8252;
  double t8255;
  double t8256;
  double t8261;
  double t8262;
  double t8265;
  double t8266;
  double t8347;
  double t8350;
  double t8351;
  double t6555;
  double t8327;
  double t8328;
  double t8368;
  double t8369;
  double t8371;
  double t8372;
  double t8374;
  double t8391;
  double t8393;
  double t8394;
  double t8398;
  double t8399;
  double t8401;
  double t6514;
  double t6682;
  double t8360;
  double t8420;
  double t8421;
  double t8424;
  double t8431;
  double t8432;
  double t8441;
  double t8442;
  double t8444;
  double t8377;
  double t8383;
  double t8458;
  double t8459;
  double t8460;
  double t8406;
  double t8414;
  t606 = Sin(var1[3]);
  t981 = Cos(var1[3]);
  t879 = Cos(var1[5]);
  t898 = Sin(var1[4]);
  t987 = Sin(var1[5]);
  t756 = Sin(var1[15]);
  t955 = -1.*t879*t606*t898;
  t1030 = t981*t987;
  t1080 = t955 + t1030;
  t1181 = Cos(var1[15]);
  t1389 = -1.*t981*t879;
  t1591 = -1.*t606*t898*t987;
  t1688 = t1389 + t1591;
  t419 = Cos(var1[4]);
  t1942 = Sin(var1[16]);
  t152 = Cos(var1[16]);
  t1995 = t1181*t1080;
  t2008 = -1.*t756*t1688;
  t2045 = t1995 + t2008;
  t2857 = Cos(var1[17]);
  t2875 = -1.*t2857;
  t2977 = 1. + t2875;
  t3028 = Sin(var1[17]);
  t3586 = -1.*t419*t1942*t606;
  t3624 = t152*t2045;
  t3719 = t3586 + t3624;
  t4072 = -1.*t152*t419*t606;
  t4084 = -1.*t1942*t2045;
  t4236 = t4072 + t4084;
  t258 = -1.*t152;
  t282 = 1. + t258;
  t320 = -0.183*t282;
  t365 = 0. + t320;
  t806 = -0.047*t756;
  t852 = 0. + t806;
  t1231 = -1.*t1181;
  t1247 = 1. + t1231;
  t1270 = 0.047*t1247;
  t1300 = 0. + t1270;
  t5575 = t981*t879*t898;
  t5754 = t606*t987;
  t6044 = t5575 + t5754;
  t6073 = -1.*t879*t606;
  t6082 = t981*t898*t987;
  t6135 = t6073 + t6082;
  t1967 = -0.183*t1942;
  t1972 = 0. + t1967;
  t2988 = -0.25*t2977;
  t3236 = -0.183*t3028;
  t3500 = 0. + t2988 + t3236;
  t6262 = t1181*t6044;
  t6292 = -1.*t756*t6135;
  t6319 = t6262 + t6292;
  t3987 = -0.183*t2977;
  t4015 = 0.25*t3028;
  t4019 = 0. + t3987 + t4015;
  t6343 = t981*t419*t1942;
  t6350 = t152*t6319;
  t6361 = t6343 + t6350;
  t6410 = t152*t981*t419;
  t6467 = -1.*t1942*t6319;
  t6487 = t6410 + t6467;
  t7812 = t1181*t981*t419*t879;
  t7835 = -1.*t981*t419*t756*t987;
  t7881 = t7812 + t7835;
  t7885 = -1.*t981*t1942*t898;
  t7887 = t152*t7881;
  t7889 = t7885 + t7887;
  t7908 = -1.*t152*t981*t898;
  t7910 = -1.*t1942*t7881;
  t7927 = t7908 + t7910;
  t8064 = t1181*t419*t879*t606;
  t8065 = -1.*t419*t756*t606*t987;
  t8066 = t8064 + t8065;
  t8070 = -1.*t1942*t606*t898;
  t8073 = t152*t8066;
  t8077 = t8070 + t8073;
  t8080 = -1.*t152*t606*t898;
  t8081 = -1.*t1942*t8066;
  t8082 = t8080 + t8081;
  t8118 = -1.*t1181*t879*t898;
  t8119 = t756*t898*t987;
  t8120 = t8118 + t8119;
  t8122 = -1.*t419*t1942;
  t8123 = t152*t8120;
  t8126 = t8122 + t8123;
  t8134 = -1.*t152*t419;
  t8138 = -1.*t1942*t8120;
  t8139 = t8134 + t8138;
  t8155 = t879*t606;
  t8158 = -1.*t981*t898*t987;
  t8159 = t8155 + t8158;
  t8161 = -1.*t756*t6044;
  t8162 = t1181*t8159;
  t8165 = t8161 + t8162;
  t8193 = t879*t606*t898;
  t8194 = -1.*t981*t987;
  t8195 = t8193 + t8194;
  t1742 = t1181*t1688;
  t8203 = -1.*t756*t8195;
  t8205 = t8203 + t1742;
  t8239 = -1.*t419*t879*t756;
  t8240 = -1.*t1181*t419*t987;
  t8241 = t8239 + t8240;
  t8270 = -1.*t1181*t6135;
  t8271 = t8161 + t8270;
  t8309 = t981*t879;
  t8313 = t606*t898*t987;
  t8315 = t8309 + t8313;
  t8318 = -1.*t1181*t8315;
  t8319 = t8203 + t8318;
  t8217 = t1181*t8195;
  t8242 = t1972*t8241;
  t8243 = t152*t3500*t8241;
  t8245 = -1.*t1942*t4019*t8241;
  t8246 = t1181*t419*t879;
  t8247 = -1.*t419*t756*t987;
  t8248 = t8246 + t8247;
  t8249 = 0.13205*t8248;
  t8250 = -1.*t2857*t1942*t8241;
  t8252 = -1.*t152*t3028*t8241;
  t8255 = t8250 + t8252;
  t8256 = -0.183*t8255;
  t8261 = t152*t2857*t8241;
  t8262 = -1.*t1942*t3028*t8241;
  t8265 = t8261 + t8262;
  t8266 = -0.25*t8265;
  t8347 = -1.*t981*t419*t1942;
  t8350 = -1.*t152*t6319;
  t8351 = t8347 + t8350;
  t6555 = t2857*t6487;
  t8327 = -1.*t756*t8315;
  t8328 = t8217 + t8327;
  t8368 = -1.*t152*t8328;
  t8369 = t3586 + t8368;
  t8371 = t152*t419*t606;
  t8372 = -1.*t1942*t8328;
  t8374 = t8371 + t8372;
  t8391 = t1942*t898;
  t8393 = -1.*t152*t8248;
  t8394 = t8391 + t8393;
  t8398 = -1.*t152*t898;
  t8399 = -1.*t1942*t8248;
  t8401 = t8398 + t8399;
  t6514 = -1.*t3028*t6361;
  t6682 = t6514 + t6555;
  t8360 = -1.*t3028*t6487;
  t8420 = -0.183*t2857;
  t8421 = -0.25*t3028;
  t8424 = t8420 + t8421;
  t8431 = 0.25*t2857;
  t8432 = t8431 + t3236;
  t8441 = t419*t1942*t606;
  t8442 = t152*t8328;
  t8444 = t8441 + t8442;
  t8377 = t2857*t8374;
  t8383 = -1.*t3028*t8374;
  t8458 = -1.*t1942*t898;
  t8459 = t152*t8248;
  t8460 = t8458 + t8459;
  t8406 = t2857*t8401;
  t8414 = -1.*t3028*t8401;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1300*t1688 + t1972*t2045 + t3500*t3719 + t4019*t4236 - 0.183*(-1.*t3028*t3719 + t2857*t4236) - 0.25*(t2857*t3719 + t3028*t4236) - 1.*t365*t419*t606 + 0.13205*(t1742 + t1080*t756) + t1080*t852;
  p_output1[10]=t1300*t6135 + t1972*t6319 + t3500*t6361 + t4019*t6487 - 0.25*(t2857*t6361 + t3028*t6487) - 0.183*t6682 + 0.13205*(t1181*t6135 + t6044*t756) + t6044*t852 + t365*t419*t981;
  p_output1[11]=0;
  p_output1[12]=t1972*t7881 + t3500*t7889 + t4019*t7927 - 0.183*(-1.*t3028*t7889 + t2857*t7927) - 0.25*(t2857*t7889 + t3028*t7927) + t419*t852*t879*t981 - 1.*t365*t898*t981 + t1300*t419*t981*t987 + 0.13205*(t419*t756*t879*t981 + t1181*t419*t981*t987);
  p_output1[13]=t1972*t8066 + t3500*t8077 + t4019*t8082 - 0.183*(-1.*t3028*t8077 + t2857*t8082) - 0.25*(t2857*t8077 + t3028*t8082) + t419*t606*t852*t879 - 1.*t365*t606*t898 + t1300*t419*t606*t987 + 0.13205*(t419*t606*t756*t879 + t1181*t419*t606*t987);
  p_output1[14]=-1.*t365*t419 + t1972*t8120 + t3500*t8126 + t4019*t8139 - 0.183*(-1.*t3028*t8126 + t2857*t8139) - 0.25*(t2857*t8126 + t3028*t8139) - 1.*t852*t879*t898 - 1.*t1300*t898*t987 + 0.13205*(-1.*t756*t879*t898 - 1.*t1181*t898*t987);
  p_output1[15]=t1300*t6044 + 0.13205*(t6262 + t756*t8159) + t1972*t8165 + t152*t3500*t8165 - 1.*t1942*t4019*t8165 - 0.183*(-1.*t1942*t2857*t8165 - 1.*t152*t3028*t8165) - 0.25*(t152*t2857*t8165 - 1.*t1942*t3028*t8165) + t8159*t852;
  p_output1[16]=t1300*t8195 + t1972*t8205 + t152*t3500*t8205 - 1.*t1942*t4019*t8205 - 0.183*(-1.*t1942*t2857*t8205 - 1.*t152*t3028*t8205) - 0.25*(t152*t2857*t8205 - 1.*t1942*t3028*t8205) + 0.13205*(t1688*t756 + t8217) + t1688*t852;
  p_output1[17]=t8242 + t8243 + t8245 + t8249 + t8256 + t8266 + t1300*t419*t879 - 1.*t419*t852*t987;
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
  p_output1[45]=-0.047*t1181*t6044 + 0.13205*t6319 + 0.047*t6135*t756 + t1972*t8271 + t152*t3500*t8271 - 1.*t1942*t4019*t8271 - 0.183*(-1.*t1942*t2857*t8271 - 1.*t152*t3028*t8271) - 0.25*(t152*t2857*t8271 - 1.*t1942*t3028*t8271);
  p_output1[46]=-0.047*t1181*t8195 + 0.047*t756*t8315 + t1972*t8319 + t152*t3500*t8319 - 1.*t1942*t4019*t8319 - 0.183*(-1.*t1942*t2857*t8319 - 1.*t152*t3028*t8319) - 0.25*(t152*t2857*t8319 - 1.*t1942*t3028*t8319) + 0.13205*t8328;
  p_output1[47]=t8242 + t8243 + t8245 + t8249 + t8256 + t8266 - 0.047*t1181*t419*t879 + 0.047*t419*t756*t987;
  p_output1[48]=-0.183*t152*t6319 + t3500*t6487 + t4019*t8351 - 0.25*(t6555 + t3028*t8351) - 0.183*(t2857*t8351 + t8360) - 0.183*t1942*t419*t981;
  p_output1[49]=-0.183*t1942*t419*t606 - 0.183*t152*t8328 + t4019*t8369 + t3500*t8374 - 0.25*(t3028*t8369 + t8377) - 0.183*(t2857*t8369 + t8383);
  p_output1[50]=-0.183*t152*t8248 + t4019*t8394 + t3500*t8401 - 0.25*(t3028*t8394 + t8406) - 0.183*(t2857*t8394 + t8414) + 0.183*t1942*t898;
  p_output1[51]=-0.25*t6682 - 0.183*(-1.*t2857*t6361 + t8360) + t6361*t8424 + t6487*t8432;
  p_output1[52]=t8374*t8432 + t8424*t8444 - 0.183*(t8383 - 1.*t2857*t8444) - 0.25*(t8377 - 1.*t3028*t8444);
  p_output1[53]=t8401*t8432 + t8424*t8460 - 0.183*(t8414 - 1.*t2857*t8460) - 0.25*(t8406 - 1.*t3028*t8460);
}



void Jp_RL_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
