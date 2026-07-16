/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:51:30 GMT-05:00
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
  double t1457;
  double t8049;
  double t8899;
  double t8771;
  double t8901;
  double t4203;
  double t8837;
  double t8923;
  double t8928;
  double t8930;
  double t8932;
  double t8937;
  double t8941;
  double t1664;
  double t2175;
  double t8979;
  double t8981;
  double t8985;
  double t8986;
  double t2178;
  double t2193;
  double t2209;
  double t2228;
  double t4482;
  double t5590;
  double t7730;
  double t7915;
  double t8944;
  double t8946;
  double t9012;
  double t9014;
  double t9015;
  double t9018;
  double t9020;
  double t9025;
  double t8989;
  double t8991;
  double t9038;
  double t9039;
  double t9040;
  double t9070;
  double t9073;
  double t9081;
  t1457 = Cos(var1[3]);
  t8049 = Cos(var1[5]);
  t8899 = Sin(var1[4]);
  t8771 = Sin(var1[3]);
  t8901 = Sin(var1[5]);
  t4203 = Cos(var1[6]);
  t8837 = -1.*t8049*t8771;
  t8923 = t1457*t8899*t8901;
  t8928 = t8837 + t8923;
  t8930 = t1457*t8049*t8899;
  t8932 = t8771*t8901;
  t8937 = t8930 + t8932;
  t8941 = Sin(var1[6]);
  t1664 = Cos(var1[4]);
  t2175 = Cos(var1[7]);
  t8979 = t4203*t8937;
  t8981 = -1.*t8928*t8941;
  t8985 = t8979 + t8981;
  t8986 = Sin(var1[7]);
  t2178 = -1.*t2175;
  t2193 = 1. + t2178;
  t2209 = 0.183*t2193;
  t2228 = 0. + t2209;
  t4482 = -1.*t4203;
  t5590 = 1. + t4482;
  t7730 = -0.047*t5590;
  t7915 = 0. + t7730;
  t8944 = 0.047*t8941;
  t8946 = 0. + t8944;
  t9012 = t1457*t8049;
  t9014 = t8771*t8899*t8901;
  t9015 = t9012 + t9014;
  t9018 = t8049*t8771*t8899;
  t9020 = -1.*t1457*t8901;
  t9025 = t9018 + t9020;
  t8989 = 0.183*t8986;
  t8991 = 0. + t8989;
  t9038 = t4203*t9025;
  t9039 = -1.*t9015*t8941;
  t9040 = t9038 + t9039;
  t9070 = t1664*t8049*t4203;
  t9073 = -1.*t1664*t8901*t8941;
  t9081 = t9070 + t9073;

  p_output1(0)=0. + t1457*t1664*t2228 + t7915*t8928 - 0.13205*(t4203*t8928 + t8937*t8941) + t8937*t8946 + 0.183*(t1457*t1664*t2175 - 1.*t8985*t8986) + t8985*t8991 + var1(0);
  p_output1(1)=0. + t1664*t2228*t8771 + t7915*t9015 + t8946*t9025 - 0.13205*(t4203*t9015 + t8941*t9025) + t8991*t9040 + 0.183*(t1664*t2175*t8771 - 1.*t8986*t9040) + var1(1);
  p_output1(2)=0. - 1.*t2228*t8899 + t1664*t7915*t8901 - 0.13205*(t1664*t4203*t8901 + t1664*t8049*t8941) + t1664*t8049*t8946 + t8991*t9081 + 0.183*(-1.*t2175*t8899 - 1.*t8986*t9081) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_FR_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_FR_thigh_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



