/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:25:41 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_FR_calf_joint_src.h"

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
  double t1030;
  double t3341;
  double t3745;
  double t3557;
  double t4064;
  double t2672;
  double t3213;
  double t3559;
  double t4159;
  double t4236;
  double t4376;
  double t4433;
  double t4552;
  double t4654;
  double t4679;
  double t4803;
  double t4843;
  double t1169;
  double t4884;
  double t648;
  double t5120;
  double t5129;
  double t5225;
  double t5231;
  double t5238;
  double t5286;
  double t5340;
  double t5342;
  double t5353;
  double t5045;
  double t5557;
  double t5578;
  double t5605;
  double t5027;
  double t5037;
  double t5042;
  double t3074;
  double t4941;
  double t4992;
  double t5437;
  double t5443;
  double t5454;
  double t5108;
  double t5356;
  double t5395;
  double t5693;
  double t5708;
  double t5744;
  double t5546;
  double t5629;
  double t5647;
  t1030 = Cos(var1[3]);
  t3341 = Cos(var1[5]);
  t3745 = Sin(var1[3]);
  t3557 = Sin(var1[4]);
  t4064 = Sin(var1[5]);
  t2672 = Cos(var1[7]);
  t3213 = Cos(var1[6]);
  t3559 = t1030*t3341*t3557;
  t4159 = t3745*t4064;
  t4236 = t3559 + t4159;
  t4376 = t3213*t4236;
  t4433 = -1.*t3341*t3745;
  t4552 = t1030*t3557*t4064;
  t4654 = t4433 + t4552;
  t4679 = Sin(var1[6]);
  t4803 = -1.*t4654*t4679;
  t4843 = t4376 + t4803;
  t1169 = Cos(var1[4]);
  t4884 = Sin(var1[7]);
  t648 = Cos(var1[8]);
  t5120 = t3341*t3745*t3557;
  t5129 = -1.*t1030*t4064;
  t5225 = t5120 + t5129;
  t5231 = t3213*t5225;
  t5238 = t1030*t3341;
  t5286 = t3745*t3557*t4064;
  t5340 = t5238 + t5286;
  t5342 = -1.*t5340*t4679;
  t5353 = t5231 + t5342;
  t5045 = Sin(var1[8]);
  t5557 = t1169*t3341*t3213;
  t5578 = -1.*t1169*t4064*t4679;
  t5605 = t5557 + t5578;
  t5027 = t2672*t4843;
  t5037 = t1030*t1169*t4884;
  t5042 = t5027 + t5037;
  t3074 = t1030*t1169*t2672;
  t4941 = -1.*t4843*t4884;
  t4992 = t3074 + t4941;
  t5437 = t2672*t5353;
  t5443 = t1169*t3745*t4884;
  t5454 = t5437 + t5443;
  t5108 = t1169*t2672*t3745;
  t5356 = -1.*t5353*t4884;
  t5395 = t5108 + t5356;
  t5693 = t2672*t5605;
  t5708 = -1.*t3557*t4884;
  t5744 = t5693 + t5708;
  t5546 = -1.*t2672*t3557;
  t5629 = -1.*t5605*t4884;
  t5647 = t5546 + t5629;
  p_output1[0]=-1.*t5042*t5045 + t4992*t648;
  p_output1[1]=-1.*t5045*t5454 + t5395*t648;
  p_output1[2]=-1.*t5045*t5744 + t5647*t648;
  p_output1[3]=t3213*t4654 + t4236*t4679;
  p_output1[4]=t4679*t5225 + t3213*t5340;
  p_output1[5]=t1169*t3213*t4064 + t1169*t3341*t4679;
  p_output1[6]=t4992*t5045 + t5042*t648;
  p_output1[7]=t5045*t5395 + t5454*t648;
  p_output1[8]=t5045*t5647 + t5744*t648;
}



void R_FR_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
