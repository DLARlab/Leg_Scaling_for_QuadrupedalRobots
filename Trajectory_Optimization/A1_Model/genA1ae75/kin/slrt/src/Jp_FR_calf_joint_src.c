/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:50:37 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_FR_calf_joint_src.h"

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
  double t1676;
  double t1947;
  double t1968;
  double t1942;
  double t1998;
  double t1731;
  double t1950;
  double t2000;
  double t2007;
  double t2098;
  double t2139;
  double t2155;
  double t2168;
  double t402;
  double t721;
  double t2211;
  double t2213;
  double t2216;
  double t2217;
  double t2258;
  double t2265;
  double t2266;
  double t2289;
  double t2242;
  double t2243;
  double t2251;
  double t2312;
  double t2314;
  double t2334;
  double t1217;
  double t1376;
  double t1460;
  double t1553;
  double t1742;
  double t1931;
  double t1932;
  double t1938;
  double t2172;
  double t2197;
  double t2613;
  double t2885;
  double t2903;
  double t4098;
  double t7645;
  double t7774;
  double t2223;
  double t2230;
  double t8648;
  double t8701;
  double t8704;
  double t2277;
  double t2295;
  double t2300;
  double t2340;
  double t2347;
  double t2348;
  double t8761;
  double t8762;
  double t8785;
  double t8831;
  double t8833;
  double t8867;
  double t9030;
  double t9046;
  double t9047;
  double t9053;
  double t9067;
  double t9087;
  double t9092;
  double t9093;
  double t9096;
  double t9206;
  double t9207;
  double t9208;
  double t9220;
  double t9229;
  double t9232;
  double t9237;
  double t9238;
  double t9240;
  double t9279;
  double t9280;
  double t9281;
  double t9289;
  double t9290;
  double t9292;
  double t9298;
  double t9303;
  double t9304;
  double t9352;
  double t9353;
  double t9354;
  double t9371;
  double t9372;
  double t9373;
  double t9398;
  double t9399;
  double t9401;
  double t2202;
  double t9413;
  double t9414;
  double t9447;
  double t9452;
  double t9454;
  double t9489;
  double t9495;
  double t9405;
  double t9517;
  double t9518;
  double t9520;
  double t9533;
  double t9536;
  double t9439;
  double t9441;
  double t9443;
  double t9444;
  double t9455;
  double t9457;
  double t9460;
  double t9462;
  double t9463;
  double t9465;
  double t9466;
  double t9467;
  double t9471;
  double t9472;
  double t9474;
  double t8895;
  double t9570;
  double t9571;
  double t9572;
  double t9528;
  double t9531;
  double t9596;
  double t9597;
  double t9599;
  double t9592;
  double t9593;
  double t9624;
  double t9625;
  double t9626;
  double t9618;
  double t9620;
  double t9621;
  double t8900;
  double t8904;
  double t9582;
  double t9647;
  double t9648;
  double t9650;
  double t9653;
  double t9654;
  double t9602;
  double t9662;
  double t9663;
  double t9665;
  double t9609;
  double t9628;
  double t9685;
  double t9686;
  double t9687;
  double t9636;
  t1676 = Sin(var1[3]);
  t1947 = Cos(var1[5]);
  t1968 = Sin(var1[4]);
  t1942 = Cos(var1[3]);
  t1998 = Sin(var1[5]);
  t1731 = Cos(var1[6]);
  t1950 = -1.*t1942*t1947;
  t2000 = -1.*t1676*t1968*t1998;
  t2007 = t1950 + t2000;
  t2098 = -1.*t1947*t1676*t1968;
  t2139 = t1942*t1998;
  t2155 = t2098 + t2139;
  t2168 = Sin(var1[6]);
  t402 = Cos(var1[4]);
  t721 = Cos(var1[7]);
  t2211 = t1731*t2155;
  t2213 = -1.*t2007*t2168;
  t2216 = t2211 + t2213;
  t2217 = Sin(var1[7]);
  t2258 = Cos(var1[8]);
  t2265 = -1.*t2258;
  t2266 = 1. + t2265;
  t2289 = Sin(var1[8]);
  t2242 = -1.*t402*t721*t1676;
  t2243 = -1.*t2216*t2217;
  t2251 = t2242 + t2243;
  t2312 = t721*t2216;
  t2314 = -1.*t402*t1676*t2217;
  t2334 = t2312 + t2314;
  t1217 = -1.*t721;
  t1376 = 1. + t1217;
  t1460 = 0.183*t1376;
  t1553 = 0. + t1460;
  t1742 = -1.*t1731;
  t1931 = 1. + t1742;
  t1932 = -0.047*t1931;
  t1938 = 0. + t1932;
  t2172 = 0.047*t2168;
  t2197 = 0. + t2172;
  t2613 = -1.*t1947*t1676;
  t2885 = t1942*t1968*t1998;
  t2903 = t2613 + t2885;
  t4098 = t1942*t1947*t1968;
  t7645 = t1676*t1998;
  t7774 = t4098 + t7645;
  t2223 = 0.183*t2217;
  t2230 = 0. + t2223;
  t8648 = t1731*t7774;
  t8701 = -1.*t2903*t2168;
  t8704 = t8648 + t8701;
  t2277 = 0.183*t2266;
  t2295 = 0.15*t2289;
  t2300 = 0. + t2277 + t2295;
  t2340 = -0.15*t2266;
  t2347 = 0.183*t2289;
  t2348 = 0. + t2340 + t2347;
  t8761 = t1942*t402*t721;
  t8762 = -1.*t8704*t2217;
  t8785 = t8761 + t8762;
  t8831 = t721*t8704;
  t8833 = t1942*t402*t2217;
  t8867 = t8831 + t8833;
  t9030 = t1942*t402*t1947*t1731;
  t9046 = -1.*t1942*t402*t1998*t2168;
  t9047 = t9030 + t9046;
  t9053 = -1.*t1942*t721*t1968;
  t9067 = -1.*t9047*t2217;
  t9087 = t9053 + t9067;
  t9092 = t721*t9047;
  t9093 = -1.*t1942*t1968*t2217;
  t9096 = t9092 + t9093;
  t9206 = t402*t1947*t1731*t1676;
  t9207 = -1.*t402*t1676*t1998*t2168;
  t9208 = t9206 + t9207;
  t9220 = -1.*t721*t1676*t1968;
  t9229 = -1.*t9208*t2217;
  t9232 = t9220 + t9229;
  t9237 = t721*t9208;
  t9238 = -1.*t1676*t1968*t2217;
  t9240 = t9237 + t9238;
  t9279 = -1.*t1947*t1731*t1968;
  t9280 = t1968*t1998*t2168;
  t9281 = t9279 + t9280;
  t9289 = -1.*t402*t721;
  t9290 = -1.*t9281*t2217;
  t9292 = t9289 + t9290;
  t9298 = t721*t9281;
  t9303 = -1.*t402*t2217;
  t9304 = t9298 + t9303;
  t9352 = t1947*t1676;
  t9353 = -1.*t1942*t1968*t1998;
  t9354 = t9352 + t9353;
  t9371 = t1731*t9354;
  t9372 = -1.*t7774*t2168;
  t9373 = t9371 + t9372;
  t9398 = t1947*t1676*t1968;
  t9399 = -1.*t1942*t1998;
  t9401 = t9398 + t9399;
  t2202 = t1731*t2007;
  t9413 = -1.*t9401*t2168;
  t9414 = t2202 + t9413;
  t9447 = -1.*t402*t1731*t1998;
  t9452 = -1.*t402*t1947*t2168;
  t9454 = t9447 + t9452;
  t9489 = -1.*t1731*t2903;
  t9495 = t9489 + t9372;
  t9405 = t1731*t9401;
  t9517 = t1942*t1947;
  t9518 = t1676*t1968*t1998;
  t9520 = t9517 + t9518;
  t9533 = -1.*t1731*t9520;
  t9536 = t9533 + t9413;
  t9439 = t402*t1947*t1731;
  t9441 = -1.*t402*t1998*t2168;
  t9443 = t9439 + t9441;
  t9444 = -0.13205*t9443;
  t9455 = t9454*t2230;
  t9457 = -1.*t9454*t2217*t2300;
  t9460 = t721*t9454*t2348;
  t9462 = -1.*t2258*t9454*t2217;
  t9463 = -1.*t721*t9454*t2289;
  t9465 = t9462 + t9463;
  t9466 = 0.183*t9465;
  t9467 = t721*t2258*t9454;
  t9471 = -1.*t9454*t2217*t2289;
  t9472 = t9467 + t9471;
  t9474 = -0.15*t9472;
  t8895 = t2258*t8785;
  t9570 = -1.*t721*t8704;
  t9571 = -1.*t1942*t402*t2217;
  t9572 = t9570 + t9571;
  t9528 = -1.*t9520*t2168;
  t9531 = t9405 + t9528;
  t9596 = t402*t721*t1676;
  t9597 = -1.*t9531*t2217;
  t9599 = t9596 + t9597;
  t9592 = -1.*t721*t9531;
  t9593 = t9592 + t2314;
  t9624 = -1.*t721*t1968;
  t9625 = -1.*t9443*t2217;
  t9626 = t9624 + t9625;
  t9618 = -1.*t721*t9443;
  t9620 = t1968*t2217;
  t9621 = t9618 + t9620;
  t8900 = -1.*t8867*t2289;
  t8904 = t8895 + t8900;
  t9582 = -1.*t8785*t2289;
  t9647 = 0.183*t2258;
  t9648 = -0.15*t2289;
  t9650 = t9647 + t9648;
  t9653 = 0.15*t2258;
  t9654 = t9653 + t2347;
  t9602 = t2258*t9599;
  t9662 = t721*t9531;
  t9663 = t402*t1676*t2217;
  t9665 = t9662 + t9663;
  t9609 = -1.*t9599*t2289;
  t9628 = t2258*t9626;
  t9685 = t721*t9443;
  t9686 = -1.*t1968*t2217;
  t9687 = t9685 + t9686;
  t9636 = -1.*t9626*t2289;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1938*t2007 + t2155*t2197 - 0.13205*(t2155*t2168 + t2202) + t2216*t2230 + t2251*t2300 - 0.15*(t2251*t2289 + t2258*t2334) + 0.183*(t2251*t2258 - 1.*t2289*t2334) + t2334*t2348 - 1.*t1553*t1676*t402;
  p_output1[10]=t1938*t2903 + t1553*t1942*t402 + t2197*t7774 - 0.13205*(t1731*t2903 + t2168*t7774) + t2230*t8704 + t2300*t8785 + t2348*t8867 - 0.15*(t2289*t8785 + t2258*t8867) + 0.183*t8904;
  p_output1[11]=0;
  p_output1[12]=-1.*t1553*t1942*t1968 + t1938*t1942*t1998*t402 + t1942*t1947*t2197*t402 - 0.13205*(t1731*t1942*t1998*t402 + t1942*t1947*t2168*t402) + t2230*t9047 + t2300*t9087 + t2348*t9096 - 0.15*(t2289*t9087 + t2258*t9096) + 0.183*(t2258*t9087 - 1.*t2289*t9096);
  p_output1[13]=-1.*t1553*t1676*t1968 + t1676*t1938*t1998*t402 + t1676*t1947*t2197*t402 - 0.13205*(t1676*t1731*t1998*t402 + t1676*t1947*t2168*t402) + t2230*t9208 + t2300*t9232 + t2348*t9240 - 0.15*(t2289*t9232 + t2258*t9240) + 0.183*(t2258*t9232 - 1.*t2289*t9240);
  p_output1[14]=-1.*t1938*t1968*t1998 - 0.13205*(-1.*t1731*t1968*t1998 - 1.*t1947*t1968*t2168) - 1.*t1947*t1968*t2197 - 1.*t1553*t402 + t2230*t9281 + t2300*t9292 + t2348*t9304 - 0.15*(t2289*t9292 + t2258*t9304) + 0.183*(t2258*t9292 - 1.*t2289*t9304);
  p_output1[15]=t1938*t7774 + t2197*t9354 - 0.13205*(t8648 + t2168*t9354) + t2230*t9373 - 1.*t2217*t2300*t9373 + t2348*t721*t9373 - 0.15*(-1.*t2217*t2289*t9373 + t2258*t721*t9373) + 0.183*(-1.*t2217*t2258*t9373 - 1.*t2289*t721*t9373);
  p_output1[16]=t2007*t2197 + t1938*t9401 - 0.13205*(t2007*t2168 + t9405) + t2230*t9414 - 1.*t2217*t2300*t9414 + t2348*t721*t9414 - 0.15*(-1.*t2217*t2289*t9414 + t2258*t721*t9414) + 0.183*(-1.*t2217*t2258*t9414 - 1.*t2289*t721*t9414);
  p_output1[17]=t1938*t1947*t402 - 1.*t1998*t2197*t402 + t9444 + t9455 + t9457 + t9460 + t9466 + t9474;
  p_output1[18]=-0.047*t2168*t2903 + 0.047*t1731*t7774 - 0.13205*t8704 + t2230*t9495 - 1.*t2217*t2300*t9495 + t2348*t721*t9495 - 0.15*(-1.*t2217*t2289*t9495 + t2258*t721*t9495) + 0.183*(-1.*t2217*t2258*t9495 - 1.*t2289*t721*t9495);
  p_output1[19]=0.047*t1731*t9401 - 0.047*t2168*t9520 - 0.13205*t9531 + t2230*t9536 - 1.*t2217*t2300*t9536 + t2348*t721*t9536 - 0.15*(-1.*t2217*t2289*t9536 + t2258*t721*t9536) + 0.183*(-1.*t2217*t2258*t9536 - 1.*t2289*t721*t9536);
  p_output1[20]=0.047*t1731*t1947*t402 - 0.047*t1998*t2168*t402 + t9444 + t9455 + t9457 + t9460 + t9466 + t9474;
  p_output1[21]=0.183*t1942*t2217*t402 + 0.183*t721*t8704 + t2348*t8785 + t2300*t9572 - 0.15*(t8895 + t2289*t9572) + 0.183*(t2258*t9572 + t9582);
  p_output1[22]=0.183*t1676*t2217*t402 + 0.183*t721*t9531 + t2300*t9593 + t2348*t9599 - 0.15*(t2289*t9593 + t9602) + 0.183*(t2258*t9593 + t9609);
  p_output1[23]=-0.183*t1968*t2217 + 0.183*t721*t9443 + t2300*t9621 + t2348*t9626 - 0.15*(t2289*t9621 + t9628) + 0.183*(t2258*t9621 + t9636);
  p_output1[24]=-0.15*t8904 + 0.183*(-1.*t2258*t8867 + t9582) + t8867*t9650 + t8785*t9654;
  p_output1[25]=t9599*t9654 + t9650*t9665 + 0.183*(t9609 - 1.*t2258*t9665) - 0.15*(t9602 - 1.*t2289*t9665);
  p_output1[26]=t9626*t9654 + t9650*t9687 + 0.183*(t9636 - 1.*t2258*t9687) - 0.15*(t9628 - 1.*t2289*t9687);
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



void Jp_FR_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
