/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:20:34 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RR_thigh_joint_src.h"

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
  double t740;
  double t1422;
  double t1304;
  double t1332;
  double t1726;
  double t1136;
  double t1344;
  double t1828;
  double t1955;
  double t2221;
  double t2482;
  double t2486;
  double t2508;
  double t55;
  double t451;
  double t3166;
  double t3300;
  double t3338;
  double t3344;
  double t188;
  double t380;
  double t392;
  double t424;
  double t1162;
  double t1199;
  double t2263;
  double t2272;
  double t2452;
  double t2457;
  double t3688;
  double t3717;
  double t3788;
  double t3823;
  double t3825;
  double t3826;
  double t3252;
  double t3281;
  double t3925;
  double t3971;
  double t3993;
  double t4913;
  double t4955;
  double t4987;
  double t6548;
  double t6577;
  double t6587;
  double t7465;
  double t7499;
  double t7545;
  double t7629;
  double t7657;
  double t7725;
  double t7778;
  double t7780;
  double t7788;
  double t7867;
  double t7871;
  double t7877;
  double t2861;
  double t7886;
  double t7901;
  double t8041;
  double t8050;
  double t8052;
  double t8160;
  double t8161;
  double t8210;
  double t8230;
  double t8237;
  double t8244;
  double t8254;
  double t7937;
  double t8094;
  double t8095;
  double t8102;
  double t8111;
  double t8134;
  double t8145;
  double t8276;
  double t8296;
  t740 = Sin(var1[3]);
  t1422 = Cos(var1[3]);
  t1304 = Cos(var1[5]);
  t1332 = Sin(var1[4]);
  t1726 = Sin(var1[5]);
  t1136 = Sin(var1[12]);
  t1344 = -1.*t1304*t740*t1332;
  t1828 = t1422*t1726;
  t1955 = t1344 + t1828;
  t2221 = Cos(var1[12]);
  t2482 = -1.*t1422*t1304;
  t2486 = -1.*t740*t1332*t1726;
  t2508 = t2482 + t2486;
  t55 = Cos(var1[13]);
  t451 = Cos(var1[4]);
  t3166 = Sin(var1[13]);
  t3300 = t2221*t1955;
  t3338 = -1.*t1136*t2508;
  t3344 = t3300 + t3338;
  t188 = -1.*t55;
  t380 = 1. + t188;
  t392 = -0.183*t380;
  t424 = 0. + t392;
  t1162 = 0.047*t1136;
  t1199 = 0. + t1162;
  t2263 = -1.*t2221;
  t2272 = 1. + t2263;
  t2452 = -0.047*t2272;
  t2457 = 0. + t2452;
  t3688 = t1422*t1304*t1332;
  t3717 = t740*t1726;
  t3788 = t3688 + t3717;
  t3823 = -1.*t1304*t740;
  t3825 = t1422*t1332*t1726;
  t3826 = t3823 + t3825;
  t3252 = -0.183*t3166;
  t3281 = 0. + t3252;
  t3925 = t2221*t3788;
  t3971 = -1.*t1136*t3826;
  t3993 = t3925 + t3971;
  t4913 = t2221*t1422*t451*t1304;
  t4955 = -1.*t1422*t451*t1136*t1726;
  t4987 = t4913 + t4955;
  t6548 = t2221*t451*t1304*t740;
  t6577 = -1.*t451*t1136*t740*t1726;
  t6587 = t6548 + t6577;
  t7465 = -1.*t2221*t1304*t1332;
  t7499 = t1136*t1332*t1726;
  t7545 = t7465 + t7499;
  t7629 = t1304*t740;
  t7657 = -1.*t1422*t1332*t1726;
  t7725 = t7629 + t7657;
  t7778 = -1.*t1136*t3788;
  t7780 = t2221*t7725;
  t7788 = t7778 + t7780;
  t7867 = t1304*t740*t1332;
  t7871 = -1.*t1422*t1726;
  t7877 = t7867 + t7871;
  t2861 = t2221*t2508;
  t7886 = -1.*t1136*t7877;
  t7901 = t7886 + t2861;
  t8041 = -1.*t451*t1304*t1136;
  t8050 = -1.*t2221*t451*t1726;
  t8052 = t8041 + t8050;
  t8160 = -1.*t2221*t3826;
  t8161 = t7778 + t8160;
  t8210 = t1422*t1304;
  t8230 = t740*t1332*t1726;
  t8237 = t8210 + t8230;
  t8244 = -1.*t2221*t8237;
  t8254 = t7886 + t8244;
  t7937 = t2221*t7877;
  t8094 = t3281*t8052;
  t8095 = 0.183*t3166*t8052;
  t8102 = t2221*t451*t1304;
  t8111 = -1.*t451*t1136*t1726;
  t8134 = t8102 + t8111;
  t8145 = -0.15331*t8134;
  t8276 = -1.*t1136*t8237;
  t8296 = t7937 + t8276;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1199*t1955 + t2457*t2508 - 0.15331*(t1136*t1955 + t2861) + t3281*t3344 - 1.*t424*t451*t740 - 0.183*(-1.*t3166*t3344 - 1.*t451*t55*t740);
  p_output1[10]=t1199*t3788 + t2457*t3826 - 0.15331*(t1136*t3788 + t2221*t3826) + t3281*t3993 + t1422*t424*t451 - 0.183*(-1.*t3166*t3993 + t1422*t451*t55);
  p_output1[11]=0;
  p_output1[12]=-1.*t1332*t1422*t424 + t1199*t1304*t1422*t451 + t1422*t1726*t2457*t451 - 0.15331*(t1136*t1304*t1422*t451 + t1422*t1726*t2221*t451) + t3281*t4987 - 0.183*(-1.*t3166*t4987 - 1.*t1332*t1422*t55);
  p_output1[13]=t3281*t6587 - 1.*t1332*t424*t740 + t1199*t1304*t451*t740 + t1726*t2457*t451*t740 - 0.15331*(t1136*t1304*t451*t740 + t1726*t2221*t451*t740) - 0.183*(-1.*t3166*t6587 - 1.*t1332*t55*t740);
  p_output1[14]=-1.*t1199*t1304*t1332 - 0.15331*(-1.*t1136*t1304*t1332 - 1.*t1332*t1726*t2221) - 1.*t1332*t1726*t2457 - 1.*t424*t451 + t3281*t7545 - 0.183*(-1.*t451*t55 - 1.*t3166*t7545);
  p_output1[15]=t2457*t3788 + t1199*t7725 - 0.15331*(t3925 + t1136*t7725) + 0.183*t3166*t7788 + t3281*t7788;
  p_output1[16]=t1199*t2508 + t2457*t7877 + 0.183*t3166*t7901 + t3281*t7901 - 0.15331*(t1136*t2508 + t7937);
  p_output1[17]=-1.*t1199*t1726*t451 + t1304*t2457*t451 + t8094 + t8095 + t8145;
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
  p_output1[36]=0.047*t2221*t3788 - 0.047*t1136*t3826 - 0.15331*t3993 + 0.183*t3166*t8161 + t3281*t8161;
  p_output1[37]=0.047*t2221*t7877 - 0.047*t1136*t8237 + 0.183*t3166*t8254 + t3281*t8254 - 0.15331*t8296;
  p_output1[38]=-0.047*t1136*t1726*t451 + 0.047*t1304*t2221*t451 + t8094 + t8095 + t8145;
  p_output1[39]=-0.183*t1422*t3166*t451 - 0.183*t3993*t55 - 0.183*(-1.*t1422*t3166*t451 - 1.*t3993*t55);
  p_output1[40]=-0.183*t3166*t451*t740 - 0.183*t55*t8296 - 0.183*(-1.*t3166*t451*t740 - 1.*t55*t8296);
  p_output1[41]=0.183*t1332*t3166 - 0.183*t55*t8134 - 0.183*(t1332*t3166 - 1.*t55*t8134);
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



void Jp_RR_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
