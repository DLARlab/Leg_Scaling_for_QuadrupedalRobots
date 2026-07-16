/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:21:21 GMT-05:00
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
  double t609;
  double t1476;
  double t1836;
  double t1477;
  double t2106;
  double t383;
  double t619;
  double t1424;
  double t1461;
  double t2349;
  double t1603;
  double t2262;
  double t2271;
  double t2361;
  double t2363;
  double t2400;
  double t3379;
  double t3438;
  double t3456;
  double t3515;
  double t3519;
  double t3590;
  double t2321;
  double t2456;
  double t2985;
  double t3490;
  double t3594;
  double t3614;
  double t3693;
  double t3747;
  double t3773;
  double t3977;
  double t4041;
  double t4054;
  double t1243;
  double t3017;
  double t3098;
  double t5681;
  double t5900;
  double t5902;
  double t6030;
  double t6264;
  double t6271;
  double t6489;
  double t6671;
  double t6787;
  double t6807;
  double t4111;
  double t4135;
  double t4318;
  double t6860;
  double t6889;
  double t3220;
  double t3631;
  double t3655;
  double t4361;
  double t4397;
  double t4474;
  double t3679;
  double t3777;
  double t3962;
  t609 = Cos(var1[3]);
  t1476 = Cos(var1[5]);
  t1836 = Sin(var1[3]);
  t1477 = Sin(var1[4]);
  t2106 = Sin(var1[5]);
  t383 = Cos(var1[10]);
  t619 = Cos(var1[4]);
  t1424 = Sin(var1[10]);
  t1461 = Cos(var1[9]);
  t2349 = Sin(var1[9]);
  t1603 = t609*t1476*t1477;
  t2262 = t1836*t2106;
  t2271 = t1603 + t2262;
  t2361 = -1.*t1476*t1836;
  t2363 = t609*t1477*t2106;
  t2400 = t2361 + t2363;
  t3379 = t1476*t1836*t1477;
  t3438 = -1.*t609*t2106;
  t3456 = t3379 + t3438;
  t3515 = t609*t1476;
  t3519 = t1836*t1477*t2106;
  t3590 = t3515 + t3519;
  t2321 = t1461*t2271;
  t2456 = -1.*t2349*t2400;
  t2985 = t2321 + t2456;
  t3490 = t1461*t3456;
  t3594 = -1.*t2349*t3590;
  t3614 = t3490 + t3594;
  t3693 = t1461*t619*t1476;
  t3747 = -1.*t619*t2349*t2106;
  t3773 = t3693 + t3747;
  t3977 = t2349*t2271;
  t4041 = t1461*t2400;
  t4054 = t3977 + t4041;
  t1243 = t383*t609*t619;
  t3017 = -1.*t1424*t2985;
  t3098 = t1243 + t3017;
  t5681 = -1.*t383;
  t5900 = 1. + t5681;
  t5902 = 0.183*t5900;
  t6030 = 0. + t5902;
  t6264 = -0.047*t2349;
  t6271 = 0. + t6264;
  t6489 = -1.*t1461;
  t6671 = 1. + t6489;
  t6787 = 0.047*t6671;
  t6807 = 0. + t6787;
  t4111 = t2349*t3456;
  t4135 = t1461*t3590;
  t4318 = t4111 + t4135;
  t6860 = 0.183*t1424;
  t6889 = 0. + t6860;
  t3220 = t383*t619*t1836;
  t3631 = -1.*t1424*t3614;
  t3655 = t3220 + t3631;
  t4361 = t619*t1476*t2349;
  t4397 = t1461*t619*t2106;
  t4474 = t4361 + t4397;
  t3679 = -1.*t383*t1477;
  t3777 = -1.*t1424*t3773;
  t3962 = t3679 + t3777;

  p_output1(0)=t3098;
  p_output1(1)=t3655;
  p_output1(2)=t3962;
  p_output1(3)=0.;
  p_output1(4)=t4054;
  p_output1(5)=t4318;
  p_output1(6)=t4474;
  p_output1(7)=0.;
  p_output1(8)=t2985*t383 + t1424*t609*t619;
  p_output1(9)=t3614*t383 + t1424*t1836*t619;
  p_output1(10)=-1.*t1424*t1477 + t3773*t383;
  p_output1(11)=0.;
  p_output1(12)=0. + 0.183*t3098 + 0.15331*t4054 + t6030*t609*t619 + t2271*t6271 + t2400*t6807 + t2985*t6889 + var1(0);
  p_output1(13)=0. + 0.183*t3655 + 0.15331*t4318 + t1836*t6030*t619 + t3456*t6271 + t3590*t6807 + t3614*t6889 + var1(1);
  p_output1(14)=0. + 0.183*t3962 + 0.15331*t4474 - 1.*t1477*t6030 + t1476*t619*t6271 + t2106*t619*t6807 + t3773*t6889 + var1(2);
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



