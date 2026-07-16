/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:26:00 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RL_calf_joint_src.h"

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
  double t1593;
  double t3522;
  double t4373;
  double t3903;
  double t5388;
  double t2919;
  double t4314;
  double t5461;
  double t5751;
  double t5835;
  double t5945;
  double t5990;
  double t6198;
  double t2372;
  double t6545;
  double t303;
  double t6711;
  double t6939;
  double t7062;
  double t7179;
  double t7184;
  double t7205;
  double t7306;
  double t7411;
  double t7423;
  double t7428;
  double t7543;
  double t7616;
  double t7654;
  double t363;
  double t769;
  double t1003;
  double t1372;
  double t3006;
  double t3401;
  double t5853;
  double t5887;
  double t5899;
  double t5909;
  double t7988;
  double t8158;
  double t8161;
  double t8230;
  double t8231;
  double t8247;
  double t6595;
  double t6599;
  double t7290;
  double t7308;
  double t7320;
  double t8498;
  double t8525;
  double t8526;
  double t7514;
  double t7536;
  double t7542;
  double t8556;
  double t8568;
  double t8570;
  double t8594;
  double t8624;
  double t8633;
  double t9041;
  double t9046;
  double t9075;
  double t9087;
  double t9104;
  double t9125;
  double t9133;
  double t9151;
  double t9170;
  t1593 = Cos(var1[3]);
  t3522 = Cos(var1[5]);
  t4373 = Sin(var1[3]);
  t3903 = Sin(var1[4]);
  t5388 = Sin(var1[5]);
  t2919 = Sin(var1[15]);
  t4314 = t1593*t3522*t3903;
  t5461 = t4373*t5388;
  t5751 = t4314 + t5461;
  t5835 = Cos(var1[15]);
  t5945 = -1.*t3522*t4373;
  t5990 = t1593*t3903*t5388;
  t6198 = t5945 + t5990;
  t2372 = Cos(var1[4]);
  t6545 = Sin(var1[16]);
  t303 = Cos(var1[16]);
  t6711 = t5835*t5751;
  t6939 = -1.*t2919*t6198;
  t7062 = t6711 + t6939;
  t7179 = Cos(var1[17]);
  t7184 = -1.*t7179;
  t7205 = 1. + t7184;
  t7306 = Sin(var1[17]);
  t7411 = t1593*t2372*t6545;
  t7423 = t303*t7062;
  t7428 = t7411 + t7423;
  t7543 = t303*t1593*t2372;
  t7616 = -1.*t6545*t7062;
  t7654 = t7543 + t7616;
  t363 = -1.*t303;
  t769 = 1. + t363;
  t1003 = -0.183*t769;
  t1372 = 0. + t1003;
  t3006 = -0.047*t2919;
  t3401 = 0. + t3006;
  t5853 = -1.*t5835;
  t5887 = 1. + t5853;
  t5899 = 0.047*t5887;
  t5909 = 0. + t5899;
  t7988 = t3522*t4373*t3903;
  t8158 = -1.*t1593*t5388;
  t8161 = t7988 + t8158;
  t8230 = t1593*t3522;
  t8231 = t4373*t3903*t5388;
  t8247 = t8230 + t8231;
  t6595 = -0.183*t6545;
  t6599 = 0. + t6595;
  t7290 = -0.3*t7205;
  t7308 = -0.183*t7306;
  t7320 = 0. + t7290 + t7308;
  t8498 = t5835*t8161;
  t8525 = -1.*t2919*t8247;
  t8526 = t8498 + t8525;
  t7514 = -0.183*t7205;
  t7536 = 0.3*t7306;
  t7542 = 0. + t7514 + t7536;
  t8556 = t2372*t6545*t4373;
  t8568 = t303*t8526;
  t8570 = t8556 + t8568;
  t8594 = t303*t2372*t4373;
  t8624 = -1.*t6545*t8526;
  t8633 = t8594 + t8624;
  t9041 = t5835*t2372*t3522;
  t9046 = -1.*t2372*t2919*t5388;
  t9075 = t9041 + t9046;
  t9087 = -1.*t6545*t3903;
  t9104 = t303*t9075;
  t9125 = t9087 + t9104;
  t9133 = -1.*t303*t3903;
  t9151 = -1.*t6545*t9075;
  t9170 = t9133 + t9151;
  p_output1[0]=0. + t1372*t1593*t2372 + t3401*t5751 + t5909*t6198 + 0.17458*(t2919*t5751 + t5835*t6198) + t6599*t7062 + t7320*t7428 + t7542*t7654 - 0.183*(-1.*t7306*t7428 + t7179*t7654) - 0.3*(t7179*t7428 + t7306*t7654) + var1[0];
  p_output1[1]=0. + t1372*t2372*t4373 + t3401*t8161 + t5909*t8247 + 0.17458*(t2919*t8161 + t5835*t8247) + t6599*t8526 + t7320*t8570 + t7542*t8633 - 0.183*(-1.*t7306*t8570 + t7179*t8633) - 0.3*(t7179*t8570 + t7306*t8633) + var1[1];
  p_output1[2]=0. + t2372*t3401*t3522 - 1.*t1372*t3903 + 0.17458*(t2372*t2919*t3522 + t2372*t5388*t5835) + t2372*t5388*t5909 + t6599*t9075 + t7320*t9125 + t7542*t9170 - 0.183*(-1.*t7306*t9125 + t7179*t9170) - 0.3*(t7179*t9125 + t7306*t9170) + var1[2];
}



void p_RL_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
