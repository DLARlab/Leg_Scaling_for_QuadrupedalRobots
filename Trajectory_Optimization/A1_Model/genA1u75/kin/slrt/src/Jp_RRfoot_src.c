/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:18:19 GMT-05:00
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
  double t801;
  double t1732;
  double t1648;
  double t1665;
  double t1785;
  double t1056;
  double t1697;
  double t1818;
  double t1913;
  double t1936;
  double t2508;
  double t2587;
  double t2733;
  double t795;
  double t3063;
  double t365;
  double t3117;
  double t3130;
  double t3245;
  double t3407;
  double t3419;
  double t3482;
  double t3524;
  double t3735;
  double t3736;
  double t3793;
  double t3831;
  double t3866;
  double t3889;
  double t462;
  double t718;
  double t760;
  double t787;
  double t1115;
  double t1405;
  double t2072;
  double t2168;
  double t2217;
  double t2495;
  double t4844;
  double t4930;
  double t4947;
  double t5194;
  double t5195;
  double t5214;
  double t3088;
  double t3107;
  double t3508;
  double t3577;
  double t3685;
  double t5759;
  double t5769;
  double t5781;
  double t3817;
  double t3823;
  double t3827;
  double t5806;
  double t5821;
  double t5840;
  double t5962;
  double t6004;
  double t6018;
  double t6499;
  double t6503;
  double t6505;
  double t6526;
  double t6531;
  double t6534;
  double t6543;
  double t6544;
  double t6547;
  double t6589;
  double t6592;
  double t6596;
  double t6601;
  double t6604;
  double t6605;
  double t6609;
  double t6610;
  double t6611;
  double t6961;
  double t6998;
  double t7022;
  double t7140;
  double t7154;
  double t7158;
  double t7270;
  double t7364;
  double t7395;
  double t7511;
  double t7514;
  double t7517;
  double t7529;
  double t7530;
  double t7537;
  double t7936;
  double t7943;
  double t7948;
  double t2884;
  double t8006;
  double t8009;
  double t8226;
  double t8231;
  double t8256;
  double t8411;
  double t8420;
  double t8536;
  double t8551;
  double t8560;
  double t8562;
  double t8571;
  double t8033;
  double t8259;
  double t8267;
  double t8277;
  double t8287;
  double t8297;
  double t8314;
  double t8323;
  double t8342;
  double t8362;
  double t8371;
  double t8379;
  double t8393;
  double t8395;
  double t8396;
  double t8397;
  double t8841;
  double t8869;
  double t8873;
  double t6229;
  double t8600;
  double t8604;
  double t9022;
  double t9027;
  double t9035;
  double t9040;
  double t9076;
  double t9310;
  double t9314;
  double t9327;
  double t9351;
  double t9353;
  double t9354;
  double t6223;
  double t6246;
  double t8972;
  double t9435;
  double t9437;
  double t9438;
  double t9445;
  double t9448;
  double t9520;
  double t9526;
  double t9531;
  double t9147;
  double t9197;
  double t9626;
  double t9630;
  double t9631;
  double t9381;
  double t9408;
  t801 = Sin(var1[3]);
  t1732 = Cos(var1[3]);
  t1648 = Cos(var1[5]);
  t1665 = Sin(var1[4]);
  t1785 = Sin(var1[5]);
  t1056 = Sin(var1[12]);
  t1697 = -1.*t1648*t801*t1665;
  t1818 = t1732*t1785;
  t1913 = t1697 + t1818;
  t1936 = Cos(var1[12]);
  t2508 = -1.*t1732*t1648;
  t2587 = -1.*t801*t1665*t1785;
  t2733 = t2508 + t2587;
  t795 = Cos(var1[4]);
  t3063 = Sin(var1[13]);
  t365 = Cos(var1[13]);
  t3117 = t1936*t1913;
  t3130 = -1.*t1056*t2733;
  t3245 = t3117 + t3130;
  t3407 = Cos(var1[14]);
  t3419 = -1.*t3407;
  t3482 = 1. + t3419;
  t3524 = Sin(var1[14]);
  t3735 = -1.*t795*t3063*t801;
  t3736 = t365*t3245;
  t3793 = t3735 + t3736;
  t3831 = -1.*t365*t795*t801;
  t3866 = -1.*t3063*t3245;
  t3889 = t3831 + t3866;
  t462 = -1.*t365;
  t718 = 1. + t462;
  t760 = -0.183*t718;
  t787 = 0. + t760;
  t1115 = 0.047*t1056;
  t1405 = 0. + t1115;
  t2072 = -1.*t1936;
  t2168 = 1. + t2072;
  t2217 = -0.047*t2168;
  t2495 = 0. + t2217;
  t4844 = t1732*t1648*t1665;
  t4930 = t801*t1785;
  t4947 = t4844 + t4930;
  t5194 = -1.*t1648*t801;
  t5195 = t1732*t1665*t1785;
  t5214 = t5194 + t5195;
  t3088 = -0.183*t3063;
  t3107 = 0. + t3088;
  t3508 = -0.15*t3482;
  t3577 = -0.183*t3524;
  t3685 = 0. + t3508 + t3577;
  t5759 = t1936*t4947;
  t5769 = -1.*t1056*t5214;
  t5781 = t5759 + t5769;
  t3817 = -0.183*t3482;
  t3823 = 0.15*t3524;
  t3827 = 0. + t3817 + t3823;
  t5806 = t1732*t795*t3063;
  t5821 = t365*t5781;
  t5840 = t5806 + t5821;
  t5962 = t365*t1732*t795;
  t6004 = -1.*t3063*t5781;
  t6018 = t5962 + t6004;
  t6499 = t1936*t1732*t795*t1648;
  t6503 = -1.*t1732*t795*t1056*t1785;
  t6505 = t6499 + t6503;
  t6526 = -1.*t1732*t3063*t1665;
  t6531 = t365*t6505;
  t6534 = t6526 + t6531;
  t6543 = -1.*t365*t1732*t1665;
  t6544 = -1.*t3063*t6505;
  t6547 = t6543 + t6544;
  t6589 = t1936*t795*t1648*t801;
  t6592 = -1.*t795*t1056*t801*t1785;
  t6596 = t6589 + t6592;
  t6601 = -1.*t3063*t801*t1665;
  t6604 = t365*t6596;
  t6605 = t6601 + t6604;
  t6609 = -1.*t365*t801*t1665;
  t6610 = -1.*t3063*t6596;
  t6611 = t6609 + t6610;
  t6961 = -1.*t1936*t1648*t1665;
  t6998 = t1056*t1665*t1785;
  t7022 = t6961 + t6998;
  t7140 = -1.*t795*t3063;
  t7154 = t365*t7022;
  t7158 = t7140 + t7154;
  t7270 = -1.*t365*t795;
  t7364 = -1.*t3063*t7022;
  t7395 = t7270 + t7364;
  t7511 = t1648*t801;
  t7514 = -1.*t1732*t1665*t1785;
  t7517 = t7511 + t7514;
  t7529 = -1.*t1056*t4947;
  t7530 = t1936*t7517;
  t7537 = t7529 + t7530;
  t7936 = t1648*t801*t1665;
  t7943 = -1.*t1732*t1785;
  t7948 = t7936 + t7943;
  t2884 = t1936*t2733;
  t8006 = -1.*t1056*t7948;
  t8009 = t8006 + t2884;
  t8226 = -1.*t795*t1648*t1056;
  t8231 = -1.*t1936*t795*t1785;
  t8256 = t8226 + t8231;
  t8411 = -1.*t1936*t5214;
  t8420 = t7529 + t8411;
  t8536 = t1732*t1648;
  t8551 = t801*t1665*t1785;
  t8560 = t8536 + t8551;
  t8562 = -1.*t1936*t8560;
  t8571 = t8006 + t8562;
  t8033 = t1936*t7948;
  t8259 = t3107*t8256;
  t8267 = t365*t3685*t8256;
  t8277 = -1.*t3063*t3827*t8256;
  t8287 = t1936*t795*t1648;
  t8297 = -1.*t795*t1056*t1785;
  t8314 = t8287 + t8297;
  t8323 = -0.11079*t8314;
  t8342 = -1.*t3407*t3063*t8256;
  t8362 = -1.*t365*t3524*t8256;
  t8371 = t8342 + t8362;
  t8379 = -0.183*t8371;
  t8393 = t365*t3407*t8256;
  t8395 = -1.*t3063*t3524*t8256;
  t8396 = t8393 + t8395;
  t8397 = -0.3*t8396;
  t8841 = -1.*t1732*t795*t3063;
  t8869 = -1.*t365*t5781;
  t8873 = t8841 + t8869;
  t6229 = t3407*t6018;
  t8600 = -1.*t1056*t8560;
  t8604 = t8033 + t8600;
  t9022 = -1.*t365*t8604;
  t9027 = t3735 + t9022;
  t9035 = t365*t795*t801;
  t9040 = -1.*t3063*t8604;
  t9076 = t9035 + t9040;
  t9310 = t3063*t1665;
  t9314 = -1.*t365*t8314;
  t9327 = t9310 + t9314;
  t9351 = -1.*t365*t1665;
  t9353 = -1.*t3063*t8314;
  t9354 = t9351 + t9353;
  t6223 = -1.*t3524*t5840;
  t6246 = t6223 + t6229;
  t8972 = -1.*t3524*t6018;
  t9435 = -0.183*t3407;
  t9437 = -0.15*t3524;
  t9438 = t9435 + t9437;
  t9445 = 0.15*t3407;
  t9448 = t9445 + t3577;
  t9520 = t795*t3063*t801;
  t9526 = t365*t8604;
  t9531 = t9520 + t9526;
  t9147 = t3407*t9076;
  t9197 = -1.*t3524*t9076;
  t9626 = -1.*t3063*t1665;
  t9630 = t365*t8314;
  t9631 = t9626 + t9630;
  t9381 = t3407*t9354;
  t9408 = -1.*t3524*t9354;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1405*t1913 + t2495*t2733 - 0.11079*(t1056*t1913 + t2884) + t3107*t3245 + t3685*t3793 + t3827*t3889 - 0.183*(-1.*t3524*t3793 + t3407*t3889) - 0.3*(t3407*t3793 + t3524*t3889) - 1.*t787*t795*t801;
  p_output1[10]=t1405*t4947 + t2495*t5214 - 0.11079*(t1056*t4947 + t1936*t5214) + t3107*t5781 + t3685*t5840 + t3827*t6018 - 0.3*(t3407*t5840 + t3524*t6018) - 0.183*t6246 + t1732*t787*t795;
  p_output1[11]=0;
  p_output1[12]=t3107*t6505 + t3685*t6534 + t3827*t6547 - 0.183*(-1.*t3524*t6534 + t3407*t6547) - 0.3*(t3407*t6534 + t3524*t6547) - 1.*t1665*t1732*t787 + t1405*t1648*t1732*t795 + t1732*t1785*t2495*t795 - 0.11079*(t1056*t1648*t1732*t795 + t1732*t1785*t1936*t795);
  p_output1[13]=t3107*t6596 + t3685*t6605 + t3827*t6611 - 0.183*(-1.*t3524*t6605 + t3407*t6611) - 0.3*(t3407*t6605 + t3524*t6611) - 1.*t1665*t787*t801 + t1405*t1648*t795*t801 + t1785*t2495*t795*t801 - 0.11079*(t1056*t1648*t795*t801 + t1785*t1936*t795*t801);
  p_output1[14]=-1.*t1405*t1648*t1665 - 0.11079*(-1.*t1056*t1648*t1665 - 1.*t1665*t1785*t1936) - 1.*t1665*t1785*t2495 + t3107*t7022 + t3685*t7158 + t3827*t7395 - 0.183*(-1.*t3524*t7158 + t3407*t7395) - 0.3*(t3407*t7158 + t3524*t7395) - 1.*t787*t795;
  p_output1[15]=t2495*t4947 + t1405*t7517 - 0.11079*(t5759 + t1056*t7517) + t3107*t7537 + t365*t3685*t7537 - 1.*t3063*t3827*t7537 - 0.3*(-1.*t3063*t3524*t7537 + t3407*t365*t7537) - 0.183*(-1.*t3063*t3407*t7537 - 1.*t3524*t365*t7537);
  p_output1[16]=t1405*t2733 + t2495*t7948 + t3107*t8009 + t365*t3685*t8009 - 1.*t3063*t3827*t8009 - 0.3*(-1.*t3063*t3524*t8009 + t3407*t365*t8009) - 0.183*(-1.*t3063*t3407*t8009 - 1.*t3524*t365*t8009) - 0.11079*(t1056*t2733 + t8033);
  p_output1[17]=-1.*t1405*t1785*t795 + t1648*t2495*t795 + t8259 + t8267 + t8277 + t8323 + t8379 + t8397;
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
  p_output1[36]=0.047*t1936*t4947 - 0.047*t1056*t5214 - 0.11079*t5781 + t3107*t8420 + t365*t3685*t8420 - 1.*t3063*t3827*t8420 - 0.3*(-1.*t3063*t3524*t8420 + t3407*t365*t8420) - 0.183*(-1.*t3063*t3407*t8420 - 1.*t3524*t365*t8420);
  p_output1[37]=0.047*t1936*t7948 - 0.047*t1056*t8560 + t3107*t8571 + t365*t3685*t8571 - 1.*t3063*t3827*t8571 - 0.3*(-1.*t3063*t3524*t8571 + t3407*t365*t8571) - 0.183*(-1.*t3063*t3407*t8571 - 1.*t3524*t365*t8571) - 0.11079*t8604;
  p_output1[38]=-0.047*t1056*t1785*t795 + 0.047*t1648*t1936*t795 + t8259 + t8267 + t8277 + t8323 + t8379 + t8397;
  p_output1[39]=-0.183*t365*t5781 + t3685*t6018 - 0.183*t1732*t3063*t795 + t3827*t8873 - 0.3*(t6229 + t3524*t8873) - 0.183*(t3407*t8873 + t8972);
  p_output1[40]=-0.183*t3063*t795*t801 - 0.183*t365*t8604 + t3827*t9027 + t3685*t9076 - 0.3*(t3524*t9027 + t9147) - 0.183*(t3407*t9027 + t9197);
  p_output1[41]=0.183*t1665*t3063 - 0.183*t365*t8314 + t3827*t9327 + t3685*t9354 - 0.3*(t3524*t9327 + t9381) - 0.183*(t3407*t9327 + t9408);
  p_output1[42]=-0.3*t6246 - 0.183*(-1.*t3407*t5840 + t8972) + t5840*t9438 + t6018*t9448;
  p_output1[43]=t9076*t9448 + t9438*t9531 - 0.183*(t9197 - 1.*t3407*t9531) - 0.3*(t9147 - 1.*t3524*t9531);
  p_output1[44]=t9354*t9448 + t9438*t9631 - 0.183*(t9408 - 1.*t3407*t9631) - 0.3*(t9381 - 1.*t3524*t9631);
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
