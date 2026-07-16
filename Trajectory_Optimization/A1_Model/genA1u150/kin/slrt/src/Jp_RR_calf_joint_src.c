/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:25:54 GMT-05:00
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
  double t799;
  double t1309;
  double t1151;
  double t1166;
  double t1355;
  double t913;
  double t1247;
  double t1602;
  double t1628;
  double t1731;
  double t1964;
  double t2104;
  double t2202;
  double t774;
  double t2711;
  double t197;
  double t2748;
  double t2772;
  double t2822;
  double t2870;
  double t2893;
  double t2928;
  double t3099;
  double t3631;
  double t3687;
  double t3716;
  double t3816;
  double t3960;
  double t3961;
  double t336;
  double t353;
  double t401;
  double t576;
  double t1052;
  double t1112;
  double t1775;
  double t1835;
  double t1897;
  double t1937;
  double t4267;
  double t4300;
  double t4347;
  double t4375;
  double t4401;
  double t4425;
  double t2737;
  double t2741;
  double t3026;
  double t3276;
  double t3354;
  double t4545;
  double t4556;
  double t4557;
  double t3766;
  double t3776;
  double t3777;
  double t4611;
  double t4635;
  double t4704;
  double t4753;
  double t4782;
  double t4801;
  double t6325;
  double t6359;
  double t6485;
  double t6550;
  double t6807;
  double t6825;
  double t7020;
  double t7077;
  double t7113;
  double t7803;
  double t7826;
  double t7915;
  double t7954;
  double t7985;
  double t8023;
  double t8092;
  double t8111;
  double t8138;
  double t8584;
  double t8587;
  double t8610;
  double t8688;
  double t8696;
  double t8739;
  double t8747;
  double t8751;
  double t8755;
  double t9069;
  double t9072;
  double t9075;
  double t9100;
  double t9103;
  double t9108;
  double t9220;
  double t9238;
  double t9239;
  double t2420;
  double t9263;
  double t9320;
  double t9408;
  double t9410;
  double t9412;
  double t9516;
  double t9517;
  double t9592;
  double t9594;
  double t9595;
  double t9601;
  double t9609;
  double t9348;
  double t9418;
  double t9431;
  double t9434;
  double t9444;
  double t9465;
  double t9481;
  double t9491;
  double t9492;
  double t9496;
  double t9498;
  double t9499;
  double t9500;
  double t9501;
  double t9502;
  double t9506;
  double t9704;
  double t9705;
  double t9706;
  double t4822;
  double t9634;
  double t9636;
  double t9733;
  double t9736;
  double t9775;
  double t9792;
  double t9795;
  double t9857;
  double t9859;
  double t9868;
  double t9875;
  double t9876;
  double t9880;
  double t4809;
  double t4844;
  double t9718;
  double t9945;
  double t9947;
  double t9949;
  double t9954;
  double t9955;
  double t9979;
  double t9988;
  double t9989;
  double t9820;
  double t9843;
  double t10018;
  double t10020;
  double t10021;
  double t9893;
  double t9919;
  t799 = Sin(var1[3]);
  t1309 = Cos(var1[3]);
  t1151 = Cos(var1[5]);
  t1166 = Sin(var1[4]);
  t1355 = Sin(var1[5]);
  t913 = Sin(var1[12]);
  t1247 = -1.*t1151*t799*t1166;
  t1602 = t1309*t1355;
  t1628 = t1247 + t1602;
  t1731 = Cos(var1[12]);
  t1964 = -1.*t1309*t1151;
  t2104 = -1.*t799*t1166*t1355;
  t2202 = t1964 + t2104;
  t774 = Cos(var1[4]);
  t2711 = Sin(var1[13]);
  t197 = Cos(var1[13]);
  t2748 = t1731*t1628;
  t2772 = -1.*t913*t2202;
  t2822 = t2748 + t2772;
  t2870 = Cos(var1[14]);
  t2893 = -1.*t2870;
  t2928 = 1. + t2893;
  t3099 = Sin(var1[14]);
  t3631 = -1.*t774*t2711*t799;
  t3687 = t197*t2822;
  t3716 = t3631 + t3687;
  t3816 = -1.*t197*t774*t799;
  t3960 = -1.*t2711*t2822;
  t3961 = t3816 + t3960;
  t336 = -1.*t197;
  t353 = 1. + t336;
  t401 = -0.183*t353;
  t576 = 0. + t401;
  t1052 = 0.047*t913;
  t1112 = 0. + t1052;
  t1775 = -1.*t1731;
  t1835 = 1. + t1775;
  t1897 = -0.047*t1835;
  t1937 = 0. + t1897;
  t4267 = t1309*t1151*t1166;
  t4300 = t799*t1355;
  t4347 = t4267 + t4300;
  t4375 = -1.*t1151*t799;
  t4401 = t1309*t1166*t1355;
  t4425 = t4375 + t4401;
  t2737 = -0.183*t2711;
  t2741 = 0. + t2737;
  t3026 = -0.3*t2928;
  t3276 = -0.183*t3099;
  t3354 = 0. + t3026 + t3276;
  t4545 = t1731*t4347;
  t4556 = -1.*t913*t4425;
  t4557 = t4545 + t4556;
  t3766 = -0.183*t2928;
  t3776 = 0.3*t3099;
  t3777 = 0. + t3766 + t3776;
  t4611 = t1309*t774*t2711;
  t4635 = t197*t4557;
  t4704 = t4611 + t4635;
  t4753 = t197*t1309*t774;
  t4782 = -1.*t2711*t4557;
  t4801 = t4753 + t4782;
  t6325 = t1731*t1309*t774*t1151;
  t6359 = -1.*t1309*t774*t913*t1355;
  t6485 = t6325 + t6359;
  t6550 = -1.*t1309*t2711*t1166;
  t6807 = t197*t6485;
  t6825 = t6550 + t6807;
  t7020 = -1.*t197*t1309*t1166;
  t7077 = -1.*t2711*t6485;
  t7113 = t7020 + t7077;
  t7803 = t1731*t774*t1151*t799;
  t7826 = -1.*t774*t913*t799*t1355;
  t7915 = t7803 + t7826;
  t7954 = -1.*t2711*t799*t1166;
  t7985 = t197*t7915;
  t8023 = t7954 + t7985;
  t8092 = -1.*t197*t799*t1166;
  t8111 = -1.*t2711*t7915;
  t8138 = t8092 + t8111;
  t8584 = -1.*t1731*t1151*t1166;
  t8587 = t913*t1166*t1355;
  t8610 = t8584 + t8587;
  t8688 = -1.*t774*t2711;
  t8696 = t197*t8610;
  t8739 = t8688 + t8696;
  t8747 = -1.*t197*t774;
  t8751 = -1.*t2711*t8610;
  t8755 = t8747 + t8751;
  t9069 = t1151*t799;
  t9072 = -1.*t1309*t1166*t1355;
  t9075 = t9069 + t9072;
  t9100 = -1.*t913*t4347;
  t9103 = t1731*t9075;
  t9108 = t9100 + t9103;
  t9220 = t1151*t799*t1166;
  t9238 = -1.*t1309*t1355;
  t9239 = t9220 + t9238;
  t2420 = t1731*t2202;
  t9263 = -1.*t913*t9239;
  t9320 = t9263 + t2420;
  t9408 = -1.*t774*t1151*t913;
  t9410 = -1.*t1731*t774*t1355;
  t9412 = t9408 + t9410;
  t9516 = -1.*t1731*t4425;
  t9517 = t9100 + t9516;
  t9592 = t1309*t1151;
  t9594 = t799*t1166*t1355;
  t9595 = t9592 + t9594;
  t9601 = -1.*t1731*t9595;
  t9609 = t9263 + t9601;
  t9348 = t1731*t9239;
  t9418 = t2741*t9412;
  t9431 = t197*t3354*t9412;
  t9434 = -1.*t2711*t3777*t9412;
  t9444 = t1731*t774*t1151;
  t9465 = -1.*t774*t913*t1355;
  t9481 = t9444 + t9465;
  t9491 = -0.17458*t9481;
  t9492 = -1.*t2870*t2711*t9412;
  t9496 = -1.*t197*t3099*t9412;
  t9498 = t9492 + t9496;
  t9499 = -0.183*t9498;
  t9500 = t197*t2870*t9412;
  t9501 = -1.*t2711*t3099*t9412;
  t9502 = t9500 + t9501;
  t9506 = -0.3*t9502;
  t9704 = -1.*t1309*t774*t2711;
  t9705 = -1.*t197*t4557;
  t9706 = t9704 + t9705;
  t4822 = t2870*t4801;
  t9634 = -1.*t913*t9595;
  t9636 = t9348 + t9634;
  t9733 = -1.*t197*t9636;
  t9736 = t3631 + t9733;
  t9775 = t197*t774*t799;
  t9792 = -1.*t2711*t9636;
  t9795 = t9775 + t9792;
  t9857 = t2711*t1166;
  t9859 = -1.*t197*t9481;
  t9868 = t9857 + t9859;
  t9875 = -1.*t197*t1166;
  t9876 = -1.*t2711*t9481;
  t9880 = t9875 + t9876;
  t4809 = -1.*t3099*t4704;
  t4844 = t4809 + t4822;
  t9718 = -1.*t3099*t4801;
  t9945 = -0.183*t2870;
  t9947 = -0.3*t3099;
  t9949 = t9945 + t9947;
  t9954 = 0.3*t2870;
  t9955 = t9954 + t3276;
  t9979 = t774*t2711*t799;
  t9988 = t197*t9636;
  t9989 = t9979 + t9988;
  t9820 = t2870*t9795;
  t9843 = -1.*t3099*t9795;
  t10018 = -1.*t2711*t1166;
  t10020 = t197*t9481;
  t10021 = t10018 + t10020;
  t9893 = t2870*t9880;
  t9919 = -1.*t3099*t9880;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1112*t1628 + t1937*t2202 + t2741*t2822 + t3354*t3716 + t3777*t3961 - 0.183*(-1.*t3099*t3716 + t2870*t3961) - 0.3*(t2870*t3716 + t3099*t3961) - 1.*t576*t774*t799 - 0.17458*(t2420 + t1628*t913);
  p_output1[10]=t1112*t4347 + t1937*t4425 + t2741*t4557 + t3354*t4704 + t3777*t4801 - 0.3*(t2870*t4704 + t3099*t4801) - 0.183*t4844 + t1309*t576*t774 - 0.17458*(t1731*t4425 + t4347*t913);
  p_output1[11]=0;
  p_output1[12]=-1.*t1166*t1309*t576 + t2741*t6485 + t3354*t6825 + t3777*t7113 - 0.183*(-1.*t3099*t6825 + t2870*t7113) - 0.3*(t2870*t6825 + t3099*t7113) + t1112*t1151*t1309*t774 + t1309*t1355*t1937*t774 - 0.17458*(t1309*t1355*t1731*t774 + t1151*t1309*t774*t913);
  p_output1[13]=t2741*t7915 - 1.*t1166*t576*t799 + t1112*t1151*t774*t799 + t1355*t1937*t774*t799 + t3354*t8023 + t3777*t8138 - 0.183*(-1.*t3099*t8023 + t2870*t8138) - 0.3*(t2870*t8023 + t3099*t8138) - 0.17458*(t1355*t1731*t774*t799 + t1151*t774*t799*t913);
  p_output1[14]=-1.*t1112*t1151*t1166 - 1.*t1166*t1355*t1937 - 1.*t576*t774 + t2741*t8610 + t3354*t8739 + t3777*t8755 - 0.183*(-1.*t3099*t8739 + t2870*t8755) - 0.3*(t2870*t8739 + t3099*t8755) - 0.17458*(-1.*t1166*t1355*t1731 - 1.*t1151*t1166*t913);
  p_output1[15]=t1937*t4347 + t1112*t9075 + t2741*t9108 + t197*t3354*t9108 - 1.*t2711*t3777*t9108 - 0.183*(-1.*t2711*t2870*t9108 - 1.*t197*t3099*t9108) - 0.3*(t197*t2870*t9108 - 1.*t2711*t3099*t9108) - 0.17458*(t4545 + t9075*t913);
  p_output1[16]=t1112*t2202 + t1937*t9239 + t2741*t9320 + t197*t3354*t9320 - 1.*t2711*t3777*t9320 - 0.183*(-1.*t2711*t2870*t9320 - 1.*t197*t3099*t9320) - 0.3*(t197*t2870*t9320 - 1.*t2711*t3099*t9320) - 0.17458*(t2202*t913 + t9348);
  p_output1[17]=-1.*t1112*t1355*t774 + t1151*t1937*t774 + t9418 + t9431 + t9434 + t9491 + t9499 + t9506;
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
  p_output1[36]=0.047*t1731*t4347 - 0.17458*t4557 - 0.047*t4425*t913 + t2741*t9517 + t197*t3354*t9517 - 1.*t2711*t3777*t9517 - 0.183*(-1.*t2711*t2870*t9517 - 1.*t197*t3099*t9517) - 0.3*(t197*t2870*t9517 - 1.*t2711*t3099*t9517);
  p_output1[37]=0.047*t1731*t9239 - 0.047*t913*t9595 + t2741*t9609 + t197*t3354*t9609 - 1.*t2711*t3777*t9609 - 0.183*(-1.*t2711*t2870*t9609 - 1.*t197*t3099*t9609) - 0.3*(t197*t2870*t9609 - 1.*t2711*t3099*t9609) - 0.17458*t9636;
  p_output1[38]=0.047*t1151*t1731*t774 - 0.047*t1355*t774*t913 + t9418 + t9431 + t9434 + t9491 + t9499 + t9506;
  p_output1[39]=-0.183*t197*t4557 + t3354*t4801 - 0.183*t1309*t2711*t774 + t3777*t9706 - 0.3*(t4822 + t3099*t9706) - 0.183*(t2870*t9706 + t9718);
  p_output1[40]=-0.183*t2711*t774*t799 - 0.183*t197*t9636 + t3777*t9736 + t3354*t9795 - 0.3*(t3099*t9736 + t9820) - 0.183*(t2870*t9736 + t9843);
  p_output1[41]=0.183*t1166*t2711 - 0.183*t197*t9481 + t3777*t9868 + t3354*t9880 - 0.3*(t3099*t9868 + t9893) - 0.183*(t2870*t9868 + t9919);
  p_output1[42]=-0.3*t4844 - 0.183*(-1.*t2870*t4704 + t9718) + t4704*t9949 + t4801*t9955;
  p_output1[43]=t9795*t9955 + t9949*t9989 - 0.183*(t9843 - 1.*t2870*t9989) - 0.3*(t9820 - 1.*t3099*t9989);
  p_output1[44]=-0.3*(-1.*t10021*t3099 + t9893) - 0.183*(-1.*t10021*t2870 + t9919) + t10021*t9949 + t9880*t9955;
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
