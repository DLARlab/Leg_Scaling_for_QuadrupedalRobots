/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:25:37 GMT-05:00
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
  double t1793;
  double t3317;
  double t3948;
  double t3092;
  double t3959;
  double t2216;
  double t3342;
  double t4134;
  double t4394;
  double t4846;
  double t4859;
  double t5139;
  double t5212;
  double t62;
  double t68;
  double t5962;
  double t6084;
  double t6152;
  double t6175;
  double t729;
  double t1011;
  double t1075;
  double t1768;
  double t2518;
  double t2764;
  double t2899;
  double t3086;
  double t5250;
  double t5501;
  double t6780;
  double t6784;
  double t6803;
  double t6839;
  double t6841;
  double t6859;
  double t6387;
  double t6453;
  double t6979;
  double t6993;
  double t6996;
  double t7227;
  double t7245;
  double t7247;
  double t7492;
  double t7498;
  double t7502;
  double t7777;
  double t7791;
  double t7792;
  double t7980;
  double t7982;
  double t7990;
  double t8028;
  double t8039;
  double t8041;
  double t8064;
  double t8077;
  double t8079;
  double t5656;
  double t8110;
  double t8124;
  double t8196;
  double t8205;
  double t8212;
  double t8415;
  double t8419;
  double t8099;
  double t8450;
  double t8451;
  double t8453;
  double t8490;
  double t8498;
  double t8178;
  double t8182;
  double t8191;
  double t8193;
  double t8213;
  double t8253;
  double t8474;
  double t8480;
  t1793 = Sin(var1[3]);
  t3317 = Cos(var1[5]);
  t3948 = Sin(var1[4]);
  t3092 = Cos(var1[3]);
  t3959 = Sin(var1[5]);
  t2216 = Cos(var1[6]);
  t3342 = -1.*t3092*t3317;
  t4134 = -1.*t1793*t3948*t3959;
  t4394 = t3342 + t4134;
  t4846 = -1.*t3317*t1793*t3948;
  t4859 = t3092*t3959;
  t5139 = t4846 + t4859;
  t5212 = Sin(var1[6]);
  t62 = Cos(var1[4]);
  t68 = Cos(var1[7]);
  t5962 = t2216*t5139;
  t6084 = -1.*t4394*t5212;
  t6152 = t5962 + t6084;
  t6175 = Sin(var1[7]);
  t729 = -1.*t68;
  t1011 = 1. + t729;
  t1075 = 0.183*t1011;
  t1768 = 0. + t1075;
  t2518 = -1.*t2216;
  t2764 = 1. + t2518;
  t2899 = -0.047*t2764;
  t3086 = 0. + t2899;
  t5250 = 0.047*t5212;
  t5501 = 0. + t5250;
  t6780 = -1.*t3317*t1793;
  t6784 = t3092*t3948*t3959;
  t6803 = t6780 + t6784;
  t6839 = t3092*t3317*t3948;
  t6841 = t1793*t3959;
  t6859 = t6839 + t6841;
  t6387 = 0.183*t6175;
  t6453 = 0. + t6387;
  t6979 = t2216*t6859;
  t6993 = -1.*t6803*t5212;
  t6996 = t6979 + t6993;
  t7227 = t3092*t62*t3317*t2216;
  t7245 = -1.*t3092*t62*t3959*t5212;
  t7247 = t7227 + t7245;
  t7492 = t62*t3317*t2216*t1793;
  t7498 = -1.*t62*t1793*t3959*t5212;
  t7502 = t7492 + t7498;
  t7777 = -1.*t3317*t2216*t3948;
  t7791 = t3948*t3959*t5212;
  t7792 = t7777 + t7791;
  t7980 = t3317*t1793;
  t7982 = -1.*t3092*t3948*t3959;
  t7990 = t7980 + t7982;
  t8028 = t2216*t7990;
  t8039 = -1.*t6859*t5212;
  t8041 = t8028 + t8039;
  t8064 = t3317*t1793*t3948;
  t8077 = -1.*t3092*t3959;
  t8079 = t8064 + t8077;
  t5656 = t2216*t4394;
  t8110 = -1.*t8079*t5212;
  t8124 = t5656 + t8110;
  t8196 = -1.*t62*t2216*t3959;
  t8205 = -1.*t62*t3317*t5212;
  t8212 = t8196 + t8205;
  t8415 = -1.*t2216*t6803;
  t8419 = t8415 + t8039;
  t8099 = t2216*t8079;
  t8450 = t3092*t3317;
  t8451 = t1793*t3948*t3959;
  t8453 = t8450 + t8451;
  t8490 = -1.*t2216*t8453;
  t8498 = t8490 + t8110;
  t8178 = t62*t3317*t2216;
  t8182 = -1.*t62*t3959*t5212;
  t8191 = t8178 + t8182;
  t8193 = -0.17458*t8191;
  t8213 = t8212*t6453;
  t8253 = -0.183*t8212*t6175;
  t8474 = -1.*t8453*t5212;
  t8480 = t8099 + t8474;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t3086*t4394 + t5139*t5501 - 0.17458*(t5139*t5212 + t5656) - 1.*t1768*t1793*t62 + t6152*t6453 + 0.183*(-1.*t6152*t6175 - 1.*t1793*t62*t68);
  p_output1[10]=t1768*t3092*t62 + t3086*t6803 + t5501*t6859 - 0.17458*(t2216*t6803 + t5212*t6859) + t6453*t6996 + 0.183*(t3092*t62*t68 - 1.*t6175*t6996);
  p_output1[11]=0;
  p_output1[12]=-1.*t1768*t3092*t3948 + t3086*t3092*t3959*t62 + t3092*t3317*t5501*t62 - 0.17458*(t2216*t3092*t3959*t62 + t3092*t3317*t5212*t62) + t6453*t7247 + 0.183*(-1.*t3092*t3948*t68 - 1.*t6175*t7247);
  p_output1[13]=-1.*t1768*t1793*t3948 + t1793*t3086*t3959*t62 + t1793*t3317*t5501*t62 - 0.17458*(t1793*t2216*t3959*t62 + t1793*t3317*t5212*t62) + t6453*t7502 + 0.183*(-1.*t1793*t3948*t68 - 1.*t6175*t7502);
  p_output1[14]=-1.*t3086*t3948*t3959 - 0.17458*(-1.*t2216*t3948*t3959 - 1.*t3317*t3948*t5212) - 1.*t3317*t3948*t5501 - 1.*t1768*t62 + t6453*t7792 + 0.183*(-1.*t62*t68 - 1.*t6175*t7792);
  p_output1[15]=t3086*t6859 + t5501*t7990 - 0.17458*(t6979 + t5212*t7990) - 0.183*t6175*t8041 + t6453*t8041;
  p_output1[16]=t4394*t5501 + t3086*t8079 - 0.17458*(t4394*t5212 + t8099) - 0.183*t6175*t8124 + t6453*t8124;
  p_output1[17]=t3086*t3317*t62 - 1.*t3959*t5501*t62 + t8193 + t8213 + t8253;
  p_output1[18]=-0.047*t5212*t6803 + 0.047*t2216*t6859 - 0.17458*t6996 - 0.183*t6175*t8419 + t6453*t8419;
  p_output1[19]=0.047*t2216*t8079 - 0.047*t5212*t8453 - 0.17458*t8480 - 0.183*t6175*t8498 + t6453*t8498;
  p_output1[20]=0.047*t2216*t3317*t62 - 0.047*t3959*t5212*t62 + t8193 + t8213 + t8253;
  p_output1[21]=0.183*t3092*t6175*t62 + 0.183*t68*t6996 + 0.183*(-1.*t3092*t6175*t62 - 1.*t68*t6996);
  p_output1[22]=0.183*t1793*t6175*t62 + 0.183*t68*t8480 + 0.183*(-1.*t1793*t6175*t62 - 1.*t68*t8480);
  p_output1[23]=-0.183*t3948*t6175 + 0.183*t68*t8191 + 0.183*(t3948*t6175 - 1.*t68*t8191);
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
