/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:10:20 GMT-05:00
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
  double t423;
  double t911;
  double t546;
  double t643;
  double t916;
  double t486;
  double t880;
  double t944;
  double t1162;
  double t1332;
  double t1654;
  double t1815;
  double t1993;
  double t416;
  double t2518;
  double t267;
  double t2608;
  double t2627;
  double t2631;
  double t2744;
  double t3057;
  double t3103;
  double t3661;
  double t3806;
  double t3857;
  double t4103;
  double t4723;
  double t4900;
  double t5023;
  double t321;
  double t323;
  double t334;
  double t360;
  double t498;
  double t523;
  double t1554;
  double t1584;
  double t1611;
  double t1637;
  double t6335;
  double t6435;
  double t6502;
  double t6729;
  double t7080;
  double t7099;
  double t2566;
  double t2591;
  double t3311;
  double t3768;
  double t3803;
  double t8414;
  double t8420;
  double t8445;
  double t4106;
  double t4638;
  double t4697;
  double t8480;
  double t8483;
  double t8484;
  double t8506;
  double t8508;
  double t8511;
  double t8611;
  double t8614;
  double t8621;
  double t8699;
  double t8721;
  double t8723;
  double t8742;
  double t8745;
  double t8759;
  double t10022;
  double t10044;
  double t10054;
  double t10069;
  double t10087;
  double t10092;
  double t10122;
  double t10123;
  double t10125;
  double t10221;
  double t10228;
  double t10231;
  double t10243;
  double t10244;
  double t10251;
  double t10255;
  double t10256;
  double t10257;
  double t10271;
  double t10280;
  double t10282;
  double t10290;
  double t10293;
  double t10294;
  double t10324;
  double t10326;
  double t10330;
  double t2148;
  double t10339;
  double t10340;
  double t10375;
  double t10376;
  double t10378;
  double t10407;
  double t10410;
  double t10437;
  double t10438;
  double t10439;
  double t10444;
  double t10445;
  double t10344;
  double t10379;
  double t10380;
  double t10382;
  double t10383;
  double t10385;
  double t10386;
  double t10387;
  double t10388;
  double t10390;
  double t10391;
  double t10393;
  double t10397;
  double t10401;
  double t10402;
  double t10403;
  double t10518;
  double t10520;
  double t10521;
  double t8527;
  double t10460;
  double t10461;
  double t10567;
  double t10568;
  double t10573;
  double t10576;
  double t10577;
  double t10621;
  double t10623;
  double t10626;
  double t10635;
  double t10639;
  double t10642;
  double t8524;
  double t8528;
  double t10534;
  double t10681;
  double t10682;
  double t10685;
  double t10690;
  double t10691;
  double t10710;
  double t10711;
  double t10712;
  double t10587;
  double t10597;
  double t10728;
  double t10730;
  double t10731;
  double t10657;
  double t10667;
  t423 = Sin(var1[3]);
  t911 = Cos(var1[3]);
  t546 = Cos(var1[5]);
  t643 = Sin(var1[4]);
  t916 = Sin(var1[5]);
  t486 = Sin(var1[15]);
  t880 = -1.*t546*t423*t643;
  t944 = t911*t916;
  t1162 = t880 + t944;
  t1332 = Cos(var1[15]);
  t1654 = -1.*t911*t546;
  t1815 = -1.*t423*t643*t916;
  t1993 = t1654 + t1815;
  t416 = Cos(var1[4]);
  t2518 = Sin(var1[16]);
  t267 = Cos(var1[16]);
  t2608 = t1332*t1162;
  t2627 = -1.*t486*t1993;
  t2631 = t2608 + t2627;
  t2744 = Cos(var1[17]);
  t3057 = -1.*t2744;
  t3103 = 1. + t3057;
  t3661 = Sin(var1[17]);
  t3806 = -1.*t416*t2518*t423;
  t3857 = t267*t2631;
  t4103 = t3806 + t3857;
  t4723 = -1.*t267*t416*t423;
  t4900 = -1.*t2518*t2631;
  t5023 = t4723 + t4900;
  t321 = -1.*t267;
  t323 = 1. + t321;
  t334 = -0.183*t323;
  t360 = 0. + t334;
  t498 = -0.047*t486;
  t523 = 0. + t498;
  t1554 = -1.*t1332;
  t1584 = 1. + t1554;
  t1611 = 0.047*t1584;
  t1637 = 0. + t1611;
  t6335 = t911*t546*t643;
  t6435 = t423*t916;
  t6502 = t6335 + t6435;
  t6729 = -1.*t546*t423;
  t7080 = t911*t643*t916;
  t7099 = t6729 + t7080;
  t2566 = -0.183*t2518;
  t2591 = 0. + t2566;
  t3311 = -0.1*t3103;
  t3768 = -0.183*t3661;
  t3803 = 0. + t3311 + t3768;
  t8414 = t1332*t6502;
  t8420 = -1.*t486*t7099;
  t8445 = t8414 + t8420;
  t4106 = -0.183*t3103;
  t4638 = 0.1*t3661;
  t4697 = 0. + t4106 + t4638;
  t8480 = t911*t416*t2518;
  t8483 = t267*t8445;
  t8484 = t8480 + t8483;
  t8506 = t267*t911*t416;
  t8508 = -1.*t2518*t8445;
  t8511 = t8506 + t8508;
  t8611 = t1332*t911*t416*t546;
  t8614 = -1.*t911*t416*t486*t916;
  t8621 = t8611 + t8614;
  t8699 = -1.*t911*t2518*t643;
  t8721 = t267*t8621;
  t8723 = t8699 + t8721;
  t8742 = -1.*t267*t911*t643;
  t8745 = -1.*t2518*t8621;
  t8759 = t8742 + t8745;
  t10022 = t1332*t416*t546*t423;
  t10044 = -1.*t416*t486*t423*t916;
  t10054 = t10022 + t10044;
  t10069 = -1.*t2518*t423*t643;
  t10087 = t267*t10054;
  t10092 = t10069 + t10087;
  t10122 = -1.*t267*t423*t643;
  t10123 = -1.*t2518*t10054;
  t10125 = t10122 + t10123;
  t10221 = -1.*t1332*t546*t643;
  t10228 = t486*t643*t916;
  t10231 = t10221 + t10228;
  t10243 = -1.*t416*t2518;
  t10244 = t267*t10231;
  t10251 = t10243 + t10244;
  t10255 = -1.*t267*t416;
  t10256 = -1.*t2518*t10231;
  t10257 = t10255 + t10256;
  t10271 = t546*t423;
  t10280 = -1.*t911*t643*t916;
  t10282 = t10271 + t10280;
  t10290 = -1.*t486*t6502;
  t10293 = t1332*t10282;
  t10294 = t10290 + t10293;
  t10324 = t546*t423*t643;
  t10326 = -1.*t911*t916;
  t10330 = t10324 + t10326;
  t2148 = t1332*t1993;
  t10339 = -1.*t486*t10330;
  t10340 = t10339 + t2148;
  t10375 = -1.*t416*t546*t486;
  t10376 = -1.*t1332*t416*t916;
  t10378 = t10375 + t10376;
  t10407 = -1.*t1332*t7099;
  t10410 = t10290 + t10407;
  t10437 = t911*t546;
  t10438 = t423*t643*t916;
  t10439 = t10437 + t10438;
  t10444 = -1.*t1332*t10439;
  t10445 = t10339 + t10444;
  t10344 = t1332*t10330;
  t10379 = t2591*t10378;
  t10380 = t267*t3803*t10378;
  t10382 = -1.*t2518*t4697*t10378;
  t10383 = t1332*t416*t546;
  t10385 = -1.*t416*t486*t916;
  t10386 = t10383 + t10385;
  t10387 = 0.13205*t10386;
  t10388 = -1.*t2744*t2518*t10378;
  t10390 = -1.*t267*t3661*t10378;
  t10391 = t10388 + t10390;
  t10393 = -0.183*t10391;
  t10397 = t267*t2744*t10378;
  t10401 = -1.*t2518*t3661*t10378;
  t10402 = t10397 + t10401;
  t10403 = -0.1*t10402;
  t10518 = -1.*t911*t416*t2518;
  t10520 = -1.*t267*t8445;
  t10521 = t10518 + t10520;
  t8527 = t2744*t8511;
  t10460 = -1.*t486*t10439;
  t10461 = t10344 + t10460;
  t10567 = -1.*t267*t10461;
  t10568 = t3806 + t10567;
  t10573 = t267*t416*t423;
  t10576 = -1.*t2518*t10461;
  t10577 = t10573 + t10576;
  t10621 = t2518*t643;
  t10623 = -1.*t267*t10386;
  t10626 = t10621 + t10623;
  t10635 = -1.*t267*t643;
  t10639 = -1.*t2518*t10386;
  t10642 = t10635 + t10639;
  t8524 = -1.*t3661*t8484;
  t8528 = t8524 + t8527;
  t10534 = -1.*t3661*t8511;
  t10681 = -0.183*t2744;
  t10682 = -0.1*t3661;
  t10685 = t10681 + t10682;
  t10690 = 0.1*t2744;
  t10691 = t10690 + t3768;
  t10710 = t416*t2518*t423;
  t10711 = t267*t10461;
  t10712 = t10710 + t10711;
  t10587 = t2744*t10577;
  t10597 = -1.*t3661*t10577;
  t10728 = -1.*t2518*t643;
  t10730 = t267*t10386;
  t10731 = t10728 + t10730;
  t10657 = t2744*t10642;
  t10667 = -1.*t3661*t10642;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1637*t1993 + t2591*t2631 + t3803*t4103 - 1.*t360*t416*t423 + 0.13205*(t2148 + t1162*t486) + t4697*t5023 - 0.183*(-1.*t3661*t4103 + t2744*t5023) - 0.1*(t2744*t4103 + t3661*t5023) + t1162*t523;
  p_output1[10]=t523*t6502 + t1637*t7099 + 0.13205*(t486*t6502 + t1332*t7099) + t2591*t8445 + t3803*t8484 + t4697*t8511 - 0.1*(t2744*t8484 + t3661*t8511) - 0.183*t8528 + t360*t416*t911;
  p_output1[11]=0;
  p_output1[12]=t2591*t8621 + t3803*t8723 + t4697*t8759 - 0.183*(-1.*t3661*t8723 + t2744*t8759) - 0.1*(t2744*t8723 + t3661*t8759) + t416*t523*t546*t911 - 1.*t360*t643*t911 + t1637*t416*t911*t916 + 0.13205*(t416*t486*t546*t911 + t1332*t416*t911*t916);
  p_output1[13]=t10054*t2591 - 0.183*(t10125*t2744 - 1.*t10092*t3661) - 0.1*(t10092*t2744 + t10125*t3661) + t10092*t3803 + t10125*t4697 + t416*t423*t523*t546 - 1.*t360*t423*t643 + t1637*t416*t423*t916 + 0.13205*(t416*t423*t486*t546 + t1332*t416*t423*t916);
  p_output1[14]=t10231*t2591 - 0.183*(t10257*t2744 - 1.*t10251*t3661) - 0.1*(t10251*t2744 + t10257*t3661) + t10251*t3803 - 1.*t360*t416 + t10257*t4697 - 1.*t523*t546*t643 - 1.*t1637*t643*t916 + 0.13205*(-1.*t486*t546*t643 - 1.*t1332*t643*t916);
  p_output1[15]=t10294*t2591 - 0.1*(t10294*t267*t2744 - 1.*t10294*t2518*t3661) - 0.183*(-1.*t10294*t2518*t2744 - 1.*t10294*t267*t3661) + t10294*t267*t3803 - 1.*t10294*t2518*t4697 + t10282*t523 + t1637*t6502 + 0.13205*(t10282*t486 + t8414);
  p_output1[16]=t10330*t1637 + t10340*t2591 - 0.1*(t10340*t267*t2744 - 1.*t10340*t2518*t3661) - 0.183*(-1.*t10340*t2518*t2744 - 1.*t10340*t267*t3661) + t10340*t267*t3803 - 1.*t10340*t2518*t4697 + 0.13205*(t10344 + t1993*t486) + t1993*t523;
  p_output1[17]=t10379 + t10380 + t10382 + t10387 + t10393 + t10403 + t1637*t416*t546 - 1.*t416*t523*t916;
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
  p_output1[45]=t10410*t2591 - 0.1*(t10410*t267*t2744 - 1.*t10410*t2518*t3661) - 0.183*(-1.*t10410*t2518*t2744 - 1.*t10410*t267*t3661) + t10410*t267*t3803 - 1.*t10410*t2518*t4697 - 0.047*t1332*t6502 + 0.047*t486*t7099 + 0.13205*t8445;
  p_output1[46]=0.13205*t10461 - 0.047*t10330*t1332 + t10445*t2591 - 0.1*(t10445*t267*t2744 - 1.*t10445*t2518*t3661) - 0.183*(-1.*t10445*t2518*t2744 - 1.*t10445*t267*t3661) + t10445*t267*t3803 - 1.*t10445*t2518*t4697 + 0.047*t10439*t486;
  p_output1[47]=t10379 + t10380 + t10382 + t10387 + t10393 + t10403 - 0.047*t1332*t416*t546 + 0.047*t416*t486*t916;
  p_output1[48]=-0.183*(t10534 + t10521*t2744) + t10521*t4697 - 0.183*t267*t8445 + t3803*t8511 - 0.1*(t10521*t3661 + t8527) - 0.183*t2518*t416*t911;
  p_output1[49]=-0.183*t10461*t267 - 0.183*(t10597 + t10568*t2744) - 0.1*(t10587 + t10568*t3661) + t10577*t3803 - 0.183*t2518*t416*t423 + t10568*t4697;
  p_output1[50]=-0.183*t10386*t267 - 0.183*(t10667 + t10626*t2744) - 0.1*(t10657 + t10626*t3661) + t10642*t3803 + t10626*t4697 + 0.183*t2518*t643;
  p_output1[51]=t10685*t8484 - 0.183*(t10534 - 1.*t2744*t8484) + t10691*t8511 - 0.1*t8528;
  p_output1[52]=t10577*t10691 + t10685*t10712 - 0.183*(t10597 - 1.*t10712*t2744) - 0.1*(t10587 - 1.*t10712*t3661);
  p_output1[53]=t10642*t10691 + t10685*t10731 - 0.183*(t10667 - 1.*t10731*t2744) - 0.1*(t10657 - 1.*t10731*t3661);
}



void Jp_RL_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
