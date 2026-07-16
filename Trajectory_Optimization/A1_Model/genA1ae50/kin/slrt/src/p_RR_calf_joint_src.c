/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:10:12 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RR_calf_joint_src.h"

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
  double t4027;
  double t8408;
  double t8418;
  double t8409;
  double t8419;
  double t8366;
  double t8410;
  double t8422;
  double t8425;
  double t8428;
  double t8436;
  double t8439;
  double t8447;
  double t5751;
  double t8470;
  double t389;
  double t8476;
  double t8486;
  double t8490;
  double t8493;
  double t8496;
  double t8497;
  double t8500;
  double t8507;
  double t8509;
  double t8514;
  double t8526;
  double t8532;
  double t8533;
  double t1077;
  double t1171;
  double t2699;
  double t2987;
  double t8368;
  double t8399;
  double t8429;
  double t8430;
  double t8432;
  double t8434;
  double t8569;
  double t8571;
  double t8574;
  double t8578;
  double t8580;
  double t8581;
  double t8471;
  double t8474;
  double t8498;
  double t8503;
  double t8505;
  double t8596;
  double t8599;
  double t8616;
  double t8516;
  double t8518;
  double t8523;
  double t8627;
  double t8631;
  double t8632;
  double t8637;
  double t8640;
  double t8642;
  double t8662;
  double t8663;
  double t8666;
  double t8669;
  double t8670;
  double t8674;
  double t8677;
  double t8678;
  double t8682;
  t4027 = Cos(var1[3]);
  t8408 = Cos(var1[5]);
  t8418 = Sin(var1[3]);
  t8409 = Sin(var1[4]);
  t8419 = Sin(var1[5]);
  t8366 = Sin(var1[12]);
  t8410 = t4027*t8408*t8409;
  t8422 = t8418*t8419;
  t8425 = t8410 + t8422;
  t8428 = Cos(var1[12]);
  t8436 = -1.*t8408*t8418;
  t8439 = t4027*t8409*t8419;
  t8447 = t8436 + t8439;
  t5751 = Cos(var1[4]);
  t8470 = Sin(var1[13]);
  t389 = Cos(var1[13]);
  t8476 = t8428*t8425;
  t8486 = -1.*t8366*t8447;
  t8490 = t8476 + t8486;
  t8493 = Cos(var1[14]);
  t8496 = -1.*t8493;
  t8497 = 1. + t8496;
  t8500 = Sin(var1[14]);
  t8507 = t4027*t5751*t8470;
  t8509 = t389*t8490;
  t8514 = t8507 + t8509;
  t8526 = t389*t4027*t5751;
  t8532 = -1.*t8470*t8490;
  t8533 = t8526 + t8532;
  t1077 = -1.*t389;
  t1171 = 1. + t1077;
  t2699 = -0.183*t1171;
  t2987 = 0. + t2699;
  t8368 = 0.047*t8366;
  t8399 = 0. + t8368;
  t8429 = -1.*t8428;
  t8430 = 1. + t8429;
  t8432 = -0.047*t8430;
  t8434 = 0. + t8432;
  t8569 = t8408*t8418*t8409;
  t8571 = -1.*t4027*t8419;
  t8574 = t8569 + t8571;
  t8578 = t4027*t8408;
  t8580 = t8418*t8409*t8419;
  t8581 = t8578 + t8580;
  t8471 = -0.183*t8470;
  t8474 = 0. + t8471;
  t8498 = -0.1*t8497;
  t8503 = -0.183*t8500;
  t8505 = 0. + t8498 + t8503;
  t8596 = t8428*t8574;
  t8599 = -1.*t8366*t8581;
  t8616 = t8596 + t8599;
  t8516 = -0.183*t8497;
  t8518 = 0.1*t8500;
  t8523 = 0. + t8516 + t8518;
  t8627 = t5751*t8470*t8418;
  t8631 = t389*t8616;
  t8632 = t8627 + t8631;
  t8637 = t389*t5751*t8418;
  t8640 = -1.*t8470*t8616;
  t8642 = t8637 + t8640;
  t8662 = t8428*t5751*t8408;
  t8663 = -1.*t5751*t8366*t8419;
  t8666 = t8662 + t8663;
  t8669 = -1.*t8470*t8409;
  t8670 = t389*t8666;
  t8674 = t8669 + t8670;
  t8677 = -1.*t389*t8409;
  t8678 = -1.*t8470*t8666;
  t8682 = t8677 + t8678;
  p_output1[0]=0. + t2987*t4027*t5751 + t8399*t8425 + t8434*t8447 - 0.13205*(t8366*t8425 + t8428*t8447) + t8474*t8490 + t8505*t8514 + t8523*t8533 - 0.183*(-1.*t8500*t8514 + t8493*t8533) - 0.1*(t8493*t8514 + t8500*t8533) + var1[0];
  p_output1[1]=0. + t2987*t5751*t8418 + t8399*t8574 + t8434*t8581 - 0.13205*(t8366*t8574 + t8428*t8581) + t8474*t8616 + t8505*t8632 + t8523*t8642 - 0.183*(-1.*t8500*t8632 + t8493*t8642) - 0.1*(t8493*t8632 + t8500*t8642) + var1[1];
  p_output1[2]=0. + t5751*t8399*t8408 - 1.*t2987*t8409 - 0.13205*(t5751*t8366*t8408 + t5751*t8419*t8428) + t5751*t8419*t8434 + t8474*t8666 + t8505*t8674 + t8523*t8682 - 0.183*(-1.*t8500*t8674 + t8493*t8682) - 0.1*(t8493*t8674 + t8500*t8682) + var1[2];
}



void p_RR_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
