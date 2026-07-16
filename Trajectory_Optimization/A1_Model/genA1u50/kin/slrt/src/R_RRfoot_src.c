/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:13:12 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RRfoot_src.h"

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
  double t1751;
  double t6965;
  double t6998;
  double t6984;
  double t7019;
  double t6903;
  double t2677;
  double t4063;
  double t6907;
  double t6985;
  double t7021;
  double t7027;
  double t7031;
  double t7035;
  double t7036;
  double t7039;
  double t7041;
  double t7044;
  double t7045;
  double t988;
  double t7051;
  double t7081;
  double t7082;
  double t7085;
  double t7086;
  double t7088;
  double t7089;
  double t7090;
  double t7092;
  double t7093;
  double t7118;
  double t7119;
  double t7120;
  double t6868;
  double t7046;
  double t7049;
  double t7053;
  double t7060;
  double t7070;
  double t7077;
  double t7094;
  double t7095;
  double t7097;
  double t7104;
  double t7107;
  double t7117;
  double t7121;
  double t7122;
  double t7124;
  double t7125;
  double t7126;
  t1751 = Cos(var1[3]);
  t6965 = Cos(var1[5]);
  t6998 = Sin(var1[3]);
  t6984 = Sin(var1[4]);
  t7019 = Sin(var1[5]);
  t6903 = Cos(var1[13]);
  t2677 = Cos(var1[4]);
  t4063 = Sin(var1[13]);
  t6907 = Cos(var1[12]);
  t6985 = t1751*t6965*t6984;
  t7021 = t6998*t7019;
  t7027 = t6985 + t7021;
  t7031 = t6907*t7027;
  t7035 = Sin(var1[12]);
  t7036 = -1.*t6965*t6998;
  t7039 = t1751*t6984*t7019;
  t7041 = t7036 + t7039;
  t7044 = -1.*t7035*t7041;
  t7045 = t7031 + t7044;
  t988 = Sin(var1[14]);
  t7051 = Cos(var1[14]);
  t7081 = t6965*t6998*t6984;
  t7082 = -1.*t1751*t7019;
  t7085 = t7081 + t7082;
  t7086 = t6907*t7085;
  t7088 = t1751*t6965;
  t7089 = t6998*t6984*t7019;
  t7090 = t7088 + t7089;
  t7092 = -1.*t7035*t7090;
  t7093 = t7086 + t7092;
  t7118 = t6907*t2677*t6965;
  t7119 = -1.*t2677*t7035*t7019;
  t7120 = t7118 + t7119;
  t6868 = t1751*t2677*t4063;
  t7046 = t6903*t7045;
  t7049 = t6868 + t7046;
  t7053 = t6903*t1751*t2677;
  t7060 = -1.*t4063*t7045;
  t7070 = t7053 + t7060;
  t7077 = t2677*t4063*t6998;
  t7094 = t6903*t7093;
  t7095 = t7077 + t7094;
  t7097 = t6903*t2677*t6998;
  t7104 = -1.*t4063*t7093;
  t7107 = t7097 + t7104;
  t7117 = -1.*t4063*t6984;
  t7121 = t6903*t7120;
  t7122 = t7117 + t7121;
  t7124 = -1.*t6903*t6984;
  t7125 = -1.*t4063*t7120;
  t7126 = t7124 + t7125;
  p_output1[0]=t7051*t7070 - 1.*t7049*t988;
  p_output1[1]=t7051*t7107 - 1.*t7095*t988;
  p_output1[2]=t7051*t7126 - 1.*t7122*t988;
  p_output1[3]=t7027*t7035 + t6907*t7041;
  p_output1[4]=t7035*t7085 + t6907*t7090;
  p_output1[5]=t2677*t6907*t7019 + t2677*t6965*t7035;
  p_output1[6]=t7049*t7051 + t7070*t988;
  p_output1[7]=t7051*t7095 + t7107*t988;
  p_output1[8]=t7051*t7122 + t7126*t988;
}



void R_RRfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
