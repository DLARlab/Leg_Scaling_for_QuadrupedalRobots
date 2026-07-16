/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:03:44 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RRfoot_src.h"

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
  double t679;
  double t1513;
  double t1990;
  double t1887;
  double t2010;
  double t1392;
  double t790;
  double t1143;
  double t1458;
  double t1903;
  double t2147;
  double t2148;
  double t2173;
  double t2199;
  double t2293;
  double t2338;
  double t2397;
  double t2555;
  double t2578;
  double t353;
  double t2963;
  double t3440;
  double t3447;
  double t3457;
  double t3458;
  double t3475;
  double t3477;
  double t3506;
  double t3571;
  double t3607;
  double t3824;
  double t3916;
  double t3956;
  double t1244;
  double t2698;
  double t2820;
  double t2968;
  double t2990;
  double t3104;
  double t3391;
  double t3608;
  double t3771;
  double t3790;
  double t3792;
  double t3793;
  double t3815;
  double t3970;
  double t3976;
  double t4039;
  double t4102;
  double t4104;
  double t4140;
  double t4144;
  double t4150;
  double t5069;
  double t5072;
  double t2936;
  double t3256;
  double t3359;
  double t4555;
  double t4579;
  double t4590;
  double t4946;
  double t4955;
  double t4963;
  double t4964;
  double t4993;
  double t4997;
  double t5001;
  double t5003;
  double t5010;
  double t5018;
  double t4181;
  double t4322;
  double t4393;
  double t5047;
  double t5051;
  double t5079;
  double t5080;
  double t5084;
  double t5105;
  double t5112;
  double t5123;
  double t3788;
  double t3809;
  double t3810;
  double t4638;
  double t4827;
  double t4836;
  double t4498;
  double t4538;
  double t4544;
  double t4038;
  double t4131;
  double t4133;
  double t4919;
  double t4926;
  double t4930;
  t679 = Cos(var1[3]);
  t1513 = Cos(var1[5]);
  t1990 = Sin(var1[3]);
  t1887 = Sin(var1[4]);
  t2010 = Sin(var1[5]);
  t1392 = Cos(var1[13]);
  t790 = Cos(var1[4]);
  t1143 = Sin(var1[13]);
  t1458 = Cos(var1[12]);
  t1903 = t679*t1513*t1887;
  t2147 = t1990*t2010;
  t2148 = t1903 + t2147;
  t2173 = t1458*t2148;
  t2199 = Sin(var1[12]);
  t2293 = -1.*t1513*t1990;
  t2338 = t679*t1887*t2010;
  t2397 = t2293 + t2338;
  t2555 = -1.*t2199*t2397;
  t2578 = t2173 + t2555;
  t353 = Sin(var1[14]);
  t2963 = Cos(var1[14]);
  t3440 = t1513*t1990*t1887;
  t3447 = -1.*t679*t2010;
  t3457 = t3440 + t3447;
  t3458 = t1458*t3457;
  t3475 = t679*t1513;
  t3477 = t1990*t1887*t2010;
  t3506 = t3475 + t3477;
  t3571 = -1.*t2199*t3506;
  t3607 = t3458 + t3571;
  t3824 = t1458*t790*t1513;
  t3916 = -1.*t790*t2199*t2010;
  t3956 = t3824 + t3916;
  t1244 = t679*t790*t1143;
  t2698 = t1392*t2578;
  t2820 = t1244 + t2698;
  t2968 = t1392*t679*t790;
  t2990 = -1.*t1143*t2578;
  t3104 = t2968 + t2990;
  t3391 = t790*t1143*t1990;
  t3608 = t1392*t3607;
  t3771 = t3391 + t3608;
  t3790 = t1392*t790*t1990;
  t3792 = -1.*t1143*t3607;
  t3793 = t3790 + t3792;
  t3815 = -1.*t1143*t1887;
  t3970 = t1392*t3956;
  t3976 = t3815 + t3970;
  t4039 = -1.*t1392*t1887;
  t4102 = -1.*t1143*t3956;
  t4104 = t4039 + t4102;
  t4140 = t2199*t2148;
  t4144 = t1458*t2397;
  t4150 = t4140 + t4144;
  t5069 = -1.*t2963;
  t5072 = 1. + t5069;
  t2936 = -1.*t353*t2820;
  t3256 = t2963*t3104;
  t3359 = t2936 + t3256;
  t4555 = t2963*t2820;
  t4579 = t353*t3104;
  t4590 = t4555 + t4579;
  t4946 = -1.*t1392;
  t4955 = 1. + t4946;
  t4963 = -0.183*t4955;
  t4964 = 0. + t4963;
  t4993 = 0.047*t2199;
  t4997 = 0. + t4993;
  t5001 = -1.*t1458;
  t5003 = 1. + t5001;
  t5010 = -0.047*t5003;
  t5018 = 0. + t5010;
  t4181 = t2199*t3457;
  t4322 = t1458*t3506;
  t4393 = t4181 + t4322;
  t5047 = -0.183*t1143;
  t5051 = 0. + t5047;
  t5079 = -0.25*t5072;
  t5080 = -0.183*t353;
  t5084 = 0. + t5079 + t5080;
  t5105 = -0.183*t5072;
  t5112 = 0.25*t353;
  t5123 = 0. + t5105 + t5112;
  t3788 = -1.*t353*t3771;
  t3809 = t2963*t3793;
  t3810 = t3788 + t3809;
  t4638 = t2963*t3771;
  t4827 = t353*t3793;
  t4836 = t4638 + t4827;
  t4498 = t790*t1513*t2199;
  t4538 = t1458*t790*t2010;
  t4544 = t4498 + t4538;
  t4038 = -1.*t353*t3976;
  t4131 = t2963*t4104;
  t4133 = t4038 + t4131;
  t4919 = t2963*t3976;
  t4926 = t353*t4104;
  t4930 = t4919 + t4926;
  p_output1[0]=t3359;
  p_output1[1]=t3810;
  p_output1[2]=t4133;
  p_output1[3]=0.;
  p_output1[4]=t4150;
  p_output1[5]=t4393;
  p_output1[6]=t4544;
  p_output1[7]=0.;
  p_output1[8]=t4590;
  p_output1[9]=t4836;
  p_output1[10]=t4930;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.183*t3359 - 0.13205*t4150 - 0.5*t4590 + t2148*t4997 + t2397*t5018 + t2578*t5051 + t2820*t5084 + t3104*t5123 + t4964*t679*t790 + var1[0];
  p_output1[13]=0. - 0.183*t3810 - 0.13205*t4393 - 0.5*t4836 + t3457*t4997 + t3506*t5018 + t3607*t5051 + t3771*t5084 + t3793*t5123 + t1990*t4964*t790 + var1[1];
  p_output1[14]=0. - 0.183*t4133 - 0.13205*t4544 - 0.5*t4930 - 1.*t1887*t4964 + t3956*t5051 + t3976*t5084 + t4104*t5123 + t1513*t4997*t790 + t2010*t5018*t790 + var1[2];
  p_output1[15]=1.;
}



void H_RRfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
