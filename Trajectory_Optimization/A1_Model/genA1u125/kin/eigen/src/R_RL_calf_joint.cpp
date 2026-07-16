/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:21:38 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RL_calf_joint.h"

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
  double t1318;
  double t4016;
  double t4758;
  double t4690;
  double t4926;
  double t3872;
  double t1698;
  double t3369;
  double t4002;
  double t4692;
  double t4945;
  double t5057;
  double t5170;
  double t5172;
  double t5280;
  double t5287;
  double t5351;
  double t5352;
  double t5384;
  double t629;
  double t5471;
  double t5532;
  double t5570;
  double t5575;
  double t5587;
  double t5589;
  double t5590;
  double t5591;
  double t5592;
  double t5595;
  double t5769;
  double t5774;
  double t5795;
  double t3618;
  double t5387;
  double t5388;
  double t5472;
  double t5492;
  double t5495;
  double t5520;
  double t5650;
  double t5652;
  double t5720;
  double t5729;
  double t5738;
  double t5760;
  double t5812;
  double t5813;
  double t5827;
  double t5850;
  double t5852;
  t1318 = Cos(var1[3]);
  t4016 = Cos(var1[5]);
  t4758 = Sin(var1[3]);
  t4690 = Sin(var1[4]);
  t4926 = Sin(var1[5]);
  t3872 = Cos(var1[16]);
  t1698 = Cos(var1[4]);
  t3369 = Sin(var1[16]);
  t4002 = Cos(var1[15]);
  t4692 = t1318*t4016*t4690;
  t4945 = t4758*t4926;
  t5057 = t4692 + t4945;
  t5170 = t4002*t5057;
  t5172 = Sin(var1[15]);
  t5280 = -1.*t4016*t4758;
  t5287 = t1318*t4690*t4926;
  t5351 = t5280 + t5287;
  t5352 = -1.*t5172*t5351;
  t5384 = t5170 + t5352;
  t629 = Sin(var1[17]);
  t5471 = Cos(var1[17]);
  t5532 = t4016*t4758*t4690;
  t5570 = -1.*t1318*t4926;
  t5575 = t5532 + t5570;
  t5587 = t4002*t5575;
  t5589 = t1318*t4016;
  t5590 = t4758*t4690*t4926;
  t5591 = t5589 + t5590;
  t5592 = -1.*t5172*t5591;
  t5595 = t5587 + t5592;
  t5769 = t4002*t1698*t4016;
  t5774 = -1.*t1698*t5172*t4926;
  t5795 = t5769 + t5774;
  t3618 = t1318*t1698*t3369;
  t5387 = t3872*t5384;
  t5388 = t3618 + t5387;
  t5472 = t3872*t1318*t1698;
  t5492 = -1.*t3369*t5384;
  t5495 = t5472 + t5492;
  t5520 = t1698*t3369*t4758;
  t5650 = t3872*t5595;
  t5652 = t5520 + t5650;
  t5720 = t3872*t1698*t4758;
  t5729 = -1.*t3369*t5595;
  t5738 = t5720 + t5729;
  t5760 = -1.*t3369*t4690;
  t5812 = t3872*t5795;
  t5813 = t5760 + t5812;
  t5827 = -1.*t3872*t4690;
  t5850 = -1.*t3369*t5795;
  t5852 = t5827 + t5850;

  p_output1(0)=t5471*t5495 - 1.*t5388*t629;
  p_output1(1)=t5471*t5738 - 1.*t5652*t629;
  p_output1(2)=t5471*t5852 - 1.*t5813*t629;
  p_output1(3)=t5057*t5172 + t4002*t5351;
  p_output1(4)=t5172*t5575 + t4002*t5591;
  p_output1(5)=t1698*t4002*t4926 + t1698*t4016*t5172;
  p_output1(6)=t5388*t5471 + t5495*t629;
  p_output1(7)=t5471*t5652 + t5738*t629;
  p_output1(8)=t5471*t5813 + t5852*t629;
}


       
Eigen::Matrix<double,3,3> R_RL_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_RL_calf_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



