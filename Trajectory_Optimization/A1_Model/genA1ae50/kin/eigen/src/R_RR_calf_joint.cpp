/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:11:09 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RR_calf_joint.h"

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
static void output1(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  double t95;
  double t147;
  double t189;
  double t150;
  double t200;
  double t140;
  double t97;
  double t107;
  double t142;
  double t162;
  double t203;
  double t204;
  double t207;
  double t208;
  double t219;
  double t220;
  double t224;
  double t227;
  double t228;
  double t9;
  double t256;
  double t642;
  double t677;
  double t702;
  double t719;
  double t799;
  double t899;
  double t945;
  double t966;
  double t1019;
  double t1514;
  double t1537;
  double t1621;
  double t127;
  double t231;
  double t240;
  double t264;
  double t377;
  double t402;
  double t634;
  double t1063;
  double t1068;
  double t1156;
  double t1275;
  double t1339;
  double t1457;
  double t1826;
  double t1962;
  double t2051;
  double t2080;
  double t2095;
  t95 = Cos(var1[3]);
  t147 = Cos(var1[5]);
  t189 = Sin(var1[3]);
  t150 = Sin(var1[4]);
  t200 = Sin(var1[5]);
  t140 = Cos(var1[13]);
  t97 = Cos(var1[4]);
  t107 = Sin(var1[13]);
  t142 = Cos(var1[12]);
  t162 = t95*t147*t150;
  t203 = t189*t200;
  t204 = t162 + t203;
  t207 = t142*t204;
  t208 = Sin(var1[12]);
  t219 = -1.*t147*t189;
  t220 = t95*t150*t200;
  t224 = t219 + t220;
  t227 = -1.*t208*t224;
  t228 = t207 + t227;
  t9 = Sin(var1[14]);
  t256 = Cos(var1[14]);
  t642 = t147*t189*t150;
  t677 = -1.*t95*t200;
  t702 = t642 + t677;
  t719 = t142*t702;
  t799 = t95*t147;
  t899 = t189*t150*t200;
  t945 = t799 + t899;
  t966 = -1.*t208*t945;
  t1019 = t719 + t966;
  t1514 = t142*t97*t147;
  t1537 = -1.*t97*t208*t200;
  t1621 = t1514 + t1537;
  t127 = t95*t97*t107;
  t231 = t140*t228;
  t240 = t127 + t231;
  t264 = t140*t95*t97;
  t377 = -1.*t107*t228;
  t402 = t264 + t377;
  t634 = t97*t107*t189;
  t1063 = t140*t1019;
  t1068 = t634 + t1063;
  t1156 = t140*t97*t189;
  t1275 = -1.*t107*t1019;
  t1339 = t1156 + t1275;
  t1457 = -1.*t107*t150;
  t1826 = t140*t1621;
  t1962 = t1457 + t1826;
  t2051 = -1.*t140*t150;
  t2080 = -1.*t107*t1621;
  t2095 = t2051 + t2080;

  p_output1(0)=t256*t402 - 1.*t240*t9;
  p_output1(1)=t1339*t256 - 1.*t1068*t9;
  p_output1(2)=t2095*t256 - 1.*t1962*t9;
  p_output1(3)=t204*t208 + t142*t224;
  p_output1(4)=t208*t702 + t142*t945;
  p_output1(5)=t142*t200*t97 + t147*t208*t97;
  p_output1(6)=t240*t256 + t402*t9;
  p_output1(7)=t1068*t256 + t1339*t9;
  p_output1(8)=t1962*t256 + t2095*t9;
}


       
Eigen::Matrix<double,3,3> R_RR_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_RR_calf_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



