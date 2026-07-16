/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:13:10 GMT-05:00
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
  double t6671;
  double t6698;
  double t6705;
  double t6702;
  double t6707;
  double t6693;
  double t6703;
  double t6708;
  double t6710;
  double t6712;
  double t6725;
  double t6727;
  double t6728;
  double t6681;
  double t6735;
  double t1216;
  double t6740;
  double t6741;
  double t6742;
  double t6744;
  double t6745;
  double t6746;
  double t6748;
  double t6752;
  double t6753;
  double t6754;
  double t6760;
  double t6761;
  double t6762;
  double t1219;
  double t1506;
  double t1560;
  double t6641;
  double t6696;
  double t6697;
  double t6714;
  double t6715;
  double t6716;
  double t6720;
  double t6779;
  double t6780;
  double t6781;
  double t6783;
  double t6784;
  double t6785;
  double t6736;
  double t6739;
  double t6747;
  double t6749;
  double t6750;
  double t6793;
  double t6795;
  double t6797;
  double t6757;
  double t6758;
  double t6759;
  double t6802;
  double t6803;
  double t6804;
  double t6806;
  double t6807;
  double t6808;
  double t6826;
  double t6827;
  double t6828;
  double t6830;
  double t6831;
  double t6832;
  double t6834;
  double t6835;
  double t6836;
  t6671 = Cos(var1[3]);
  t6698 = Cos(var1[5]);
  t6705 = Sin(var1[3]);
  t6702 = Sin(var1[4]);
  t6707 = Sin(var1[5]);
  t6693 = Sin(var1[12]);
  t6703 = t6671*t6698*t6702;
  t6708 = t6705*t6707;
  t6710 = t6703 + t6708;
  t6712 = Cos(var1[12]);
  t6725 = -1.*t6698*t6705;
  t6727 = t6671*t6702*t6707;
  t6728 = t6725 + t6727;
  t6681 = Cos(var1[4]);
  t6735 = Sin(var1[13]);
  t1216 = Cos(var1[13]);
  t6740 = t6712*t6710;
  t6741 = -1.*t6693*t6728;
  t6742 = t6740 + t6741;
  t6744 = Cos(var1[14]);
  t6745 = -1.*t6744;
  t6746 = 1. + t6745;
  t6748 = Sin(var1[14]);
  t6752 = t6671*t6681*t6735;
  t6753 = t1216*t6742;
  t6754 = t6752 + t6753;
  t6760 = t1216*t6671*t6681;
  t6761 = -1.*t6735*t6742;
  t6762 = t6760 + t6761;
  t1219 = -1.*t1216;
  t1506 = 1. + t1219;
  t1560 = -0.183*t1506;
  t6641 = 0. + t1560;
  t6696 = 0.047*t6693;
  t6697 = 0. + t6696;
  t6714 = -1.*t6712;
  t6715 = 1. + t6714;
  t6716 = -0.047*t6715;
  t6720 = 0. + t6716;
  t6779 = t6698*t6705*t6702;
  t6780 = -1.*t6671*t6707;
  t6781 = t6779 + t6780;
  t6783 = t6671*t6698;
  t6784 = t6705*t6702*t6707;
  t6785 = t6783 + t6784;
  t6736 = -0.183*t6735;
  t6739 = 0. + t6736;
  t6747 = -0.1*t6746;
  t6749 = -0.183*t6748;
  t6750 = 0. + t6747 + t6749;
  t6793 = t6712*t6781;
  t6795 = -1.*t6693*t6785;
  t6797 = t6793 + t6795;
  t6757 = -0.183*t6746;
  t6758 = 0.1*t6748;
  t6759 = 0. + t6757 + t6758;
  t6802 = t6681*t6735*t6705;
  t6803 = t1216*t6797;
  t6804 = t6802 + t6803;
  t6806 = t1216*t6681*t6705;
  t6807 = -1.*t6735*t6797;
  t6808 = t6806 + t6807;
  t6826 = t6712*t6681*t6698;
  t6827 = -1.*t6681*t6693*t6707;
  t6828 = t6826 + t6827;
  t6830 = -1.*t6735*t6702;
  t6831 = t1216*t6828;
  t6832 = t6830 + t6831;
  t6834 = -1.*t1216*t6702;
  t6835 = -1.*t6735*t6828;
  t6836 = t6834 + t6835;
  p_output1[0]=0. + t6641*t6671*t6681 + t6697*t6710 + t6720*t6728 - 0.08953*(t6693*t6710 + t6712*t6728) + t6739*t6742 + t6750*t6754 + t6759*t6762 - 0.183*(-1.*t6748*t6754 + t6744*t6762) - 0.2*(t6744*t6754 + t6748*t6762) + var1[0];
  p_output1[1]=0. + t6641*t6681*t6705 + t6697*t6781 + t6720*t6785 - 0.08953*(t6693*t6781 + t6712*t6785) + t6739*t6797 + t6750*t6804 + t6759*t6808 - 0.183*(-1.*t6748*t6804 + t6744*t6808) - 0.2*(t6744*t6804 + t6748*t6808) + var1[1];
  p_output1[2]=0. + t6681*t6697*t6698 - 1.*t6641*t6702 - 0.08953*(t6681*t6693*t6698 + t6681*t6707*t6712) + t6681*t6707*t6720 + t6739*t6828 + t6750*t6832 + t6759*t6836 - 0.183*(-1.*t6748*t6832 + t6744*t6836) - 0.2*(t6744*t6832 + t6748*t6836) + var1[2];
}



void p_RRfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
