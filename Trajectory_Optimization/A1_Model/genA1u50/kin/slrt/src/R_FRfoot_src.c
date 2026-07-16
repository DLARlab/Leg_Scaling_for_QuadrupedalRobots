/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:13:07 GMT-05:00
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
  double t5816;
  double t5891;
  double t5928;
  double t5903;
  double t5933;
  double t5857;
  double t5887;
  double t5925;
  double t5936;
  double t5937;
  double t5938;
  double t5940;
  double t5943;
  double t5944;
  double t5945;
  double t5946;
  double t5947;
  double t5855;
  double t5948;
  double t5128;
  double t5963;
  double t5966;
  double t5967;
  double t5970;
  double t5971;
  double t5972;
  double t5973;
  double t5974;
  double t5975;
  double t5955;
  double t5987;
  double t5988;
  double t5989;
  double t5952;
  double t5953;
  double t5954;
  double t5879;
  double t5949;
  double t5950;
  double t5979;
  double t5980;
  double t5981;
  double t5960;
  double t5976;
  double t5977;
  double t5993;
  double t5995;
  double t5996;
  double t5984;
  double t5990;
  double t5991;
  t5816 = Cos(var1[3]);
  t5891 = Cos(var1[5]);
  t5928 = Sin(var1[3]);
  t5903 = Sin(var1[4]);
  t5933 = Sin(var1[5]);
  t5857 = Cos(var1[7]);
  t5887 = Cos(var1[6]);
  t5925 = t5816*t5891*t5903;
  t5936 = t5928*t5933;
  t5937 = t5925 + t5936;
  t5938 = t5887*t5937;
  t5940 = -1.*t5891*t5928;
  t5943 = t5816*t5903*t5933;
  t5944 = t5940 + t5943;
  t5945 = Sin(var1[6]);
  t5946 = -1.*t5944*t5945;
  t5947 = t5938 + t5946;
  t5855 = Cos(var1[4]);
  t5948 = Sin(var1[7]);
  t5128 = Cos(var1[8]);
  t5963 = t5891*t5928*t5903;
  t5966 = -1.*t5816*t5933;
  t5967 = t5963 + t5966;
  t5970 = t5887*t5967;
  t5971 = t5816*t5891;
  t5972 = t5928*t5903*t5933;
  t5973 = t5971 + t5972;
  t5974 = -1.*t5973*t5945;
  t5975 = t5970 + t5974;
  t5955 = Sin(var1[8]);
  t5987 = t5855*t5891*t5887;
  t5988 = -1.*t5855*t5933*t5945;
  t5989 = t5987 + t5988;
  t5952 = t5857*t5947;
  t5953 = t5816*t5855*t5948;
  t5954 = t5952 + t5953;
  t5879 = t5816*t5855*t5857;
  t5949 = -1.*t5947*t5948;
  t5950 = t5879 + t5949;
  t5979 = t5857*t5975;
  t5980 = t5855*t5928*t5948;
  t5981 = t5979 + t5980;
  t5960 = t5855*t5857*t5928;
  t5976 = -1.*t5975*t5948;
  t5977 = t5960 + t5976;
  t5993 = t5857*t5989;
  t5995 = -1.*t5903*t5948;
  t5996 = t5993 + t5995;
  t5984 = -1.*t5857*t5903;
  t5990 = -1.*t5989*t5948;
  t5991 = t5984 + t5990;
  p_output1[0]=t5128*t5950 - 1.*t5954*t5955;
  p_output1[1]=t5128*t5977 - 1.*t5955*t5981;
  p_output1[2]=t5128*t5991 - 1.*t5955*t5996;
  p_output1[3]=t5887*t5944 + t5937*t5945;
  p_output1[4]=t5945*t5967 + t5887*t5973;
  p_output1[5]=t5855*t5887*t5933 + t5855*t5891*t5945;
  p_output1[6]=t5128*t5954 + t5950*t5955;
  p_output1[7]=t5955*t5977 + t5128*t5981;
  p_output1[8]=t5955*t5991 + t5128*t5996;
}



void R_FRfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
