/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:13:44 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_FL_calf_joint.h"

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
  double t1128;
  double t2488;
  double t2500;
  double t2492;
  double t2512;
  double t2485;
  double t1644;
  double t2127;
  double t2486;
  double t2496;
  double t2694;
  double t3047;
  double t3076;
  double t3181;
  double t3282;
  double t3366;
  double t3377;
  double t3383;
  double t3393;
  double t1088;
  double t3976;
  double t4251;
  double t4252;
  double t4256;
  double t4260;
  double t4261;
  double t4294;
  double t4314;
  double t4323;
  double t4342;
  double t4627;
  double t4628;
  double t4629;
  double t2352;
  double t3710;
  double t3925;
  double t4020;
  double t4049;
  double t4070;
  double t4230;
  double t4402;
  double t4438;
  double t4609;
  double t4610;
  double t4615;
  double t4626;
  double t4631;
  double t4632;
  double t4640;
  double t4642;
  double t4644;
  t1128 = Cos(var1[3]);
  t2488 = Cos(var1[5]);
  t2500 = Sin(var1[3]);
  t2492 = Sin(var1[4]);
  t2512 = Sin(var1[5]);
  t2485 = Cos(var1[10]);
  t1644 = Cos(var1[4]);
  t2127 = Sin(var1[10]);
  t2486 = Cos(var1[9]);
  t2496 = t1128*t2488*t2492;
  t2694 = t2500*t2512;
  t3047 = t2496 + t2694;
  t3076 = t2486*t3047;
  t3181 = Sin(var1[9]);
  t3282 = -1.*t2488*t2500;
  t3366 = t1128*t2492*t2512;
  t3377 = t3282 + t3366;
  t3383 = -1.*t3181*t3377;
  t3393 = t3076 + t3383;
  t1088 = Sin(var1[11]);
  t3976 = Cos(var1[11]);
  t4251 = t2488*t2500*t2492;
  t4252 = -1.*t1128*t2512;
  t4256 = t4251 + t4252;
  t4260 = t2486*t4256;
  t4261 = t1128*t2488;
  t4294 = t2500*t2492*t2512;
  t4314 = t4261 + t4294;
  t4323 = -1.*t3181*t4314;
  t4342 = t4260 + t4323;
  t4627 = t2486*t1644*t2488;
  t4628 = -1.*t1644*t3181*t2512;
  t4629 = t4627 + t4628;
  t2352 = t1128*t1644*t2127;
  t3710 = t2485*t3393;
  t3925 = t2352 + t3710;
  t4020 = t2485*t1128*t1644;
  t4049 = -1.*t2127*t3393;
  t4070 = t4020 + t4049;
  t4230 = t1644*t2127*t2500;
  t4402 = t2485*t4342;
  t4438 = t4230 + t4402;
  t4609 = t2485*t1644*t2500;
  t4610 = -1.*t2127*t4342;
  t4615 = t4609 + t4610;
  t4626 = -1.*t2127*t2492;
  t4631 = t2485*t4629;
  t4632 = t4626 + t4631;
  t4640 = -1.*t2485*t2492;
  t4642 = -1.*t2127*t4629;
  t4644 = t4640 + t4642;

  p_output1(0)=-1.*t1088*t3925 + t3976*t4070;
  p_output1(1)=-1.*t1088*t4438 + t3976*t4615;
  p_output1(2)=-1.*t1088*t4632 + t3976*t4644;
  p_output1(3)=t3047*t3181 + t2486*t3377;
  p_output1(4)=t3181*t4256 + t2486*t4314;
  p_output1(5)=t1644*t2486*t2512 + t1644*t2488*t3181;
  p_output1(6)=t3925*t3976 + t1088*t4070;
  p_output1(7)=t3976*t4438 + t1088*t4615;
  p_output1(8)=t3976*t4632 + t1088*t4644;
}


       
Eigen::Matrix<double,3,3> R_FL_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_FL_calf_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



