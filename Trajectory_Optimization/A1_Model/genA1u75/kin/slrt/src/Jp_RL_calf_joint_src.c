/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:18:12 GMT-05:00
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
  double t537;
  double t1482;
  double t1107;
  double t1185;
  double t1497;
  double t908;
  double t1478;
  double t1583;
  double t1598;
  double t1742;
  double t2081;
  double t2084;
  double t2089;
  double t458;
  double t2418;
  double t269;
  double t2457;
  double t2469;
  double t2472;
  double t2476;
  double t2489;
  double t2490;
  double t2503;
  double t2530;
  double t2551;
  double t2552;
  double t2573;
  double t2574;
  double t2575;
  double t302;
  double t321;
  double t330;
  double t361;
  double t988;
  double t1102;
  double t1800;
  double t1837;
  double t1909;
  double t2071;
  double t2697;
  double t2717;
  double t2738;
  double t2763;
  double t2769;
  double t2771;
  double t2435;
  double t2455;
  double t2497;
  double t2514;
  double t2519;
  double t3154;
  double t3420;
  double t3725;
  double t2566;
  double t2567;
  double t2570;
  double t3923;
  double t3933;
  double t3959;
  double t4293;
  double t4307;
  double t4375;
  double t5429;
  double t5457;
  double t5607;
  double t5739;
  double t6042;
  double t6058;
  double t6124;
  double t6185;
  double t6210;
  double t7037;
  double t7041;
  double t7049;
  double t7070;
  double t7085;
  double t7090;
  double t7107;
  double t7122;
  double t7126;
  double t8328;
  double t8415;
  double t8471;
  double t8514;
  double t8551;
  double t8602;
  double t8639;
  double t8641;
  double t8662;
  double t8823;
  double t8830;
  double t8844;
  double t8947;
  double t8978;
  double t9000;
  double t9308;
  double t9309;
  double t9311;
  double t2278;
  double t9366;
  double t9373;
  double t10011;
  double t10061;
  double t10064;
  double t10231;
  double t10237;
  double t10296;
  double t10299;
  double t10301;
  double t10306;
  double t10315;
  double t9630;
  double t10078;
  double t10106;
  double t10166;
  double t10168;
  double t10169;
  double t10186;
  double t10190;
  double t10192;
  double t10196;
  double t10197;
  double t10199;
  double t10201;
  double t10202;
  double t10204;
  double t10210;
  double t10367;
  double t10369;
  double t10371;
  double t4471;
  double t10332;
  double t10333;
  double t10387;
  double t10390;
  double t10392;
  double t10394;
  double t10396;
  double t10409;
  double t10416;
  double t10422;
  double t10426;
  double t10428;
  double t10429;
  double t4456;
  double t4595;
  double t10378;
  double t10442;
  double t10443;
  double t10444;
  double t10446;
  double t10447;
  double t10459;
  double t10460;
  double t10461;
  double t10399;
  double t10403;
  double t10471;
  double t10472;
  double t10475;
  double t10434;
  double t10438;
  t537 = Sin(var1[3]);
  t1482 = Cos(var1[3]);
  t1107 = Cos(var1[5]);
  t1185 = Sin(var1[4]);
  t1497 = Sin(var1[5]);
  t908 = Sin(var1[15]);
  t1478 = -1.*t1107*t537*t1185;
  t1583 = t1482*t1497;
  t1598 = t1478 + t1583;
  t1742 = Cos(var1[15]);
  t2081 = -1.*t1482*t1107;
  t2084 = -1.*t537*t1185*t1497;
  t2089 = t2081 + t2084;
  t458 = Cos(var1[4]);
  t2418 = Sin(var1[16]);
  t269 = Cos(var1[16]);
  t2457 = t1742*t1598;
  t2469 = -1.*t908*t2089;
  t2472 = t2457 + t2469;
  t2476 = Cos(var1[17]);
  t2489 = -1.*t2476;
  t2490 = 1. + t2489;
  t2503 = Sin(var1[17]);
  t2530 = -1.*t458*t2418*t537;
  t2551 = t269*t2472;
  t2552 = t2530 + t2551;
  t2573 = -1.*t269*t458*t537;
  t2574 = -1.*t2418*t2472;
  t2575 = t2573 + t2574;
  t302 = -1.*t269;
  t321 = 1. + t302;
  t330 = -0.183*t321;
  t361 = 0. + t330;
  t988 = -0.047*t908;
  t1102 = 0. + t988;
  t1800 = -1.*t1742;
  t1837 = 1. + t1800;
  t1909 = 0.047*t1837;
  t2071 = 0. + t1909;
  t2697 = t1482*t1107*t1185;
  t2717 = t537*t1497;
  t2738 = t2697 + t2717;
  t2763 = -1.*t1107*t537;
  t2769 = t1482*t1185*t1497;
  t2771 = t2763 + t2769;
  t2435 = -0.183*t2418;
  t2455 = 0. + t2435;
  t2497 = -0.15*t2490;
  t2514 = -0.183*t2503;
  t2519 = 0. + t2497 + t2514;
  t3154 = t1742*t2738;
  t3420 = -1.*t908*t2771;
  t3725 = t3154 + t3420;
  t2566 = -0.183*t2490;
  t2567 = 0.15*t2503;
  t2570 = 0. + t2566 + t2567;
  t3923 = t1482*t458*t2418;
  t3933 = t269*t3725;
  t3959 = t3923 + t3933;
  t4293 = t269*t1482*t458;
  t4307 = -1.*t2418*t3725;
  t4375 = t4293 + t4307;
  t5429 = t1742*t1482*t458*t1107;
  t5457 = -1.*t1482*t458*t908*t1497;
  t5607 = t5429 + t5457;
  t5739 = -1.*t1482*t2418*t1185;
  t6042 = t269*t5607;
  t6058 = t5739 + t6042;
  t6124 = -1.*t269*t1482*t1185;
  t6185 = -1.*t2418*t5607;
  t6210 = t6124 + t6185;
  t7037 = t1742*t458*t1107*t537;
  t7041 = -1.*t458*t908*t537*t1497;
  t7049 = t7037 + t7041;
  t7070 = -1.*t2418*t537*t1185;
  t7085 = t269*t7049;
  t7090 = t7070 + t7085;
  t7107 = -1.*t269*t537*t1185;
  t7122 = -1.*t2418*t7049;
  t7126 = t7107 + t7122;
  t8328 = -1.*t1742*t1107*t1185;
  t8415 = t908*t1185*t1497;
  t8471 = t8328 + t8415;
  t8514 = -1.*t458*t2418;
  t8551 = t269*t8471;
  t8602 = t8514 + t8551;
  t8639 = -1.*t269*t458;
  t8641 = -1.*t2418*t8471;
  t8662 = t8639 + t8641;
  t8823 = t1107*t537;
  t8830 = -1.*t1482*t1185*t1497;
  t8844 = t8823 + t8830;
  t8947 = -1.*t908*t2738;
  t8978 = t1742*t8844;
  t9000 = t8947 + t8978;
  t9308 = t1107*t537*t1185;
  t9309 = -1.*t1482*t1497;
  t9311 = t9308 + t9309;
  t2278 = t1742*t2089;
  t9366 = -1.*t908*t9311;
  t9373 = t9366 + t2278;
  t10011 = -1.*t458*t1107*t908;
  t10061 = -1.*t1742*t458*t1497;
  t10064 = t10011 + t10061;
  t10231 = -1.*t1742*t2771;
  t10237 = t8947 + t10231;
  t10296 = t1482*t1107;
  t10299 = t537*t1185*t1497;
  t10301 = t10296 + t10299;
  t10306 = -1.*t1742*t10301;
  t10315 = t9366 + t10306;
  t9630 = t1742*t9311;
  t10078 = t2455*t10064;
  t10106 = t269*t2519*t10064;
  t10166 = -1.*t2418*t2570*t10064;
  t10168 = t1742*t458*t1107;
  t10169 = -1.*t458*t908*t1497;
  t10186 = t10168 + t10169;
  t10190 = 0.11079*t10186;
  t10192 = -1.*t2476*t2418*t10064;
  t10196 = -1.*t269*t2503*t10064;
  t10197 = t10192 + t10196;
  t10199 = -0.183*t10197;
  t10201 = t269*t2476*t10064;
  t10202 = -1.*t2418*t2503*t10064;
  t10204 = t10201 + t10202;
  t10210 = -0.15*t10204;
  t10367 = -1.*t1482*t458*t2418;
  t10369 = -1.*t269*t3725;
  t10371 = t10367 + t10369;
  t4471 = t2476*t4375;
  t10332 = -1.*t908*t10301;
  t10333 = t9630 + t10332;
  t10387 = -1.*t269*t10333;
  t10390 = t2530 + t10387;
  t10392 = t269*t458*t537;
  t10394 = -1.*t2418*t10333;
  t10396 = t10392 + t10394;
  t10409 = t2418*t1185;
  t10416 = -1.*t269*t10186;
  t10422 = t10409 + t10416;
  t10426 = -1.*t269*t1185;
  t10428 = -1.*t2418*t10186;
  t10429 = t10426 + t10428;
  t4456 = -1.*t2503*t3959;
  t4595 = t4456 + t4471;
  t10378 = -1.*t2503*t4375;
  t10442 = -0.183*t2476;
  t10443 = -0.15*t2503;
  t10444 = t10442 + t10443;
  t10446 = 0.15*t2476;
  t10447 = t10446 + t2514;
  t10459 = t458*t2418*t537;
  t10460 = t269*t10333;
  t10461 = t10459 + t10460;
  t10399 = t2476*t10396;
  t10403 = -1.*t2503*t10396;
  t10471 = -1.*t2418*t1185;
  t10472 = t269*t10186;
  t10475 = t10471 + t10472;
  t10434 = t2476*t10429;
  t10438 = -1.*t2503*t10429;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1102*t1598 + t2071*t2089 + t2455*t2472 + t2519*t2552 + t2570*t2575 - 0.183*(-1.*t2503*t2552 + t2476*t2575) - 0.15*(t2476*t2552 + t2503*t2575) - 1.*t361*t458*t537 + 0.11079*(t2278 + t1598*t908);
  p_output1[10]=t1102*t2738 + t2071*t2771 + t2455*t3725 + t2519*t3959 + t2570*t4375 - 0.15*(t2476*t3959 + t2503*t4375) + t1482*t361*t458 - 0.183*t4595 + 0.11079*(t1742*t2771 + t2738*t908);
  p_output1[11]=0;
  p_output1[12]=-1.*t1185*t1482*t361 + t1102*t1107*t1482*t458 + t1482*t1497*t2071*t458 + t2455*t5607 + t2519*t6058 + t2570*t6210 - 0.183*(-1.*t2503*t6058 + t2476*t6210) - 0.15*(t2476*t6058 + t2503*t6210) + 0.11079*(t1482*t1497*t1742*t458 + t1107*t1482*t458*t908);
  p_output1[13]=-1.*t1185*t361*t537 + t1102*t1107*t458*t537 + t1497*t2071*t458*t537 + t2455*t7049 + t2519*t7090 + t2570*t7126 - 0.183*(-1.*t2503*t7090 + t2476*t7126) - 0.15*(t2476*t7090 + t2503*t7126) + 0.11079*(t1497*t1742*t458*t537 + t1107*t458*t537*t908);
  p_output1[14]=-1.*t1102*t1107*t1185 - 1.*t1185*t1497*t2071 - 1.*t361*t458 + t2455*t8471 + t2519*t8602 + t2570*t8662 - 0.183*(-1.*t2503*t8602 + t2476*t8662) - 0.15*(t2476*t8602 + t2503*t8662) + 0.11079*(-1.*t1185*t1497*t1742 - 1.*t1107*t1185*t908);
  p_output1[15]=t2071*t2738 + t1102*t8844 + t2455*t9000 - 1.*t2418*t2570*t9000 + t2519*t269*t9000 - 0.15*(-1.*t2418*t2503*t9000 + t2476*t269*t9000) - 0.183*(-1.*t2418*t2476*t9000 - 1.*t2503*t269*t9000) + 0.11079*(t3154 + t8844*t908);
  p_output1[16]=t1102*t2089 + t2071*t9311 + t2455*t9373 - 1.*t2418*t2570*t9373 + t2519*t269*t9373 - 0.15*(-1.*t2418*t2503*t9373 + t2476*t269*t9373) - 0.183*(-1.*t2418*t2476*t9373 - 1.*t2503*t269*t9373) + 0.11079*(t2089*t908 + t9630);
  p_output1[17]=t10078 + t10106 + t10166 + t10190 + t10199 + t10210 - 1.*t1102*t1497*t458 + t1107*t2071*t458;
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
  p_output1[45]=t10237*t2455 - 1.*t10237*t2418*t2570 + t10237*t2519*t269 - 0.15*(-1.*t10237*t2418*t2503 + t10237*t2476*t269) - 0.183*(-1.*t10237*t2418*t2476 - 1.*t10237*t2503*t269) - 0.047*t1742*t2738 + 0.11079*t3725 + 0.047*t2771*t908;
  p_output1[46]=0.11079*t10333 + t10315*t2455 - 1.*t10315*t2418*t2570 + t10315*t2519*t269 - 0.15*(-1.*t10315*t2418*t2503 + t10315*t2476*t269) - 0.183*(-1.*t10315*t2418*t2476 - 1.*t10315*t2503*t269) + 0.047*t10301*t908 - 0.047*t1742*t9311;
  p_output1[47]=t10078 + t10106 + t10166 + t10190 + t10199 + t10210 - 0.047*t1107*t1742*t458 + 0.047*t1497*t458*t908;
  p_output1[48]=-0.183*(t10378 + t10371*t2476) + t10371*t2570 - 0.183*t269*t3725 + t2519*t4375 - 0.15*(t10371*t2503 + t4471) - 0.183*t1482*t2418*t458;
  p_output1[49]=-0.183*(t10403 + t10390*t2476) - 0.15*(t10399 + t10390*t2503) + t10396*t2519 + t10390*t2570 - 0.183*t10333*t269 - 0.183*t2418*t458*t537;
  p_output1[50]=0.183*t1185*t2418 - 0.183*(t10438 + t10422*t2476) - 0.15*(t10434 + t10422*t2503) + t10429*t2519 + t10422*t2570 - 0.183*t10186*t269;
  p_output1[51]=t10444*t3959 - 0.183*(t10378 - 1.*t2476*t3959) + t10447*t4375 - 0.15*t4595;
  p_output1[52]=t10396*t10447 + t10444*t10461 - 0.183*(t10403 - 1.*t10461*t2476) - 0.15*(t10399 - 1.*t10461*t2503);
  p_output1[53]=t10429*t10447 + t10444*t10475 - 0.183*(t10438 - 1.*t10475*t2476) - 0.15*(t10434 - 1.*t10475*t2503);
}



void Jp_RL_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
