/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:26:07 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_FLfoot_src.h"

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
  double t1111;
  double t2842;
  double t3195;
  double t2994;
  double t3226;
  double t1883;
  double t1330;
  double t1452;
  double t1978;
  double t3152;
  double t4055;
  double t4098;
  double t4166;
  double t4255;
  double t4391;
  double t4394;
  double t4457;
  double t4460;
  double t4477;
  double t569;
  double t4568;
  double t4755;
  double t4772;
  double t4821;
  double t4836;
  double t4849;
  double t4854;
  double t4868;
  double t4880;
  double t4882;
  double t5088;
  double t5095;
  double t5116;
  double t1508;
  double t4508;
  double t4560;
  double t4571;
  double t4693;
  double t4717;
  double t4743;
  double t4971;
  double t4985;
  double t5025;
  double t5030;
  double t5068;
  double t5081;
  double t5166;
  double t5191;
  double t5196;
  double t5229;
  double t5230;
  t1111 = Cos(var1[3]);
  t2842 = Cos(var1[5]);
  t3195 = Sin(var1[3]);
  t2994 = Sin(var1[4]);
  t3226 = Sin(var1[5]);
  t1883 = Cos(var1[10]);
  t1330 = Cos(var1[4]);
  t1452 = Sin(var1[10]);
  t1978 = Cos(var1[9]);
  t3152 = t1111*t2842*t2994;
  t4055 = t3195*t3226;
  t4098 = t3152 + t4055;
  t4166 = t1978*t4098;
  t4255 = Sin(var1[9]);
  t4391 = -1.*t2842*t3195;
  t4394 = t1111*t2994*t3226;
  t4457 = t4391 + t4394;
  t4460 = -1.*t4255*t4457;
  t4477 = t4166 + t4460;
  t569 = Sin(var1[11]);
  t4568 = Cos(var1[11]);
  t4755 = t2842*t3195*t2994;
  t4772 = -1.*t1111*t3226;
  t4821 = t4755 + t4772;
  t4836 = t1978*t4821;
  t4849 = t1111*t2842;
  t4854 = t3195*t2994*t3226;
  t4868 = t4849 + t4854;
  t4880 = -1.*t4255*t4868;
  t4882 = t4836 + t4880;
  t5088 = t1978*t1330*t2842;
  t5095 = -1.*t1330*t4255*t3226;
  t5116 = t5088 + t5095;
  t1508 = t1111*t1330*t1452;
  t4508 = t1883*t4477;
  t4560 = t1508 + t4508;
  t4571 = t1883*t1111*t1330;
  t4693 = -1.*t1452*t4477;
  t4717 = t4571 + t4693;
  t4743 = t1330*t1452*t3195;
  t4971 = t1883*t4882;
  t4985 = t4743 + t4971;
  t5025 = t1883*t1330*t3195;
  t5030 = -1.*t1452*t4882;
  t5068 = t5025 + t5030;
  t5081 = -1.*t1452*t2994;
  t5166 = t1883*t5116;
  t5191 = t5081 + t5166;
  t5196 = -1.*t1883*t2994;
  t5229 = -1.*t1452*t5116;
  t5230 = t5196 + t5229;
  p_output1[0]=t4568*t4717 - 1.*t4560*t569;
  p_output1[1]=t4568*t5068 - 1.*t4985*t569;
  p_output1[2]=t4568*t5230 - 1.*t5191*t569;
  p_output1[3]=t4098*t4255 + t1978*t4457;
  p_output1[4]=t4255*t4821 + t1978*t4868;
  p_output1[5]=t1330*t1978*t3226 + t1330*t2842*t4255;
  p_output1[6]=t4560*t4568 + t4717*t569;
  p_output1[7]=t4568*t4985 + t5068*t569;
  p_output1[8]=t4568*t5191 + t5230*t569;
}



void R_FLfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
