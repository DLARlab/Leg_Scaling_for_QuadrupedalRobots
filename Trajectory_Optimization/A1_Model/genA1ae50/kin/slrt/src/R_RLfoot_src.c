/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:10:31 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RLfoot_src.h"

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
  double t1396;
  double t3062;
  double t3235;
  double t3082;
  double t3252;
  double t2904;
  double t1412;
  double t2806;
  double t3031;
  double t3145;
  double t3269;
  double t3274;
  double t3285;
  double t3288;
  double t3294;
  double t3296;
  double t3302;
  double t3318;
  double t3326;
  double t1241;
  double t3384;
  double t3406;
  double t3411;
  double t3415;
  double t3426;
  double t3430;
  double t3432;
  double t3452;
  double t3454;
  double t3462;
  double t3499;
  double t3502;
  double t3503;
  double t2885;
  double t3342;
  double t3362;
  double t3387;
  double t3396;
  double t3397;
  double t3405;
  double t3469;
  double t3477;
  double t3483;
  double t3485;
  double t3487;
  double t3497;
  double t3504;
  double t3505;
  double t3508;
  double t3514;
  double t3515;
  t1396 = Cos(var1[3]);
  t3062 = Cos(var1[5]);
  t3235 = Sin(var1[3]);
  t3082 = Sin(var1[4]);
  t3252 = Sin(var1[5]);
  t2904 = Cos(var1[16]);
  t1412 = Cos(var1[4]);
  t2806 = Sin(var1[16]);
  t3031 = Cos(var1[15]);
  t3145 = t1396*t3062*t3082;
  t3269 = t3235*t3252;
  t3274 = t3145 + t3269;
  t3285 = t3031*t3274;
  t3288 = Sin(var1[15]);
  t3294 = -1.*t3062*t3235;
  t3296 = t1396*t3082*t3252;
  t3302 = t3294 + t3296;
  t3318 = -1.*t3288*t3302;
  t3326 = t3285 + t3318;
  t1241 = Sin(var1[17]);
  t3384 = Cos(var1[17]);
  t3406 = t3062*t3235*t3082;
  t3411 = -1.*t1396*t3252;
  t3415 = t3406 + t3411;
  t3426 = t3031*t3415;
  t3430 = t1396*t3062;
  t3432 = t3235*t3082*t3252;
  t3452 = t3430 + t3432;
  t3454 = -1.*t3288*t3452;
  t3462 = t3426 + t3454;
  t3499 = t3031*t1412*t3062;
  t3502 = -1.*t1412*t3288*t3252;
  t3503 = t3499 + t3502;
  t2885 = t1396*t1412*t2806;
  t3342 = t2904*t3326;
  t3362 = t2885 + t3342;
  t3387 = t2904*t1396*t1412;
  t3396 = -1.*t2806*t3326;
  t3397 = t3387 + t3396;
  t3405 = t1412*t2806*t3235;
  t3469 = t2904*t3462;
  t3477 = t3405 + t3469;
  t3483 = t2904*t1412*t3235;
  t3485 = -1.*t2806*t3462;
  t3487 = t3483 + t3485;
  t3497 = -1.*t2806*t3082;
  t3504 = t2904*t3503;
  t3505 = t3497 + t3504;
  t3508 = -1.*t2904*t3082;
  t3514 = -1.*t2806*t3503;
  t3515 = t3508 + t3514;
  p_output1[0]=-1.*t1241*t3362 + t3384*t3397;
  p_output1[1]=-1.*t1241*t3477 + t3384*t3487;
  p_output1[2]=-1.*t1241*t3505 + t3384*t3515;
  p_output1[3]=t3274*t3288 + t3031*t3302;
  p_output1[4]=t3288*t3415 + t3031*t3452;
  p_output1[5]=t1412*t3031*t3252 + t1412*t3062*t3288;
  p_output1[6]=t3362*t3384 + t1241*t3397;
  p_output1[7]=t3384*t3477 + t1241*t3487;
  p_output1[8]=t3384*t3505 + t1241*t3515;
}



void R_RLfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
