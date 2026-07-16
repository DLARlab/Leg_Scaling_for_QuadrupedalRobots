/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:18:22 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RLfoot_src.h"

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
  double t322;
  double t1039;
  double t1445;
  double t1244;
  double t1701;
  double t789;
  double t393;
  double t492;
  double t1006;
  double t1316;
  double t1707;
  double t1720;
  double t1722;
  double t1772;
  double t1812;
  double t1821;
  double t1837;
  double t1842;
  double t2117;
  double t135;
  double t2286;
  double t3220;
  double t3236;
  double t3240;
  double t3275;
  double t3279;
  double t3297;
  double t3316;
  double t3353;
  double t3358;
  double t3729;
  double t3849;
  double t3852;
  double t661;
  double t2194;
  double t2221;
  double t2367;
  double t2427;
  double t2695;
  double t3218;
  double t3375;
  double t3380;
  double t3447;
  double t3461;
  double t3464;
  double t3675;
  double t3870;
  double t4050;
  double t4086;
  double t4118;
  double t4148;
  double t4187;
  double t4274;
  double t4361;
  double t5115;
  double t5126;
  double t2263;
  double t3089;
  double t3104;
  double t4574;
  double t4621;
  double t4629;
  double t4886;
  double t4892;
  double t4893;
  double t4896;
  double t4911;
  double t4912;
  double t4951;
  double t4953;
  double t4954;
  double t5058;
  double t4383;
  double t4404;
  double t4435;
  double t5079;
  double t5099;
  double t5134;
  double t5152;
  double t5183;
  double t5221;
  double t5292;
  double t5332;
  double t3439;
  double t3525;
  double t3548;
  double t4640;
  double t4643;
  double t4689;
  double t4437;
  double t4492;
  double t4516;
  double t4064;
  double t4165;
  double t4167;
  double t4762;
  double t4837;
  double t4860;
  t322 = Cos(var1[3]);
  t1039 = Cos(var1[5]);
  t1445 = Sin(var1[3]);
  t1244 = Sin(var1[4]);
  t1701 = Sin(var1[5]);
  t789 = Cos(var1[16]);
  t393 = Cos(var1[4]);
  t492 = Sin(var1[16]);
  t1006 = Cos(var1[15]);
  t1316 = t322*t1039*t1244;
  t1707 = t1445*t1701;
  t1720 = t1316 + t1707;
  t1722 = t1006*t1720;
  t1772 = Sin(var1[15]);
  t1812 = -1.*t1039*t1445;
  t1821 = t322*t1244*t1701;
  t1837 = t1812 + t1821;
  t1842 = -1.*t1772*t1837;
  t2117 = t1722 + t1842;
  t135 = Sin(var1[17]);
  t2286 = Cos(var1[17]);
  t3220 = t1039*t1445*t1244;
  t3236 = -1.*t322*t1701;
  t3240 = t3220 + t3236;
  t3275 = t1006*t3240;
  t3279 = t322*t1039;
  t3297 = t1445*t1244*t1701;
  t3316 = t3279 + t3297;
  t3353 = -1.*t1772*t3316;
  t3358 = t3275 + t3353;
  t3729 = t1006*t393*t1039;
  t3849 = -1.*t393*t1772*t1701;
  t3852 = t3729 + t3849;
  t661 = t322*t393*t492;
  t2194 = t789*t2117;
  t2221 = t661 + t2194;
  t2367 = t789*t322*t393;
  t2427 = -1.*t492*t2117;
  t2695 = t2367 + t2427;
  t3218 = t393*t492*t1445;
  t3375 = t789*t3358;
  t3380 = t3218 + t3375;
  t3447 = t789*t393*t1445;
  t3461 = -1.*t492*t3358;
  t3464 = t3447 + t3461;
  t3675 = -1.*t492*t1244;
  t3870 = t789*t3852;
  t4050 = t3675 + t3870;
  t4086 = -1.*t789*t1244;
  t4118 = -1.*t492*t3852;
  t4148 = t4086 + t4118;
  t4187 = t1772*t1720;
  t4274 = t1006*t1837;
  t4361 = t4187 + t4274;
  t5115 = -1.*t2286;
  t5126 = 1. + t5115;
  t2263 = -1.*t135*t2221;
  t3089 = t2286*t2695;
  t3104 = t2263 + t3089;
  t4574 = t2286*t2221;
  t4621 = t135*t2695;
  t4629 = t4574 + t4621;
  t4886 = -1.*t789;
  t4892 = 1. + t4886;
  t4893 = -0.183*t4892;
  t4896 = 0. + t4893;
  t4911 = -0.047*t1772;
  t4912 = 0. + t4911;
  t4951 = -1.*t1006;
  t4953 = 1. + t4951;
  t4954 = 0.047*t4953;
  t5058 = 0. + t4954;
  t4383 = t1772*t3240;
  t4404 = t1006*t3316;
  t4435 = t4383 + t4404;
  t5079 = -0.183*t492;
  t5099 = 0. + t5079;
  t5134 = -0.15*t5126;
  t5152 = -0.183*t135;
  t5183 = 0. + t5134 + t5152;
  t5221 = -0.183*t5126;
  t5292 = 0.15*t135;
  t5332 = 0. + t5221 + t5292;
  t3439 = -1.*t135*t3380;
  t3525 = t2286*t3464;
  t3548 = t3439 + t3525;
  t4640 = t2286*t3380;
  t4643 = t135*t3464;
  t4689 = t4640 + t4643;
  t4437 = t393*t1039*t1772;
  t4492 = t1006*t393*t1701;
  t4516 = t4437 + t4492;
  t4064 = -1.*t135*t4050;
  t4165 = t2286*t4148;
  t4167 = t4064 + t4165;
  t4762 = t2286*t4050;
  t4837 = t135*t4148;
  t4860 = t4762 + t4837;
  p_output1[0]=t3104;
  p_output1[1]=t3548;
  p_output1[2]=t4167;
  p_output1[3]=0.;
  p_output1[4]=t4361;
  p_output1[5]=t4435;
  p_output1[6]=t4516;
  p_output1[7]=0.;
  p_output1[8]=t4629;
  p_output1[9]=t4689;
  p_output1[10]=t4860;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.183*t3104 + 0.11079*t4361 - 0.3*t4629 + t322*t393*t4896 + t1720*t4912 + t1837*t5058 + t2117*t5099 + t2221*t5183 + t2695*t5332 + var1[0];
  p_output1[13]=0. - 0.183*t3548 + 0.11079*t4435 - 0.3*t4689 + t1445*t393*t4896 + t3240*t4912 + t3316*t5058 + t3358*t5099 + t3380*t5183 + t3464*t5332 + var1[1];
  p_output1[14]=0. - 0.183*t4167 + 0.11079*t4516 - 0.3*t4860 - 1.*t1244*t4896 + t1039*t393*t4912 + t1701*t393*t5058 + t3852*t5099 + t4050*t5183 + t4148*t5332 + var1[2];
  p_output1[15]=1.;
}



void H_RLfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
