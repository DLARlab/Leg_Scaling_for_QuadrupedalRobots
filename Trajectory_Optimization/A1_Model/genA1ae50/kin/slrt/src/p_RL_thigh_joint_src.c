/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:10:17 GMT-05:00
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
  double t5680;
  double t9794;
  double t9805;
  double t9796;
  double t9806;
  double t9779;
  double t9799;
  double t9810;
  double t9814;
  double t9819;
  double t9826;
  double t9829;
  double t9830;
  double t419;
  double t9666;
  double t9841;
  double t9849;
  double t9852;
  double t9856;
  double t2046;
  double t4908;
  double t5088;
  double t5652;
  double t9780;
  double t9789;
  double t9820;
  double t9821;
  double t9824;
  double t9825;
  double t9866;
  double t9868;
  double t9869;
  double t9872;
  double t9873;
  double t9874;
  double t9847;
  double t9848;
  double t9893;
  double t9894;
  double t9896;
  double t9929;
  double t9930;
  double t9937;
  t5680 = Cos(var1[3]);
  t9794 = Cos(var1[5]);
  t9805 = Sin(var1[3]);
  t9796 = Sin(var1[4]);
  t9806 = Sin(var1[5]);
  t9779 = Sin(var1[15]);
  t9799 = t5680*t9794*t9796;
  t9810 = t9805*t9806;
  t9814 = t9799 + t9810;
  t9819 = Cos(var1[15]);
  t9826 = -1.*t9794*t9805;
  t9829 = t5680*t9796*t9806;
  t9830 = t9826 + t9829;
  t419 = Cos(var1[16]);
  t9666 = Cos(var1[4]);
  t9841 = Sin(var1[16]);
  t9849 = t9819*t9814;
  t9852 = -1.*t9779*t9830;
  t9856 = t9849 + t9852;
  t2046 = -1.*t419;
  t4908 = 1. + t2046;
  t5088 = -0.183*t4908;
  t5652 = 0. + t5088;
  t9780 = -0.047*t9779;
  t9789 = 0. + t9780;
  t9820 = -1.*t9819;
  t9821 = 1. + t9820;
  t9824 = 0.047*t9821;
  t9825 = 0. + t9824;
  t9866 = t9794*t9805*t9796;
  t9868 = -1.*t5680*t9806;
  t9869 = t9866 + t9868;
  t9872 = t5680*t9794;
  t9873 = t9805*t9796*t9806;
  t9874 = t9872 + t9873;
  t9847 = -0.183*t9841;
  t9848 = 0. + t9847;
  t9893 = t9819*t9869;
  t9894 = -1.*t9779*t9874;
  t9896 = t9893 + t9894;
  t9929 = t9819*t9666*t9794;
  t9930 = -1.*t9666*t9779*t9806;
  t9937 = t9929 + t9930;
  p_output1[0]=0. + t5652*t5680*t9666 + t9789*t9814 + t9825*t9830 + 0.13205*(t9779*t9814 + t9819*t9830) + t9848*t9856 - 0.183*(t419*t5680*t9666 - 1.*t9841*t9856) + var1[0];
  p_output1[1]=0. + t5652*t9666*t9805 + t9789*t9869 + t9825*t9874 + 0.13205*(t9779*t9869 + t9819*t9874) + t9848*t9896 - 0.183*(t419*t9666*t9805 - 1.*t9841*t9896) + var1[1];
  p_output1[2]=0. + t9666*t9789*t9794 - 1.*t5652*t9796 + 0.13205*(t9666*t9779*t9794 + t9666*t9806*t9819) + t9666*t9806*t9825 + t9848*t9937 - 0.183*(-1.*t419*t9796 - 1.*t9841*t9937) + var1[2];
}



void p_RL_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
