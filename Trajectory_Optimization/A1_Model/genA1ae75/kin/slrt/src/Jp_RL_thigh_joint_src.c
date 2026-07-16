/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:50:57 GMT-05:00
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
  double t3010;
  double t6120;
  double t5001;
  double t5681;
  double t6557;
  double t3475;
  double t5871;
  double t7226;
  double t7950;
  double t8096;
  double t9078;
  double t9534;
  double t10539;
  double t106;
  double t2830;
  double t10802;
  double t10833;
  double t10834;
  double t10841;
  double t1054;
  double t1860;
  double t1922;
  double t2819;
  double t3678;
  double t3901;
  double t8307;
  double t8607;
  double t8857;
  double t8882;
  double t10894;
  double t10899;
  double t10900;
  double t10913;
  double t10921;
  double t10931;
  double t10805;
  double t10807;
  double t10956;
  double t10958;
  double t10960;
  double t11024;
  double t11027;
  double t11028;
  double t11077;
  double t11078;
  double t11080;
  double t11166;
  double t11167;
  double t11169;
  double t11194;
  double t11198;
  double t11212;
  double t11220;
  double t11226;
  double t11229;
  double t11254;
  double t11256;
  double t11257;
  double t10609;
  double t11267;
  double t11269;
  double t11298;
  double t11299;
  double t11300;
  double t11315;
  double t11317;
  double t11335;
  double t11338;
  double t11339;
  double t11342;
  double t11344;
  double t11285;
  double t11303;
  double t11304;
  double t11305;
  double t11306;
  double t11308;
  double t11310;
  double t11352;
  double t11355;
  t3010 = Sin(var1[3]);
  t6120 = Cos(var1[3]);
  t5001 = Cos(var1[5]);
  t5681 = Sin(var1[4]);
  t6557 = Sin(var1[5]);
  t3475 = Sin(var1[15]);
  t5871 = -1.*t5001*t3010*t5681;
  t7226 = t6120*t6557;
  t7950 = t5871 + t7226;
  t8096 = Cos(var1[15]);
  t9078 = -1.*t6120*t5001;
  t9534 = -1.*t3010*t5681*t6557;
  t10539 = t9078 + t9534;
  t106 = Cos(var1[16]);
  t2830 = Cos(var1[4]);
  t10802 = Sin(var1[16]);
  t10833 = t8096*t7950;
  t10834 = -1.*t3475*t10539;
  t10841 = t10833 + t10834;
  t1054 = -1.*t106;
  t1860 = 1. + t1054;
  t1922 = -0.183*t1860;
  t2819 = 0. + t1922;
  t3678 = -0.047*t3475;
  t3901 = 0. + t3678;
  t8307 = -1.*t8096;
  t8607 = 1. + t8307;
  t8857 = 0.047*t8607;
  t8882 = 0. + t8857;
  t10894 = t6120*t5001*t5681;
  t10899 = t3010*t6557;
  t10900 = t10894 + t10899;
  t10913 = -1.*t5001*t3010;
  t10921 = t6120*t5681*t6557;
  t10931 = t10913 + t10921;
  t10805 = -0.183*t10802;
  t10807 = 0. + t10805;
  t10956 = t8096*t10900;
  t10958 = -1.*t3475*t10931;
  t10960 = t10956 + t10958;
  t11024 = t8096*t6120*t2830*t5001;
  t11027 = -1.*t6120*t2830*t3475*t6557;
  t11028 = t11024 + t11027;
  t11077 = t8096*t2830*t5001*t3010;
  t11078 = -1.*t2830*t3475*t3010*t6557;
  t11080 = t11077 + t11078;
  t11166 = -1.*t8096*t5001*t5681;
  t11167 = t3475*t5681*t6557;
  t11169 = t11166 + t11167;
  t11194 = t5001*t3010;
  t11198 = -1.*t6120*t5681*t6557;
  t11212 = t11194 + t11198;
  t11220 = -1.*t3475*t10900;
  t11226 = t8096*t11212;
  t11229 = t11220 + t11226;
  t11254 = t5001*t3010*t5681;
  t11256 = -1.*t6120*t6557;
  t11257 = t11254 + t11256;
  t10609 = t8096*t10539;
  t11267 = -1.*t3475*t11257;
  t11269 = t11267 + t10609;
  t11298 = -1.*t2830*t5001*t3475;
  t11299 = -1.*t8096*t2830*t6557;
  t11300 = t11298 + t11299;
  t11315 = -1.*t8096*t10931;
  t11317 = t11220 + t11315;
  t11335 = t6120*t5001;
  t11338 = t3010*t5681*t6557;
  t11339 = t11335 + t11338;
  t11342 = -1.*t8096*t11339;
  t11344 = t11267 + t11342;
  t11285 = t8096*t11257;
  t11303 = t10807*t11300;
  t11304 = 0.183*t10802*t11300;
  t11305 = t8096*t2830*t5001;
  t11306 = -1.*t2830*t3475*t6557;
  t11308 = t11305 + t11306;
  t11310 = 0.13205*t11308;
  t11352 = -1.*t3475*t11339;
  t11355 = t11285 + t11352;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t10807*t10841 - 1.*t2819*t2830*t3010 - 0.183*(-1.*t10802*t10841 - 1.*t106*t2830*t3010) + t3901*t7950 + 0.13205*(t10609 + t3475*t7950) + t10539*t8882;
  p_output1[10]=t10807*t10960 + t10900*t3901 + t2819*t2830*t6120 - 0.183*(-1.*t10802*t10960 + t106*t2830*t6120) + 0.13205*(t10900*t3475 + t10931*t8096) + t10931*t8882;
  p_output1[11]=0;
  p_output1[12]=t10807*t11028 + t2830*t3901*t5001*t6120 - 1.*t2819*t5681*t6120 - 0.183*(-1.*t10802*t11028 - 1.*t106*t5681*t6120) + 0.13205*(t2830*t3475*t5001*t6120 + t2830*t6120*t6557*t8096) + t2830*t6120*t6557*t8882;
  p_output1[13]=t10807*t11080 + t2830*t3010*t3901*t5001 - 1.*t2819*t3010*t5681 - 0.183*(-1.*t10802*t11080 - 1.*t106*t3010*t5681) + 0.13205*(t2830*t3010*t3475*t5001 + t2830*t3010*t6557*t8096) + t2830*t3010*t6557*t8882;
  p_output1[14]=t10807*t11169 - 1.*t2819*t2830 - 0.183*(-1.*t10802*t11169 - 1.*t106*t2830) - 1.*t3901*t5001*t5681 + 0.13205*(-1.*t3475*t5001*t5681 - 1.*t5681*t6557*t8096) - 1.*t5681*t6557*t8882;
  p_output1[15]=0.183*t10802*t11229 + t10807*t11229 + 0.13205*(t10956 + t11212*t3475) + t11212*t3901 + t10900*t8882;
  p_output1[16]=0.183*t10802*t11269 + t10807*t11269 + 0.13205*(t11285 + t10539*t3475) + t10539*t3901 + t11257*t8882;
  p_output1[17]=t11303 + t11304 + t11310 - 1.*t2830*t3901*t6557 + t2830*t5001*t8882;
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
  p_output1[45]=0.13205*t10960 + 0.183*t10802*t11317 + t10807*t11317 + 0.047*t10931*t3475 - 0.047*t10900*t8096;
  p_output1[46]=0.183*t10802*t11344 + t10807*t11344 + 0.13205*t11355 + 0.047*t11339*t3475 - 0.047*t11257*t8096;
  p_output1[47]=t11303 + t11304 + t11310 + 0.047*t2830*t3475*t6557 - 0.047*t2830*t5001*t8096;
  p_output1[48]=-0.183*t106*t10960 - 0.183*t10802*t2830*t6120 - 0.183*(-1.*t106*t10960 - 1.*t10802*t2830*t6120);
  p_output1[49]=-0.183*t106*t11355 - 0.183*t10802*t2830*t3010 - 0.183*(-1.*t106*t11355 - 1.*t10802*t2830*t3010);
  p_output1[50]=-0.183*t106*t11308 + 0.183*t10802*t5681 - 0.183*(-1.*t106*t11308 + t10802*t5681);
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
}



void Jp_RL_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
