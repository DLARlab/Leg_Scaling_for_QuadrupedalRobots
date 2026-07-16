/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:17:53 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_FL_hip_joint_src.h"

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
  double t3457;
  double t6066;
  double t4194;
  double t4205;
  double t6076;
  double t3783;
  double t6063;
  double t6814;
  double t6818;
  double t7138;
  double t7514;
  double t7561;
  double t7620;
  double t2443;
  double t3900;
  double t3907;
  double t7348;
  double t7367;
  double t7467;
  double t7496;
  double t7737;
  double t7780;
  double t7803;
  double t7860;
  double t7866;
  double t7953;
  double t8630;
  double t8635;
  double t8640;
  double t8712;
  double t8714;
  double t8720;
  double t8664;
  double t8860;
  double t9109;
  double t9115;
  double t9117;
  double t8932;
  double t8933;
  double t8953;
  double t8966;
  t3457 = Sin(var1[3]);
  t6066 = Cos(var1[3]);
  t4194 = Cos(var1[5]);
  t4205 = Sin(var1[4]);
  t6076 = Sin(var1[5]);
  t3783 = Sin(var1[9]);
  t6063 = -1.*t4194*t3457*t4205;
  t6814 = t6066*t6076;
  t6818 = t6063 + t6814;
  t7138 = Cos(var1[9]);
  t7514 = -1.*t6066*t4194;
  t7561 = -1.*t3457*t4205*t6076;
  t7620 = t7514 + t7561;
  t2443 = Cos(var1[4]);
  t3900 = -0.047*t3783;
  t3907 = 0. + t3900;
  t7348 = -1.*t7138;
  t7367 = 1. + t7348;
  t7467 = 0.047*t7367;
  t7496 = 0. + t7467;
  t7737 = t6066*t4194*t4205;
  t7780 = t3457*t6076;
  t7803 = t7737 + t7780;
  t7860 = -1.*t4194*t3457;
  t7866 = t6066*t4205*t6076;
  t7953 = t7860 + t7866;
  t8630 = t4194*t3457;
  t8635 = -1.*t6066*t4205*t6076;
  t8640 = t8630 + t8635;
  t8712 = t4194*t3457*t4205;
  t8714 = -1.*t6066*t6076;
  t8720 = t8712 + t8714;
  t8664 = t7138*t7803;
  t8860 = t7138*t8720;
  t9109 = t6066*t4194;
  t9115 = t3457*t4205*t6076;
  t9117 = t9109 + t9115;
  t8932 = t7138*t2443*t4194;
  t8933 = -1.*t2443*t3783*t6076;
  t8953 = t8932 + t8933;
  t8966 = 0.047*t8953;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=-0.183*t2443*t3457 + t3907*t6818 + t7496*t7620 + 0.047*(t3783*t6818 + t7138*t7620);
  p_output1[10]=0.183*t2443*t6066 + t3907*t7803 + t7496*t7953 + 0.047*(t3783*t7803 + t7138*t7953);
  p_output1[11]=0;
  p_output1[12]=t2443*t3907*t4194*t6066 - 0.183*t4205*t6066 + 0.047*(t2443*t3783*t4194*t6066 + t2443*t6066*t6076*t7138) + t2443*t6066*t6076*t7496;
  p_output1[13]=t2443*t3457*t3907*t4194 - 0.183*t3457*t4205 + 0.047*(t2443*t3457*t3783*t4194 + t2443*t3457*t6076*t7138) + t2443*t3457*t6076*t7496;
  p_output1[14]=-0.183*t2443 - 1.*t3907*t4194*t4205 + 0.047*(-1.*t3783*t4194*t4205 - 1.*t4205*t6076*t7138) - 1.*t4205*t6076*t7496;
  p_output1[15]=t7496*t7803 + t3907*t8640 + 0.047*(t3783*t8640 + t8664);
  p_output1[16]=t3907*t7620 + t7496*t8720 + 0.047*(t3783*t7620 + t8860);
  p_output1[17]=-1.*t2443*t3907*t6076 + t2443*t4194*t7496 + t8966;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=-0.047*t7138*t7803 + 0.047*t3783*t7953 + 0.047*(-1.*t3783*t7953 + t8664);
  p_output1[28]=-0.047*t7138*t8720 + 0.047*t3783*t9117 + 0.047*(t8860 - 1.*t3783*t9117);
  p_output1[29]=0.047*t2443*t3783*t6076 - 0.047*t2443*t4194*t7138 + t8966;
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



void Jp_FL_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
