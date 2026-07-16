/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:03:46 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RLfoot_src.h"

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
  double t1745;
  double t3414;
  double t4697;
  double t3685;
  double t5079;
  double t3101;
  double t4569;
  double t5080;
  double t5083;
  double t5551;
  double t5648;
  double t5654;
  double t5660;
  double t2242;
  double t5676;
  double t285;
  double t5892;
  double t5923;
  double t5933;
  double t5945;
  double t5946;
  double t5953;
  double t5972;
  double t6230;
  double t6244;
  double t6249;
  double t6451;
  double t6508;
  double t6511;
  double t804;
  double t1049;
  double t1051;
  double t1653;
  double t3267;
  double t3411;
  double t5578;
  double t5579;
  double t5610;
  double t5616;
  double t6878;
  double t6890;
  double t6908;
  double t6914;
  double t6922;
  double t6966;
  double t5737;
  double t5878;
  double t5965;
  double t6035;
  double t6072;
  double t7440;
  double t7467;
  double t7542;
  double t6354;
  double t6411;
  double t6414;
  double t7601;
  double t7620;
  double t7640;
  double t7716;
  double t7733;
  double t7781;
  double t8899;
  double t8902;
  double t8904;
  double t8938;
  double t8939;
  double t8940;
  double t8958;
  double t9035;
  double t9042;
  t1745 = Cos(var1[3]);
  t3414 = Cos(var1[5]);
  t4697 = Sin(var1[3]);
  t3685 = Sin(var1[4]);
  t5079 = Sin(var1[5]);
  t3101 = Sin(var1[15]);
  t4569 = t1745*t3414*t3685;
  t5080 = t4697*t5079;
  t5083 = t4569 + t5080;
  t5551 = Cos(var1[15]);
  t5648 = -1.*t3414*t4697;
  t5654 = t1745*t3685*t5079;
  t5660 = t5648 + t5654;
  t2242 = Cos(var1[4]);
  t5676 = Sin(var1[16]);
  t285 = Cos(var1[16]);
  t5892 = t5551*t5083;
  t5923 = -1.*t3101*t5660;
  t5933 = t5892 + t5923;
  t5945 = Cos(var1[17]);
  t5946 = -1.*t5945;
  t5953 = 1. + t5946;
  t5972 = Sin(var1[17]);
  t6230 = t1745*t2242*t5676;
  t6244 = t285*t5933;
  t6249 = t6230 + t6244;
  t6451 = t285*t1745*t2242;
  t6508 = -1.*t5676*t5933;
  t6511 = t6451 + t6508;
  t804 = -1.*t285;
  t1049 = 1. + t804;
  t1051 = -0.183*t1049;
  t1653 = 0. + t1051;
  t3267 = -0.047*t3101;
  t3411 = 0. + t3267;
  t5578 = -1.*t5551;
  t5579 = 1. + t5578;
  t5610 = 0.047*t5579;
  t5616 = 0. + t5610;
  t6878 = t3414*t4697*t3685;
  t6890 = -1.*t1745*t5079;
  t6908 = t6878 + t6890;
  t6914 = t1745*t3414;
  t6922 = t4697*t3685*t5079;
  t6966 = t6914 + t6922;
  t5737 = -0.183*t5676;
  t5878 = 0. + t5737;
  t5965 = -0.25*t5953;
  t6035 = -0.183*t5972;
  t6072 = 0. + t5965 + t6035;
  t7440 = t5551*t6908;
  t7467 = -1.*t3101*t6966;
  t7542 = t7440 + t7467;
  t6354 = -0.183*t5953;
  t6411 = 0.25*t5972;
  t6414 = 0. + t6354 + t6411;
  t7601 = t2242*t5676*t4697;
  t7620 = t285*t7542;
  t7640 = t7601 + t7620;
  t7716 = t285*t2242*t4697;
  t7733 = -1.*t5676*t7542;
  t7781 = t7716 + t7733;
  t8899 = t5551*t2242*t3414;
  t8902 = -1.*t2242*t3101*t5079;
  t8904 = t8899 + t8902;
  t8938 = -1.*t5676*t3685;
  t8939 = t285*t8904;
  t8940 = t8938 + t8939;
  t8958 = -1.*t285*t3685;
  t9035 = -1.*t5676*t8904;
  t9042 = t8958 + t9035;
  p_output1[0]=0. + t1653*t1745*t2242 + t3411*t5083 + t5616*t5660 + 0.13205*(t3101*t5083 + t5551*t5660) + t5878*t5933 + t6072*t6249 + t6414*t6511 - 0.183*(-1.*t5972*t6249 + t5945*t6511) - 0.5*(t5945*t6249 + t5972*t6511) + var1[0];
  p_output1[1]=0. + t1653*t2242*t4697 + t3411*t6908 + t5616*t6966 + 0.13205*(t3101*t6908 + t5551*t6966) + t5878*t7542 + t6072*t7640 + t6414*t7781 - 0.183*(-1.*t5972*t7640 + t5945*t7781) - 0.5*(t5945*t7640 + t5972*t7781) + var1[1];
  p_output1[2]=0. + t2242*t3411*t3414 - 1.*t1653*t3685 + 0.13205*(t2242*t3101*t3414 + t2242*t5079*t5551) + t2242*t5079*t5616 + t5878*t8904 + t6072*t8940 + t6414*t9042 - 0.183*(-1.*t5972*t8940 + t5945*t9042) - 0.5*(t5945*t8940 + t5972*t9042) + var1[2];
}



void p_RLfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
