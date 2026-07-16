/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:26:12 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RLfoot_src.h"

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
  double t678;
  double t2026;
  double t3340;
  double t2253;
  double t3501;
  double t1875;
  double t748;
  double t1558;
  double t1880;
  double t2831;
  double t3604;
  double t3612;
  double t3680;
  double t3735;
  double t4142;
  double t4454;
  double t4617;
  double t4631;
  double t4714;
  double t349;
  double t4885;
  double t5338;
  double t5394;
  double t5482;
  double t5488;
  double t5579;
  double t5603;
  double t5634;
  double t5645;
  double t5655;
  double t5890;
  double t5916;
  double t5948;
  double t1852;
  double t4736;
  double t4750;
  double t4916;
  double t4961;
  double t4978;
  double t5241;
  double t5657;
  double t5667;
  double t5733;
  double t5783;
  double t5799;
  double t5850;
  double t5971;
  double t5973;
  double t5975;
  double t5985;
  double t5988;
  t678 = Cos(var1[3]);
  t2026 = Cos(var1[5]);
  t3340 = Sin(var1[3]);
  t2253 = Sin(var1[4]);
  t3501 = Sin(var1[5]);
  t1875 = Cos(var1[16]);
  t748 = Cos(var1[4]);
  t1558 = Sin(var1[16]);
  t1880 = Cos(var1[15]);
  t2831 = t678*t2026*t2253;
  t3604 = t3340*t3501;
  t3612 = t2831 + t3604;
  t3680 = t1880*t3612;
  t3735 = Sin(var1[15]);
  t4142 = -1.*t2026*t3340;
  t4454 = t678*t2253*t3501;
  t4617 = t4142 + t4454;
  t4631 = -1.*t3735*t4617;
  t4714 = t3680 + t4631;
  t349 = Sin(var1[17]);
  t4885 = Cos(var1[17]);
  t5338 = t2026*t3340*t2253;
  t5394 = -1.*t678*t3501;
  t5482 = t5338 + t5394;
  t5488 = t1880*t5482;
  t5579 = t678*t2026;
  t5603 = t3340*t2253*t3501;
  t5634 = t5579 + t5603;
  t5645 = -1.*t3735*t5634;
  t5655 = t5488 + t5645;
  t5890 = t1880*t748*t2026;
  t5916 = -1.*t748*t3735*t3501;
  t5948 = t5890 + t5916;
  t1852 = t678*t748*t1558;
  t4736 = t1875*t4714;
  t4750 = t1852 + t4736;
  t4916 = t1875*t678*t748;
  t4961 = -1.*t1558*t4714;
  t4978 = t4916 + t4961;
  t5241 = t748*t1558*t3340;
  t5657 = t1875*t5655;
  t5667 = t5241 + t5657;
  t5733 = t1875*t748*t3340;
  t5783 = -1.*t1558*t5655;
  t5799 = t5733 + t5783;
  t5850 = -1.*t1558*t2253;
  t5971 = t1875*t5948;
  t5973 = t5850 + t5971;
  t5975 = -1.*t1875*t2253;
  t5985 = -1.*t1558*t5948;
  t5988 = t5975 + t5985;
  p_output1[0]=-1.*t349*t4750 + t4885*t4978;
  p_output1[1]=-1.*t349*t5667 + t4885*t5799;
  p_output1[2]=-1.*t349*t5973 + t4885*t5988;
  p_output1[3]=t3612*t3735 + t1880*t4617;
  p_output1[4]=t3735*t5482 + t1880*t5634;
  p_output1[5]=t1880*t3501*t748 + t2026*t3735*t748;
  p_output1[6]=t4750*t4885 + t349*t4978;
  p_output1[7]=t4885*t5667 + t349*t5799;
  p_output1[8]=t4885*t5973 + t349*t5988;
}



void R_RLfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
