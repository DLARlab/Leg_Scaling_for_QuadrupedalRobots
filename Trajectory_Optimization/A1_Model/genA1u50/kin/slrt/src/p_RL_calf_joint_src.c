/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:13:03 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RL_calf_joint_src.h"

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
  double t4688;
  double t4701;
  double t4706;
  double t4703;
  double t4707;
  double t4695;
  double t4705;
  double t4708;
  double t4709;
  double t4712;
  double t4723;
  double t4724;
  double t4725;
  double t4691;
  double t4734;
  double t751;
  double t4737;
  double t4738;
  double t4739;
  double t4741;
  double t4742;
  double t4743;
  double t4745;
  double t4749;
  double t4750;
  double t4752;
  double t4757;
  double t4760;
  double t4761;
  double t2413;
  double t4669;
  double t4685;
  double t4687;
  double t4696;
  double t4700;
  double t4713;
  double t4716;
  double t4720;
  double t4722;
  double t4776;
  double t4777;
  double t4778;
  double t4780;
  double t4781;
  double t4782;
  double t4735;
  double t4736;
  double t4744;
  double t4747;
  double t4748;
  double t4792;
  double t4796;
  double t4797;
  double t4754;
  double t4755;
  double t4756;
  double t4799;
  double t4800;
  double t4801;
  double t4803;
  double t4804;
  double t4805;
  double t4823;
  double t4824;
  double t4825;
  double t4827;
  double t4828;
  double t4829;
  double t4831;
  double t4832;
  double t4833;
  t4688 = Cos(var1[3]);
  t4701 = Cos(var1[5]);
  t4706 = Sin(var1[3]);
  t4703 = Sin(var1[4]);
  t4707 = Sin(var1[5]);
  t4695 = Sin(var1[15]);
  t4705 = t4688*t4701*t4703;
  t4708 = t4706*t4707;
  t4709 = t4705 + t4708;
  t4712 = Cos(var1[15]);
  t4723 = -1.*t4701*t4706;
  t4724 = t4688*t4703*t4707;
  t4725 = t4723 + t4724;
  t4691 = Cos(var1[4]);
  t4734 = Sin(var1[16]);
  t751 = Cos(var1[16]);
  t4737 = t4712*t4709;
  t4738 = -1.*t4695*t4725;
  t4739 = t4737 + t4738;
  t4741 = Cos(var1[17]);
  t4742 = -1.*t4741;
  t4743 = 1. + t4742;
  t4745 = Sin(var1[17]);
  t4749 = t4688*t4691*t4734;
  t4750 = t751*t4739;
  t4752 = t4749 + t4750;
  t4757 = t751*t4688*t4691;
  t4760 = -1.*t4734*t4739;
  t4761 = t4757 + t4760;
  t2413 = -1.*t751;
  t4669 = 1. + t2413;
  t4685 = -0.183*t4669;
  t4687 = 0. + t4685;
  t4696 = -0.047*t4695;
  t4700 = 0. + t4696;
  t4713 = -1.*t4712;
  t4716 = 1. + t4713;
  t4720 = 0.047*t4716;
  t4722 = 0. + t4720;
  t4776 = t4701*t4706*t4703;
  t4777 = -1.*t4688*t4707;
  t4778 = t4776 + t4777;
  t4780 = t4688*t4701;
  t4781 = t4706*t4703*t4707;
  t4782 = t4780 + t4781;
  t4735 = -0.183*t4734;
  t4736 = 0. + t4735;
  t4744 = -0.1*t4743;
  t4747 = -0.183*t4745;
  t4748 = 0. + t4744 + t4747;
  t4792 = t4712*t4778;
  t4796 = -1.*t4695*t4782;
  t4797 = t4792 + t4796;
  t4754 = -0.183*t4743;
  t4755 = 0.1*t4745;
  t4756 = 0. + t4754 + t4755;
  t4799 = t4691*t4734*t4706;
  t4800 = t751*t4797;
  t4801 = t4799 + t4800;
  t4803 = t751*t4691*t4706;
  t4804 = -1.*t4734*t4797;
  t4805 = t4803 + t4804;
  t4823 = t4712*t4691*t4701;
  t4824 = -1.*t4691*t4695*t4707;
  t4825 = t4823 + t4824;
  t4827 = -1.*t4734*t4703;
  t4828 = t751*t4825;
  t4829 = t4827 + t4828;
  t4831 = -1.*t751*t4703;
  t4832 = -1.*t4734*t4825;
  t4833 = t4831 + t4832;
  p_output1[0]=0. + t4687*t4688*t4691 + t4700*t4709 + t4722*t4725 + 0.08953*(t4695*t4709 + t4712*t4725) + t4736*t4739 + t4748*t4752 + t4756*t4761 - 0.183*(-1.*t4745*t4752 + t4741*t4761) - 0.1*(t4741*t4752 + t4745*t4761) + var1[0];
  p_output1[1]=0. + t4687*t4691*t4706 + t4700*t4778 + t4722*t4782 + 0.08953*(t4695*t4778 + t4712*t4782) + t4736*t4797 + t4748*t4801 + t4756*t4805 - 0.183*(-1.*t4745*t4801 + t4741*t4805) - 0.1*(t4741*t4801 + t4745*t4805) + var1[1];
  p_output1[2]=0. + t4691*t4700*t4701 - 1.*t4687*t4703 + 0.08953*(t4691*t4695*t4701 + t4691*t4707*t4712) + t4691*t4707*t4722 + t4736*t4825 + t4748*t4829 + t4756*t4833 - 0.183*(-1.*t4745*t4829 + t4741*t4833) - 0.1*(t4741*t4829 + t4745*t4833) + var1[2];
}



void p_RL_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
