/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:50:40 GMT-05:00
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
  double t9882;
  double t9880;
  double t9907;
  double t9901;
  double t9917;
  double t9925;
  double t9913;
  double t9933;
  double t9919;
  double t9926;
  double t9928;
  double t9934;
  double t9936;
  double t9938;
  double t9943;
  double t9945;
  double t9947;
  double t9954;
  double t9955;
  double t9956;
  double t9932;
  double t9939;
  double t9941;
  double t10054;
  double t10055;
  double t10061;
  double t10062;
  double t10063;
  double t10064;
  double t9953;
  double t9957;
  double t9961;
  double t9962;
  double t9963;
  double t9970;
  t9882 = Cos(var1[4]);
  t9880 = Cos(var1[3]);
  t9907 = Sin(var1[4]);
  t9901 = Sin(var1[3]);
  t9917 = Cos(var1[5]);
  t9925 = Sin(var1[5]);
  t9913 = Sin(var1[9]);
  t9933 = Cos(var1[9]);
  t9919 = t9880*t9917*t9907;
  t9926 = t9901*t9925;
  t9928 = t9919 + t9926;
  t9934 = -1.*t9917*t9901;
  t9936 = t9880*t9907*t9925;
  t9938 = t9934 + t9936;
  t9943 = t9917*t9901*t9907;
  t9945 = -1.*t9880*t9925;
  t9947 = t9943 + t9945;
  t9954 = t9880*t9917;
  t9955 = t9901*t9907*t9925;
  t9956 = t9954 + t9955;
  t9932 = t9913*t9928;
  t9939 = t9933*t9938;
  t9941 = t9932 + t9939;
  t10054 = -0.047*t9913;
  t10055 = 0. + t10054;
  t10061 = -1.*t9933;
  t10062 = 1. + t10061;
  t10063 = 0.047*t10062;
  t10064 = 0. + t10063;
  t9953 = t9913*t9947;
  t9957 = t9933*t9956;
  t9961 = t9953 + t9957;
  t9962 = t9882*t9917*t9913;
  t9963 = t9933*t9882*t9925;
  t9970 = t9962 + t9963;
  p_output1[0]=t9880*t9882;
  p_output1[1]=t9882*t9901;
  p_output1[2]=-1.*t9907;
  p_output1[3]=0.;
  p_output1[4]=t9941;
  p_output1[5]=t9961;
  p_output1[6]=t9970;
  p_output1[7]=0.;
  p_output1[8]=t9928*t9933 - 1.*t9913*t9938;
  p_output1[9]=t9933*t9947 - 1.*t9913*t9956;
  p_output1[10]=-1.*t9882*t9913*t9925 + t9882*t9917*t9933;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.183*t9880*t9882 + t10055*t9928 + t10064*t9938 + 0.047*t9941 + var1[0];
  p_output1[13]=0. + 0.183*t9882*t9901 + t10055*t9947 + t10064*t9956 + 0.047*t9961 + var1[1];
  p_output1[14]=0. - 0.183*t9907 + t10055*t9882*t9917 + t10064*t9882*t9925 + 0.047*t9970 + var1[2];
  p_output1[15]=1.;
}



void H_FL_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
