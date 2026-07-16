/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:13:34 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FR_thigh_joint.h"

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
  double t113;
  double t1122;
  double t2173;
  double t1161;
  double t2564;
  double t477;
  double t549;
  double t1119;
  double t3866;
  double t4180;
  double t3796;
  double t3800;
  double t3830;
  double t1900;
  double t2696;
  double t3078;
  double t8009;
  double t8011;
  double t8012;
  double t8004;
  double t8005;
  double t8006;
  double t3746;
  double t3948;
  double t4027;
  double t8007;
  double t8013;
  double t8015;
  double t8025;
  double t8027;
  double t8028;
  double t8031;
  double t8032;
  double t8037;
  double t993;
  double t4440;
  double t7984;
  double t8062;
  double t8063;
  double t8064;
  double t8065;
  double t8067;
  double t8068;
  double t8073;
  double t8074;
  double t8076;
  double t8077;
  double t8041;
  double t8044;
  double t8045;
  double t8080;
  double t8082;
  double t7988;
  double t8017;
  double t8021;
  double t8046;
  double t8047;
  double t8048;
  double t8022;
  double t8029;
  double t8030;
  t113 = Cos(var1[3]);
  t1122 = Cos(var1[5]);
  t2173 = Sin(var1[3]);
  t1161 = Sin(var1[4]);
  t2564 = Sin(var1[5]);
  t477 = Cos(var1[4]);
  t549 = Cos(var1[7]);
  t1119 = Cos(var1[6]);
  t3866 = Sin(var1[6]);
  t4180 = Sin(var1[7]);
  t3796 = -1.*t1122*t2173;
  t3800 = t113*t1161*t2564;
  t3830 = t3796 + t3800;
  t1900 = t113*t1122*t1161;
  t2696 = t2173*t2564;
  t3078 = t1900 + t2696;
  t8009 = t113*t1122;
  t8011 = t2173*t1161*t2564;
  t8012 = t8009 + t8011;
  t8004 = t1122*t2173*t1161;
  t8005 = -1.*t113*t2564;
  t8006 = t8004 + t8005;
  t3746 = t1119*t3078;
  t3948 = -1.*t3830*t3866;
  t4027 = t3746 + t3948;
  t8007 = t1119*t8006;
  t8013 = -1.*t8012*t3866;
  t8015 = t8007 + t8013;
  t8025 = t477*t1122*t1119;
  t8027 = -1.*t477*t2564*t3866;
  t8028 = t8025 + t8027;
  t8031 = t1119*t3830;
  t8032 = t3078*t3866;
  t8037 = t8031 + t8032;
  t993 = t113*t477*t549;
  t4440 = -1.*t4027*t4180;
  t7984 = t993 + t4440;
  t8062 = -1.*t549;
  t8063 = 1. + t8062;
  t8064 = 0.183*t8063;
  t8065 = 0. + t8064;
  t8067 = -1.*t1119;
  t8068 = 1. + t8067;
  t8073 = -0.047*t8068;
  t8074 = 0. + t8073;
  t8076 = 0.047*t3866;
  t8077 = 0. + t8076;
  t8041 = t1119*t8012;
  t8044 = t8006*t3866;
  t8045 = t8041 + t8044;
  t8080 = 0.183*t4180;
  t8082 = 0. + t8080;
  t7988 = t477*t549*t2173;
  t8017 = -1.*t8015*t4180;
  t8021 = t7988 + t8017;
  t8046 = t477*t1119*t2564;
  t8047 = t477*t1122*t3866;
  t8048 = t8046 + t8047;
  t8022 = -1.*t549*t1161;
  t8029 = -1.*t8028*t4180;
  t8030 = t8022 + t8029;

  p_output1(0)=t7984;
  p_output1(1)=t8021;
  p_output1(2)=t8030;
  p_output1(3)=0.;
  p_output1(4)=t8037;
  p_output1(5)=t8045;
  p_output1(6)=t8048;
  p_output1(7)=0.;
  p_output1(8)=t113*t4180*t477 + t4027*t549;
  p_output1(9)=t2173*t4180*t477 + t549*t8015;
  p_output1(10)=-1.*t1161*t4180 + t549*t8028;
  p_output1(11)=0.;
  p_output1(12)=0. + 0.183*t7984 - 0.08953*t8037 + t113*t477*t8065 + t3830*t8074 + t3078*t8077 + t4027*t8082 + var1(0);
  p_output1(13)=0. + 0.183*t8021 - 0.08953*t8045 + t2173*t477*t8065 + t8012*t8074 + t8006*t8077 + t8015*t8082 + var1(1);
  p_output1(14)=0. + 0.183*t8030 - 0.08953*t8048 - 1.*t1161*t8065 + t2564*t477*t8074 + t1122*t477*t8077 + t8028*t8082 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_FR_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void H_FR_thigh_joint(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



