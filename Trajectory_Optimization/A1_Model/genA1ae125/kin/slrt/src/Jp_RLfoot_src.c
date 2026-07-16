/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:03:46 GMT-05:00
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
  double t390;
  double t1266;
  double t1038;
  double t1039;
  double t1313;
  double t681;
  double t1203;
  double t1387;
  double t1402;
  double t1424;
  double t1800;
  double t1801;
  double t1893;
  double t382;
  double t2057;
  double t155;
  double t2135;
  double t2143;
  double t2176;
  double t2308;
  double t2571;
  double t2611;
  double t2699;
  double t2913;
  double t2938;
  double t3032;
  double t3246;
  double t3248;
  double t3261;
  double t326;
  double t336;
  double t344;
  double t379;
  double t978;
  double t1000;
  double t1473;
  double t1550;
  double t1710;
  double t1798;
  double t3489;
  double t3513;
  double t3523;
  double t3565;
  double t3567;
  double t3576;
  double t2115;
  double t2130;
  double t2657;
  double t2869;
  double t2912;
  double t3757;
  double t3762;
  double t3767;
  double t3089;
  double t3155;
  double t3231;
  double t4200;
  double t4330;
  double t4331;
  double t4569;
  double t4807;
  double t4915;
  double t5695;
  double t5737;
  double t5758;
  double t5835;
  double t5878;
  double t5897;
  double t6133;
  double t6144;
  double t6192;
  double t7204;
  double t7205;
  double t7265;
  double t7381;
  double t7440;
  double t7460;
  double t7540;
  double t7601;
  double t7620;
  double t8895;
  double t8939;
  double t8941;
  double t8971;
  double t9002;
  double t9024;
  double t9066;
  double t9083;
  double t9086;
  double t9204;
  double t9208;
  double t9211;
  double t9214;
  double t9215;
  double t9216;
  double t9291;
  double t9292;
  double t9293;
  double t1981;
  double t9300;
  double t9302;
  double t9362;
  double t9368;
  double t9369;
  double t9431;
  double t9434;
  double t9474;
  double t9475;
  double t9476;
  double t9480;
  double t9483;
  double t9313;
  double t9375;
  double t9376;
  double t9380;
  double t9384;
  double t9390;
  double t9396;
  double t9412;
  double t9413;
  double t9415;
  double t9417;
  double t9418;
  double t9419;
  double t9421;
  double t9422;
  double t9423;
  double t9532;
  double t9534;
  double t9535;
  double t4999;
  double t9489;
  double t9490;
  double t9551;
  double t9552;
  double t9556;
  double t9557;
  double t9561;
  double t9580;
  double t9581;
  double t9582;
  double t9584;
  double t9585;
  double t9589;
  double t4995;
  double t5042;
  double t9545;
  double t9601;
  double t9603;
  double t9604;
  double t9608;
  double t9609;
  double t9621;
  double t9622;
  double t9623;
  double t9567;
  double t9573;
  double t9640;
  double t9641;
  double t9642;
  double t9592;
  double t9597;
  t390 = Sin(var1[3]);
  t1266 = Cos(var1[3]);
  t1038 = Cos(var1[5]);
  t1039 = Sin(var1[4]);
  t1313 = Sin(var1[5]);
  t681 = Sin(var1[15]);
  t1203 = -1.*t1038*t390*t1039;
  t1387 = t1266*t1313;
  t1402 = t1203 + t1387;
  t1424 = Cos(var1[15]);
  t1800 = -1.*t1266*t1038;
  t1801 = -1.*t390*t1039*t1313;
  t1893 = t1800 + t1801;
  t382 = Cos(var1[4]);
  t2057 = Sin(var1[16]);
  t155 = Cos(var1[16]);
  t2135 = t1424*t1402;
  t2143 = -1.*t681*t1893;
  t2176 = t2135 + t2143;
  t2308 = Cos(var1[17]);
  t2571 = -1.*t2308;
  t2611 = 1. + t2571;
  t2699 = Sin(var1[17]);
  t2913 = -1.*t382*t2057*t390;
  t2938 = t155*t2176;
  t3032 = t2913 + t2938;
  t3246 = -1.*t155*t382*t390;
  t3248 = -1.*t2057*t2176;
  t3261 = t3246 + t3248;
  t326 = -1.*t155;
  t336 = 1. + t326;
  t344 = -0.183*t336;
  t379 = 0. + t344;
  t978 = -0.047*t681;
  t1000 = 0. + t978;
  t1473 = -1.*t1424;
  t1550 = 1. + t1473;
  t1710 = 0.047*t1550;
  t1798 = 0. + t1710;
  t3489 = t1266*t1038*t1039;
  t3513 = t390*t1313;
  t3523 = t3489 + t3513;
  t3565 = -1.*t1038*t390;
  t3567 = t1266*t1039*t1313;
  t3576 = t3565 + t3567;
  t2115 = -0.183*t2057;
  t2130 = 0. + t2115;
  t2657 = -0.25*t2611;
  t2869 = -0.183*t2699;
  t2912 = 0. + t2657 + t2869;
  t3757 = t1424*t3523;
  t3762 = -1.*t681*t3576;
  t3767 = t3757 + t3762;
  t3089 = -0.183*t2611;
  t3155 = 0.25*t2699;
  t3231 = 0. + t3089 + t3155;
  t4200 = t1266*t382*t2057;
  t4330 = t155*t3767;
  t4331 = t4200 + t4330;
  t4569 = t155*t1266*t382;
  t4807 = -1.*t2057*t3767;
  t4915 = t4569 + t4807;
  t5695 = t1424*t1266*t382*t1038;
  t5737 = -1.*t1266*t382*t681*t1313;
  t5758 = t5695 + t5737;
  t5835 = -1.*t1266*t2057*t1039;
  t5878 = t155*t5758;
  t5897 = t5835 + t5878;
  t6133 = -1.*t155*t1266*t1039;
  t6144 = -1.*t2057*t5758;
  t6192 = t6133 + t6144;
  t7204 = t1424*t382*t1038*t390;
  t7205 = -1.*t382*t681*t390*t1313;
  t7265 = t7204 + t7205;
  t7381 = -1.*t2057*t390*t1039;
  t7440 = t155*t7265;
  t7460 = t7381 + t7440;
  t7540 = -1.*t155*t390*t1039;
  t7601 = -1.*t2057*t7265;
  t7620 = t7540 + t7601;
  t8895 = -1.*t1424*t1038*t1039;
  t8939 = t681*t1039*t1313;
  t8941 = t8895 + t8939;
  t8971 = -1.*t382*t2057;
  t9002 = t155*t8941;
  t9024 = t8971 + t9002;
  t9066 = -1.*t155*t382;
  t9083 = -1.*t2057*t8941;
  t9086 = t9066 + t9083;
  t9204 = t1038*t390;
  t9208 = -1.*t1266*t1039*t1313;
  t9211 = t9204 + t9208;
  t9214 = -1.*t681*t3523;
  t9215 = t1424*t9211;
  t9216 = t9214 + t9215;
  t9291 = t1038*t390*t1039;
  t9292 = -1.*t1266*t1313;
  t9293 = t9291 + t9292;
  t1981 = t1424*t1893;
  t9300 = -1.*t681*t9293;
  t9302 = t9300 + t1981;
  t9362 = -1.*t382*t1038*t681;
  t9368 = -1.*t1424*t382*t1313;
  t9369 = t9362 + t9368;
  t9431 = -1.*t1424*t3576;
  t9434 = t9214 + t9431;
  t9474 = t1266*t1038;
  t9475 = t390*t1039*t1313;
  t9476 = t9474 + t9475;
  t9480 = -1.*t1424*t9476;
  t9483 = t9300 + t9480;
  t9313 = t1424*t9293;
  t9375 = t2130*t9369;
  t9376 = t155*t2912*t9369;
  t9380 = -1.*t2057*t3231*t9369;
  t9384 = t1424*t382*t1038;
  t9390 = -1.*t382*t681*t1313;
  t9396 = t9384 + t9390;
  t9412 = 0.13205*t9396;
  t9413 = -1.*t2308*t2057*t9369;
  t9415 = -1.*t155*t2699*t9369;
  t9417 = t9413 + t9415;
  t9418 = -0.183*t9417;
  t9419 = t155*t2308*t9369;
  t9421 = -1.*t2057*t2699*t9369;
  t9422 = t9419 + t9421;
  t9423 = -0.5*t9422;
  t9532 = -1.*t1266*t382*t2057;
  t9534 = -1.*t155*t3767;
  t9535 = t9532 + t9534;
  t4999 = t2308*t4915;
  t9489 = -1.*t681*t9476;
  t9490 = t9313 + t9489;
  t9551 = -1.*t155*t9490;
  t9552 = t2913 + t9551;
  t9556 = t155*t382*t390;
  t9557 = -1.*t2057*t9490;
  t9561 = t9556 + t9557;
  t9580 = t2057*t1039;
  t9581 = -1.*t155*t9396;
  t9582 = t9580 + t9581;
  t9584 = -1.*t155*t1039;
  t9585 = -1.*t2057*t9396;
  t9589 = t9584 + t9585;
  t4995 = -1.*t2699*t4331;
  t5042 = t4995 + t4999;
  t9545 = -1.*t2699*t4915;
  t9601 = -0.183*t2308;
  t9603 = -0.25*t2699;
  t9604 = t9601 + t9603;
  t9608 = 0.25*t2308;
  t9609 = t9608 + t2869;
  t9621 = t382*t2057*t390;
  t9622 = t155*t9490;
  t9623 = t9621 + t9622;
  t9567 = t2308*t9561;
  t9573 = -1.*t2699*t9561;
  t9640 = -1.*t2057*t1039;
  t9641 = t155*t9396;
  t9642 = t9640 + t9641;
  t9592 = t2308*t9589;
  t9597 = -1.*t2699*t9589;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1000*t1402 + t1798*t1893 + t2130*t2176 + t2912*t3032 + t3231*t3261 - 0.183*(-1.*t2699*t3032 + t2308*t3261) - 0.5*(t2308*t3032 + t2699*t3261) - 1.*t379*t382*t390 + 0.13205*(t1981 + t1402*t681);
  p_output1[10]=t1000*t3523 + t1798*t3576 + t2130*t3767 + t1266*t379*t382 + t2912*t4331 + t3231*t4915 - 0.5*(t2308*t4331 + t2699*t4915) - 0.183*t5042 + 0.13205*(t1424*t3576 + t3523*t681);
  p_output1[11]=0;
  p_output1[12]=-1.*t1039*t1266*t379 + t1000*t1038*t1266*t382 + t1266*t1313*t1798*t382 + t2130*t5758 + t2912*t5897 + t3231*t6192 - 0.183*(-1.*t2699*t5897 + t2308*t6192) - 0.5*(t2308*t5897 + t2699*t6192) + 0.13205*(t1266*t1313*t1424*t382 + t1038*t1266*t382*t681);
  p_output1[13]=-1.*t1039*t379*t390 + t1000*t1038*t382*t390 + t1313*t1798*t382*t390 + 0.13205*(t1313*t1424*t382*t390 + t1038*t382*t390*t681) + t2130*t7265 + t2912*t7460 + t3231*t7620 - 0.183*(-1.*t2699*t7460 + t2308*t7620) - 0.5*(t2308*t7460 + t2699*t7620);
  p_output1[14]=-1.*t1000*t1038*t1039 - 1.*t1039*t1313*t1798 - 1.*t379*t382 + 0.13205*(-1.*t1039*t1313*t1424 - 1.*t1038*t1039*t681) + t2130*t8941 + t2912*t9024 + t3231*t9086 - 0.183*(-1.*t2699*t9024 + t2308*t9086) - 0.5*(t2308*t9024 + t2699*t9086);
  p_output1[15]=t1798*t3523 + t1000*t9211 + 0.13205*(t3757 + t681*t9211) + t2130*t9216 + t155*t2912*t9216 - 1.*t2057*t3231*t9216 - 0.183*(-1.*t2057*t2308*t9216 - 1.*t155*t2699*t9216) - 0.5*(t155*t2308*t9216 - 1.*t2057*t2699*t9216);
  p_output1[16]=t1000*t1893 + t1798*t9293 + t2130*t9302 + t155*t2912*t9302 - 1.*t2057*t3231*t9302 - 0.183*(-1.*t2057*t2308*t9302 - 1.*t155*t2699*t9302) - 0.5*(t155*t2308*t9302 - 1.*t2057*t2699*t9302) + 0.13205*(t1893*t681 + t9313);
  p_output1[17]=-1.*t1000*t1313*t382 + t1038*t1798*t382 + t9375 + t9376 + t9380 + t9412 + t9418 + t9423;
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
  p_output1[45]=-0.047*t1424*t3523 + 0.13205*t3767 + 0.047*t3576*t681 + t2130*t9434 + t155*t2912*t9434 - 1.*t2057*t3231*t9434 - 0.183*(-1.*t2057*t2308*t9434 - 1.*t155*t2699*t9434) - 0.5*(t155*t2308*t9434 - 1.*t2057*t2699*t9434);
  p_output1[46]=-0.047*t1424*t9293 + 0.047*t681*t9476 + t2130*t9483 + t155*t2912*t9483 - 1.*t2057*t3231*t9483 - 0.183*(-1.*t2057*t2308*t9483 - 1.*t155*t2699*t9483) - 0.5*(t155*t2308*t9483 - 1.*t2057*t2699*t9483) + 0.13205*t9490;
  p_output1[47]=-0.047*t1038*t1424*t382 + 0.047*t1313*t382*t681 + t9375 + t9376 + t9380 + t9412 + t9418 + t9423;
  p_output1[48]=-0.183*t155*t3767 - 0.183*t1266*t2057*t382 + t2912*t4915 + t3231*t9535 - 0.5*(t4999 + t2699*t9535) - 0.183*(t2308*t9535 + t9545);
  p_output1[49]=-0.183*t2057*t382*t390 - 0.183*t155*t9490 + t3231*t9552 + t2912*t9561 - 0.5*(t2699*t9552 + t9567) - 0.183*(t2308*t9552 + t9573);
  p_output1[50]=0.183*t1039*t2057 - 0.183*t155*t9396 + t3231*t9582 + t2912*t9589 - 0.5*(t2699*t9582 + t9592) - 0.183*(t2308*t9582 + t9597);
  p_output1[51]=-0.5*t5042 - 0.183*(-1.*t2308*t4331 + t9545) + t4331*t9604 + t4915*t9609;
  p_output1[52]=t9561*t9609 + t9604*t9623 - 0.183*(t9573 - 1.*t2308*t9623) - 0.5*(t9567 - 1.*t2699*t9623);
  p_output1[53]=t9589*t9609 + t9604*t9642 - 0.183*(t9597 - 1.*t2308*t9642) - 0.5*(t9592 - 1.*t2699*t9642);
}



void Jp_RLfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
