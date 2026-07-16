/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:25:53 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RR_calf_joint_src.h"

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
  double t1977;
  double t2463;
  double t3407;
  double t2742;
  double t3460;
  double t2144;
  double t2933;
  double t4714;
  double t4735;
  double t5249;
  double t7195;
  double t7234;
  double t7240;
  double t1988;
  double t7618;
  double t1506;
  double t7724;
  double t7727;
  double t7747;
  double t7771;
  double t7797;
  double t7823;
  double t7843;
  double t8063;
  double t8065;
  double t8082;
  double t8198;
  double t8222;
  double t8241;
  double t1512;
  double t1665;
  double t1703;
  double t1818;
  double t2315;
  double t2428;
  double t5351;
  double t5352;
  double t6898;
  double t7154;
  double t8494;
  double t8506;
  double t8510;
  double t8541;
  double t8568;
  double t8573;
  double t7662;
  double t7700;
  double t7826;
  double t7951;
  double t8037;
  double t8648;
  double t8652;
  double t8656;
  double t8121;
  double t8145;
  double t8167;
  double t8682;
  double t8688;
  double t8694;
  double t8720;
  double t8731;
  double t8735;
  double t8985;
  double t8988;
  double t8992;
  double t8997;
  double t9003;
  double t9009;
  double t9038;
  double t9048;
  double t9054;
  t1977 = Cos(var1[3]);
  t2463 = Cos(var1[5]);
  t3407 = Sin(var1[3]);
  t2742 = Sin(var1[4]);
  t3460 = Sin(var1[5]);
  t2144 = Sin(var1[12]);
  t2933 = t1977*t2463*t2742;
  t4714 = t3407*t3460;
  t4735 = t2933 + t4714;
  t5249 = Cos(var1[12]);
  t7195 = -1.*t2463*t3407;
  t7234 = t1977*t2742*t3460;
  t7240 = t7195 + t7234;
  t1988 = Cos(var1[4]);
  t7618 = Sin(var1[13]);
  t1506 = Cos(var1[13]);
  t7724 = t5249*t4735;
  t7727 = -1.*t2144*t7240;
  t7747 = t7724 + t7727;
  t7771 = Cos(var1[14]);
  t7797 = -1.*t7771;
  t7823 = 1. + t7797;
  t7843 = Sin(var1[14]);
  t8063 = t1977*t1988*t7618;
  t8065 = t1506*t7747;
  t8082 = t8063 + t8065;
  t8198 = t1506*t1977*t1988;
  t8222 = -1.*t7618*t7747;
  t8241 = t8198 + t8222;
  t1512 = -1.*t1506;
  t1665 = 1. + t1512;
  t1703 = -0.183*t1665;
  t1818 = 0. + t1703;
  t2315 = 0.047*t2144;
  t2428 = 0. + t2315;
  t5351 = -1.*t5249;
  t5352 = 1. + t5351;
  t6898 = -0.047*t5352;
  t7154 = 0. + t6898;
  t8494 = t2463*t3407*t2742;
  t8506 = -1.*t1977*t3460;
  t8510 = t8494 + t8506;
  t8541 = t1977*t2463;
  t8568 = t3407*t2742*t3460;
  t8573 = t8541 + t8568;
  t7662 = -0.183*t7618;
  t7700 = 0. + t7662;
  t7826 = -0.3*t7823;
  t7951 = -0.183*t7843;
  t8037 = 0. + t7826 + t7951;
  t8648 = t5249*t8510;
  t8652 = -1.*t2144*t8573;
  t8656 = t8648 + t8652;
  t8121 = -0.183*t7823;
  t8145 = 0.3*t7843;
  t8167 = 0. + t8121 + t8145;
  t8682 = t1988*t7618*t3407;
  t8688 = t1506*t8656;
  t8694 = t8682 + t8688;
  t8720 = t1506*t1988*t3407;
  t8731 = -1.*t7618*t8656;
  t8735 = t8720 + t8731;
  t8985 = t5249*t1988*t2463;
  t8988 = -1.*t1988*t2144*t3460;
  t8992 = t8985 + t8988;
  t8997 = -1.*t7618*t2742;
  t9003 = t1506*t8992;
  t9009 = t8997 + t9003;
  t9038 = -1.*t1506*t2742;
  t9048 = -1.*t7618*t8992;
  t9054 = t9038 + t9048;
  p_output1[0]=0. + t1818*t1977*t1988 + t2428*t4735 + t7154*t7240 - 0.17458*(t2144*t4735 + t5249*t7240) + t7700*t7747 + t8037*t8082 + t8167*t8241 - 0.183*(-1.*t7843*t8082 + t7771*t8241) - 0.3*(t7771*t8082 + t7843*t8241) + var1[0];
  p_output1[1]=0. + t1818*t1988*t3407 + t2428*t8510 + t7154*t8573 - 0.17458*(t2144*t8510 + t5249*t8573) + t7700*t8656 + t8037*t8694 + t8167*t8735 - 0.183*(-1.*t7843*t8694 + t7771*t8735) - 0.3*(t7771*t8694 + t7843*t8735) + var1[1];
  p_output1[2]=0. + t1988*t2428*t2463 - 1.*t1818*t2742 - 0.17458*(t1988*t2144*t2463 + t1988*t3460*t5249) + t1988*t3460*t7154 + t7700*t8992 + t8037*t9009 + t8167*t9054 - 0.183*(-1.*t7843*t9009 + t7771*t9054) - 0.3*(t7771*t9009 + t7843*t9054) + var1[2];
}



void p_RR_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
