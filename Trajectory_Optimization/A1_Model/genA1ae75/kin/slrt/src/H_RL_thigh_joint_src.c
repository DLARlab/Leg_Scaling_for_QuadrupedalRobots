/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:50:57 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RL_thigh_joint_src.h"

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
  double t1745;
  double t5076;
  double t8236;
  double t5620;
  double t8857;
  double t374;
  double t2083;
  double t3318;
  double t3466;
  double t10829;
  double t7876;
  double t8908;
  double t9533;
  double t10833;
  double t10866;
  double t10882;
  double t10996;
  double t11000;
  double t11011;
  double t11014;
  double t11023;
  double t11024;
  double t10807;
  double t10883;
  double t10894;
  double t11012;
  double t11030;
  double t11031;
  double t11048;
  double t11049;
  double t11052;
  double t11068;
  double t11086;
  double t11123;
  double t3174;
  double t10949;
  double t10953;
  double t11212;
  double t11218;
  double t11226;
  double t11229;
  double t11232;
  double t11237;
  double t11254;
  double t11262;
  double t11264;
  double t11269;
  double t11125;
  double t11128;
  double t11131;
  double t11285;
  double t11287;
  double t10991;
  double t11033;
  double t11036;
  double t11150;
  double t11158;
  double t11160;
  double t11037;
  double t11063;
  double t11066;
  t1745 = Cos(var1[3]);
  t5076 = Cos(var1[5]);
  t8236 = Sin(var1[3]);
  t5620 = Sin(var1[4]);
  t8857 = Sin(var1[5]);
  t374 = Cos(var1[16]);
  t2083 = Cos(var1[4]);
  t3318 = Sin(var1[16]);
  t3466 = Cos(var1[15]);
  t10829 = Sin(var1[15]);
  t7876 = t1745*t5076*t5620;
  t8908 = t8236*t8857;
  t9533 = t7876 + t8908;
  t10833 = -1.*t5076*t8236;
  t10866 = t1745*t5620*t8857;
  t10882 = t10833 + t10866;
  t10996 = t5076*t8236*t5620;
  t11000 = -1.*t1745*t8857;
  t11011 = t10996 + t11000;
  t11014 = t1745*t5076;
  t11023 = t8236*t5620*t8857;
  t11024 = t11014 + t11023;
  t10807 = t3466*t9533;
  t10883 = -1.*t10829*t10882;
  t10894 = t10807 + t10883;
  t11012 = t3466*t11011;
  t11030 = -1.*t10829*t11024;
  t11031 = t11012 + t11030;
  t11048 = t3466*t2083*t5076;
  t11049 = -1.*t2083*t10829*t8857;
  t11052 = t11048 + t11049;
  t11068 = t10829*t9533;
  t11086 = t3466*t10882;
  t11123 = t11068 + t11086;
  t3174 = t374*t1745*t2083;
  t10949 = -1.*t3318*t10894;
  t10953 = t3174 + t10949;
  t11212 = -1.*t374;
  t11218 = 1. + t11212;
  t11226 = -0.183*t11218;
  t11229 = 0. + t11226;
  t11232 = -0.047*t10829;
  t11237 = 0. + t11232;
  t11254 = -1.*t3466;
  t11262 = 1. + t11254;
  t11264 = 0.047*t11262;
  t11269 = 0. + t11264;
  t11125 = t10829*t11011;
  t11128 = t3466*t11024;
  t11131 = t11125 + t11128;
  t11285 = -0.183*t3318;
  t11287 = 0. + t11285;
  t10991 = t374*t2083*t8236;
  t11033 = -1.*t3318*t11031;
  t11036 = t10991 + t11033;
  t11150 = t2083*t5076*t10829;
  t11158 = t3466*t2083*t8857;
  t11160 = t11150 + t11158;
  t11037 = -1.*t374*t5620;
  t11063 = -1.*t3318*t11052;
  t11066 = t11037 + t11063;
  p_output1[0]=t10953;
  p_output1[1]=t11036;
  p_output1[2]=t11066;
  p_output1[3]=0.;
  p_output1[4]=t11123;
  p_output1[5]=t11131;
  p_output1[6]=t11160;
  p_output1[7]=0.;
  p_output1[8]=t1745*t2083*t3318 + t10894*t374;
  p_output1[9]=t11031*t374 + t2083*t3318*t8236;
  p_output1[10]=t11052*t374 - 1.*t3318*t5620;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.183*t10953 + 0.13205*t11123 + t10882*t11269 + t10894*t11287 + t11229*t1745*t2083 + t11237*t9533 + var1[0];
  p_output1[13]=0. - 0.183*t11036 + 0.13205*t11131 + t11011*t11237 + t11024*t11269 + t11031*t11287 + t11229*t2083*t8236 + var1[1];
  p_output1[14]=0. - 0.183*t11066 + 0.13205*t11160 + t11052*t11287 + t11237*t2083*t5076 - 1.*t11229*t5620 + t11269*t2083*t8857 + var1[2];
  p_output1[15]=1.;
}



void H_RL_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
