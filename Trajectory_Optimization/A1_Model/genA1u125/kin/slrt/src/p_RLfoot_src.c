/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:20:53 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RLfoot_src.h"

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
  double t2780;
  double t4729;
  double t4878;
  double t4826;
  double t4915;
  double t4278;
  double t4873;
  double t4917;
  double t4952;
  double t4990;
  double t5028;
  double t5030;
  double t5051;
  double t3357;
  double t5144;
  double t481;
  double t5160;
  double t5173;
  double t5181;
  double t5209;
  double t5213;
  double t5214;
  double t5232;
  double t5253;
  double t5257;
  double t5267;
  double t5375;
  double t5395;
  double t5400;
  double t626;
  double t1498;
  double t1510;
  double t2644;
  double t4325;
  double t4419;
  double t5002;
  double t5010;
  double t5016;
  double t5025;
  double t5631;
  double t5697;
  double t5715;
  double t5752;
  double t5763;
  double t5780;
  double t5151;
  double t5157;
  double t5216;
  double t5238;
  double t5248;
  double t5839;
  double t5844;
  double t5856;
  double t5295;
  double t5353;
  double t5355;
  double t5936;
  double t5972;
  double t5976;
  double t5979;
  double t5981;
  double t5986;
  double t6274;
  double t6280;
  double t6290;
  double t6345;
  double t6350;
  double t6361;
  double t6388;
  double t6470;
  double t6483;
  t2780 = Cos(var1[3]);
  t4729 = Cos(var1[5]);
  t4878 = Sin(var1[3]);
  t4826 = Sin(var1[4]);
  t4915 = Sin(var1[5]);
  t4278 = Sin(var1[15]);
  t4873 = t2780*t4729*t4826;
  t4917 = t4878*t4915;
  t4952 = t4873 + t4917;
  t4990 = Cos(var1[15]);
  t5028 = -1.*t4729*t4878;
  t5030 = t2780*t4826*t4915;
  t5051 = t5028 + t5030;
  t3357 = Cos(var1[4]);
  t5144 = Sin(var1[16]);
  t481 = Cos(var1[16]);
  t5160 = t4990*t4952;
  t5173 = -1.*t4278*t5051;
  t5181 = t5160 + t5173;
  t5209 = Cos(var1[17]);
  t5213 = -1.*t5209;
  t5214 = 1. + t5213;
  t5232 = Sin(var1[17]);
  t5253 = t2780*t3357*t5144;
  t5257 = t481*t5181;
  t5267 = t5253 + t5257;
  t5375 = t481*t2780*t3357;
  t5395 = -1.*t5144*t5181;
  t5400 = t5375 + t5395;
  t626 = -1.*t481;
  t1498 = 1. + t626;
  t1510 = -0.183*t1498;
  t2644 = 0. + t1510;
  t4325 = -0.047*t4278;
  t4419 = 0. + t4325;
  t5002 = -1.*t4990;
  t5010 = 1. + t5002;
  t5016 = 0.047*t5010;
  t5025 = 0. + t5016;
  t5631 = t4729*t4878*t4826;
  t5697 = -1.*t2780*t4915;
  t5715 = t5631 + t5697;
  t5752 = t2780*t4729;
  t5763 = t4878*t4826*t4915;
  t5780 = t5752 + t5763;
  t5151 = -0.183*t5144;
  t5157 = 0. + t5151;
  t5216 = -0.25*t5214;
  t5238 = -0.183*t5232;
  t5248 = 0. + t5216 + t5238;
  t5839 = t4990*t5715;
  t5844 = -1.*t4278*t5780;
  t5856 = t5839 + t5844;
  t5295 = -0.183*t5214;
  t5353 = 0.25*t5232;
  t5355 = 0. + t5295 + t5353;
  t5936 = t3357*t5144*t4878;
  t5972 = t481*t5856;
  t5976 = t5936 + t5972;
  t5979 = t481*t3357*t4878;
  t5981 = -1.*t5144*t5856;
  t5986 = t5979 + t5981;
  t6274 = t4990*t3357*t4729;
  t6280 = -1.*t3357*t4278*t4915;
  t6290 = t6274 + t6280;
  t6345 = -1.*t5144*t4826;
  t6350 = t481*t6290;
  t6361 = t6345 + t6350;
  t6388 = -1.*t481*t4826;
  t6470 = -1.*t5144*t6290;
  t6483 = t6388 + t6470;
  p_output1[0]=0. + t2644*t2780*t3357 + t4419*t4952 + t5025*t5051 + 0.15331*(t4278*t4952 + t4990*t5051) + t5157*t5181 + t5248*t5267 + t5355*t5400 - 0.183*(-1.*t5232*t5267 + t5209*t5400) - 0.5*(t5209*t5267 + t5232*t5400) + var1[0];
  p_output1[1]=0. + t2644*t3357*t4878 + t4419*t5715 + t5025*t5780 + 0.15331*(t4278*t5715 + t4990*t5780) + t5157*t5856 + t5248*t5976 + t5355*t5986 - 0.183*(-1.*t5232*t5976 + t5209*t5986) - 0.5*(t5209*t5976 + t5232*t5986) + var1[1];
  p_output1[2]=0. + t3357*t4419*t4729 - 1.*t2644*t4826 + 0.15331*(t3357*t4278*t4729 + t3357*t4915*t4990) + t3357*t4915*t5025 + t5157*t6290 + t5248*t6361 + t5355*t6483 - 0.183*(-1.*t5232*t6361 + t5209*t6483) - 0.5*(t5209*t6361 + t5232*t6483) + var1[2];
}



void p_RLfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
