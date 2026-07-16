/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:20:42 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RL_thigh_joint_src.h"

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
  double t768;
  double t1675;
  double t2163;
  double t1970;
  double t2235;
  double t198;
  double t1369;
  double t1541;
  double t1605;
  double t2845;
  double t2146;
  double t2739;
  double t2795;
  double t2885;
  double t2940;
  double t2955;
  double t3469;
  double t3470;
  double t3495;
  double t3523;
  double t3547;
  double t3583;
  double t2841;
  double t3177;
  double t3280;
  double t3508;
  double t3622;
  double t3649;
  double t3846;
  double t3885;
  double t3887;
  double t3972;
  double t3994;
  double t4044;
  double t1530;
  double t3315;
  double t3335;
  double t4633;
  double t4638;
  double t4659;
  double t4668;
  double t4672;
  double t4675;
  double t4797;
  double t4815;
  double t4828;
  double t4860;
  double t4113;
  double t4129;
  double t4161;
  double t5223;
  double t5529;
  double t3409;
  double t3670;
  double t3702;
  double t4201;
  double t4202;
  double t4311;
  double t3749;
  double t3928;
  double t3958;
  t768 = Cos(var1[3]);
  t1675 = Cos(var1[5]);
  t2163 = Sin(var1[3]);
  t1970 = Sin(var1[4]);
  t2235 = Sin(var1[5]);
  t198 = Cos(var1[16]);
  t1369 = Cos(var1[4]);
  t1541 = Sin(var1[16]);
  t1605 = Cos(var1[15]);
  t2845 = Sin(var1[15]);
  t2146 = t768*t1675*t1970;
  t2739 = t2163*t2235;
  t2795 = t2146 + t2739;
  t2885 = -1.*t1675*t2163;
  t2940 = t768*t1970*t2235;
  t2955 = t2885 + t2940;
  t3469 = t1675*t2163*t1970;
  t3470 = -1.*t768*t2235;
  t3495 = t3469 + t3470;
  t3523 = t768*t1675;
  t3547 = t2163*t1970*t2235;
  t3583 = t3523 + t3547;
  t2841 = t1605*t2795;
  t3177 = -1.*t2845*t2955;
  t3280 = t2841 + t3177;
  t3508 = t1605*t3495;
  t3622 = -1.*t2845*t3583;
  t3649 = t3508 + t3622;
  t3846 = t1605*t1369*t1675;
  t3885 = -1.*t1369*t2845*t2235;
  t3887 = t3846 + t3885;
  t3972 = t2845*t2795;
  t3994 = t1605*t2955;
  t4044 = t3972 + t3994;
  t1530 = t198*t768*t1369;
  t3315 = -1.*t1541*t3280;
  t3335 = t1530 + t3315;
  t4633 = -1.*t198;
  t4638 = 1. + t4633;
  t4659 = -0.183*t4638;
  t4668 = 0. + t4659;
  t4672 = -0.047*t2845;
  t4675 = 0. + t4672;
  t4797 = -1.*t1605;
  t4815 = 1. + t4797;
  t4828 = 0.047*t4815;
  t4860 = 0. + t4828;
  t4113 = t2845*t3495;
  t4129 = t1605*t3583;
  t4161 = t4113 + t4129;
  t5223 = -0.183*t1541;
  t5529 = 0. + t5223;
  t3409 = t198*t1369*t2163;
  t3670 = -1.*t1541*t3649;
  t3702 = t3409 + t3670;
  t4201 = t1369*t1675*t2845;
  t4202 = t1605*t1369*t2235;
  t4311 = t4201 + t4202;
  t3749 = -1.*t198*t1970;
  t3928 = -1.*t1541*t3887;
  t3958 = t3749 + t3928;
  p_output1[0]=t3335;
  p_output1[1]=t3702;
  p_output1[2]=t3958;
  p_output1[3]=0.;
  p_output1[4]=t4044;
  p_output1[5]=t4161;
  p_output1[6]=t4311;
  p_output1[7]=0.;
  p_output1[8]=t198*t3280 + t1369*t1541*t768;
  p_output1[9]=t1369*t1541*t2163 + t198*t3649;
  p_output1[10]=-1.*t1541*t1970 + t198*t3887;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.183*t3335 + 0.15331*t4044 + t2795*t4675 + t2955*t4860 + t3280*t5529 + t1369*t4668*t768 + var1[0];
  p_output1[13]=0. - 0.183*t3702 + 0.15331*t4161 + t1369*t2163*t4668 + t3495*t4675 + t3583*t4860 + t3649*t5529 + var1[1];
  p_output1[14]=0. - 0.183*t3958 + 0.15331*t4311 - 1.*t1970*t4668 + t1369*t1675*t4675 + t1369*t2235*t4860 + t3887*t5529 + var1[2];
  p_output1[15]=1.;
}



void H_RL_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
