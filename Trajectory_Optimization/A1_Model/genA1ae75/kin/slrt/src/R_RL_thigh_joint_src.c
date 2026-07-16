/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:50:58 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RL_thigh_joint_src.h"

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
  double t3096;
  double t8908;
  double t10991;
  double t9083;
  double t10996;
  double t270;
  double t3098;
  double t5895;
  double t8465;
  double t11086;
  double t10542;
  double t11011;
  double t11060;
  double t11123;
  double t11125;
  double t11150;
  double t11178;
  double t11180;
  double t11182;
  double t11191;
  double t11194;
  double t11208;
  double t11068;
  double t11158;
  double t11160;
  double t11183;
  double t11226;
  double t11231;
  double t11264;
  double t11269;
  double t11270;
  t3096 = Cos(var1[3]);
  t8908 = Cos(var1[5]);
  t10991 = Sin(var1[3]);
  t9083 = Sin(var1[4]);
  t10996 = Sin(var1[5]);
  t270 = Cos(var1[16]);
  t3098 = Cos(var1[4]);
  t5895 = Sin(var1[16]);
  t8465 = Cos(var1[15]);
  t11086 = Sin(var1[15]);
  t10542 = t3096*t8908*t9083;
  t11011 = t10991*t10996;
  t11060 = t10542 + t11011;
  t11123 = -1.*t8908*t10991;
  t11125 = t3096*t9083*t10996;
  t11150 = t11123 + t11125;
  t11178 = t8908*t10991*t9083;
  t11180 = -1.*t3096*t10996;
  t11182 = t11178 + t11180;
  t11191 = t3096*t8908;
  t11194 = t10991*t9083*t10996;
  t11208 = t11191 + t11194;
  t11068 = t8465*t11060;
  t11158 = -1.*t11086*t11150;
  t11160 = t11068 + t11158;
  t11183 = t8465*t11182;
  t11226 = -1.*t11086*t11208;
  t11231 = t11183 + t11226;
  t11264 = t8465*t3098*t8908;
  t11269 = -1.*t3098*t11086*t10996;
  t11270 = t11264 + t11269;
  p_output1[0]=t270*t3096*t3098 - 1.*t11160*t5895;
  p_output1[1]=t10991*t270*t3098 - 1.*t11231*t5895;
  p_output1[2]=-1.*t11270*t5895 - 1.*t270*t9083;
  p_output1[3]=t11060*t11086 + t11150*t8465;
  p_output1[4]=t11086*t11182 + t11208*t8465;
  p_output1[5]=t10996*t3098*t8465 + t11086*t3098*t8908;
  p_output1[6]=t11160*t270 + t3096*t3098*t5895;
  p_output1[7]=t11231*t270 + t10991*t3098*t5895;
  p_output1[8]=t11270*t270 - 1.*t5895*t9083;
}



void R_RL_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
