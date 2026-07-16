/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:17:55 GMT-05:00
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
  double t1424;
  double t2610;
  double t1757;
  double t2041;
  double t2711;
  double t1477;
  double t2432;
  double t3060;
  double t3071;
  double t3142;
  double t3512;
  double t3529;
  double t3540;
  double t202;
  double t580;
  double t4152;
  double t4162;
  double t4349;
  double t4393;
  double t217;
  double t357;
  double t368;
  double t405;
  double t1616;
  double t1630;
  double t3159;
  double t3210;
  double t3348;
  double t3385;
  double t6238;
  double t6699;
  double t6728;
  double t6992;
  double t7014;
  double t7030;
  double t4157;
  double t4159;
  double t7116;
  double t7123;
  double t7129;
  double t7181;
  double t7182;
  double t7183;
  double t7207;
  double t7209;
  double t7212;
  double t8937;
  double t8941;
  double t8945;
  double t9041;
  double t9077;
  double t9109;
  double t9207;
  double t9214;
  double t9267;
  double t9620;
  double t9642;
  double t9648;
  double t3822;
  double t9736;
  double t9737;
  double t9854;
  double t9856;
  double t9857;
  double t9907;
  double t9909;
  double t9921;
  double t9922;
  double t9923;
  double t9935;
  double t9936;
  double t9789;
  double t9864;
  double t9868;
  double t9872;
  double t9873;
  double t9875;
  double t9876;
  double t9941;
  double t9946;
  t1424 = Sin(var1[3]);
  t2610 = Cos(var1[3]);
  t1757 = Cos(var1[5]);
  t2041 = Sin(var1[4]);
  t2711 = Sin(var1[5]);
  t1477 = Sin(var1[9]);
  t2432 = -1.*t1757*t1424*t2041;
  t3060 = t2610*t2711;
  t3071 = t2432 + t3060;
  t3142 = Cos(var1[9]);
  t3512 = -1.*t2610*t1757;
  t3529 = -1.*t1424*t2041*t2711;
  t3540 = t3512 + t3529;
  t202 = Cos(var1[10]);
  t580 = Cos(var1[4]);
  t4152 = Sin(var1[10]);
  t4162 = t3142*t3071;
  t4349 = -1.*t1477*t3540;
  t4393 = t4162 + t4349;
  t217 = -1.*t202;
  t357 = 1. + t217;
  t368 = 0.183*t357;
  t405 = 0. + t368;
  t1616 = -0.047*t1477;
  t1630 = 0. + t1616;
  t3159 = -1.*t3142;
  t3210 = 1. + t3159;
  t3348 = 0.047*t3210;
  t3385 = 0. + t3348;
  t6238 = t2610*t1757*t2041;
  t6699 = t1424*t2711;
  t6728 = t6238 + t6699;
  t6992 = -1.*t1757*t1424;
  t7014 = t2610*t2041*t2711;
  t7030 = t6992 + t7014;
  t4157 = 0.183*t4152;
  t4159 = 0. + t4157;
  t7116 = t3142*t6728;
  t7123 = -1.*t1477*t7030;
  t7129 = t7116 + t7123;
  t7181 = t3142*t2610*t580*t1757;
  t7182 = -1.*t2610*t580*t1477*t2711;
  t7183 = t7181 + t7182;
  t7207 = t3142*t580*t1757*t1424;
  t7209 = -1.*t580*t1477*t1424*t2711;
  t7212 = t7207 + t7209;
  t8937 = -1.*t3142*t1757*t2041;
  t8941 = t1477*t2041*t2711;
  t8945 = t8937 + t8941;
  t9041 = t1757*t1424;
  t9077 = -1.*t2610*t2041*t2711;
  t9109 = t9041 + t9077;
  t9207 = -1.*t1477*t6728;
  t9214 = t3142*t9109;
  t9267 = t9207 + t9214;
  t9620 = t1757*t1424*t2041;
  t9642 = -1.*t2610*t2711;
  t9648 = t9620 + t9642;
  t3822 = t3142*t3540;
  t9736 = -1.*t1477*t9648;
  t9737 = t9736 + t3822;
  t9854 = -1.*t580*t1757*t1477;
  t9856 = -1.*t3142*t580*t2711;
  t9857 = t9854 + t9856;
  t9907 = -1.*t3142*t7030;
  t9909 = t9207 + t9907;
  t9921 = t2610*t1757;
  t9922 = t1424*t2041*t2711;
  t9923 = t9921 + t9922;
  t9935 = -1.*t3142*t9923;
  t9936 = t9736 + t9935;
  t9789 = t3142*t9648;
  t9864 = t4159*t9857;
  t9868 = -0.183*t4152*t9857;
  t9872 = t3142*t580*t1757;
  t9873 = -1.*t580*t1477*t2711;
  t9875 = t9872 + t9873;
  t9876 = 0.11079*t9875;
  t9941 = -1.*t1477*t9923;
  t9946 = t9789 + t9941;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1630*t3071 + t3385*t3540 + 0.11079*(t1477*t3071 + t3822) + t4159*t4393 - 1.*t1424*t405*t580 + 0.183*(-1.*t4152*t4393 - 1.*t1424*t202*t580);
  p_output1[10]=t2610*t405*t580 + t1630*t6728 + t3385*t7030 + 0.11079*(t1477*t6728 + t3142*t7030) + t4159*t7129 + 0.183*(t202*t2610*t580 - 1.*t4152*t7129);
  p_output1[11]=0;
  p_output1[12]=-1.*t2041*t2610*t405 + t1630*t1757*t2610*t580 + t2610*t2711*t3385*t580 + 0.11079*(t1477*t1757*t2610*t580 + t2610*t2711*t3142*t580) + t4159*t7183 + 0.183*(-1.*t202*t2041*t2610 - 1.*t4152*t7183);
  p_output1[13]=-1.*t1424*t2041*t405 + t1424*t1630*t1757*t580 + t1424*t2711*t3385*t580 + 0.11079*(t1424*t1477*t1757*t580 + t1424*t2711*t3142*t580) + t4159*t7212 + 0.183*(-1.*t1424*t202*t2041 - 1.*t4152*t7212);
  p_output1[14]=-1.*t1630*t1757*t2041 + 0.11079*(-1.*t1477*t1757*t2041 - 1.*t2041*t2711*t3142) - 1.*t2041*t2711*t3385 - 1.*t405*t580 + t4159*t8945 + 0.183*(-1.*t202*t580 - 1.*t4152*t8945);
  p_output1[15]=t3385*t6728 + t1630*t9109 + 0.11079*(t7116 + t1477*t9109) - 0.183*t4152*t9267 + t4159*t9267;
  p_output1[16]=t1630*t3540 + t3385*t9648 - 0.183*t4152*t9737 + t4159*t9737 + 0.11079*(t1477*t3540 + t9789);
  p_output1[17]=-1.*t1630*t2711*t580 + t1757*t3385*t580 + t9864 + t9868 + t9876;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=-0.047*t3142*t6728 + 0.047*t1477*t7030 + 0.11079*t7129 - 0.183*t4152*t9909 + t4159*t9909;
  p_output1[28]=-0.047*t3142*t9648 + 0.047*t1477*t9923 - 0.183*t4152*t9936 + t4159*t9936 + 0.11079*t9946;
  p_output1[29]=0.047*t1477*t2711*t580 - 0.047*t1757*t3142*t580 + t9864 + t9868 + t9876;
  p_output1[30]=0.183*t2610*t4152*t580 + 0.183*t202*t7129 + 0.183*(-1.*t2610*t4152*t580 - 1.*t202*t7129);
  p_output1[31]=0.183*t1424*t4152*t580 + 0.183*t202*t9946 + 0.183*(-1.*t1424*t4152*t580 - 1.*t202*t9946);
  p_output1[32]=-0.183*t2041*t4152 + 0.183*t202*t9875 + 0.183*(t2041*t4152 - 1.*t202*t9875);
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
