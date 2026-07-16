/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:51:06 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_FLfoot_src.h"

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
  double t700;
  double t4333;
  double t5110;
  double t4464;
  double t5156;
  double t3892;
  double t3337;
  double t3647;
  double t4272;
  double t4810;
  double t5203;
  double t5220;
  double t5221;
  double t5233;
  double t5264;
  double t5265;
  double t5278;
  double t5281;
  double t5309;
  double t227;
  double t5568;
  double t5718;
  double t5748;
  double t5762;
  double t5774;
  double t5779;
  double t5796;
  double t5797;
  double t5799;
  double t5822;
  double t6049;
  double t6056;
  double t6068;
  double t3869;
  double t5426;
  double t5457;
  double t5615;
  double t5619;
  double t5664;
  double t5706;
  double t5834;
  double t5836;
  double t5863;
  double t5867;
  double t5868;
  double t5885;
  double t6095;
  double t6164;
  double t6194;
  double t6262;
  double t6277;
  t700 = Cos(var1[3]);
  t4333 = Cos(var1[5]);
  t5110 = Sin(var1[3]);
  t4464 = Sin(var1[4]);
  t5156 = Sin(var1[5]);
  t3892 = Cos(var1[10]);
  t3337 = Cos(var1[4]);
  t3647 = Sin(var1[10]);
  t4272 = Cos(var1[9]);
  t4810 = t700*t4333*t4464;
  t5203 = t5110*t5156;
  t5220 = t4810 + t5203;
  t5221 = t4272*t5220;
  t5233 = Sin(var1[9]);
  t5264 = -1.*t4333*t5110;
  t5265 = t700*t4464*t5156;
  t5278 = t5264 + t5265;
  t5281 = -1.*t5233*t5278;
  t5309 = t5221 + t5281;
  t227 = Sin(var1[11]);
  t5568 = Cos(var1[11]);
  t5718 = t4333*t5110*t4464;
  t5748 = -1.*t700*t5156;
  t5762 = t5718 + t5748;
  t5774 = t4272*t5762;
  t5779 = t700*t4333;
  t5796 = t5110*t4464*t5156;
  t5797 = t5779 + t5796;
  t5799 = -1.*t5233*t5797;
  t5822 = t5774 + t5799;
  t6049 = t4272*t3337*t4333;
  t6056 = -1.*t3337*t5233*t5156;
  t6068 = t6049 + t6056;
  t3869 = t700*t3337*t3647;
  t5426 = t3892*t5309;
  t5457 = t3869 + t5426;
  t5615 = t3892*t700*t3337;
  t5619 = -1.*t3647*t5309;
  t5664 = t5615 + t5619;
  t5706 = t3337*t3647*t5110;
  t5834 = t3892*t5822;
  t5836 = t5706 + t5834;
  t5863 = t3892*t3337*t5110;
  t5867 = -1.*t3647*t5822;
  t5868 = t5863 + t5867;
  t5885 = -1.*t3647*t4464;
  t6095 = t3892*t6068;
  t6164 = t5885 + t6095;
  t6194 = -1.*t3892*t4464;
  t6262 = -1.*t3647*t6068;
  t6277 = t6194 + t6262;
  p_output1[0]=-1.*t227*t5457 + t5568*t5664;
  p_output1[1]=-1.*t227*t5836 + t5568*t5868;
  p_output1[2]=-1.*t227*t6164 + t5568*t6277;
  p_output1[3]=t5220*t5233 + t4272*t5278;
  p_output1[4]=t5233*t5762 + t4272*t5797;
  p_output1[5]=t3337*t4272*t5156 + t3337*t4333*t5233;
  p_output1[6]=t5457*t5568 + t227*t5664;
  p_output1[7]=t5568*t5836 + t227*t5868;
  p_output1[8]=t5568*t6164 + t227*t6277;
}



void R_FLfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
