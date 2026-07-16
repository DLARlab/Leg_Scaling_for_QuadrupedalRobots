/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:26:56 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RL_calf_joint.h"

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
  double t821;
  double t3625;
  double t4449;
  double t3791;
  double t4471;
  double t3507;
  double t1498;
  double t2780;
  double t3554;
  double t4263;
  double t4734;
  double t4746;
  double t4856;
  double t4915;
  double t5093;
  double t5137;
  double t5149;
  double t5158;
  double t5174;
  double t660;
  double t5269;
  double t5543;
  double t5580;
  double t5604;
  double t5612;
  double t5631;
  double t5673;
  double t5697;
  double t5788;
  double t5800;
  double t6151;
  double t6166;
  double t6173;
  double t3049;
  double t5226;
  double t5246;
  double t5333;
  double t5374;
  double t5383;
  double t5496;
  double t5842;
  double t5957;
  double t6082;
  double t6092;
  double t6115;
  double t6137;
  double t6236;
  double t6265;
  double t6317;
  double t6373;
  double t6376;
  t821 = Cos(var1[3]);
  t3625 = Cos(var1[5]);
  t4449 = Sin(var1[3]);
  t3791 = Sin(var1[4]);
  t4471 = Sin(var1[5]);
  t3507 = Cos(var1[16]);
  t1498 = Cos(var1[4]);
  t2780 = Sin(var1[16]);
  t3554 = Cos(var1[15]);
  t4263 = t821*t3625*t3791;
  t4734 = t4449*t4471;
  t4746 = t4263 + t4734;
  t4856 = t3554*t4746;
  t4915 = Sin(var1[15]);
  t5093 = -1.*t3625*t4449;
  t5137 = t821*t3791*t4471;
  t5149 = t5093 + t5137;
  t5158 = -1.*t4915*t5149;
  t5174 = t4856 + t5158;
  t660 = Sin(var1[17]);
  t5269 = Cos(var1[17]);
  t5543 = t3625*t4449*t3791;
  t5580 = -1.*t821*t4471;
  t5604 = t5543 + t5580;
  t5612 = t3554*t5604;
  t5631 = t821*t3625;
  t5673 = t4449*t3791*t4471;
  t5697 = t5631 + t5673;
  t5788 = -1.*t4915*t5697;
  t5800 = t5612 + t5788;
  t6151 = t3554*t1498*t3625;
  t6166 = -1.*t1498*t4915*t4471;
  t6173 = t6151 + t6166;
  t3049 = t821*t1498*t2780;
  t5226 = t3507*t5174;
  t5246 = t3049 + t5226;
  t5333 = t3507*t821*t1498;
  t5374 = -1.*t2780*t5174;
  t5383 = t5333 + t5374;
  t5496 = t1498*t2780*t4449;
  t5842 = t3507*t5800;
  t5957 = t5496 + t5842;
  t6082 = t3507*t1498*t4449;
  t6092 = -1.*t2780*t5800;
  t6115 = t6082 + t6092;
  t6137 = -1.*t2780*t3791;
  t6236 = t3507*t6173;
  t6265 = t6137 + t6236;
  t6317 = -1.*t3507*t3791;
  t6373 = -1.*t2780*t6173;
  t6376 = t6317 + t6373;

  p_output1(0)=t5269*t5383 - 1.*t5246*t660;
  p_output1(1)=t5269*t6115 - 1.*t5957*t660;
  p_output1(2)=t5269*t6376 - 1.*t6265*t660;
  p_output1(3)=t4746*t4915 + t3554*t5149;
  p_output1(4)=t4915*t5604 + t3554*t5697;
  p_output1(5)=t1498*t3554*t4471 + t1498*t3625*t4915;
  p_output1(6)=t5246*t5269 + t5383*t660;
  p_output1(7)=t5269*t5957 + t6115*t660;
  p_output1(8)=t5269*t6265 + t6376*t660;
}


       
Eigen::Matrix<double,3,3> R_RL_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_RL_calf_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



