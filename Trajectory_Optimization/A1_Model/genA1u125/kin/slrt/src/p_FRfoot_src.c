/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:20:45 GMT-05:00
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
  double t411;
  double t3764;
  double t4348;
  double t3786;
  double t4360;
  double t2506;
  double t4163;
  double t5339;
  double t5916;
  double t6963;
  double t7169;
  double t7238;
  double t7265;
  double t1445;
  double t7533;
  double t7534;
  double t7561;
  double t1039;
  double t7580;
  double t7698;
  double t7703;
  double t7715;
  double t7755;
  double t7772;
  double t7776;
  double t7804;
  double t7606;
  double t7646;
  double t7677;
  double t1810;
  double t1812;
  double t1952;
  double t2458;
  double t2891;
  double t2970;
  double t3045;
  double t3715;
  double t7272;
  double t7356;
  double t8012;
  double t8033;
  double t8034;
  double t8061;
  double t8112;
  double t8118;
  double t7581;
  double t7600;
  double t8197;
  double t8201;
  double t8214;
  double t7722;
  double t7763;
  double t7766;
  double t7810;
  double t7820;
  double t7821;
  double t8271;
  double t8284;
  double t8308;
  double t8235;
  double t8246;
  double t8252;
  double t8558;
  double t8563;
  double t8572;
  double t8651;
  double t8723;
  double t8753;
  double t8612;
  double t8616;
  double t8631;
  t411 = Cos(var1[3]);
  t3764 = Cos(var1[5]);
  t4348 = Sin(var1[4]);
  t3786 = Sin(var1[3]);
  t4360 = Sin(var1[5]);
  t2506 = Cos(var1[6]);
  t4163 = -1.*t3764*t3786;
  t5339 = t411*t4348*t4360;
  t5916 = t4163 + t5339;
  t6963 = t411*t3764*t4348;
  t7169 = t3786*t4360;
  t7238 = t6963 + t7169;
  t7265 = Sin(var1[6]);
  t1445 = Cos(var1[7]);
  t7533 = t2506*t7238;
  t7534 = -1.*t5916*t7265;
  t7561 = t7533 + t7534;
  t1039 = Cos(var1[4]);
  t7580 = Sin(var1[7]);
  t7698 = Cos(var1[8]);
  t7703 = -1.*t7698;
  t7715 = 1. + t7703;
  t7755 = Sin(var1[8]);
  t7772 = t411*t1039*t1445;
  t7776 = -1.*t7561*t7580;
  t7804 = t7772 + t7776;
  t7606 = t1445*t7561;
  t7646 = t411*t1039*t7580;
  t7677 = t7606 + t7646;
  t1810 = -1.*t1445;
  t1812 = 1. + t1810;
  t1952 = 0.183*t1812;
  t2458 = 0. + t1952;
  t2891 = -1.*t2506;
  t2970 = 1. + t2891;
  t3045 = -0.047*t2970;
  t3715 = 0. + t3045;
  t7272 = 0.047*t7265;
  t7356 = 0. + t7272;
  t8012 = t411*t3764;
  t8033 = t3786*t4348*t4360;
  t8034 = t8012 + t8033;
  t8061 = t3764*t3786*t4348;
  t8112 = -1.*t411*t4360;
  t8118 = t8061 + t8112;
  t7581 = 0.183*t7580;
  t7600 = 0. + t7581;
  t8197 = t2506*t8118;
  t8201 = -1.*t8034*t7265;
  t8214 = t8197 + t8201;
  t7722 = -0.25*t7715;
  t7763 = 0.183*t7755;
  t7766 = 0. + t7722 + t7763;
  t7810 = 0.183*t7715;
  t7820 = 0.25*t7755;
  t7821 = 0. + t7810 + t7820;
  t8271 = t1039*t1445*t3786;
  t8284 = -1.*t8214*t7580;
  t8308 = t8271 + t8284;
  t8235 = t1445*t8214;
  t8246 = t1039*t3786*t7580;
  t8252 = t8235 + t8246;
  t8558 = t1039*t3764*t2506;
  t8563 = -1.*t1039*t4360*t7265;
  t8572 = t8558 + t8563;
  t8651 = -1.*t1445*t4348;
  t8723 = -1.*t8572*t7580;
  t8753 = t8651 + t8723;
  t8612 = t1445*t8572;
  t8616 = -1.*t4348*t7580;
  t8631 = t8612 + t8616;
  p_output1[0]=0. + t1039*t2458*t411 + t3715*t5916 - 0.15331*(t2506*t5916 + t7238*t7265) + t7238*t7356 + t7561*t7600 + t7677*t7766 + 0.183*(-1.*t7677*t7755 + t7698*t7804) - 0.5*(t7677*t7698 + t7755*t7804) + t7804*t7821 + var1[0];
  p_output1[1]=0. + t1039*t2458*t3786 + t3715*t8034 + t7356*t8118 - 0.15331*(t2506*t8034 + t7265*t8118) + t7600*t8214 + t7766*t8252 + t7821*t8308 + 0.183*(-1.*t7755*t8252 + t7698*t8308) - 0.5*(t7698*t8252 + t7755*t8308) + var1[1];
  p_output1[2]=0. - 1.*t2458*t4348 + t1039*t3715*t4360 - 0.15331*(t1039*t2506*t4360 + t1039*t3764*t7265) + t1039*t3764*t7356 + t7600*t8572 + t7766*t8631 + t7821*t8753 + 0.183*(-1.*t7755*t8631 + t7698*t8753) - 0.5*(t7698*t8631 + t7755*t8753) + var1[2];
}



void p_FRfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
