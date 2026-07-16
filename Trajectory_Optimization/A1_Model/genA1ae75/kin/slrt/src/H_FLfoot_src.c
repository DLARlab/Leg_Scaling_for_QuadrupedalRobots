/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:51:05 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FLfoot_src.h"

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
  double t497;
  double t1560;
  double t1856;
  double t1650;
  double t1913;
  double t1528;
  double t1110;
  double t1246;
  double t1551;
  double t1661;
  double t1921;
  double t2081;
  double t2179;
  double t2184;
  double t2204;
  double t2229;
  double t2251;
  double t2342;
  double t2424;
  double t487;
  double t2596;
  double t2684;
  double t2692;
  double t2693;
  double t2735;
  double t2739;
  double t2755;
  double t2779;
  double t2783;
  double t2799;
  double t3424;
  double t3637;
  double t3805;
  double t1307;
  double t2526;
  double t2565;
  double t2597;
  double t2604;
  double t2627;
  double t2679;
  double t2807;
  double t2939;
  double t3123;
  double t3181;
  double t3218;
  double t3373;
  double t3823;
  double t3848;
  double t3861;
  double t3874;
  double t3892;
  double t3935;
  double t4020;
  double t4052;
  double t5227;
  double t5228;
  double t2586;
  double t2667;
  double t2669;
  double t4272;
  double t4301;
  double t4311;
  double t4505;
  double t4515;
  double t4654;
  double t4752;
  double t4805;
  double t4806;
  double t4942;
  double t5027;
  double t5087;
  double t5088;
  double t4104;
  double t4108;
  double t4150;
  double t5156;
  double t5220;
  double t5233;
  double t5264;
  double t5265;
  double t5281;
  double t5309;
  double t5426;
  double t3087;
  double t3295;
  double t3337;
  double t4320;
  double t4328;
  double t4333;
  double t4175;
  double t4179;
  double t4186;
  double t3850;
  double t3893;
  double t3918;
  double t4464;
  double t4484;
  double t4489;
  t497 = Cos(var1[3]);
  t1560 = Cos(var1[5]);
  t1856 = Sin(var1[3]);
  t1650 = Sin(var1[4]);
  t1913 = Sin(var1[5]);
  t1528 = Cos(var1[10]);
  t1110 = Cos(var1[4]);
  t1246 = Sin(var1[10]);
  t1551 = Cos(var1[9]);
  t1661 = t497*t1560*t1650;
  t1921 = t1856*t1913;
  t2081 = t1661 + t1921;
  t2179 = t1551*t2081;
  t2184 = Sin(var1[9]);
  t2204 = -1.*t1560*t1856;
  t2229 = t497*t1650*t1913;
  t2251 = t2204 + t2229;
  t2342 = -1.*t2184*t2251;
  t2424 = t2179 + t2342;
  t487 = Sin(var1[11]);
  t2596 = Cos(var1[11]);
  t2684 = t1560*t1856*t1650;
  t2692 = -1.*t497*t1913;
  t2693 = t2684 + t2692;
  t2735 = t1551*t2693;
  t2739 = t497*t1560;
  t2755 = t1856*t1650*t1913;
  t2779 = t2739 + t2755;
  t2783 = -1.*t2184*t2779;
  t2799 = t2735 + t2783;
  t3424 = t1551*t1110*t1560;
  t3637 = -1.*t1110*t2184*t1913;
  t3805 = t3424 + t3637;
  t1307 = t497*t1110*t1246;
  t2526 = t1528*t2424;
  t2565 = t1307 + t2526;
  t2597 = t1528*t497*t1110;
  t2604 = -1.*t1246*t2424;
  t2627 = t2597 + t2604;
  t2679 = t1110*t1246*t1856;
  t2807 = t1528*t2799;
  t2939 = t2679 + t2807;
  t3123 = t1528*t1110*t1856;
  t3181 = -1.*t1246*t2799;
  t3218 = t3123 + t3181;
  t3373 = -1.*t1246*t1650;
  t3823 = t1528*t3805;
  t3848 = t3373 + t3823;
  t3861 = -1.*t1528*t1650;
  t3874 = -1.*t1246*t3805;
  t3892 = t3861 + t3874;
  t3935 = t2184*t2081;
  t4020 = t1551*t2251;
  t4052 = t3935 + t4020;
  t5227 = -1.*t2596;
  t5228 = 1. + t5227;
  t2586 = -1.*t487*t2565;
  t2667 = t2596*t2627;
  t2669 = t2586 + t2667;
  t4272 = t2596*t2565;
  t4301 = t487*t2627;
  t4311 = t4272 + t4301;
  t4505 = -1.*t1528;
  t4515 = 1. + t4505;
  t4654 = 0.183*t4515;
  t4752 = 0. + t4654;
  t4805 = -0.047*t2184;
  t4806 = 0. + t4805;
  t4942 = -1.*t1551;
  t5027 = 1. + t4942;
  t5087 = 0.047*t5027;
  t5088 = 0. + t5087;
  t4104 = t2184*t2693;
  t4108 = t1551*t2779;
  t4150 = t4104 + t4108;
  t5156 = 0.183*t1246;
  t5220 = 0. + t5156;
  t5233 = -0.15*t5228;
  t5264 = 0.183*t487;
  t5265 = 0. + t5233 + t5264;
  t5281 = 0.183*t5228;
  t5309 = 0.15*t487;
  t5426 = 0. + t5281 + t5309;
  t3087 = -1.*t487*t2939;
  t3295 = t2596*t3218;
  t3337 = t3087 + t3295;
  t4320 = t2596*t2939;
  t4328 = t487*t3218;
  t4333 = t4320 + t4328;
  t4175 = t1110*t1560*t2184;
  t4179 = t1551*t1110*t1913;
  t4186 = t4175 + t4179;
  t3850 = -1.*t487*t3848;
  t3893 = t2596*t3892;
  t3918 = t3850 + t3893;
  t4464 = t2596*t3848;
  t4484 = t487*t3892;
  t4489 = t4464 + t4484;
  p_output1[0]=t2669;
  p_output1[1]=t3337;
  p_output1[2]=t3918;
  p_output1[3]=0.;
  p_output1[4]=t4052;
  p_output1[5]=t4150;
  p_output1[6]=t4186;
  p_output1[7]=0.;
  p_output1[8]=t4311;
  p_output1[9]=t4333;
  p_output1[10]=t4489;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.183*t2669 + 0.13205*t4052 - 0.3*t4311 + t2081*t4806 + t1110*t4752*t497 + t2251*t5088 + t2424*t5220 + t2565*t5265 + t2627*t5426 + var1[0];
  p_output1[13]=0. + 0.183*t3337 + 0.13205*t4150 - 0.3*t4333 + t1110*t1856*t4752 + t2693*t4806 + t2779*t5088 + t2799*t5220 + t2939*t5265 + t3218*t5426 + var1[1];
  p_output1[14]=0. + 0.183*t3918 + 0.13205*t4186 - 0.3*t4489 - 1.*t1650*t4752 + t1110*t1560*t4806 + t1110*t1913*t5088 + t3805*t5220 + t3848*t5265 + t3892*t5426 + var1[2];
  p_output1[15]=1.;
}



void H_FLfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
