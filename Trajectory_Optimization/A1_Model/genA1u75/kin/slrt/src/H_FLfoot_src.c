/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:18:17 GMT-05:00
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
  double t546;
  double t1387;
  double t1610;
  double t1581;
  double t1619;
  double t816;
  double t709;
  double t793;
  double t1193;
  double t1587;
  double t1663;
  double t1675;
  double t1857;
  double t1873;
  double t1890;
  double t1956;
  double t2364;
  double t2388;
  double t2396;
  double t213;
  double t2747;
  double t3535;
  double t3543;
  double t3547;
  double t3556;
  double t3681;
  double t3698;
  double t3753;
  double t3811;
  double t3859;
  double t4378;
  double t4393;
  double t4452;
  double t814;
  double t2408;
  double t2478;
  double t3103;
  double t3184;
  double t3202;
  double t3445;
  double t3862;
  double t3940;
  double t4025;
  double t4034;
  double t4037;
  double t4349;
  double t4466;
  double t4682;
  double t4746;
  double t4771;
  double t4800;
  double t4859;
  double t4868;
  double t4879;
  double t6227;
  double t6237;
  double t2681;
  double t3334;
  double t3340;
  double t5339;
  double t5354;
  double t5395;
  double t5460;
  double t5486;
  double t5633;
  double t5711;
  double t5745;
  double t5815;
  double t6027;
  double t6043;
  double t6045;
  double t6064;
  double t4890;
  double t4914;
  double t4916;
  double t6173;
  double t6179;
  double t6239;
  double t6246;
  double t6247;
  double t6302;
  double t6370;
  double t6390;
  double t4018;
  double t4250;
  double t4267;
  double t5411;
  double t5414;
  double t5425;
  double t5032;
  double t5177;
  double t5189;
  double t4730;
  double t4823;
  double t4846;
  double t5432;
  double t5439;
  double t5445;
  t546 = Cos(var1[3]);
  t1387 = Cos(var1[5]);
  t1610 = Sin(var1[3]);
  t1581 = Sin(var1[4]);
  t1619 = Sin(var1[5]);
  t816 = Cos(var1[10]);
  t709 = Cos(var1[4]);
  t793 = Sin(var1[10]);
  t1193 = Cos(var1[9]);
  t1587 = t546*t1387*t1581;
  t1663 = t1610*t1619;
  t1675 = t1587 + t1663;
  t1857 = t1193*t1675;
  t1873 = Sin(var1[9]);
  t1890 = -1.*t1387*t1610;
  t1956 = t546*t1581*t1619;
  t2364 = t1890 + t1956;
  t2388 = -1.*t1873*t2364;
  t2396 = t1857 + t2388;
  t213 = Sin(var1[11]);
  t2747 = Cos(var1[11]);
  t3535 = t1387*t1610*t1581;
  t3543 = -1.*t546*t1619;
  t3547 = t3535 + t3543;
  t3556 = t1193*t3547;
  t3681 = t546*t1387;
  t3698 = t1610*t1581*t1619;
  t3753 = t3681 + t3698;
  t3811 = -1.*t1873*t3753;
  t3859 = t3556 + t3811;
  t4378 = t1193*t709*t1387;
  t4393 = -1.*t709*t1873*t1619;
  t4452 = t4378 + t4393;
  t814 = t546*t709*t793;
  t2408 = t816*t2396;
  t2478 = t814 + t2408;
  t3103 = t816*t546*t709;
  t3184 = -1.*t793*t2396;
  t3202 = t3103 + t3184;
  t3445 = t709*t793*t1610;
  t3862 = t816*t3859;
  t3940 = t3445 + t3862;
  t4025 = t816*t709*t1610;
  t4034 = -1.*t793*t3859;
  t4037 = t4025 + t4034;
  t4349 = -1.*t793*t1581;
  t4466 = t816*t4452;
  t4682 = t4349 + t4466;
  t4746 = -1.*t816*t1581;
  t4771 = -1.*t793*t4452;
  t4800 = t4746 + t4771;
  t4859 = t1873*t1675;
  t4868 = t1193*t2364;
  t4879 = t4859 + t4868;
  t6227 = -1.*t2747;
  t6237 = 1. + t6227;
  t2681 = -1.*t213*t2478;
  t3334 = t2747*t3202;
  t3340 = t2681 + t3334;
  t5339 = t2747*t2478;
  t5354 = t213*t3202;
  t5395 = t5339 + t5354;
  t5460 = -1.*t816;
  t5486 = 1. + t5460;
  t5633 = 0.183*t5486;
  t5711 = 0. + t5633;
  t5745 = -0.047*t1873;
  t5815 = 0. + t5745;
  t6027 = -1.*t1193;
  t6043 = 1. + t6027;
  t6045 = 0.047*t6043;
  t6064 = 0. + t6045;
  t4890 = t1873*t3547;
  t4914 = t1193*t3753;
  t4916 = t4890 + t4914;
  t6173 = 0.183*t793;
  t6179 = 0. + t6173;
  t6239 = -0.15*t6237;
  t6246 = 0.183*t213;
  t6247 = 0. + t6239 + t6246;
  t6302 = 0.183*t6237;
  t6370 = 0.15*t213;
  t6390 = 0. + t6302 + t6370;
  t4018 = -1.*t213*t3940;
  t4250 = t2747*t4037;
  t4267 = t4018 + t4250;
  t5411 = t2747*t3940;
  t5414 = t213*t4037;
  t5425 = t5411 + t5414;
  t5032 = t709*t1387*t1873;
  t5177 = t1193*t709*t1619;
  t5189 = t5032 + t5177;
  t4730 = -1.*t213*t4682;
  t4823 = t2747*t4800;
  t4846 = t4730 + t4823;
  t5432 = t2747*t4682;
  t5439 = t213*t4800;
  t5445 = t5432 + t5439;
  p_output1[0]=t3340;
  p_output1[1]=t4267;
  p_output1[2]=t4846;
  p_output1[3]=0.;
  p_output1[4]=t4879;
  p_output1[5]=t4916;
  p_output1[6]=t5189;
  p_output1[7]=0.;
  p_output1[8]=t5395;
  p_output1[9]=t5425;
  p_output1[10]=t5445;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.183*t3340 + 0.11079*t4879 - 0.3*t5395 + t1675*t5815 + t2364*t6064 + t2396*t6179 + t2478*t6247 + t3202*t6390 + t546*t5711*t709 + var1[0];
  p_output1[13]=0. + 0.183*t4267 + 0.11079*t4916 - 0.3*t5425 + t3547*t5815 + t3753*t6064 + t3859*t6179 + t3940*t6247 + t4037*t6390 + t1610*t5711*t709 + var1[1];
  p_output1[14]=0. + 0.183*t4846 + 0.11079*t5189 - 0.3*t5445 - 1.*t1581*t5711 + t4452*t6179 + t4682*t6247 + t4800*t6390 + t1387*t5815*t709 + t1619*t6064*t709 + var1[2];
  p_output1[15]=1.;
}



void H_FLfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
