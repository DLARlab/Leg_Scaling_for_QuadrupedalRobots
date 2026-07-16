/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:18:02 GMT-05:00
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
  double t838;
  double t2515;
  double t1930;
  double t2179;
  double t2556;
  double t938;
  double t2433;
  double t2781;
  double t2808;
  double t3165;
  double t3376;
  double t3686;
  double t3716;
  double t109;
  double t746;
  double t4820;
  double t5057;
  double t5074;
  double t5487;
  double t132;
  double t133;
  double t134;
  double t658;
  double t1511;
  double t1844;
  double t3260;
  double t3277;
  double t3325;
  double t3332;
  double t6317;
  double t6545;
  double t6722;
  double t7023;
  double t7331;
  double t7335;
  double t4832;
  double t4969;
  double t7556;
  double t7617;
  double t7622;
  double t8007;
  double t8030;
  double t8031;
  double t8210;
  double t8226;
  double t8252;
  double t8417;
  double t8419;
  double t8485;
  double t8554;
  double t8555;
  double t8559;
  double t8563;
  double t8568;
  double t8569;
  double t8617;
  double t8618;
  double t8632;
  double t3858;
  double t8648;
  double t8651;
  double t8706;
  double t8727;
  double t8734;
  double t8861;
  double t8898;
  double t9052;
  double t9071;
  double t9119;
  double t9131;
  double t9199;
  double t8672;
  double t8769;
  double t8786;
  double t8794;
  double t8811;
  double t8825;
  double t8826;
  double t9205;
  double t9209;
  t838 = Sin(var1[3]);
  t2515 = Cos(var1[3]);
  t1930 = Cos(var1[5]);
  t2179 = Sin(var1[4]);
  t2556 = Sin(var1[5]);
  t938 = Sin(var1[12]);
  t2433 = -1.*t1930*t838*t2179;
  t2781 = t2515*t2556;
  t2808 = t2433 + t2781;
  t3165 = Cos(var1[12]);
  t3376 = -1.*t2515*t1930;
  t3686 = -1.*t838*t2179*t2556;
  t3716 = t3376 + t3686;
  t109 = Cos(var1[13]);
  t746 = Cos(var1[4]);
  t4820 = Sin(var1[13]);
  t5057 = t3165*t2808;
  t5074 = -1.*t938*t3716;
  t5487 = t5057 + t5074;
  t132 = -1.*t109;
  t133 = 1. + t132;
  t134 = -0.183*t133;
  t658 = 0. + t134;
  t1511 = 0.047*t938;
  t1844 = 0. + t1511;
  t3260 = -1.*t3165;
  t3277 = 1. + t3260;
  t3325 = -0.047*t3277;
  t3332 = 0. + t3325;
  t6317 = t2515*t1930*t2179;
  t6545 = t838*t2556;
  t6722 = t6317 + t6545;
  t7023 = -1.*t1930*t838;
  t7331 = t2515*t2179*t2556;
  t7335 = t7023 + t7331;
  t4832 = -0.183*t4820;
  t4969 = 0. + t4832;
  t7556 = t3165*t6722;
  t7617 = -1.*t938*t7335;
  t7622 = t7556 + t7617;
  t8007 = t3165*t2515*t746*t1930;
  t8030 = -1.*t2515*t746*t938*t2556;
  t8031 = t8007 + t8030;
  t8210 = t3165*t746*t1930*t838;
  t8226 = -1.*t746*t938*t838*t2556;
  t8252 = t8210 + t8226;
  t8417 = -1.*t3165*t1930*t2179;
  t8419 = t938*t2179*t2556;
  t8485 = t8417 + t8419;
  t8554 = t1930*t838;
  t8555 = -1.*t2515*t2179*t2556;
  t8559 = t8554 + t8555;
  t8563 = -1.*t938*t6722;
  t8568 = t3165*t8559;
  t8569 = t8563 + t8568;
  t8617 = t1930*t838*t2179;
  t8618 = -1.*t2515*t2556;
  t8632 = t8617 + t8618;
  t3858 = t3165*t3716;
  t8648 = -1.*t938*t8632;
  t8651 = t8648 + t3858;
  t8706 = -1.*t746*t1930*t938;
  t8727 = -1.*t3165*t746*t2556;
  t8734 = t8706 + t8727;
  t8861 = -1.*t3165*t7335;
  t8898 = t8563 + t8861;
  t9052 = t2515*t1930;
  t9071 = t838*t2179*t2556;
  t9119 = t9052 + t9071;
  t9131 = -1.*t3165*t9119;
  t9199 = t8648 + t9131;
  t8672 = t3165*t8632;
  t8769 = t4969*t8734;
  t8786 = 0.183*t4820*t8734;
  t8794 = t3165*t746*t1930;
  t8811 = -1.*t746*t938*t2556;
  t8825 = t8794 + t8811;
  t8826 = -0.11079*t8825;
  t9205 = -1.*t938*t9119;
  t9209 = t8672 + t9205;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1844*t2808 + t3332*t3716 + t4969*t5487 - 1.*t658*t746*t838 - 0.183*(-1.*t4820*t5487 - 1.*t109*t746*t838) - 0.11079*(t3858 + t2808*t938);
  p_output1[10]=t1844*t6722 + t3332*t7335 + t2515*t658*t746 + t4969*t7622 - 0.183*(t109*t2515*t746 - 1.*t4820*t7622) - 0.11079*(t3165*t7335 + t6722*t938);
  p_output1[11]=0;
  p_output1[12]=-1.*t2179*t2515*t658 + t1844*t1930*t2515*t746 + t2515*t2556*t3332*t746 + t4969*t8031 - 0.183*(-1.*t109*t2179*t2515 - 1.*t4820*t8031) - 0.11079*(t2515*t2556*t3165*t746 + t1930*t2515*t746*t938);
  p_output1[13]=t4969*t8252 - 1.*t2179*t658*t838 + t1844*t1930*t746*t838 + t2556*t3332*t746*t838 - 0.183*(-1.*t4820*t8252 - 1.*t109*t2179*t838) - 0.11079*(t2556*t3165*t746*t838 + t1930*t746*t838*t938);
  p_output1[14]=-1.*t1844*t1930*t2179 - 1.*t2179*t2556*t3332 - 1.*t658*t746 + t4969*t8485 - 0.183*(-1.*t109*t746 - 1.*t4820*t8485) - 0.11079*(-1.*t2179*t2556*t3165 - 1.*t1930*t2179*t938);
  p_output1[15]=t3332*t6722 + t1844*t8559 + 0.183*t4820*t8569 + t4969*t8569 - 0.11079*(t7556 + t8559*t938);
  p_output1[16]=t1844*t3716 + t3332*t8632 + 0.183*t4820*t8651 + t4969*t8651 - 0.11079*(t8672 + t3716*t938);
  p_output1[17]=-1.*t1844*t2556*t746 + t1930*t3332*t746 + t8769 + t8786 + t8826;
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
  p_output1[36]=0.047*t3165*t6722 - 0.11079*t7622 + 0.183*t4820*t8898 + t4969*t8898 - 0.047*t7335*t938;
  p_output1[37]=0.047*t3165*t8632 + 0.183*t4820*t9199 + t4969*t9199 - 0.11079*t9209 - 0.047*t9119*t938;
  p_output1[38]=0.047*t1930*t3165*t746 + t8769 + t8786 + t8826 - 0.047*t2556*t746*t938;
  p_output1[39]=-0.183*t2515*t4820*t746 - 0.183*t109*t7622 - 0.183*(-1.*t2515*t4820*t746 - 1.*t109*t7622);
  p_output1[40]=-0.183*t4820*t746*t838 - 0.183*t109*t9209 - 0.183*(-1.*t4820*t746*t838 - 1.*t109*t9209);
  p_output1[41]=0.183*t2179*t4820 - 0.183*t109*t8825 - 0.183*(t2179*t4820 - 1.*t109*t8825);
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
