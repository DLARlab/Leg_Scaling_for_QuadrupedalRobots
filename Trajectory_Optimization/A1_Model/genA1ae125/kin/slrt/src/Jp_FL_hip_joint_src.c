/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:03:12 GMT-05:00
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
  double t744;
  double t4653;
  double t4605;
  double t4610;
  double t4661;
  double t4405;
  double t4637;
  double t4663;
  double t4669;
  double t4677;
  double t4709;
  double t4720;
  double t4734;
  double t730;
  double t4490;
  double t4603;
  double t4678;
  double t4680;
  double t4684;
  double t4692;
  double t4810;
  double t4811;
  double t4812;
  double t4820;
  double t4828;
  double t4829;
  double t4964;
  double t4966;
  double t4967;
  double t4994;
  double t4996;
  double t4997;
  double t4985;
  double t5001;
  double t5042;
  double t5045;
  double t5047;
  double t5018;
  double t5019;
  double t5020;
  double t5021;
  t744 = Sin(var1[3]);
  t4653 = Cos(var1[3]);
  t4605 = Cos(var1[5]);
  t4610 = Sin(var1[4]);
  t4661 = Sin(var1[5]);
  t4405 = Sin(var1[9]);
  t4637 = -1.*t4605*t744*t4610;
  t4663 = t4653*t4661;
  t4669 = t4637 + t4663;
  t4677 = Cos(var1[9]);
  t4709 = -1.*t4653*t4605;
  t4720 = -1.*t744*t4610*t4661;
  t4734 = t4709 + t4720;
  t730 = Cos(var1[4]);
  t4490 = -0.047*t4405;
  t4603 = 0. + t4490;
  t4678 = -1.*t4677;
  t4680 = 1. + t4678;
  t4684 = 0.047*t4680;
  t4692 = 0. + t4684;
  t4810 = t4653*t4605*t4610;
  t4811 = t744*t4661;
  t4812 = t4810 + t4811;
  t4820 = -1.*t4605*t744;
  t4828 = t4653*t4610*t4661;
  t4829 = t4820 + t4828;
  t4964 = t4605*t744;
  t4966 = -1.*t4653*t4610*t4661;
  t4967 = t4964 + t4966;
  t4994 = t4605*t744*t4610;
  t4996 = -1.*t4653*t4661;
  t4997 = t4994 + t4996;
  t4985 = t4677*t4812;
  t5001 = t4677*t4997;
  t5042 = t4653*t4605;
  t5045 = t744*t4610*t4661;
  t5047 = t5042 + t5045;
  t5018 = t4677*t730*t4605;
  t5019 = -1.*t730*t4405*t4661;
  t5020 = t5018 + t5019;
  t5021 = 0.047*t5020;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t4603*t4669 + t4692*t4734 + 0.047*(t4405*t4669 + t4677*t4734) - 0.183*t730*t744;
  p_output1[10]=t4603*t4812 + t4692*t4829 + 0.047*(t4405*t4812 + t4677*t4829) + 0.183*t4653*t730;
  p_output1[11]=0;
  p_output1[12]=-0.183*t4610*t4653 + t4603*t4605*t4653*t730 + t4653*t4661*t4692*t730 + 0.047*(t4405*t4605*t4653*t730 + t4653*t4661*t4677*t730);
  p_output1[13]=-0.183*t4610*t744 + t4603*t4605*t730*t744 + t4661*t4692*t730*t744 + 0.047*(t4405*t4605*t730*t744 + t4661*t4677*t730*t744);
  p_output1[14]=-1.*t4603*t4605*t4610 + 0.047*(-1.*t4405*t4605*t4610 - 1.*t4610*t4661*t4677) - 1.*t4610*t4661*t4692 - 0.183*t730;
  p_output1[15]=t4692*t4812 + t4603*t4967 + 0.047*(t4405*t4967 + t4985);
  p_output1[16]=t4603*t4734 + t4692*t4997 + 0.047*(t4405*t4734 + t5001);
  p_output1[17]=t5021 - 1.*t4603*t4661*t730 + t4605*t4692*t730;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=-0.047*t4677*t4812 + 0.047*t4405*t4829 + 0.047*(-1.*t4405*t4829 + t4985);
  p_output1[28]=-0.047*t4677*t4997 + 0.047*t4405*t5047 + 0.047*(t5001 - 1.*t4405*t5047);
  p_output1[29]=t5021 + 0.047*t4405*t4661*t730 - 0.047*t4605*t4677*t730;
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
