/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:10:25 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_FLfoot_src.h"

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
  double t931;
  double t1386;
  double t1364;
  double t1371;
  double t1452;
  double t1144;
  double t1381;
  double t1506;
  double t1573;
  double t1641;
  double t2347;
  double t2500;
  double t2512;
  double t683;
  double t3035;
  double t30;
  double t3372;
  double t3439;
  double t3444;
  double t3565;
  double t3567;
  double t3598;
  double t3649;
  double t3680;
  double t3694;
  double t3716;
  double t3873;
  double t4002;
  double t4008;
  double t344;
  double t433;
  double t454;
  double t529;
  double t1278;
  double t1342;
  double t1823;
  double t1903;
  double t2036;
  double t2249;
  double t4698;
  double t4700;
  double t4707;
  double t4738;
  double t5243;
  double t5732;
  double t3229;
  double t3247;
  double t3642;
  double t3653;
  double t3667;
  double t5827;
  double t5880;
  double t5894;
  double t3735;
  double t3751;
  double t3804;
  double t6388;
  double t6419;
  double t6572;
  double t6612;
  double t6863;
  double t7221;
  double t10674;
  double t10697;
  double t10716;
  double t10746;
  double t10836;
  double t10838;
  double t10857;
  double t10860;
  double t10905;
  double t11064;
  double t11076;
  double t11096;
  double t11103;
  double t11104;
  double t11107;
  double t11110;
  double t11111;
  double t11112;
  double t11163;
  double t11166;
  double t11167;
  double t11171;
  double t11172;
  double t11175;
  double t11178;
  double t11182;
  double t11185;
  double t11224;
  double t11225;
  double t11226;
  double t11230;
  double t11231;
  double t11232;
  double t11269;
  double t11272;
  double t11273;
  double t2727;
  double t11281;
  double t11282;
  double t11312;
  double t11317;
  double t11320;
  double t11364;
  double t11368;
  double t11389;
  double t11390;
  double t11391;
  double t11398;
  double t11401;
  double t11290;
  double t11321;
  double t11322;
  double t11323;
  double t11324;
  double t11325;
  double t11326;
  double t11331;
  double t11332;
  double t11333;
  double t11334;
  double t11335;
  double t11338;
  double t11339;
  double t11340;
  double t11342;
  double t11437;
  double t11439;
  double t11440;
  double t7737;
  double t11411;
  double t11413;
  double t11463;
  double t11464;
  double t11469;
  double t11470;
  double t11471;
  double t11494;
  double t11495;
  double t11496;
  double t11499;
  double t11501;
  double t11503;
  double t7398;
  double t8139;
  double t11450;
  double t11516;
  double t11519;
  double t11521;
  double t11524;
  double t11526;
  double t11539;
  double t11541;
  double t11542;
  double t11474;
  double t11483;
  double t11554;
  double t11555;
  double t11556;
  double t11506;
  double t11510;
  t931 = Sin(var1[3]);
  t1386 = Cos(var1[3]);
  t1364 = Cos(var1[5]);
  t1371 = Sin(var1[4]);
  t1452 = Sin(var1[5]);
  t1144 = Sin(var1[9]);
  t1381 = -1.*t1364*t931*t1371;
  t1506 = t1386*t1452;
  t1573 = t1381 + t1506;
  t1641 = Cos(var1[9]);
  t2347 = -1.*t1386*t1364;
  t2500 = -1.*t931*t1371*t1452;
  t2512 = t2347 + t2500;
  t683 = Cos(var1[4]);
  t3035 = Sin(var1[10]);
  t30 = Cos(var1[10]);
  t3372 = t1641*t1573;
  t3439 = -1.*t1144*t2512;
  t3444 = t3372 + t3439;
  t3565 = Cos(var1[11]);
  t3567 = -1.*t3565;
  t3598 = 1. + t3567;
  t3649 = Sin(var1[11]);
  t3680 = -1.*t683*t3035*t931;
  t3694 = t30*t3444;
  t3716 = t3680 + t3694;
  t3873 = -1.*t30*t683*t931;
  t4002 = -1.*t3035*t3444;
  t4008 = t3873 + t4002;
  t344 = -1.*t30;
  t433 = 1. + t344;
  t454 = 0.183*t433;
  t529 = 0. + t454;
  t1278 = -0.047*t1144;
  t1342 = 0. + t1278;
  t1823 = -1.*t1641;
  t1903 = 1. + t1823;
  t2036 = 0.047*t1903;
  t2249 = 0. + t2036;
  t4698 = t1386*t1364*t1371;
  t4700 = t931*t1452;
  t4707 = t4698 + t4700;
  t4738 = -1.*t1364*t931;
  t5243 = t1386*t1371*t1452;
  t5732 = t4738 + t5243;
  t3229 = 0.183*t3035;
  t3247 = 0. + t3229;
  t3642 = -0.1*t3598;
  t3653 = 0.183*t3649;
  t3667 = 0. + t3642 + t3653;
  t5827 = t1641*t4707;
  t5880 = -1.*t1144*t5732;
  t5894 = t5827 + t5880;
  t3735 = 0.183*t3598;
  t3751 = 0.1*t3649;
  t3804 = 0. + t3735 + t3751;
  t6388 = t1386*t683*t3035;
  t6419 = t30*t5894;
  t6572 = t6388 + t6419;
  t6612 = t30*t1386*t683;
  t6863 = -1.*t3035*t5894;
  t7221 = t6612 + t6863;
  t10674 = t1641*t1386*t683*t1364;
  t10697 = -1.*t1386*t683*t1144*t1452;
  t10716 = t10674 + t10697;
  t10746 = -1.*t1386*t3035*t1371;
  t10836 = t30*t10716;
  t10838 = t10746 + t10836;
  t10857 = -1.*t30*t1386*t1371;
  t10860 = -1.*t3035*t10716;
  t10905 = t10857 + t10860;
  t11064 = t1641*t683*t1364*t931;
  t11076 = -1.*t683*t1144*t931*t1452;
  t11096 = t11064 + t11076;
  t11103 = -1.*t3035*t931*t1371;
  t11104 = t30*t11096;
  t11107 = t11103 + t11104;
  t11110 = -1.*t30*t931*t1371;
  t11111 = -1.*t3035*t11096;
  t11112 = t11110 + t11111;
  t11163 = -1.*t1641*t1364*t1371;
  t11166 = t1144*t1371*t1452;
  t11167 = t11163 + t11166;
  t11171 = -1.*t683*t3035;
  t11172 = t30*t11167;
  t11175 = t11171 + t11172;
  t11178 = -1.*t30*t683;
  t11182 = -1.*t3035*t11167;
  t11185 = t11178 + t11182;
  t11224 = t1364*t931;
  t11225 = -1.*t1386*t1371*t1452;
  t11226 = t11224 + t11225;
  t11230 = -1.*t1144*t4707;
  t11231 = t1641*t11226;
  t11232 = t11230 + t11231;
  t11269 = t1364*t931*t1371;
  t11272 = -1.*t1386*t1452;
  t11273 = t11269 + t11272;
  t2727 = t1641*t2512;
  t11281 = -1.*t1144*t11273;
  t11282 = t11281 + t2727;
  t11312 = -1.*t683*t1364*t1144;
  t11317 = -1.*t1641*t683*t1452;
  t11320 = t11312 + t11317;
  t11364 = -1.*t1641*t5732;
  t11368 = t11230 + t11364;
  t11389 = t1386*t1364;
  t11390 = t931*t1371*t1452;
  t11391 = t11389 + t11390;
  t11398 = -1.*t1641*t11391;
  t11401 = t11281 + t11398;
  t11290 = t1641*t11273;
  t11321 = t3247*t11320;
  t11322 = -1.*t3035*t3804*t11320;
  t11323 = t30*t3667*t11320;
  t11324 = t1641*t683*t1364;
  t11325 = -1.*t683*t1144*t1452;
  t11326 = t11324 + t11325;
  t11331 = 0.13205*t11326;
  t11332 = -1.*t3565*t3035*t11320;
  t11333 = -1.*t30*t3649*t11320;
  t11334 = t11332 + t11333;
  t11335 = 0.183*t11334;
  t11338 = t30*t3565*t11320;
  t11339 = -1.*t3035*t3649*t11320;
  t11340 = t11338 + t11339;
  t11342 = -0.2*t11340;
  t11437 = -1.*t1386*t683*t3035;
  t11439 = -1.*t30*t5894;
  t11440 = t11437 + t11439;
  t7737 = t3565*t7221;
  t11411 = -1.*t1144*t11391;
  t11413 = t11290 + t11411;
  t11463 = -1.*t30*t11413;
  t11464 = t3680 + t11463;
  t11469 = t30*t683*t931;
  t11470 = -1.*t3035*t11413;
  t11471 = t11469 + t11470;
  t11494 = t3035*t1371;
  t11495 = -1.*t30*t11326;
  t11496 = t11494 + t11495;
  t11499 = -1.*t30*t1371;
  t11501 = -1.*t3035*t11326;
  t11503 = t11499 + t11501;
  t7398 = -1.*t3649*t6572;
  t8139 = t7398 + t7737;
  t11450 = -1.*t3649*t7221;
  t11516 = 0.183*t3565;
  t11519 = -0.1*t3649;
  t11521 = t11516 + t11519;
  t11524 = 0.1*t3565;
  t11526 = t11524 + t3653;
  t11539 = t683*t3035*t931;
  t11541 = t30*t11413;
  t11542 = t11539 + t11541;
  t11474 = t3565*t11471;
  t11483 = -1.*t3649*t11471;
  t11554 = -1.*t3035*t1371;
  t11555 = t30*t11326;
  t11556 = t11554 + t11555;
  t11506 = t3565*t11503;
  t11510 = -1.*t3649*t11503;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1342*t1573 + t2249*t2512 + 0.13205*(t1144*t1573 + t2727) + t3247*t3444 + t3667*t3716 + t3804*t4008 + 0.183*(-1.*t3649*t3716 + t3565*t4008) - 0.2*(t3565*t3716 + t3649*t4008) - 1.*t529*t683*t931;
  p_output1[10]=t1342*t4707 + t2249*t5732 + 0.13205*(t1144*t4707 + t1641*t5732) + t3247*t5894 + t3667*t6572 + t1386*t529*t683 + t3804*t7221 - 0.2*(t3565*t6572 + t3649*t7221) + 0.183*t8139;
  p_output1[11]=0;
  p_output1[12]=t10716*t3247 + 0.183*(t10905*t3565 - 1.*t10838*t3649) - 0.2*(t10838*t3565 + t10905*t3649) + t10838*t3667 + t10905*t3804 - 1.*t1371*t1386*t529 + t1342*t1364*t1386*t683 + t1386*t1452*t2249*t683 + 0.13205*(t1144*t1364*t1386*t683 + t1386*t1452*t1641*t683);
  p_output1[13]=t11096*t3247 + 0.183*(t11112*t3565 - 1.*t11107*t3649) - 0.2*(t11107*t3565 + t11112*t3649) + t11107*t3667 + t11112*t3804 - 1.*t1371*t529*t931 + t1342*t1364*t683*t931 + t1452*t2249*t683*t931 + 0.13205*(t1144*t1364*t683*t931 + t1452*t1641*t683*t931);
  p_output1[14]=-1.*t1342*t1364*t1371 + 0.13205*(-1.*t1144*t1364*t1371 - 1.*t1371*t1452*t1641) - 1.*t1371*t1452*t2249 + t11167*t3247 + 0.183*(t11185*t3565 - 1.*t11175*t3649) - 0.2*(t11175*t3565 + t11185*t3649) + t11175*t3667 + t11185*t3804 - 1.*t529*t683;
  p_output1[15]=t11226*t1342 + t11232*t3247 + 0.183*(-1.*t11232*t3035*t3565 - 1.*t11232*t30*t3649) - 0.2*(t11232*t30*t3565 - 1.*t11232*t3035*t3649) + t11232*t30*t3667 - 1.*t11232*t3035*t3804 + t2249*t4707 + 0.13205*(t11226*t1144 + t5827);
  p_output1[16]=t11273*t2249 + t1342*t2512 + 0.13205*(t11290 + t1144*t2512) + t11282*t3247 + 0.183*(-1.*t11282*t3035*t3565 - 1.*t11282*t30*t3649) - 0.2*(t11282*t30*t3565 - 1.*t11282*t3035*t3649) + t11282*t30*t3667 - 1.*t11282*t3035*t3804;
  p_output1[17]=t11321 + t11322 + t11323 + t11331 + t11335 + t11342 - 1.*t1342*t1452*t683 + t1364*t2249*t683;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=t11368*t3247 + 0.183*(-1.*t11368*t3035*t3565 - 1.*t11368*t30*t3649) - 0.2*(t11368*t30*t3565 - 1.*t11368*t3035*t3649) + t11368*t30*t3667 - 1.*t11368*t3035*t3804 - 0.047*t1641*t4707 + 0.047*t1144*t5732 + 0.13205*t5894;
  p_output1[28]=0.13205*t11413 + 0.047*t11391*t1144 - 0.047*t11273*t1641 + t11401*t3247 + 0.183*(-1.*t11401*t3035*t3565 - 1.*t11401*t30*t3649) - 0.2*(t11401*t30*t3565 - 1.*t11401*t3035*t3649) + t11401*t30*t3667 - 1.*t11401*t3035*t3804;
  p_output1[29]=t11321 + t11322 + t11323 + t11331 + t11335 + t11342 + 0.047*t1144*t1452*t683 - 0.047*t1364*t1641*t683;
  p_output1[30]=0.183*(t11450 + t11440*t3565) + t11440*t3804 + 0.183*t30*t5894 + 0.183*t1386*t3035*t683 + t3667*t7221 - 0.2*(t11440*t3649 + t7737);
  p_output1[31]=0.183*t11413*t30 + 0.183*(t11483 + t11464*t3565) - 0.2*(t11474 + t11464*t3649) + t11471*t3667 + t11464*t3804 + 0.183*t3035*t683*t931;
  p_output1[32]=0.183*t11326*t30 - 0.183*t1371*t3035 + 0.183*(t11510 + t11496*t3565) - 0.2*(t11506 + t11496*t3649) + t11503*t3667 + t11496*t3804;
  p_output1[33]=t11521*t6572 + 0.183*(t11450 - 1.*t3565*t6572) + t11526*t7221 - 0.2*t8139;
  p_output1[34]=t11471*t11526 + t11521*t11542 + 0.183*(t11483 - 1.*t11542*t3565) - 0.2*(t11474 - 1.*t11542*t3649);
  p_output1[35]=t11503*t11526 + t11521*t11556 + 0.183*(t11510 - 1.*t11556*t3565) - 0.2*(t11506 - 1.*t11556*t3649);
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



void Jp_FLfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
