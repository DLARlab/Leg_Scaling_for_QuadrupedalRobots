/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:10:30 GMT-05:00
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
  double t704;
  double t1309;
  double t926;
  double t1190;
  double t1379;
  double t800;
  double t1288;
  double t1394;
  double t1481;
  double t1507;
  double t2057;
  double t2077;
  double t2087;
  double t695;
  double t2548;
  double t169;
  double t2780;
  double t2815;
  double t2863;
  double t2964;
  double t3045;
  double t3061;
  double t3320;
  double t3609;
  double t3743;
  double t3759;
  double t4015;
  double t4463;
  double t4466;
  double t179;
  double t297;
  double t301;
  double t438;
  double t864;
  double t873;
  double t1670;
  double t1943;
  double t1981;
  double t2020;
  double t6158;
  double t6209;
  double t6230;
  double t6462;
  double t6480;
  double t6486;
  double t2657;
  double t2731;
  double t3274;
  double t3366;
  double t3396;
  double t6665;
  double t6734;
  double t6796;
  double t3855;
  double t3869;
  double t3911;
  double t6826;
  double t6865;
  double t6915;
  double t6963;
  double t6975;
  double t7001;
  double t7381;
  double t7407;
  double t7462;
  double t7528;
  double t7533;
  double t7622;
  double t7681;
  double t7685;
  double t7691;
  double t7821;
  double t7834;
  double t7845;
  double t7852;
  double t7869;
  double t7870;
  double t7878;
  double t7886;
  double t7893;
  double t7994;
  double t8027;
  double t8066;
  double t8079;
  double t8086;
  double t8091;
  double t8098;
  double t8101;
  double t8103;
  double t8183;
  double t8186;
  double t8196;
  double t8216;
  double t8242;
  double t8277;
  double t8437;
  double t8442;
  double t8458;
  double t2177;
  double t8464;
  double t8468;
  double t8623;
  double t8628;
  double t8635;
  double t8829;
  double t8834;
  double t8889;
  double t8919;
  double t8925;
  double t8942;
  double t8946;
  double t8477;
  double t8638;
  double t8652;
  double t8671;
  double t8684;
  double t8685;
  double t8694;
  double t8696;
  double t8697;
  double t8703;
  double t8760;
  double t8782;
  double t8787;
  double t8791;
  double t8800;
  double t8802;
  double t9076;
  double t9084;
  double t9093;
  double t7076;
  double t8960;
  double t8962;
  double t9181;
  double t9198;
  double t9229;
  double t9249;
  double t9253;
  double t9330;
  double t9332;
  double t9338;
  double t9341;
  double t9349;
  double t9363;
  double t7065;
  double t7120;
  double t9126;
  double t9453;
  double t9454;
  double t9460;
  double t9496;
  double t9503;
  double t9538;
  double t9557;
  double t9559;
  double t9276;
  double t9295;
  double t9603;
  double t9608;
  double t9646;
  double t9403;
  double t9432;
  t704 = Sin(var1[3]);
  t1309 = Cos(var1[3]);
  t926 = Cos(var1[5]);
  t1190 = Sin(var1[4]);
  t1379 = Sin(var1[5]);
  t800 = Sin(var1[15]);
  t1288 = -1.*t926*t704*t1190;
  t1394 = t1309*t1379;
  t1481 = t1288 + t1394;
  t1507 = Cos(var1[15]);
  t2057 = -1.*t1309*t926;
  t2077 = -1.*t704*t1190*t1379;
  t2087 = t2057 + t2077;
  t695 = Cos(var1[4]);
  t2548 = Sin(var1[16]);
  t169 = Cos(var1[16]);
  t2780 = t1507*t1481;
  t2815 = -1.*t800*t2087;
  t2863 = t2780 + t2815;
  t2964 = Cos(var1[17]);
  t3045 = -1.*t2964;
  t3061 = 1. + t3045;
  t3320 = Sin(var1[17]);
  t3609 = -1.*t695*t2548*t704;
  t3743 = t169*t2863;
  t3759 = t3609 + t3743;
  t4015 = -1.*t169*t695*t704;
  t4463 = -1.*t2548*t2863;
  t4466 = t4015 + t4463;
  t179 = -1.*t169;
  t297 = 1. + t179;
  t301 = -0.183*t297;
  t438 = 0. + t301;
  t864 = -0.047*t800;
  t873 = 0. + t864;
  t1670 = -1.*t1507;
  t1943 = 1. + t1670;
  t1981 = 0.047*t1943;
  t2020 = 0. + t1981;
  t6158 = t1309*t926*t1190;
  t6209 = t704*t1379;
  t6230 = t6158 + t6209;
  t6462 = -1.*t926*t704;
  t6480 = t1309*t1190*t1379;
  t6486 = t6462 + t6480;
  t2657 = -0.183*t2548;
  t2731 = 0. + t2657;
  t3274 = -0.1*t3061;
  t3366 = -0.183*t3320;
  t3396 = 0. + t3274 + t3366;
  t6665 = t1507*t6230;
  t6734 = -1.*t800*t6486;
  t6796 = t6665 + t6734;
  t3855 = -0.183*t3061;
  t3869 = 0.1*t3320;
  t3911 = 0. + t3855 + t3869;
  t6826 = t1309*t695*t2548;
  t6865 = t169*t6796;
  t6915 = t6826 + t6865;
  t6963 = t169*t1309*t695;
  t6975 = -1.*t2548*t6796;
  t7001 = t6963 + t6975;
  t7381 = t1507*t1309*t695*t926;
  t7407 = -1.*t1309*t695*t800*t1379;
  t7462 = t7381 + t7407;
  t7528 = -1.*t1309*t2548*t1190;
  t7533 = t169*t7462;
  t7622 = t7528 + t7533;
  t7681 = -1.*t169*t1309*t1190;
  t7685 = -1.*t2548*t7462;
  t7691 = t7681 + t7685;
  t7821 = t1507*t695*t926*t704;
  t7834 = -1.*t695*t800*t704*t1379;
  t7845 = t7821 + t7834;
  t7852 = -1.*t2548*t704*t1190;
  t7869 = t169*t7845;
  t7870 = t7852 + t7869;
  t7878 = -1.*t169*t704*t1190;
  t7886 = -1.*t2548*t7845;
  t7893 = t7878 + t7886;
  t7994 = -1.*t1507*t926*t1190;
  t8027 = t800*t1190*t1379;
  t8066 = t7994 + t8027;
  t8079 = -1.*t695*t2548;
  t8086 = t169*t8066;
  t8091 = t8079 + t8086;
  t8098 = -1.*t169*t695;
  t8101 = -1.*t2548*t8066;
  t8103 = t8098 + t8101;
  t8183 = t926*t704;
  t8186 = -1.*t1309*t1190*t1379;
  t8196 = t8183 + t8186;
  t8216 = -1.*t800*t6230;
  t8242 = t1507*t8196;
  t8277 = t8216 + t8242;
  t8437 = t926*t704*t1190;
  t8442 = -1.*t1309*t1379;
  t8458 = t8437 + t8442;
  t2177 = t1507*t2087;
  t8464 = -1.*t800*t8458;
  t8468 = t8464 + t2177;
  t8623 = -1.*t695*t926*t800;
  t8628 = -1.*t1507*t695*t1379;
  t8635 = t8623 + t8628;
  t8829 = -1.*t1507*t6486;
  t8834 = t8216 + t8829;
  t8889 = t1309*t926;
  t8919 = t704*t1190*t1379;
  t8925 = t8889 + t8919;
  t8942 = -1.*t1507*t8925;
  t8946 = t8464 + t8942;
  t8477 = t1507*t8458;
  t8638 = t2731*t8635;
  t8652 = t169*t3396*t8635;
  t8671 = -1.*t2548*t3911*t8635;
  t8684 = t1507*t695*t926;
  t8685 = -1.*t695*t800*t1379;
  t8694 = t8684 + t8685;
  t8696 = 0.13205*t8694;
  t8697 = -1.*t2964*t2548*t8635;
  t8703 = -1.*t169*t3320*t8635;
  t8760 = t8697 + t8703;
  t8782 = -0.183*t8760;
  t8787 = t169*t2964*t8635;
  t8791 = -1.*t2548*t3320*t8635;
  t8800 = t8787 + t8791;
  t8802 = -0.2*t8800;
  t9076 = -1.*t1309*t695*t2548;
  t9084 = -1.*t169*t6796;
  t9093 = t9076 + t9084;
  t7076 = t2964*t7001;
  t8960 = -1.*t800*t8925;
  t8962 = t8477 + t8960;
  t9181 = -1.*t169*t8962;
  t9198 = t3609 + t9181;
  t9229 = t169*t695*t704;
  t9249 = -1.*t2548*t8962;
  t9253 = t9229 + t9249;
  t9330 = t2548*t1190;
  t9332 = -1.*t169*t8694;
  t9338 = t9330 + t9332;
  t9341 = -1.*t169*t1190;
  t9349 = -1.*t2548*t8694;
  t9363 = t9341 + t9349;
  t7065 = -1.*t3320*t6915;
  t7120 = t7065 + t7076;
  t9126 = -1.*t3320*t7001;
  t9453 = -0.183*t2964;
  t9454 = -0.1*t3320;
  t9460 = t9453 + t9454;
  t9496 = 0.1*t2964;
  t9503 = t9496 + t3366;
  t9538 = t695*t2548*t704;
  t9557 = t169*t8962;
  t9559 = t9538 + t9557;
  t9276 = t2964*t9253;
  t9295 = -1.*t3320*t9253;
  t9603 = -1.*t2548*t1190;
  t9608 = t169*t8694;
  t9646 = t9603 + t9608;
  t9403 = t2964*t9363;
  t9432 = -1.*t3320*t9363;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t2020*t2087 + t2731*t2863 + t3396*t3759 + t3911*t4466 - 0.183*(-1.*t3320*t3759 + t2964*t4466) - 0.2*(t2964*t3759 + t3320*t4466) - 1.*t438*t695*t704 + 0.13205*(t2177 + t1481*t800) + t1481*t873;
  p_output1[10]=t2020*t6486 + t2731*t6796 + t3396*t6915 + t1309*t438*t695 + t3911*t7001 - 0.2*(t2964*t6915 + t3320*t7001) - 0.183*t7120 + 0.13205*(t1507*t6486 + t6230*t800) + t6230*t873;
  p_output1[11]=0;
  p_output1[12]=-1.*t1190*t1309*t438 + t1309*t1379*t2020*t695 + t2731*t7462 + t3396*t7622 + t3911*t7691 - 0.183*(-1.*t3320*t7622 + t2964*t7691) - 0.2*(t2964*t7622 + t3320*t7691) + t1309*t695*t873*t926 + 0.13205*(t1309*t1379*t1507*t695 + t1309*t695*t800*t926);
  p_output1[13]=-1.*t1190*t438*t704 + t1379*t2020*t695*t704 + t2731*t7845 + t3396*t7870 + t3911*t7893 - 0.183*(-1.*t3320*t7870 + t2964*t7893) - 0.2*(t2964*t7870 + t3320*t7893) + t695*t704*t873*t926 + 0.13205*(t1379*t1507*t695*t704 + t695*t704*t800*t926);
  p_output1[14]=-1.*t1190*t1379*t2020 - 1.*t438*t695 + t2731*t8066 + t3396*t8091 + t3911*t8103 - 0.183*(-1.*t3320*t8091 + t2964*t8103) - 0.2*(t2964*t8091 + t3320*t8103) - 1.*t1190*t873*t926 + 0.13205*(-1.*t1190*t1379*t1507 - 1.*t1190*t800*t926);
  p_output1[15]=t2020*t6230 + 0.13205*(t6665 + t800*t8196) + t2731*t8277 + t169*t3396*t8277 - 1.*t2548*t3911*t8277 - 0.183*(-1.*t2548*t2964*t8277 - 1.*t169*t3320*t8277) - 0.2*(t169*t2964*t8277 - 1.*t2548*t3320*t8277) + t8196*t873;
  p_output1[16]=t2020*t8458 + t2731*t8468 + t169*t3396*t8468 - 1.*t2548*t3911*t8468 - 0.183*(-1.*t2548*t2964*t8468 - 1.*t169*t3320*t8468) - 0.2*(t169*t2964*t8468 - 1.*t2548*t3320*t8468) + 0.13205*(t2087*t800 + t8477) + t2087*t873;
  p_output1[17]=t8638 + t8652 + t8671 + t8696 - 1.*t1379*t695*t873 + t8782 + t8802 + t2020*t695*t926;
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
  p_output1[45]=-0.047*t1507*t6230 + 0.13205*t6796 + 0.047*t6486*t800 + t2731*t8834 + t169*t3396*t8834 - 1.*t2548*t3911*t8834 - 0.183*(-1.*t2548*t2964*t8834 - 1.*t169*t3320*t8834) - 0.2*(t169*t2964*t8834 - 1.*t2548*t3320*t8834);
  p_output1[46]=-0.047*t1507*t8458 + 0.047*t800*t8925 + t2731*t8946 + t169*t3396*t8946 - 1.*t2548*t3911*t8946 - 0.183*(-1.*t2548*t2964*t8946 - 1.*t169*t3320*t8946) - 0.2*(t169*t2964*t8946 - 1.*t2548*t3320*t8946) + 0.13205*t8962;
  p_output1[47]=0.047*t1379*t695*t800 + t8638 + t8652 + t8671 + t8696 + t8782 + t8802 - 0.047*t1507*t695*t926;
  p_output1[48]=-0.183*t169*t6796 - 0.183*t1309*t2548*t695 + t3396*t7001 + t3911*t9093 - 0.2*(t7076 + t3320*t9093) - 0.183*(t2964*t9093 + t9126);
  p_output1[49]=-0.183*t2548*t695*t704 - 0.183*t169*t8962 + t3911*t9198 + t3396*t9253 - 0.2*(t3320*t9198 + t9276) - 0.183*(t2964*t9198 + t9295);
  p_output1[50]=0.183*t1190*t2548 - 0.183*t169*t8694 + t3911*t9338 + t3396*t9363 - 0.2*(t3320*t9338 + t9403) - 0.183*(t2964*t9338 + t9432);
  p_output1[51]=-0.2*t7120 - 0.183*(-1.*t2964*t6915 + t9126) + t6915*t9460 + t7001*t9503;
  p_output1[52]=t9253*t9503 + t9460*t9559 - 0.183*(t9295 - 1.*t2964*t9559) - 0.2*(t9276 - 1.*t3320*t9559);
  p_output1[53]=t9363*t9503 + t9460*t9646 - 0.183*(t9432 - 1.*t2964*t9646) - 0.2*(t9403 - 1.*t3320*t9646);
}



void Jp_RLfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
