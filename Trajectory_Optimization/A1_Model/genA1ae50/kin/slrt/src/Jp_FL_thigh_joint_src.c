/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:10:03 GMT-05:00
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
  double t1330;
  double t2014;
  double t1899;
  double t1956;
  double t2066;
  double t1441;
  double t1969;
  double t2147;
  double t2186;
  double t2319;
  double t2678;
  double t2690;
  double t2695;
  double t522;
  double t1216;
  double t2754;
  double t3054;
  double t3122;
  double t3214;
  double t705;
  double t775;
  double t1029;
  double t1187;
  double t1779;
  double t1892;
  double t2366;
  double t2404;
  double t2559;
  double t2635;
  double t3331;
  double t3402;
  double t3501;
  double t3538;
  double t3578;
  double t3599;
  double t2764;
  double t2957;
  double t3740;
  double t3787;
  double t3901;
  double t4651;
  double t4658;
  double t4669;
  double t5302;
  double t5303;
  double t5308;
  double t5570;
  double t5574;
  double t5590;
  double t5624;
  double t5633;
  double t5726;
  double t5763;
  double t5787;
  double t5798;
  double t5858;
  double t5879;
  double t5880;
  double t2741;
  double t5894;
  double t5898;
  double t5957;
  double t5958;
  double t5960;
  double t6099;
  double t6113;
  double t6242;
  double t6284;
  double t6287;
  double t6319;
  double t6323;
  double t5909;
  double t5961;
  double t5968;
  double t6035;
  double t6058;
  double t6067;
  double t6068;
  double t6376;
  double t6378;
  t1330 = Sin(var1[3]);
  t2014 = Cos(var1[3]);
  t1899 = Cos(var1[5]);
  t1956 = Sin(var1[4]);
  t2066 = Sin(var1[5]);
  t1441 = Sin(var1[9]);
  t1969 = -1.*t1899*t1330*t1956;
  t2147 = t2014*t2066;
  t2186 = t1969 + t2147;
  t2319 = Cos(var1[9]);
  t2678 = -1.*t2014*t1899;
  t2690 = -1.*t1330*t1956*t2066;
  t2695 = t2678 + t2690;
  t522 = Cos(var1[10]);
  t1216 = Cos(var1[4]);
  t2754 = Sin(var1[10]);
  t3054 = t2319*t2186;
  t3122 = -1.*t1441*t2695;
  t3214 = t3054 + t3122;
  t705 = -1.*t522;
  t775 = 1. + t705;
  t1029 = 0.183*t775;
  t1187 = 0. + t1029;
  t1779 = -0.047*t1441;
  t1892 = 0. + t1779;
  t2366 = -1.*t2319;
  t2404 = 1. + t2366;
  t2559 = 0.047*t2404;
  t2635 = 0. + t2559;
  t3331 = t2014*t1899*t1956;
  t3402 = t1330*t2066;
  t3501 = t3331 + t3402;
  t3538 = -1.*t1899*t1330;
  t3578 = t2014*t1956*t2066;
  t3599 = t3538 + t3578;
  t2764 = 0.183*t2754;
  t2957 = 0. + t2764;
  t3740 = t2319*t3501;
  t3787 = -1.*t1441*t3599;
  t3901 = t3740 + t3787;
  t4651 = t2319*t2014*t1216*t1899;
  t4658 = -1.*t2014*t1216*t1441*t2066;
  t4669 = t4651 + t4658;
  t5302 = t2319*t1216*t1899*t1330;
  t5303 = -1.*t1216*t1441*t1330*t2066;
  t5308 = t5302 + t5303;
  t5570 = -1.*t2319*t1899*t1956;
  t5574 = t1441*t1956*t2066;
  t5590 = t5570 + t5574;
  t5624 = t1899*t1330;
  t5633 = -1.*t2014*t1956*t2066;
  t5726 = t5624 + t5633;
  t5763 = -1.*t1441*t3501;
  t5787 = t2319*t5726;
  t5798 = t5763 + t5787;
  t5858 = t1899*t1330*t1956;
  t5879 = -1.*t2014*t2066;
  t5880 = t5858 + t5879;
  t2741 = t2319*t2695;
  t5894 = -1.*t1441*t5880;
  t5898 = t5894 + t2741;
  t5957 = -1.*t1216*t1899*t1441;
  t5958 = -1.*t2319*t1216*t2066;
  t5960 = t5957 + t5958;
  t6099 = -1.*t2319*t3599;
  t6113 = t5763 + t6099;
  t6242 = t2014*t1899;
  t6284 = t1330*t1956*t2066;
  t6287 = t6242 + t6284;
  t6319 = -1.*t2319*t6287;
  t6323 = t5894 + t6319;
  t5909 = t2319*t5880;
  t5961 = t2957*t5960;
  t5968 = -0.183*t2754*t5960;
  t6035 = t2319*t1216*t1899;
  t6058 = -1.*t1216*t1441*t2066;
  t6067 = t6035 + t6058;
  t6068 = 0.13205*t6067;
  t6376 = -1.*t1441*t6287;
  t6378 = t5909 + t6376;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=-1.*t1187*t1216*t1330 + t1892*t2186 + t2635*t2695 + 0.13205*(t1441*t2186 + t2741) + t2957*t3214 + 0.183*(-1.*t2754*t3214 - 1.*t1216*t1330*t522);
  p_output1[10]=t1187*t1216*t2014 + t1892*t3501 + t2635*t3599 + 0.13205*(t1441*t3501 + t2319*t3599) + t2957*t3901 + 0.183*(-1.*t2754*t3901 + t1216*t2014*t522);
  p_output1[11]=0;
  p_output1[12]=t1216*t1892*t1899*t2014 - 1.*t1187*t1956*t2014 + 0.13205*(t1216*t1441*t1899*t2014 + t1216*t2014*t2066*t2319) + t1216*t2014*t2066*t2635 + t2957*t4669 + 0.183*(-1.*t2754*t4669 - 1.*t1956*t2014*t522);
  p_output1[13]=t1216*t1330*t1892*t1899 - 1.*t1187*t1330*t1956 + 0.13205*(t1216*t1330*t1441*t1899 + t1216*t1330*t2066*t2319) + t1216*t1330*t2066*t2635 + t2957*t5308 + 0.183*(-1.*t1330*t1956*t522 - 1.*t2754*t5308);
  p_output1[14]=-1.*t1187*t1216 - 1.*t1892*t1899*t1956 + 0.13205*(-1.*t1441*t1899*t1956 - 1.*t1956*t2066*t2319) - 1.*t1956*t2066*t2635 + t2957*t5590 + 0.183*(-1.*t1216*t522 - 1.*t2754*t5590);
  p_output1[15]=t2635*t3501 + t1892*t5726 + 0.13205*(t3740 + t1441*t5726) - 0.183*t2754*t5798 + t2957*t5798;
  p_output1[16]=t1892*t2695 + t2635*t5880 - 0.183*t2754*t5898 + t2957*t5898 + 0.13205*(t1441*t2695 + t5909);
  p_output1[17]=-1.*t1216*t1892*t2066 + t1216*t1899*t2635 + t5961 + t5968 + t6068;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=-0.047*t2319*t3501 + 0.047*t1441*t3599 + 0.13205*t3901 - 0.183*t2754*t6113 + t2957*t6113;
  p_output1[28]=-0.047*t2319*t5880 + 0.047*t1441*t6287 - 0.183*t2754*t6323 + t2957*t6323 + 0.13205*t6378;
  p_output1[29]=0.047*t1216*t1441*t2066 - 0.047*t1216*t1899*t2319 + t5961 + t5968 + t6068;
  p_output1[30]=0.183*t1216*t2014*t2754 + 0.183*t3901*t522 + 0.183*(-1.*t1216*t2014*t2754 - 1.*t3901*t522);
  p_output1[31]=0.183*t1216*t1330*t2754 + 0.183*t522*t6378 + 0.183*(-1.*t1216*t1330*t2754 - 1.*t522*t6378);
  p_output1[32]=-0.183*t1956*t2754 + 0.183*t522*t6067 + 0.183*(t1956*t2754 - 1.*t522*t6067);
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
