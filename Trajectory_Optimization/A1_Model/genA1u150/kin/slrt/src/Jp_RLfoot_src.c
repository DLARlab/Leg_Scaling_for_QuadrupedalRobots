/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:26:11 GMT-05:00
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
  double t233;
  double t792;
  double t514;
  double t719;
  double t893;
  double t369;
  double t788;
  double t944;
  double t953;
  double t1108;
  double t1320;
  double t1434;
  double t1443;
  double t215;
  double t1702;
  double t29;
  double t1881;
  double t2015;
  double t2085;
  double t2193;
  double t2227;
  double t2241;
  double t2345;
  double t2589;
  double t2594;
  double t2627;
  double t2884;
  double t2904;
  double t3016;
  double t61;
  double t123;
  double t173;
  double t191;
  double t465;
  double t478;
  double t1190;
  double t1255;
  double t1292;
  double t1314;
  double t3698;
  double t3841;
  double t3912;
  double t4056;
  double t4102;
  double t4398;
  double t1752;
  double t1862;
  double t2309;
  double t2443;
  double t2561;
  double t4916;
  double t5018;
  double t5044;
  double t2721;
  double t2782;
  double t2795;
  double t5222;
  double t5241;
  double t5332;
  double t5728;
  double t5880;
  double t5885;
  double t6706;
  double t6737;
  double t6764;
  double t6797;
  double t6810;
  double t6822;
  double t6868;
  double t6898;
  double t6903;
  double t7252;
  double t7277;
  double t7279;
  double t7283;
  double t7285;
  double t7296;
  double t7328;
  double t7329;
  double t7337;
  double t7782;
  double t7795;
  double t7807;
  double t7833;
  double t7855;
  double t7870;
  double t7951;
  double t7991;
  double t8000;
  double t8086;
  double t8090;
  double t8094;
  double t8102;
  double t8175;
  double t8195;
  double t8303;
  double t8306;
  double t8308;
  double t1591;
  double t8354;
  double t8378;
  double t8538;
  double t8540;
  double t8543;
  double t8727;
  double t8728;
  double t8815;
  double t8816;
  double t8861;
  double t8880;
  double t8918;
  double t8420;
  double t8551;
  double t8554;
  double t8564;
  double t8580;
  double t8604;
  double t8609;
  double t8637;
  double t8638;
  double t8640;
  double t8644;
  double t8666;
  double t8670;
  double t8671;
  double t8691;
  double t8695;
  double t9159;
  double t9160;
  double t9167;
  double t5948;
  double t8965;
  double t8967;
  double t9273;
  double t9275;
  double t9280;
  double t9282;
  double t9293;
  double t9373;
  double t9382;
  double t9405;
  double t9425;
  double t9437;
  double t9448;
  double t5908;
  double t5974;
  double t9231;
  double t9522;
  double t9530;
  double t9537;
  double t9563;
  double t9570;
  double t9596;
  double t9600;
  double t9603;
  double t9304;
  double t9326;
  double t9657;
  double t9660;
  double t9674;
  double t9467;
  double t9486;
  t233 = Sin(var1[3]);
  t792 = Cos(var1[3]);
  t514 = Cos(var1[5]);
  t719 = Sin(var1[4]);
  t893 = Sin(var1[5]);
  t369 = Sin(var1[15]);
  t788 = -1.*t514*t233*t719;
  t944 = t792*t893;
  t953 = t788 + t944;
  t1108 = Cos(var1[15]);
  t1320 = -1.*t792*t514;
  t1434 = -1.*t233*t719*t893;
  t1443 = t1320 + t1434;
  t215 = Cos(var1[4]);
  t1702 = Sin(var1[16]);
  t29 = Cos(var1[16]);
  t1881 = t1108*t953;
  t2015 = -1.*t369*t1443;
  t2085 = t1881 + t2015;
  t2193 = Cos(var1[17]);
  t2227 = -1.*t2193;
  t2241 = 1. + t2227;
  t2345 = Sin(var1[17]);
  t2589 = -1.*t215*t1702*t233;
  t2594 = t29*t2085;
  t2627 = t2589 + t2594;
  t2884 = -1.*t29*t215*t233;
  t2904 = -1.*t1702*t2085;
  t3016 = t2884 + t2904;
  t61 = -1.*t29;
  t123 = 1. + t61;
  t173 = -0.183*t123;
  t191 = 0. + t173;
  t465 = -0.047*t369;
  t478 = 0. + t465;
  t1190 = -1.*t1108;
  t1255 = 1. + t1190;
  t1292 = 0.047*t1255;
  t1314 = 0. + t1292;
  t3698 = t792*t514*t719;
  t3841 = t233*t893;
  t3912 = t3698 + t3841;
  t4056 = -1.*t514*t233;
  t4102 = t792*t719*t893;
  t4398 = t4056 + t4102;
  t1752 = -0.183*t1702;
  t1862 = 0. + t1752;
  t2309 = -0.3*t2241;
  t2443 = -0.183*t2345;
  t2561 = 0. + t2309 + t2443;
  t4916 = t1108*t3912;
  t5018 = -1.*t369*t4398;
  t5044 = t4916 + t5018;
  t2721 = -0.183*t2241;
  t2782 = 0.3*t2345;
  t2795 = 0. + t2721 + t2782;
  t5222 = t792*t215*t1702;
  t5241 = t29*t5044;
  t5332 = t5222 + t5241;
  t5728 = t29*t792*t215;
  t5880 = -1.*t1702*t5044;
  t5885 = t5728 + t5880;
  t6706 = t1108*t792*t215*t514;
  t6737 = -1.*t792*t215*t369*t893;
  t6764 = t6706 + t6737;
  t6797 = -1.*t792*t1702*t719;
  t6810 = t29*t6764;
  t6822 = t6797 + t6810;
  t6868 = -1.*t29*t792*t719;
  t6898 = -1.*t1702*t6764;
  t6903 = t6868 + t6898;
  t7252 = t1108*t215*t514*t233;
  t7277 = -1.*t215*t369*t233*t893;
  t7279 = t7252 + t7277;
  t7283 = -1.*t1702*t233*t719;
  t7285 = t29*t7279;
  t7296 = t7283 + t7285;
  t7328 = -1.*t29*t233*t719;
  t7329 = -1.*t1702*t7279;
  t7337 = t7328 + t7329;
  t7782 = -1.*t1108*t514*t719;
  t7795 = t369*t719*t893;
  t7807 = t7782 + t7795;
  t7833 = -1.*t215*t1702;
  t7855 = t29*t7807;
  t7870 = t7833 + t7855;
  t7951 = -1.*t29*t215;
  t7991 = -1.*t1702*t7807;
  t8000 = t7951 + t7991;
  t8086 = t514*t233;
  t8090 = -1.*t792*t719*t893;
  t8094 = t8086 + t8090;
  t8102 = -1.*t369*t3912;
  t8175 = t1108*t8094;
  t8195 = t8102 + t8175;
  t8303 = t514*t233*t719;
  t8306 = -1.*t792*t893;
  t8308 = t8303 + t8306;
  t1591 = t1108*t1443;
  t8354 = -1.*t369*t8308;
  t8378 = t8354 + t1591;
  t8538 = -1.*t215*t514*t369;
  t8540 = -1.*t1108*t215*t893;
  t8543 = t8538 + t8540;
  t8727 = -1.*t1108*t4398;
  t8728 = t8102 + t8727;
  t8815 = t792*t514;
  t8816 = t233*t719*t893;
  t8861 = t8815 + t8816;
  t8880 = -1.*t1108*t8861;
  t8918 = t8354 + t8880;
  t8420 = t1108*t8308;
  t8551 = t1862*t8543;
  t8554 = t29*t2561*t8543;
  t8564 = -1.*t1702*t2795*t8543;
  t8580 = t1108*t215*t514;
  t8604 = -1.*t215*t369*t893;
  t8609 = t8580 + t8604;
  t8637 = 0.17458*t8609;
  t8638 = -1.*t2193*t1702*t8543;
  t8640 = -1.*t29*t2345*t8543;
  t8644 = t8638 + t8640;
  t8666 = -0.183*t8644;
  t8670 = t29*t2193*t8543;
  t8671 = -1.*t1702*t2345*t8543;
  t8691 = t8670 + t8671;
  t8695 = -0.6*t8691;
  t9159 = -1.*t792*t215*t1702;
  t9160 = -1.*t29*t5044;
  t9167 = t9159 + t9160;
  t5948 = t2193*t5885;
  t8965 = -1.*t369*t8861;
  t8967 = t8420 + t8965;
  t9273 = -1.*t29*t8967;
  t9275 = t2589 + t9273;
  t9280 = t29*t215*t233;
  t9282 = -1.*t1702*t8967;
  t9293 = t9280 + t9282;
  t9373 = t1702*t719;
  t9382 = -1.*t29*t8609;
  t9405 = t9373 + t9382;
  t9425 = -1.*t29*t719;
  t9437 = -1.*t1702*t8609;
  t9448 = t9425 + t9437;
  t5908 = -1.*t2345*t5332;
  t5974 = t5908 + t5948;
  t9231 = -1.*t2345*t5885;
  t9522 = -0.183*t2193;
  t9530 = -0.3*t2345;
  t9537 = t9522 + t9530;
  t9563 = 0.3*t2193;
  t9570 = t9563 + t2443;
  t9596 = t215*t1702*t233;
  t9600 = t29*t8967;
  t9603 = t9596 + t9600;
  t9304 = t2193*t9293;
  t9326 = -1.*t2345*t9293;
  t9657 = -1.*t1702*t719;
  t9660 = t29*t8609;
  t9674 = t9657 + t9660;
  t9467 = t2193*t9448;
  t9486 = -1.*t2345*t9448;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1314*t1443 + t1862*t2085 - 1.*t191*t215*t233 + t2561*t2627 + t2795*t3016 - 0.183*(-1.*t2345*t2627 + t2193*t3016) - 0.6*(t2193*t2627 + t2345*t3016) + t478*t953 + 0.17458*(t1591 + t369*t953);
  p_output1[10]=t1314*t4398 + 0.17458*(t369*t3912 + t1108*t4398) + t3912*t478 + t1862*t5044 + t2561*t5332 + t2795*t5885 - 0.6*(t2193*t5332 + t2345*t5885) - 0.183*t5974 + t191*t215*t792;
  p_output1[11]=0;
  p_output1[12]=t1862*t6764 + t2561*t6822 + t2795*t6903 - 0.183*(-1.*t2345*t6822 + t2193*t6903) - 0.6*(t2193*t6822 + t2345*t6903) + t215*t478*t514*t792 - 1.*t191*t719*t792 + t1314*t215*t792*t893 + 0.17458*(t215*t369*t514*t792 + t1108*t215*t792*t893);
  p_output1[13]=t215*t233*t478*t514 - 1.*t191*t233*t719 + t1862*t7279 + t2561*t7296 + t2795*t7337 - 0.183*(-1.*t2345*t7296 + t2193*t7337) - 0.6*(t2193*t7296 + t2345*t7337) + t1314*t215*t233*t893 + 0.17458*(t215*t233*t369*t514 + t1108*t215*t233*t893);
  p_output1[14]=-1.*t191*t215 - 1.*t478*t514*t719 + t1862*t7807 + t2561*t7870 + t2795*t8000 - 0.183*(-1.*t2345*t7870 + t2193*t8000) - 0.6*(t2193*t7870 + t2345*t8000) - 1.*t1314*t719*t893 + 0.17458*(-1.*t369*t514*t719 - 1.*t1108*t719*t893);
  p_output1[15]=t1314*t3912 + t478*t8094 + 0.17458*(t4916 + t369*t8094) + t1862*t8195 - 1.*t1702*t2795*t8195 + t2561*t29*t8195 - 0.6*(-1.*t1702*t2345*t8195 + t2193*t29*t8195) - 0.183*(-1.*t1702*t2193*t8195 - 1.*t2345*t29*t8195);
  p_output1[16]=t1443*t478 + t1314*t8308 + t1862*t8378 - 1.*t1702*t2795*t8378 + t2561*t29*t8378 - 0.6*(-1.*t1702*t2345*t8378 + t2193*t29*t8378) - 0.183*(-1.*t1702*t2193*t8378 - 1.*t2345*t29*t8378) + 0.17458*(t1443*t369 + t8420);
  p_output1[17]=t1314*t215*t514 + t8551 + t8554 + t8564 + t8637 + t8666 + t8695 - 1.*t215*t478*t893;
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
  p_output1[45]=-0.047*t1108*t3912 + 0.047*t369*t4398 + 0.17458*t5044 + t1862*t8728 - 1.*t1702*t2795*t8728 + t2561*t29*t8728 - 0.6*(-1.*t1702*t2345*t8728 + t2193*t29*t8728) - 0.183*(-1.*t1702*t2193*t8728 - 1.*t2345*t29*t8728);
  p_output1[46]=-0.047*t1108*t8308 + 0.047*t369*t8861 + t1862*t8918 - 1.*t1702*t2795*t8918 + t2561*t29*t8918 - 0.6*(-1.*t1702*t2345*t8918 + t2193*t29*t8918) - 0.183*(-1.*t1702*t2193*t8918 - 1.*t2345*t29*t8918) + 0.17458*t8967;
  p_output1[47]=-0.047*t1108*t215*t514 + t8551 + t8554 + t8564 + t8637 + t8666 + t8695 + 0.047*t215*t369*t893;
  p_output1[48]=-0.183*t29*t5044 + t2561*t5885 - 0.183*t1702*t215*t792 + t2795*t9167 - 0.6*(t5948 + t2345*t9167) - 0.183*(t2193*t9167 + t9231);
  p_output1[49]=-0.183*t1702*t215*t233 - 0.183*t29*t8967 + t2795*t9275 + t2561*t9293 - 0.6*(t2345*t9275 + t9304) - 0.183*(t2193*t9275 + t9326);
  p_output1[50]=0.183*t1702*t719 - 0.183*t29*t8609 + t2795*t9405 + t2561*t9448 - 0.6*(t2345*t9405 + t9467) - 0.183*(t2193*t9405 + t9486);
  p_output1[51]=-0.6*t5974 - 0.183*(-1.*t2193*t5332 + t9231) + t5332*t9537 + t5885*t9570;
  p_output1[52]=t9293*t9570 + t9537*t9603 - 0.183*(t9326 - 1.*t2193*t9603) - 0.6*(t9304 - 1.*t2345*t9603);
  p_output1[53]=t9448*t9570 + t9537*t9674 - 0.183*(t9486 - 1.*t2193*t9674) - 0.6*(t9467 - 1.*t2345*t9674);
}



void Jp_RLfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
