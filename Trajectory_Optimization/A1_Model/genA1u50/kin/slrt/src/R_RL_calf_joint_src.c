/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:13:05 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RL_calf_joint_src.h"

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
  double t5191;
  double t5263;
  double t5266;
  double t5264;
  double t5267;
  double t5225;
  double t5192;
  double t5213;
  double t5254;
  double t5265;
  double t5268;
  double t5269;
  double t5271;
  double t5273;
  double t5274;
  double t5275;
  double t5276;
  double t5278;
  double t5281;
  double t5168;
  double t5287;
  double t5294;
  double t5295;
  double t5296;
  double t5297;
  double t5298;
  double t5299;
  double t5300;
  double t5303;
  double t5304;
  double t5315;
  double t5317;
  double t5318;
  double t5222;
  double t5282;
  double t5283;
  double t5288;
  double t5289;
  double t5290;
  double t5293;
  double t5305;
  double t5306;
  double t5308;
  double t5309;
  double t5311;
  double t5314;
  double t5319;
  double t5322;
  double t5325;
  double t5326;
  double t5327;
  t5191 = Cos(var1[3]);
  t5263 = Cos(var1[5]);
  t5266 = Sin(var1[3]);
  t5264 = Sin(var1[4]);
  t5267 = Sin(var1[5]);
  t5225 = Cos(var1[16]);
  t5192 = Cos(var1[4]);
  t5213 = Sin(var1[16]);
  t5254 = Cos(var1[15]);
  t5265 = t5191*t5263*t5264;
  t5268 = t5266*t5267;
  t5269 = t5265 + t5268;
  t5271 = t5254*t5269;
  t5273 = Sin(var1[15]);
  t5274 = -1.*t5263*t5266;
  t5275 = t5191*t5264*t5267;
  t5276 = t5274 + t5275;
  t5278 = -1.*t5273*t5276;
  t5281 = t5271 + t5278;
  t5168 = Sin(var1[17]);
  t5287 = Cos(var1[17]);
  t5294 = t5263*t5266*t5264;
  t5295 = -1.*t5191*t5267;
  t5296 = t5294 + t5295;
  t5297 = t5254*t5296;
  t5298 = t5191*t5263;
  t5299 = t5266*t5264*t5267;
  t5300 = t5298 + t5299;
  t5303 = -1.*t5273*t5300;
  t5304 = t5297 + t5303;
  t5315 = t5254*t5192*t5263;
  t5317 = -1.*t5192*t5273*t5267;
  t5318 = t5315 + t5317;
  t5222 = t5191*t5192*t5213;
  t5282 = t5225*t5281;
  t5283 = t5222 + t5282;
  t5288 = t5225*t5191*t5192;
  t5289 = -1.*t5213*t5281;
  t5290 = t5288 + t5289;
  t5293 = t5192*t5213*t5266;
  t5305 = t5225*t5304;
  t5306 = t5293 + t5305;
  t5308 = t5225*t5192*t5266;
  t5309 = -1.*t5213*t5304;
  t5311 = t5308 + t5309;
  t5314 = -1.*t5213*t5264;
  t5319 = t5225*t5318;
  t5322 = t5314 + t5319;
  t5325 = -1.*t5225*t5264;
  t5326 = -1.*t5213*t5318;
  t5327 = t5325 + t5326;
  p_output1[0]=-1.*t5168*t5283 + t5287*t5290;
  p_output1[1]=-1.*t5168*t5306 + t5287*t5311;
  p_output1[2]=-1.*t5168*t5322 + t5287*t5327;
  p_output1[3]=t5269*t5273 + t5254*t5276;
  p_output1[4]=t5273*t5296 + t5254*t5300;
  p_output1[5]=t5192*t5254*t5267 + t5192*t5263*t5273;
  p_output1[6]=t5283*t5287 + t5168*t5290;
  p_output1[7]=t5287*t5306 + t5168*t5311;
  p_output1[8]=t5287*t5322 + t5168*t5327;
}



void R_RL_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
