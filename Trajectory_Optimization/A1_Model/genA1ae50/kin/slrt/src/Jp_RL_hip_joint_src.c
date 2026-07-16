/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:10:15 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RL_hip_joint_src.h"

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
  double t4506;
  double t9516;
  double t9492;
  double t9493;
  double t9519;
  double t5593;
  double t9504;
  double t9521;
  double t9522;
  double t9531;
  double t9543;
  double t9544;
  double t9548;
  double t1673;
  double t9437;
  double t9486;
  double t9532;
  double t9536;
  double t9537;
  double t9539;
  double t9569;
  double t9572;
  double t9573;
  double t9576;
  double t9577;
  double t9578;
  double t9644;
  double t9646;
  double t9649;
  double t9665;
  double t9667;
  double t9672;
  double t9653;
  double t9676;
  double t9709;
  double t9710;
  double t9711;
  double t9688;
  double t9691;
  double t9692;
  double t9693;
  t4506 = Sin(var1[3]);
  t9516 = Cos(var1[3]);
  t9492 = Cos(var1[5]);
  t9493 = Sin(var1[4]);
  t9519 = Sin(var1[5]);
  t5593 = Sin(var1[15]);
  t9504 = -1.*t9492*t4506*t9493;
  t9521 = t9516*t9519;
  t9522 = t9504 + t9521;
  t9531 = Cos(var1[15]);
  t9543 = -1.*t9516*t9492;
  t9544 = -1.*t4506*t9493*t9519;
  t9548 = t9543 + t9544;
  t1673 = Cos(var1[4]);
  t9437 = -0.047*t5593;
  t9486 = 0. + t9437;
  t9532 = -1.*t9531;
  t9536 = 1. + t9532;
  t9537 = 0.047*t9536;
  t9539 = 0. + t9537;
  t9569 = t9516*t9492*t9493;
  t9572 = t4506*t9519;
  t9573 = t9569 + t9572;
  t9576 = -1.*t9492*t4506;
  t9577 = t9516*t9493*t9519;
  t9578 = t9576 + t9577;
  t9644 = t9492*t4506;
  t9646 = -1.*t9516*t9493*t9519;
  t9649 = t9644 + t9646;
  t9665 = t9492*t4506*t9493;
  t9667 = -1.*t9516*t9519;
  t9672 = t9665 + t9667;
  t9653 = t9531*t9573;
  t9676 = t9531*t9672;
  t9709 = t9516*t9492;
  t9710 = t4506*t9493*t9519;
  t9711 = t9709 + t9710;
  t9688 = t9531*t1673*t9492;
  t9691 = -1.*t1673*t5593*t9519;
  t9692 = t9688 + t9691;
  t9693 = 0.047*t9692;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=0.183*t1673*t4506 + t9486*t9522 + t9539*t9548 + 0.047*(t5593*t9522 + t9531*t9548);
  p_output1[10]=-0.183*t1673*t9516 + t9486*t9573 + t9539*t9578 + 0.047*(t5593*t9573 + t9531*t9578);
  p_output1[11]=0;
  p_output1[12]=t1673*t9486*t9492*t9516 + 0.183*t9493*t9516 + 0.047*(t1673*t5593*t9492*t9516 + t1673*t9516*t9519*t9531) + t1673*t9516*t9519*t9539;
  p_output1[13]=t1673*t4506*t9486*t9492 + 0.183*t4506*t9493 + 0.047*(t1673*t4506*t5593*t9492 + t1673*t4506*t9519*t9531) + t1673*t4506*t9519*t9539;
  p_output1[14]=0.183*t1673 - 1.*t9486*t9492*t9493 + 0.047*(-1.*t5593*t9492*t9493 - 1.*t9493*t9519*t9531) - 1.*t9493*t9519*t9539;
  p_output1[15]=t9539*t9573 + t9486*t9649 + 0.047*(t5593*t9649 + t9653);
  p_output1[16]=t9486*t9548 + t9539*t9672 + 0.047*(t5593*t9548 + t9676);
  p_output1[17]=-1.*t1673*t9486*t9519 + t1673*t9492*t9539 + t9693;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=-0.047*t9531*t9573 + 0.047*t5593*t9578 + 0.047*(-1.*t5593*t9578 + t9653);
  p_output1[46]=-0.047*t9531*t9672 + 0.047*t5593*t9711 + 0.047*(t9676 - 1.*t5593*t9711);
  p_output1[47]=0.047*t1673*t5593*t9519 - 0.047*t1673*t9492*t9531 + t9693;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
}



void Jp_RL_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
