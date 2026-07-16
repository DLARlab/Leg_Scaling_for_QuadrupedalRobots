/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:10:01 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FL_hip_joint_src.h"

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
  double t5411;
  double t3306;
  double t5449;
  double t5436;
  double t5499;
  double t5504;
  double t5485;
  double t5529;
  double t5502;
  double t5511;
  double t5515;
  double t5530;
  double t5531;
  double t5535;
  double t5542;
  double t5547;
  double t5548;
  double t5554;
  double t5557;
  double t5564;
  double t5516;
  double t5538;
  double t5539;
  double t5657;
  double t5661;
  double t5664;
  double t5675;
  double t5685;
  double t5687;
  double t5552;
  double t5583;
  double t5585;
  double t5592;
  double t5602;
  double t5603;
  t5411 = Cos(var1[4]);
  t3306 = Cos(var1[3]);
  t5449 = Sin(var1[4]);
  t5436 = Sin(var1[3]);
  t5499 = Cos(var1[5]);
  t5504 = Sin(var1[5]);
  t5485 = Sin(var1[9]);
  t5529 = Cos(var1[9]);
  t5502 = t3306*t5499*t5449;
  t5511 = t5436*t5504;
  t5515 = t5502 + t5511;
  t5530 = -1.*t5499*t5436;
  t5531 = t3306*t5449*t5504;
  t5535 = t5530 + t5531;
  t5542 = t5499*t5436*t5449;
  t5547 = -1.*t3306*t5504;
  t5548 = t5542 + t5547;
  t5554 = t3306*t5499;
  t5557 = t5436*t5449*t5504;
  t5564 = t5554 + t5557;
  t5516 = t5485*t5515;
  t5538 = t5529*t5535;
  t5539 = t5516 + t5538;
  t5657 = -0.047*t5485;
  t5661 = 0. + t5657;
  t5664 = -1.*t5529;
  t5675 = 1. + t5664;
  t5685 = 0.047*t5675;
  t5687 = 0. + t5685;
  t5552 = t5485*t5548;
  t5583 = t5529*t5564;
  t5585 = t5552 + t5583;
  t5592 = t5411*t5499*t5485;
  t5602 = t5529*t5411*t5504;
  t5603 = t5592 + t5602;
  p_output1[0]=t3306*t5411;
  p_output1[1]=t5411*t5436;
  p_output1[2]=-1.*t5449;
  p_output1[3]=0.;
  p_output1[4]=t5539;
  p_output1[5]=t5585;
  p_output1[6]=t5603;
  p_output1[7]=0.;
  p_output1[8]=t5515*t5529 - 1.*t5485*t5535;
  p_output1[9]=t5529*t5548 - 1.*t5485*t5564;
  p_output1[10]=-1.*t5411*t5485*t5504 + t5411*t5499*t5529;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.183*t3306*t5411 + 0.047*t5539 + t5515*t5661 + t5535*t5687 + var1[0];
  p_output1[13]=0. + 0.183*t5411*t5436 + 0.047*t5585 + t5548*t5661 + t5564*t5687 + var1[1];
  p_output1[14]=0. - 0.183*t5449 + 0.047*t5603 + t5411*t5499*t5661 + t5411*t5504*t5687 + var1[2];
  p_output1[15]=1.;
}



void H_FL_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
