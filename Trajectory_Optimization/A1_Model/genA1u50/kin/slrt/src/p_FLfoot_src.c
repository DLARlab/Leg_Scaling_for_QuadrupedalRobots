/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:13:08 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FLfoot_src.h"

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
  double t6062;
  double t6075;
  double t6080;
  double t6077;
  double t6081;
  double t6069;
  double t6079;
  double t6082;
  double t6083;
  double t6086;
  double t6097;
  double t6098;
  double t6099;
  double t6065;
  double t6108;
  double t211;
  double t6111;
  double t6112;
  double t6113;
  double t6115;
  double t6116;
  double t6117;
  double t6119;
  double t6123;
  double t6124;
  double t6126;
  double t6131;
  double t6134;
  double t6135;
  double t784;
  double t6027;
  double t6047;
  double t6059;
  double t6070;
  double t6074;
  double t6087;
  double t6090;
  double t6094;
  double t6096;
  double t6150;
  double t6151;
  double t6152;
  double t6154;
  double t6155;
  double t6156;
  double t6109;
  double t6110;
  double t6118;
  double t6121;
  double t6122;
  double t6166;
  double t6170;
  double t6171;
  double t6128;
  double t6129;
  double t6130;
  double t6173;
  double t6174;
  double t6175;
  double t6177;
  double t6178;
  double t6179;
  double t6197;
  double t6198;
  double t6199;
  double t6201;
  double t6202;
  double t6203;
  double t6205;
  double t6206;
  double t6207;
  t6062 = Cos(var1[3]);
  t6075 = Cos(var1[5]);
  t6080 = Sin(var1[3]);
  t6077 = Sin(var1[4]);
  t6081 = Sin(var1[5]);
  t6069 = Sin(var1[9]);
  t6079 = t6062*t6075*t6077;
  t6082 = t6080*t6081;
  t6083 = t6079 + t6082;
  t6086 = Cos(var1[9]);
  t6097 = -1.*t6075*t6080;
  t6098 = t6062*t6077*t6081;
  t6099 = t6097 + t6098;
  t6065 = Cos(var1[4]);
  t6108 = Sin(var1[10]);
  t211 = Cos(var1[10]);
  t6111 = t6086*t6083;
  t6112 = -1.*t6069*t6099;
  t6113 = t6111 + t6112;
  t6115 = Cos(var1[11]);
  t6116 = -1.*t6115;
  t6117 = 1. + t6116;
  t6119 = Sin(var1[11]);
  t6123 = t6062*t6065*t6108;
  t6124 = t211*t6113;
  t6126 = t6123 + t6124;
  t6131 = t211*t6062*t6065;
  t6134 = -1.*t6108*t6113;
  t6135 = t6131 + t6134;
  t784 = -1.*t211;
  t6027 = 1. + t784;
  t6047 = 0.183*t6027;
  t6059 = 0. + t6047;
  t6070 = -0.047*t6069;
  t6074 = 0. + t6070;
  t6087 = -1.*t6086;
  t6090 = 1. + t6087;
  t6094 = 0.047*t6090;
  t6096 = 0. + t6094;
  t6150 = t6075*t6080*t6077;
  t6151 = -1.*t6062*t6081;
  t6152 = t6150 + t6151;
  t6154 = t6062*t6075;
  t6155 = t6080*t6077*t6081;
  t6156 = t6154 + t6155;
  t6109 = 0.183*t6108;
  t6110 = 0. + t6109;
  t6118 = -0.1*t6117;
  t6121 = 0.183*t6119;
  t6122 = 0. + t6118 + t6121;
  t6166 = t6086*t6152;
  t6170 = -1.*t6069*t6156;
  t6171 = t6166 + t6170;
  t6128 = 0.183*t6117;
  t6129 = 0.1*t6119;
  t6130 = 0. + t6128 + t6129;
  t6173 = t6065*t6108*t6080;
  t6174 = t211*t6171;
  t6175 = t6173 + t6174;
  t6177 = t211*t6065*t6080;
  t6178 = -1.*t6108*t6171;
  t6179 = t6177 + t6178;
  t6197 = t6086*t6065*t6075;
  t6198 = -1.*t6065*t6069*t6081;
  t6199 = t6197 + t6198;
  t6201 = -1.*t6108*t6077;
  t6202 = t211*t6199;
  t6203 = t6201 + t6202;
  t6205 = -1.*t211*t6077;
  t6206 = -1.*t6108*t6199;
  t6207 = t6205 + t6206;
  p_output1[0]=0. + t6059*t6062*t6065 + t6074*t6083 + t6096*t6099 + 0.08953*(t6069*t6083 + t6086*t6099) + t6110*t6113 + t6122*t6126 + t6130*t6135 + 0.183*(-1.*t6119*t6126 + t6115*t6135) - 0.2*(t6115*t6126 + t6119*t6135) + var1[0];
  p_output1[1]=0. + t6059*t6065*t6080 + t6074*t6152 + t6096*t6156 + 0.08953*(t6069*t6152 + t6086*t6156) + t6110*t6171 + t6122*t6175 + t6130*t6179 + 0.183*(-1.*t6119*t6175 + t6115*t6179) - 0.2*(t6115*t6175 + t6119*t6179) + var1[1];
  p_output1[2]=0. + t6065*t6074*t6075 - 1.*t6059*t6077 + 0.08953*(t6065*t6069*t6075 + t6065*t6081*t6086) + t6065*t6081*t6096 + t6110*t6199 + t6122*t6203 + t6130*t6207 + 0.183*(-1.*t6119*t6203 + t6115*t6207) - 0.2*(t6115*t6203 + t6119*t6207) + var1[2];
}



void p_FLfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
