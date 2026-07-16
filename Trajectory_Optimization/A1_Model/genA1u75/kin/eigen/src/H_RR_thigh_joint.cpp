/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:18:55 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RR_thigh_joint.h"

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
  double t526;
  double t1763;
  double t2949;
  double t1941;
  double t3282;
  double t235;
  double t1501;
  double t1647;
  double t1670;
  double t3422;
  double t2684;
  double t3350;
  double t3351;
  double t3442;
  double t3459;
  double t3733;
  double t4096;
  double t4104;
  double t4109;
  double t4753;
  double t4937;
  double t4958;
  double t3352;
  double t3810;
  double t3855;
  double t4524;
  double t4986;
  double t5016;
  double t5442;
  double t5642;
  double t5657;
  double t5871;
  double t5956;
  double t6001;
  double t1534;
  double t3884;
  double t4067;
  double t6794;
  double t6799;
  double t6804;
  double t6862;
  double t6896;
  double t7064;
  double t7088;
  double t7130;
  double t7145;
  double t7165;
  double t6002;
  double t6003;
  double t6008;
  double t7225;
  double t7247;
  double t4089;
  double t5046;
  double t5135;
  double t6019;
  double t6032;
  double t6092;
  double t5136;
  double t5701;
  double t5708;
  t526 = Cos(var1[3]);
  t1763 = Cos(var1[5]);
  t2949 = Sin(var1[3]);
  t1941 = Sin(var1[4]);
  t3282 = Sin(var1[5]);
  t235 = Cos(var1[13]);
  t1501 = Cos(var1[4]);
  t1647 = Sin(var1[13]);
  t1670 = Cos(var1[12]);
  t3422 = Sin(var1[12]);
  t2684 = t526*t1763*t1941;
  t3350 = t2949*t3282;
  t3351 = t2684 + t3350;
  t3442 = -1.*t1763*t2949;
  t3459 = t526*t1941*t3282;
  t3733 = t3442 + t3459;
  t4096 = t1763*t2949*t1941;
  t4104 = -1.*t526*t3282;
  t4109 = t4096 + t4104;
  t4753 = t526*t1763;
  t4937 = t2949*t1941*t3282;
  t4958 = t4753 + t4937;
  t3352 = t1670*t3351;
  t3810 = -1.*t3422*t3733;
  t3855 = t3352 + t3810;
  t4524 = t1670*t4109;
  t4986 = -1.*t3422*t4958;
  t5016 = t4524 + t4986;
  t5442 = t1670*t1501*t1763;
  t5642 = -1.*t1501*t3422*t3282;
  t5657 = t5442 + t5642;
  t5871 = t3422*t3351;
  t5956 = t1670*t3733;
  t6001 = t5871 + t5956;
  t1534 = t235*t526*t1501;
  t3884 = -1.*t1647*t3855;
  t4067 = t1534 + t3884;
  t6794 = -1.*t235;
  t6799 = 1. + t6794;
  t6804 = -0.183*t6799;
  t6862 = 0. + t6804;
  t6896 = 0.047*t3422;
  t7064 = 0. + t6896;
  t7088 = -1.*t1670;
  t7130 = 1. + t7088;
  t7145 = -0.047*t7130;
  t7165 = 0. + t7145;
  t6002 = t3422*t4109;
  t6003 = t1670*t4958;
  t6008 = t6002 + t6003;
  t7225 = -0.183*t1647;
  t7247 = 0. + t7225;
  t4089 = t235*t1501*t2949;
  t5046 = -1.*t1647*t5016;
  t5135 = t4089 + t5046;
  t6019 = t1501*t1763*t3422;
  t6032 = t1670*t1501*t3282;
  t6092 = t6019 + t6032;
  t5136 = -1.*t235*t1941;
  t5701 = -1.*t1647*t5657;
  t5708 = t5136 + t5701;

  p_output1(0)=t4067;
  p_output1(1)=t5135;
  p_output1(2)=t5708;
  p_output1(3)=0.;
  p_output1(4)=t6001;
  p_output1(5)=t6008;
  p_output1(6)=t6092;
  p_output1(7)=0.;
  p_output1(8)=t235*t3855 + t1501*t1647*t526;
  p_output1(9)=t1501*t1647*t2949 + t235*t5016;
  p_output1(10)=-1.*t1647*t1941 + t235*t5657;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.183*t4067 - 0.11079*t6001 + t1501*t526*t6862 + t3351*t7064 + t3733*t7165 + t3855*t7247 + var1(0);
  p_output1(13)=0. - 0.183*t5135 - 0.11079*t6008 + t1501*t2949*t6862 + t4109*t7064 + t4958*t7165 + t5016*t7247 + var1(1);
  p_output1(14)=0. - 0.183*t5708 - 0.11079*t6092 - 1.*t1941*t6862 + t1501*t1763*t7064 + t1501*t3282*t7165 + t5657*t7247 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_RR_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void H_RR_thigh_joint(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



