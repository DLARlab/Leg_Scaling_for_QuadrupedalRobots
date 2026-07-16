/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:03:26 GMT-05:00
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
  double t2350;
  double t4673;
  double t4337;
  double t4409;
  double t4755;
  double t3424;
  double t4643;
  double t4817;
  double t4836;
  double t4859;
  double t5383;
  double t5573;
  double t5577;
  double t2330;
  double t5929;
  double t1429;
  double t5947;
  double t5949;
  double t5950;
  double t6104;
  double t6188;
  double t6398;
  double t6459;
  double t6761;
  double t6833;
  double t6837;
  double t6877;
  double t6878;
  double t6879;
  double t1474;
  double t1730;
  double t2205;
  double t2219;
  double t3641;
  double t4057;
  double t5278;
  double t5295;
  double t5321;
  double t5359;
  double t6930;
  double t6936;
  double t6940;
  double t6945;
  double t6946;
  double t6952;
  double t5932;
  double t5942;
  double t6457;
  double t6536;
  double t6640;
  double t6967;
  double t6969;
  double t6970;
  double t6848;
  double t6866;
  double t6872;
  double t6976;
  double t6979;
  double t6980;
  double t6984;
  double t6985;
  double t6986;
  double t7037;
  double t7039;
  double t7041;
  double t7045;
  double t7051;
  double t7054;
  double t7063;
  double t7065;
  double t7066;
  double t7105;
  double t7111;
  double t7112;
  double t7114;
  double t7115;
  double t7116;
  double t7124;
  double t7125;
  double t7126;
  double t7162;
  double t7163;
  double t7164;
  double t7167;
  double t7169;
  double t7174;
  double t7181;
  double t7184;
  double t7185;
  double t7203;
  double t7206;
  double t7207;
  double t7213;
  double t7217;
  double t7218;
  double t7254;
  double t7264;
  double t7272;
  double t5912;
  double t7279;
  double t7280;
  double t7314;
  double t7318;
  double t7319;
  double t7354;
  double t7356;
  double t7384;
  double t7387;
  double t7390;
  double t7392;
  double t7393;
  double t7286;
  double t7320;
  double t7325;
  double t7327;
  double t7328;
  double t7330;
  double t7331;
  double t7334;
  double t7335;
  double t7336;
  double t7337;
  double t7340;
  double t7341;
  double t7342;
  double t7343;
  double t7344;
  double t7435;
  double t7438;
  double t7440;
  double t6998;
  double t7399;
  double t7404;
  double t7459;
  double t7462;
  double t7466;
  double t7467;
  double t7468;
  double t7482;
  double t7483;
  double t7484;
  double t7486;
  double t7487;
  double t7489;
  double t6995;
  double t7009;
  double t7450;
  double t7502;
  double t7503;
  double t7504;
  double t7506;
  double t7508;
  double t7516;
  double t7520;
  double t7523;
  double t7471;
  double t7475;
  double t7539;
  double t7540;
  double t7541;
  double t7493;
  double t7497;
  t2350 = Sin(var1[3]);
  t4673 = Cos(var1[3]);
  t4337 = Cos(var1[5]);
  t4409 = Sin(var1[4]);
  t4755 = Sin(var1[5]);
  t3424 = Sin(var1[12]);
  t4643 = -1.*t4337*t2350*t4409;
  t4817 = t4673*t4755;
  t4836 = t4643 + t4817;
  t4859 = Cos(var1[12]);
  t5383 = -1.*t4673*t4337;
  t5573 = -1.*t2350*t4409*t4755;
  t5577 = t5383 + t5573;
  t2330 = Cos(var1[4]);
  t5929 = Sin(var1[13]);
  t1429 = Cos(var1[13]);
  t5947 = t4859*t4836;
  t5949 = -1.*t3424*t5577;
  t5950 = t5947 + t5949;
  t6104 = Cos(var1[14]);
  t6188 = -1.*t6104;
  t6398 = 1. + t6188;
  t6459 = Sin(var1[14]);
  t6761 = -1.*t2330*t5929*t2350;
  t6833 = t1429*t5950;
  t6837 = t6761 + t6833;
  t6877 = -1.*t1429*t2330*t2350;
  t6878 = -1.*t5929*t5950;
  t6879 = t6877 + t6878;
  t1474 = -1.*t1429;
  t1730 = 1. + t1474;
  t2205 = -0.183*t1730;
  t2219 = 0. + t2205;
  t3641 = 0.047*t3424;
  t4057 = 0. + t3641;
  t5278 = -1.*t4859;
  t5295 = 1. + t5278;
  t5321 = -0.047*t5295;
  t5359 = 0. + t5321;
  t6930 = t4673*t4337*t4409;
  t6936 = t2350*t4755;
  t6940 = t6930 + t6936;
  t6945 = -1.*t4337*t2350;
  t6946 = t4673*t4409*t4755;
  t6952 = t6945 + t6946;
  t5932 = -0.183*t5929;
  t5942 = 0. + t5932;
  t6457 = -0.25*t6398;
  t6536 = -0.183*t6459;
  t6640 = 0. + t6457 + t6536;
  t6967 = t4859*t6940;
  t6969 = -1.*t3424*t6952;
  t6970 = t6967 + t6969;
  t6848 = -0.183*t6398;
  t6866 = 0.25*t6459;
  t6872 = 0. + t6848 + t6866;
  t6976 = t4673*t2330*t5929;
  t6979 = t1429*t6970;
  t6980 = t6976 + t6979;
  t6984 = t1429*t4673*t2330;
  t6985 = -1.*t5929*t6970;
  t6986 = t6984 + t6985;
  t7037 = t4859*t4673*t2330*t4337;
  t7039 = -1.*t4673*t2330*t3424*t4755;
  t7041 = t7037 + t7039;
  t7045 = -1.*t4673*t5929*t4409;
  t7051 = t1429*t7041;
  t7054 = t7045 + t7051;
  t7063 = -1.*t1429*t4673*t4409;
  t7065 = -1.*t5929*t7041;
  t7066 = t7063 + t7065;
  t7105 = t4859*t2330*t4337*t2350;
  t7111 = -1.*t2330*t3424*t2350*t4755;
  t7112 = t7105 + t7111;
  t7114 = -1.*t5929*t2350*t4409;
  t7115 = t1429*t7112;
  t7116 = t7114 + t7115;
  t7124 = -1.*t1429*t2350*t4409;
  t7125 = -1.*t5929*t7112;
  t7126 = t7124 + t7125;
  t7162 = -1.*t4859*t4337*t4409;
  t7163 = t3424*t4409*t4755;
  t7164 = t7162 + t7163;
  t7167 = -1.*t2330*t5929;
  t7169 = t1429*t7164;
  t7174 = t7167 + t7169;
  t7181 = -1.*t1429*t2330;
  t7184 = -1.*t5929*t7164;
  t7185 = t7181 + t7184;
  t7203 = t4337*t2350;
  t7206 = -1.*t4673*t4409*t4755;
  t7207 = t7203 + t7206;
  t7213 = -1.*t3424*t6940;
  t7217 = t4859*t7207;
  t7218 = t7213 + t7217;
  t7254 = t4337*t2350*t4409;
  t7264 = -1.*t4673*t4755;
  t7272 = t7254 + t7264;
  t5912 = t4859*t5577;
  t7279 = -1.*t3424*t7272;
  t7280 = t7279 + t5912;
  t7314 = -1.*t2330*t4337*t3424;
  t7318 = -1.*t4859*t2330*t4755;
  t7319 = t7314 + t7318;
  t7354 = -1.*t4859*t6952;
  t7356 = t7213 + t7354;
  t7384 = t4673*t4337;
  t7387 = t2350*t4409*t4755;
  t7390 = t7384 + t7387;
  t7392 = -1.*t4859*t7390;
  t7393 = t7279 + t7392;
  t7286 = t4859*t7272;
  t7320 = t5942*t7319;
  t7325 = t1429*t6640*t7319;
  t7327 = -1.*t5929*t6872*t7319;
  t7328 = t4859*t2330*t4337;
  t7330 = -1.*t2330*t3424*t4755;
  t7331 = t7328 + t7330;
  t7334 = -0.13205*t7331;
  t7335 = -1.*t6104*t5929*t7319;
  t7336 = -1.*t1429*t6459*t7319;
  t7337 = t7335 + t7336;
  t7340 = -0.183*t7337;
  t7341 = t1429*t6104*t7319;
  t7342 = -1.*t5929*t6459*t7319;
  t7343 = t7341 + t7342;
  t7344 = -0.25*t7343;
  t7435 = -1.*t4673*t2330*t5929;
  t7438 = -1.*t1429*t6970;
  t7440 = t7435 + t7438;
  t6998 = t6104*t6986;
  t7399 = -1.*t3424*t7390;
  t7404 = t7286 + t7399;
  t7459 = -1.*t1429*t7404;
  t7462 = t6761 + t7459;
  t7466 = t1429*t2330*t2350;
  t7467 = -1.*t5929*t7404;
  t7468 = t7466 + t7467;
  t7482 = t5929*t4409;
  t7483 = -1.*t1429*t7331;
  t7484 = t7482 + t7483;
  t7486 = -1.*t1429*t4409;
  t7487 = -1.*t5929*t7331;
  t7489 = t7486 + t7487;
  t6995 = -1.*t6459*t6980;
  t7009 = t6995 + t6998;
  t7450 = -1.*t6459*t6986;
  t7502 = -0.183*t6104;
  t7503 = -0.25*t6459;
  t7504 = t7502 + t7503;
  t7506 = 0.25*t6104;
  t7508 = t7506 + t6536;
  t7516 = t2330*t5929*t2350;
  t7520 = t1429*t7404;
  t7523 = t7516 + t7520;
  t7471 = t6104*t7468;
  t7475 = -1.*t6459*t7468;
  t7539 = -1.*t5929*t4409;
  t7540 = t1429*t7331;
  t7541 = t7539 + t7540;
  t7493 = t6104*t7489;
  t7497 = -1.*t6459*t7489;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=-1.*t2219*t2330*t2350 + t4057*t4836 + t5359*t5577 - 0.13205*(t3424*t4836 + t5912) + t5942*t5950 + t6640*t6837 + t6872*t6879 - 0.183*(-1.*t6459*t6837 + t6104*t6879) - 0.25*(t6104*t6837 + t6459*t6879);
  p_output1[10]=t2219*t2330*t4673 + t4057*t6940 + t5359*t6952 - 0.13205*(t3424*t6940 + t4859*t6952) + t5942*t6970 + t6640*t6980 + t6872*t6986 - 0.25*(t6104*t6980 + t6459*t6986) - 0.183*t7009;
  p_output1[11]=0;
  p_output1[12]=t2330*t4057*t4337*t4673 - 1.*t2219*t4409*t4673 - 0.13205*(t2330*t3424*t4337*t4673 + t2330*t4673*t4755*t4859) + t2330*t4673*t4755*t5359 + t5942*t7041 + t6640*t7054 + t6872*t7066 - 0.183*(-1.*t6459*t7054 + t6104*t7066) - 0.25*(t6104*t7054 + t6459*t7066);
  p_output1[13]=t2330*t2350*t4057*t4337 - 1.*t2219*t2350*t4409 - 0.13205*(t2330*t2350*t3424*t4337 + t2330*t2350*t4755*t4859) + t2330*t2350*t4755*t5359 + t5942*t7112 + t6640*t7116 + t6872*t7126 - 0.183*(-1.*t6459*t7116 + t6104*t7126) - 0.25*(t6104*t7116 + t6459*t7126);
  p_output1[14]=-1.*t2219*t2330 - 1.*t4057*t4337*t4409 - 0.13205*(-1.*t3424*t4337*t4409 - 1.*t4409*t4755*t4859) - 1.*t4409*t4755*t5359 + t5942*t7164 + t6640*t7174 + t6872*t7185 - 0.183*(-1.*t6459*t7174 + t6104*t7185) - 0.25*(t6104*t7174 + t6459*t7185);
  p_output1[15]=t5359*t6940 + t4057*t7207 - 0.13205*(t6967 + t3424*t7207) + t5942*t7218 + t1429*t6640*t7218 - 1.*t5929*t6872*t7218 - 0.183*(-1.*t5929*t6104*t7218 - 1.*t1429*t6459*t7218) - 0.25*(t1429*t6104*t7218 - 1.*t5929*t6459*t7218);
  p_output1[16]=t4057*t5577 + t5359*t7272 + t5942*t7280 + t1429*t6640*t7280 - 1.*t5929*t6872*t7280 - 0.183*(-1.*t5929*t6104*t7280 - 1.*t1429*t6459*t7280) - 0.25*(t1429*t6104*t7280 - 1.*t5929*t6459*t7280) - 0.13205*(t3424*t5577 + t7286);
  p_output1[17]=-1.*t2330*t4057*t4755 + t2330*t4337*t5359 + t7320 + t7325 + t7327 + t7334 + t7340 + t7344;
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
  p_output1[36]=0.047*t4859*t6940 - 0.047*t3424*t6952 - 0.13205*t6970 + t5942*t7356 + t1429*t6640*t7356 - 1.*t5929*t6872*t7356 - 0.183*(-1.*t5929*t6104*t7356 - 1.*t1429*t6459*t7356) - 0.25*(t1429*t6104*t7356 - 1.*t5929*t6459*t7356);
  p_output1[37]=0.047*t4859*t7272 - 0.047*t3424*t7390 + t5942*t7393 + t1429*t6640*t7393 - 1.*t5929*t6872*t7393 - 0.183*(-1.*t5929*t6104*t7393 - 1.*t1429*t6459*t7393) - 0.25*(t1429*t6104*t7393 - 1.*t5929*t6459*t7393) - 0.13205*t7404;
  p_output1[38]=-0.047*t2330*t3424*t4755 + 0.047*t2330*t4337*t4859 + t7320 + t7325 + t7327 + t7334 + t7340 + t7344;
  p_output1[39]=-0.183*t2330*t4673*t5929 - 0.183*t1429*t6970 + t6640*t6986 + t6872*t7440 - 0.25*(t6998 + t6459*t7440) - 0.183*(t6104*t7440 + t7450);
  p_output1[40]=-0.183*t2330*t2350*t5929 - 0.183*t1429*t7404 + t6872*t7462 + t6640*t7468 - 0.25*(t6459*t7462 + t7471) - 0.183*(t6104*t7462 + t7475);
  p_output1[41]=0.183*t4409*t5929 - 0.183*t1429*t7331 + t6872*t7484 + t6640*t7489 - 0.25*(t6459*t7484 + t7493) - 0.183*(t6104*t7484 + t7497);
  p_output1[42]=-0.25*t7009 - 0.183*(-1.*t6104*t6980 + t7450) + t6980*t7504 + t6986*t7508;
  p_output1[43]=t7468*t7508 + t7504*t7523 - 0.183*(t7475 - 1.*t6104*t7523) - 0.25*(t7471 - 1.*t6459*t7523);
  p_output1[44]=t7489*t7508 + t7504*t7541 - 0.183*(t7497 - 1.*t6104*t7541) - 0.25*(t7493 - 1.*t6459*t7541);
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
