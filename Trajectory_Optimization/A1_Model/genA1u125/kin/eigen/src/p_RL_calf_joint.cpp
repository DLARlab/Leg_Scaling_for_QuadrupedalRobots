/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:21:36 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RL_calf_joint.h"

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
  double t1341;
  double t3415;
  double t3682;
  double t3483;
  double t3925;
  double t1920;
  double t3500;
  double t4282;
  double t4292;
  double t4437;
  double t4900;
  double t4967;
  double t5069;
  double t1361;
  double t5571;
  double t372;
  double t5695;
  double t5705;
  double t5765;
  double t5796;
  double t5866;
  double t5867;
  double t5953;
  double t6176;
  double t6362;
  double t6496;
  double t6695;
  double t6711;
  double t6719;
  double t760;
  double t948;
  double t1127;
  double t1209;
  double t2097;
  double t2184;
  double t4522;
  double t4648;
  double t4709;
  double t4899;
  double t7058;
  double t7062;
  double t7063;
  double t7095;
  double t7110;
  double t7123;
  double t5575;
  double t5690;
  double t5926;
  double t5954;
  double t6136;
  double t7303;
  double t7420;
  double t7426;
  double t6564;
  double t6593;
  double t6622;
  double t7510;
  double t7514;
  double t7523;
  double t7609;
  double t7726;
  double t7739;
  double t8004;
  double t8021;
  double t8040;
  double t8095;
  double t8106;
  double t8111;
  double t8142;
  double t8144;
  double t8145;
  t1341 = Cos(var1[3]);
  t3415 = Cos(var1[5]);
  t3682 = Sin(var1[3]);
  t3483 = Sin(var1[4]);
  t3925 = Sin(var1[5]);
  t1920 = Sin(var1[15]);
  t3500 = t1341*t3415*t3483;
  t4282 = t3682*t3925;
  t4292 = t3500 + t4282;
  t4437 = Cos(var1[15]);
  t4900 = -1.*t3415*t3682;
  t4967 = t1341*t3483*t3925;
  t5069 = t4900 + t4967;
  t1361 = Cos(var1[4]);
  t5571 = Sin(var1[16]);
  t372 = Cos(var1[16]);
  t5695 = t4437*t4292;
  t5705 = -1.*t1920*t5069;
  t5765 = t5695 + t5705;
  t5796 = Cos(var1[17]);
  t5866 = -1.*t5796;
  t5867 = 1. + t5866;
  t5953 = Sin(var1[17]);
  t6176 = t1341*t1361*t5571;
  t6362 = t372*t5765;
  t6496 = t6176 + t6362;
  t6695 = t372*t1341*t1361;
  t6711 = -1.*t5571*t5765;
  t6719 = t6695 + t6711;
  t760 = -1.*t372;
  t948 = 1. + t760;
  t1127 = -0.183*t948;
  t1209 = 0. + t1127;
  t2097 = -0.047*t1920;
  t2184 = 0. + t2097;
  t4522 = -1.*t4437;
  t4648 = 1. + t4522;
  t4709 = 0.047*t4648;
  t4899 = 0. + t4709;
  t7058 = t3415*t3682*t3483;
  t7062 = -1.*t1341*t3925;
  t7063 = t7058 + t7062;
  t7095 = t1341*t3415;
  t7110 = t3682*t3483*t3925;
  t7123 = t7095 + t7110;
  t5575 = -0.183*t5571;
  t5690 = 0. + t5575;
  t5926 = -0.25*t5867;
  t5954 = -0.183*t5953;
  t6136 = 0. + t5926 + t5954;
  t7303 = t4437*t7063;
  t7420 = -1.*t1920*t7123;
  t7426 = t7303 + t7420;
  t6564 = -0.183*t5867;
  t6593 = 0.25*t5953;
  t6622 = 0. + t6564 + t6593;
  t7510 = t1361*t5571*t3682;
  t7514 = t372*t7426;
  t7523 = t7510 + t7514;
  t7609 = t372*t1361*t3682;
  t7726 = -1.*t5571*t7426;
  t7739 = t7609 + t7726;
  t8004 = t4437*t1361*t3415;
  t8021 = -1.*t1361*t1920*t3925;
  t8040 = t8004 + t8021;
  t8095 = -1.*t5571*t3483;
  t8106 = t372*t8040;
  t8111 = t8095 + t8106;
  t8142 = -1.*t372*t3483;
  t8144 = -1.*t5571*t8040;
  t8145 = t8142 + t8144;

  p_output1(0)=0. + t1209*t1341*t1361 + t2184*t4292 + t4899*t5069 + 0.15331*(t1920*t4292 + t4437*t5069) + t5690*t5765 + t6136*t6496 + t6622*t6719 - 0.183*(-1.*t5953*t6496 + t5796*t6719) - 0.25*(t5796*t6496 + t5953*t6719) + var1(0);
  p_output1(1)=0. + t1209*t1361*t3682 + t2184*t7063 + t4899*t7123 + 0.15331*(t1920*t7063 + t4437*t7123) + t5690*t7426 + t6136*t7523 + t6622*t7739 - 0.183*(-1.*t5953*t7523 + t5796*t7739) - 0.25*(t5796*t7523 + t5953*t7739) + var1(1);
  p_output1(2)=0. + t1361*t2184*t3415 - 1.*t1209*t3483 + 0.15331*(t1361*t1920*t3415 + t1361*t3925*t4437) + t1361*t3925*t4899 + t5690*t8040 + t6136*t8111 + t6622*t8145 - 0.183*(-1.*t5953*t8111 + t5796*t8145) - 0.25*(t5796*t8111 + t5953*t8145) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_RL_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_RL_calf_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



