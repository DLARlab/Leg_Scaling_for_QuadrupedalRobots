/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:10:02 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FL_thigh_joint_src.h"

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
  double t6016;
  double t6152;
  double t6178;
  double t6174;
  double t6183;
  double t6039;
  double t6175;
  double t6184;
  double t6188;
  double t6191;
  double t6214;
  double t6216;
  double t6217;
  double t3916;
  double t6025;
  double t6239;
  double t6243;
  double t6245;
  double t6251;
  double t5794;
  double t5953;
  double t5992;
  double t5995;
  double t6097;
  double t6112;
  double t6206;
  double t6207;
  double t6208;
  double t6211;
  double t6301;
  double t6307;
  double t6314;
  double t6323;
  double t6326;
  double t6327;
  double t6240;
  double t6242;
  double t6353;
  double t6355;
  double t6361;
  double t6406;
  double t6408;
  double t6413;
  t6016 = Cos(var1[3]);
  t6152 = Cos(var1[5]);
  t6178 = Sin(var1[3]);
  t6174 = Sin(var1[4]);
  t6183 = Sin(var1[5]);
  t6039 = Sin(var1[9]);
  t6175 = t6016*t6152*t6174;
  t6184 = t6178*t6183;
  t6188 = t6175 + t6184;
  t6191 = Cos(var1[9]);
  t6214 = -1.*t6152*t6178;
  t6216 = t6016*t6174*t6183;
  t6217 = t6214 + t6216;
  t3916 = Cos(var1[10]);
  t6025 = Cos(var1[4]);
  t6239 = Sin(var1[10]);
  t6243 = t6191*t6188;
  t6245 = -1.*t6039*t6217;
  t6251 = t6243 + t6245;
  t5794 = -1.*t3916;
  t5953 = 1. + t5794;
  t5992 = 0.183*t5953;
  t5995 = 0. + t5992;
  t6097 = -0.047*t6039;
  t6112 = 0. + t6097;
  t6206 = -1.*t6191;
  t6207 = 1. + t6206;
  t6208 = 0.047*t6207;
  t6211 = 0. + t6208;
  t6301 = t6152*t6178*t6174;
  t6307 = -1.*t6016*t6183;
  t6314 = t6301 + t6307;
  t6323 = t6016*t6152;
  t6326 = t6178*t6174*t6183;
  t6327 = t6323 + t6326;
  t6240 = 0.183*t6239;
  t6242 = 0. + t6240;
  t6353 = t6191*t6314;
  t6355 = -1.*t6039*t6327;
  t6361 = t6353 + t6355;
  t6406 = t6191*t6025*t6152;
  t6408 = -1.*t6025*t6039*t6183;
  t6413 = t6406 + t6408;
  p_output1[0]=0. + t5995*t6016*t6025 + t6112*t6188 + t6211*t6217 + 0.13205*(t6039*t6188 + t6191*t6217) + t6242*t6251 + 0.183*(t3916*t6016*t6025 - 1.*t6239*t6251) + var1[0];
  p_output1[1]=0. + t5995*t6025*t6178 + t6112*t6314 + t6211*t6327 + 0.13205*(t6039*t6314 + t6191*t6327) + t6242*t6361 + 0.183*(t3916*t6025*t6178 - 1.*t6239*t6361) + var1[1];
  p_output1[2]=0. + t6025*t6112*t6152 - 1.*t5995*t6174 + 0.13205*(t6025*t6039*t6152 + t6025*t6183*t6191) + t6025*t6183*t6211 + t6242*t6413 + 0.183*(-1.*t3916*t6174 - 1.*t6239*t6413) + var1[2];
}



void p_FL_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
