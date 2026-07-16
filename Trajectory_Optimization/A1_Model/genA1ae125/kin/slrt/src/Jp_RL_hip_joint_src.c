/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:03:29 GMT-05:00
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
  double t412;
  double t6939;
  double t2328;
  double t3610;
  double t6993;
  double t539;
  double t5422;
  double t7413;
  double t7416;
  double t7426;
  double t7473;
  double t7474;
  double t7479;
  double t107;
  double t1253;
  double t1280;
  double t7447;
  double t7465;
  double t7469;
  double t7472;
  double t7496;
  double t7498;
  double t7500;
  double t7502;
  double t7503;
  double t7505;
  double t7574;
  double t7576;
  double t7577;
  double t7591;
  double t7594;
  double t7600;
  double t7585;
  double t7605;
  double t7642;
  double t7643;
  double t7645;
  double t7617;
  double t7618;
  double t7623;
  double t7627;
  t412 = Sin(var1[3]);
  t6939 = Cos(var1[3]);
  t2328 = Cos(var1[5]);
  t3610 = Sin(var1[4]);
  t6993 = Sin(var1[5]);
  t539 = Sin(var1[15]);
  t5422 = -1.*t2328*t412*t3610;
  t7413 = t6939*t6993;
  t7416 = t5422 + t7413;
  t7426 = Cos(var1[15]);
  t7473 = -1.*t6939*t2328;
  t7474 = -1.*t412*t3610*t6993;
  t7479 = t7473 + t7474;
  t107 = Cos(var1[4]);
  t1253 = -0.047*t539;
  t1280 = 0. + t1253;
  t7447 = -1.*t7426;
  t7465 = 1. + t7447;
  t7469 = 0.047*t7465;
  t7472 = 0. + t7469;
  t7496 = t6939*t2328*t3610;
  t7498 = t412*t6993;
  t7500 = t7496 + t7498;
  t7502 = -1.*t2328*t412;
  t7503 = t6939*t3610*t6993;
  t7505 = t7502 + t7503;
  t7574 = t2328*t412;
  t7576 = -1.*t6939*t3610*t6993;
  t7577 = t7574 + t7576;
  t7591 = t2328*t412*t3610;
  t7594 = -1.*t6939*t6993;
  t7600 = t7591 + t7594;
  t7585 = t7426*t7500;
  t7605 = t7426*t7600;
  t7642 = t6939*t2328;
  t7643 = t412*t3610*t6993;
  t7645 = t7642 + t7643;
  t7617 = t7426*t107*t2328;
  t7618 = -1.*t107*t539*t6993;
  t7623 = t7617 + t7618;
  t7627 = 0.047*t7623;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=0.183*t107*t412 + t1280*t7416 + t7472*t7479 + 0.047*(t539*t7416 + t7426*t7479);
  p_output1[10]=-0.183*t107*t6939 + t1280*t7500 + t7472*t7505 + 0.047*(t539*t7500 + t7426*t7505);
  p_output1[11]=0;
  p_output1[12]=t107*t1280*t2328*t6939 + 0.183*t3610*t6939 + 0.047*(t107*t2328*t539*t6939 + t107*t6939*t6993*t7426) + t107*t6939*t6993*t7472;
  p_output1[13]=t107*t1280*t2328*t412 + 0.183*t3610*t412 + 0.047*(t107*t2328*t412*t539 + t107*t412*t6993*t7426) + t107*t412*t6993*t7472;
  p_output1[14]=0.183*t107 - 1.*t1280*t2328*t3610 + 0.047*(-1.*t2328*t3610*t539 - 1.*t3610*t6993*t7426) - 1.*t3610*t6993*t7472;
  p_output1[15]=t7472*t7500 + t1280*t7577 + 0.047*(t539*t7577 + t7585);
  p_output1[16]=t1280*t7479 + t7472*t7600 + 0.047*(t539*t7479 + t7605);
  p_output1[17]=-1.*t107*t1280*t6993 + t107*t2328*t7472 + t7627;
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
  p_output1[45]=-0.047*t7426*t7500 + 0.047*t539*t7505 + 0.047*(-1.*t539*t7505 + t7585);
  p_output1[46]=-0.047*t7426*t7600 + 0.047*t539*t7645 + 0.047*(t7605 - 1.*t539*t7645);
  p_output1[47]=0.047*t107*t539*t6993 - 0.047*t107*t2328*t7426 + t7627;
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
