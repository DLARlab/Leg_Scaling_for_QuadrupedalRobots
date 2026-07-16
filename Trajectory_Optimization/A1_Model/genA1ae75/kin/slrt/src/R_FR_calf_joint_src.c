/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:50:38 GMT-05:00
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
  double t7907;
  double t9496;
  double t9525;
  double t9505;
  double t9545;
  double t9310;
  double t9370;
  double t9506;
  double t9549;
  double t9558;
  double t9560;
  double t9561;
  double t9562;
  double t9564;
  double t9568;
  double t9575;
  double t9578;
  double t9037;
  double t9579;
  double t6757;
  double t9627;
  double t9632;
  double t9635;
  double t9641;
  double t9642;
  double t9647;
  double t9648;
  double t9653;
  double t9654;
  double t9594;
  double t9668;
  double t9670;
  double t9671;
  double t9588;
  double t9591;
  double t9593;
  double t9361;
  double t9580;
  double t9584;
  double t9659;
  double t9660;
  double t9661;
  double t9605;
  double t9655;
  double t9656;
  double t9691;
  double t9692;
  double t9693;
  double t9666;
  double t9672;
  double t9676;
  t7907 = Cos(var1[3]);
  t9496 = Cos(var1[5]);
  t9525 = Sin(var1[3]);
  t9505 = Sin(var1[4]);
  t9545 = Sin(var1[5]);
  t9310 = Cos(var1[7]);
  t9370 = Cos(var1[6]);
  t9506 = t7907*t9496*t9505;
  t9549 = t9525*t9545;
  t9558 = t9506 + t9549;
  t9560 = t9370*t9558;
  t9561 = -1.*t9496*t9525;
  t9562 = t7907*t9505*t9545;
  t9564 = t9561 + t9562;
  t9568 = Sin(var1[6]);
  t9575 = -1.*t9564*t9568;
  t9578 = t9560 + t9575;
  t9037 = Cos(var1[4]);
  t9579 = Sin(var1[7]);
  t6757 = Cos(var1[8]);
  t9627 = t9496*t9525*t9505;
  t9632 = -1.*t7907*t9545;
  t9635 = t9627 + t9632;
  t9641 = t9370*t9635;
  t9642 = t7907*t9496;
  t9647 = t9525*t9505*t9545;
  t9648 = t9642 + t9647;
  t9653 = -1.*t9648*t9568;
  t9654 = t9641 + t9653;
  t9594 = Sin(var1[8]);
  t9668 = t9037*t9496*t9370;
  t9670 = -1.*t9037*t9545*t9568;
  t9671 = t9668 + t9670;
  t9588 = t9310*t9578;
  t9591 = t7907*t9037*t9579;
  t9593 = t9588 + t9591;
  t9361 = t7907*t9037*t9310;
  t9580 = -1.*t9578*t9579;
  t9584 = t9361 + t9580;
  t9659 = t9310*t9654;
  t9660 = t9037*t9525*t9579;
  t9661 = t9659 + t9660;
  t9605 = t9037*t9310*t9525;
  t9655 = -1.*t9654*t9579;
  t9656 = t9605 + t9655;
  t9691 = t9310*t9671;
  t9692 = -1.*t9505*t9579;
  t9693 = t9691 + t9692;
  t9666 = -1.*t9310*t9505;
  t9672 = -1.*t9671*t9579;
  t9676 = t9666 + t9672;
  p_output1[0]=t6757*t9584 - 1.*t9593*t9594;
  p_output1[1]=t6757*t9656 - 1.*t9594*t9661;
  p_output1[2]=t6757*t9676 - 1.*t9594*t9693;
  p_output1[3]=t9370*t9564 + t9558*t9568;
  p_output1[4]=t9568*t9635 + t9370*t9648;
  p_output1[5]=t9037*t9370*t9545 + t9037*t9496*t9568;
  p_output1[6]=t6757*t9593 + t9584*t9594;
  p_output1[7]=t9594*t9656 + t6757*t9661;
  p_output1[8]=t9594*t9676 + t6757*t9693;
}



void R_FR_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
