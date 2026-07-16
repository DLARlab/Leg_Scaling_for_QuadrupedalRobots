/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:26:03 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FRfoot_src.h"

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
  double t600;
  double t4776;
  double t4846;
  double t4783;
  double t4855;
  double t2184;
  double t4791;
  double t4975;
  double t5006;
  double t5041;
  double t5047;
  double t5053;
  double t5061;
  double t1266;
  double t5158;
  double t5187;
  double t5210;
  double t1264;
  double t5216;
  double t5399;
  double t5423;
  double t5439;
  double t5451;
  double t5591;
  double t5603;
  double t5618;
  double t5337;
  double t5357;
  double t5369;
  double t1732;
  double t2014;
  double t2114;
  double t2133;
  double t2436;
  double t2913;
  double t3364;
  double t3400;
  double t5078;
  double t5093;
  double t5930;
  double t5959;
  double t5966;
  double t5984;
  double t5995;
  double t6002;
  double t5258;
  double t5275;
  double t6058;
  double t6063;
  double t6070;
  double t5446;
  double t5514;
  double t5543;
  double t5631;
  double t5683;
  double t5706;
  double t6092;
  double t6093;
  double t6115;
  double t6074;
  double t6078;
  double t6082;
  double t6531;
  double t6569;
  double t6574;
  double t6746;
  double t6774;
  double t6798;
  double t6579;
  double t6667;
  double t6692;
  t600 = Cos(var1[3]);
  t4776 = Cos(var1[5]);
  t4846 = Sin(var1[4]);
  t4783 = Sin(var1[3]);
  t4855 = Sin(var1[5]);
  t2184 = Cos(var1[6]);
  t4791 = -1.*t4776*t4783;
  t4975 = t600*t4846*t4855;
  t5006 = t4791 + t4975;
  t5041 = t600*t4776*t4846;
  t5047 = t4783*t4855;
  t5053 = t5041 + t5047;
  t5061 = Sin(var1[6]);
  t1266 = Cos(var1[7]);
  t5158 = t2184*t5053;
  t5187 = -1.*t5006*t5061;
  t5210 = t5158 + t5187;
  t1264 = Cos(var1[4]);
  t5216 = Sin(var1[7]);
  t5399 = Cos(var1[8]);
  t5423 = -1.*t5399;
  t5439 = 1. + t5423;
  t5451 = Sin(var1[8]);
  t5591 = t600*t1264*t1266;
  t5603 = -1.*t5210*t5216;
  t5618 = t5591 + t5603;
  t5337 = t1266*t5210;
  t5357 = t600*t1264*t5216;
  t5369 = t5337 + t5357;
  t1732 = -1.*t1266;
  t2014 = 1. + t1732;
  t2114 = 0.183*t2014;
  t2133 = 0. + t2114;
  t2436 = -1.*t2184;
  t2913 = 1. + t2436;
  t3364 = -0.047*t2913;
  t3400 = 0. + t3364;
  t5078 = 0.047*t5061;
  t5093 = 0. + t5078;
  t5930 = t600*t4776;
  t5959 = t4783*t4846*t4855;
  t5966 = t5930 + t5959;
  t5984 = t4776*t4783*t4846;
  t5995 = -1.*t600*t4855;
  t6002 = t5984 + t5995;
  t5258 = 0.183*t5216;
  t5275 = 0. + t5258;
  t6058 = t2184*t6002;
  t6063 = -1.*t5966*t5061;
  t6070 = t6058 + t6063;
  t5446 = -0.3*t5439;
  t5514 = 0.183*t5451;
  t5543 = 0. + t5446 + t5514;
  t5631 = 0.183*t5439;
  t5683 = 0.3*t5451;
  t5706 = 0. + t5631 + t5683;
  t6092 = t1264*t1266*t4783;
  t6093 = -1.*t6070*t5216;
  t6115 = t6092 + t6093;
  t6074 = t1266*t6070;
  t6078 = t1264*t4783*t5216;
  t6082 = t6074 + t6078;
  t6531 = t1264*t4776*t2184;
  t6569 = -1.*t1264*t4855*t5061;
  t6574 = t6531 + t6569;
  t6746 = -1.*t1266*t4846;
  t6774 = -1.*t6574*t5216;
  t6798 = t6746 + t6774;
  t6579 = t1266*t6574;
  t6667 = -1.*t4846*t5216;
  t6692 = t6579 + t6667;
  p_output1[0]=0. + t3400*t5006 - 0.17458*(t2184*t5006 + t5053*t5061) + t5053*t5093 + t5210*t5275 + t5369*t5543 + 0.183*(-1.*t5369*t5451 + t5399*t5618) - 0.6*(t5369*t5399 + t5451*t5618) + t5618*t5706 + t1264*t2133*t600 + var1[0];
  p_output1[1]=0. + t1264*t2133*t4783 + t3400*t5966 + t5093*t6002 - 0.17458*(t2184*t5966 + t5061*t6002) + t5275*t6070 + t5543*t6082 + t5706*t6115 + 0.183*(-1.*t5451*t6082 + t5399*t6115) - 0.6*(t5399*t6082 + t5451*t6115) + var1[1];
  p_output1[2]=0. - 1.*t2133*t4846 + t1264*t3400*t4855 - 0.17458*(t1264*t2184*t4855 + t1264*t4776*t5061) + t1264*t4776*t5093 + t5275*t6574 + t5543*t6692 + t5706*t6798 + 0.183*(-1.*t5451*t6692 + t5399*t6798) - 0.6*(t5399*t6692 + t5451*t6798) + var1[2];
}



void p_FRfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
