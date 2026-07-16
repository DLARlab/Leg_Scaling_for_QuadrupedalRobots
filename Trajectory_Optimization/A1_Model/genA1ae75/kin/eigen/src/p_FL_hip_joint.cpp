/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:51:35 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FL_hip_joint.h"

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
  double t365;
  double t2551;
  double t3245;
  double t2986;
  double t3532;
  double t1576;
  double t3178;
  double t3577;
  double t3598;
  double t3650;
  double t3761;
  double t3847;
  double t3864;
  double t659;
  double t1807;
  double t2144;
  double t3679;
  double t3713;
  double t3716;
  double t3746;
  double t4109;
  double t4132;
  double t4256;
  double t4349;
  double t4360;
  double t4405;
  t365 = Cos(var1[3]);
  t2551 = Cos(var1[5]);
  t3245 = Sin(var1[3]);
  t2986 = Sin(var1[4]);
  t3532 = Sin(var1[5]);
  t1576 = Sin(var1[9]);
  t3178 = t365*t2551*t2986;
  t3577 = t3245*t3532;
  t3598 = t3178 + t3577;
  t3650 = Cos(var1[9]);
  t3761 = -1.*t2551*t3245;
  t3847 = t365*t2986*t3532;
  t3864 = t3761 + t3847;
  t659 = Cos(var1[4]);
  t1807 = -0.047*t1576;
  t2144 = 0. + t1807;
  t3679 = -1.*t3650;
  t3713 = 1. + t3679;
  t3716 = 0.047*t3713;
  t3746 = 0. + t3716;
  t4109 = t2551*t3245*t2986;
  t4132 = -1.*t365*t3532;
  t4256 = t4109 + t4132;
  t4349 = t365*t2551;
  t4360 = t3245*t2986*t3532;
  t4405 = t4349 + t4360;

  p_output1(0)=0. + t2144*t3598 + t3746*t3864 + 0.047*(t1576*t3598 + t3650*t3864) + 0.183*t365*t659 + var1(0);
  p_output1(1)=0. + t2144*t4256 + t3746*t4405 + 0.047*(t1576*t4256 + t3650*t4405) + 0.183*t3245*t659 + var1(1);
  p_output1(2)=0. - 0.183*t2986 + t2144*t2551*t659 + t3532*t3746*t659 + 0.047*(t1576*t2551*t659 + t3532*t3650*t659) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_FL_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_FL_hip_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



