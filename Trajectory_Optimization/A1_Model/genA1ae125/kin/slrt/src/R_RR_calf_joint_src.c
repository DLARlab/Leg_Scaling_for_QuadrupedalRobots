/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:03:28 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RR_calf_joint_src.h"

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
  double t290;
  double t3241;
  double t4738;
  double t3291;
  double t4739;
  double t2661;
  double t1217;
  double t2527;
  double t3195;
  double t3330;
  double t6416;
  double t6543;
  double t6917;
  double t6936;
  double t7019;
  double t7031;
  double t7035;
  double t7075;
  double t7089;
  double t280;
  double t7130;
  double t7144;
  double t7147;
  double t7155;
  double t7156;
  double t7157;
  double t7159;
  double t7160;
  double t7161;
  double t7169;
  double t7212;
  double t7217;
  double t7220;
  double t2660;
  double t7095;
  double t7103;
  double t7132;
  double t7133;
  double t7134;
  double t7139;
  double t7187;
  double t7194;
  double t7199;
  double t7200;
  double t7201;
  double t7207;
  double t7222;
  double t7223;
  double t7228;
  double t7229;
  double t7230;
  t290 = Cos(var1[3]);
  t3241 = Cos(var1[5]);
  t4738 = Sin(var1[3]);
  t3291 = Sin(var1[4]);
  t4739 = Sin(var1[5]);
  t2661 = Cos(var1[13]);
  t1217 = Cos(var1[4]);
  t2527 = Sin(var1[13]);
  t3195 = Cos(var1[12]);
  t3330 = t290*t3241*t3291;
  t6416 = t4738*t4739;
  t6543 = t3330 + t6416;
  t6917 = t3195*t6543;
  t6936 = Sin(var1[12]);
  t7019 = -1.*t3241*t4738;
  t7031 = t290*t3291*t4739;
  t7035 = t7019 + t7031;
  t7075 = -1.*t6936*t7035;
  t7089 = t6917 + t7075;
  t280 = Sin(var1[14]);
  t7130 = Cos(var1[14]);
  t7144 = t3241*t4738*t3291;
  t7147 = -1.*t290*t4739;
  t7155 = t7144 + t7147;
  t7156 = t3195*t7155;
  t7157 = t290*t3241;
  t7159 = t4738*t3291*t4739;
  t7160 = t7157 + t7159;
  t7161 = -1.*t6936*t7160;
  t7169 = t7156 + t7161;
  t7212 = t3195*t1217*t3241;
  t7217 = -1.*t1217*t6936*t4739;
  t7220 = t7212 + t7217;
  t2660 = t290*t1217*t2527;
  t7095 = t2661*t7089;
  t7103 = t2660 + t7095;
  t7132 = t2661*t290*t1217;
  t7133 = -1.*t2527*t7089;
  t7134 = t7132 + t7133;
  t7139 = t1217*t2527*t4738;
  t7187 = t2661*t7169;
  t7194 = t7139 + t7187;
  t7199 = t2661*t1217*t4738;
  t7200 = -1.*t2527*t7169;
  t7201 = t7199 + t7200;
  t7207 = -1.*t2527*t3291;
  t7222 = t2661*t7220;
  t7223 = t7207 + t7222;
  t7228 = -1.*t2661*t3291;
  t7229 = -1.*t2527*t7220;
  t7230 = t7228 + t7229;
  p_output1[0]=-1.*t280*t7103 + t7130*t7134;
  p_output1[1]=-1.*t280*t7194 + t7130*t7201;
  p_output1[2]=-1.*t280*t7223 + t7130*t7230;
  p_output1[3]=t6543*t6936 + t3195*t7035;
  p_output1[4]=t6936*t7155 + t3195*t7160;
  p_output1[5]=t1217*t3195*t4739 + t1217*t3241*t6936;
  p_output1[6]=t7103*t7130 + t280*t7134;
  p_output1[7]=t7130*t7194 + t280*t7201;
  p_output1[8]=t7130*t7223 + t280*t7230;
}



void R_RR_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
