/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:18:21 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RLfoot_src.h"

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
  double t406;
  double t749;
  double t518;
  double t520;
  double t835;
  double t441;
  double t691;
  double t850;
  double t861;
  double t1118;
  double t1366;
  double t1401;
  double t1403;
  double t363;
  double t1673;
  double t20;
  double t2099;
  double t2143;
  double t2290;
  double t2385;
  double t2434;
  double t2506;
  double t2555;
  double t2835;
  double t3070;
  double t3144;
  double t3680;
  double t3840;
  double t3867;
  double t22;
  double t64;
  double t156;
  double t351;
  double t492;
  double t512;
  double t1133;
  double t1154;
  double t1177;
  double t1218;
  double t4459;
  double t4506;
  double t4514;
  double t4623;
  double t4643;
  double t4768;
  double t1783;
  double t1855;
  double t2528;
  double t2718;
  double t2830;
  double t4951;
  double t5015;
  double t5021;
  double t3316;
  double t3461;
  double t3584;
  double t5115;
  double t5134;
  double t5155;
  double t5210;
  double t5240;
  double t5245;
  double t5980;
  double t6121;
  double t6143;
  double t6407;
  double t6412;
  double t6436;
  double t6499;
  double t6521;
  double t6523;
  double t6628;
  double t6629;
  double t6631;
  double t6634;
  double t6635;
  double t6636;
  double t6638;
  double t6639;
  double t6640;
  double t6667;
  double t6669;
  double t6670;
  double t6675;
  double t6676;
  double t6677;
  double t6680;
  double t6685;
  double t6686;
  double t6911;
  double t6918;
  double t6967;
  double t7081;
  double t7188;
  double t7286;
  double t7533;
  double t7612;
  double t7613;
  double t1509;
  double t7687;
  double t7730;
  double t8062;
  double t8063;
  double t8065;
  double t8310;
  double t8312;
  double t8462;
  double t8480;
  double t8489;
  double t8504;
  double t8506;
  double t7803;
  double t8070;
  double t8082;
  double t8085;
  double t8098;
  double t8110;
  double t8119;
  double t8138;
  double t8154;
  double t8162;
  double t8166;
  double t8167;
  double t8169;
  double t8178;
  double t8182;
  double t8184;
  double t8619;
  double t8620;
  double t8623;
  double t5332;
  double t8535;
  double t8540;
  double t8687;
  double t8690;
  double t8701;
  double t8733;
  double t8739;
  double t8803;
  double t8805;
  double t8810;
  double t8817;
  double t8852;
  double t8864;
  double t5320;
  double t5343;
  double t8665;
  double t9035;
  double t9064;
  double t9066;
  double t9101;
  double t9137;
  double t9204;
  double t9212;
  double t9221;
  double t8748;
  double t8788;
  double t9301;
  double t9319;
  double t9327;
  double t8875;
  double t8894;
  t406 = Sin(var1[3]);
  t749 = Cos(var1[3]);
  t518 = Cos(var1[5]);
  t520 = Sin(var1[4]);
  t835 = Sin(var1[5]);
  t441 = Sin(var1[15]);
  t691 = -1.*t518*t406*t520;
  t850 = t749*t835;
  t861 = t691 + t850;
  t1118 = Cos(var1[15]);
  t1366 = -1.*t749*t518;
  t1401 = -1.*t406*t520*t835;
  t1403 = t1366 + t1401;
  t363 = Cos(var1[4]);
  t1673 = Sin(var1[16]);
  t20 = Cos(var1[16]);
  t2099 = t1118*t861;
  t2143 = -1.*t441*t1403;
  t2290 = t2099 + t2143;
  t2385 = Cos(var1[17]);
  t2434 = -1.*t2385;
  t2506 = 1. + t2434;
  t2555 = Sin(var1[17]);
  t2835 = -1.*t363*t1673*t406;
  t3070 = t20*t2290;
  t3144 = t2835 + t3070;
  t3680 = -1.*t20*t363*t406;
  t3840 = -1.*t1673*t2290;
  t3867 = t3680 + t3840;
  t22 = -1.*t20;
  t64 = 1. + t22;
  t156 = -0.183*t64;
  t351 = 0. + t156;
  t492 = -0.047*t441;
  t512 = 0. + t492;
  t1133 = -1.*t1118;
  t1154 = 1. + t1133;
  t1177 = 0.047*t1154;
  t1218 = 0. + t1177;
  t4459 = t749*t518*t520;
  t4506 = t406*t835;
  t4514 = t4459 + t4506;
  t4623 = -1.*t518*t406;
  t4643 = t749*t520*t835;
  t4768 = t4623 + t4643;
  t1783 = -0.183*t1673;
  t1855 = 0. + t1783;
  t2528 = -0.15*t2506;
  t2718 = -0.183*t2555;
  t2830 = 0. + t2528 + t2718;
  t4951 = t1118*t4514;
  t5015 = -1.*t441*t4768;
  t5021 = t4951 + t5015;
  t3316 = -0.183*t2506;
  t3461 = 0.15*t2555;
  t3584 = 0. + t3316 + t3461;
  t5115 = t749*t363*t1673;
  t5134 = t20*t5021;
  t5155 = t5115 + t5134;
  t5210 = t20*t749*t363;
  t5240 = -1.*t1673*t5021;
  t5245 = t5210 + t5240;
  t5980 = t1118*t749*t363*t518;
  t6121 = -1.*t749*t363*t441*t835;
  t6143 = t5980 + t6121;
  t6407 = -1.*t749*t1673*t520;
  t6412 = t20*t6143;
  t6436 = t6407 + t6412;
  t6499 = -1.*t20*t749*t520;
  t6521 = -1.*t1673*t6143;
  t6523 = t6499 + t6521;
  t6628 = t1118*t363*t518*t406;
  t6629 = -1.*t363*t441*t406*t835;
  t6631 = t6628 + t6629;
  t6634 = -1.*t1673*t406*t520;
  t6635 = t20*t6631;
  t6636 = t6634 + t6635;
  t6638 = -1.*t20*t406*t520;
  t6639 = -1.*t1673*t6631;
  t6640 = t6638 + t6639;
  t6667 = -1.*t1118*t518*t520;
  t6669 = t441*t520*t835;
  t6670 = t6667 + t6669;
  t6675 = -1.*t363*t1673;
  t6676 = t20*t6670;
  t6677 = t6675 + t6676;
  t6680 = -1.*t20*t363;
  t6685 = -1.*t1673*t6670;
  t6686 = t6680 + t6685;
  t6911 = t518*t406;
  t6918 = -1.*t749*t520*t835;
  t6967 = t6911 + t6918;
  t7081 = -1.*t441*t4514;
  t7188 = t1118*t6967;
  t7286 = t7081 + t7188;
  t7533 = t518*t406*t520;
  t7612 = -1.*t749*t835;
  t7613 = t7533 + t7612;
  t1509 = t1118*t1403;
  t7687 = -1.*t441*t7613;
  t7730 = t7687 + t1509;
  t8062 = -1.*t363*t518*t441;
  t8063 = -1.*t1118*t363*t835;
  t8065 = t8062 + t8063;
  t8310 = -1.*t1118*t4768;
  t8312 = t7081 + t8310;
  t8462 = t749*t518;
  t8480 = t406*t520*t835;
  t8489 = t8462 + t8480;
  t8504 = -1.*t1118*t8489;
  t8506 = t7687 + t8504;
  t7803 = t1118*t7613;
  t8070 = t1855*t8065;
  t8082 = t20*t2830*t8065;
  t8085 = -1.*t1673*t3584*t8065;
  t8098 = t1118*t363*t518;
  t8110 = -1.*t363*t441*t835;
  t8119 = t8098 + t8110;
  t8138 = 0.11079*t8119;
  t8154 = -1.*t2385*t1673*t8065;
  t8162 = -1.*t20*t2555*t8065;
  t8166 = t8154 + t8162;
  t8167 = -0.183*t8166;
  t8169 = t20*t2385*t8065;
  t8178 = -1.*t1673*t2555*t8065;
  t8182 = t8169 + t8178;
  t8184 = -0.3*t8182;
  t8619 = -1.*t749*t363*t1673;
  t8620 = -1.*t20*t5021;
  t8623 = t8619 + t8620;
  t5332 = t2385*t5245;
  t8535 = -1.*t441*t8489;
  t8540 = t7803 + t8535;
  t8687 = -1.*t20*t8540;
  t8690 = t2835 + t8687;
  t8701 = t20*t363*t406;
  t8733 = -1.*t1673*t8540;
  t8739 = t8701 + t8733;
  t8803 = t1673*t520;
  t8805 = -1.*t20*t8119;
  t8810 = t8803 + t8805;
  t8817 = -1.*t20*t520;
  t8852 = -1.*t1673*t8119;
  t8864 = t8817 + t8852;
  t5320 = -1.*t2555*t5155;
  t5343 = t5320 + t5332;
  t8665 = -1.*t2555*t5245;
  t9035 = -0.183*t2385;
  t9064 = -0.15*t2555;
  t9066 = t9035 + t9064;
  t9101 = 0.15*t2385;
  t9137 = t9101 + t2718;
  t9204 = t363*t1673*t406;
  t9212 = t20*t8540;
  t9221 = t9204 + t9212;
  t8748 = t2385*t8739;
  t8788 = -1.*t2555*t8739;
  t9301 = -1.*t1673*t520;
  t9319 = t20*t8119;
  t9327 = t9301 + t9319;
  t8875 = t2385*t8864;
  t8894 = -1.*t2555*t8864;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1218*t1403 + t1855*t2290 + t2830*t3144 + t3584*t3867 - 0.183*(-1.*t2555*t3144 + t2385*t3867) - 0.3*(t2385*t3144 + t2555*t3867) - 1.*t351*t363*t406 + t512*t861 + 0.11079*(t1509 + t441*t861);
  p_output1[10]=t1218*t4768 + 0.11079*(t441*t4514 + t1118*t4768) + t1855*t5021 + t4514*t512 + t2830*t5155 + t3584*t5245 - 0.3*(t2385*t5155 + t2555*t5245) - 0.183*t5343 + t351*t363*t749;
  p_output1[11]=0;
  p_output1[12]=t1855*t6143 + t2830*t6436 + t3584*t6523 - 0.183*(-1.*t2555*t6436 + t2385*t6523) - 0.3*(t2385*t6436 + t2555*t6523) + t363*t512*t518*t749 - 1.*t351*t520*t749 + t1218*t363*t749*t835 + 0.11079*(t363*t441*t518*t749 + t1118*t363*t749*t835);
  p_output1[13]=t363*t406*t512*t518 - 1.*t351*t406*t520 + t1855*t6631 + t2830*t6636 + t3584*t6640 - 0.183*(-1.*t2555*t6636 + t2385*t6640) - 0.3*(t2385*t6636 + t2555*t6640) + t1218*t363*t406*t835 + 0.11079*(t363*t406*t441*t518 + t1118*t363*t406*t835);
  p_output1[14]=-1.*t351*t363 - 1.*t512*t518*t520 + t1855*t6670 + t2830*t6677 + t3584*t6686 - 0.183*(-1.*t2555*t6677 + t2385*t6686) - 0.3*(t2385*t6677 + t2555*t6686) - 1.*t1218*t520*t835 + 0.11079*(-1.*t441*t518*t520 - 1.*t1118*t520*t835);
  p_output1[15]=t1218*t4514 + t512*t6967 + 0.11079*(t4951 + t441*t6967) + t1855*t7286 + t20*t2830*t7286 - 1.*t1673*t3584*t7286 - 0.3*(t20*t2385*t7286 - 1.*t1673*t2555*t7286) - 0.183*(-1.*t1673*t2385*t7286 - 1.*t20*t2555*t7286);
  p_output1[16]=t1403*t512 + t1218*t7613 + t1855*t7730 + t20*t2830*t7730 - 1.*t1673*t3584*t7730 - 0.3*(t20*t2385*t7730 - 1.*t1673*t2555*t7730) - 0.183*(-1.*t1673*t2385*t7730 - 1.*t20*t2555*t7730) + 0.11079*(t1403*t441 + t7803);
  p_output1[17]=t1218*t363*t518 + t8070 + t8082 + t8085 + t8138 + t8167 + t8184 - 1.*t363*t512*t835;
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
  p_output1[45]=-0.047*t1118*t4514 + 0.047*t441*t4768 + 0.11079*t5021 + t1855*t8312 + t20*t2830*t8312 - 1.*t1673*t3584*t8312 - 0.3*(t20*t2385*t8312 - 1.*t1673*t2555*t8312) - 0.183*(-1.*t1673*t2385*t8312 - 1.*t20*t2555*t8312);
  p_output1[46]=-0.047*t1118*t7613 + 0.047*t441*t8489 + t1855*t8506 + t20*t2830*t8506 - 1.*t1673*t3584*t8506 - 0.3*(t20*t2385*t8506 - 1.*t1673*t2555*t8506) - 0.183*(-1.*t1673*t2385*t8506 - 1.*t20*t2555*t8506) + 0.11079*t8540;
  p_output1[47]=-0.047*t1118*t363*t518 + t8070 + t8082 + t8085 + t8138 + t8167 + t8184 + 0.047*t363*t441*t835;
  p_output1[48]=-0.183*t20*t5021 + t2830*t5245 - 0.183*t1673*t363*t749 + t3584*t8623 - 0.3*(t5332 + t2555*t8623) - 0.183*(t2385*t8623 + t8665);
  p_output1[49]=-0.183*t1673*t363*t406 - 0.183*t20*t8540 + t3584*t8690 + t2830*t8739 - 0.3*(t2555*t8690 + t8748) - 0.183*(t2385*t8690 + t8788);
  p_output1[50]=0.183*t1673*t520 - 0.183*t20*t8119 + t3584*t8810 + t2830*t8864 - 0.3*(t2555*t8810 + t8875) - 0.183*(t2385*t8810 + t8894);
  p_output1[51]=-0.3*t5343 - 0.183*(-1.*t2385*t5155 + t8665) + t5155*t9066 + t5245*t9137;
  p_output1[52]=t8739*t9137 + t9066*t9221 - 0.183*(t8788 - 1.*t2385*t9221) - 0.3*(t8748 - 1.*t2555*t9221);
  p_output1[53]=t8864*t9137 + t9066*t9327 - 0.183*(t8894 - 1.*t2385*t9327) - 0.3*(t8875 - 1.*t2555*t9327);
}



void Jp_RLfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
