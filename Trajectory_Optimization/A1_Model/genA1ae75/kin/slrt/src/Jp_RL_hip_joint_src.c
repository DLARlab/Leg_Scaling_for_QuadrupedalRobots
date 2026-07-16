/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:50:54 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RL_hip_joint_src.h"

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
  double t5635;
  double t6307;
  double t6258;
  double t6266;
  double t6310;
  double t6185;
  double t6299;
  double t6311;
  double t6412;
  double t6414;
  double t6442;
  double t6500;
  double t6501;
  double t2242;
  double t6232;
  double t6233;
  double t6423;
  double t6427;
  double t6429;
  double t6433;
  double t6536;
  double t6538;
  double t6539;
  double t6546;
  double t6547;
  double t6551;
  double t6946;
  double t6951;
  double t6965;
  double t7104;
  double t7107;
  double t7132;
  double t7039;
  double t7158;
  double t7471;
  double t7473;
  double t7483;
  double t7318;
  double t7323;
  double t7329;
  double t7332;
  t5635 = Sin(var1[3]);
  t6307 = Cos(var1[3]);
  t6258 = Cos(var1[5]);
  t6266 = Sin(var1[4]);
  t6310 = Sin(var1[5]);
  t6185 = Sin(var1[15]);
  t6299 = -1.*t6258*t5635*t6266;
  t6311 = t6307*t6310;
  t6412 = t6299 + t6311;
  t6414 = Cos(var1[15]);
  t6442 = -1.*t6307*t6258;
  t6500 = -1.*t5635*t6266*t6310;
  t6501 = t6442 + t6500;
  t2242 = Cos(var1[4]);
  t6232 = -0.047*t6185;
  t6233 = 0. + t6232;
  t6423 = -1.*t6414;
  t6427 = 1. + t6423;
  t6429 = 0.047*t6427;
  t6433 = 0. + t6429;
  t6536 = t6307*t6258*t6266;
  t6538 = t5635*t6310;
  t6539 = t6536 + t6538;
  t6546 = -1.*t6258*t5635;
  t6547 = t6307*t6266*t6310;
  t6551 = t6546 + t6547;
  t6946 = t6258*t5635;
  t6951 = -1.*t6307*t6266*t6310;
  t6965 = t6946 + t6951;
  t7104 = t6258*t5635*t6266;
  t7107 = -1.*t6307*t6310;
  t7132 = t7104 + t7107;
  t7039 = t6414*t6539;
  t7158 = t6414*t7132;
  t7471 = t6307*t6258;
  t7473 = t5635*t6266*t6310;
  t7483 = t7471 + t7473;
  t7318 = t6414*t2242*t6258;
  t7323 = -1.*t2242*t6185*t6310;
  t7329 = t7318 + t7323;
  t7332 = 0.047*t7329;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=0.183*t2242*t5635 + t6233*t6412 + t6433*t6501 + 0.047*(t6185*t6412 + t6414*t6501);
  p_output1[10]=-0.183*t2242*t6307 + t6233*t6539 + t6433*t6551 + 0.047*(t6185*t6539 + t6414*t6551);
  p_output1[11]=0;
  p_output1[12]=t2242*t6233*t6258*t6307 + 0.183*t6266*t6307 + 0.047*(t2242*t6185*t6258*t6307 + t2242*t6307*t6310*t6414) + t2242*t6307*t6310*t6433;
  p_output1[13]=t2242*t5635*t6233*t6258 + 0.183*t5635*t6266 + 0.047*(t2242*t5635*t6185*t6258 + t2242*t5635*t6310*t6414) + t2242*t5635*t6310*t6433;
  p_output1[14]=0.183*t2242 - 1.*t6233*t6258*t6266 + 0.047*(-1.*t6185*t6258*t6266 - 1.*t6266*t6310*t6414) - 1.*t6266*t6310*t6433;
  p_output1[15]=t6433*t6539 + t6233*t6965 + 0.047*(t6185*t6965 + t7039);
  p_output1[16]=t6233*t6501 + t6433*t7132 + 0.047*(t6185*t6501 + t7158);
  p_output1[17]=-1.*t2242*t6233*t6310 + t2242*t6258*t6433 + t7332;
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
  p_output1[45]=-0.047*t6414*t6539 + 0.047*t6185*t6551 + 0.047*(-1.*t6185*t6551 + t7039);
  p_output1[46]=-0.047*t6414*t7132 + 0.047*t6185*t7483 + 0.047*(t7158 - 1.*t6185*t7483);
  p_output1[47]=0.047*t2242*t6185*t6310 - 0.047*t2242*t6258*t6414 + t7332;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
}



void Jp_RL_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
