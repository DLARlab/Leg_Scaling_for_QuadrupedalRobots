/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:10:20 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RL_calf_joint_src.h"

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
  double t993;
  double t1509;
  double t1967;
  double t1525;
  double t2469;
  double t1231;
  double t1064;
  double t1150;
  double t1301;
  double t1908;
  double t2562;
  double t2565;
  double t2566;
  double t2569;
  double t2587;
  double t2612;
  double t2622;
  double t2648;
  double t2650;
  double t821;
  double t3158;
  double t3843;
  double t3857;
  double t3861;
  double t3887;
  double t3888;
  double t3907;
  double t4004;
  double t4065;
  double t4104;
  double t4709;
  double t4825;
  double t4858;
  double t1162;
  double t2713;
  double t2748;
  double t3208;
  double t3258;
  double t3264;
  double t3690;
  double t4106;
  double t4145;
  double t4411;
  double t4515;
  double t4593;
  double t4670;
  double t4921;
  double t5032;
  double t5071;
  double t5082;
  double t5085;
  double t5125;
  double t5138;
  double t5162;
  double t8528;
  double t8531;
  double t2974;
  double t3347;
  double t3529;
  double t6037;
  double t6050;
  double t6136;
  double t6507;
  double t6527;
  double t6616;
  double t6825;
  double t7080;
  double t7294;
  double t7483;
  double t7511;
  double t7668;
  double t7938;
  double t5293;
  double t5380;
  double t5392;
  double t8465;
  double t8483;
  double t8535;
  double t8539;
  double t8542;
  double t8557;
  double t8560;
  double t8572;
  double t4225;
  double t4606;
  double t4638;
  double t6159;
  double t6186;
  double t6335;
  double t5571;
  double t5621;
  double t5780;
  double t5067;
  double t5110;
  double t5118;
  double t6417;
  double t6435;
  double t6492;
  t993 = Cos(var1[3]);
  t1509 = Cos(var1[5]);
  t1967 = Sin(var1[3]);
  t1525 = Sin(var1[4]);
  t2469 = Sin(var1[5]);
  t1231 = Cos(var1[16]);
  t1064 = Cos(var1[4]);
  t1150 = Sin(var1[16]);
  t1301 = Cos(var1[15]);
  t1908 = t993*t1509*t1525;
  t2562 = t1967*t2469;
  t2565 = t1908 + t2562;
  t2566 = t1301*t2565;
  t2569 = Sin(var1[15]);
  t2587 = -1.*t1509*t1967;
  t2612 = t993*t1525*t2469;
  t2622 = t2587 + t2612;
  t2648 = -1.*t2569*t2622;
  t2650 = t2566 + t2648;
  t821 = Sin(var1[17]);
  t3158 = Cos(var1[17]);
  t3843 = t1509*t1967*t1525;
  t3857 = -1.*t993*t2469;
  t3861 = t3843 + t3857;
  t3887 = t1301*t3861;
  t3888 = t993*t1509;
  t3907 = t1967*t1525*t2469;
  t4004 = t3888 + t3907;
  t4065 = -1.*t2569*t4004;
  t4104 = t3887 + t4065;
  t4709 = t1301*t1064*t1509;
  t4825 = -1.*t1064*t2569*t2469;
  t4858 = t4709 + t4825;
  t1162 = t993*t1064*t1150;
  t2713 = t1231*t2650;
  t2748 = t1162 + t2713;
  t3208 = t1231*t993*t1064;
  t3258 = -1.*t1150*t2650;
  t3264 = t3208 + t3258;
  t3690 = t1064*t1150*t1967;
  t4106 = t1231*t4104;
  t4145 = t3690 + t4106;
  t4411 = t1231*t1064*t1967;
  t4515 = -1.*t1150*t4104;
  t4593 = t4411 + t4515;
  t4670 = -1.*t1150*t1525;
  t4921 = t1231*t4858;
  t5032 = t4670 + t4921;
  t5071 = -1.*t1231*t1525;
  t5082 = -1.*t1150*t4858;
  t5085 = t5071 + t5082;
  t5125 = t2569*t2565;
  t5138 = t1301*t2622;
  t5162 = t5125 + t5138;
  t8528 = -1.*t3158;
  t8531 = 1. + t8528;
  t2974 = -1.*t821*t2748;
  t3347 = t3158*t3264;
  t3529 = t2974 + t3347;
  t6037 = t3158*t2748;
  t6050 = t821*t3264;
  t6136 = t6037 + t6050;
  t6507 = -1.*t1231;
  t6527 = 1. + t6507;
  t6616 = -0.183*t6527;
  t6825 = 0. + t6616;
  t7080 = -0.047*t2569;
  t7294 = 0. + t7080;
  t7483 = -1.*t1301;
  t7511 = 1. + t7483;
  t7668 = 0.047*t7511;
  t7938 = 0. + t7668;
  t5293 = t2569*t3861;
  t5380 = t1301*t4004;
  t5392 = t5293 + t5380;
  t8465 = -0.183*t1150;
  t8483 = 0. + t8465;
  t8535 = -0.1*t8531;
  t8539 = -0.183*t821;
  t8542 = 0. + t8535 + t8539;
  t8557 = -0.183*t8531;
  t8560 = 0.1*t821;
  t8572 = 0. + t8557 + t8560;
  t4225 = -1.*t821*t4145;
  t4606 = t3158*t4593;
  t4638 = t4225 + t4606;
  t6159 = t3158*t4145;
  t6186 = t821*t4593;
  t6335 = t6159 + t6186;
  t5571 = t1064*t1509*t2569;
  t5621 = t1301*t1064*t2469;
  t5780 = t5571 + t5621;
  t5067 = -1.*t821*t5032;
  t5110 = t3158*t5085;
  t5118 = t5067 + t5110;
  t6417 = t3158*t5032;
  t6435 = t821*t5085;
  t6492 = t6417 + t6435;
  p_output1[0]=t3529;
  p_output1[1]=t4638;
  p_output1[2]=t5118;
  p_output1[3]=0.;
  p_output1[4]=t5162;
  p_output1[5]=t5392;
  p_output1[6]=t5780;
  p_output1[7]=0.;
  p_output1[8]=t6136;
  p_output1[9]=t6335;
  p_output1[10]=t6492;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.183*t3529 + 0.13205*t5162 - 0.1*t6136 + t2565*t7294 + t2622*t7938 + t2650*t8483 + t2748*t8542 + t3264*t8572 + t1064*t6825*t993 + var1[0];
  p_output1[13]=0. - 0.183*t4638 + 0.13205*t5392 - 0.1*t6335 + t1064*t1967*t6825 + t3861*t7294 + t4004*t7938 + t4104*t8483 + t4145*t8542 + t4593*t8572 + var1[1];
  p_output1[14]=0. - 0.183*t5118 + 0.13205*t5780 - 0.1*t6492 - 1.*t1525*t6825 + t1064*t1509*t7294 + t1064*t2469*t7938 + t4858*t8483 + t5032*t8542 + t5085*t8572 + var1[2];
  p_output1[15]=1.;
}



void H_RL_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
