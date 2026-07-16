/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:10:04 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FL_calf_joint_src.h"

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
  double t6764;
  double t6796;
  double t6822;
  double t6812;
  double t6831;
  double t6782;
  double t6813;
  double t6834;
  double t6835;
  double t6838;
  double t6865;
  double t6872;
  double t6875;
  double t6767;
  double t6883;
  double t1131;
  double t6892;
  double t6893;
  double t6894;
  double t6897;
  double t6898;
  double t6899;
  double t6901;
  double t6912;
  double t6913;
  double t6914;
  double t6924;
  double t6925;
  double t6926;
  double t1134;
  double t2515;
  double t4136;
  double t6677;
  double t6789;
  double t6795;
  double t6844;
  double t6846;
  double t6849;
  double t6854;
  double t6949;
  double t6951;
  double t6953;
  double t6957;
  double t6958;
  double t6959;
  double t6885;
  double t6891;
  double t6900;
  double t6904;
  double t6908;
  double t6976;
  double t6981;
  double t6986;
  double t6921;
  double t6922;
  double t6923;
  double t6993;
  double t6996;
  double t7001;
  double t7003;
  double t7005;
  double t7007;
  double t7036;
  double t7038;
  double t7039;
  double t7043;
  double t7044;
  double t7045;
  double t7047;
  double t7051;
  double t7052;
  t6764 = Cos(var1[3]);
  t6796 = Cos(var1[5]);
  t6822 = Sin(var1[3]);
  t6812 = Sin(var1[4]);
  t6831 = Sin(var1[5]);
  t6782 = Sin(var1[9]);
  t6813 = t6764*t6796*t6812;
  t6834 = t6822*t6831;
  t6835 = t6813 + t6834;
  t6838 = Cos(var1[9]);
  t6865 = -1.*t6796*t6822;
  t6872 = t6764*t6812*t6831;
  t6875 = t6865 + t6872;
  t6767 = Cos(var1[4]);
  t6883 = Sin(var1[10]);
  t1131 = Cos(var1[10]);
  t6892 = t6838*t6835;
  t6893 = -1.*t6782*t6875;
  t6894 = t6892 + t6893;
  t6897 = Cos(var1[11]);
  t6898 = -1.*t6897;
  t6899 = 1. + t6898;
  t6901 = Sin(var1[11]);
  t6912 = t6764*t6767*t6883;
  t6913 = t1131*t6894;
  t6914 = t6912 + t6913;
  t6924 = t1131*t6764*t6767;
  t6925 = -1.*t6883*t6894;
  t6926 = t6924 + t6925;
  t1134 = -1.*t1131;
  t2515 = 1. + t1134;
  t4136 = 0.183*t2515;
  t6677 = 0. + t4136;
  t6789 = -0.047*t6782;
  t6795 = 0. + t6789;
  t6844 = -1.*t6838;
  t6846 = 1. + t6844;
  t6849 = 0.047*t6846;
  t6854 = 0. + t6849;
  t6949 = t6796*t6822*t6812;
  t6951 = -1.*t6764*t6831;
  t6953 = t6949 + t6951;
  t6957 = t6764*t6796;
  t6958 = t6822*t6812*t6831;
  t6959 = t6957 + t6958;
  t6885 = 0.183*t6883;
  t6891 = 0. + t6885;
  t6900 = -0.1*t6899;
  t6904 = 0.183*t6901;
  t6908 = 0. + t6900 + t6904;
  t6976 = t6838*t6953;
  t6981 = -1.*t6782*t6959;
  t6986 = t6976 + t6981;
  t6921 = 0.183*t6899;
  t6922 = 0.1*t6901;
  t6923 = 0. + t6921 + t6922;
  t6993 = t6767*t6883*t6822;
  t6996 = t1131*t6986;
  t7001 = t6993 + t6996;
  t7003 = t1131*t6767*t6822;
  t7005 = -1.*t6883*t6986;
  t7007 = t7003 + t7005;
  t7036 = t6838*t6767*t6796;
  t7038 = -1.*t6767*t6782*t6831;
  t7039 = t7036 + t7038;
  t7043 = -1.*t6883*t6812;
  t7044 = t1131*t7039;
  t7045 = t7043 + t7044;
  t7047 = -1.*t1131*t6812;
  t7051 = -1.*t6883*t7039;
  t7052 = t7047 + t7051;
  p_output1[0]=0. + t6677*t6764*t6767 + t6795*t6835 + t6854*t6875 + 0.13205*(t6782*t6835 + t6838*t6875) + t6891*t6894 + t6908*t6914 + t6923*t6926 + 0.183*(-1.*t6901*t6914 + t6897*t6926) - 0.1*(t6897*t6914 + t6901*t6926) + var1[0];
  p_output1[1]=0. + t6677*t6767*t6822 + t6795*t6953 + t6854*t6959 + 0.13205*(t6782*t6953 + t6838*t6959) + t6891*t6986 + t6908*t7001 + t6923*t7007 + 0.183*(-1.*t6901*t7001 + t6897*t7007) - 0.1*(t6897*t7001 + t6901*t7007) + var1[1];
  p_output1[2]=0. + t6767*t6795*t6796 - 1.*t6677*t6812 + 0.13205*(t6767*t6782*t6796 + t6767*t6831*t6838) + t6767*t6831*t6854 + t6891*t7039 + t6908*t7045 + t6923*t7052 + 0.183*(-1.*t6901*t7045 + t6897*t7052) - 0.1*(t6897*t7045 + t6901*t7052) + var1[2];
}



void p_FL_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
