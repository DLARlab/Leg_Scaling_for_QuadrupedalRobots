/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:13:08 GMT-05:00
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
  double t371;
  double t6102;
  double t3403;
  double t5199;
  double t6109;
  double t1488;
  double t6070;
  double t6130;
  double t6131;
  double t6146;
  double t6166;
  double t6176;
  double t6177;
  double t336;
  double t6193;
  double t10;
  double t6200;
  double t6212;
  double t6213;
  double t6216;
  double t6219;
  double t6220;
  double t6222;
  double t6225;
  double t6226;
  double t6227;
  double t6235;
  double t6236;
  double t6239;
  double t92;
  double t139;
  double t214;
  double t328;
  double t2477;
  double t3392;
  double t6157;
  double t6159;
  double t6162;
  double t6164;
  double t6262;
  double t6263;
  double t6264;
  double t6266;
  double t6267;
  double t6268;
  double t6196;
  double t6197;
  double t6221;
  double t6223;
  double t6224;
  double t6276;
  double t6278;
  double t6280;
  double t6231;
  double t6233;
  double t6234;
  double t6285;
  double t6286;
  double t6287;
  double t6289;
  double t6290;
  double t6291;
  double t6316;
  double t6317;
  double t6318;
  double t6320;
  double t6321;
  double t6322;
  double t6324;
  double t6325;
  double t6326;
  double t6351;
  double t6353;
  double t6354;
  double t6358;
  double t6359;
  double t6360;
  double t6362;
  double t6363;
  double t6364;
  double t6386;
  double t6387;
  double t6388;
  double t6390;
  double t6391;
  double t6392;
  double t6394;
  double t6395;
  double t6396;
  double t6424;
  double t6425;
  double t6426;
  double t6428;
  double t6429;
  double t6430;
  double t6451;
  double t6452;
  double t6453;
  double t6187;
  double t6456;
  double t6457;
  double t6482;
  double t6483;
  double t6485;
  double t6511;
  double t6512;
  double t6528;
  double t6529;
  double t6530;
  double t6532;
  double t6533;
  double t6463;
  double t6486;
  double t6487;
  double t6489;
  double t6490;
  double t6491;
  double t6492;
  double t6493;
  double t6494;
  double t6496;
  double t6497;
  double t6501;
  double t6502;
  double t6504;
  double t6505;
  double t6506;
  double t6556;
  double t6557;
  double t6558;
  double t6294;
  double t6539;
  double t6540;
  double t6571;
  double t6572;
  double t6574;
  double t6575;
  double t6576;
  double t6589;
  double t6590;
  double t6591;
  double t6593;
  double t6594;
  double t6595;
  double t6293;
  double t6295;
  double t6565;
  double t6606;
  double t6607;
  double t6608;
  double t6610;
  double t6611;
  double t6618;
  double t6619;
  double t6620;
  double t6579;
  double t6583;
  double t6630;
  double t6631;
  double t6632;
  double t6598;
  double t6602;
  t371 = Sin(var1[3]);
  t6102 = Cos(var1[3]);
  t3403 = Cos(var1[5]);
  t5199 = Sin(var1[4]);
  t6109 = Sin(var1[5]);
  t1488 = Sin(var1[9]);
  t6070 = -1.*t3403*t371*t5199;
  t6130 = t6102*t6109;
  t6131 = t6070 + t6130;
  t6146 = Cos(var1[9]);
  t6166 = -1.*t6102*t3403;
  t6176 = -1.*t371*t5199*t6109;
  t6177 = t6166 + t6176;
  t336 = Cos(var1[4]);
  t6193 = Sin(var1[10]);
  t10 = Cos(var1[10]);
  t6200 = t6146*t6131;
  t6212 = -1.*t1488*t6177;
  t6213 = t6200 + t6212;
  t6216 = Cos(var1[11]);
  t6219 = -1.*t6216;
  t6220 = 1. + t6219;
  t6222 = Sin(var1[11]);
  t6225 = -1.*t336*t6193*t371;
  t6226 = t10*t6213;
  t6227 = t6225 + t6226;
  t6235 = -1.*t10*t336*t371;
  t6236 = -1.*t6193*t6213;
  t6239 = t6235 + t6236;
  t92 = -1.*t10;
  t139 = 1. + t92;
  t214 = 0.183*t139;
  t328 = 0. + t214;
  t2477 = -0.047*t1488;
  t3392 = 0. + t2477;
  t6157 = -1.*t6146;
  t6159 = 1. + t6157;
  t6162 = 0.047*t6159;
  t6164 = 0. + t6162;
  t6262 = t6102*t3403*t5199;
  t6263 = t371*t6109;
  t6264 = t6262 + t6263;
  t6266 = -1.*t3403*t371;
  t6267 = t6102*t5199*t6109;
  t6268 = t6266 + t6267;
  t6196 = 0.183*t6193;
  t6197 = 0. + t6196;
  t6221 = -0.1*t6220;
  t6223 = 0.183*t6222;
  t6224 = 0. + t6221 + t6223;
  t6276 = t6146*t6264;
  t6278 = -1.*t1488*t6268;
  t6280 = t6276 + t6278;
  t6231 = 0.183*t6220;
  t6233 = 0.1*t6222;
  t6234 = 0. + t6231 + t6233;
  t6285 = t6102*t336*t6193;
  t6286 = t10*t6280;
  t6287 = t6285 + t6286;
  t6289 = t10*t6102*t336;
  t6290 = -1.*t6193*t6280;
  t6291 = t6289 + t6290;
  t6316 = t6146*t6102*t336*t3403;
  t6317 = -1.*t6102*t336*t1488*t6109;
  t6318 = t6316 + t6317;
  t6320 = -1.*t6102*t6193*t5199;
  t6321 = t10*t6318;
  t6322 = t6320 + t6321;
  t6324 = -1.*t10*t6102*t5199;
  t6325 = -1.*t6193*t6318;
  t6326 = t6324 + t6325;
  t6351 = t6146*t336*t3403*t371;
  t6353 = -1.*t336*t1488*t371*t6109;
  t6354 = t6351 + t6353;
  t6358 = -1.*t6193*t371*t5199;
  t6359 = t10*t6354;
  t6360 = t6358 + t6359;
  t6362 = -1.*t10*t371*t5199;
  t6363 = -1.*t6193*t6354;
  t6364 = t6362 + t6363;
  t6386 = -1.*t6146*t3403*t5199;
  t6387 = t1488*t5199*t6109;
  t6388 = t6386 + t6387;
  t6390 = -1.*t336*t6193;
  t6391 = t10*t6388;
  t6392 = t6390 + t6391;
  t6394 = -1.*t10*t336;
  t6395 = -1.*t6193*t6388;
  t6396 = t6394 + t6395;
  t6424 = t3403*t371;
  t6425 = -1.*t6102*t5199*t6109;
  t6426 = t6424 + t6425;
  t6428 = -1.*t1488*t6264;
  t6429 = t6146*t6426;
  t6430 = t6428 + t6429;
  t6451 = t3403*t371*t5199;
  t6452 = -1.*t6102*t6109;
  t6453 = t6451 + t6452;
  t6187 = t6146*t6177;
  t6456 = -1.*t1488*t6453;
  t6457 = t6456 + t6187;
  t6482 = -1.*t336*t3403*t1488;
  t6483 = -1.*t6146*t336*t6109;
  t6485 = t6482 + t6483;
  t6511 = -1.*t6146*t6268;
  t6512 = t6428 + t6511;
  t6528 = t6102*t3403;
  t6529 = t371*t5199*t6109;
  t6530 = t6528 + t6529;
  t6532 = -1.*t6146*t6530;
  t6533 = t6456 + t6532;
  t6463 = t6146*t6453;
  t6486 = t6197*t6485;
  t6487 = -1.*t6193*t6234*t6485;
  t6489 = t10*t6224*t6485;
  t6490 = t6146*t336*t3403;
  t6491 = -1.*t336*t1488*t6109;
  t6492 = t6490 + t6491;
  t6493 = 0.08953*t6492;
  t6494 = -1.*t6216*t6193*t6485;
  t6496 = -1.*t10*t6222*t6485;
  t6497 = t6494 + t6496;
  t6501 = 0.183*t6497;
  t6502 = t10*t6216*t6485;
  t6504 = -1.*t6193*t6222*t6485;
  t6505 = t6502 + t6504;
  t6506 = -0.2*t6505;
  t6556 = -1.*t6102*t336*t6193;
  t6557 = -1.*t10*t6280;
  t6558 = t6556 + t6557;
  t6294 = t6216*t6291;
  t6539 = -1.*t1488*t6530;
  t6540 = t6463 + t6539;
  t6571 = -1.*t10*t6540;
  t6572 = t6225 + t6571;
  t6574 = t10*t336*t371;
  t6575 = -1.*t6193*t6540;
  t6576 = t6574 + t6575;
  t6589 = t6193*t5199;
  t6590 = -1.*t10*t6492;
  t6591 = t6589 + t6590;
  t6593 = -1.*t10*t5199;
  t6594 = -1.*t6193*t6492;
  t6595 = t6593 + t6594;
  t6293 = -1.*t6222*t6287;
  t6295 = t6293 + t6294;
  t6565 = -1.*t6222*t6291;
  t6606 = 0.183*t6216;
  t6607 = -0.1*t6222;
  t6608 = t6606 + t6607;
  t6610 = 0.1*t6216;
  t6611 = t6610 + t6223;
  t6618 = t336*t6193*t371;
  t6619 = t10*t6540;
  t6620 = t6618 + t6619;
  t6579 = t6216*t6576;
  t6583 = -1.*t6222*t6576;
  t6630 = -1.*t6193*t5199;
  t6631 = t10*t6492;
  t6632 = t6630 + t6631;
  t6598 = t6216*t6595;
  t6602 = -1.*t6222*t6595;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=-1.*t328*t336*t371 + t3392*t6131 + t6164*t6177 + 0.08953*(t1488*t6131 + t6187) + t6197*t6213 + t6224*t6227 + t6234*t6239 + 0.183*(-1.*t6222*t6227 + t6216*t6239) - 0.2*(t6216*t6227 + t6222*t6239);
  p_output1[10]=t328*t336*t6102 + t3392*t6264 + t6164*t6268 + 0.08953*(t1488*t6264 + t6146*t6268) + t6197*t6280 + t6224*t6287 + t6234*t6291 - 0.2*(t6216*t6287 + t6222*t6291) + 0.183*t6295;
  p_output1[11]=0;
  p_output1[12]=t336*t3392*t3403*t6102 - 1.*t328*t5199*t6102 + 0.08953*(t1488*t336*t3403*t6102 + t336*t6102*t6109*t6146) + t336*t6102*t6109*t6164 + t6197*t6318 + t6224*t6322 + t6234*t6326 + 0.183*(-1.*t6222*t6322 + t6216*t6326) - 0.2*(t6216*t6322 + t6222*t6326);
  p_output1[13]=t336*t3392*t3403*t371 - 1.*t328*t371*t5199 + 0.08953*(t1488*t336*t3403*t371 + t336*t371*t6109*t6146) + t336*t371*t6109*t6164 + t6197*t6354 + t6224*t6360 + t6234*t6364 + 0.183*(-1.*t6222*t6360 + t6216*t6364) - 0.2*(t6216*t6360 + t6222*t6364);
  p_output1[14]=-1.*t328*t336 - 1.*t3392*t3403*t5199 + 0.08953*(-1.*t1488*t3403*t5199 - 1.*t5199*t6109*t6146) - 1.*t5199*t6109*t6164 + t6197*t6388 + t6224*t6392 + t6234*t6396 + 0.183*(-1.*t6222*t6392 + t6216*t6396) - 0.2*(t6216*t6392 + t6222*t6396);
  p_output1[15]=t6164*t6264 + t3392*t6426 + 0.08953*(t6276 + t1488*t6426) + t6197*t6430 + t10*t6224*t6430 - 1.*t6193*t6234*t6430 + 0.183*(-1.*t6193*t6216*t6430 - 1.*t10*t6222*t6430) - 0.2*(t10*t6216*t6430 - 1.*t6193*t6222*t6430);
  p_output1[16]=t3392*t6177 + t6164*t6453 + t6197*t6457 + t10*t6224*t6457 - 1.*t6193*t6234*t6457 + 0.183*(-1.*t6193*t6216*t6457 - 1.*t10*t6222*t6457) - 0.2*(t10*t6216*t6457 - 1.*t6193*t6222*t6457) + 0.08953*(t1488*t6177 + t6463);
  p_output1[17]=-1.*t336*t3392*t6109 + t336*t3403*t6164 + t6486 + t6487 + t6489 + t6493 + t6501 + t6506;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=-0.047*t6146*t6264 + 0.047*t1488*t6268 + 0.08953*t6280 + t6197*t6512 + t10*t6224*t6512 - 1.*t6193*t6234*t6512 + 0.183*(-1.*t6193*t6216*t6512 - 1.*t10*t6222*t6512) - 0.2*(t10*t6216*t6512 - 1.*t6193*t6222*t6512);
  p_output1[28]=-0.047*t6146*t6453 + 0.047*t1488*t6530 + t6197*t6533 + t10*t6224*t6533 - 1.*t6193*t6234*t6533 + 0.183*(-1.*t6193*t6216*t6533 - 1.*t10*t6222*t6533) - 0.2*(t10*t6216*t6533 - 1.*t6193*t6222*t6533) + 0.08953*t6540;
  p_output1[29]=0.047*t1488*t336*t6109 - 0.047*t336*t3403*t6146 + t6486 + t6487 + t6489 + t6493 + t6501 + t6506;
  p_output1[30]=0.183*t336*t6102*t6193 + 0.183*t10*t6280 + t6224*t6291 + t6234*t6558 - 0.2*(t6294 + t6222*t6558) + 0.183*(t6216*t6558 + t6565);
  p_output1[31]=0.183*t336*t371*t6193 + 0.183*t10*t6540 + t6234*t6572 + t6224*t6576 - 0.2*(t6222*t6572 + t6579) + 0.183*(t6216*t6572 + t6583);
  p_output1[32]=-0.183*t5199*t6193 + 0.183*t10*t6492 + t6234*t6591 + t6224*t6595 - 0.2*(t6222*t6591 + t6598) + 0.183*(t6216*t6591 + t6602);
  p_output1[33]=-0.2*t6295 + 0.183*(-1.*t6216*t6287 + t6565) + t6287*t6608 + t6291*t6611;
  p_output1[34]=t6576*t6611 + t6608*t6620 + 0.183*(t6583 - 1.*t6216*t6620) - 0.2*(t6579 - 1.*t6222*t6620);
  p_output1[35]=t6595*t6611 + t6608*t6632 + 0.183*(t6602 - 1.*t6216*t6632) - 0.2*(t6598 - 1.*t6222*t6632);
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
