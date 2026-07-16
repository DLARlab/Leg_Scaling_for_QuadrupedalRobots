/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:10:06 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_FL_calf_joint_src.h"

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
  double t2680;
  double t7213;
  double t7254;
  double t7243;
  double t7255;
  double t7160;
  double t5550;
  double t6019;
  double t7166;
  double t7248;
  double t7257;
  double t7259;
  double t7271;
  double t7278;
  double t7299;
  double t7302;
  double t7306;
  double t7317;
  double t7319;
  double t2649;
  double t7324;
  double t7349;
  double t7350;
  double t7351;
  double t7357;
  double t7384;
  double t7385;
  double t7386;
  double t7387;
  double t7388;
  double t7402;
  double t7404;
  double t7409;
  double t7109;
  double t7320;
  double t7322;
  double t7325;
  double t7326;
  double t7329;
  double t7339;
  double t7389;
  double t7390;
  double t7392;
  double t7393;
  double t7394;
  double t7397;
  double t7411;
  double t7420;
  double t7425;
  double t7454;
  double t7458;
  t2680 = Cos(var1[3]);
  t7213 = Cos(var1[5]);
  t7254 = Sin(var1[3]);
  t7243 = Sin(var1[4]);
  t7255 = Sin(var1[5]);
  t7160 = Cos(var1[10]);
  t5550 = Cos(var1[4]);
  t6019 = Sin(var1[10]);
  t7166 = Cos(var1[9]);
  t7248 = t2680*t7213*t7243;
  t7257 = t7254*t7255;
  t7259 = t7248 + t7257;
  t7271 = t7166*t7259;
  t7278 = Sin(var1[9]);
  t7299 = -1.*t7213*t7254;
  t7302 = t2680*t7243*t7255;
  t7306 = t7299 + t7302;
  t7317 = -1.*t7278*t7306;
  t7319 = t7271 + t7317;
  t2649 = Sin(var1[11]);
  t7324 = Cos(var1[11]);
  t7349 = t7213*t7254*t7243;
  t7350 = -1.*t2680*t7255;
  t7351 = t7349 + t7350;
  t7357 = t7166*t7351;
  t7384 = t2680*t7213;
  t7385 = t7254*t7243*t7255;
  t7386 = t7384 + t7385;
  t7387 = -1.*t7278*t7386;
  t7388 = t7357 + t7387;
  t7402 = t7166*t5550*t7213;
  t7404 = -1.*t5550*t7278*t7255;
  t7409 = t7402 + t7404;
  t7109 = t2680*t5550*t6019;
  t7320 = t7160*t7319;
  t7322 = t7109 + t7320;
  t7325 = t7160*t2680*t5550;
  t7326 = -1.*t6019*t7319;
  t7329 = t7325 + t7326;
  t7339 = t5550*t6019*t7254;
  t7389 = t7160*t7388;
  t7390 = t7339 + t7389;
  t7392 = t7160*t5550*t7254;
  t7393 = -1.*t6019*t7388;
  t7394 = t7392 + t7393;
  t7397 = -1.*t6019*t7243;
  t7411 = t7160*t7409;
  t7420 = t7397 + t7411;
  t7425 = -1.*t7160*t7243;
  t7454 = -1.*t6019*t7409;
  t7458 = t7425 + t7454;
  p_output1[0]=-1.*t2649*t7322 + t7324*t7329;
  p_output1[1]=-1.*t2649*t7390 + t7324*t7394;
  p_output1[2]=-1.*t2649*t7420 + t7324*t7458;
  p_output1[3]=t7259*t7278 + t7166*t7306;
  p_output1[4]=t7278*t7351 + t7166*t7386;
  p_output1[5]=t5550*t7166*t7255 + t5550*t7213*t7278;
  p_output1[6]=t7322*t7324 + t2649*t7329;
  p_output1[7]=t7324*t7390 + t2649*t7394;
  p_output1[8]=t7324*t7420 + t2649*t7458;
}



void R_FL_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
