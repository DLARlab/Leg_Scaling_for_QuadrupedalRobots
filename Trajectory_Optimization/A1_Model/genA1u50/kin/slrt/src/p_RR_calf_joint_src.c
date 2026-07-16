/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:12:56 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RR_calf_joint_src.h"

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
  double t3373;
  double t3384;
  double t3387;
  double t3385;
  double t3388;
  double t3379;
  double t3386;
  double t3390;
  double t3391;
  double t3395;
  double t3404;
  double t3406;
  double t3407;
  double t3374;
  double t3415;
  double t3348;
  double t3418;
  double t3419;
  double t3420;
  double t3422;
  double t3423;
  double t3424;
  double t3427;
  double t3431;
  double t3432;
  double t3433;
  double t3440;
  double t3441;
  double t3443;
  double t3364;
  double t3366;
  double t3367;
  double t3370;
  double t3380;
  double t3382;
  double t3399;
  double t3401;
  double t3402;
  double t3403;
  double t3457;
  double t3458;
  double t3459;
  double t3461;
  double t3462;
  double t3463;
  double t3416;
  double t3417;
  double t3426;
  double t3428;
  double t3429;
  double t3476;
  double t3477;
  double t3478;
  double t3435;
  double t3436;
  double t3439;
  double t3480;
  double t3481;
  double t3482;
  double t3484;
  double t3485;
  double t3486;
  double t3504;
  double t3505;
  double t3506;
  double t3508;
  double t3509;
  double t3510;
  double t3512;
  double t3513;
  double t3514;
  t3373 = Cos(var1[3]);
  t3384 = Cos(var1[5]);
  t3387 = Sin(var1[3]);
  t3385 = Sin(var1[4]);
  t3388 = Sin(var1[5]);
  t3379 = Sin(var1[12]);
  t3386 = t3373*t3384*t3385;
  t3390 = t3387*t3388;
  t3391 = t3386 + t3390;
  t3395 = Cos(var1[12]);
  t3404 = -1.*t3384*t3387;
  t3406 = t3373*t3385*t3388;
  t3407 = t3404 + t3406;
  t3374 = Cos(var1[4]);
  t3415 = Sin(var1[13]);
  t3348 = Cos(var1[13]);
  t3418 = t3395*t3391;
  t3419 = -1.*t3379*t3407;
  t3420 = t3418 + t3419;
  t3422 = Cos(var1[14]);
  t3423 = -1.*t3422;
  t3424 = 1. + t3423;
  t3427 = Sin(var1[14]);
  t3431 = t3373*t3374*t3415;
  t3432 = t3348*t3420;
  t3433 = t3431 + t3432;
  t3440 = t3348*t3373*t3374;
  t3441 = -1.*t3415*t3420;
  t3443 = t3440 + t3441;
  t3364 = -1.*t3348;
  t3366 = 1. + t3364;
  t3367 = -0.183*t3366;
  t3370 = 0. + t3367;
  t3380 = 0.047*t3379;
  t3382 = 0. + t3380;
  t3399 = -1.*t3395;
  t3401 = 1. + t3399;
  t3402 = -0.047*t3401;
  t3403 = 0. + t3402;
  t3457 = t3384*t3387*t3385;
  t3458 = -1.*t3373*t3388;
  t3459 = t3457 + t3458;
  t3461 = t3373*t3384;
  t3462 = t3387*t3385*t3388;
  t3463 = t3461 + t3462;
  t3416 = -0.183*t3415;
  t3417 = 0. + t3416;
  t3426 = -0.1*t3424;
  t3428 = -0.183*t3427;
  t3429 = 0. + t3426 + t3428;
  t3476 = t3395*t3459;
  t3477 = -1.*t3379*t3463;
  t3478 = t3476 + t3477;
  t3435 = -0.183*t3424;
  t3436 = 0.1*t3427;
  t3439 = 0. + t3435 + t3436;
  t3480 = t3374*t3415*t3387;
  t3481 = t3348*t3478;
  t3482 = t3480 + t3481;
  t3484 = t3348*t3374*t3387;
  t3485 = -1.*t3415*t3478;
  t3486 = t3484 + t3485;
  t3504 = t3395*t3374*t3384;
  t3505 = -1.*t3374*t3379*t3388;
  t3506 = t3504 + t3505;
  t3508 = -1.*t3415*t3385;
  t3509 = t3348*t3506;
  t3510 = t3508 + t3509;
  t3512 = -1.*t3348*t3385;
  t3513 = -1.*t3415*t3506;
  t3514 = t3512 + t3513;
  p_output1[0]=0. + t3370*t3373*t3374 + t3382*t3391 + t3403*t3407 - 0.08953*(t3379*t3391 + t3395*t3407) + t3417*t3420 + t3429*t3433 + t3439*t3443 - 0.183*(-1.*t3427*t3433 + t3422*t3443) - 0.1*(t3422*t3433 + t3427*t3443) + var1[0];
  p_output1[1]=0. + t3370*t3374*t3387 + t3382*t3459 + t3403*t3463 - 0.08953*(t3379*t3459 + t3395*t3463) + t3417*t3478 + t3429*t3482 + t3439*t3486 - 0.183*(-1.*t3427*t3482 + t3422*t3486) - 0.1*(t3422*t3482 + t3427*t3486) + var1[1];
  p_output1[2]=0. + t3374*t3382*t3384 - 1.*t3370*t3385 - 0.08953*(t3374*t3379*t3384 + t3374*t3388*t3395) + t3374*t3388*t3403 + t3417*t3506 + t3429*t3510 + t3439*t3514 - 0.183*(-1.*t3427*t3510 + t3422*t3514) - 0.1*(t3422*t3510 + t3427*t3514) + var1[2];
}



void p_RR_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
