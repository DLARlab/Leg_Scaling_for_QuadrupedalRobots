/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:26:28 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FR_hip_joint.h"

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
  double t405;
  double t6643;
  double t6944;
  double t6836;
  double t6952;
  double t3363;
  double t6846;
  double t6963;
  double t6975;
  double t6980;
  double t7011;
  double t7035;
  double t7052;
  double t1143;
  double t4496;
  double t4591;
  double t5935;
  double t6004;
  double t7054;
  double t7057;
  double t7103;
  double t7110;
  double t7112;
  double t7123;
  double t7126;
  double t7135;
  t405 = Cos(var1[3]);
  t6643 = Cos(var1[5]);
  t6944 = Sin(var1[4]);
  t6836 = Sin(var1[3]);
  t6952 = Sin(var1[5]);
  t3363 = Cos(var1[6]);
  t6846 = -1.*t6643*t6836;
  t6963 = t405*t6944*t6952;
  t6975 = t6846 + t6963;
  t6980 = t405*t6643*t6944;
  t7011 = t6836*t6952;
  t7035 = t6980 + t7011;
  t7052 = Sin(var1[6]);
  t1143 = Cos(var1[4]);
  t4496 = -1.*t3363;
  t4591 = 1. + t4496;
  t5935 = -0.047*t4591;
  t6004 = 0. + t5935;
  t7054 = 0.047*t7052;
  t7057 = 0. + t7054;
  t7103 = t405*t6643;
  t7110 = t6836*t6944*t6952;
  t7112 = t7103 + t7110;
  t7123 = t6643*t6836*t6944;
  t7126 = -1.*t405*t6952;
  t7135 = t7123 + t7126;

  p_output1(0)=0. + 0.183*t1143*t405 + t6004*t6975 - 0.047*(t3363*t6975 + t7035*t7052) + t7035*t7057 + var1(0);
  p_output1(1)=0. + 0.183*t1143*t6836 + t6004*t7112 + t7057*t7135 - 0.047*(t3363*t7112 + t7052*t7135) + var1(1);
  p_output1(2)=0. - 0.183*t6944 + t1143*t6004*t6952 - 0.047*(t1143*t3363*t6952 + t1143*t6643*t7052) + t1143*t6643*t7057 + var1(2);
}


       
Eigen::Matrix<double,3,1> p_FR_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_FR_hip_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



