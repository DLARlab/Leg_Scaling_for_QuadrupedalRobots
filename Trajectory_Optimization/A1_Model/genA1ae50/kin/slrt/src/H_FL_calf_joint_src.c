/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:10:06 GMT-05:00
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
  double t849;
  double t1545;
  double t1593;
  double t1563;
  double t1597;
  double t1159;
  double t941;
  double t1005;
  double t1401;
  double t1588;
  double t1612;
  double t1686;
  double t1722;
  double t1726;
  double t1744;
  double t1789;
  double t1894;
  double t1909;
  double t1915;
  double t545;
  double t2072;
  double t2271;
  double t2272;
  double t2306;
  double t2309;
  double t2312;
  double t2321;
  double t2322;
  double t2327;
  double t2328;
  double t2412;
  double t2415;
  double t2421;
  double t1009;
  double t1939;
  double t1960;
  double t2170;
  double t2174;
  double t2245;
  double t2262;
  double t2341;
  double t2345;
  double t2352;
  double t2355;
  double t2362;
  double t2411;
  double t2441;
  double t2444;
  double t2456;
  double t2474;
  double t2480;
  double t2495;
  double t2499;
  double t2500;
  double t6962;
  double t6964;
  double t1988;
  double t2251;
  double t2255;
  double t2555;
  double t2578;
  double t2605;
  double t4895;
  double t5383;
  double t5550;
  double t5682;
  double t6015;
  double t6019;
  double t6023;
  double t6027;
  double t6048;
  double t6220;
  double t2508;
  double t2511;
  double t2513;
  double t6512;
  double t6903;
  double t7002;
  double t7055;
  double t7068;
  double t7083;
  double t7095;
  double t7109;
  double t2346;
  double t2389;
  double t2402;
  double t2626;
  double t2729;
  double t2792;
  double t2517;
  double t2522;
  double t2535;
  double t2447;
  double t2481;
  double t2489;
  double t2907;
  double t3421;
  double t3471;
  t849 = Cos(var1[3]);
  t1545 = Cos(var1[5]);
  t1593 = Sin(var1[3]);
  t1563 = Sin(var1[4]);
  t1597 = Sin(var1[5]);
  t1159 = Cos(var1[10]);
  t941 = Cos(var1[4]);
  t1005 = Sin(var1[10]);
  t1401 = Cos(var1[9]);
  t1588 = t849*t1545*t1563;
  t1612 = t1593*t1597;
  t1686 = t1588 + t1612;
  t1722 = t1401*t1686;
  t1726 = Sin(var1[9]);
  t1744 = -1.*t1545*t1593;
  t1789 = t849*t1563*t1597;
  t1894 = t1744 + t1789;
  t1909 = -1.*t1726*t1894;
  t1915 = t1722 + t1909;
  t545 = Sin(var1[11]);
  t2072 = Cos(var1[11]);
  t2271 = t1545*t1593*t1563;
  t2272 = -1.*t849*t1597;
  t2306 = t2271 + t2272;
  t2309 = t1401*t2306;
  t2312 = t849*t1545;
  t2321 = t1593*t1563*t1597;
  t2322 = t2312 + t2321;
  t2327 = -1.*t1726*t2322;
  t2328 = t2309 + t2327;
  t2412 = t1401*t941*t1545;
  t2415 = -1.*t941*t1726*t1597;
  t2421 = t2412 + t2415;
  t1009 = t849*t941*t1005;
  t1939 = t1159*t1915;
  t1960 = t1009 + t1939;
  t2170 = t1159*t849*t941;
  t2174 = -1.*t1005*t1915;
  t2245 = t2170 + t2174;
  t2262 = t941*t1005*t1593;
  t2341 = t1159*t2328;
  t2345 = t2262 + t2341;
  t2352 = t1159*t941*t1593;
  t2355 = -1.*t1005*t2328;
  t2362 = t2352 + t2355;
  t2411 = -1.*t1005*t1563;
  t2441 = t1159*t2421;
  t2444 = t2411 + t2441;
  t2456 = -1.*t1159*t1563;
  t2474 = -1.*t1005*t2421;
  t2480 = t2456 + t2474;
  t2495 = t1726*t1686;
  t2499 = t1401*t1894;
  t2500 = t2495 + t2499;
  t6962 = -1.*t2072;
  t6964 = 1. + t6962;
  t1988 = -1.*t545*t1960;
  t2251 = t2072*t2245;
  t2255 = t1988 + t2251;
  t2555 = t2072*t1960;
  t2578 = t545*t2245;
  t2605 = t2555 + t2578;
  t4895 = -1.*t1159;
  t5383 = 1. + t4895;
  t5550 = 0.183*t5383;
  t5682 = 0. + t5550;
  t6015 = -0.047*t1726;
  t6019 = 0. + t6015;
  t6023 = -1.*t1401;
  t6027 = 1. + t6023;
  t6048 = 0.047*t6027;
  t6220 = 0. + t6048;
  t2508 = t1726*t2306;
  t2511 = t1401*t2322;
  t2513 = t2508 + t2511;
  t6512 = 0.183*t1005;
  t6903 = 0. + t6512;
  t7002 = -0.1*t6964;
  t7055 = 0.183*t545;
  t7068 = 0. + t7002 + t7055;
  t7083 = 0.183*t6964;
  t7095 = 0.1*t545;
  t7109 = 0. + t7083 + t7095;
  t2346 = -1.*t545*t2345;
  t2389 = t2072*t2362;
  t2402 = t2346 + t2389;
  t2626 = t2072*t2345;
  t2729 = t545*t2362;
  t2792 = t2626 + t2729;
  t2517 = t941*t1545*t1726;
  t2522 = t1401*t941*t1597;
  t2535 = t2517 + t2522;
  t2447 = -1.*t545*t2444;
  t2481 = t2072*t2480;
  t2489 = t2447 + t2481;
  t2907 = t2072*t2444;
  t3421 = t545*t2480;
  t3471 = t2907 + t3421;
  p_output1[0]=t2255;
  p_output1[1]=t2402;
  p_output1[2]=t2489;
  p_output1[3]=0.;
  p_output1[4]=t2500;
  p_output1[5]=t2513;
  p_output1[6]=t2535;
  p_output1[7]=0.;
  p_output1[8]=t2605;
  p_output1[9]=t2792;
  p_output1[10]=t3471;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.183*t2255 + 0.13205*t2500 - 0.1*t2605 + t1686*t6019 + t1894*t6220 + t1915*t6903 + t1960*t7068 + t2245*t7109 + t5682*t849*t941 + var1[0];
  p_output1[13]=0. + 0.183*t2402 + 0.13205*t2513 - 0.1*t2792 + t2306*t6019 + t2322*t6220 + t2328*t6903 + t2345*t7068 + t2362*t7109 + t1593*t5682*t941 + var1[1];
  p_output1[14]=0. + 0.183*t2489 + 0.13205*t2535 - 0.1*t3471 - 1.*t1563*t5682 + t2421*t6903 + t2444*t7068 + t2480*t7109 + t1545*t6019*t941 + t1597*t6220*t941 + var1[2];
  p_output1[15]=1.;
}



void H_FL_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
