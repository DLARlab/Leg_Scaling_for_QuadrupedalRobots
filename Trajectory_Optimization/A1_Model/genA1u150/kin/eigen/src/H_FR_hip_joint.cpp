/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:26:29 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FR_hip_joint.h"

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
  double t864;
  double t1347;
  double t624;
  double t1994;
  double t3299;
  double t3643;
  double t2882;
  double t5547;
  double t4465;
  double t4526;
  double t4593;
  double t3329;
  double t3694;
  double t3868;
  double t7047;
  double t7052;
  double t7054;
  double t6407;
  double t6761;
  double t6832;
  double t4359;
  double t5755;
  double t6100;
  double t7216;
  double t7223;
  double t7231;
  double t7265;
  double t7301;
  double t7307;
  double t6995;
  double t7068;
  double t7083;
  double t7096;
  double t7103;
  double t7110;
  t864 = Cos(var1[4]);
  t1347 = Sin(var1[3]);
  t624 = Cos(var1[3]);
  t1994 = Sin(var1[4]);
  t3299 = Cos(var1[5]);
  t3643 = Sin(var1[5]);
  t2882 = Cos(var1[6]);
  t5547 = Sin(var1[6]);
  t4465 = t624*t3299*t1994;
  t4526 = t1347*t3643;
  t4593 = t4465 + t4526;
  t3329 = -1.*t3299*t1347;
  t3694 = t624*t1994*t3643;
  t3868 = t3329 + t3694;
  t7047 = t3299*t1347*t1994;
  t7052 = -1.*t624*t3643;
  t7054 = t7047 + t7052;
  t6407 = t624*t3299;
  t6761 = t1347*t1994*t3643;
  t6832 = t6407 + t6761;
  t4359 = t2882*t3868;
  t5755 = t4593*t5547;
  t6100 = t4359 + t5755;
  t7216 = -1.*t2882;
  t7223 = 1. + t7216;
  t7231 = -0.047*t7223;
  t7265 = 0. + t7231;
  t7301 = 0.047*t5547;
  t7307 = 0. + t7301;
  t6995 = t2882*t6832;
  t7068 = t7054*t5547;
  t7083 = t6995 + t7068;
  t7096 = t864*t2882*t3643;
  t7103 = t864*t3299*t5547;
  t7110 = t7096 + t7103;

  p_output1(0)=t624*t864;
  p_output1(1)=t1347*t864;
  p_output1(2)=-1.*t1994;
  p_output1(3)=0.;
  p_output1(4)=t6100;
  p_output1(5)=t7083;
  p_output1(6)=t7110;
  p_output1(7)=0.;
  p_output1(8)=t2882*t4593 - 1.*t3868*t5547;
  p_output1(9)=-1.*t5547*t6832 + t2882*t7054;
  p_output1(10)=t2882*t3299*t864 - 1.*t3643*t5547*t864;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.047*t6100 + t3868*t7265 + t4593*t7307 + 0.183*t624*t864 + var1(0);
  p_output1(13)=0. - 0.047*t7083 + t6832*t7265 + t7054*t7307 + 0.183*t1347*t864 + var1(1);
  p_output1(14)=0. - 0.183*t1994 - 0.047*t7110 + t3643*t7265*t864 + t3299*t7307*t864 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_FR_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void H_FR_hip_joint(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



