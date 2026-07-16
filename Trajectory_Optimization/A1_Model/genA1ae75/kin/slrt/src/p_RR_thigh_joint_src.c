/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:50:49 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RR_thigh_joint_src.h"

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
  double t8708;
  double t8806;
  double t8896;
  double t8808;
  double t8898;
  double t8744;
  double t8863;
  double t8926;
  double t8942;
  double t8950;
  double t8966;
  double t8972;
  double t8973;
  double t91;
  double t8721;
  double t9001;
  double t9013;
  double t9014;
  double t9029;
  double t3332;
  double t3375;
  double t8564;
  double t8687;
  double t8767;
  double t8773;
  double t8952;
  double t8955;
  double t8960;
  double t8964;
  double t9088;
  double t9095;
  double t9097;
  double t9101;
  double t9102;
  double t9105;
  double t9003;
  double t9010;
  double t9136;
  double t9137;
  double t9152;
  double t9194;
  double t9197;
  double t9216;
  t8708 = Cos(var1[3]);
  t8806 = Cos(var1[5]);
  t8896 = Sin(var1[3]);
  t8808 = Sin(var1[4]);
  t8898 = Sin(var1[5]);
  t8744 = Sin(var1[12]);
  t8863 = t8708*t8806*t8808;
  t8926 = t8896*t8898;
  t8942 = t8863 + t8926;
  t8950 = Cos(var1[12]);
  t8966 = -1.*t8806*t8896;
  t8972 = t8708*t8808*t8898;
  t8973 = t8966 + t8972;
  t91 = Cos(var1[13]);
  t8721 = Cos(var1[4]);
  t9001 = Sin(var1[13]);
  t9013 = t8950*t8942;
  t9014 = -1.*t8744*t8973;
  t9029 = t9013 + t9014;
  t3332 = -1.*t91;
  t3375 = 1. + t3332;
  t8564 = -0.183*t3375;
  t8687 = 0. + t8564;
  t8767 = 0.047*t8744;
  t8773 = 0. + t8767;
  t8952 = -1.*t8950;
  t8955 = 1. + t8952;
  t8960 = -0.047*t8955;
  t8964 = 0. + t8960;
  t9088 = t8806*t8896*t8808;
  t9095 = -1.*t8708*t8898;
  t9097 = t9088 + t9095;
  t9101 = t8708*t8806;
  t9102 = t8896*t8808*t8898;
  t9105 = t9101 + t9102;
  t9003 = -0.183*t9001;
  t9010 = 0. + t9003;
  t9136 = t8950*t9097;
  t9137 = -1.*t8744*t9105;
  t9152 = t9136 + t9137;
  t9194 = t8950*t8721*t8806;
  t9197 = -1.*t8721*t8744*t8898;
  t9216 = t9194 + t9197;
  p_output1[0]=0. + t8687*t8708*t8721 + t8773*t8942 + t8964*t8973 - 0.13205*(t8744*t8942 + t8950*t8973) + t9010*t9029 - 0.183*(-1.*t9001*t9029 + t8708*t8721*t91) + var1[0];
  p_output1[1]=0. + t8687*t8721*t8896 + t8773*t9097 + t8964*t9105 - 0.13205*(t8744*t9097 + t8950*t9105) + t9010*t9152 - 0.183*(t8721*t8896*t91 - 1.*t9001*t9152) + var1[1];
  p_output1[2]=0. + t8721*t8773*t8806 - 1.*t8687*t8808 - 0.13205*(t8721*t8744*t8806 + t8721*t8898*t8950) + t8721*t8898*t8964 + t9010*t9216 - 0.183*(-1.*t8808*t91 - 1.*t9001*t9216) + var1[2];
}



void p_RR_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
