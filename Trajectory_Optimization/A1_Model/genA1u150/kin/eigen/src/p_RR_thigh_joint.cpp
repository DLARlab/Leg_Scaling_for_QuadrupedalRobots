/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:26:44 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RR_thigh_joint.h"

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
  double t2367;
  double t3655;
  double t3740;
  double t3693;
  double t3743;
  double t3478;
  double t3713;
  double t3774;
  double t3866;
  double t4154;
  double t4280;
  double t4281;
  double t4288;
  double t85;
  double t2566;
  double t4858;
  double t5036;
  double t5058;
  double t5099;
  double t298;
  double t984;
  double t1293;
  double t1300;
  double t3486;
  double t3545;
  double t4165;
  double t4189;
  double t4192;
  double t4265;
  double t6708;
  double t6815;
  double t6990;
  double t7055;
  double t7056;
  double t7160;
  double t4929;
  double t4969;
  double t7365;
  double t7386;
  double t7395;
  double t7711;
  double t7714;
  double t7725;
  t2367 = Cos(var1[3]);
  t3655 = Cos(var1[5]);
  t3740 = Sin(var1[3]);
  t3693 = Sin(var1[4]);
  t3743 = Sin(var1[5]);
  t3478 = Sin(var1[12]);
  t3713 = t2367*t3655*t3693;
  t3774 = t3740*t3743;
  t3866 = t3713 + t3774;
  t4154 = Cos(var1[12]);
  t4280 = -1.*t3655*t3740;
  t4281 = t2367*t3693*t3743;
  t4288 = t4280 + t4281;
  t85 = Cos(var1[13]);
  t2566 = Cos(var1[4]);
  t4858 = Sin(var1[13]);
  t5036 = t4154*t3866;
  t5058 = -1.*t3478*t4288;
  t5099 = t5036 + t5058;
  t298 = -1.*t85;
  t984 = 1. + t298;
  t1293 = -0.183*t984;
  t1300 = 0. + t1293;
  t3486 = 0.047*t3478;
  t3545 = 0. + t3486;
  t4165 = -1.*t4154;
  t4189 = 1. + t4165;
  t4192 = -0.047*t4189;
  t4265 = 0. + t4192;
  t6708 = t3655*t3740*t3693;
  t6815 = -1.*t2367*t3743;
  t6990 = t6708 + t6815;
  t7055 = t2367*t3655;
  t7056 = t3740*t3693*t3743;
  t7160 = t7055 + t7056;
  t4929 = -0.183*t4858;
  t4969 = 0. + t4929;
  t7365 = t4154*t6990;
  t7386 = -1.*t3478*t7160;
  t7395 = t7365 + t7386;
  t7711 = t4154*t2566*t3655;
  t7714 = -1.*t2566*t3478*t3743;
  t7725 = t7711 + t7714;

  p_output1(0)=0. + t1300*t2367*t2566 + t3545*t3866 + t4265*t4288 - 0.17458*(t3478*t3866 + t4154*t4288) + t4969*t5099 - 0.183*(-1.*t4858*t5099 + t2367*t2566*t85) + var1(0);
  p_output1(1)=0. + t1300*t2566*t3740 + t3545*t6990 + t4265*t7160 - 0.17458*(t3478*t6990 + t4154*t7160) + t4969*t7395 - 0.183*(-1.*t4858*t7395 + t2566*t3740*t85) + var1(1);
  p_output1(2)=0. + t2566*t3545*t3655 - 1.*t1300*t3693 - 0.17458*(t2566*t3478*t3655 + t2566*t3743*t4154) + t2566*t3743*t4265 + t4969*t7725 - 0.183*(-1.*t4858*t7725 - 1.*t3693*t85) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_RR_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_RR_thigh_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



