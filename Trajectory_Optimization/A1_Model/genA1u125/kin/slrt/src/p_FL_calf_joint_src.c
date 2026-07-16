/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:20:29 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FL_calf_joint_src.h"

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
  double t2152;
  double t4760;
  double t5410;
  double t4979;
  double t5889;
  double t4020;
  double t5095;
  double t5966;
  double t6079;
  double t6496;
  double t6641;
  double t6653;
  double t6670;
  double t2393;
  double t6725;
  double t366;
  double t6819;
  double t6840;
  double t6856;
  double t6872;
  double t6921;
  double t6982;
  double t7011;
  double t7093;
  double t7118;
  double t7122;
  double t7218;
  double t7219;
  double t7220;
  double t1710;
  double t1760;
  double t1926;
  double t2070;
  double t4175;
  double t4729;
  double t6586;
  double t6606;
  double t6609;
  double t6639;
  double t7400;
  double t7402;
  double t7406;
  double t7437;
  double t7442;
  double t7445;
  double t6730;
  double t6773;
  double t6990;
  double t7021;
  double t7087;
  double t7508;
  double t7520;
  double t7536;
  double t7172;
  double t7194;
  double t7196;
  double t7546;
  double t7548;
  double t7551;
  double t7577;
  double t7584;
  double t7589;
  double t7947;
  double t7992;
  double t8002;
  double t8010;
  double t8030;
  double t8044;
  double t8068;
  double t8078;
  double t8088;
  t2152 = Cos(var1[3]);
  t4760 = Cos(var1[5]);
  t5410 = Sin(var1[3]);
  t4979 = Sin(var1[4]);
  t5889 = Sin(var1[5]);
  t4020 = Sin(var1[9]);
  t5095 = t2152*t4760*t4979;
  t5966 = t5410*t5889;
  t6079 = t5095 + t5966;
  t6496 = Cos(var1[9]);
  t6641 = -1.*t4760*t5410;
  t6653 = t2152*t4979*t5889;
  t6670 = t6641 + t6653;
  t2393 = Cos(var1[4]);
  t6725 = Sin(var1[10]);
  t366 = Cos(var1[10]);
  t6819 = t6496*t6079;
  t6840 = -1.*t4020*t6670;
  t6856 = t6819 + t6840;
  t6872 = Cos(var1[11]);
  t6921 = -1.*t6872;
  t6982 = 1. + t6921;
  t7011 = Sin(var1[11]);
  t7093 = t2152*t2393*t6725;
  t7118 = t366*t6856;
  t7122 = t7093 + t7118;
  t7218 = t366*t2152*t2393;
  t7219 = -1.*t6725*t6856;
  t7220 = t7218 + t7219;
  t1710 = -1.*t366;
  t1760 = 1. + t1710;
  t1926 = 0.183*t1760;
  t2070 = 0. + t1926;
  t4175 = -0.047*t4020;
  t4729 = 0. + t4175;
  t6586 = -1.*t6496;
  t6606 = 1. + t6586;
  t6609 = 0.047*t6606;
  t6639 = 0. + t6609;
  t7400 = t4760*t5410*t4979;
  t7402 = -1.*t2152*t5889;
  t7406 = t7400 + t7402;
  t7437 = t2152*t4760;
  t7442 = t5410*t4979*t5889;
  t7445 = t7437 + t7442;
  t6730 = 0.183*t6725;
  t6773 = 0. + t6730;
  t6990 = -0.25*t6982;
  t7021 = 0.183*t7011;
  t7087 = 0. + t6990 + t7021;
  t7508 = t6496*t7406;
  t7520 = -1.*t4020*t7445;
  t7536 = t7508 + t7520;
  t7172 = 0.183*t6982;
  t7194 = 0.25*t7011;
  t7196 = 0. + t7172 + t7194;
  t7546 = t2393*t6725*t5410;
  t7548 = t366*t7536;
  t7551 = t7546 + t7548;
  t7577 = t366*t2393*t5410;
  t7584 = -1.*t6725*t7536;
  t7589 = t7577 + t7584;
  t7947 = t6496*t2393*t4760;
  t7992 = -1.*t2393*t4020*t5889;
  t8002 = t7947 + t7992;
  t8010 = -1.*t6725*t4979;
  t8030 = t366*t8002;
  t8044 = t8010 + t8030;
  t8068 = -1.*t366*t4979;
  t8078 = -1.*t6725*t8002;
  t8088 = t8068 + t8078;
  p_output1[0]=0. + t2070*t2152*t2393 + t4729*t6079 + t6639*t6670 + 0.15331*(t4020*t6079 + t6496*t6670) + t6773*t6856 + t7087*t7122 + t7196*t7220 + 0.183*(-1.*t7011*t7122 + t6872*t7220) - 0.25*(t6872*t7122 + t7011*t7220) + var1[0];
  p_output1[1]=0. + t2070*t2393*t5410 + t4729*t7406 + t6639*t7445 + 0.15331*(t4020*t7406 + t6496*t7445) + t6773*t7536 + t7087*t7551 + t7196*t7589 + 0.183*(-1.*t7011*t7551 + t6872*t7589) - 0.25*(t6872*t7551 + t7011*t7589) + var1[1];
  p_output1[2]=0. + t2393*t4729*t4760 - 1.*t2070*t4979 + 0.15331*(t2393*t4020*t4760 + t2393*t5889*t6496) + t2393*t5889*t6639 + t6773*t8002 + t7087*t8044 + t7196*t8088 + 0.183*(-1.*t7011*t8044 + t6872*t8088) - 0.25*(t6872*t8044 + t7011*t8088) + var1[2];
}



void p_FL_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
