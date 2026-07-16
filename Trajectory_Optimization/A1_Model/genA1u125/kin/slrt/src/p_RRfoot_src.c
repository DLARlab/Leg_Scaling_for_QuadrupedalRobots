/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:20:50 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RRfoot_src.h"

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
  double t2156;
  double t3062;
  double t3541;
  double t3260;
  double t3549;
  double t2698;
  double t3514;
  double t3824;
  double t4000;
  double t4695;
  double t5863;
  double t6224;
  double t6330;
  double t2296;
  double t6665;
  double t314;
  double t6770;
  double t6819;
  double t6820;
  double t6844;
  double t6890;
  double t6936;
  double t6990;
  double t7046;
  double t7054;
  double t7055;
  double t7152;
  double t7168;
  double t7173;
  double t796;
  double t1371;
  double t1718;
  double t1877;
  double t2706;
  double t3048;
  double t4847;
  double t4951;
  double t5008;
  double t5026;
  double t7278;
  double t7288;
  double t7291;
  double t7300;
  double t7307;
  double t7330;
  double t6715;
  double t6742;
  double t6988;
  double t6996;
  double t7028;
  double t7389;
  double t7393;
  double t7401;
  double t7087;
  double t7119;
  double t7135;
  double t7428;
  double t7430;
  double t7453;
  double t7474;
  double t7476;
  double t7492;
  double t7775;
  double t7799;
  double t7818;
  double t7839;
  double t7853;
  double t7856;
  double t7876;
  double t7885;
  double t7904;
  t2156 = Cos(var1[3]);
  t3062 = Cos(var1[5]);
  t3541 = Sin(var1[3]);
  t3260 = Sin(var1[4]);
  t3549 = Sin(var1[5]);
  t2698 = Sin(var1[12]);
  t3514 = t2156*t3062*t3260;
  t3824 = t3541*t3549;
  t4000 = t3514 + t3824;
  t4695 = Cos(var1[12]);
  t5863 = -1.*t3062*t3541;
  t6224 = t2156*t3260*t3549;
  t6330 = t5863 + t6224;
  t2296 = Cos(var1[4]);
  t6665 = Sin(var1[13]);
  t314 = Cos(var1[13]);
  t6770 = t4695*t4000;
  t6819 = -1.*t2698*t6330;
  t6820 = t6770 + t6819;
  t6844 = Cos(var1[14]);
  t6890 = -1.*t6844;
  t6936 = 1. + t6890;
  t6990 = Sin(var1[14]);
  t7046 = t2156*t2296*t6665;
  t7054 = t314*t6820;
  t7055 = t7046 + t7054;
  t7152 = t314*t2156*t2296;
  t7168 = -1.*t6665*t6820;
  t7173 = t7152 + t7168;
  t796 = -1.*t314;
  t1371 = 1. + t796;
  t1718 = -0.183*t1371;
  t1877 = 0. + t1718;
  t2706 = 0.047*t2698;
  t3048 = 0. + t2706;
  t4847 = -1.*t4695;
  t4951 = 1. + t4847;
  t5008 = -0.047*t4951;
  t5026 = 0. + t5008;
  t7278 = t3062*t3541*t3260;
  t7288 = -1.*t2156*t3549;
  t7291 = t7278 + t7288;
  t7300 = t2156*t3062;
  t7307 = t3541*t3260*t3549;
  t7330 = t7300 + t7307;
  t6715 = -0.183*t6665;
  t6742 = 0. + t6715;
  t6988 = -0.25*t6936;
  t6996 = -0.183*t6990;
  t7028 = 0. + t6988 + t6996;
  t7389 = t4695*t7291;
  t7393 = -1.*t2698*t7330;
  t7401 = t7389 + t7393;
  t7087 = -0.183*t6936;
  t7119 = 0.25*t6990;
  t7135 = 0. + t7087 + t7119;
  t7428 = t2296*t6665*t3541;
  t7430 = t314*t7401;
  t7453 = t7428 + t7430;
  t7474 = t314*t2296*t3541;
  t7476 = -1.*t6665*t7401;
  t7492 = t7474 + t7476;
  t7775 = t4695*t2296*t3062;
  t7799 = -1.*t2296*t2698*t3549;
  t7818 = t7775 + t7799;
  t7839 = -1.*t6665*t3260;
  t7853 = t314*t7818;
  t7856 = t7839 + t7853;
  t7876 = -1.*t314*t3260;
  t7885 = -1.*t6665*t7818;
  t7904 = t7876 + t7885;
  p_output1[0]=0. + t1877*t2156*t2296 + t3048*t4000 + t5026*t6330 - 0.15331*(t2698*t4000 + t4695*t6330) + t6742*t6820 + t7028*t7055 + t7135*t7173 - 0.183*(-1.*t6990*t7055 + t6844*t7173) - 0.5*(t6844*t7055 + t6990*t7173) + var1[0];
  p_output1[1]=0. + t1877*t2296*t3541 + t3048*t7291 + t5026*t7330 - 0.15331*(t2698*t7291 + t4695*t7330) + t6742*t7401 + t7028*t7453 + t7135*t7492 - 0.183*(-1.*t6990*t7453 + t6844*t7492) - 0.5*(t6844*t7453 + t6990*t7492) + var1[1];
  p_output1[2]=0. + t2296*t3048*t3062 - 1.*t1877*t3260 - 0.15331*(t2296*t2698*t3062 + t2296*t3549*t4695) + t2296*t3549*t5026 + t6742*t7818 + t7028*t7856 + t7135*t7904 - 0.183*(-1.*t6990*t7856 + t6844*t7904) - 0.5*(t6844*t7856 + t6990*t7904) + var1[2];
}



void p_RRfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
