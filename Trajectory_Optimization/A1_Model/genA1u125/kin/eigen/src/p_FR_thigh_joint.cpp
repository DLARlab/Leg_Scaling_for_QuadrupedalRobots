/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:21:13 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FR_thigh_joint.h"

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
static void output1(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  double t207;
  double t2613;
  double t2682;
  double t2643;
  double t2712;
  double t1568;
  double t2655;
  double t2847;
  double t2880;
  double t2925;
  double t3122;
  double t3129;
  double t3139;
  double t625;
  double t1129;
  double t3759;
  double t3795;
  double t3805;
  double t3834;
  double t1239;
  double t1245;
  double t1379;
  double t1492;
  double t1714;
  double t2392;
  double t2444;
  double t2518;
  double t3149;
  double t3198;
  double t4240;
  double t4304;
  double t4394;
  double t4455;
  double t4521;
  double t4582;
  double t3847;
  double t3851;
  double t4821;
  double t5250;
  double t5687;
  double t7314;
  double t7322;
  double t7359;
  t207 = Cos(var1[3]);
  t2613 = Cos(var1[5]);
  t2682 = Sin(var1[4]);
  t2643 = Sin(var1[3]);
  t2712 = Sin(var1[5]);
  t1568 = Cos(var1[6]);
  t2655 = -1.*t2613*t2643;
  t2847 = t207*t2682*t2712;
  t2880 = t2655 + t2847;
  t2925 = t207*t2613*t2682;
  t3122 = t2643*t2712;
  t3129 = t2925 + t3122;
  t3139 = Sin(var1[6]);
  t625 = Cos(var1[4]);
  t1129 = Cos(var1[7]);
  t3759 = t1568*t3129;
  t3795 = -1.*t2880*t3139;
  t3805 = t3759 + t3795;
  t3834 = Sin(var1[7]);
  t1239 = -1.*t1129;
  t1245 = 1. + t1239;
  t1379 = 0.183*t1245;
  t1492 = 0. + t1379;
  t1714 = -1.*t1568;
  t2392 = 1. + t1714;
  t2444 = -0.047*t2392;
  t2518 = 0. + t2444;
  t3149 = 0.047*t3139;
  t3198 = 0. + t3149;
  t4240 = t207*t2613;
  t4304 = t2643*t2682*t2712;
  t4394 = t4240 + t4304;
  t4455 = t2613*t2643*t2682;
  t4521 = -1.*t207*t2712;
  t4582 = t4455 + t4521;
  t3847 = 0.183*t3834;
  t3851 = 0. + t3847;
  t4821 = t1568*t4582;
  t5250 = -1.*t4394*t3139;
  t5687 = t4821 + t5250;
  t7314 = t625*t2613*t1568;
  t7322 = -1.*t625*t2712*t3139;
  t7359 = t7314 + t7322;

  p_output1(0)=0. + t2518*t2880 - 0.15331*(t1568*t2880 + t3129*t3139) + t3129*t3198 + t3805*t3851 + t1492*t207*t625 + 0.183*(-1.*t3805*t3834 + t1129*t207*t625) + var1(0);
  p_output1(1)=0. + t2518*t4394 + t3198*t4582 - 0.15331*(t1568*t4394 + t3139*t4582) + t3851*t5687 + t1492*t2643*t625 + 0.183*(-1.*t3834*t5687 + t1129*t2643*t625) + var1(1);
  p_output1(2)=0. - 1.*t1492*t2682 + t2518*t2712*t625 + t2613*t3198*t625 - 0.15331*(t1568*t2712*t625 + t2613*t3139*t625) + t3851*t7359 + 0.183*(-1.*t1129*t2682 - 1.*t3834*t7359) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_FR_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_FR_thigh_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



