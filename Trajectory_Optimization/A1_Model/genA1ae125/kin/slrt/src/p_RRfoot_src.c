/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:03:43 GMT-05:00
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
  double t375;
  double t768;
  double t1042;
  double t942;
  double t1066;
  double t528;
  double t1002;
  double t1164;
  double t1462;
  double t1904;
  double t3048;
  double t3335;
  double t3419;
  double t415;
  double t5507;
  double t10;
  double t6904;
  double t7038;
  double t7076;
  double t7534;
  double t8253;
  double t8600;
  double t8741;
  double t8771;
  double t8798;
  double t8801;
  double t8847;
  double t8848;
  double t8851;
  double t139;
  double t171;
  double t260;
  double t293;
  double t579;
  double t633;
  double t1946;
  double t2396;
  double t2704;
  double t2892;
  double t8899;
  double t8900;
  double t8901;
  double t8903;
  double t8904;
  double t8911;
  double t5572;
  double t5578;
  double t8689;
  double t8759;
  double t8762;
  double t8934;
  double t8935;
  double t8936;
  double t8820;
  double t8823;
  double t8846;
  double t8939;
  double t8940;
  double t8943;
  double t8946;
  double t8951;
  double t8952;
  double t9045;
  double t9047;
  double t9048;
  double t9055;
  double t9064;
  double t9073;
  double t9080;
  double t9081;
  double t9082;
  t375 = Cos(var1[3]);
  t768 = Cos(var1[5]);
  t1042 = Sin(var1[3]);
  t942 = Sin(var1[4]);
  t1066 = Sin(var1[5]);
  t528 = Sin(var1[12]);
  t1002 = t375*t768*t942;
  t1164 = t1042*t1066;
  t1462 = t1002 + t1164;
  t1904 = Cos(var1[12]);
  t3048 = -1.*t768*t1042;
  t3335 = t375*t942*t1066;
  t3419 = t3048 + t3335;
  t415 = Cos(var1[4]);
  t5507 = Sin(var1[13]);
  t10 = Cos(var1[13]);
  t6904 = t1904*t1462;
  t7038 = -1.*t528*t3419;
  t7076 = t6904 + t7038;
  t7534 = Cos(var1[14]);
  t8253 = -1.*t7534;
  t8600 = 1. + t8253;
  t8741 = Sin(var1[14]);
  t8771 = t375*t415*t5507;
  t8798 = t10*t7076;
  t8801 = t8771 + t8798;
  t8847 = t10*t375*t415;
  t8848 = -1.*t5507*t7076;
  t8851 = t8847 + t8848;
  t139 = -1.*t10;
  t171 = 1. + t139;
  t260 = -0.183*t171;
  t293 = 0. + t260;
  t579 = 0.047*t528;
  t633 = 0. + t579;
  t1946 = -1.*t1904;
  t2396 = 1. + t1946;
  t2704 = -0.047*t2396;
  t2892 = 0. + t2704;
  t8899 = t768*t1042*t942;
  t8900 = -1.*t375*t1066;
  t8901 = t8899 + t8900;
  t8903 = t375*t768;
  t8904 = t1042*t942*t1066;
  t8911 = t8903 + t8904;
  t5572 = -0.183*t5507;
  t5578 = 0. + t5572;
  t8689 = -0.25*t8600;
  t8759 = -0.183*t8741;
  t8762 = 0. + t8689 + t8759;
  t8934 = t1904*t8901;
  t8935 = -1.*t528*t8911;
  t8936 = t8934 + t8935;
  t8820 = -0.183*t8600;
  t8823 = 0.25*t8741;
  t8846 = 0. + t8820 + t8823;
  t8939 = t415*t5507*t1042;
  t8940 = t10*t8936;
  t8943 = t8939 + t8940;
  t8946 = t10*t415*t1042;
  t8951 = -1.*t5507*t8936;
  t8952 = t8946 + t8951;
  t9045 = t1904*t415*t768;
  t9047 = -1.*t415*t528*t1066;
  t9048 = t9045 + t9047;
  t9055 = -1.*t5507*t942;
  t9064 = t10*t9048;
  t9073 = t9055 + t9064;
  t9080 = -1.*t10*t942;
  t9081 = -1.*t5507*t9048;
  t9082 = t9080 + t9081;
  p_output1[0]=0. + t2892*t3419 + t293*t375*t415 - 0.13205*(t1904*t3419 + t1462*t528) + t1462*t633 + t5578*t7076 + t8762*t8801 + t8846*t8851 - 0.183*(-1.*t8741*t8801 + t7534*t8851) - 0.5*(t7534*t8801 + t8741*t8851) + var1[0];
  p_output1[1]=0. + t1042*t293*t415 + t633*t8901 + t2892*t8911 - 0.13205*(t528*t8901 + t1904*t8911) + t5578*t8936 + t8762*t8943 + t8846*t8952 - 0.183*(-1.*t8741*t8943 + t7534*t8952) - 0.5*(t7534*t8943 + t8741*t8952) + var1[1];
  p_output1[2]=0. + t1066*t2892*t415 + t415*t633*t768 - 0.13205*(t1066*t1904*t415 + t415*t528*t768) + t5578*t9048 + t8762*t9073 + t8846*t9082 - 0.183*(-1.*t8741*t9073 + t7534*t9082) - 0.5*(t7534*t9073 + t8741*t9082) - 1.*t293*t942 + var1[2];
}



void p_RRfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
