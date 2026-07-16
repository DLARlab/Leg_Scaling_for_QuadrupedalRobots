/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:10:22 GMT-05:00
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
  double t175;
  double t8629;
  double t10430;
  double t10300;
  double t10437;
  double t4306;
  double t10344;
  double t10438;
  double t10442;
  double t10459;
  double t10462;
  double t10467;
  double t10468;
  double t1410;
  double t2707;
  double t10523;
  double t10558;
  double t10561;
  double t10568;
  double t10604;
  double t10611;
  double t10619;
  double t10626;
  double t10589;
  double t10592;
  double t10603;
  double t10665;
  double t10666;
  double t10673;
  double t2763;
  double t3248;
  double t4183;
  double t4255;
  double t4339;
  double t6578;
  double t7030;
  double t8163;
  double t10480;
  double t10488;
  double t10746;
  double t10753;
  double t10755;
  double t10757;
  double t10758;
  double t10760;
  double t10572;
  double t10573;
  double t10768;
  double t10770;
  double t10771;
  double t10621;
  double t10633;
  double t10650;
  double t10680;
  double t10681;
  double t10690;
  double t10775;
  double t10781;
  double t10784;
  double t10790;
  double t10806;
  double t10815;
  double t10862;
  double t10863;
  double t10867;
  double t10871;
  double t10875;
  double t10877;
  double t10881;
  double t10887;
  double t10892;
  t175 = Cos(var1[3]);
  t8629 = Cos(var1[5]);
  t10430 = Sin(var1[4]);
  t10300 = Sin(var1[3]);
  t10437 = Sin(var1[5]);
  t4306 = Cos(var1[6]);
  t10344 = -1.*t8629*t10300;
  t10438 = t175*t10430*t10437;
  t10442 = t10344 + t10438;
  t10459 = t175*t8629*t10430;
  t10462 = t10300*t10437;
  t10467 = t10459 + t10462;
  t10468 = Sin(var1[6]);
  t1410 = Cos(var1[4]);
  t2707 = Cos(var1[7]);
  t10523 = t4306*t10467;
  t10558 = -1.*t10442*t10468;
  t10561 = t10523 + t10558;
  t10568 = Sin(var1[7]);
  t10604 = Cos(var1[8]);
  t10611 = -1.*t10604;
  t10619 = 1. + t10611;
  t10626 = Sin(var1[8]);
  t10589 = t175*t1410*t2707;
  t10592 = -1.*t10561*t10568;
  t10603 = t10589 + t10592;
  t10665 = t2707*t10561;
  t10666 = t175*t1410*t10568;
  t10673 = t10665 + t10666;
  t2763 = -1.*t2707;
  t3248 = 1. + t2763;
  t4183 = 0.183*t3248;
  t4255 = 0. + t4183;
  t4339 = -1.*t4306;
  t6578 = 1. + t4339;
  t7030 = -0.047*t6578;
  t8163 = 0. + t7030;
  t10480 = 0.047*t10468;
  t10488 = 0. + t10480;
  t10746 = t175*t8629;
  t10753 = t10300*t10430*t10437;
  t10755 = t10746 + t10753;
  t10757 = t8629*t10300*t10430;
  t10758 = -1.*t175*t10437;
  t10760 = t10757 + t10758;
  t10572 = 0.183*t10568;
  t10573 = 0. + t10572;
  t10768 = t4306*t10760;
  t10770 = -1.*t10755*t10468;
  t10771 = t10768 + t10770;
  t10621 = 0.183*t10619;
  t10633 = 0.1*t10626;
  t10650 = 0. + t10621 + t10633;
  t10680 = -0.1*t10619;
  t10681 = 0.183*t10626;
  t10690 = 0. + t10680 + t10681;
  t10775 = t1410*t2707*t10300;
  t10781 = -1.*t10771*t10568;
  t10784 = t10775 + t10781;
  t10790 = t2707*t10771;
  t10806 = t1410*t10300*t10568;
  t10815 = t10790 + t10806;
  t10862 = t1410*t8629*t4306;
  t10863 = -1.*t1410*t10437*t10468;
  t10867 = t10862 + t10863;
  t10871 = -1.*t2707*t10430;
  t10875 = -1.*t10867*t10568;
  t10877 = t10871 + t10875;
  t10881 = t2707*t10867;
  t10887 = -1.*t10430*t10568;
  t10892 = t10881 + t10887;
  p_output1[0]=0. + t10467*t10488 + t10561*t10573 + t10603*t10650 - 0.2*(t10603*t10626 + t10604*t10673) + 0.183*(t10603*t10604 - 1.*t10626*t10673) + t10673*t10690 + t1410*t175*t4255 - 0.13205*(t10467*t10468 + t10442*t4306) + t10442*t8163 + var1[0];
  p_output1[1]=0. + t10488*t10760 + t10573*t10771 + t10650*t10784 + t10690*t10815 - 0.2*(t10626*t10784 + t10604*t10815) + 0.183*(t10604*t10784 - 1.*t10626*t10815) + t10300*t1410*t4255 - 0.13205*(t10468*t10760 + t10755*t4306) + t10755*t8163 + var1[1];
  p_output1[2]=0. + t10573*t10867 + t10650*t10877 + t10690*t10892 - 0.2*(t10626*t10877 + t10604*t10892) + 0.183*(t10604*t10877 - 1.*t10626*t10892) - 1.*t10430*t4255 + t10437*t1410*t8163 + t10488*t1410*t8629 - 0.13205*(t10437*t1410*t4306 + t10468*t1410*t8629) + var1[2];
}



void p_FRfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
