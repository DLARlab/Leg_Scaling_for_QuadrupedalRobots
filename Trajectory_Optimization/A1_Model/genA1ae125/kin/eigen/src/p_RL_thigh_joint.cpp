/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:04:35 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RL_thigh_joint.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE static inline        /* use standard inline */
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
static void output1(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  double t1358;
  double t2250;
  double t2316;
  double t2260;
  double t2375;
  double t1963;
  double t2272;
  double t2711;
  double t3074;
  double t3906;
  double t5341;
  double t5374;
  double t5378;
  double t230;
  double t1755;
  double t5416;
  double t5442;
  double t5443;
  double t5447;
  double t460;
  double t624;
  double t788;
  double t836;
  double t2164;
  double t2232;
  double t4419;
  double t4513;
  double t4658;
  double t5138;
  double t5491;
  double t5502;
  double t5505;
  double t5518;
  double t5525;
  double t5532;
  double t5424;
  double t5430;
  double t5602;
  double t5614;
  double t5619;
  double t5712;
  double t5720;
  double t5749;
  t1358 = Cos(var1[3]);
  t2250 = Cos(var1[5]);
  t2316 = Sin(var1[3]);
  t2260 = Sin(var1[4]);
  t2375 = Sin(var1[5]);
  t1963 = Sin(var1[15]);
  t2272 = t1358*t2250*t2260;
  t2711 = t2316*t2375;
  t3074 = t2272 + t2711;
  t3906 = Cos(var1[15]);
  t5341 = -1.*t2250*t2316;
  t5374 = t1358*t2260*t2375;
  t5378 = t5341 + t5374;
  t230 = Cos(var1[16]);
  t1755 = Cos(var1[4]);
  t5416 = Sin(var1[16]);
  t5442 = t3906*t3074;
  t5443 = -1.*t1963*t5378;
  t5447 = t5442 + t5443;
  t460 = -1.*t230;
  t624 = 1. + t460;
  t788 = -0.183*t624;
  t836 = 0. + t788;
  t2164 = -0.047*t1963;
  t2232 = 0. + t2164;
  t4419 = -1.*t3906;
  t4513 = 1. + t4419;
  t4658 = 0.047*t4513;
  t5138 = 0. + t4658;
  t5491 = t2250*t2316*t2260;
  t5502 = -1.*t1358*t2375;
  t5505 = t5491 + t5502;
  t5518 = t1358*t2250;
  t5525 = t2316*t2260*t2375;
  t5532 = t5518 + t5525;
  t5424 = -0.183*t5416;
  t5430 = 0. + t5424;
  t5602 = t3906*t5505;
  t5614 = -1.*t1963*t5532;
  t5619 = t5602 + t5614;
  t5712 = t3906*t1755*t2250;
  t5720 = -1.*t1755*t1963*t2375;
  t5749 = t5712 + t5720;

  p_output1(0)=0. + t2232*t3074 + t5138*t5378 + 0.13205*(t1963*t3074 + t3906*t5378) + t5430*t5447 - 0.183*(t1358*t1755*t230 - 1.*t5416*t5447) + t1358*t1755*t836 + var1(0);
  p_output1(1)=0. + t2232*t5505 + t5138*t5532 + 0.13205*(t1963*t5505 + t3906*t5532) + t5430*t5619 - 0.183*(t1755*t230*t2316 - 1.*t5416*t5619) + t1755*t2316*t836 + var1(1);
  p_output1(2)=0. + t1755*t2232*t2250 + 0.13205*(t1755*t1963*t2250 + t1755*t2375*t3906) + t1755*t2375*t5138 + t5430*t5749 - 0.183*(-1.*t2260*t230 - 1.*t5416*t5749) - 1.*t2260*t836 + var1(2);
}


       
Eigen::Matrix<double,3,1> p_RL_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_RL_thigh_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



