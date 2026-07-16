/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:10:28 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RRfoot_src.h"

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
  double t1914;
  double t2344;
  double t2753;
  double t2587;
  double t2833;
  double t2207;
  double t1950;
  double t2083;
  double t2329;
  double t2653;
  double t3286;
  double t3289;
  double t3290;
  double t3495;
  double t4039;
  double t4074;
  double t4159;
  double t4747;
  double t4845;
  double t1322;
  double t5185;
  double t5420;
  double t5421;
  double t5432;
  double t5436;
  double t5446;
  double t5450;
  double t5453;
  double t5457;
  double t5462;
  double t5610;
  double t5641;
  double t5648;
  double t2188;
  double t4872;
  double t5065;
  double t5189;
  double t5284;
  double t5336;
  double t5419;
  double t5463;
  double t5464;
  double t5524;
  double t5530;
  double t5549;
  double t5609;
  double t5654;
  double t5664;
  double t5679;
  double t5687;
  double t5697;
  t1914 = Cos(var1[3]);
  t2344 = Cos(var1[5]);
  t2753 = Sin(var1[3]);
  t2587 = Sin(var1[4]);
  t2833 = Sin(var1[5]);
  t2207 = Cos(var1[13]);
  t1950 = Cos(var1[4]);
  t2083 = Sin(var1[13]);
  t2329 = Cos(var1[12]);
  t2653 = t1914*t2344*t2587;
  t3286 = t2753*t2833;
  t3289 = t2653 + t3286;
  t3290 = t2329*t3289;
  t3495 = Sin(var1[12]);
  t4039 = -1.*t2344*t2753;
  t4074 = t1914*t2587*t2833;
  t4159 = t4039 + t4074;
  t4747 = -1.*t3495*t4159;
  t4845 = t3290 + t4747;
  t1322 = Sin(var1[14]);
  t5185 = Cos(var1[14]);
  t5420 = t2344*t2753*t2587;
  t5421 = -1.*t1914*t2833;
  t5432 = t5420 + t5421;
  t5436 = t2329*t5432;
  t5446 = t1914*t2344;
  t5450 = t2753*t2587*t2833;
  t5453 = t5446 + t5450;
  t5457 = -1.*t3495*t5453;
  t5462 = t5436 + t5457;
  t5610 = t2329*t1950*t2344;
  t5641 = -1.*t1950*t3495*t2833;
  t5648 = t5610 + t5641;
  t2188 = t1914*t1950*t2083;
  t4872 = t2207*t4845;
  t5065 = t2188 + t4872;
  t5189 = t2207*t1914*t1950;
  t5284 = -1.*t2083*t4845;
  t5336 = t5189 + t5284;
  t5419 = t1950*t2083*t2753;
  t5463 = t2207*t5462;
  t5464 = t5419 + t5463;
  t5524 = t2207*t1950*t2753;
  t5530 = -1.*t2083*t5462;
  t5549 = t5524 + t5530;
  t5609 = -1.*t2083*t2587;
  t5654 = t2207*t5648;
  t5664 = t5609 + t5654;
  t5679 = -1.*t2207*t2587;
  t5687 = -1.*t2083*t5648;
  t5697 = t5679 + t5687;
  p_output1[0]=-1.*t1322*t5065 + t5185*t5336;
  p_output1[1]=-1.*t1322*t5464 + t5185*t5549;
  p_output1[2]=-1.*t1322*t5664 + t5185*t5697;
  p_output1[3]=t3289*t3495 + t2329*t4159;
  p_output1[4]=t3495*t5432 + t2329*t5453;
  p_output1[5]=t1950*t2329*t2833 + t1950*t2344*t3495;
  p_output1[6]=t5065*t5185 + t1322*t5336;
  p_output1[7]=t5185*t5464 + t1322*t5549;
  p_output1[8]=t5185*t5664 + t1322*t5697;
}



void R_RRfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
