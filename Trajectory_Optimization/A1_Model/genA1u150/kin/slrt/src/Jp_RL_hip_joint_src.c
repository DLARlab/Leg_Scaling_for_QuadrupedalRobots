/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:25:56 GMT-05:00
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
  double t1057;
  double t2705;
  double t2215;
  double t2340;
  double t2807;
  double t1942;
  double t2620;
  double t3355;
  double t5696;
  double t6397;
  double t6708;
  double t6986;
  double t6994;
  double t538;
  double t2107;
  double t2203;
  double t6400;
  double t6474;
  double t6497;
  double t6605;
  double t7175;
  double t7228;
  double t7234;
  double t7275;
  double t7354;
  double t7437;
  double t7759;
  double t7762;
  double t7767;
  double t7827;
  double t7907;
  double t7908;
  double t7779;
  double t8001;
  double t8273;
  double t8299;
  double t8373;
  double t8114;
  double t8126;
  double t8145;
  double t8149;
  t1057 = Sin(var1[3]);
  t2705 = Cos(var1[3]);
  t2215 = Cos(var1[5]);
  t2340 = Sin(var1[4]);
  t2807 = Sin(var1[5]);
  t1942 = Sin(var1[15]);
  t2620 = -1.*t2215*t1057*t2340;
  t3355 = t2705*t2807;
  t5696 = t2620 + t3355;
  t6397 = Cos(var1[15]);
  t6708 = -1.*t2705*t2215;
  t6986 = -1.*t1057*t2340*t2807;
  t6994 = t6708 + t6986;
  t538 = Cos(var1[4]);
  t2107 = -0.047*t1942;
  t2203 = 0. + t2107;
  t6400 = -1.*t6397;
  t6474 = 1. + t6400;
  t6497 = 0.047*t6474;
  t6605 = 0. + t6497;
  t7175 = t2705*t2215*t2340;
  t7228 = t1057*t2807;
  t7234 = t7175 + t7228;
  t7275 = -1.*t2215*t1057;
  t7354 = t2705*t2340*t2807;
  t7437 = t7275 + t7354;
  t7759 = t2215*t1057;
  t7762 = -1.*t2705*t2340*t2807;
  t7767 = t7759 + t7762;
  t7827 = t2215*t1057*t2340;
  t7907 = -1.*t2705*t2807;
  t7908 = t7827 + t7907;
  t7779 = t6397*t7234;
  t8001 = t6397*t7908;
  t8273 = t2705*t2215;
  t8299 = t1057*t2340*t2807;
  t8373 = t8273 + t8299;
  t8114 = t6397*t538*t2215;
  t8126 = -1.*t538*t1942*t2807;
  t8145 = t8114 + t8126;
  t8149 = 0.047*t8145;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=0.183*t1057*t538 + t2203*t5696 + t6605*t6994 + 0.047*(t1942*t5696 + t6397*t6994);
  p_output1[10]=-0.183*t2705*t538 + t2203*t7234 + t6605*t7437 + 0.047*(t1942*t7234 + t6397*t7437);
  p_output1[11]=0;
  p_output1[12]=0.183*t2340*t2705 + t2203*t2215*t2705*t538 + 0.047*(t1942*t2215*t2705*t538 + t2705*t2807*t538*t6397) + t2705*t2807*t538*t6605;
  p_output1[13]=0.183*t1057*t2340 + t1057*t2203*t2215*t538 + 0.047*(t1057*t1942*t2215*t538 + t1057*t2807*t538*t6397) + t1057*t2807*t538*t6605;
  p_output1[14]=-1.*t2203*t2215*t2340 + 0.183*t538 + 0.047*(-1.*t1942*t2215*t2340 - 1.*t2340*t2807*t6397) - 1.*t2340*t2807*t6605;
  p_output1[15]=t6605*t7234 + t2203*t7767 + 0.047*(t1942*t7767 + t7779);
  p_output1[16]=t2203*t6994 + t6605*t7908 + 0.047*(t1942*t6994 + t8001);
  p_output1[17]=-1.*t2203*t2807*t538 + t2215*t538*t6605 + t8149;
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
  p_output1[45]=-0.047*t6397*t7234 + 0.047*t1942*t7437 + 0.047*(-1.*t1942*t7437 + t7779);
  p_output1[46]=-0.047*t6397*t7908 + 0.047*t1942*t8373 + 0.047*(t8001 - 1.*t1942*t8373);
  p_output1[47]=0.047*t1942*t2807*t538 - 0.047*t2215*t538*t6397 + t8149;
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
