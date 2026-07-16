/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:18:45 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_FR_calf_joint.h"

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
static void output1(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  double t873;
  double t3512;
  double t4627;
  double t3559;
  double t4770;
  double t2986;
  double t3175;
  double t3573;
  double t4835;
  double t4967;
  double t5080;
  double t5092;
  double t5100;
  double t5211;
  double t5371;
  double t5412;
  double t5428;
  double t2789;
  double t5489;
  double t446;
  double t5604;
  double t5610;
  double t5615;
  double t5638;
  double t5678;
  double t5700;
  double t5718;
  double t5771;
  double t5802;
  double t5527;
  double t6300;
  double t6324;
  double t6336;
  double t5510;
  double t5516;
  double t5526;
  double t3167;
  double t5490;
  double t5493;
  double t5913;
  double t6028;
  double t6096;
  double t5551;
  double t5820;
  double t5899;
  double t6465;
  double t6475;
  double t6484;
  double t6218;
  double t6338;
  double t6409;
  t873 = Cos(var1[3]);
  t3512 = Cos(var1[5]);
  t4627 = Sin(var1[3]);
  t3559 = Sin(var1[4]);
  t4770 = Sin(var1[5]);
  t2986 = Cos(var1[7]);
  t3175 = Cos(var1[6]);
  t3573 = t873*t3512*t3559;
  t4835 = t4627*t4770;
  t4967 = t3573 + t4835;
  t5080 = t3175*t4967;
  t5092 = -1.*t3512*t4627;
  t5100 = t873*t3559*t4770;
  t5211 = t5092 + t5100;
  t5371 = Sin(var1[6]);
  t5412 = -1.*t5211*t5371;
  t5428 = t5080 + t5412;
  t2789 = Cos(var1[4]);
  t5489 = Sin(var1[7]);
  t446 = Cos(var1[8]);
  t5604 = t3512*t4627*t3559;
  t5610 = -1.*t873*t4770;
  t5615 = t5604 + t5610;
  t5638 = t3175*t5615;
  t5678 = t873*t3512;
  t5700 = t4627*t3559*t4770;
  t5718 = t5678 + t5700;
  t5771 = -1.*t5718*t5371;
  t5802 = t5638 + t5771;
  t5527 = Sin(var1[8]);
  t6300 = t2789*t3512*t3175;
  t6324 = -1.*t2789*t4770*t5371;
  t6336 = t6300 + t6324;
  t5510 = t2986*t5428;
  t5516 = t873*t2789*t5489;
  t5526 = t5510 + t5516;
  t3167 = t873*t2789*t2986;
  t5490 = -1.*t5428*t5489;
  t5493 = t3167 + t5490;
  t5913 = t2986*t5802;
  t6028 = t2789*t4627*t5489;
  t6096 = t5913 + t6028;
  t5551 = t2789*t2986*t4627;
  t5820 = -1.*t5802*t5489;
  t5899 = t5551 + t5820;
  t6465 = t2986*t6336;
  t6475 = -1.*t3559*t5489;
  t6484 = t6465 + t6475;
  t6218 = -1.*t2986*t3559;
  t6338 = -1.*t6336*t5489;
  t6409 = t6218 + t6338;

  p_output1(0)=t446*t5493 - 1.*t5526*t5527;
  p_output1(1)=t446*t5899 - 1.*t5527*t6096;
  p_output1(2)=t446*t6409 - 1.*t5527*t6484;
  p_output1(3)=t3175*t5211 + t4967*t5371;
  p_output1(4)=t5371*t5615 + t3175*t5718;
  p_output1(5)=t2789*t3175*t4770 + t2789*t3512*t5371;
  p_output1(6)=t446*t5526 + t5493*t5527;
  p_output1(7)=t5527*t5899 + t446*t6096;
  p_output1(8)=t5527*t6409 + t446*t6484;
}


       
Eigen::Matrix<double,3,3> R_FR_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_FR_calf_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



