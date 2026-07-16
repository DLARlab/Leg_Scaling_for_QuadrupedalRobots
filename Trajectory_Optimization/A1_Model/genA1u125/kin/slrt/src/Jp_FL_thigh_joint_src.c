/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:20:27 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_FL_thigh_joint_src.h"

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
  double t960;
  double t1802;
  double t1619;
  double t1671;
  double t1817;
  double t1330;
  double t1702;
  double t2640;
  double t2641;
  double t3423;
  double t3907;
  double t4073;
  double t4194;
  double t41;
  double t885;
  double t5599;
  double t6246;
  double t6356;
  double t6370;
  double t426;
  double t546;
  double t692;
  double t798;
  double t1486;
  double t1597;
  double t3435;
  double t3543;
  double t3667;
  double t3888;
  double t6629;
  double t6639;
  double t6646;
  double t6659;
  double t6670;
  double t6685;
  double t6069;
  double t6159;
  double t6819;
  double t6821;
  double t6826;
  double t7164;
  double t7173;
  double t7177;
  double t7283;
  double t7297;
  double t7305;
  double t7454;
  double t7455;
  double t7456;
  double t7508;
  double t7510;
  double t7520;
  double t7526;
  double t7536;
  double t7546;
  double t7624;
  double t7656;
  double t7688;
  double t4351;
  double t7769;
  double t7775;
  double t7853;
  double t7861;
  double t7872;
  double t8023;
  double t8030;
  double t8078;
  double t8083;
  double t8086;
  double t8097;
  double t8116;
  double t7797;
  double t7894;
  double t7905;
  double t7908;
  double t7928;
  double t7956;
  double t7970;
  double t8136;
  double t8137;
  t960 = Sin(var1[3]);
  t1802 = Cos(var1[3]);
  t1619 = Cos(var1[5]);
  t1671 = Sin(var1[4]);
  t1817 = Sin(var1[5]);
  t1330 = Sin(var1[9]);
  t1702 = -1.*t1619*t960*t1671;
  t2640 = t1802*t1817;
  t2641 = t1702 + t2640;
  t3423 = Cos(var1[9]);
  t3907 = -1.*t1802*t1619;
  t4073 = -1.*t960*t1671*t1817;
  t4194 = t3907 + t4073;
  t41 = Cos(var1[10]);
  t885 = Cos(var1[4]);
  t5599 = Sin(var1[10]);
  t6246 = t3423*t2641;
  t6356 = -1.*t1330*t4194;
  t6370 = t6246 + t6356;
  t426 = -1.*t41;
  t546 = 1. + t426;
  t692 = 0.183*t546;
  t798 = 0. + t692;
  t1486 = -0.047*t1330;
  t1597 = 0. + t1486;
  t3435 = -1.*t3423;
  t3543 = 1. + t3435;
  t3667 = 0.047*t3543;
  t3888 = 0. + t3667;
  t6629 = t1802*t1619*t1671;
  t6639 = t960*t1817;
  t6646 = t6629 + t6639;
  t6659 = -1.*t1619*t960;
  t6670 = t1802*t1671*t1817;
  t6685 = t6659 + t6670;
  t6069 = 0.183*t5599;
  t6159 = 0. + t6069;
  t6819 = t3423*t6646;
  t6821 = -1.*t1330*t6685;
  t6826 = t6819 + t6821;
  t7164 = t3423*t1802*t885*t1619;
  t7173 = -1.*t1802*t885*t1330*t1817;
  t7177 = t7164 + t7173;
  t7283 = t3423*t885*t1619*t960;
  t7297 = -1.*t885*t1330*t960*t1817;
  t7305 = t7283 + t7297;
  t7454 = -1.*t3423*t1619*t1671;
  t7455 = t1330*t1671*t1817;
  t7456 = t7454 + t7455;
  t7508 = t1619*t960;
  t7510 = -1.*t1802*t1671*t1817;
  t7520 = t7508 + t7510;
  t7526 = -1.*t1330*t6646;
  t7536 = t3423*t7520;
  t7546 = t7526 + t7536;
  t7624 = t1619*t960*t1671;
  t7656 = -1.*t1802*t1817;
  t7688 = t7624 + t7656;
  t4351 = t3423*t4194;
  t7769 = -1.*t1330*t7688;
  t7775 = t7769 + t4351;
  t7853 = -1.*t885*t1619*t1330;
  t7861 = -1.*t3423*t885*t1817;
  t7872 = t7853 + t7861;
  t8023 = -1.*t3423*t6685;
  t8030 = t7526 + t8023;
  t8078 = t1802*t1619;
  t8083 = t960*t1671*t1817;
  t8086 = t8078 + t8083;
  t8097 = -1.*t3423*t8086;
  t8116 = t7769 + t8097;
  t7797 = t3423*t7688;
  t7894 = t6159*t7872;
  t7905 = -0.183*t5599*t7872;
  t7908 = t3423*t885*t1619;
  t7928 = -1.*t885*t1330*t1817;
  t7956 = t7908 + t7928;
  t7970 = 0.15331*t7956;
  t8136 = -1.*t1330*t8086;
  t8137 = t7797 + t8136;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1597*t2641 + t3888*t4194 + 0.15331*(t1330*t2641 + t4351) + t6159*t6370 - 1.*t798*t885*t960 + 0.183*(-1.*t5599*t6370 - 1.*t41*t885*t960);
  p_output1[10]=t1597*t6646 + t3888*t6685 + 0.15331*(t1330*t6646 + t3423*t6685) + t6159*t6826 + t1802*t798*t885 + 0.183*(-1.*t5599*t6826 + t1802*t41*t885);
  p_output1[11]=0;
  p_output1[12]=t6159*t7177 + 0.183*(-1.*t1671*t1802*t41 - 1.*t5599*t7177) - 1.*t1671*t1802*t798 + t1597*t1619*t1802*t885 + t1802*t1817*t3888*t885 + 0.15331*(t1330*t1619*t1802*t885 + t1802*t1817*t3423*t885);
  p_output1[13]=t6159*t7305 - 1.*t1671*t798*t960 + t1597*t1619*t885*t960 + t1817*t3888*t885*t960 + 0.183*(-1.*t5599*t7305 - 1.*t1671*t41*t960) + 0.15331*(t1330*t1619*t885*t960 + t1817*t3423*t885*t960);
  p_output1[14]=-1.*t1597*t1619*t1671 + 0.15331*(-1.*t1330*t1619*t1671 - 1.*t1671*t1817*t3423) - 1.*t1671*t1817*t3888 + t6159*t7456 - 1.*t798*t885 + 0.183*(-1.*t5599*t7456 - 1.*t41*t885);
  p_output1[15]=t3888*t6646 + t1597*t7520 + 0.15331*(t6819 + t1330*t7520) - 0.183*t5599*t7546 + t6159*t7546;
  p_output1[16]=t1597*t4194 + t3888*t7688 - 0.183*t5599*t7775 + t6159*t7775 + 0.15331*(t1330*t4194 + t7797);
  p_output1[17]=t7894 + t7905 + t7970 - 1.*t1597*t1817*t885 + t1619*t3888*t885;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=-0.047*t3423*t6646 + 0.047*t1330*t6685 + 0.15331*t6826 - 0.183*t5599*t8030 + t6159*t8030;
  p_output1[28]=-0.047*t3423*t7688 + 0.047*t1330*t8086 - 0.183*t5599*t8116 + t6159*t8116 + 0.15331*t8137;
  p_output1[29]=t7894 + t7905 + t7970 + 0.047*t1330*t1817*t885 - 0.047*t1619*t3423*t885;
  p_output1[30]=0.183*t41*t6826 + 0.183*t1802*t5599*t885 + 0.183*(-1.*t41*t6826 - 1.*t1802*t5599*t885);
  p_output1[31]=0.183*t41*t8137 + 0.183*t5599*t885*t960 + 0.183*(-1.*t41*t8137 - 1.*t5599*t885*t960);
  p_output1[32]=-0.183*t1671*t5599 + 0.183*t41*t7956 + 0.183*(t1671*t5599 - 1.*t41*t7956);
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



void Jp_FL_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
