/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:10:05 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_FL_calf_joint_src.h"

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
  double t2009;
  double t3691;
  double t3464;
  double t3484;
  double t4249;
  double t2314;
  double t3493;
  double t4337;
  double t5550;
  double t6795;
  double t6924;
  double t6945;
  double t6958;
  double t1768;
  double t6996;
  double t509;
  double t7016;
  double t7023;
  double t7024;
  double t7031;
  double t7033;
  double t7035;
  double t7057;
  double t7069;
  double t7072;
  double t7075;
  double t7088;
  double t7089;
  double t7092;
  double t673;
  double t1044;
  double t1428;
  double t1591;
  double t2317;
  double t2534;
  double t6878;
  double t6881;
  double t6921;
  double t6922;
  double t7167;
  double t7175;
  double t7179;
  double t7182;
  double t7190;
  double t7192;
  double t7002;
  double t7011;
  double t7055;
  double t7062;
  double t7068;
  double t7209;
  double t7210;
  double t7211;
  double t7083;
  double t7085;
  double t7086;
  double t7216;
  double t7217;
  double t7220;
  double t7225;
  double t7235;
  double t7236;
  double t7278;
  double t7290;
  double t7298;
  double t7301;
  double t7302;
  double t7304;
  double t7307;
  double t7315;
  double t7316;
  double t7353;
  double t7355;
  double t7356;
  double t7359;
  double t7361;
  double t7364;
  double t7372;
  double t7374;
  double t7379;
  double t7407;
  double t7409;
  double t7410;
  double t7412;
  double t7413;
  double t7414;
  double t7416;
  double t7417;
  double t7419;
  double t7473;
  double t7475;
  double t7477;
  double t7483;
  double t7484;
  double t7486;
  double t7520;
  double t7525;
  double t7527;
  double t6964;
  double t7539;
  double t7541;
  double t7586;
  double t7592;
  double t7594;
  double t7646;
  double t7647;
  double t7668;
  double t7669;
  double t7671;
  double t7675;
  double t7678;
  double t7548;
  double t7597;
  double t7598;
  double t7599;
  double t7611;
  double t7613;
  double t7617;
  double t7618;
  double t7620;
  double t7626;
  double t7627;
  double t7628;
  double t7629;
  double t7630;
  double t7631;
  double t7633;
  double t7712;
  double t7713;
  double t7714;
  double t7240;
  double t7686;
  double t7688;
  double t7741;
  double t7743;
  double t7745;
  double t7750;
  double t7752;
  double t7772;
  double t7775;
  double t7778;
  double t7782;
  double t7784;
  double t7785;
  double t7239;
  double t7242;
  double t7729;
  double t7809;
  double t7810;
  double t7811;
  double t7815;
  double t7816;
  double t7827;
  double t7828;
  double t7829;
  double t7757;
  double t7765;
  double t7850;
  double t7856;
  double t7864;
  double t7793;
  double t7802;
  t2009 = Sin(var1[3]);
  t3691 = Cos(var1[3]);
  t3464 = Cos(var1[5]);
  t3484 = Sin(var1[4]);
  t4249 = Sin(var1[5]);
  t2314 = Sin(var1[9]);
  t3493 = -1.*t3464*t2009*t3484;
  t4337 = t3691*t4249;
  t5550 = t3493 + t4337;
  t6795 = Cos(var1[9]);
  t6924 = -1.*t3691*t3464;
  t6945 = -1.*t2009*t3484*t4249;
  t6958 = t6924 + t6945;
  t1768 = Cos(var1[4]);
  t6996 = Sin(var1[10]);
  t509 = Cos(var1[10]);
  t7016 = t6795*t5550;
  t7023 = -1.*t2314*t6958;
  t7024 = t7016 + t7023;
  t7031 = Cos(var1[11]);
  t7033 = -1.*t7031;
  t7035 = 1. + t7033;
  t7057 = Sin(var1[11]);
  t7069 = -1.*t1768*t6996*t2009;
  t7072 = t509*t7024;
  t7075 = t7069 + t7072;
  t7088 = -1.*t509*t1768*t2009;
  t7089 = -1.*t6996*t7024;
  t7092 = t7088 + t7089;
  t673 = -1.*t509;
  t1044 = 1. + t673;
  t1428 = 0.183*t1044;
  t1591 = 0. + t1428;
  t2317 = -0.047*t2314;
  t2534 = 0. + t2317;
  t6878 = -1.*t6795;
  t6881 = 1. + t6878;
  t6921 = 0.047*t6881;
  t6922 = 0. + t6921;
  t7167 = t3691*t3464*t3484;
  t7175 = t2009*t4249;
  t7179 = t7167 + t7175;
  t7182 = -1.*t3464*t2009;
  t7190 = t3691*t3484*t4249;
  t7192 = t7182 + t7190;
  t7002 = 0.183*t6996;
  t7011 = 0. + t7002;
  t7055 = -0.1*t7035;
  t7062 = 0.183*t7057;
  t7068 = 0. + t7055 + t7062;
  t7209 = t6795*t7179;
  t7210 = -1.*t2314*t7192;
  t7211 = t7209 + t7210;
  t7083 = 0.183*t7035;
  t7085 = 0.1*t7057;
  t7086 = 0. + t7083 + t7085;
  t7216 = t3691*t1768*t6996;
  t7217 = t509*t7211;
  t7220 = t7216 + t7217;
  t7225 = t509*t3691*t1768;
  t7235 = -1.*t6996*t7211;
  t7236 = t7225 + t7235;
  t7278 = t6795*t3691*t1768*t3464;
  t7290 = -1.*t3691*t1768*t2314*t4249;
  t7298 = t7278 + t7290;
  t7301 = -1.*t3691*t6996*t3484;
  t7302 = t509*t7298;
  t7304 = t7301 + t7302;
  t7307 = -1.*t509*t3691*t3484;
  t7315 = -1.*t6996*t7298;
  t7316 = t7307 + t7315;
  t7353 = t6795*t1768*t3464*t2009;
  t7355 = -1.*t1768*t2314*t2009*t4249;
  t7356 = t7353 + t7355;
  t7359 = -1.*t6996*t2009*t3484;
  t7361 = t509*t7356;
  t7364 = t7359 + t7361;
  t7372 = -1.*t509*t2009*t3484;
  t7374 = -1.*t6996*t7356;
  t7379 = t7372 + t7374;
  t7407 = -1.*t6795*t3464*t3484;
  t7409 = t2314*t3484*t4249;
  t7410 = t7407 + t7409;
  t7412 = -1.*t1768*t6996;
  t7413 = t509*t7410;
  t7414 = t7412 + t7413;
  t7416 = -1.*t509*t1768;
  t7417 = -1.*t6996*t7410;
  t7419 = t7416 + t7417;
  t7473 = t3464*t2009;
  t7475 = -1.*t3691*t3484*t4249;
  t7477 = t7473 + t7475;
  t7483 = -1.*t2314*t7179;
  t7484 = t6795*t7477;
  t7486 = t7483 + t7484;
  t7520 = t3464*t2009*t3484;
  t7525 = -1.*t3691*t4249;
  t7527 = t7520 + t7525;
  t6964 = t6795*t6958;
  t7539 = -1.*t2314*t7527;
  t7541 = t7539 + t6964;
  t7586 = -1.*t1768*t3464*t2314;
  t7592 = -1.*t6795*t1768*t4249;
  t7594 = t7586 + t7592;
  t7646 = -1.*t6795*t7192;
  t7647 = t7483 + t7646;
  t7668 = t3691*t3464;
  t7669 = t2009*t3484*t4249;
  t7671 = t7668 + t7669;
  t7675 = -1.*t6795*t7671;
  t7678 = t7539 + t7675;
  t7548 = t6795*t7527;
  t7597 = t7011*t7594;
  t7598 = -1.*t6996*t7086*t7594;
  t7599 = t509*t7068*t7594;
  t7611 = t6795*t1768*t3464;
  t7613 = -1.*t1768*t2314*t4249;
  t7617 = t7611 + t7613;
  t7618 = 0.13205*t7617;
  t7620 = -1.*t7031*t6996*t7594;
  t7626 = -1.*t509*t7057*t7594;
  t7627 = t7620 + t7626;
  t7628 = 0.183*t7627;
  t7629 = t509*t7031*t7594;
  t7630 = -1.*t6996*t7057*t7594;
  t7631 = t7629 + t7630;
  t7633 = -0.1*t7631;
  t7712 = -1.*t3691*t1768*t6996;
  t7713 = -1.*t509*t7211;
  t7714 = t7712 + t7713;
  t7240 = t7031*t7236;
  t7686 = -1.*t2314*t7671;
  t7688 = t7548 + t7686;
  t7741 = -1.*t509*t7688;
  t7743 = t7069 + t7741;
  t7745 = t509*t1768*t2009;
  t7750 = -1.*t6996*t7688;
  t7752 = t7745 + t7750;
  t7772 = t6996*t3484;
  t7775 = -1.*t509*t7617;
  t7778 = t7772 + t7775;
  t7782 = -1.*t509*t3484;
  t7784 = -1.*t6996*t7617;
  t7785 = t7782 + t7784;
  t7239 = -1.*t7057*t7220;
  t7242 = t7239 + t7240;
  t7729 = -1.*t7057*t7236;
  t7809 = 0.183*t7031;
  t7810 = -0.1*t7057;
  t7811 = t7809 + t7810;
  t7815 = 0.1*t7031;
  t7816 = t7815 + t7062;
  t7827 = t1768*t6996*t2009;
  t7828 = t509*t7688;
  t7829 = t7827 + t7828;
  t7757 = t7031*t7752;
  t7765 = -1.*t7057*t7752;
  t7850 = -1.*t6996*t3484;
  t7856 = t509*t7617;
  t7864 = t7850 + t7856;
  t7793 = t7031*t7785;
  t7802 = -1.*t7057*t7785;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=-1.*t1591*t1768*t2009 + t2534*t5550 + t6922*t6958 + 0.13205*(t2314*t5550 + t6964) + t7011*t7024 + t7068*t7075 + t7086*t7092 + 0.183*(-1.*t7057*t7075 + t7031*t7092) - 0.1*(t7031*t7075 + t7057*t7092);
  p_output1[10]=t1591*t1768*t3691 + t2534*t7179 + t6922*t7192 + 0.13205*(t2314*t7179 + t6795*t7192) + t7011*t7211 + t7068*t7220 + t7086*t7236 - 0.1*(t7031*t7220 + t7057*t7236) + 0.183*t7242;
  p_output1[11]=0;
  p_output1[12]=t1768*t2534*t3464*t3691 - 1.*t1591*t3484*t3691 + 0.13205*(t1768*t2314*t3464*t3691 + t1768*t3691*t4249*t6795) + t1768*t3691*t4249*t6922 + t7011*t7298 + t7068*t7304 + t7086*t7316 + 0.183*(-1.*t7057*t7304 + t7031*t7316) - 0.1*(t7031*t7304 + t7057*t7316);
  p_output1[13]=t1768*t2009*t2534*t3464 - 1.*t1591*t2009*t3484 + 0.13205*(t1768*t2009*t2314*t3464 + t1768*t2009*t4249*t6795) + t1768*t2009*t4249*t6922 + t7011*t7356 + t7068*t7364 + t7086*t7379 + 0.183*(-1.*t7057*t7364 + t7031*t7379) - 0.1*(t7031*t7364 + t7057*t7379);
  p_output1[14]=-1.*t1591*t1768 - 1.*t2534*t3464*t3484 + 0.13205*(-1.*t2314*t3464*t3484 - 1.*t3484*t4249*t6795) - 1.*t3484*t4249*t6922 + t7011*t7410 + t7068*t7414 + t7086*t7419 + 0.183*(-1.*t7057*t7414 + t7031*t7419) - 0.1*(t7031*t7414 + t7057*t7419);
  p_output1[15]=t6922*t7179 + t2534*t7477 + 0.13205*(t7209 + t2314*t7477) + t7011*t7486 + t509*t7068*t7486 - 1.*t6996*t7086*t7486 + 0.183*(-1.*t6996*t7031*t7486 - 1.*t509*t7057*t7486) - 0.1*(t509*t7031*t7486 - 1.*t6996*t7057*t7486);
  p_output1[16]=t2534*t6958 + t6922*t7527 + t7011*t7541 + t509*t7068*t7541 - 1.*t6996*t7086*t7541 + 0.183*(-1.*t6996*t7031*t7541 - 1.*t509*t7057*t7541) - 0.1*(t509*t7031*t7541 - 1.*t6996*t7057*t7541) + 0.13205*(t2314*t6958 + t7548);
  p_output1[17]=-1.*t1768*t2534*t4249 + t1768*t3464*t6922 + t7597 + t7598 + t7599 + t7618 + t7628 + t7633;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=-0.047*t6795*t7179 + 0.047*t2314*t7192 + 0.13205*t7211 + t7011*t7647 + t509*t7068*t7647 - 1.*t6996*t7086*t7647 + 0.183*(-1.*t6996*t7031*t7647 - 1.*t509*t7057*t7647) - 0.1*(t509*t7031*t7647 - 1.*t6996*t7057*t7647);
  p_output1[28]=-0.047*t6795*t7527 + 0.047*t2314*t7671 + t7011*t7678 + t509*t7068*t7678 - 1.*t6996*t7086*t7678 + 0.183*(-1.*t6996*t7031*t7678 - 1.*t509*t7057*t7678) - 0.1*(t509*t7031*t7678 - 1.*t6996*t7057*t7678) + 0.13205*t7688;
  p_output1[29]=0.047*t1768*t2314*t4249 - 0.047*t1768*t3464*t6795 + t7597 + t7598 + t7599 + t7618 + t7628 + t7633;
  p_output1[30]=0.183*t1768*t3691*t6996 + 0.183*t509*t7211 + t7068*t7236 + t7086*t7714 - 0.1*(t7240 + t7057*t7714) + 0.183*(t7031*t7714 + t7729);
  p_output1[31]=0.183*t1768*t2009*t6996 + 0.183*t509*t7688 + t7086*t7743 + t7068*t7752 - 0.1*(t7057*t7743 + t7757) + 0.183*(t7031*t7743 + t7765);
  p_output1[32]=-0.183*t3484*t6996 + 0.183*t509*t7617 + t7086*t7778 + t7068*t7785 - 0.1*(t7057*t7778 + t7793) + 0.183*(t7031*t7778 + t7802);
  p_output1[33]=-0.1*t7242 + 0.183*(-1.*t7031*t7220 + t7729) + t7220*t7811 + t7236*t7816;
  p_output1[34]=t7752*t7816 + t7811*t7829 + 0.183*(t7765 - 1.*t7031*t7829) - 0.1*(t7757 - 1.*t7057*t7829);
  p_output1[35]=t7785*t7816 + t7811*t7864 + 0.183*(t7802 - 1.*t7031*t7864) - 0.1*(t7793 - 1.*t7057*t7864);
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



void Jp_FL_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
