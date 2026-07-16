/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:18:05 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RR_calf_joint_src.h"

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
  double t380;
  double t583;
  double t541;
  double t555;
  double t653;
  double t455;
  double t581;
  double t829;
  double t980;
  double t1140;
  double t1840;
  double t1841;
  double t1845;
  double t375;
  double t2389;
  double t211;
  double t2849;
  double t2850;
  double t2954;
  double t3010;
  double t3036;
  double t3037;
  double t3313;
  double t3588;
  double t3635;
  double t3687;
  double t3788;
  double t3837;
  double t3886;
  double t275;
  double t278;
  double t287;
  double t313;
  double t456;
  double t513;
  double t1685;
  double t1688;
  double t1695;
  double t1708;
  double t4584;
  double t4622;
  double t4726;
  double t4738;
  double t4760;
  double t4806;
  double t2596;
  double t2784;
  double t3163;
  double t3356;
  double t3444;
  double t4915;
  double t4970;
  double t4992;
  double t3768;
  double t3769;
  double t3780;
  double t5069;
  double t5084;
  double t5121;
  double t5187;
  double t5389;
  double t5542;
  double t7340;
  double t7357;
  double t7399;
  double t7414;
  double t7416;
  double t7466;
  double t7596;
  double t7655;
  double t7659;
  double t8659;
  double t8666;
  double t8672;
  double t8677;
  double t8693;
  double t8699;
  double t8710;
  double t8715;
  double t8721;
  double t9062;
  double t9071;
  double t9152;
  double t9192;
  double t9193;
  double t9194;
  double t9200;
  double t9210;
  double t9211;
  double t9457;
  double t9461;
  double t9542;
  double t9568;
  double t9605;
  double t9612;
  double t10011;
  double t10015;
  double t10017;
  double t2218;
  double t10022;
  double t10023;
  double t10107;
  double t10109;
  double t10110;
  double t10171;
  double t10173;
  double t10204;
  double t10207;
  double t10208;
  double t10211;
  double t10212;
  double t10061;
  double t10111;
  double t10113;
  double t10114;
  double t10115;
  double t10116;
  double t10117;
  double t10124;
  double t10127;
  double t10133;
  double t10136;
  double t10140;
  double t10161;
  double t10162;
  double t10166;
  double t10167;
  double t10250;
  double t10252;
  double t10259;
  double t6532;
  double t10219;
  double t10227;
  double t10285;
  double t10286;
  double t10288;
  double t10289;
  double t10290;
  double t10308;
  double t10309;
  double t10310;
  double t10312;
  double t10313;
  double t10314;
  double t6164;
  double t6740;
  double t10277;
  double t10327;
  double t10329;
  double t10330;
  double t10332;
  double t10333;
  double t10344;
  double t10345;
  double t10347;
  double t10293;
  double t10300;
  double t10362;
  double t10363;
  double t10364;
  double t10317;
  double t10323;
  t380 = Sin(var1[3]);
  t583 = Cos(var1[3]);
  t541 = Cos(var1[5]);
  t555 = Sin(var1[4]);
  t653 = Sin(var1[5]);
  t455 = Sin(var1[12]);
  t581 = -1.*t541*t380*t555;
  t829 = t583*t653;
  t980 = t581 + t829;
  t1140 = Cos(var1[12]);
  t1840 = -1.*t583*t541;
  t1841 = -1.*t380*t555*t653;
  t1845 = t1840 + t1841;
  t375 = Cos(var1[4]);
  t2389 = Sin(var1[13]);
  t211 = Cos(var1[13]);
  t2849 = t1140*t980;
  t2850 = -1.*t455*t1845;
  t2954 = t2849 + t2850;
  t3010 = Cos(var1[14]);
  t3036 = -1.*t3010;
  t3037 = 1. + t3036;
  t3313 = Sin(var1[14]);
  t3588 = -1.*t375*t2389*t380;
  t3635 = t211*t2954;
  t3687 = t3588 + t3635;
  t3788 = -1.*t211*t375*t380;
  t3837 = -1.*t2389*t2954;
  t3886 = t3788 + t3837;
  t275 = -1.*t211;
  t278 = 1. + t275;
  t287 = -0.183*t278;
  t313 = 0. + t287;
  t456 = 0.047*t455;
  t513 = 0. + t456;
  t1685 = -1.*t1140;
  t1688 = 1. + t1685;
  t1695 = -0.047*t1688;
  t1708 = 0. + t1695;
  t4584 = t583*t541*t555;
  t4622 = t380*t653;
  t4726 = t4584 + t4622;
  t4738 = -1.*t541*t380;
  t4760 = t583*t555*t653;
  t4806 = t4738 + t4760;
  t2596 = -0.183*t2389;
  t2784 = 0. + t2596;
  t3163 = -0.15*t3037;
  t3356 = -0.183*t3313;
  t3444 = 0. + t3163 + t3356;
  t4915 = t1140*t4726;
  t4970 = -1.*t455*t4806;
  t4992 = t4915 + t4970;
  t3768 = -0.183*t3037;
  t3769 = 0.15*t3313;
  t3780 = 0. + t3768 + t3769;
  t5069 = t583*t375*t2389;
  t5084 = t211*t4992;
  t5121 = t5069 + t5084;
  t5187 = t211*t583*t375;
  t5389 = -1.*t2389*t4992;
  t5542 = t5187 + t5389;
  t7340 = t1140*t583*t375*t541;
  t7357 = -1.*t583*t375*t455*t653;
  t7399 = t7340 + t7357;
  t7414 = -1.*t583*t2389*t555;
  t7416 = t211*t7399;
  t7466 = t7414 + t7416;
  t7596 = -1.*t211*t583*t555;
  t7655 = -1.*t2389*t7399;
  t7659 = t7596 + t7655;
  t8659 = t1140*t375*t541*t380;
  t8666 = -1.*t375*t455*t380*t653;
  t8672 = t8659 + t8666;
  t8677 = -1.*t2389*t380*t555;
  t8693 = t211*t8672;
  t8699 = t8677 + t8693;
  t8710 = -1.*t211*t380*t555;
  t8715 = -1.*t2389*t8672;
  t8721 = t8710 + t8715;
  t9062 = -1.*t1140*t541*t555;
  t9071 = t455*t555*t653;
  t9152 = t9062 + t9071;
  t9192 = -1.*t375*t2389;
  t9193 = t211*t9152;
  t9194 = t9192 + t9193;
  t9200 = -1.*t211*t375;
  t9210 = -1.*t2389*t9152;
  t9211 = t9200 + t9210;
  t9457 = t541*t380;
  t9461 = -1.*t583*t555*t653;
  t9542 = t9457 + t9461;
  t9568 = -1.*t455*t4726;
  t9605 = t1140*t9542;
  t9612 = t9568 + t9605;
  t10011 = t541*t380*t555;
  t10015 = -1.*t583*t653;
  t10017 = t10011 + t10015;
  t2218 = t1140*t1845;
  t10022 = -1.*t455*t10017;
  t10023 = t10022 + t2218;
  t10107 = -1.*t375*t541*t455;
  t10109 = -1.*t1140*t375*t653;
  t10110 = t10107 + t10109;
  t10171 = -1.*t1140*t4806;
  t10173 = t9568 + t10171;
  t10204 = t583*t541;
  t10207 = t380*t555*t653;
  t10208 = t10204 + t10207;
  t10211 = -1.*t1140*t10208;
  t10212 = t10022 + t10211;
  t10061 = t1140*t10017;
  t10111 = t2784*t10110;
  t10113 = t211*t3444*t10110;
  t10114 = -1.*t2389*t3780*t10110;
  t10115 = t1140*t375*t541;
  t10116 = -1.*t375*t455*t653;
  t10117 = t10115 + t10116;
  t10124 = -0.11079*t10117;
  t10127 = -1.*t3010*t2389*t10110;
  t10133 = -1.*t211*t3313*t10110;
  t10136 = t10127 + t10133;
  t10140 = -0.183*t10136;
  t10161 = t211*t3010*t10110;
  t10162 = -1.*t2389*t3313*t10110;
  t10166 = t10161 + t10162;
  t10167 = -0.15*t10166;
  t10250 = -1.*t583*t375*t2389;
  t10252 = -1.*t211*t4992;
  t10259 = t10250 + t10252;
  t6532 = t3010*t5542;
  t10219 = -1.*t455*t10208;
  t10227 = t10061 + t10219;
  t10285 = -1.*t211*t10227;
  t10286 = t3588 + t10285;
  t10288 = t211*t375*t380;
  t10289 = -1.*t2389*t10227;
  t10290 = t10288 + t10289;
  t10308 = t2389*t555;
  t10309 = -1.*t211*t10117;
  t10310 = t10308 + t10309;
  t10312 = -1.*t211*t555;
  t10313 = -1.*t2389*t10117;
  t10314 = t10312 + t10313;
  t6164 = -1.*t3313*t5121;
  t6740 = t6164 + t6532;
  t10277 = -1.*t3313*t5542;
  t10327 = -0.183*t3010;
  t10329 = -0.15*t3313;
  t10330 = t10327 + t10329;
  t10332 = 0.15*t3010;
  t10333 = t10332 + t3356;
  t10344 = t375*t2389*t380;
  t10345 = t211*t10227;
  t10347 = t10344 + t10345;
  t10293 = t3010*t10290;
  t10300 = -1.*t3313*t10290;
  t10362 = -1.*t2389*t555;
  t10363 = t211*t10117;
  t10364 = t10362 + t10363;
  t10317 = t3010*t10314;
  t10323 = -1.*t3313*t10314;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1708*t1845 + t2784*t2954 + t3444*t3687 - 1.*t313*t375*t380 + t3780*t3886 - 0.183*(-1.*t3313*t3687 + t3010*t3886) - 0.15*(t3010*t3687 + t3313*t3886) + t513*t980 - 0.11079*(t2218 + t455*t980);
  p_output1[10]=t1708*t4806 - 0.11079*(t455*t4726 + t1140*t4806) + t2784*t4992 + t3444*t5121 + t4726*t513 + t3780*t5542 - 0.15*(t3010*t5121 + t3313*t5542) + t313*t375*t583 - 0.183*t6740;
  p_output1[11]=0;
  p_output1[12]=t375*t513*t541*t583 - 1.*t313*t555*t583 + t1708*t375*t583*t653 - 0.11079*(t375*t455*t541*t583 + t1140*t375*t583*t653) + t2784*t7399 + t3444*t7466 + t3780*t7659 - 0.183*(-1.*t3313*t7466 + t3010*t7659) - 0.15*(t3010*t7466 + t3313*t7659);
  p_output1[13]=t375*t380*t513*t541 - 1.*t313*t380*t555 + t1708*t375*t380*t653 - 0.11079*(t375*t380*t455*t541 + t1140*t375*t380*t653) + t2784*t8672 + t3444*t8699 + t3780*t8721 - 0.183*(-1.*t3313*t8699 + t3010*t8721) - 0.15*(t3010*t8699 + t3313*t8721);
  p_output1[14]=-1.*t313*t375 - 1.*t513*t541*t555 - 1.*t1708*t555*t653 - 0.11079*(-1.*t455*t541*t555 - 1.*t1140*t555*t653) + t2784*t9152 + t3444*t9194 + t3780*t9211 - 0.183*(-1.*t3313*t9194 + t3010*t9211) - 0.15*(t3010*t9194 + t3313*t9211);
  p_output1[15]=t1708*t4726 + t513*t9542 - 0.11079*(t4915 + t455*t9542) + t2784*t9612 + t211*t3444*t9612 - 1.*t2389*t3780*t9612 - 0.183*(-1.*t2389*t3010*t9612 - 1.*t211*t3313*t9612) - 0.15*(t211*t3010*t9612 - 1.*t2389*t3313*t9612);
  p_output1[16]=t10017*t1708 + t10023*t2784 - 0.183*(-1.*t10023*t2389*t3010 - 1.*t10023*t211*t3313) - 0.15*(t10023*t211*t3010 - 1.*t10023*t2389*t3313) + t10023*t211*t3444 - 1.*t10023*t2389*t3780 - 0.11079*(t10061 + t1845*t455) + t1845*t513;
  p_output1[17]=t10111 + t10113 + t10114 + t10124 + t10140 + t10167 + t1708*t375*t541 - 1.*t375*t513*t653;
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
  p_output1[36]=t10173*t2784 - 0.183*(-1.*t10173*t2389*t3010 - 1.*t10173*t211*t3313) - 0.15*(t10173*t211*t3010 - 1.*t10173*t2389*t3313) + t10173*t211*t3444 - 1.*t10173*t2389*t3780 + 0.047*t1140*t4726 - 0.047*t455*t4806 - 0.11079*t4992;
  p_output1[37]=-0.11079*t10227 + 0.047*t10017*t1140 + t10212*t2784 - 0.183*(-1.*t10212*t2389*t3010 - 1.*t10212*t211*t3313) - 0.15*(t10212*t211*t3010 - 1.*t10212*t2389*t3313) + t10212*t211*t3444 - 1.*t10212*t2389*t3780 - 0.047*t10208*t455;
  p_output1[38]=t10111 + t10113 + t10114 + t10124 + t10140 + t10167 + 0.047*t1140*t375*t541 - 0.047*t375*t455*t653;
  p_output1[39]=-0.183*(t10277 + t10259*t3010) + t10259*t3780 - 0.183*t211*t4992 + t3444*t5542 - 0.183*t2389*t375*t583 - 0.15*(t10259*t3313 + t6532);
  p_output1[40]=-0.183*t10227*t211 - 0.183*(t10300 + t10286*t3010) - 0.15*(t10293 + t10286*t3313) + t10290*t3444 + t10286*t3780 - 0.183*t2389*t375*t380;
  p_output1[41]=-0.183*t10117*t211 - 0.183*(t10323 + t10310*t3010) - 0.15*(t10317 + t10310*t3313) + t10314*t3444 + t10310*t3780 + 0.183*t2389*t555;
  p_output1[42]=t10330*t5121 - 0.183*(t10277 - 1.*t3010*t5121) + t10333*t5542 - 0.15*t6740;
  p_output1[43]=t10290*t10333 + t10330*t10347 - 0.183*(t10300 - 1.*t10347*t3010) - 0.15*(t10293 - 1.*t10347*t3313);
  p_output1[44]=t10314*t10333 + t10330*t10364 - 0.183*(t10323 - 1.*t10364*t3010) - 0.15*(t10317 - 1.*t10364*t3313);
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



void Jp_RR_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
