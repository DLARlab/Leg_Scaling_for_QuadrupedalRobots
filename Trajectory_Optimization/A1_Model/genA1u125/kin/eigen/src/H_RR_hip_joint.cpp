/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:21:26 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RR_hip_joint.h"

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
  double t1222;
  double t1135;
  double t1676;
  double t1398;
  double t2322;
  double t3426;
  double t2039;
  double t4699;
  double t3387;
  double t3808;
  double t4197;
  double t5239;
  double t5301;
  double t5343;
  double t5654;
  double t5764;
  double t5777;
  double t5785;
  double t5829;
  double t5847;
  double t4642;
  double t5643;
  double t5646;
  double t6307;
  double t6312;
  double t6368;
  double t6378;
  double t6413;
  double t6432;
  double t5779;
  double t5864;
  double t5903;
  double t5915;
  double t5924;
  double t5939;
  t1222 = Cos(var1[4]);
  t1135 = Cos(var1[3]);
  t1676 = Sin(var1[4]);
  t1398 = Sin(var1[3]);
  t2322 = Cos(var1[5]);
  t3426 = Sin(var1[5]);
  t2039 = Sin(var1[12]);
  t4699 = Cos(var1[12]);
  t3387 = t1135*t2322*t1676;
  t3808 = t1398*t3426;
  t4197 = t3387 + t3808;
  t5239 = -1.*t2322*t1398;
  t5301 = t1135*t1676*t3426;
  t5343 = t5239 + t5301;
  t5654 = t2322*t1398*t1676;
  t5764 = -1.*t1135*t3426;
  t5777 = t5654 + t5764;
  t5785 = t1135*t2322;
  t5829 = t1398*t1676*t3426;
  t5847 = t5785 + t5829;
  t4642 = t2039*t4197;
  t5643 = t4699*t5343;
  t5646 = t4642 + t5643;
  t6307 = 0.047*t2039;
  t6312 = 0. + t6307;
  t6368 = -1.*t4699;
  t6378 = 1. + t6368;
  t6413 = -0.047*t6378;
  t6432 = 0. + t6413;
  t5779 = t2039*t5777;
  t5864 = t4699*t5847;
  t5903 = t5779 + t5864;
  t5915 = t1222*t2322*t2039;
  t5924 = t4699*t1222*t3426;
  t5939 = t5915 + t5924;

  p_output1(0)=t1135*t1222;
  p_output1(1)=t1222*t1398;
  p_output1(2)=-1.*t1676;
  p_output1(3)=0.;
  p_output1(4)=t5646;
  p_output1(5)=t5903;
  p_output1(6)=t5939;
  p_output1(7)=0.;
  p_output1(8)=t4197*t4699 - 1.*t2039*t5343;
  p_output1(9)=t4699*t5777 - 1.*t2039*t5847;
  p_output1(10)=-1.*t1222*t2039*t3426 + t1222*t2322*t4699;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.183*t1135*t1222 - 0.047*t5646 + t4197*t6312 + t5343*t6432 + var1(0);
  p_output1(13)=0. - 0.183*t1222*t1398 - 0.047*t5903 + t5777*t6312 + t5847*t6432 + var1(1);
  p_output1(14)=0. + 0.183*t1676 - 0.047*t5939 + t1222*t2322*t6312 + t1222*t3426*t6432 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_RR_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void H_RR_hip_joint(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



