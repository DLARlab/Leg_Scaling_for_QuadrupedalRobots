/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:51:03 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_FRfoot_src.h"

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
  double t907;
  double t1443;
  double t1818;
  double t1726;
  double t1914;
  double t1031;
  double t1202;
  double t1816;
  double t2065;
  double t2194;
  double t2562;
  double t2696;
  double t3114;
  double t3354;
  double t3691;
  double t4029;
  double t4207;
  double t955;
  double t4417;
  double t648;
  double t5507;
  double t5508;
  double t5515;
  double t5517;
  double t5534;
  double t5555;
  double t5587;
  double t5616;
  double t5617;
  double t5402;
  double t5725;
  double t5740;
  double t5747;
  double t5125;
  double t5193;
  double t5219;
  double t1083;
  double t4603;
  double t4753;
  double t5667;
  double t5679;
  double t5691;
  double t5506;
  double t5634;
  double t5652;
  double t5855;
  double t5948;
  double t5981;
  double t5722;
  double t5755;
  double t5761;
  t907 = Cos(var1[3]);
  t1443 = Cos(var1[5]);
  t1818 = Sin(var1[3]);
  t1726 = Sin(var1[4]);
  t1914 = Sin(var1[5]);
  t1031 = Cos(var1[7]);
  t1202 = Cos(var1[6]);
  t1816 = t907*t1443*t1726;
  t2065 = t1818*t1914;
  t2194 = t1816 + t2065;
  t2562 = t1202*t2194;
  t2696 = -1.*t1443*t1818;
  t3114 = t907*t1726*t1914;
  t3354 = t2696 + t3114;
  t3691 = Sin(var1[6]);
  t4029 = -1.*t3354*t3691;
  t4207 = t2562 + t4029;
  t955 = Cos(var1[4]);
  t4417 = Sin(var1[7]);
  t648 = Cos(var1[8]);
  t5507 = t1443*t1818*t1726;
  t5508 = -1.*t907*t1914;
  t5515 = t5507 + t5508;
  t5517 = t1202*t5515;
  t5534 = t907*t1443;
  t5555 = t1818*t1726*t1914;
  t5587 = t5534 + t5555;
  t5616 = -1.*t5587*t3691;
  t5617 = t5517 + t5616;
  t5402 = Sin(var1[8]);
  t5725 = t955*t1443*t1202;
  t5740 = -1.*t955*t1914*t3691;
  t5747 = t5725 + t5740;
  t5125 = t1031*t4207;
  t5193 = t907*t955*t4417;
  t5219 = t5125 + t5193;
  t1083 = t907*t955*t1031;
  t4603 = -1.*t4207*t4417;
  t4753 = t1083 + t4603;
  t5667 = t1031*t5617;
  t5679 = t955*t1818*t4417;
  t5691 = t5667 + t5679;
  t5506 = t955*t1031*t1818;
  t5634 = -1.*t5617*t4417;
  t5652 = t5506 + t5634;
  t5855 = t1031*t5747;
  t5948 = -1.*t1726*t4417;
  t5981 = t5855 + t5948;
  t5722 = -1.*t1031*t1726;
  t5755 = -1.*t5747*t4417;
  t5761 = t5722 + t5755;
  p_output1[0]=-1.*t5219*t5402 + t4753*t648;
  p_output1[1]=-1.*t5402*t5691 + t5652*t648;
  p_output1[2]=-1.*t5402*t5981 + t5761*t648;
  p_output1[3]=t1202*t3354 + t2194*t3691;
  p_output1[4]=t3691*t5515 + t1202*t5587;
  p_output1[5]=t1202*t1914*t955 + t1443*t3691*t955;
  p_output1[6]=t4753*t5402 + t5219*t648;
  p_output1[7]=t5402*t5652 + t5691*t648;
  p_output1[8]=t5402*t5761 + t5981*t648;
}



void R_FRfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
