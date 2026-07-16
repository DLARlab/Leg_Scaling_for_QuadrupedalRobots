/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:17:48 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_FR_thigh_joint_src.h"

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
  double t922;
  double t2948;
  double t3312;
  double t2721;
  double t3814;
  double t1249;
  double t3204;
  double t3870;
  double t3975;
  double t4595;
  double t4717;
  double t4744;
  double t4747;
  double t103;
  double t104;
  double t4951;
  double t4996;
  double t5106;
  double t5376;
  double t105;
  double t631;
  double t690;
  double t781;
  double t1404;
  double t1411;
  double t1870;
  double t2684;
  double t4791;
  double t4795;
  double t6061;
  double t6073;
  double t6133;
  double t6180;
  double t6181;
  double t6199;
  double t5424;
  double t5425;
  double t6360;
  double t6366;
  double t6513;
  double t6979;
  double t6985;
  double t7024;
  double t7119;
  double t7128;
  double t7153;
  double t7395;
  double t7418;
  double t7419;
  double t7490;
  double t7519;
  double t7526;
  double t7702;
  double t7706;
  double t7783;
  double t7869;
  double t7872;
  double t7874;
  double t4836;
  double t7961;
  double t7976;
  double t8169;
  double t8176;
  double t8229;
  double t8325;
  double t8331;
  double t7893;
  double t8432;
  double t8457;
  double t8459;
  double t8481;
  double t8486;
  double t8070;
  double t8090;
  double t8147;
  double t8165;
  double t8234;
  double t8238;
  double t8462;
  double t8473;
  t922 = Sin(var1[3]);
  t2948 = Cos(var1[5]);
  t3312 = Sin(var1[4]);
  t2721 = Cos(var1[3]);
  t3814 = Sin(var1[5]);
  t1249 = Cos(var1[6]);
  t3204 = -1.*t2721*t2948;
  t3870 = -1.*t922*t3312*t3814;
  t3975 = t3204 + t3870;
  t4595 = -1.*t2948*t922*t3312;
  t4717 = t2721*t3814;
  t4744 = t4595 + t4717;
  t4747 = Sin(var1[6]);
  t103 = Cos(var1[4]);
  t104 = Cos(var1[7]);
  t4951 = t1249*t4744;
  t4996 = -1.*t3975*t4747;
  t5106 = t4951 + t4996;
  t5376 = Sin(var1[7]);
  t105 = -1.*t104;
  t631 = 1. + t105;
  t690 = 0.183*t631;
  t781 = 0. + t690;
  t1404 = -1.*t1249;
  t1411 = 1. + t1404;
  t1870 = -0.047*t1411;
  t2684 = 0. + t1870;
  t4791 = 0.047*t4747;
  t4795 = 0. + t4791;
  t6061 = -1.*t2948*t922;
  t6073 = t2721*t3312*t3814;
  t6133 = t6061 + t6073;
  t6180 = t2721*t2948*t3312;
  t6181 = t922*t3814;
  t6199 = t6180 + t6181;
  t5424 = 0.183*t5376;
  t5425 = 0. + t5424;
  t6360 = t1249*t6199;
  t6366 = -1.*t6133*t4747;
  t6513 = t6360 + t6366;
  t6979 = t2721*t103*t2948*t1249;
  t6985 = -1.*t2721*t103*t3814*t4747;
  t7024 = t6979 + t6985;
  t7119 = t103*t2948*t1249*t922;
  t7128 = -1.*t103*t922*t3814*t4747;
  t7153 = t7119 + t7128;
  t7395 = -1.*t2948*t1249*t3312;
  t7418 = t3312*t3814*t4747;
  t7419 = t7395 + t7418;
  t7490 = t2948*t922;
  t7519 = -1.*t2721*t3312*t3814;
  t7526 = t7490 + t7519;
  t7702 = t1249*t7526;
  t7706 = -1.*t6199*t4747;
  t7783 = t7702 + t7706;
  t7869 = t2948*t922*t3312;
  t7872 = -1.*t2721*t3814;
  t7874 = t7869 + t7872;
  t4836 = t1249*t3975;
  t7961 = -1.*t7874*t4747;
  t7976 = t4836 + t7961;
  t8169 = -1.*t103*t1249*t3814;
  t8176 = -1.*t103*t2948*t4747;
  t8229 = t8169 + t8176;
  t8325 = -1.*t1249*t6133;
  t8331 = t8325 + t7706;
  t7893 = t1249*t7874;
  t8432 = t2721*t2948;
  t8457 = t922*t3312*t3814;
  t8459 = t8432 + t8457;
  t8481 = -1.*t1249*t8459;
  t8486 = t8481 + t7961;
  t8070 = t103*t2948*t1249;
  t8090 = -1.*t103*t3814*t4747;
  t8147 = t8070 + t8090;
  t8165 = -0.11079*t8147;
  t8234 = t8229*t5425;
  t8238 = -0.183*t8229*t5376;
  t8462 = -1.*t8459*t4747;
  t8473 = t7893 + t8462;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t2684*t3975 + t4744*t4795 - 0.11079*(t4744*t4747 + t4836) + t5106*t5425 - 1.*t103*t781*t922 + 0.183*(-1.*t5106*t5376 - 1.*t103*t104*t922);
  p_output1[10]=t2684*t6133 + t4795*t6199 - 0.11079*(t1249*t6133 + t4747*t6199) + t5425*t6513 + 0.183*(t103*t104*t2721 - 1.*t5376*t6513) + t103*t2721*t781;
  p_output1[11]=0;
  p_output1[12]=t103*t2684*t2721*t3814 - 0.11079*(t103*t1249*t2721*t3814 + t103*t2721*t2948*t4747) + t103*t2721*t2948*t4795 + t5425*t7024 + 0.183*(-1.*t104*t2721*t3312 - 1.*t5376*t7024) - 1.*t2721*t3312*t781;
  p_output1[13]=t5425*t7153 + t103*t2684*t3814*t922 + t103*t2948*t4795*t922 - 1.*t3312*t781*t922 + 0.183*(-1.*t5376*t7153 - 1.*t104*t3312*t922) - 0.11079*(t103*t1249*t3814*t922 + t103*t2948*t4747*t922);
  p_output1[14]=-1.*t2684*t3312*t3814 - 0.11079*(-1.*t1249*t3312*t3814 - 1.*t2948*t3312*t4747) - 1.*t2948*t3312*t4795 + t5425*t7419 + 0.183*(-1.*t103*t104 - 1.*t5376*t7419) - 1.*t103*t781;
  p_output1[15]=t2684*t6199 + t4795*t7526 - 0.11079*(t6360 + t4747*t7526) - 0.183*t5376*t7783 + t5425*t7783;
  p_output1[16]=t3975*t4795 + t2684*t7874 - 0.11079*(t3975*t4747 + t7893) - 0.183*t5376*t7976 + t5425*t7976;
  p_output1[17]=t103*t2684*t2948 - 1.*t103*t3814*t4795 + t8165 + t8234 + t8238;
  p_output1[18]=-0.047*t4747*t6133 + 0.047*t1249*t6199 - 0.11079*t6513 - 0.183*t5376*t8331 + t5425*t8331;
  p_output1[19]=0.047*t1249*t7874 - 0.047*t4747*t8459 - 0.11079*t8473 - 0.183*t5376*t8486 + t5425*t8486;
  p_output1[20]=0.047*t103*t1249*t2948 - 0.047*t103*t3814*t4747 + t8165 + t8234 + t8238;
  p_output1[21]=0.183*t103*t2721*t5376 + 0.183*t104*t6513 + 0.183*(-1.*t103*t2721*t5376 - 1.*t104*t6513);
  p_output1[22]=0.183*t104*t8473 + 0.183*t103*t5376*t922 + 0.183*(-1.*t104*t8473 - 1.*t103*t5376*t922);
  p_output1[23]=-0.183*t3312*t5376 + 0.183*t104*t8147 + 0.183*(t3312*t5376 - 1.*t104*t8147);
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



void Jp_FR_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
