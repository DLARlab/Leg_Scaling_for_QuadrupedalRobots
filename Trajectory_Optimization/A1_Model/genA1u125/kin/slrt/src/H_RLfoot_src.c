/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:20:54 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RLfoot_src.h"

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
  double t305;
  double t1226;
  double t1417;
  double t1309;
  double t1500;
  double t981;
  double t550;
  double t813;
  double t985;
  double t1376;
  double t1595;
  double t1697;
  double t1709;
  double t1720;
  double t1727;
  double t1730;
  double t1734;
  double t1825;
  double t1834;
  double t163;
  double t2107;
  double t2504;
  double t2548;
  double t2549;
  double t2563;
  double t2629;
  double t2671;
  double t2734;
  double t2803;
  double t2820;
  double t3124;
  double t3170;
  double t3206;
  double t928;
  double t1919;
  double t1999;
  double t2201;
  double t2220;
  double t2225;
  double t2492;
  double t2837;
  double t2915;
  double t2947;
  double t3024;
  double t3051;
  double t3099;
  double t3229;
  double t3240;
  double t3359;
  double t3360;
  double t3363;
  double t3465;
  double t3528;
  double t3532;
  double t4764;
  double t4888;
  double t2053;
  double t2286;
  double t2308;
  double t3889;
  double t3890;
  double t3909;
  double t4049;
  double t4065;
  double t4071;
  double t4085;
  double t4254;
  double t4345;
  double t4372;
  double t4399;
  double t4483;
  double t4531;
  double t3638;
  double t3683;
  double t3691;
  double t4588;
  double t4637;
  double t4897;
  double t4946;
  double t4968;
  double t5046;
  double t5130;
  double t5159;
  double t2921;
  double t3055;
  double t3096;
  double t3918;
  double t3956;
  double t3986;
  double t3751;
  double t3806;
  double t3859;
  double t3350;
  double t3382;
  double t3461;
  double t3996;
  double t4026;
  double t4031;
  t305 = Cos(var1[3]);
  t1226 = Cos(var1[5]);
  t1417 = Sin(var1[3]);
  t1309 = Sin(var1[4]);
  t1500 = Sin(var1[5]);
  t981 = Cos(var1[16]);
  t550 = Cos(var1[4]);
  t813 = Sin(var1[16]);
  t985 = Cos(var1[15]);
  t1376 = t305*t1226*t1309;
  t1595 = t1417*t1500;
  t1697 = t1376 + t1595;
  t1709 = t985*t1697;
  t1720 = Sin(var1[15]);
  t1727 = -1.*t1226*t1417;
  t1730 = t305*t1309*t1500;
  t1734 = t1727 + t1730;
  t1825 = -1.*t1720*t1734;
  t1834 = t1709 + t1825;
  t163 = Sin(var1[17]);
  t2107 = Cos(var1[17]);
  t2504 = t1226*t1417*t1309;
  t2548 = -1.*t305*t1500;
  t2549 = t2504 + t2548;
  t2563 = t985*t2549;
  t2629 = t305*t1226;
  t2671 = t1417*t1309*t1500;
  t2734 = t2629 + t2671;
  t2803 = -1.*t1720*t2734;
  t2820 = t2563 + t2803;
  t3124 = t985*t550*t1226;
  t3170 = -1.*t550*t1720*t1500;
  t3206 = t3124 + t3170;
  t928 = t305*t550*t813;
  t1919 = t981*t1834;
  t1999 = t928 + t1919;
  t2201 = t981*t305*t550;
  t2220 = -1.*t813*t1834;
  t2225 = t2201 + t2220;
  t2492 = t550*t813*t1417;
  t2837 = t981*t2820;
  t2915 = t2492 + t2837;
  t2947 = t981*t550*t1417;
  t3024 = -1.*t813*t2820;
  t3051 = t2947 + t3024;
  t3099 = -1.*t813*t1309;
  t3229 = t981*t3206;
  t3240 = t3099 + t3229;
  t3359 = -1.*t981*t1309;
  t3360 = -1.*t813*t3206;
  t3363 = t3359 + t3360;
  t3465 = t1720*t1697;
  t3528 = t985*t1734;
  t3532 = t3465 + t3528;
  t4764 = -1.*t2107;
  t4888 = 1. + t4764;
  t2053 = -1.*t163*t1999;
  t2286 = t2107*t2225;
  t2308 = t2053 + t2286;
  t3889 = t2107*t1999;
  t3890 = t163*t2225;
  t3909 = t3889 + t3890;
  t4049 = -1.*t981;
  t4065 = 1. + t4049;
  t4071 = -0.183*t4065;
  t4085 = 0. + t4071;
  t4254 = -0.047*t1720;
  t4345 = 0. + t4254;
  t4372 = -1.*t985;
  t4399 = 1. + t4372;
  t4483 = 0.047*t4399;
  t4531 = 0. + t4483;
  t3638 = t1720*t2549;
  t3683 = t985*t2734;
  t3691 = t3638 + t3683;
  t4588 = -0.183*t813;
  t4637 = 0. + t4588;
  t4897 = -0.25*t4888;
  t4946 = -0.183*t163;
  t4968 = 0. + t4897 + t4946;
  t5046 = -0.183*t4888;
  t5130 = 0.25*t163;
  t5159 = 0. + t5046 + t5130;
  t2921 = -1.*t163*t2915;
  t3055 = t2107*t3051;
  t3096 = t2921 + t3055;
  t3918 = t2107*t2915;
  t3956 = t163*t3051;
  t3986 = t3918 + t3956;
  t3751 = t550*t1226*t1720;
  t3806 = t985*t550*t1500;
  t3859 = t3751 + t3806;
  t3350 = -1.*t163*t3240;
  t3382 = t2107*t3363;
  t3461 = t3350 + t3382;
  t3996 = t2107*t3240;
  t4026 = t163*t3363;
  t4031 = t3996 + t4026;
  p_output1[0]=t2308;
  p_output1[1]=t3096;
  p_output1[2]=t3461;
  p_output1[3]=0.;
  p_output1[4]=t3532;
  p_output1[5]=t3691;
  p_output1[6]=t3859;
  p_output1[7]=0.;
  p_output1[8]=t3909;
  p_output1[9]=t3986;
  p_output1[10]=t4031;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.183*t2308 + 0.15331*t3532 - 0.5*t3909 + t1697*t4345 + t1734*t4531 + t1834*t4637 + t1999*t4968 + t2225*t5159 + t305*t4085*t550 + var1[0];
  p_output1[13]=0. - 0.183*t3096 + 0.15331*t3691 - 0.5*t3986 + t2549*t4345 + t2734*t4531 + t2820*t4637 + t2915*t4968 + t3051*t5159 + t1417*t4085*t550 + var1[1];
  p_output1[14]=0. - 0.183*t3461 + 0.15331*t3859 - 0.5*t4031 - 1.*t1309*t4085 + t3206*t4637 + t3240*t4968 + t3363*t5159 + t1226*t4345*t550 + t1500*t4531*t550 + var1[2];
  p_output1[15]=1.;
}



void H_RLfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
