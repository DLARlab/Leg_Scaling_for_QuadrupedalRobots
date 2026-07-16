/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:03:36 GMT-05:00
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
  double t465;
  double t2401;
  double t2879;
  double t2402;
  double t3243;
  double t1751;
  double t1030;
  double t1341;
  double t1960;
  double t2835;
  double t3323;
  double t3436;
  double t3469;
  double t3486;
  double t3488;
  double t3500;
  double t3529;
  double t3541;
  double t3568;
  double t420;
  double t4184;
  double t5048;
  double t5309;
  double t5313;
  double t5314;
  double t5323;
  double t5479;
  double t5483;
  double t5484;
  double t5486;
  double t6207;
  double t6228;
  double t6260;
  double t1436;
  double t3624;
  double t3910;
  double t4228;
  double t4278;
  double t4356;
  double t4607;
  double t5497;
  double t5525;
  double t5754;
  double t5928;
  double t5957;
  double t6187;
  double t6262;
  double t6282;
  double t6334;
  double t6343;
  double t6356;
  double t6502;
  double t6528;
  double t6576;
  double t7626;
  double t7639;
  double t4183;
  double t4367;
  double t4439;
  double t6773;
  double t6814;
  double t6863;
  double t7191;
  double t7209;
  double t7248;
  double t7256;
  double t7492;
  double t7522;
  double t7572;
  double t7579;
  double t7580;
  double t7582;
  double t6589;
  double t6605;
  double t6643;
  double t7621;
  double t7622;
  double t7644;
  double t7699;
  double t7729;
  double t7760;
  double t7761;
  double t7773;
  double t5575;
  double t6065;
  double t6154;
  double t7011;
  double t7013;
  double t7142;
  double t6650;
  double t6742;
  double t6750;
  double t6328;
  double t6394;
  double t6479;
  double t7143;
  double t7172;
  double t7180;
  t465 = Cos(var1[3]);
  t2401 = Cos(var1[5]);
  t2879 = Sin(var1[3]);
  t2402 = Sin(var1[4]);
  t3243 = Sin(var1[5]);
  t1751 = Cos(var1[16]);
  t1030 = Cos(var1[4]);
  t1341 = Sin(var1[16]);
  t1960 = Cos(var1[15]);
  t2835 = t465*t2401*t2402;
  t3323 = t2879*t3243;
  t3436 = t2835 + t3323;
  t3469 = t1960*t3436;
  t3486 = Sin(var1[15]);
  t3488 = -1.*t2401*t2879;
  t3500 = t465*t2402*t3243;
  t3529 = t3488 + t3500;
  t3541 = -1.*t3486*t3529;
  t3568 = t3469 + t3541;
  t420 = Sin(var1[17]);
  t4184 = Cos(var1[17]);
  t5048 = t2401*t2879*t2402;
  t5309 = -1.*t465*t3243;
  t5313 = t5048 + t5309;
  t5314 = t1960*t5313;
  t5323 = t465*t2401;
  t5479 = t2879*t2402*t3243;
  t5483 = t5323 + t5479;
  t5484 = -1.*t3486*t5483;
  t5486 = t5314 + t5484;
  t6207 = t1960*t1030*t2401;
  t6228 = -1.*t1030*t3486*t3243;
  t6260 = t6207 + t6228;
  t1436 = t465*t1030*t1341;
  t3624 = t1751*t3568;
  t3910 = t1436 + t3624;
  t4228 = t1751*t465*t1030;
  t4278 = -1.*t1341*t3568;
  t4356 = t4228 + t4278;
  t4607 = t1030*t1341*t2879;
  t5497 = t1751*t5486;
  t5525 = t4607 + t5497;
  t5754 = t1751*t1030*t2879;
  t5928 = -1.*t1341*t5486;
  t5957 = t5754 + t5928;
  t6187 = -1.*t1341*t2402;
  t6262 = t1751*t6260;
  t6282 = t6187 + t6262;
  t6334 = -1.*t1751*t2402;
  t6343 = -1.*t1341*t6260;
  t6356 = t6334 + t6343;
  t6502 = t3486*t3436;
  t6528 = t1960*t3529;
  t6576 = t6502 + t6528;
  t7626 = -1.*t4184;
  t7639 = 1. + t7626;
  t4183 = -1.*t420*t3910;
  t4367 = t4184*t4356;
  t4439 = t4183 + t4367;
  t6773 = t4184*t3910;
  t6814 = t420*t4356;
  t6863 = t6773 + t6814;
  t7191 = -1.*t1751;
  t7209 = 1. + t7191;
  t7248 = -0.183*t7209;
  t7256 = 0. + t7248;
  t7492 = -0.047*t3486;
  t7522 = 0. + t7492;
  t7572 = -1.*t1960;
  t7579 = 1. + t7572;
  t7580 = 0.047*t7579;
  t7582 = 0. + t7580;
  t6589 = t3486*t5313;
  t6605 = t1960*t5483;
  t6643 = t6589 + t6605;
  t7621 = -0.183*t1341;
  t7622 = 0. + t7621;
  t7644 = -0.25*t7639;
  t7699 = -0.183*t420;
  t7729 = 0. + t7644 + t7699;
  t7760 = -0.183*t7639;
  t7761 = 0.25*t420;
  t7773 = 0. + t7760 + t7761;
  t5575 = -1.*t420*t5525;
  t6065 = t4184*t5957;
  t6154 = t5575 + t6065;
  t7011 = t4184*t5525;
  t7013 = t420*t5957;
  t7142 = t7011 + t7013;
  t6650 = t1030*t2401*t3486;
  t6742 = t1960*t1030*t3243;
  t6750 = t6650 + t6742;
  t6328 = -1.*t420*t6282;
  t6394 = t4184*t6356;
  t6479 = t6328 + t6394;
  t7143 = t4184*t6282;
  t7172 = t420*t6356;
  t7180 = t7143 + t7172;
  p_output1[0]=t4439;
  p_output1[1]=t6154;
  p_output1[2]=t6479;
  p_output1[3]=0.;
  p_output1[4]=t6576;
  p_output1[5]=t6643;
  p_output1[6]=t6750;
  p_output1[7]=0.;
  p_output1[8]=t6863;
  p_output1[9]=t7142;
  p_output1[10]=t7180;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.183*t4439 + 0.13205*t6576 - 0.25*t6863 + t1030*t465*t7256 + t3436*t7522 + t3529*t7582 + t3568*t7622 + t3910*t7729 + t4356*t7773 + var1[0];
  p_output1[13]=0. - 0.183*t6154 + 0.13205*t6643 - 0.25*t7142 + t1030*t2879*t7256 + t5313*t7522 + t5483*t7582 + t5486*t7622 + t5525*t7729 + t5957*t7773 + var1[1];
  p_output1[14]=0. - 0.183*t6479 + 0.13205*t6750 - 0.25*t7180 - 1.*t2402*t7256 + t1030*t2401*t7522 + t1030*t3243*t7582 + t6260*t7622 + t6282*t7729 + t6356*t7773 + var1[2];
  p_output1[15]=1.;
}



void H_RL_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
