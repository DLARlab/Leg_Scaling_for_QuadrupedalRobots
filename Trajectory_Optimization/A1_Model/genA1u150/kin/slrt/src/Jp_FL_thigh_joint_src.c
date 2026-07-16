/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:25:44 GMT-05:00
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
  double t907;
  double t2439;
  double t1984;
  double t2043;
  double t2706;
  double t1146;
  double t2376;
  double t2783;
  double t2966;
  double t3664;
  double t4149;
  double t4496;
  double t5339;
  double t409;
  double t860;
  double t6350;
  double t6532;
  double t6575;
  double t6584;
  double t530;
  double t645;
  double t667;
  double t825;
  double t1282;
  double t1627;
  double t3703;
  double t3880;
  double t3955;
  double t4041;
  double t7261;
  double t7312;
  double t7329;
  double t7454;
  double t7474;
  double t7488;
  double t6484;
  double t6495;
  double t7721;
  double t7733;
  double t7764;
  double t8026;
  double t8047;
  double t8054;
  double t8404;
  double t8428;
  double t8433;
  double t8572;
  double t8588;
  double t8609;
  double t8659;
  double t8664;
  double t8673;
  double t8691;
  double t8696;
  double t8697;
  double t8763;
  double t8767;
  double t8769;
  double t6064;
  double t8798;
  double t8812;
  double t8871;
  double t8878;
  double t8890;
  double t8996;
  double t8997;
  double t9065;
  double t9071;
  double t9073;
  double t9107;
  double t9112;
  double t8837;
  double t8900;
  double t8932;
  double t8934;
  double t8938;
  double t8952;
  double t8962;
  double t9136;
  double t9138;
  t907 = Sin(var1[3]);
  t2439 = Cos(var1[3]);
  t1984 = Cos(var1[5]);
  t2043 = Sin(var1[4]);
  t2706 = Sin(var1[5]);
  t1146 = Sin(var1[9]);
  t2376 = -1.*t1984*t907*t2043;
  t2783 = t2439*t2706;
  t2966 = t2376 + t2783;
  t3664 = Cos(var1[9]);
  t4149 = -1.*t2439*t1984;
  t4496 = -1.*t907*t2043*t2706;
  t5339 = t4149 + t4496;
  t409 = Cos(var1[10]);
  t860 = Cos(var1[4]);
  t6350 = Sin(var1[10]);
  t6532 = t3664*t2966;
  t6575 = -1.*t1146*t5339;
  t6584 = t6532 + t6575;
  t530 = -1.*t409;
  t645 = 1. + t530;
  t667 = 0.183*t645;
  t825 = 0. + t667;
  t1282 = -0.047*t1146;
  t1627 = 0. + t1282;
  t3703 = -1.*t3664;
  t3880 = 1. + t3703;
  t3955 = 0.047*t3880;
  t4041 = 0. + t3955;
  t7261 = t2439*t1984*t2043;
  t7312 = t907*t2706;
  t7329 = t7261 + t7312;
  t7454 = -1.*t1984*t907;
  t7474 = t2439*t2043*t2706;
  t7488 = t7454 + t7474;
  t6484 = 0.183*t6350;
  t6495 = 0. + t6484;
  t7721 = t3664*t7329;
  t7733 = -1.*t1146*t7488;
  t7764 = t7721 + t7733;
  t8026 = t3664*t2439*t860*t1984;
  t8047 = -1.*t2439*t860*t1146*t2706;
  t8054 = t8026 + t8047;
  t8404 = t3664*t860*t1984*t907;
  t8428 = -1.*t860*t1146*t907*t2706;
  t8433 = t8404 + t8428;
  t8572 = -1.*t3664*t1984*t2043;
  t8588 = t1146*t2043*t2706;
  t8609 = t8572 + t8588;
  t8659 = t1984*t907;
  t8664 = -1.*t2439*t2043*t2706;
  t8673 = t8659 + t8664;
  t8691 = -1.*t1146*t7329;
  t8696 = t3664*t8673;
  t8697 = t8691 + t8696;
  t8763 = t1984*t907*t2043;
  t8767 = -1.*t2439*t2706;
  t8769 = t8763 + t8767;
  t6064 = t3664*t5339;
  t8798 = -1.*t1146*t8769;
  t8812 = t8798 + t6064;
  t8871 = -1.*t860*t1984*t1146;
  t8878 = -1.*t3664*t860*t2706;
  t8890 = t8871 + t8878;
  t8996 = -1.*t3664*t7488;
  t8997 = t8691 + t8996;
  t9065 = t2439*t1984;
  t9071 = t907*t2043*t2706;
  t9073 = t9065 + t9071;
  t9107 = -1.*t3664*t9073;
  t9112 = t8798 + t9107;
  t8837 = t3664*t8769;
  t8900 = t6495*t8890;
  t8932 = -0.183*t6350*t8890;
  t8934 = t3664*t860*t1984;
  t8938 = -1.*t860*t1146*t2706;
  t8952 = t8934 + t8938;
  t8962 = 0.17458*t8952;
  t9136 = -1.*t1146*t9073;
  t9138 = t8837 + t9136;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1627*t2966 + t4041*t5339 + 0.17458*(t1146*t2966 + t6064) + t6495*t6584 - 1.*t825*t860*t907 + 0.183*(-1.*t6350*t6584 - 1.*t409*t860*t907);
  p_output1[10]=t1627*t7329 + t4041*t7488 + 0.17458*(t1146*t7329 + t3664*t7488) + t6495*t7764 + t2439*t825*t860 + 0.183*(-1.*t6350*t7764 + t2439*t409*t860);
  p_output1[11]=0;
  p_output1[12]=t6495*t8054 + 0.183*(-1.*t2043*t2439*t409 - 1.*t6350*t8054) - 1.*t2043*t2439*t825 + t1627*t1984*t2439*t860 + t2439*t2706*t4041*t860 + 0.17458*(t1146*t1984*t2439*t860 + t2439*t2706*t3664*t860);
  p_output1[13]=t6495*t8433 - 1.*t2043*t825*t907 + t1627*t1984*t860*t907 + t2706*t4041*t860*t907 + 0.183*(-1.*t6350*t8433 - 1.*t2043*t409*t907) + 0.17458*(t1146*t1984*t860*t907 + t2706*t3664*t860*t907);
  p_output1[14]=-1.*t1627*t1984*t2043 + 0.17458*(-1.*t1146*t1984*t2043 - 1.*t2043*t2706*t3664) - 1.*t2043*t2706*t4041 - 1.*t825*t860 + t6495*t8609 + 0.183*(-1.*t409*t860 - 1.*t6350*t8609);
  p_output1[15]=t4041*t7329 + t1627*t8673 + 0.17458*(t7721 + t1146*t8673) - 0.183*t6350*t8697 + t6495*t8697;
  p_output1[16]=t1627*t5339 + t4041*t8769 - 0.183*t6350*t8812 + t6495*t8812 + 0.17458*(t1146*t5339 + t8837);
  p_output1[17]=-1.*t1627*t2706*t860 + t1984*t4041*t860 + t8900 + t8932 + t8962;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=-0.047*t3664*t7329 + 0.047*t1146*t7488 + 0.17458*t7764 - 0.183*t6350*t8997 + t6495*t8997;
  p_output1[28]=-0.047*t3664*t8769 + 0.047*t1146*t9073 - 0.183*t6350*t9112 + t6495*t9112 + 0.17458*t9138;
  p_output1[29]=0.047*t1146*t2706*t860 - 0.047*t1984*t3664*t860 + t8900 + t8932 + t8962;
  p_output1[30]=0.183*t409*t7764 + 0.183*t2439*t6350*t860 + 0.183*(-1.*t409*t7764 - 1.*t2439*t6350*t860);
  p_output1[31]=0.183*t6350*t860*t907 + 0.183*t409*t9138 + 0.183*(-1.*t6350*t860*t907 - 1.*t409*t9138);
  p_output1[32]=-0.183*t2043*t6350 + 0.183*t409*t8952 + 0.183*(t2043*t6350 - 1.*t409*t8952);
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
