/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:10:24 GMT-05:00
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
  double t1837;
  double t3920;
  double t6485;
  double t5348;
  double t6639;
  double t3625;
  double t3736;
  double t5823;
  double t6994;
  double t7073;
  double t7097;
  double t7107;
  double t7126;
  double t7127;
  double t7155;
  double t7170;
  double t7179;
  double t3143;
  double t7188;
  double t784;
  double t7635;
  double t7643;
  double t7655;
  double t7672;
  double t7686;
  double t7713;
  double t7817;
  double t7819;
  double t7975;
  double t7446;
  double t8304;
  double t8334;
  double t8336;
  double t7403;
  double t7436;
  double t7441;
  double t3701;
  double t7293;
  double t7332;
  double t8123;
  double t8170;
  double t8209;
  double t7513;
  double t8087;
  double t8107;
  double t8381;
  double t8385;
  double t8397;
  double t8300;
  double t8351;
  double t8374;
  t1837 = Cos(var1[3]);
  t3920 = Cos(var1[5]);
  t6485 = Sin(var1[3]);
  t5348 = Sin(var1[4]);
  t6639 = Sin(var1[5]);
  t3625 = Cos(var1[7]);
  t3736 = Cos(var1[6]);
  t5823 = t1837*t3920*t5348;
  t6994 = t6485*t6639;
  t7073 = t5823 + t6994;
  t7097 = t3736*t7073;
  t7107 = -1.*t3920*t6485;
  t7126 = t1837*t5348*t6639;
  t7127 = t7107 + t7126;
  t7155 = Sin(var1[6]);
  t7170 = -1.*t7127*t7155;
  t7179 = t7097 + t7170;
  t3143 = Cos(var1[4]);
  t7188 = Sin(var1[7]);
  t784 = Cos(var1[8]);
  t7635 = t3920*t6485*t5348;
  t7643 = -1.*t1837*t6639;
  t7655 = t7635 + t7643;
  t7672 = t3736*t7655;
  t7686 = t1837*t3920;
  t7713 = t6485*t5348*t6639;
  t7817 = t7686 + t7713;
  t7819 = -1.*t7817*t7155;
  t7975 = t7672 + t7819;
  t7446 = Sin(var1[8]);
  t8304 = t3143*t3920*t3736;
  t8334 = -1.*t3143*t6639*t7155;
  t8336 = t8304 + t8334;
  t7403 = t3625*t7179;
  t7436 = t1837*t3143*t7188;
  t7441 = t7403 + t7436;
  t3701 = t1837*t3143*t3625;
  t7293 = -1.*t7179*t7188;
  t7332 = t3701 + t7293;
  t8123 = t3625*t7975;
  t8170 = t3143*t6485*t7188;
  t8209 = t8123 + t8170;
  t7513 = t3143*t3625*t6485;
  t8087 = -1.*t7975*t7188;
  t8107 = t7513 + t8087;
  t8381 = t3625*t8336;
  t8385 = -1.*t5348*t7188;
  t8397 = t8381 + t8385;
  t8300 = -1.*t3625*t5348;
  t8351 = -1.*t8336*t7188;
  t8374 = t8300 + t8351;
  p_output1[0]=-1.*t7441*t7446 + t7332*t784;
  p_output1[1]=t784*t8107 - 1.*t7446*t8209;
  p_output1[2]=t784*t8374 - 1.*t7446*t8397;
  p_output1[3]=t3736*t7127 + t7073*t7155;
  p_output1[4]=t7155*t7655 + t3736*t7817;
  p_output1[5]=t3143*t3736*t6639 + t3143*t3920*t7155;
  p_output1[6]=t7332*t7446 + t7441*t784;
  p_output1[7]=t7446*t8107 + t784*t8209;
  p_output1[8]=t7446*t8374 + t784*t8397;
}



void R_FRfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
