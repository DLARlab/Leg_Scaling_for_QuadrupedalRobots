/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:25:59 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RL_thigh_joint_src.h"

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
  double t670;
  double t2327;
  double t2003;
  double t2118;
  double t2452;
  double t844;
  double t2209;
  double t2516;
  double t2528;
  double t2687;
  double t3101;
  double t3104;
  double t3423;
  double t24;
  double t552;
  double t4197;
  double t4812;
  double t5026;
  double t5311;
  double t40;
  double t134;
  double t471;
  double t509;
  double t1817;
  double t1927;
  double t2690;
  double t2825;
  double t2951;
  double t3088;
  double t6939;
  double t7184;
  double t7197;
  double t7280;
  double t7356;
  double t7362;
  double t4730;
  double t4768;
  double t7861;
  double t8108;
  double t8139;
  double t8668;
  double t8711;
  double t8774;
  double t8993;
  double t8996;
  double t9013;
  double t9177;
  double t9181;
  double t9186;
  double t9210;
  double t9220;
  double t9224;
  double t9245;
  double t9251;
  double t9260;
  double t9344;
  double t9355;
  double t9363;
  double t3923;
  double t9376;
  double t9380;
  double t9470;
  double t9476;
  double t9486;
  double t9565;
  double t9566;
  double t9626;
  double t9641;
  double t9642;
  double t9653;
  double t9658;
  double t9392;
  double t9488;
  double t9498;
  double t9500;
  double t9524;
  double t9528;
  double t9539;
  double t9668;
  double t9669;
  t670 = Sin(var1[3]);
  t2327 = Cos(var1[3]);
  t2003 = Cos(var1[5]);
  t2118 = Sin(var1[4]);
  t2452 = Sin(var1[5]);
  t844 = Sin(var1[15]);
  t2209 = -1.*t2003*t670*t2118;
  t2516 = t2327*t2452;
  t2528 = t2209 + t2516;
  t2687 = Cos(var1[15]);
  t3101 = -1.*t2327*t2003;
  t3104 = -1.*t670*t2118*t2452;
  t3423 = t3101 + t3104;
  t24 = Cos(var1[16]);
  t552 = Cos(var1[4]);
  t4197 = Sin(var1[16]);
  t4812 = t2687*t2528;
  t5026 = -1.*t844*t3423;
  t5311 = t4812 + t5026;
  t40 = -1.*t24;
  t134 = 1. + t40;
  t471 = -0.183*t134;
  t509 = 0. + t471;
  t1817 = -0.047*t844;
  t1927 = 0. + t1817;
  t2690 = -1.*t2687;
  t2825 = 1. + t2690;
  t2951 = 0.047*t2825;
  t3088 = 0. + t2951;
  t6939 = t2327*t2003*t2118;
  t7184 = t670*t2452;
  t7197 = t6939 + t7184;
  t7280 = -1.*t2003*t670;
  t7356 = t2327*t2118*t2452;
  t7362 = t7280 + t7356;
  t4730 = -0.183*t4197;
  t4768 = 0. + t4730;
  t7861 = t2687*t7197;
  t8108 = -1.*t844*t7362;
  t8139 = t7861 + t8108;
  t8668 = t2687*t2327*t552*t2003;
  t8711 = -1.*t2327*t552*t844*t2452;
  t8774 = t8668 + t8711;
  t8993 = t2687*t552*t2003*t670;
  t8996 = -1.*t552*t844*t670*t2452;
  t9013 = t8993 + t8996;
  t9177 = -1.*t2687*t2003*t2118;
  t9181 = t844*t2118*t2452;
  t9186 = t9177 + t9181;
  t9210 = t2003*t670;
  t9220 = -1.*t2327*t2118*t2452;
  t9224 = t9210 + t9220;
  t9245 = -1.*t844*t7197;
  t9251 = t2687*t9224;
  t9260 = t9245 + t9251;
  t9344 = t2003*t670*t2118;
  t9355 = -1.*t2327*t2452;
  t9363 = t9344 + t9355;
  t3923 = t2687*t3423;
  t9376 = -1.*t844*t9363;
  t9380 = t9376 + t3923;
  t9470 = -1.*t552*t2003*t844;
  t9476 = -1.*t2687*t552*t2452;
  t9486 = t9470 + t9476;
  t9565 = -1.*t2687*t7362;
  t9566 = t9245 + t9565;
  t9626 = t2327*t2003;
  t9641 = t670*t2118*t2452;
  t9642 = t9626 + t9641;
  t9653 = -1.*t2687*t9642;
  t9658 = t9376 + t9653;
  t9392 = t2687*t9363;
  t9488 = t4768*t9486;
  t9498 = 0.183*t4197*t9486;
  t9500 = t2687*t552*t2003;
  t9524 = -1.*t552*t844*t2452;
  t9528 = t9500 + t9524;
  t9539 = 0.17458*t9528;
  t9668 = -1.*t844*t9642;
  t9669 = t9392 + t9668;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1927*t2528 + t3088*t3423 + t4768*t5311 - 1.*t509*t552*t670 - 0.183*(-1.*t4197*t5311 - 1.*t24*t552*t670) + 0.17458*(t3923 + t2528*t844);
  p_output1[10]=t2327*t509*t552 + t1927*t7197 + t3088*t7362 + t4768*t8139 - 0.183*(t2327*t24*t552 - 1.*t4197*t8139) + 0.17458*(t2687*t7362 + t7197*t844);
  p_output1[11]=0;
  p_output1[12]=-1.*t2118*t2327*t509 + t1927*t2003*t2327*t552 + t2327*t2452*t3088*t552 + 0.17458*(t2327*t2452*t2687*t552 + t2003*t2327*t552*t844) + t4768*t8774 - 0.183*(-1.*t2118*t2327*t24 - 1.*t4197*t8774);
  p_output1[13]=-1.*t2118*t509*t670 + t1927*t2003*t552*t670 + t2452*t3088*t552*t670 + 0.17458*(t2452*t2687*t552*t670 + t2003*t552*t670*t844) + t4768*t9013 - 0.183*(-1.*t2118*t24*t670 - 1.*t4197*t9013);
  p_output1[14]=-1.*t1927*t2003*t2118 - 1.*t2118*t2452*t3088 - 1.*t509*t552 + 0.17458*(-1.*t2118*t2452*t2687 - 1.*t2003*t2118*t844) + t4768*t9186 - 0.183*(-1.*t24*t552 - 1.*t4197*t9186);
  p_output1[15]=t3088*t7197 + t1927*t9224 + 0.17458*(t7861 + t844*t9224) + 0.183*t4197*t9260 + t4768*t9260;
  p_output1[16]=t1927*t3423 + t3088*t9363 + 0.183*t4197*t9380 + t4768*t9380 + 0.17458*(t3423*t844 + t9392);
  p_output1[17]=-1.*t1927*t2452*t552 + t2003*t3088*t552 + t9488 + t9498 + t9539;
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
  p_output1[45]=-0.047*t2687*t7197 + 0.17458*t8139 + 0.047*t7362*t844 + 0.183*t4197*t9566 + t4768*t9566;
  p_output1[46]=-0.047*t2687*t9363 + 0.047*t844*t9642 + 0.183*t4197*t9658 + t4768*t9658 + 0.17458*t9669;
  p_output1[47]=-0.047*t2003*t2687*t552 + 0.047*t2452*t552*t844 + t9488 + t9498 + t9539;
  p_output1[48]=-0.183*t2327*t4197*t552 - 0.183*t24*t8139 - 0.183*(-1.*t2327*t4197*t552 - 1.*t24*t8139);
  p_output1[49]=-0.183*t4197*t552*t670 - 0.183*t24*t9669 - 0.183*(-1.*t4197*t552*t670 - 1.*t24*t9669);
  p_output1[50]=0.183*t2118*t4197 - 0.183*t24*t9528 - 0.183*(t2118*t4197 - 1.*t24*t9528);
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
}



void Jp_RL_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
