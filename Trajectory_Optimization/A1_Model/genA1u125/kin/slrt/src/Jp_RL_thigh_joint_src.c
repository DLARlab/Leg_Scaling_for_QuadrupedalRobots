/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:20:41 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RL_thigh_joint_src.h"

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
  double t1030;
  double t2963;
  double t2500;
  double t2556;
  double t3018;
  double t1397;
  double t2653;
  double t3250;
  double t3332;
  double t3761;
  double t4050;
  double t4064;
  double t4405;
  double t90;
  double t932;
  double t5291;
  double t5818;
  double t5857;
  double t5859;
  double t201;
  double t243;
  double t398;
  double t680;
  double t2023;
  double t2462;
  double t3779;
  double t3991;
  double t3994;
  double t4002;
  double t6966;
  double t6994;
  double t7065;
  double t7171;
  double t7346;
  double t7469;
  double t5651;
  double t5710;
  double t7745;
  double t7762;
  double t7768;
  double t8199;
  double t8205;
  double t8206;
  double t8485;
  double t8487;
  double t8490;
  double t8598;
  double t8600;
  double t8601;
  double t8621;
  double t8635;
  double t8636;
  double t8658;
  double t8662;
  double t8665;
  double t8711;
  double t8713;
  double t8729;
  double t4797;
  double t8752;
  double t8753;
  double t8827;
  double t8829;
  double t8833;
  double t8892;
  double t8893;
  double t8995;
  double t9020;
  double t9024;
  double t9033;
  double t9038;
  double t8785;
  double t8847;
  double t8849;
  double t8850;
  double t8866;
  double t8869;
  double t8874;
  double t9050;
  double t9051;
  t1030 = Sin(var1[3]);
  t2963 = Cos(var1[3]);
  t2500 = Cos(var1[5]);
  t2556 = Sin(var1[4]);
  t3018 = Sin(var1[5]);
  t1397 = Sin(var1[15]);
  t2653 = -1.*t2500*t1030*t2556;
  t3250 = t2963*t3018;
  t3332 = t2653 + t3250;
  t3761 = Cos(var1[15]);
  t4050 = -1.*t2963*t2500;
  t4064 = -1.*t1030*t2556*t3018;
  t4405 = t4050 + t4064;
  t90 = Cos(var1[16]);
  t932 = Cos(var1[4]);
  t5291 = Sin(var1[16]);
  t5818 = t3761*t3332;
  t5857 = -1.*t1397*t4405;
  t5859 = t5818 + t5857;
  t201 = -1.*t90;
  t243 = 1. + t201;
  t398 = -0.183*t243;
  t680 = 0. + t398;
  t2023 = -0.047*t1397;
  t2462 = 0. + t2023;
  t3779 = -1.*t3761;
  t3991 = 1. + t3779;
  t3994 = 0.047*t3991;
  t4002 = 0. + t3994;
  t6966 = t2963*t2500*t2556;
  t6994 = t1030*t3018;
  t7065 = t6966 + t6994;
  t7171 = -1.*t2500*t1030;
  t7346 = t2963*t2556*t3018;
  t7469 = t7171 + t7346;
  t5651 = -0.183*t5291;
  t5710 = 0. + t5651;
  t7745 = t3761*t7065;
  t7762 = -1.*t1397*t7469;
  t7768 = t7745 + t7762;
  t8199 = t3761*t2963*t932*t2500;
  t8205 = -1.*t2963*t932*t1397*t3018;
  t8206 = t8199 + t8205;
  t8485 = t3761*t932*t2500*t1030;
  t8487 = -1.*t932*t1397*t1030*t3018;
  t8490 = t8485 + t8487;
  t8598 = -1.*t3761*t2500*t2556;
  t8600 = t1397*t2556*t3018;
  t8601 = t8598 + t8600;
  t8621 = t2500*t1030;
  t8635 = -1.*t2963*t2556*t3018;
  t8636 = t8621 + t8635;
  t8658 = -1.*t1397*t7065;
  t8662 = t3761*t8636;
  t8665 = t8658 + t8662;
  t8711 = t2500*t1030*t2556;
  t8713 = -1.*t2963*t3018;
  t8729 = t8711 + t8713;
  t4797 = t3761*t4405;
  t8752 = -1.*t1397*t8729;
  t8753 = t8752 + t4797;
  t8827 = -1.*t932*t2500*t1397;
  t8829 = -1.*t3761*t932*t3018;
  t8833 = t8827 + t8829;
  t8892 = -1.*t3761*t7469;
  t8893 = t8658 + t8892;
  t8995 = t2963*t2500;
  t9020 = t1030*t2556*t3018;
  t9024 = t8995 + t9020;
  t9033 = -1.*t3761*t9024;
  t9038 = t8752 + t9033;
  t8785 = t3761*t8729;
  t8847 = t5710*t8833;
  t8849 = 0.183*t5291*t8833;
  t8850 = t3761*t932*t2500;
  t8866 = -1.*t932*t1397*t3018;
  t8869 = t8850 + t8866;
  t8874 = 0.15331*t8869;
  t9050 = -1.*t1397*t9024;
  t9051 = t8785 + t9050;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t2462*t3332 + t4002*t4405 + 0.15331*(t1397*t3332 + t4797) + t5710*t5859 - 1.*t1030*t680*t932 - 0.183*(-1.*t5291*t5859 - 1.*t1030*t90*t932);
  p_output1[10]=t2462*t7065 + t4002*t7469 + 0.15331*(t1397*t7065 + t3761*t7469) + t5710*t7768 + t2963*t680*t932 - 0.183*(-1.*t5291*t7768 + t2963*t90*t932);
  p_output1[11]=0;
  p_output1[12]=-1.*t2556*t2963*t680 + t5710*t8206 - 0.183*(-1.*t5291*t8206 - 1.*t2556*t2963*t90) + t2462*t2500*t2963*t932 + t2963*t3018*t4002*t932 + 0.15331*(t1397*t2500*t2963*t932 + t2963*t3018*t3761*t932);
  p_output1[13]=-1.*t1030*t2556*t680 + t5710*t8490 - 0.183*(-1.*t5291*t8490 - 1.*t1030*t2556*t90) + t1030*t2462*t2500*t932 + t1030*t3018*t4002*t932 + 0.15331*(t1030*t1397*t2500*t932 + t1030*t3018*t3761*t932);
  p_output1[14]=-1.*t2462*t2500*t2556 + 0.15331*(-1.*t1397*t2500*t2556 - 1.*t2556*t3018*t3761) - 1.*t2556*t3018*t4002 + t5710*t8601 - 1.*t680*t932 - 0.183*(-1.*t5291*t8601 - 1.*t90*t932);
  p_output1[15]=t4002*t7065 + t2462*t8636 + 0.15331*(t7745 + t1397*t8636) + 0.183*t5291*t8665 + t5710*t8665;
  p_output1[16]=t2462*t4405 + t4002*t8729 + 0.183*t5291*t8753 + t5710*t8753 + 0.15331*(t1397*t4405 + t8785);
  p_output1[17]=t8847 + t8849 + t8874 - 1.*t2462*t3018*t932 + t2500*t4002*t932;
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
  p_output1[45]=-0.047*t3761*t7065 + 0.047*t1397*t7469 + 0.15331*t7768 + 0.183*t5291*t8893 + t5710*t8893;
  p_output1[46]=-0.047*t3761*t8729 + 0.047*t1397*t9024 + 0.183*t5291*t9038 + t5710*t9038 + 0.15331*t9051;
  p_output1[47]=t8847 + t8849 + t8874 + 0.047*t1397*t3018*t932 - 0.047*t2500*t3761*t932;
  p_output1[48]=-0.183*t7768*t90 - 0.183*t2963*t5291*t932 - 0.183*(-1.*t7768*t90 - 1.*t2963*t5291*t932);
  p_output1[49]=-0.183*t90*t9051 - 0.183*t1030*t5291*t932 - 0.183*(-1.*t90*t9051 - 1.*t1030*t5291*t932);
  p_output1[50]=0.183*t2556*t5291 - 0.183*t8869*t90 - 0.183*(t2556*t5291 - 1.*t8869*t90);
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
}



void Jp_RL_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
