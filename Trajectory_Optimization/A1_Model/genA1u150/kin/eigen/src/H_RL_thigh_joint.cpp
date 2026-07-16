/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:26:53 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RL_thigh_joint.h"

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
  double t500;
  double t1876;
  double t1987;
  double t1905;
  double t2027;
  double t145;
  double t588;
  double t1429;
  double t1859;
  double t2881;
  double t1928;
  double t2349;
  double t2636;
  double t2892;
  double t3028;
  double t3280;
  double t3937;
  double t3983;
  double t4512;
  double t4657;
  double t5006;
  double t5067;
  double t2677;
  double t3292;
  double t3321;
  double t4626;
  double t5115;
  double t5187;
  double t5550;
  double t5682;
  double t6027;
  double t6083;
  double t6296;
  double t6329;
  double t800;
  double t3608;
  double t3720;
  double t6943;
  double t6969;
  double t6971;
  double t6972;
  double t7044;
  double t7055;
  double t7151;
  double t7156;
  double t7168;
  double t7180;
  double t6342;
  double t6403;
  double t6474;
  double t7226;
  double t7294;
  double t3800;
  double t5252;
  double t5499;
  double t6567;
  double t6587;
  double t6634;
  double t5516;
  double t6063;
  double t6069;
  t500 = Cos(var1[3]);
  t1876 = Cos(var1[5]);
  t1987 = Sin(var1[3]);
  t1905 = Sin(var1[4]);
  t2027 = Sin(var1[5]);
  t145 = Cos(var1[16]);
  t588 = Cos(var1[4]);
  t1429 = Sin(var1[16]);
  t1859 = Cos(var1[15]);
  t2881 = Sin(var1[15]);
  t1928 = t500*t1876*t1905;
  t2349 = t1987*t2027;
  t2636 = t1928 + t2349;
  t2892 = -1.*t1876*t1987;
  t3028 = t500*t1905*t2027;
  t3280 = t2892 + t3028;
  t3937 = t1876*t1987*t1905;
  t3983 = -1.*t500*t2027;
  t4512 = t3937 + t3983;
  t4657 = t500*t1876;
  t5006 = t1987*t1905*t2027;
  t5067 = t4657 + t5006;
  t2677 = t1859*t2636;
  t3292 = -1.*t2881*t3280;
  t3321 = t2677 + t3292;
  t4626 = t1859*t4512;
  t5115 = -1.*t2881*t5067;
  t5187 = t4626 + t5115;
  t5550 = t1859*t588*t1876;
  t5682 = -1.*t588*t2881*t2027;
  t6027 = t5550 + t5682;
  t6083 = t2881*t2636;
  t6296 = t1859*t3280;
  t6329 = t6083 + t6296;
  t800 = t145*t500*t588;
  t3608 = -1.*t1429*t3321;
  t3720 = t800 + t3608;
  t6943 = -1.*t145;
  t6969 = 1. + t6943;
  t6971 = -0.183*t6969;
  t6972 = 0. + t6971;
  t7044 = -0.047*t2881;
  t7055 = 0. + t7044;
  t7151 = -1.*t1859;
  t7156 = 1. + t7151;
  t7168 = 0.047*t7156;
  t7180 = 0. + t7168;
  t6342 = t2881*t4512;
  t6403 = t1859*t5067;
  t6474 = t6342 + t6403;
  t7226 = -0.183*t1429;
  t7294 = 0. + t7226;
  t3800 = t145*t588*t1987;
  t5252 = -1.*t1429*t5187;
  t5499 = t3800 + t5252;
  t6567 = t588*t1876*t2881;
  t6587 = t1859*t588*t2027;
  t6634 = t6567 + t6587;
  t5516 = -1.*t145*t1905;
  t6063 = -1.*t1429*t6027;
  t6069 = t5516 + t6063;

  p_output1(0)=t3720;
  p_output1(1)=t5499;
  p_output1(2)=t6069;
  p_output1(3)=0.;
  p_output1(4)=t6329;
  p_output1(5)=t6474;
  p_output1(6)=t6634;
  p_output1(7)=0.;
  p_output1(8)=t145*t3321 + t1429*t500*t588;
  p_output1(9)=t145*t5187 + t1429*t1987*t588;
  p_output1(10)=-1.*t1429*t1905 + t145*t6027;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.183*t3720 + 0.17458*t6329 + t500*t588*t6972 + t2636*t7055 + t3280*t7180 + t3321*t7294 + var1(0);
  p_output1(13)=0. - 0.183*t5499 + 0.17458*t6474 + t1987*t588*t6972 + t4512*t7055 + t5067*t7180 + t5187*t7294 + var1(1);
  p_output1(14)=0. - 0.183*t6069 + 0.17458*t6634 - 1.*t1905*t6972 + t1876*t588*t7055 + t2027*t588*t7180 + t6027*t7294 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_RL_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void H_RL_thigh_joint(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



