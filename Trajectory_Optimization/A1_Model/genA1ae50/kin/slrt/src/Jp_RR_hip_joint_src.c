/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:10:08 GMT-05:00
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
  double t563;
  double t1820;
  double t1384;
  double t1532;
  double t2135;
  double t774;
  double t1780;
  double t3200;
  double t3207;
  double t3233;
  double t4649;
  double t5500;
  double t5881;
  double t562;
  double t1021;
  double t1140;
  double t3658;
  double t3697;
  double t3749;
  double t3930;
  double t7165;
  double t7256;
  double t7261;
  double t7300;
  double t7363;
  double t7442;
  double t7807;
  double t7808;
  double t7809;
  double t7827;
  double t7828;
  double t7831;
  double t7813;
  double t7835;
  double t7922;
  double t7925;
  double t7926;
  double t7868;
  double t7877;
  double t7882;
  double t7883;
  t563 = Sin(var1[3]);
  t1820 = Cos(var1[3]);
  t1384 = Cos(var1[5]);
  t1532 = Sin(var1[4]);
  t2135 = Sin(var1[5]);
  t774 = Sin(var1[12]);
  t1780 = -1.*t1384*t563*t1532;
  t3200 = t1820*t2135;
  t3207 = t1780 + t3200;
  t3233 = Cos(var1[12]);
  t4649 = -1.*t1820*t1384;
  t5500 = -1.*t563*t1532*t2135;
  t5881 = t4649 + t5500;
  t562 = Cos(var1[4]);
  t1021 = 0.047*t774;
  t1140 = 0. + t1021;
  t3658 = -1.*t3233;
  t3697 = 1. + t3658;
  t3749 = -0.047*t3697;
  t3930 = 0. + t3749;
  t7165 = t1820*t1384*t1532;
  t7256 = t563*t2135;
  t7261 = t7165 + t7256;
  t7300 = -1.*t1384*t563;
  t7363 = t1820*t1532*t2135;
  t7442 = t7300 + t7363;
  t7807 = t1384*t563;
  t7808 = -1.*t1820*t1532*t2135;
  t7809 = t7807 + t7808;
  t7827 = t1384*t563*t1532;
  t7828 = -1.*t1820*t2135;
  t7831 = t7827 + t7828;
  t7813 = t3233*t7261;
  t7835 = t3233*t7831;
  t7922 = t1820*t1384;
  t7925 = t563*t1532*t2135;
  t7926 = t7922 + t7925;
  t7868 = t3233*t562*t1384;
  t7877 = -1.*t562*t774*t2135;
  t7882 = t7868 + t7877;
  t7883 = -0.047*t7882;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1140*t3207 + 0.183*t562*t563 + t3930*t5881 - 0.047*(t3233*t5881 + t3207*t774);
  p_output1[10]=-0.183*t1820*t562 + t1140*t7261 + t3930*t7442 - 0.047*(t3233*t7442 + t7261*t774);
  p_output1[11]=0;
  p_output1[12]=0.183*t1532*t1820 + t1140*t1384*t1820*t562 + t1820*t2135*t3930*t562 - 0.047*(t1820*t2135*t3233*t562 + t1384*t1820*t562*t774);
  p_output1[13]=0.183*t1532*t563 + t1140*t1384*t562*t563 + t2135*t3930*t562*t563 - 0.047*(t2135*t3233*t562*t563 + t1384*t562*t563*t774);
  p_output1[14]=-1.*t1140*t1384*t1532 - 1.*t1532*t2135*t3930 + 0.183*t562 - 0.047*(-1.*t1532*t2135*t3233 - 1.*t1384*t1532*t774);
  p_output1[15]=t3930*t7261 + t1140*t7809 - 0.047*(t774*t7809 + t7813);
  p_output1[16]=t1140*t5881 + t3930*t7831 - 0.047*(t5881*t774 + t7835);
  p_output1[17]=-1.*t1140*t2135*t562 + t1384*t3930*t562 + t7883;
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
  p_output1[36]=0.047*t3233*t7261 - 0.047*t7442*t774 - 0.047*(-1.*t7442*t774 + t7813);
  p_output1[37]=0.047*t3233*t7831 - 0.047*t774*t7926 - 0.047*(t7835 - 1.*t774*t7926);
  p_output1[38]=0.047*t1384*t3233*t562 - 0.047*t2135*t562*t774 + t7883;
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
