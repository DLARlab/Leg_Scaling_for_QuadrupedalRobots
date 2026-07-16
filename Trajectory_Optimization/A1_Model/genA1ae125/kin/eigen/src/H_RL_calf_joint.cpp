/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:04:39 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RL_calf_joint.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE static inline        /* use standard inline */
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
static void output1(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  double t290;
  double t1044;
  double t1326;
  double t1174;
  double t1390;
  double t594;
  double t433;
  double t497;
  double t670;
  double t1231;
  double t1432;
  double t1863;
  double t2114;
  double t2160;
  double t2365;
  double t2368;
  double t2369;
  double t2479;
  double t2527;
  double t267;
  double t2628;
  double t3442;
  double t3652;
  double t3958;
  double t3979;
  double t4014;
  double t4039;
  double t4151;
  double t4390;
  double t4510;
  double t5035;
  double t5070;
  double t5119;
  double t536;
  double t2570;
  double t2595;
  double t2636;
  double t2893;
  double t3113;
  double t3291;
  double t4522;
  double t4565;
  double t4724;
  double t4739;
  double t4744;
  double t5031;
  double t5160;
  double t5320;
  double t5397;
  double t5531;
  double t5627;
  double t5767;
  double t5859;
  double t5909;
  double t6518;
  double t6553;
  double t2617;
  double t3225;
  double t3265;
  double t6117;
  double t6118;
  double t6124;
  double t6314;
  double t6319;
  double t6321;
  double t6374;
  double t6390;
  double t6412;
  double t6416;
  double t6419;
  double t6421;
  double t6437;
  double t5966;
  double t5991;
  double t6018;
  double t6460;
  double t6466;
  double t6559;
  double t6563;
  double t6575;
  double t6597;
  double t6599;
  double t6612;
  double t4593;
  double t4982;
  double t4999;
  double t6148;
  double t6165;
  double t6277;
  double t6054;
  double t6055;
  double t6059;
  double t5375;
  double t5640;
  double t5683;
  double t6292;
  double t6297;
  double t6308;
  t290 = Cos(var1[3]);
  t1044 = Cos(var1[5]);
  t1326 = Sin(var1[3]);
  t1174 = Sin(var1[4]);
  t1390 = Sin(var1[5]);
  t594 = Cos(var1[16]);
  t433 = Cos(var1[4]);
  t497 = Sin(var1[16]);
  t670 = Cos(var1[15]);
  t1231 = t290*t1044*t1174;
  t1432 = t1326*t1390;
  t1863 = t1231 + t1432;
  t2114 = t670*t1863;
  t2160 = Sin(var1[15]);
  t2365 = -1.*t1044*t1326;
  t2368 = t290*t1174*t1390;
  t2369 = t2365 + t2368;
  t2479 = -1.*t2160*t2369;
  t2527 = t2114 + t2479;
  t267 = Sin(var1[17]);
  t2628 = Cos(var1[17]);
  t3442 = t1044*t1326*t1174;
  t3652 = -1.*t290*t1390;
  t3958 = t3442 + t3652;
  t3979 = t670*t3958;
  t4014 = t290*t1044;
  t4039 = t1326*t1174*t1390;
  t4151 = t4014 + t4039;
  t4390 = -1.*t2160*t4151;
  t4510 = t3979 + t4390;
  t5035 = t670*t433*t1044;
  t5070 = -1.*t433*t2160*t1390;
  t5119 = t5035 + t5070;
  t536 = t290*t433*t497;
  t2570 = t594*t2527;
  t2595 = t536 + t2570;
  t2636 = t594*t290*t433;
  t2893 = -1.*t497*t2527;
  t3113 = t2636 + t2893;
  t3291 = t433*t497*t1326;
  t4522 = t594*t4510;
  t4565 = t3291 + t4522;
  t4724 = t594*t433*t1326;
  t4739 = -1.*t497*t4510;
  t4744 = t4724 + t4739;
  t5031 = -1.*t497*t1174;
  t5160 = t594*t5119;
  t5320 = t5031 + t5160;
  t5397 = -1.*t594*t1174;
  t5531 = -1.*t497*t5119;
  t5627 = t5397 + t5531;
  t5767 = t2160*t1863;
  t5859 = t670*t2369;
  t5909 = t5767 + t5859;
  t6518 = -1.*t2628;
  t6553 = 1. + t6518;
  t2617 = -1.*t267*t2595;
  t3225 = t2628*t3113;
  t3265 = t2617 + t3225;
  t6117 = t2628*t2595;
  t6118 = t267*t3113;
  t6124 = t6117 + t6118;
  t6314 = -1.*t594;
  t6319 = 1. + t6314;
  t6321 = -0.183*t6319;
  t6374 = 0. + t6321;
  t6390 = -0.047*t2160;
  t6412 = 0. + t6390;
  t6416 = -1.*t670;
  t6419 = 1. + t6416;
  t6421 = 0.047*t6419;
  t6437 = 0. + t6421;
  t5966 = t2160*t3958;
  t5991 = t670*t4151;
  t6018 = t5966 + t5991;
  t6460 = -0.183*t497;
  t6466 = 0. + t6460;
  t6559 = -0.25*t6553;
  t6563 = -0.183*t267;
  t6575 = 0. + t6559 + t6563;
  t6597 = -0.183*t6553;
  t6599 = 0.25*t267;
  t6612 = 0. + t6597 + t6599;
  t4593 = -1.*t267*t4565;
  t4982 = t2628*t4744;
  t4999 = t4593 + t4982;
  t6148 = t2628*t4565;
  t6165 = t267*t4744;
  t6277 = t6148 + t6165;
  t6054 = t433*t1044*t2160;
  t6055 = t670*t433*t1390;
  t6059 = t6054 + t6055;
  t5375 = -1.*t267*t5320;
  t5640 = t2628*t5627;
  t5683 = t5375 + t5640;
  t6292 = t2628*t5320;
  t6297 = t267*t5627;
  t6308 = t6292 + t6297;

  p_output1(0)=t3265;
  p_output1(1)=t4999;
  p_output1(2)=t5683;
  p_output1(3)=0.;
  p_output1(4)=t5909;
  p_output1(5)=t6018;
  p_output1(6)=t6059;
  p_output1(7)=0.;
  p_output1(8)=t6124;
  p_output1(9)=t6277;
  p_output1(10)=t6308;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.183*t3265 + 0.13205*t5909 - 0.25*t6124 + t290*t433*t6374 + t1863*t6412 + t2369*t6437 + t2527*t6466 + t2595*t6575 + t3113*t6612 + var1(0);
  p_output1(13)=0. - 0.183*t4999 + 0.13205*t6018 - 0.25*t6277 + t1326*t433*t6374 + t3958*t6412 + t4151*t6437 + t4510*t6466 + t4565*t6575 + t4744*t6612 + var1(1);
  p_output1(14)=0. - 0.183*t5683 + 0.13205*t6059 - 0.25*t6308 - 1.*t1174*t6374 + t1044*t433*t6412 + t1390*t433*t6437 + t5119*t6466 + t5320*t6575 + t5627*t6612 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_RL_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void H_RL_calf_joint(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



