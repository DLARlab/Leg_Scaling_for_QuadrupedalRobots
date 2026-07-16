/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:19:12 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RRfoot.h"

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
  double t1201;
  double t2840;
  double t3440;
  double t3015;
  double t3849;
  double t2342;
  double t1283;
  double t1285;
  double t2346;
  double t3356;
  double t3920;
  double t3931;
  double t4121;
  double t4160;
  double t4203;
  double t4299;
  double t4308;
  double t4312;
  double t4358;
  double t814;
  double t4515;
  double t4661;
  double t4705;
  double t4724;
  double t4736;
  double t4773;
  double t4791;
  double t4799;
  double t4800;
  double t4802;
  double t5019;
  double t5047;
  double t5096;
  double t1406;
  double t4398;
  double t4498;
  double t4551;
  double t4554;
  double t4615;
  double t4639;
  double t4804;
  double t4820;
  double t4849;
  double t4925;
  double t4934;
  double t4981;
  double t5126;
  double t5127;
  double t5176;
  double t5192;
  double t5235;
  t1201 = Cos(var1[3]);
  t2840 = Cos(var1[5]);
  t3440 = Sin(var1[3]);
  t3015 = Sin(var1[4]);
  t3849 = Sin(var1[5]);
  t2342 = Cos(var1[13]);
  t1283 = Cos(var1[4]);
  t1285 = Sin(var1[13]);
  t2346 = Cos(var1[12]);
  t3356 = t1201*t2840*t3015;
  t3920 = t3440*t3849;
  t3931 = t3356 + t3920;
  t4121 = t2346*t3931;
  t4160 = Sin(var1[12]);
  t4203 = -1.*t2840*t3440;
  t4299 = t1201*t3015*t3849;
  t4308 = t4203 + t4299;
  t4312 = -1.*t4160*t4308;
  t4358 = t4121 + t4312;
  t814 = Sin(var1[14]);
  t4515 = Cos(var1[14]);
  t4661 = t2840*t3440*t3015;
  t4705 = -1.*t1201*t3849;
  t4724 = t4661 + t4705;
  t4736 = t2346*t4724;
  t4773 = t1201*t2840;
  t4791 = t3440*t3015*t3849;
  t4799 = t4773 + t4791;
  t4800 = -1.*t4160*t4799;
  t4802 = t4736 + t4800;
  t5019 = t2346*t1283*t2840;
  t5047 = -1.*t1283*t4160*t3849;
  t5096 = t5019 + t5047;
  t1406 = t1201*t1283*t1285;
  t4398 = t2342*t4358;
  t4498 = t1406 + t4398;
  t4551 = t2342*t1201*t1283;
  t4554 = -1.*t1285*t4358;
  t4615 = t4551 + t4554;
  t4639 = t1283*t1285*t3440;
  t4804 = t2342*t4802;
  t4820 = t4639 + t4804;
  t4849 = t2342*t1283*t3440;
  t4925 = -1.*t1285*t4802;
  t4934 = t4849 + t4925;
  t4981 = -1.*t1285*t3015;
  t5126 = t2342*t5096;
  t5127 = t4981 + t5126;
  t5176 = -1.*t2342*t3015;
  t5192 = -1.*t1285*t5096;
  t5235 = t5176 + t5192;

  p_output1(0)=t4515*t4615 - 1.*t4498*t814;
  p_output1(1)=t4515*t4934 - 1.*t4820*t814;
  p_output1(2)=t4515*t5235 - 1.*t5127*t814;
  p_output1(3)=t3931*t4160 + t2346*t4308;
  p_output1(4)=t4160*t4724 + t2346*t4799;
  p_output1(5)=t1283*t2346*t3849 + t1283*t2840*t4160;
  p_output1(6)=t4498*t4515 + t4615*t814;
  p_output1(7)=t4515*t4820 + t4934*t814;
  p_output1(8)=t4515*t5127 + t5235*t814;
}


       
Eigen::Matrix<double,3,3> R_RRfoot(const Eigen::Matrix<double,18,1> &var1)
//void R_RRfoot(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



