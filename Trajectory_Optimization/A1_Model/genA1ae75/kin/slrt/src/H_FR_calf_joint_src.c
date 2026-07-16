/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:50:37 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FR_calf_joint_src.h"

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
  double t1436;
  double t2435;
  double t2995;
  double t2548;
  double t3320;
  double t2358;
  double t2408;
  double t2964;
  double t5402;
  double t5425;
  double t6646;
  double t6988;
  double t8337;
  double t8467;
  double t8468;
  double t8636;
  double t8675;
  double t2312;
  double t8713;
  double t169;
  double t9092;
  double t9145;
  double t9149;
  double t9177;
  double t9189;
  double t9199;
  double t9203;
  double t9204;
  double t9205;
  double t8990;
  double t9251;
  double t9252;
  double t9270;
  double t8910;
  double t8940;
  double t8948;
  double t2368;
  double t8761;
  double t8789;
  double t9237;
  double t9241;
  double t9245;
  double t9089;
  double t9206;
  double t9218;
  double t9310;
  double t9311;
  double t9315;
  double t9250;
  double t9287;
  double t9306;
  double t9338;
  double t9345;
  double t9348;
  double t9486;
  double t9487;
  double t8904;
  double t9004;
  double t9048;
  double t9384;
  double t9386;
  double t9389;
  double t9410;
  double t9411;
  double t9412;
  double t9415;
  double t9417;
  double t9419;
  double t9423;
  double t9426;
  double t9435;
  double t9439;
  double t9354;
  double t9361;
  double t9370;
  double t9472;
  double t9473;
  double t9488;
  double t9496;
  double t9497;
  double t9502;
  double t9505;
  double t9506;
  double t9235;
  double t9246;
  double t9247;
  double t9395;
  double t9397;
  double t9398;
  double t9377;
  double t9378;
  double t9383;
  double t9307;
  double t9316;
  double t9318;
  double t9402;
  double t9404;
  double t9405;
  t1436 = Cos(var1[3]);
  t2435 = Cos(var1[5]);
  t2995 = Sin(var1[3]);
  t2548 = Sin(var1[4]);
  t3320 = Sin(var1[5]);
  t2358 = Cos(var1[7]);
  t2408 = Cos(var1[6]);
  t2964 = t1436*t2435*t2548;
  t5402 = t2995*t3320;
  t5425 = t2964 + t5402;
  t6646 = t2408*t5425;
  t6988 = -1.*t2435*t2995;
  t8337 = t1436*t2548*t3320;
  t8467 = t6988 + t8337;
  t8468 = Sin(var1[6]);
  t8636 = -1.*t8467*t8468;
  t8675 = t6646 + t8636;
  t2312 = Cos(var1[4]);
  t8713 = Sin(var1[7]);
  t169 = Cos(var1[8]);
  t9092 = t2435*t2995*t2548;
  t9145 = -1.*t1436*t3320;
  t9149 = t9092 + t9145;
  t9177 = t2408*t9149;
  t9189 = t1436*t2435;
  t9199 = t2995*t2548*t3320;
  t9203 = t9189 + t9199;
  t9204 = -1.*t9203*t8468;
  t9205 = t9177 + t9204;
  t8990 = Sin(var1[8]);
  t9251 = t2312*t2435*t2408;
  t9252 = -1.*t2312*t3320*t8468;
  t9270 = t9251 + t9252;
  t8910 = t2358*t8675;
  t8940 = t1436*t2312*t8713;
  t8948 = t8910 + t8940;
  t2368 = t1436*t2312*t2358;
  t8761 = -1.*t8675*t8713;
  t8789 = t2368 + t8761;
  t9237 = t2358*t9205;
  t9241 = t2312*t2995*t8713;
  t9245 = t9237 + t9241;
  t9089 = t2312*t2358*t2995;
  t9206 = -1.*t9205*t8713;
  t9218 = t9089 + t9206;
  t9310 = t2358*t9270;
  t9311 = -1.*t2548*t8713;
  t9315 = t9310 + t9311;
  t9250 = -1.*t2358*t2548;
  t9287 = -1.*t9270*t8713;
  t9306 = t9250 + t9287;
  t9338 = t2408*t8467;
  t9345 = t5425*t8468;
  t9348 = t9338 + t9345;
  t9486 = -1.*t169;
  t9487 = 1. + t9486;
  t8904 = t169*t8789;
  t9004 = -1.*t8948*t8990;
  t9048 = t8904 + t9004;
  t9384 = t169*t8948;
  t9386 = t8789*t8990;
  t9389 = t9384 + t9386;
  t9410 = -1.*t2358;
  t9411 = 1. + t9410;
  t9412 = 0.183*t9411;
  t9415 = 0. + t9412;
  t9417 = -1.*t2408;
  t9419 = 1. + t9417;
  t9423 = -0.047*t9419;
  t9426 = 0. + t9423;
  t9435 = 0.047*t8468;
  t9439 = 0. + t9435;
  t9354 = t2408*t9203;
  t9361 = t9149*t8468;
  t9370 = t9354 + t9361;
  t9472 = 0.183*t8713;
  t9473 = 0. + t9472;
  t9488 = 0.183*t9487;
  t9496 = 0.15*t8990;
  t9497 = 0. + t9488 + t9496;
  t9502 = -0.15*t9487;
  t9505 = 0.183*t8990;
  t9506 = 0. + t9502 + t9505;
  t9235 = t169*t9218;
  t9246 = -1.*t9245*t8990;
  t9247 = t9235 + t9246;
  t9395 = t169*t9245;
  t9397 = t9218*t8990;
  t9398 = t9395 + t9397;
  t9377 = t2312*t2408*t3320;
  t9378 = t2312*t2435*t8468;
  t9383 = t9377 + t9378;
  t9307 = t169*t9306;
  t9316 = -1.*t9315*t8990;
  t9318 = t9307 + t9316;
  t9402 = t169*t9315;
  t9404 = t9306*t8990;
  t9405 = t9402 + t9404;
  p_output1[0]=t9048;
  p_output1[1]=t9247;
  p_output1[2]=t9318;
  p_output1[3]=0.;
  p_output1[4]=t9348;
  p_output1[5]=t9370;
  p_output1[6]=t9383;
  p_output1[7]=0.;
  p_output1[8]=t9389;
  p_output1[9]=t9398;
  p_output1[10]=t9405;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.183*t9048 - 0.13205*t9348 - 0.15*t9389 + t1436*t2312*t9415 + t8467*t9426 + t5425*t9439 + t8675*t9473 + t8789*t9497 + t8948*t9506 + var1[0];
  p_output1[13]=0. + 0.183*t9247 - 0.13205*t9370 - 0.15*t9398 + t2312*t2995*t9415 + t9203*t9426 + t9149*t9439 + t9205*t9473 + t9218*t9497 + t9245*t9506 + var1[1];
  p_output1[14]=0. + 0.183*t9318 - 0.13205*t9383 - 0.15*t9405 - 1.*t2548*t9415 + t2312*t3320*t9426 + t2312*t2435*t9439 + t9270*t9473 + t9306*t9497 + t9315*t9506 + var1[2];
  p_output1[15]=1.;
}



void H_FR_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
