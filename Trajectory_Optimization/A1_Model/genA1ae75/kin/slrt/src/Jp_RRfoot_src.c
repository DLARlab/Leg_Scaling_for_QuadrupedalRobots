/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:51:07 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RRfoot_src.h"

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
  double t359;
  double t1126;
  double t792;
  double t910;
  double t1140;
  double t672;
  double t1022;
  double t1192;
  double t1590;
  double t1687;
  double t2125;
  double t2153;
  double t2294;
  double t353;
  double t3047;
  double t102;
  double t3185;
  double t3235;
  double t3283;
  double t3349;
  double t3366;
  double t3453;
  double t3500;
  double t3698;
  double t3703;
  double t3757;
  double t3849;
  double t3916;
  double t3967;
  double t247;
  double t274;
  double t334;
  double t346;
  double t696;
  double t765;
  double t1697;
  double t1798;
  double t2018;
  double t2119;
  double t5449;
  double t5592;
  double t5636;
  double t5804;
  double t5932;
  double t5999;
  double t3137;
  double t3159;
  double t3479;
  double t3585;
  double t3586;
  double t6727;
  double t6840;
  double t6843;
  double t3780;
  double t3789;
  double t3798;
  double t6937;
  double t6963;
  double t7020;
  double t7159;
  double t7174;
  double t7183;
  double t7361;
  double t7363;
  double t7364;
  double t7376;
  double t7397;
  double t7398;
  double t7434;
  double t7458;
  double t7477;
  double t7584;
  double t7585;
  double t7592;
  double t7603;
  double t7611;
  double t7612;
  double t7618;
  double t7622;
  double t7630;
  double t7759;
  double t7761;
  double t7762;
  double t7780;
  double t7782;
  double t7786;
  double t7794;
  double t7795;
  double t7796;
  double t7864;
  double t7871;
  double t7886;
  double t7903;
  double t7927;
  double t7928;
  double t8097;
  double t8098;
  double t8099;
  double t2440;
  double t8106;
  double t8107;
  double t8174;
  double t8177;
  double t8178;
  double t8224;
  double t8229;
  double t8318;
  double t8324;
  double t8341;
  double t8361;
  double t8363;
  double t8123;
  double t8179;
  double t8181;
  double t8184;
  double t8186;
  double t8187;
  double t8189;
  double t8190;
  double t8195;
  double t8196;
  double t8197;
  double t8198;
  double t8201;
  double t8207;
  double t8208;
  double t8210;
  double t8451;
  double t8454;
  double t8457;
  double t7203;
  double t8380;
  double t8383;
  double t8517;
  double t8519;
  double t8524;
  double t8528;
  double t8535;
  double t8569;
  double t8570;
  double t8571;
  double t8574;
  double t8581;
  double t8583;
  double t7201;
  double t7204;
  double t8502;
  double t8610;
  double t8612;
  double t8614;
  double t8616;
  double t8619;
  double t8639;
  double t8640;
  double t8642;
  double t8541;
  double t8548;
  double t8696;
  double t8699;
  double t8701;
  double t8589;
  double t8597;
  t359 = Sin(var1[3]);
  t1126 = Cos(var1[3]);
  t792 = Cos(var1[5]);
  t910 = Sin(var1[4]);
  t1140 = Sin(var1[5]);
  t672 = Sin(var1[12]);
  t1022 = -1.*t792*t359*t910;
  t1192 = t1126*t1140;
  t1590 = t1022 + t1192;
  t1687 = Cos(var1[12]);
  t2125 = -1.*t1126*t792;
  t2153 = -1.*t359*t910*t1140;
  t2294 = t2125 + t2153;
  t353 = Cos(var1[4]);
  t3047 = Sin(var1[13]);
  t102 = Cos(var1[13]);
  t3185 = t1687*t1590;
  t3235 = -1.*t672*t2294;
  t3283 = t3185 + t3235;
  t3349 = Cos(var1[14]);
  t3366 = -1.*t3349;
  t3453 = 1. + t3366;
  t3500 = Sin(var1[14]);
  t3698 = -1.*t353*t3047*t359;
  t3703 = t102*t3283;
  t3757 = t3698 + t3703;
  t3849 = -1.*t102*t353*t359;
  t3916 = -1.*t3047*t3283;
  t3967 = t3849 + t3916;
  t247 = -1.*t102;
  t274 = 1. + t247;
  t334 = -0.183*t274;
  t346 = 0. + t334;
  t696 = 0.047*t672;
  t765 = 0. + t696;
  t1697 = -1.*t1687;
  t1798 = 1. + t1697;
  t2018 = -0.047*t1798;
  t2119 = 0. + t2018;
  t5449 = t1126*t792*t910;
  t5592 = t359*t1140;
  t5636 = t5449 + t5592;
  t5804 = -1.*t792*t359;
  t5932 = t1126*t910*t1140;
  t5999 = t5804 + t5932;
  t3137 = -0.183*t3047;
  t3159 = 0. + t3137;
  t3479 = -0.15*t3453;
  t3585 = -0.183*t3500;
  t3586 = 0. + t3479 + t3585;
  t6727 = t1687*t5636;
  t6840 = -1.*t672*t5999;
  t6843 = t6727 + t6840;
  t3780 = -0.183*t3453;
  t3789 = 0.15*t3500;
  t3798 = 0. + t3780 + t3789;
  t6937 = t1126*t353*t3047;
  t6963 = t102*t6843;
  t7020 = t6937 + t6963;
  t7159 = t102*t1126*t353;
  t7174 = -1.*t3047*t6843;
  t7183 = t7159 + t7174;
  t7361 = t1687*t1126*t353*t792;
  t7363 = -1.*t1126*t353*t672*t1140;
  t7364 = t7361 + t7363;
  t7376 = -1.*t1126*t3047*t910;
  t7397 = t102*t7364;
  t7398 = t7376 + t7397;
  t7434 = -1.*t102*t1126*t910;
  t7458 = -1.*t3047*t7364;
  t7477 = t7434 + t7458;
  t7584 = t1687*t353*t792*t359;
  t7585 = -1.*t353*t672*t359*t1140;
  t7592 = t7584 + t7585;
  t7603 = -1.*t3047*t359*t910;
  t7611 = t102*t7592;
  t7612 = t7603 + t7611;
  t7618 = -1.*t102*t359*t910;
  t7622 = -1.*t3047*t7592;
  t7630 = t7618 + t7622;
  t7759 = -1.*t1687*t792*t910;
  t7761 = t672*t910*t1140;
  t7762 = t7759 + t7761;
  t7780 = -1.*t353*t3047;
  t7782 = t102*t7762;
  t7786 = t7780 + t7782;
  t7794 = -1.*t102*t353;
  t7795 = -1.*t3047*t7762;
  t7796 = t7794 + t7795;
  t7864 = t792*t359;
  t7871 = -1.*t1126*t910*t1140;
  t7886 = t7864 + t7871;
  t7903 = -1.*t672*t5636;
  t7927 = t1687*t7886;
  t7928 = t7903 + t7927;
  t8097 = t792*t359*t910;
  t8098 = -1.*t1126*t1140;
  t8099 = t8097 + t8098;
  t2440 = t1687*t2294;
  t8106 = -1.*t672*t8099;
  t8107 = t8106 + t2440;
  t8174 = -1.*t353*t792*t672;
  t8177 = -1.*t1687*t353*t1140;
  t8178 = t8174 + t8177;
  t8224 = -1.*t1687*t5999;
  t8229 = t7903 + t8224;
  t8318 = t1126*t792;
  t8324 = t359*t910*t1140;
  t8341 = t8318 + t8324;
  t8361 = -1.*t1687*t8341;
  t8363 = t8106 + t8361;
  t8123 = t1687*t8099;
  t8179 = t3159*t8178;
  t8181 = t102*t3586*t8178;
  t8184 = -1.*t3047*t3798*t8178;
  t8186 = t1687*t353*t792;
  t8187 = -1.*t353*t672*t1140;
  t8189 = t8186 + t8187;
  t8190 = -0.13205*t8189;
  t8195 = -1.*t3349*t3047*t8178;
  t8196 = -1.*t102*t3500*t8178;
  t8197 = t8195 + t8196;
  t8198 = -0.183*t8197;
  t8201 = t102*t3349*t8178;
  t8207 = -1.*t3047*t3500*t8178;
  t8208 = t8201 + t8207;
  t8210 = -0.3*t8208;
  t8451 = -1.*t1126*t353*t3047;
  t8454 = -1.*t102*t6843;
  t8457 = t8451 + t8454;
  t7203 = t3349*t7183;
  t8380 = -1.*t672*t8341;
  t8383 = t8123 + t8380;
  t8517 = -1.*t102*t8383;
  t8519 = t3698 + t8517;
  t8524 = t102*t353*t359;
  t8528 = -1.*t3047*t8383;
  t8535 = t8524 + t8528;
  t8569 = t3047*t910;
  t8570 = -1.*t102*t8189;
  t8571 = t8569 + t8570;
  t8574 = -1.*t102*t910;
  t8581 = -1.*t3047*t8189;
  t8583 = t8574 + t8581;
  t7201 = -1.*t3500*t7020;
  t7204 = t7201 + t7203;
  t8502 = -1.*t3500*t7183;
  t8610 = -0.183*t3349;
  t8612 = -0.15*t3500;
  t8614 = t8610 + t8612;
  t8616 = 0.15*t3349;
  t8619 = t8616 + t3585;
  t8639 = t353*t3047*t359;
  t8640 = t102*t8383;
  t8642 = t8639 + t8640;
  t8541 = t3349*t8535;
  t8548 = -1.*t3500*t8535;
  t8696 = -1.*t3047*t910;
  t8699 = t102*t8189;
  t8701 = t8696 + t8699;
  t8589 = t3349*t8583;
  t8597 = -1.*t3500*t8583;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t2119*t2294 + t3159*t3283 - 1.*t346*t353*t359 + t3586*t3757 + t3798*t3967 - 0.183*(-1.*t3500*t3757 + t3349*t3967) - 0.3*(t3349*t3757 + t3500*t3967) - 0.13205*(t2440 + t1590*t672) + t1590*t765;
  p_output1[10]=t1126*t346*t353 + t2119*t5999 - 0.13205*(t1687*t5999 + t5636*t672) + t3159*t6843 + t3586*t7020 + t3798*t7183 - 0.3*(t3349*t7020 + t3500*t7183) - 0.183*t7204 + t5636*t765;
  p_output1[11]=0;
  p_output1[12]=t1126*t1140*t2119*t353 + t3159*t7364 + t3586*t7398 + t3798*t7477 - 0.183*(-1.*t3500*t7398 + t3349*t7477) - 0.3*(t3349*t7398 + t3500*t7477) + t1126*t353*t765*t792 - 0.13205*(t1126*t1140*t1687*t353 + t1126*t353*t672*t792) - 1.*t1126*t346*t910;
  p_output1[13]=t1140*t2119*t353*t359 + t3159*t7592 + t3586*t7612 + t3798*t7630 - 0.183*(-1.*t3500*t7612 + t3349*t7630) - 0.3*(t3349*t7612 + t3500*t7630) + t353*t359*t765*t792 - 0.13205*(t1140*t1687*t353*t359 + t353*t359*t672*t792) - 1.*t346*t359*t910;
  p_output1[14]=-1.*t346*t353 + t3159*t7762 + t3586*t7786 + t3798*t7796 - 0.183*(-1.*t3500*t7786 + t3349*t7796) - 0.3*(t3349*t7786 + t3500*t7796) - 1.*t1140*t2119*t910 - 1.*t765*t792*t910 - 0.13205*(-1.*t1140*t1687*t910 - 1.*t672*t792*t910);
  p_output1[15]=t2119*t5636 + t765*t7886 - 0.13205*(t6727 + t672*t7886) + t3159*t7928 + t102*t3586*t7928 - 1.*t3047*t3798*t7928 - 0.183*(-1.*t3047*t3349*t7928 - 1.*t102*t3500*t7928) - 0.3*(t102*t3349*t7928 - 1.*t3047*t3500*t7928);
  p_output1[16]=t2294*t765 + t2119*t8099 + t3159*t8107 + t102*t3586*t8107 - 1.*t3047*t3798*t8107 - 0.183*(-1.*t3047*t3349*t8107 - 1.*t102*t3500*t8107) - 0.3*(t102*t3349*t8107 - 1.*t3047*t3500*t8107) - 0.13205*(t2294*t672 + t8123);
  p_output1[17]=-1.*t1140*t353*t765 + t2119*t353*t792 + t8179 + t8181 + t8184 + t8190 + t8198 + t8210;
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
  p_output1[36]=0.047*t1687*t5636 - 0.047*t5999*t672 - 0.13205*t6843 + t3159*t8229 + t102*t3586*t8229 - 1.*t3047*t3798*t8229 - 0.183*(-1.*t3047*t3349*t8229 - 1.*t102*t3500*t8229) - 0.3*(t102*t3349*t8229 - 1.*t3047*t3500*t8229);
  p_output1[37]=0.047*t1687*t8099 - 0.047*t672*t8341 + t3159*t8363 + t102*t3586*t8363 - 1.*t3047*t3798*t8363 - 0.183*(-1.*t3047*t3349*t8363 - 1.*t102*t3500*t8363) - 0.3*(t102*t3349*t8363 - 1.*t3047*t3500*t8363) - 0.13205*t8383;
  p_output1[38]=-0.047*t1140*t353*t672 + 0.047*t1687*t353*t792 + t8179 + t8181 + t8184 + t8190 + t8198 + t8210;
  p_output1[39]=-0.183*t1126*t3047*t353 - 0.183*t102*t6843 + t3586*t7183 + t3798*t8457 - 0.3*(t7203 + t3500*t8457) - 0.183*(t3349*t8457 + t8502);
  p_output1[40]=-0.183*t3047*t353*t359 - 0.183*t102*t8383 + t3798*t8519 + t3586*t8535 - 0.3*(t3500*t8519 + t8541) - 0.183*(t3349*t8519 + t8548);
  p_output1[41]=-0.183*t102*t8189 + t3798*t8571 + t3586*t8583 - 0.3*(t3500*t8571 + t8589) - 0.183*(t3349*t8571 + t8597) + 0.183*t3047*t910;
  p_output1[42]=-0.3*t7204 - 0.183*(-1.*t3349*t7020 + t8502) + t7020*t8614 + t7183*t8619;
  p_output1[43]=t8535*t8619 + t8614*t8642 - 0.183*(t8548 - 1.*t3349*t8642) - 0.3*(t8541 - 1.*t3500*t8642);
  p_output1[44]=t8583*t8619 + t8614*t8701 - 0.183*(t8597 - 1.*t3349*t8701) - 0.3*(t8589 - 1.*t3500*t8701);
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



void Jp_RRfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
