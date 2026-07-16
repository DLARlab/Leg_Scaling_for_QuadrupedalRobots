/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:50:47 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RR_hip_joint_src.h"

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
  double t1402;
  double t155;
  double t8216;
  double t4873;
  double t8242;
  double t8314;
  double t8239;
  double t8351;
  double t8248;
  double t8340;
  double t8342;
  double t8357;
  double t8364;
  double t8369;
  double t8377;
  double t8381;
  double t8385;
  double t8401;
  double t8404;
  double t8416;
  double t8345;
  double t8373;
  double t8376;
  double t8513;
  double t8517;
  double t8525;
  double t8529;
  double t8531;
  double t8532;
  double t8394;
  double t8425;
  double t8426;
  double t8433;
  double t8435;
  double t8436;
  t1402 = Cos(var1[4]);
  t155 = Cos(var1[3]);
  t8216 = Sin(var1[4]);
  t4873 = Sin(var1[3]);
  t8242 = Cos(var1[5]);
  t8314 = Sin(var1[5]);
  t8239 = Sin(var1[12]);
  t8351 = Cos(var1[12]);
  t8248 = t155*t8242*t8216;
  t8340 = t4873*t8314;
  t8342 = t8248 + t8340;
  t8357 = -1.*t8242*t4873;
  t8364 = t155*t8216*t8314;
  t8369 = t8357 + t8364;
  t8377 = t8242*t4873*t8216;
  t8381 = -1.*t155*t8314;
  t8385 = t8377 + t8381;
  t8401 = t155*t8242;
  t8404 = t4873*t8216*t8314;
  t8416 = t8401 + t8404;
  t8345 = t8239*t8342;
  t8373 = t8351*t8369;
  t8376 = t8345 + t8373;
  t8513 = 0.047*t8239;
  t8517 = 0. + t8513;
  t8525 = -1.*t8351;
  t8529 = 1. + t8525;
  t8531 = -0.047*t8529;
  t8532 = 0. + t8531;
  t8394 = t8239*t8385;
  t8425 = t8351*t8416;
  t8426 = t8394 + t8425;
  t8433 = t1402*t8242*t8239;
  t8435 = t8351*t1402*t8314;
  t8436 = t8433 + t8435;
  p_output1[0]=t1402*t155;
  p_output1[1]=t1402*t4873;
  p_output1[2]=-1.*t8216;
  p_output1[3]=0.;
  p_output1[4]=t8376;
  p_output1[5]=t8426;
  p_output1[6]=t8436;
  p_output1[7]=0.;
  p_output1[8]=t8342*t8351 - 1.*t8239*t8369;
  p_output1[9]=t8351*t8385 - 1.*t8239*t8416;
  p_output1[10]=-1.*t1402*t8239*t8314 + t1402*t8242*t8351;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.183*t1402*t155 - 0.047*t8376 + t8342*t8517 + t8369*t8532 + var1[0];
  p_output1[13]=0. - 0.183*t1402*t4873 - 0.047*t8426 + t8385*t8517 + t8416*t8532 + var1[1];
  p_output1[14]=0. + 0.183*t8216 - 0.047*t8436 + t1402*t8242*t8517 + t1402*t8314*t8532 + var1[2];
  p_output1[15]=1.;
}



void H_RR_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
