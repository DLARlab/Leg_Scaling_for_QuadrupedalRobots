/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:20:41 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RL_thigh_joint_src.h"

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
  double t2776;
  double t5022;
  double t6295;
  double t5094;
  double t6300;
  double t3581;
  double t5820;
  double t6338;
  double t6405;
  double t6465;
  double t6747;
  double t6761;
  double t7014;
  double t1004;
  double t2781;
  double t7424;
  double t7629;
  double t7638;
  double t7706;
  double t1132;
  double t1270;
  double t1453;
  double t2774;
  double t4224;
  double t4405;
  double t6599;
  double t6617;
  double t6624;
  double t6739;
  double t7897;
  double t7950;
  double t7960;
  double t7984;
  double t8013;
  double t8025;
  double t7469;
  double t7479;
  double t8146;
  double t8155;
  double t8176;
  double t8383;
  double t8385;
  double t8404;
  t2776 = Cos(var1[3]);
  t5022 = Cos(var1[5]);
  t6295 = Sin(var1[3]);
  t5094 = Sin(var1[4]);
  t6300 = Sin(var1[5]);
  t3581 = Sin(var1[15]);
  t5820 = t2776*t5022*t5094;
  t6338 = t6295*t6300;
  t6405 = t5820 + t6338;
  t6465 = Cos(var1[15]);
  t6747 = -1.*t5022*t6295;
  t6761 = t2776*t5094*t6300;
  t7014 = t6747 + t6761;
  t1004 = Cos(var1[16]);
  t2781 = Cos(var1[4]);
  t7424 = Sin(var1[16]);
  t7629 = t6465*t6405;
  t7638 = -1.*t3581*t7014;
  t7706 = t7629 + t7638;
  t1132 = -1.*t1004;
  t1270 = 1. + t1132;
  t1453 = -0.183*t1270;
  t2774 = 0. + t1453;
  t4224 = -0.047*t3581;
  t4405 = 0. + t4224;
  t6599 = -1.*t6465;
  t6617 = 1. + t6599;
  t6624 = 0.047*t6617;
  t6739 = 0. + t6624;
  t7897 = t5022*t6295*t5094;
  t7950 = -1.*t2776*t6300;
  t7960 = t7897 + t7950;
  t7984 = t2776*t5022;
  t8013 = t6295*t5094*t6300;
  t8025 = t7984 + t8013;
  t7469 = -0.183*t7424;
  t7479 = 0. + t7469;
  t8146 = t6465*t7960;
  t8155 = -1.*t3581*t8025;
  t8176 = t8146 + t8155;
  t8383 = t6465*t2781*t5022;
  t8385 = -1.*t2781*t3581*t6300;
  t8404 = t8383 + t8385;
  p_output1[0]=0. + t2774*t2776*t2781 + t4405*t6405 + t6739*t7014 + 0.15331*(t3581*t6405 + t6465*t7014) + t7479*t7706 - 0.183*(t1004*t2776*t2781 - 1.*t7424*t7706) + var1[0];
  p_output1[1]=0. + t2774*t2781*t6295 + t4405*t7960 + t6739*t8025 + 0.15331*(t3581*t7960 + t6465*t8025) + t7479*t8176 - 0.183*(t1004*t2781*t6295 - 1.*t7424*t8176) + var1[1];
  p_output1[2]=0. + t2781*t4405*t5022 - 1.*t2774*t5094 + 0.15331*(t2781*t3581*t5022 + t2781*t6300*t6465) + t2781*t6300*t6739 + t7479*t8404 - 0.183*(-1.*t1004*t5094 - 1.*t7424*t8404) + var1[2];
}



void p_RL_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
