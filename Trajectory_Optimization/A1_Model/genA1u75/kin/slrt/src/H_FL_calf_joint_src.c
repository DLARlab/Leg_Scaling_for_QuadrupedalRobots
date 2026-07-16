/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:17:58 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FL_calf_joint_src.h"

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
  double t165;
  double t1567;
  double t1759;
  double t1588;
  double t1773;
  double t1019;
  double t185;
  double t218;
  double t1325;
  double t1649;
  double t1851;
  double t1908;
  double t1933;
  double t1941;
  double t1948;
  double t1949;
  double t1965;
  double t2099;
  double t2100;
  double t136;
  double t2401;
  double t2955;
  double t3106;
  double t3199;
  double t3212;
  double t3216;
  double t3217;
  double t3232;
  double t3282;
  double t3311;
  double t3466;
  double t3559;
  double t3579;
  double t1010;
  double t2277;
  double t2297;
  double t2637;
  double t2745;
  double t2793;
  double t2928;
  double t3373;
  double t3388;
  double t3411;
  double t3424;
  double t3432;
  double t3458;
  double t3590;
  double t3607;
  double t3912;
  double t4014;
  double t4021;
  double t4120;
  double t4121;
  double t4134;
  double t5110;
  double t5134;
  double t2305;
  double t2798;
  double t2927;
  double t4326;
  double t4486;
  double t4491;
  double t4635;
  double t4650;
  double t4661;
  double t4727;
  double t4804;
  double t4834;
  double t4889;
  double t4895;
  double t4934;
  double t4944;
  double t4141;
  double t4163;
  double t4215;
  double t5013;
  double t5014;
  double t5224;
  double t5277;
  double t5279;
  double t5349;
  double t5358;
  double t5371;
  double t3394;
  double t3436;
  double t3440;
  double t4509;
  double t4515;
  double t4554;
  double t4230;
  double t4275;
  double t4313;
  double t3906;
  double t4032;
  double t4100;
  double t4591;
  double t4607;
  double t4624;
  t165 = Cos(var1[3]);
  t1567 = Cos(var1[5]);
  t1759 = Sin(var1[3]);
  t1588 = Sin(var1[4]);
  t1773 = Sin(var1[5]);
  t1019 = Cos(var1[10]);
  t185 = Cos(var1[4]);
  t218 = Sin(var1[10]);
  t1325 = Cos(var1[9]);
  t1649 = t165*t1567*t1588;
  t1851 = t1759*t1773;
  t1908 = t1649 + t1851;
  t1933 = t1325*t1908;
  t1941 = Sin(var1[9]);
  t1948 = -1.*t1567*t1759;
  t1949 = t165*t1588*t1773;
  t1965 = t1948 + t1949;
  t2099 = -1.*t1941*t1965;
  t2100 = t1933 + t2099;
  t136 = Sin(var1[11]);
  t2401 = Cos(var1[11]);
  t2955 = t1567*t1759*t1588;
  t3106 = -1.*t165*t1773;
  t3199 = t2955 + t3106;
  t3212 = t1325*t3199;
  t3216 = t165*t1567;
  t3217 = t1759*t1588*t1773;
  t3232 = t3216 + t3217;
  t3282 = -1.*t1941*t3232;
  t3311 = t3212 + t3282;
  t3466 = t1325*t185*t1567;
  t3559 = -1.*t185*t1941*t1773;
  t3579 = t3466 + t3559;
  t1010 = t165*t185*t218;
  t2277 = t1019*t2100;
  t2297 = t1010 + t2277;
  t2637 = t1019*t165*t185;
  t2745 = -1.*t218*t2100;
  t2793 = t2637 + t2745;
  t2928 = t185*t218*t1759;
  t3373 = t1019*t3311;
  t3388 = t2928 + t3373;
  t3411 = t1019*t185*t1759;
  t3424 = -1.*t218*t3311;
  t3432 = t3411 + t3424;
  t3458 = -1.*t218*t1588;
  t3590 = t1019*t3579;
  t3607 = t3458 + t3590;
  t3912 = -1.*t1019*t1588;
  t4014 = -1.*t218*t3579;
  t4021 = t3912 + t4014;
  t4120 = t1941*t1908;
  t4121 = t1325*t1965;
  t4134 = t4120 + t4121;
  t5110 = -1.*t2401;
  t5134 = 1. + t5110;
  t2305 = -1.*t136*t2297;
  t2798 = t2401*t2793;
  t2927 = t2305 + t2798;
  t4326 = t2401*t2297;
  t4486 = t136*t2793;
  t4491 = t4326 + t4486;
  t4635 = -1.*t1019;
  t4650 = 1. + t4635;
  t4661 = 0.183*t4650;
  t4727 = 0. + t4661;
  t4804 = -0.047*t1941;
  t4834 = 0. + t4804;
  t4889 = -1.*t1325;
  t4895 = 1. + t4889;
  t4934 = 0.047*t4895;
  t4944 = 0. + t4934;
  t4141 = t1941*t3199;
  t4163 = t1325*t3232;
  t4215 = t4141 + t4163;
  t5013 = 0.183*t218;
  t5014 = 0. + t5013;
  t5224 = -0.15*t5134;
  t5277 = 0.183*t136;
  t5279 = 0. + t5224 + t5277;
  t5349 = 0.183*t5134;
  t5358 = 0.15*t136;
  t5371 = 0. + t5349 + t5358;
  t3394 = -1.*t136*t3388;
  t3436 = t2401*t3432;
  t3440 = t3394 + t3436;
  t4509 = t2401*t3388;
  t4515 = t136*t3432;
  t4554 = t4509 + t4515;
  t4230 = t185*t1567*t1941;
  t4275 = t1325*t185*t1773;
  t4313 = t4230 + t4275;
  t3906 = -1.*t136*t3607;
  t4032 = t2401*t4021;
  t4100 = t3906 + t4032;
  t4591 = t2401*t3607;
  t4607 = t136*t4021;
  t4624 = t4591 + t4607;
  p_output1[0]=t2927;
  p_output1[1]=t3440;
  p_output1[2]=t4100;
  p_output1[3]=0.;
  p_output1[4]=t4134;
  p_output1[5]=t4215;
  p_output1[6]=t4313;
  p_output1[7]=0.;
  p_output1[8]=t4491;
  p_output1[9]=t4554;
  p_output1[10]=t4624;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.183*t2927 + 0.11079*t4134 - 0.15*t4491 + t165*t185*t4727 + t1908*t4834 + t1965*t4944 + t2100*t5014 + t2297*t5279 + t2793*t5371 + var1[0];
  p_output1[13]=0. + 0.183*t3440 + 0.11079*t4215 - 0.15*t4554 + t1759*t185*t4727 + t3199*t4834 + t3232*t4944 + t3311*t5014 + t3388*t5279 + t3432*t5371 + var1[1];
  p_output1[14]=0. + 0.183*t4100 + 0.11079*t4313 - 0.15*t4624 - 1.*t1588*t4727 + t1567*t185*t4834 + t1773*t185*t4944 + t3579*t5014 + t3607*t5279 + t4021*t5371 + var1[2];
  p_output1[15]=1.;
}



void H_FL_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
