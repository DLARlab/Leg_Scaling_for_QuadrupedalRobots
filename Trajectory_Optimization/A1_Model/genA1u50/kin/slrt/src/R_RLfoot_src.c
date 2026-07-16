/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:13:14 GMT-05:00
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
  double t705;
  double t4873;
  double t7502;
  double t7267;
  double t7503;
  double t4151;
  double t1362;
  double t1461;
  double t4212;
  double t7498;
  double t7518;
  double t7538;
  double t7541;
  double t7542;
  double t7546;
  double t7550;
  double t7565;
  double t7567;
  double t7569;
  double t505;
  double t7588;
  double t7602;
  double t7603;
  double t7605;
  double t7606;
  double t7608;
  double t7610;
  double t7619;
  double t7626;
  double t7628;
  double t7647;
  double t7649;
  double t7650;
  double t3321;
  double t7577;
  double t7579;
  double t7589;
  double t7591;
  double t7594;
  double t7601;
  double t7631;
  double t7635;
  double t7638;
  double t7642;
  double t7643;
  double t7646;
  double t7657;
  double t7658;
  double t7663;
  double t7665;
  double t7668;
  t705 = Cos(var1[3]);
  t4873 = Cos(var1[5]);
  t7502 = Sin(var1[3]);
  t7267 = Sin(var1[4]);
  t7503 = Sin(var1[5]);
  t4151 = Cos(var1[16]);
  t1362 = Cos(var1[4]);
  t1461 = Sin(var1[16]);
  t4212 = Cos(var1[15]);
  t7498 = t705*t4873*t7267;
  t7518 = t7502*t7503;
  t7538 = t7498 + t7518;
  t7541 = t4212*t7538;
  t7542 = Sin(var1[15]);
  t7546 = -1.*t4873*t7502;
  t7550 = t705*t7267*t7503;
  t7565 = t7546 + t7550;
  t7567 = -1.*t7542*t7565;
  t7569 = t7541 + t7567;
  t505 = Sin(var1[17]);
  t7588 = Cos(var1[17]);
  t7602 = t4873*t7502*t7267;
  t7603 = -1.*t705*t7503;
  t7605 = t7602 + t7603;
  t7606 = t4212*t7605;
  t7608 = t705*t4873;
  t7610 = t7502*t7267*t7503;
  t7619 = t7608 + t7610;
  t7626 = -1.*t7542*t7619;
  t7628 = t7606 + t7626;
  t7647 = t4212*t1362*t4873;
  t7649 = -1.*t1362*t7542*t7503;
  t7650 = t7647 + t7649;
  t3321 = t705*t1362*t1461;
  t7577 = t4151*t7569;
  t7579 = t3321 + t7577;
  t7589 = t4151*t705*t1362;
  t7591 = -1.*t1461*t7569;
  t7594 = t7589 + t7591;
  t7601 = t1362*t1461*t7502;
  t7631 = t4151*t7628;
  t7635 = t7601 + t7631;
  t7638 = t4151*t1362*t7502;
  t7642 = -1.*t1461*t7628;
  t7643 = t7638 + t7642;
  t7646 = -1.*t1461*t7267;
  t7657 = t4151*t7650;
  t7658 = t7646 + t7657;
  t7663 = -1.*t4151*t7267;
  t7665 = -1.*t1461*t7650;
  t7668 = t7663 + t7665;
  p_output1[0]=-1.*t505*t7579 + t7588*t7594;
  p_output1[1]=-1.*t505*t7635 + t7588*t7643;
  p_output1[2]=-1.*t505*t7658 + t7588*t7668;
  p_output1[3]=t7538*t7542 + t4212*t7565;
  p_output1[4]=t7542*t7605 + t4212*t7619;
  p_output1[5]=t1362*t4212*t7503 + t1362*t4873*t7542;
  p_output1[6]=t7579*t7588 + t505*t7594;
  p_output1[7]=t7588*t7635 + t505*t7643;
  p_output1[8]=t7588*t7658 + t505*t7668;
}



void R_RLfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
