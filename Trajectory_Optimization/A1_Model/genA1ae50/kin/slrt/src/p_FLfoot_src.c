/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:10:24 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FLfoot_src.h"

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
  double t1706;
  double t1790;
  double t1853;
  double t1812;
  double t2395;
  double t1745;
  double t1840;
  double t2557;
  double t3950;
  double t5584;
  double t6515;
  double t6525;
  double t6531;
  double t1710;
  double t6609;
  double t1387;
  double t6612;
  double t6631;
  double t7171;
  double t8711;
  double t8876;
  double t8932;
  double t8982;
  double t9620;
  double t9645;
  double t9669;
  double t9876;
  double t9886;
  double t10140;
  double t1526;
  double t1607;
  double t1662;
  double t1690;
  double t1746;
  double t1786;
  double t5591;
  double t6223;
  double t6443;
  double t6471;
  double t10528;
  double t10536;
  double t10589;
  double t10625;
  double t10633;
  double t10644;
  double t6610;
  double t6611;
  double t8949;
  double t9468;
  double t9567;
  double t10700;
  double t10710;
  double t10711;
  double t9785;
  double t9809;
  double t9832;
  double t10722;
  double t10730;
  double t10744;
  double t10753;
  double t10785;
  double t10790;
  double t10930;
  double t10932;
  double t10933;
  double t10946;
  double t10956;
  double t10958;
  double t10998;
  double t10999;
  double t11001;
  t1706 = Cos(var1[3]);
  t1790 = Cos(var1[5]);
  t1853 = Sin(var1[3]);
  t1812 = Sin(var1[4]);
  t2395 = Sin(var1[5]);
  t1745 = Sin(var1[9]);
  t1840 = t1706*t1790*t1812;
  t2557 = t1853*t2395;
  t3950 = t1840 + t2557;
  t5584 = Cos(var1[9]);
  t6515 = -1.*t1790*t1853;
  t6525 = t1706*t1812*t2395;
  t6531 = t6515 + t6525;
  t1710 = Cos(var1[4]);
  t6609 = Sin(var1[10]);
  t1387 = Cos(var1[10]);
  t6612 = t5584*t3950;
  t6631 = -1.*t1745*t6531;
  t7171 = t6612 + t6631;
  t8711 = Cos(var1[11]);
  t8876 = -1.*t8711;
  t8932 = 1. + t8876;
  t8982 = Sin(var1[11]);
  t9620 = t1706*t1710*t6609;
  t9645 = t1387*t7171;
  t9669 = t9620 + t9645;
  t9876 = t1387*t1706*t1710;
  t9886 = -1.*t6609*t7171;
  t10140 = t9876 + t9886;
  t1526 = -1.*t1387;
  t1607 = 1. + t1526;
  t1662 = 0.183*t1607;
  t1690 = 0. + t1662;
  t1746 = -0.047*t1745;
  t1786 = 0. + t1746;
  t5591 = -1.*t5584;
  t6223 = 1. + t5591;
  t6443 = 0.047*t6223;
  t6471 = 0. + t6443;
  t10528 = t1790*t1853*t1812;
  t10536 = -1.*t1706*t2395;
  t10589 = t10528 + t10536;
  t10625 = t1706*t1790;
  t10633 = t1853*t1812*t2395;
  t10644 = t10625 + t10633;
  t6610 = 0.183*t6609;
  t6611 = 0. + t6610;
  t8949 = -0.1*t8932;
  t9468 = 0.183*t8982;
  t9567 = 0. + t8949 + t9468;
  t10700 = t5584*t10589;
  t10710 = -1.*t1745*t10644;
  t10711 = t10700 + t10710;
  t9785 = 0.183*t8932;
  t9809 = 0.1*t8982;
  t9832 = 0. + t9785 + t9809;
  t10722 = t1710*t6609*t1853;
  t10730 = t1387*t10711;
  t10744 = t10722 + t10730;
  t10753 = t1387*t1710*t1853;
  t10785 = -1.*t6609*t10711;
  t10790 = t10753 + t10785;
  t10930 = t5584*t1710*t1790;
  t10932 = -1.*t1710*t1745*t2395;
  t10933 = t10930 + t10932;
  t10946 = -1.*t6609*t1812;
  t10956 = t1387*t10933;
  t10958 = t10946 + t10956;
  t10998 = -1.*t1387*t1812;
  t10999 = -1.*t6609*t10933;
  t11001 = t10998 + t10999;
  p_output1[0]=0. + t1690*t1706*t1710 + t1786*t3950 + t6471*t6531 + 0.13205*(t1745*t3950 + t5584*t6531) + t6611*t7171 + t9567*t9669 - 0.2*(t10140*t8982 + t8711*t9669) + 0.183*(t10140*t8711 - 1.*t8982*t9669) + t10140*t9832 + var1[0];
  p_output1[1]=0. + t10589*t1786 + t1690*t1710*t1853 + 0.13205*(t10589*t1745 + t10644*t5584) + t10644*t6471 + t10711*t6611 + 0.183*(t10790*t8711 - 1.*t10744*t8982) - 0.2*(t10744*t8711 + t10790*t8982) + t10744*t9567 + t10790*t9832 + var1[1];
  p_output1[2]=0. + t1710*t1786*t1790 - 1.*t1690*t1812 + 0.13205*(t1710*t1745*t1790 + t1710*t2395*t5584) + t1710*t2395*t6471 + t10933*t6611 + 0.183*(t11001*t8711 - 1.*t10958*t8982) - 0.2*(t10958*t8711 + t11001*t8982) + t10958*t9567 + t11001*t9832 + var1[2];
}



void p_FLfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
