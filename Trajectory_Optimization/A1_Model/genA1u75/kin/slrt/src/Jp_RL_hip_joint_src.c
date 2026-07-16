/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:18:07 GMT-05:00
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
  double t1053;
  double t5163;
  double t4177;
  double t4862;
  double t5261;
  double t2943;
  double t4876;
  double t5262;
  double t5447;
  double t5504;
  double t6740;
  double t6853;
  double t6927;
  double t142;
  double t2980;
  double t3710;
  double t5508;
  double t5659;
  double t5668;
  double t6067;
  double t7839;
  double t7863;
  double t7878;
  double t7966;
  double t7974;
  double t7990;
  double t8546;
  double t8558;
  double t8570;
  double t8673;
  double t8705;
  double t8709;
  double t8582;
  double t8764;
  double t8996;
  double t9003;
  double t9019;
  double t8868;
  double t8882;
  double t8889;
  double t8900;
  t1053 = Sin(var1[3]);
  t5163 = Cos(var1[3]);
  t4177 = Cos(var1[5]);
  t4862 = Sin(var1[4]);
  t5261 = Sin(var1[5]);
  t2943 = Sin(var1[15]);
  t4876 = -1.*t4177*t1053*t4862;
  t5262 = t5163*t5261;
  t5447 = t4876 + t5262;
  t5504 = Cos(var1[15]);
  t6740 = -1.*t5163*t4177;
  t6853 = -1.*t1053*t4862*t5261;
  t6927 = t6740 + t6853;
  t142 = Cos(var1[4]);
  t2980 = -0.047*t2943;
  t3710 = 0. + t2980;
  t5508 = -1.*t5504;
  t5659 = 1. + t5508;
  t5668 = 0.047*t5659;
  t6067 = 0. + t5668;
  t7839 = t5163*t4177*t4862;
  t7863 = t1053*t5261;
  t7878 = t7839 + t7863;
  t7966 = -1.*t4177*t1053;
  t7974 = t5163*t4862*t5261;
  t7990 = t7966 + t7974;
  t8546 = t4177*t1053;
  t8558 = -1.*t5163*t4862*t5261;
  t8570 = t8546 + t8558;
  t8673 = t4177*t1053*t4862;
  t8705 = -1.*t5163*t5261;
  t8709 = t8673 + t8705;
  t8582 = t5504*t7878;
  t8764 = t5504*t8709;
  t8996 = t5163*t4177;
  t9003 = t1053*t4862*t5261;
  t9019 = t8996 + t9003;
  t8868 = t5504*t142*t4177;
  t8882 = -1.*t142*t2943*t5261;
  t8889 = t8868 + t8882;
  t8900 = 0.047*t8889;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=0.183*t1053*t142 + t3710*t5447 + t6067*t6927 + 0.047*(t2943*t5447 + t5504*t6927);
  p_output1[10]=-0.183*t142*t5163 + t3710*t7878 + t6067*t7990 + 0.047*(t2943*t7878 + t5504*t7990);
  p_output1[11]=0;
  p_output1[12]=t142*t3710*t4177*t5163 + 0.183*t4862*t5163 + 0.047*(t142*t2943*t4177*t5163 + t142*t5163*t5261*t5504) + t142*t5163*t5261*t6067;
  p_output1[13]=t1053*t142*t3710*t4177 + 0.183*t1053*t4862 + 0.047*(t1053*t142*t2943*t4177 + t1053*t142*t5261*t5504) + t1053*t142*t5261*t6067;
  p_output1[14]=0.183*t142 - 1.*t3710*t4177*t4862 + 0.047*(-1.*t2943*t4177*t4862 - 1.*t4862*t5261*t5504) - 1.*t4862*t5261*t6067;
  p_output1[15]=t6067*t7878 + t3710*t8570 + 0.047*(t2943*t8570 + t8582);
  p_output1[16]=t3710*t6927 + t6067*t8709 + 0.047*(t2943*t6927 + t8764);
  p_output1[17]=-1.*t142*t3710*t5261 + t142*t4177*t6067 + t8900;
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
  p_output1[45]=-0.047*t5504*t7878 + 0.047*t2943*t7990 + 0.047*(-1.*t2943*t7990 + t8582);
  p_output1[46]=-0.047*t5504*t8709 + 0.047*t2943*t9019 + 0.047*(t8764 - 1.*t2943*t9019);
  p_output1[47]=0.047*t142*t2943*t5261 - 0.047*t142*t4177*t5504 + t8900;
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
