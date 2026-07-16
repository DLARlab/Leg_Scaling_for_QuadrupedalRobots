/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:03:45 GMT-05:00
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
  double t1682;
  double t3391;
  double t3457;
  double t3416;
  double t3458;
  double t2137;
  double t1709;
  double t1939;
  double t2698;
  double t3440;
  double t3475;
  double t3477;
  double t3574;
  double t3608;
  double t3754;
  double t3790;
  double t3793;
  double t3807;
  double t3809;
  double t1454;
  double t3964;
  double t4150;
  double t4154;
  double t4181;
  double t4187;
  double t4302;
  double t4311;
  double t4322;
  double t4393;
  double t4498;
  double t4836;
  double t4854;
  double t4919;
  double t2073;
  double t3810;
  double t3824;
  double t3970;
  double t4104;
  double t4131;
  double t4144;
  double t4538;
  double t4544;
  double t4579;
  double t4590;
  double t4601;
  double t4827;
  double t4926;
  double t4930;
  double t4990;
  double t4992;
  double t4993;
  t1682 = Cos(var1[3]);
  t3391 = Cos(var1[5]);
  t3457 = Sin(var1[3]);
  t3416 = Sin(var1[4]);
  t3458 = Sin(var1[5]);
  t2137 = Cos(var1[13]);
  t1709 = Cos(var1[4]);
  t1939 = Sin(var1[13]);
  t2698 = Cos(var1[12]);
  t3440 = t1682*t3391*t3416;
  t3475 = t3457*t3458;
  t3477 = t3440 + t3475;
  t3574 = t2698*t3477;
  t3608 = Sin(var1[12]);
  t3754 = -1.*t3391*t3457;
  t3790 = t1682*t3416*t3458;
  t3793 = t3754 + t3790;
  t3807 = -1.*t3608*t3793;
  t3809 = t3574 + t3807;
  t1454 = Sin(var1[14]);
  t3964 = Cos(var1[14]);
  t4150 = t3391*t3457*t3416;
  t4154 = -1.*t1682*t3458;
  t4181 = t4150 + t4154;
  t4187 = t2698*t4181;
  t4302 = t1682*t3391;
  t4311 = t3457*t3416*t3458;
  t4322 = t4302 + t4311;
  t4393 = -1.*t3608*t4322;
  t4498 = t4187 + t4393;
  t4836 = t2698*t1709*t3391;
  t4854 = -1.*t1709*t3608*t3458;
  t4919 = t4836 + t4854;
  t2073 = t1682*t1709*t1939;
  t3810 = t2137*t3809;
  t3824 = t2073 + t3810;
  t3970 = t2137*t1682*t1709;
  t4104 = -1.*t1939*t3809;
  t4131 = t3970 + t4104;
  t4144 = t1709*t1939*t3457;
  t4538 = t2137*t4498;
  t4544 = t4144 + t4538;
  t4579 = t2137*t1709*t3457;
  t4590 = -1.*t1939*t4498;
  t4601 = t4579 + t4590;
  t4827 = -1.*t1939*t3416;
  t4926 = t2137*t4919;
  t4930 = t4827 + t4926;
  t4990 = -1.*t2137*t3416;
  t4992 = -1.*t1939*t4919;
  t4993 = t4990 + t4992;
  p_output1[0]=-1.*t1454*t3824 + t3964*t4131;
  p_output1[1]=-1.*t1454*t4544 + t3964*t4601;
  p_output1[2]=-1.*t1454*t4930 + t3964*t4993;
  p_output1[3]=t3477*t3608 + t2698*t3793;
  p_output1[4]=t3608*t4181 + t2698*t4322;
  p_output1[5]=t1709*t2698*t3458 + t1709*t3391*t3608;
  p_output1[6]=t3824*t3964 + t1454*t4131;
  p_output1[7]=t3964*t4544 + t1454*t4601;
  p_output1[8]=t3964*t4930 + t1454*t4993;
}



void R_RRfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
