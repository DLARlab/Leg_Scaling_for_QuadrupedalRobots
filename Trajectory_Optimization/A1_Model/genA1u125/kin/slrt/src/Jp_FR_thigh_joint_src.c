/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:20:20 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_FR_thigh_joint_src.h"

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
  double t1236;
  double t2380;
  double t2390;
  double t2254;
  double t2479;
  double t1740;
  double t2382;
  double t2493;
  double t2671;
  double t2854;
  double t3123;
  double t3235;
  double t3274;
  double t45;
  double t58;
  double t3962;
  double t4372;
  double t4619;
  double t4746;
  double t562;
  double t627;
  double t833;
  double t1155;
  double t1769;
  double t1940;
  double t2067;
  double t2186;
  double t3403;
  double t3413;
  double t5884;
  double t5897;
  double t5945;
  double t5978;
  double t5997;
  double t6176;
  double t4769;
  double t5122;
  double t6596;
  double t6610;
  double t6627;
  double t7025;
  double t7042;
  double t7068;
  double t7241;
  double t7249;
  double t7251;
  double t7397;
  double t7408;
  double t7409;
  double t7467;
  double t7471;
  double t7472;
  double t7521;
  double t7523;
  double t7529;
  double t7563;
  double t7565;
  double t7580;
  double t3604;
  double t7646;
  double t7648;
  double t7729;
  double t7732;
  double t7749;
  double t7865;
  double t7870;
  double t7618;
  double t7913;
  double t7920;
  double t7932;
  double t7979;
  double t8011;
  double t7690;
  double t7697;
  double t7705;
  double t7710;
  double t7779;
  double t7816;
  double t7965;
  double t7968;
  t1236 = Sin(var1[3]);
  t2380 = Cos(var1[5]);
  t2390 = Sin(var1[4]);
  t2254 = Cos(var1[3]);
  t2479 = Sin(var1[5]);
  t1740 = Cos(var1[6]);
  t2382 = -1.*t2254*t2380;
  t2493 = -1.*t1236*t2390*t2479;
  t2671 = t2382 + t2493;
  t2854 = -1.*t2380*t1236*t2390;
  t3123 = t2254*t2479;
  t3235 = t2854 + t3123;
  t3274 = Sin(var1[6]);
  t45 = Cos(var1[4]);
  t58 = Cos(var1[7]);
  t3962 = t1740*t3235;
  t4372 = -1.*t2671*t3274;
  t4619 = t3962 + t4372;
  t4746 = Sin(var1[7]);
  t562 = -1.*t58;
  t627 = 1. + t562;
  t833 = 0.183*t627;
  t1155 = 0. + t833;
  t1769 = -1.*t1740;
  t1940 = 1. + t1769;
  t2067 = -0.047*t1940;
  t2186 = 0. + t2067;
  t3403 = 0.047*t3274;
  t3413 = 0. + t3403;
  t5884 = -1.*t2380*t1236;
  t5897 = t2254*t2390*t2479;
  t5945 = t5884 + t5897;
  t5978 = t2254*t2380*t2390;
  t5997 = t1236*t2479;
  t6176 = t5978 + t5997;
  t4769 = 0.183*t4746;
  t5122 = 0. + t4769;
  t6596 = t1740*t6176;
  t6610 = -1.*t5945*t3274;
  t6627 = t6596 + t6610;
  t7025 = t2254*t45*t2380*t1740;
  t7042 = -1.*t2254*t45*t2479*t3274;
  t7068 = t7025 + t7042;
  t7241 = t45*t2380*t1740*t1236;
  t7249 = -1.*t45*t1236*t2479*t3274;
  t7251 = t7241 + t7249;
  t7397 = -1.*t2380*t1740*t2390;
  t7408 = t2390*t2479*t3274;
  t7409 = t7397 + t7408;
  t7467 = t2380*t1236;
  t7471 = -1.*t2254*t2390*t2479;
  t7472 = t7467 + t7471;
  t7521 = t1740*t7472;
  t7523 = -1.*t6176*t3274;
  t7529 = t7521 + t7523;
  t7563 = t2380*t1236*t2390;
  t7565 = -1.*t2254*t2479;
  t7580 = t7563 + t7565;
  t3604 = t1740*t2671;
  t7646 = -1.*t7580*t3274;
  t7648 = t3604 + t7646;
  t7729 = -1.*t45*t1740*t2479;
  t7732 = -1.*t45*t2380*t3274;
  t7749 = t7729 + t7732;
  t7865 = -1.*t1740*t5945;
  t7870 = t7865 + t7523;
  t7618 = t1740*t7580;
  t7913 = t2254*t2380;
  t7920 = t1236*t2390*t2479;
  t7932 = t7913 + t7920;
  t7979 = -1.*t1740*t7932;
  t8011 = t7979 + t7646;
  t7690 = t45*t2380*t1740;
  t7697 = -1.*t45*t2479*t3274;
  t7705 = t7690 + t7697;
  t7710 = -0.15331*t7705;
  t7779 = t7749*t5122;
  t7816 = -0.183*t7749*t4746;
  t7965 = -1.*t7932*t3274;
  t7968 = t7618 + t7965;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t2186*t2671 + t3235*t3413 - 0.15331*(t3235*t3274 + t3604) - 1.*t1155*t1236*t45 + t4619*t5122 + 0.183*(-1.*t4619*t4746 - 1.*t1236*t45*t58);
  p_output1[10]=t1155*t2254*t45 + t2186*t5945 + t3413*t6176 - 0.15331*(t1740*t5945 + t3274*t6176) + t5122*t6627 + 0.183*(t2254*t45*t58 - 1.*t4746*t6627);
  p_output1[11]=0;
  p_output1[12]=-1.*t1155*t2254*t2390 + t2186*t2254*t2479*t45 + t2254*t2380*t3413*t45 - 0.15331*(t1740*t2254*t2479*t45 + t2254*t2380*t3274*t45) + t5122*t7068 + 0.183*(-1.*t2254*t2390*t58 - 1.*t4746*t7068);
  p_output1[13]=-1.*t1155*t1236*t2390 + t1236*t2186*t2479*t45 + t1236*t2380*t3413*t45 - 0.15331*(t1236*t1740*t2479*t45 + t1236*t2380*t3274*t45) + t5122*t7251 + 0.183*(-1.*t1236*t2390*t58 - 1.*t4746*t7251);
  p_output1[14]=-1.*t2186*t2390*t2479 - 0.15331*(-1.*t1740*t2390*t2479 - 1.*t2380*t2390*t3274) - 1.*t2380*t2390*t3413 - 1.*t1155*t45 + t5122*t7409 + 0.183*(-1.*t45*t58 - 1.*t4746*t7409);
  p_output1[15]=t2186*t6176 + t3413*t7472 - 0.15331*(t6596 + t3274*t7472) - 0.183*t4746*t7529 + t5122*t7529;
  p_output1[16]=t2671*t3413 + t2186*t7580 - 0.15331*(t2671*t3274 + t7618) - 0.183*t4746*t7648 + t5122*t7648;
  p_output1[17]=t2186*t2380*t45 - 1.*t2479*t3413*t45 + t7710 + t7779 + t7816;
  p_output1[18]=-0.047*t3274*t5945 + 0.047*t1740*t6176 - 0.15331*t6627 - 0.183*t4746*t7870 + t5122*t7870;
  p_output1[19]=0.047*t1740*t7580 - 0.047*t3274*t7932 - 0.15331*t7968 - 0.183*t4746*t8011 + t5122*t8011;
  p_output1[20]=0.047*t1740*t2380*t45 - 0.047*t2479*t3274*t45 + t7710 + t7779 + t7816;
  p_output1[21]=0.183*t2254*t45*t4746 + 0.183*t58*t6627 + 0.183*(-1.*t2254*t45*t4746 - 1.*t58*t6627);
  p_output1[22]=0.183*t1236*t45*t4746 + 0.183*t58*t7968 + 0.183*(-1.*t1236*t45*t4746 - 1.*t58*t7968);
  p_output1[23]=-0.183*t2390*t4746 + 0.183*t58*t7705 + 0.183*(t2390*t4746 - 1.*t58*t7705);
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



void Jp_FR_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
