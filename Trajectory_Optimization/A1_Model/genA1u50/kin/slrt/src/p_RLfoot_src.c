/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:13:12 GMT-05:00
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
  double t3424;
  double t7220;
  double t7227;
  double t7221;
  double t7228;
  double t7194;
  double t7222;
  double t7230;
  double t7233;
  double t7237;
  double t7245;
  double t7248;
  double t7256;
  double t3854;
  double t7266;
  double t1009;
  double t7269;
  double t7272;
  double t7273;
  double t7275;
  double t7276;
  double t7277;
  double t7279;
  double t7283;
  double t7284;
  double t7286;
  double t7294;
  double t7295;
  double t7296;
  double t1502;
  double t2560;
  double t3043;
  double t3057;
  double t7201;
  double t7215;
  double t7238;
  double t7240;
  double t7242;
  double t7244;
  double t7313;
  double t7314;
  double t7315;
  double t7317;
  double t7318;
  double t7319;
  double t7267;
  double t7268;
  double t7278;
  double t7281;
  double t7282;
  double t7325;
  double t7326;
  double t7329;
  double t7288;
  double t7289;
  double t7293;
  double t7333;
  double t7337;
  double t7338;
  double t7340;
  double t7341;
  double t7342;
  double t7360;
  double t7361;
  double t7362;
  double t7364;
  double t7365;
  double t7366;
  double t7368;
  double t7369;
  double t7370;
  t3424 = Cos(var1[3]);
  t7220 = Cos(var1[5]);
  t7227 = Sin(var1[3]);
  t7221 = Sin(var1[4]);
  t7228 = Sin(var1[5]);
  t7194 = Sin(var1[15]);
  t7222 = t3424*t7220*t7221;
  t7230 = t7227*t7228;
  t7233 = t7222 + t7230;
  t7237 = Cos(var1[15]);
  t7245 = -1.*t7220*t7227;
  t7248 = t3424*t7221*t7228;
  t7256 = t7245 + t7248;
  t3854 = Cos(var1[4]);
  t7266 = Sin(var1[16]);
  t1009 = Cos(var1[16]);
  t7269 = t7237*t7233;
  t7272 = -1.*t7194*t7256;
  t7273 = t7269 + t7272;
  t7275 = Cos(var1[17]);
  t7276 = -1.*t7275;
  t7277 = 1. + t7276;
  t7279 = Sin(var1[17]);
  t7283 = t3424*t3854*t7266;
  t7284 = t1009*t7273;
  t7286 = t7283 + t7284;
  t7294 = t1009*t3424*t3854;
  t7295 = -1.*t7266*t7273;
  t7296 = t7294 + t7295;
  t1502 = -1.*t1009;
  t2560 = 1. + t1502;
  t3043 = -0.183*t2560;
  t3057 = 0. + t3043;
  t7201 = -0.047*t7194;
  t7215 = 0. + t7201;
  t7238 = -1.*t7237;
  t7240 = 1. + t7238;
  t7242 = 0.047*t7240;
  t7244 = 0. + t7242;
  t7313 = t7220*t7227*t7221;
  t7314 = -1.*t3424*t7228;
  t7315 = t7313 + t7314;
  t7317 = t3424*t7220;
  t7318 = t7227*t7221*t7228;
  t7319 = t7317 + t7318;
  t7267 = -0.183*t7266;
  t7268 = 0. + t7267;
  t7278 = -0.1*t7277;
  t7281 = -0.183*t7279;
  t7282 = 0. + t7278 + t7281;
  t7325 = t7237*t7315;
  t7326 = -1.*t7194*t7319;
  t7329 = t7325 + t7326;
  t7288 = -0.183*t7277;
  t7289 = 0.1*t7279;
  t7293 = 0. + t7288 + t7289;
  t7333 = t3854*t7266*t7227;
  t7337 = t1009*t7329;
  t7338 = t7333 + t7337;
  t7340 = t1009*t3854*t7227;
  t7341 = -1.*t7266*t7329;
  t7342 = t7340 + t7341;
  t7360 = t7237*t3854*t7220;
  t7361 = -1.*t3854*t7194*t7228;
  t7362 = t7360 + t7361;
  t7364 = -1.*t7266*t7221;
  t7365 = t1009*t7362;
  t7366 = t7364 + t7365;
  t7368 = -1.*t1009*t7221;
  t7369 = -1.*t7266*t7362;
  t7370 = t7368 + t7369;
  p_output1[0]=0. + t3057*t3424*t3854 + t7215*t7233 + t7244*t7256 + 0.08953*(t7194*t7233 + t7237*t7256) + t7268*t7273 + t7282*t7286 + t7293*t7296 - 0.183*(-1.*t7279*t7286 + t7275*t7296) - 0.2*(t7275*t7286 + t7279*t7296) + var1[0];
  p_output1[1]=0. + t3057*t3854*t7227 + t7215*t7315 + t7244*t7319 + 0.08953*(t7194*t7315 + t7237*t7319) + t7268*t7329 + t7282*t7338 + t7293*t7342 - 0.183*(-1.*t7279*t7338 + t7275*t7342) - 0.2*(t7275*t7338 + t7279*t7342) + var1[1];
  p_output1[2]=0. + t3854*t7215*t7220 - 1.*t3057*t7221 + 0.08953*(t3854*t7194*t7220 + t3854*t7228*t7237) + t3854*t7228*t7244 + t7268*t7362 + t7282*t7366 + t7293*t7370 - 0.183*(-1.*t7279*t7366 + t7275*t7370) - 0.2*(t7275*t7366 + t7279*t7370) + var1[2];
}



void p_RLfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
