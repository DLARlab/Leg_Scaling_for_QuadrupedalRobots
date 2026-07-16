/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:51:10 GMT-05:00
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
  double t685;
  double t1295;
  double t1034;
  double t1161;
  double t1311;
  double t865;
  double t1169;
  double t1322;
  double t1336;
  double t1399;
  double t1705;
  double t1735;
  double t1757;
  double t619;
  double t2120;
  double t229;
  double t2757;
  double t2842;
  double t3211;
  double t3334;
  double t3335;
  double t3421;
  double t3484;
  double t4342;
  double t4490;
  double t4501;
  double t4733;
  double t4937;
  double t4950;
  double t282;
  double t345;
  double t537;
  double t618;
  double t886;
  double t912;
  double t1464;
  double t1480;
  double t1482;
  double t1694;
  double t5083;
  double t5147;
  double t5149;
  double t5238;
  double t5304;
  double t5308;
  double t2163;
  double t2413;
  double t3467;
  double t3545;
  double t4130;
  double t5437;
  double t5441;
  double t5445;
  double t4651;
  double t4657;
  double t4681;
  double t5472;
  double t5476;
  double t5480;
  double t5503;
  double t5529;
  double t5539;
  double t5801;
  double t5805;
  double t5809;
  double t5820;
  double t5821;
  double t5823;
  double t5827;
  double t5829;
  double t5830;
  double t6180;
  double t6188;
  double t6236;
  double t6279;
  double t6285;
  double t6330;
  double t6583;
  double t6678;
  double t6704;
  double t7283;
  double t7431;
  double t7462;
  double t7482;
  double t7514;
  double t7579;
  double t7662;
  double t7665;
  double t7669;
  double t7782;
  double t7799;
  double t7801;
  double t7815;
  double t7826;
  double t7836;
  double t8008;
  double t8027;
  double t8033;
  double t1790;
  double t8055;
  double t8056;
  double t8218;
  double t8220;
  double t8231;
  double t8376;
  double t8384;
  double t8441;
  double t8448;
  double t8449;
  double t8462;
  double t8472;
  double t8076;
  double t8234;
  double t8238;
  double t8247;
  double t8253;
  double t8256;
  double t8265;
  double t8277;
  double t8280;
  double t8281;
  double t8285;
  double t8287;
  double t8323;
  double t8328;
  double t8344;
  double t8345;
  double t8593;
  double t8606;
  double t8609;
  double t5548;
  double t8490;
  double t8492;
  double t8650;
  double t8654;
  double t8658;
  double t8663;
  double t8676;
  double t8740;
  double t8741;
  double t8743;
  double t8750;
  double t8751;
  double t8752;
  double t5546;
  double t5589;
  double t8633;
  double t8771;
  double t8776;
  double t8777;
  double t8782;
  double t8786;
  double t8804;
  double t8807;
  double t8811;
  double t8706;
  double t8720;
  double t8836;
  double t8837;
  double t8840;
  double t8755;
  double t8763;
  t685 = Sin(var1[3]);
  t1295 = Cos(var1[3]);
  t1034 = Cos(var1[5]);
  t1161 = Sin(var1[4]);
  t1311 = Sin(var1[5]);
  t865 = Sin(var1[15]);
  t1169 = -1.*t1034*t685*t1161;
  t1322 = t1295*t1311;
  t1336 = t1169 + t1322;
  t1399 = Cos(var1[15]);
  t1705 = -1.*t1295*t1034;
  t1735 = -1.*t685*t1161*t1311;
  t1757 = t1705 + t1735;
  t619 = Cos(var1[4]);
  t2120 = Sin(var1[16]);
  t229 = Cos(var1[16]);
  t2757 = t1399*t1336;
  t2842 = -1.*t865*t1757;
  t3211 = t2757 + t2842;
  t3334 = Cos(var1[17]);
  t3335 = -1.*t3334;
  t3421 = 1. + t3335;
  t3484 = Sin(var1[17]);
  t4342 = -1.*t619*t2120*t685;
  t4490 = t229*t3211;
  t4501 = t4342 + t4490;
  t4733 = -1.*t229*t619*t685;
  t4937 = -1.*t2120*t3211;
  t4950 = t4733 + t4937;
  t282 = -1.*t229;
  t345 = 1. + t282;
  t537 = -0.183*t345;
  t618 = 0. + t537;
  t886 = -0.047*t865;
  t912 = 0. + t886;
  t1464 = -1.*t1399;
  t1480 = 1. + t1464;
  t1482 = 0.047*t1480;
  t1694 = 0. + t1482;
  t5083 = t1295*t1034*t1161;
  t5147 = t685*t1311;
  t5149 = t5083 + t5147;
  t5238 = -1.*t1034*t685;
  t5304 = t1295*t1161*t1311;
  t5308 = t5238 + t5304;
  t2163 = -0.183*t2120;
  t2413 = 0. + t2163;
  t3467 = -0.15*t3421;
  t3545 = -0.183*t3484;
  t4130 = 0. + t3467 + t3545;
  t5437 = t1399*t5149;
  t5441 = -1.*t865*t5308;
  t5445 = t5437 + t5441;
  t4651 = -0.183*t3421;
  t4657 = 0.15*t3484;
  t4681 = 0. + t4651 + t4657;
  t5472 = t1295*t619*t2120;
  t5476 = t229*t5445;
  t5480 = t5472 + t5476;
  t5503 = t229*t1295*t619;
  t5529 = -1.*t2120*t5445;
  t5539 = t5503 + t5529;
  t5801 = t1399*t1295*t619*t1034;
  t5805 = -1.*t1295*t619*t865*t1311;
  t5809 = t5801 + t5805;
  t5820 = -1.*t1295*t2120*t1161;
  t5821 = t229*t5809;
  t5823 = t5820 + t5821;
  t5827 = -1.*t229*t1295*t1161;
  t5829 = -1.*t2120*t5809;
  t5830 = t5827 + t5829;
  t6180 = t1399*t619*t1034*t685;
  t6188 = -1.*t619*t865*t685*t1311;
  t6236 = t6180 + t6188;
  t6279 = -1.*t2120*t685*t1161;
  t6285 = t229*t6236;
  t6330 = t6279 + t6285;
  t6583 = -1.*t229*t685*t1161;
  t6678 = -1.*t2120*t6236;
  t6704 = t6583 + t6678;
  t7283 = -1.*t1399*t1034*t1161;
  t7431 = t865*t1161*t1311;
  t7462 = t7283 + t7431;
  t7482 = -1.*t619*t2120;
  t7514 = t229*t7462;
  t7579 = t7482 + t7514;
  t7662 = -1.*t229*t619;
  t7665 = -1.*t2120*t7462;
  t7669 = t7662 + t7665;
  t7782 = t1034*t685;
  t7799 = -1.*t1295*t1161*t1311;
  t7801 = t7782 + t7799;
  t7815 = -1.*t865*t5149;
  t7826 = t1399*t7801;
  t7836 = t7815 + t7826;
  t8008 = t1034*t685*t1161;
  t8027 = -1.*t1295*t1311;
  t8033 = t8008 + t8027;
  t1790 = t1399*t1757;
  t8055 = -1.*t865*t8033;
  t8056 = t8055 + t1790;
  t8218 = -1.*t619*t1034*t865;
  t8220 = -1.*t1399*t619*t1311;
  t8231 = t8218 + t8220;
  t8376 = -1.*t1399*t5308;
  t8384 = t7815 + t8376;
  t8441 = t1295*t1034;
  t8448 = t685*t1161*t1311;
  t8449 = t8441 + t8448;
  t8462 = -1.*t1399*t8449;
  t8472 = t8055 + t8462;
  t8076 = t1399*t8033;
  t8234 = t2413*t8231;
  t8238 = t229*t4130*t8231;
  t8247 = -1.*t2120*t4681*t8231;
  t8253 = t1399*t619*t1034;
  t8256 = -1.*t619*t865*t1311;
  t8265 = t8253 + t8256;
  t8277 = 0.13205*t8265;
  t8280 = -1.*t3334*t2120*t8231;
  t8281 = -1.*t229*t3484*t8231;
  t8285 = t8280 + t8281;
  t8287 = -0.183*t8285;
  t8323 = t229*t3334*t8231;
  t8328 = -1.*t2120*t3484*t8231;
  t8344 = t8323 + t8328;
  t8345 = -0.3*t8344;
  t8593 = -1.*t1295*t619*t2120;
  t8606 = -1.*t229*t5445;
  t8609 = t8593 + t8606;
  t5548 = t3334*t5539;
  t8490 = -1.*t865*t8449;
  t8492 = t8076 + t8490;
  t8650 = -1.*t229*t8492;
  t8654 = t4342 + t8650;
  t8658 = t229*t619*t685;
  t8663 = -1.*t2120*t8492;
  t8676 = t8658 + t8663;
  t8740 = t2120*t1161;
  t8741 = -1.*t229*t8265;
  t8743 = t8740 + t8741;
  t8750 = -1.*t229*t1161;
  t8751 = -1.*t2120*t8265;
  t8752 = t8750 + t8751;
  t5546 = -1.*t3484*t5480;
  t5589 = t5546 + t5548;
  t8633 = -1.*t3484*t5539;
  t8771 = -0.183*t3334;
  t8776 = -0.15*t3484;
  t8777 = t8771 + t8776;
  t8782 = 0.15*t3334;
  t8786 = t8782 + t3545;
  t8804 = t619*t2120*t685;
  t8807 = t229*t8492;
  t8811 = t8804 + t8807;
  t8706 = t3334*t8676;
  t8720 = -1.*t3484*t8676;
  t8836 = -1.*t2120*t1161;
  t8837 = t229*t8265;
  t8840 = t8836 + t8837;
  t8755 = t3334*t8752;
  t8763 = -1.*t3484*t8752;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1694*t1757 + t2413*t3211 + t4130*t4501 + t4681*t4950 - 0.183*(-1.*t3484*t4501 + t3334*t4950) - 0.3*(t3334*t4501 + t3484*t4950) - 1.*t618*t619*t685 + 0.13205*(t1790 + t1336*t865) + t1336*t912;
  p_output1[10]=t1694*t5308 + t2413*t5445 + t4130*t5480 + t4681*t5539 - 0.3*(t3334*t5480 + t3484*t5539) - 0.183*t5589 + t1295*t618*t619 + 0.13205*(t1399*t5308 + t5149*t865) + t5149*t912;
  p_output1[11]=0;
  p_output1[12]=t2413*t5809 + t4130*t5823 + t4681*t5830 - 0.183*(-1.*t3484*t5823 + t3334*t5830) - 0.3*(t3334*t5823 + t3484*t5830) - 1.*t1161*t1295*t618 + t1295*t1311*t1694*t619 + 0.13205*(t1295*t1311*t1399*t619 + t1034*t1295*t619*t865) + t1034*t1295*t619*t912;
  p_output1[13]=t2413*t6236 + t4130*t6330 + t4681*t6704 - 0.183*(-1.*t3484*t6330 + t3334*t6704) - 0.3*(t3334*t6330 + t3484*t6704) - 1.*t1161*t618*t685 + t1311*t1694*t619*t685 + 0.13205*(t1311*t1399*t619*t685 + t1034*t619*t685*t865) + t1034*t619*t685*t912;
  p_output1[14]=-1.*t1161*t1311*t1694 - 1.*t618*t619 + t2413*t7462 + t4130*t7579 + t4681*t7669 - 0.183*(-1.*t3484*t7579 + t3334*t7669) - 0.3*(t3334*t7579 + t3484*t7669) + 0.13205*(-1.*t1161*t1311*t1399 - 1.*t1034*t1161*t865) - 1.*t1034*t1161*t912;
  p_output1[15]=t1694*t5149 + t2413*t7836 + t229*t4130*t7836 - 1.*t2120*t4681*t7836 - 0.3*(t229*t3334*t7836 - 1.*t2120*t3484*t7836) - 0.183*(-1.*t2120*t3334*t7836 - 1.*t229*t3484*t7836) + 0.13205*(t5437 + t7801*t865) + t7801*t912;
  p_output1[16]=t1694*t8033 + t2413*t8056 + t229*t4130*t8056 - 1.*t2120*t4681*t8056 - 0.3*(t229*t3334*t8056 - 1.*t2120*t3484*t8056) - 0.183*(-1.*t2120*t3334*t8056 - 1.*t229*t3484*t8056) + 0.13205*(t8076 + t1757*t865) + t1757*t912;
  p_output1[17]=t1034*t1694*t619 + t8234 + t8238 + t8247 + t8277 + t8287 + t8345 - 1.*t1311*t619*t912;
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
  p_output1[45]=-0.047*t1399*t5149 + 0.13205*t5445 + t2413*t8384 + t229*t4130*t8384 - 1.*t2120*t4681*t8384 - 0.3*(t229*t3334*t8384 - 1.*t2120*t3484*t8384) - 0.183*(-1.*t2120*t3334*t8384 - 1.*t229*t3484*t8384) + 0.047*t5308*t865;
  p_output1[46]=-0.047*t1399*t8033 + t2413*t8472 + t229*t4130*t8472 - 1.*t2120*t4681*t8472 - 0.3*(t229*t3334*t8472 - 1.*t2120*t3484*t8472) - 0.183*(-1.*t2120*t3334*t8472 - 1.*t229*t3484*t8472) + 0.13205*t8492 + 0.047*t8449*t865;
  p_output1[47]=-0.047*t1034*t1399*t619 + t8234 + t8238 + t8247 + t8277 + t8287 + t8345 + 0.047*t1311*t619*t865;
  p_output1[48]=-0.183*t229*t5445 + t4130*t5539 - 0.183*t1295*t2120*t619 + t4681*t8609 - 0.3*(t5548 + t3484*t8609) - 0.183*(t3334*t8609 + t8633);
  p_output1[49]=-0.183*t2120*t619*t685 - 0.183*t229*t8492 + t4681*t8654 + t4130*t8676 - 0.3*(t3484*t8654 + t8706) - 0.183*(t3334*t8654 + t8720);
  p_output1[50]=0.183*t1161*t2120 - 0.183*t229*t8265 + t4681*t8743 + t4130*t8752 - 0.3*(t3484*t8743 + t8755) - 0.183*(t3334*t8743 + t8763);
  p_output1[51]=-0.3*t5589 - 0.183*(-1.*t3334*t5480 + t8633) + t5480*t8777 + t5539*t8786;
  p_output1[52]=t8676*t8786 + t8777*t8811 - 0.183*(t8720 - 1.*t3334*t8811) - 0.3*(t8706 - 1.*t3484*t8811);
  p_output1[53]=t8752*t8786 + t8777*t8840 - 0.183*(t8763 - 1.*t3334*t8840) - 0.3*(t8755 - 1.*t3484*t8840);
}



void Jp_RLfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
