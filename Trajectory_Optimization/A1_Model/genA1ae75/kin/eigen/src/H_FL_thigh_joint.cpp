/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:51:39 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FL_thigh_joint.h"

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
  double t743;
  double t1759;
  double t1888;
  double t1802;
  double t1943;
  double t643;
  double t1008;
  double t1104;
  double t1655;
  double t2200;
  double t1821;
  double t1952;
  double t1955;
  double t2768;
  double t2810;
  double t2941;
  double t3779;
  double t3874;
  double t3902;
  double t4019;
  double t4101;
  double t4236;
  double t1960;
  double t2952;
  double t3203;
  double t4006;
  double t4257;
  double t4655;
  double t5144;
  double t5151;
  double t5192;
  double t5319;
  double t5410;
  double t5464;
  double t1064;
  double t3267;
  double t3489;
  double t6161;
  double t6162;
  double t6202;
  double t6208;
  double t6229;
  double t6242;
  double t6260;
  double t6287;
  double t6290;
  double t6316;
  double t5545;
  double t5631;
  double t5714;
  double t6401;
  double t6410;
  double t3591;
  double t4705;
  double t5082;
  double t5810;
  double t5876;
  double t5997;
  double t5134;
  double t5202;
  double t5212;
  t743 = Cos(var1[3]);
  t1759 = Cos(var1[5]);
  t1888 = Sin(var1[3]);
  t1802 = Sin(var1[4]);
  t1943 = Sin(var1[5]);
  t643 = Cos(var1[10]);
  t1008 = Cos(var1[4]);
  t1104 = Sin(var1[10]);
  t1655 = Cos(var1[9]);
  t2200 = Sin(var1[9]);
  t1821 = t743*t1759*t1802;
  t1952 = t1888*t1943;
  t1955 = t1821 + t1952;
  t2768 = -1.*t1759*t1888;
  t2810 = t743*t1802*t1943;
  t2941 = t2768 + t2810;
  t3779 = t1759*t1888*t1802;
  t3874 = -1.*t743*t1943;
  t3902 = t3779 + t3874;
  t4019 = t743*t1759;
  t4101 = t1888*t1802*t1943;
  t4236 = t4019 + t4101;
  t1960 = t1655*t1955;
  t2952 = -1.*t2200*t2941;
  t3203 = t1960 + t2952;
  t4006 = t1655*t3902;
  t4257 = -1.*t2200*t4236;
  t4655 = t4006 + t4257;
  t5144 = t1655*t1008*t1759;
  t5151 = -1.*t1008*t2200*t1943;
  t5192 = t5144 + t5151;
  t5319 = t2200*t1955;
  t5410 = t1655*t2941;
  t5464 = t5319 + t5410;
  t1064 = t643*t743*t1008;
  t3267 = -1.*t1104*t3203;
  t3489 = t1064 + t3267;
  t6161 = -1.*t643;
  t6162 = 1. + t6161;
  t6202 = 0.183*t6162;
  t6208 = 0. + t6202;
  t6229 = -0.047*t2200;
  t6242 = 0. + t6229;
  t6260 = -1.*t1655;
  t6287 = 1. + t6260;
  t6290 = 0.047*t6287;
  t6316 = 0. + t6290;
  t5545 = t2200*t3902;
  t5631 = t1655*t4236;
  t5714 = t5545 + t5631;
  t6401 = 0.183*t1104;
  t6410 = 0. + t6401;
  t3591 = t643*t1008*t1888;
  t4705 = -1.*t1104*t4655;
  t5082 = t3591 + t4705;
  t5810 = t1008*t1759*t2200;
  t5876 = t1655*t1008*t1943;
  t5997 = t5810 + t5876;
  t5134 = -1.*t643*t1802;
  t5202 = -1.*t1104*t5192;
  t5212 = t5134 + t5202;

  p_output1(0)=t3489;
  p_output1(1)=t5082;
  p_output1(2)=t5212;
  p_output1(3)=0.;
  p_output1(4)=t5464;
  p_output1(5)=t5714;
  p_output1(6)=t5997;
  p_output1(7)=0.;
  p_output1(8)=t3203*t643 + t1008*t1104*t743;
  p_output1(9)=t1008*t1104*t1888 + t4655*t643;
  p_output1(10)=-1.*t1104*t1802 + t5192*t643;
  p_output1(11)=0.;
  p_output1(12)=0. + 0.183*t3489 + 0.13205*t5464 + t1955*t6242 + t2941*t6316 + t3203*t6410 + t1008*t6208*t743 + var1(0);
  p_output1(13)=0. + 0.183*t5082 + 0.13205*t5714 + t1008*t1888*t6208 + t3902*t6242 + t4236*t6316 + t4655*t6410 + var1(1);
  p_output1(14)=0. + 0.183*t5212 + 0.13205*t5997 - 1.*t1802*t6208 + t1008*t1759*t6242 + t1008*t1943*t6316 + t5192*t6410 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_FL_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void H_FL_thigh_joint(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



