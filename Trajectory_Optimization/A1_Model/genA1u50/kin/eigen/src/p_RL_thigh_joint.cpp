/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:13:53 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RL_thigh_joint.h"

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
  double t1168;
  double t3611;
  double t4023;
  double t3981;
  double t4028;
  double t1648;
  double t4004;
  double t4031;
  double t4035;
  double t4041;
  double t4065;
  double t4073;
  double t4077;
  double t173;
  double t1479;
  double t5609;
  double t5725;
  double t5728;
  double t5804;
  double t384;
  double t896;
  double t951;
  double t954;
  double t2184;
  double t2791;
  double t4044;
  double t4050;
  double t4055;
  double t4059;
  double t6107;
  double t6204;
  double t6305;
  double t6348;
  double t6375;
  double t6377;
  double t5638;
  double t5651;
  double t6410;
  double t6424;
  double t6427;
  double t6837;
  double t6838;
  double t6847;
  t1168 = Cos(var1[3]);
  t3611 = Cos(var1[5]);
  t4023 = Sin(var1[3]);
  t3981 = Sin(var1[4]);
  t4028 = Sin(var1[5]);
  t1648 = Sin(var1[15]);
  t4004 = t1168*t3611*t3981;
  t4031 = t4023*t4028;
  t4035 = t4004 + t4031;
  t4041 = Cos(var1[15]);
  t4065 = -1.*t3611*t4023;
  t4073 = t1168*t3981*t4028;
  t4077 = t4065 + t4073;
  t173 = Cos(var1[16]);
  t1479 = Cos(var1[4]);
  t5609 = Sin(var1[16]);
  t5725 = t4041*t4035;
  t5728 = -1.*t1648*t4077;
  t5804 = t5725 + t5728;
  t384 = -1.*t173;
  t896 = 1. + t384;
  t951 = -0.183*t896;
  t954 = 0. + t951;
  t2184 = -0.047*t1648;
  t2791 = 0. + t2184;
  t4044 = -1.*t4041;
  t4050 = 1. + t4044;
  t4055 = 0.047*t4050;
  t4059 = 0. + t4055;
  t6107 = t3611*t4023*t3981;
  t6204 = -1.*t1168*t4028;
  t6305 = t6107 + t6204;
  t6348 = t1168*t3611;
  t6375 = t4023*t3981*t4028;
  t6377 = t6348 + t6375;
  t5638 = -0.183*t5609;
  t5651 = 0. + t5638;
  t6410 = t4041*t6305;
  t6424 = -1.*t1648*t6377;
  t6427 = t6410 + t6424;
  t6837 = t4041*t1479*t3611;
  t6838 = -1.*t1479*t1648*t4028;
  t6847 = t6837 + t6838;

  p_output1(0)=0. + t2791*t4035 + t4059*t4077 + 0.08953*(t1648*t4035 + t4041*t4077) + t5651*t5804 - 0.183*(t1168*t1479*t173 - 1.*t5609*t5804) + t1168*t1479*t954 + var1(0);
  p_output1(1)=0. + t2791*t6305 + t4059*t6377 + 0.08953*(t1648*t6305 + t4041*t6377) + t5651*t6427 - 0.183*(t1479*t173*t4023 - 1.*t5609*t6427) + t1479*t4023*t954 + var1(1);
  p_output1(2)=0. + t1479*t2791*t3611 + 0.08953*(t1479*t1648*t3611 + t1479*t4028*t4041) + t1479*t4028*t4059 + t5651*t6847 - 0.183*(-1.*t173*t3981 - 1.*t5609*t6847) - 1.*t3981*t954 + var1(2);
}


       
Eigen::Matrix<double,3,1> p_RL_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_RL_thigh_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



