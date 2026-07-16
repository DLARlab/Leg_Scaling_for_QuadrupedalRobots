/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:20:32 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RR_hip_joint_src.h"

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
  double t374;
  double t4971;
  double t4279;
  double t4547;
  double t5148;
  double t918;
  double t4819;
  double t5662;
  double t5683;
  double t5908;
  double t5969;
  double t5982;
  double t6055;
  double t175;
  double t2661;
  double t2833;
  double t5921;
  double t5931;
  double t5949;
  double t5952;
  double t6227;
  double t6232;
  double t6238;
  double t6372;
  double t6374;
  double t6378;
  double t6807;
  double t6855;
  double t6891;
  double t7002;
  double t7028;
  double t7039;
  double t6925;
  double t7144;
  double t7435;
  double t7465;
  double t7466;
  double t7269;
  double t7315;
  double t7324;
  double t7336;
  t374 = Sin(var1[3]);
  t4971 = Cos(var1[3]);
  t4279 = Cos(var1[5]);
  t4547 = Sin(var1[4]);
  t5148 = Sin(var1[5]);
  t918 = Sin(var1[12]);
  t4819 = -1.*t4279*t374*t4547;
  t5662 = t4971*t5148;
  t5683 = t4819 + t5662;
  t5908 = Cos(var1[12]);
  t5969 = -1.*t4971*t4279;
  t5982 = -1.*t374*t4547*t5148;
  t6055 = t5969 + t5982;
  t175 = Cos(var1[4]);
  t2661 = 0.047*t918;
  t2833 = 0. + t2661;
  t5921 = -1.*t5908;
  t5931 = 1. + t5921;
  t5949 = -0.047*t5931;
  t5952 = 0. + t5949;
  t6227 = t4971*t4279*t4547;
  t6232 = t374*t5148;
  t6238 = t6227 + t6232;
  t6372 = -1.*t4279*t374;
  t6374 = t4971*t4547*t5148;
  t6378 = t6372 + t6374;
  t6807 = t4279*t374;
  t6855 = -1.*t4971*t4547*t5148;
  t6891 = t6807 + t6855;
  t7002 = t4279*t374*t4547;
  t7028 = -1.*t4971*t5148;
  t7039 = t7002 + t7028;
  t6925 = t5908*t6238;
  t7144 = t5908*t7039;
  t7435 = t4971*t4279;
  t7465 = t374*t4547*t5148;
  t7466 = t7435 + t7465;
  t7269 = t5908*t175*t4279;
  t7315 = -1.*t175*t918*t5148;
  t7324 = t7269 + t7315;
  t7336 = -0.047*t7324;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=0.183*t175*t374 + t2833*t5683 + t5952*t6055 - 0.047*(t5908*t6055 + t5683*t918);
  p_output1[10]=-0.183*t175*t4971 + t2833*t6238 + t5952*t6378 - 0.047*(t5908*t6378 + t6238*t918);
  p_output1[11]=0;
  p_output1[12]=t175*t2833*t4279*t4971 + 0.183*t4547*t4971 + t175*t4971*t5148*t5952 - 0.047*(t175*t4971*t5148*t5908 + t175*t4279*t4971*t918);
  p_output1[13]=t175*t2833*t374*t4279 + 0.183*t374*t4547 + t175*t374*t5148*t5952 - 0.047*(t175*t374*t5148*t5908 + t175*t374*t4279*t918);
  p_output1[14]=0.183*t175 - 1.*t2833*t4279*t4547 - 1.*t4547*t5148*t5952 - 0.047*(-1.*t4547*t5148*t5908 - 1.*t4279*t4547*t918);
  p_output1[15]=t5952*t6238 + t2833*t6891 - 0.047*(t6925 + t6891*t918);
  p_output1[16]=t2833*t6055 + t5952*t7039 - 0.047*(t7144 + t6055*t918);
  p_output1[17]=-1.*t175*t2833*t5148 + t175*t4279*t5952 + t7336;
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
  p_output1[36]=0.047*t5908*t6238 - 0.047*t6378*t918 - 0.047*(t6925 - 1.*t6378*t918);
  p_output1[37]=0.047*t5908*t7039 - 0.047*t7466*t918 - 0.047*(t7144 - 1.*t7466*t918);
  p_output1[38]=0.047*t175*t4279*t5908 + t7336 - 0.047*t175*t5148*t918;
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



void Jp_RR_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
