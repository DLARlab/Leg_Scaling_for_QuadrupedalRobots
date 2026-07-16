/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:11:18 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_FRfoot.h"

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
  double t1647;
  double t4173;
  double t5126;
  double t4559;
  double t5316;
  double t1731;
  double t4135;
  double t4581;
  double t5609;
  double t5626;
  double t5635;
  double t5685;
  double t5806;
  double t6158;
  double t6269;
  double t6519;
  double t6611;
  double t1659;
  double t6683;
  double t1102;
  double t6959;
  double t6962;
  double t7044;
  double t7099;
  double t7101;
  double t7171;
  double t7174;
  double t7203;
  double t7223;
  double t6933;
  double t7511;
  double t7531;
  double t7576;
  double t6790;
  double t6856;
  double t6868;
  double t1780;
  double t6687;
  double t6735;
  double t7364;
  double t7412;
  double t7419;
  double t6958;
  double t7249;
  double t7252;
  double t7673;
  double t7708;
  double t7732;
  double t7499;
  double t7596;
  double t7629;
  t1647 = Cos(var1[3]);
  t4173 = Cos(var1[5]);
  t5126 = Sin(var1[3]);
  t4559 = Sin(var1[4]);
  t5316 = Sin(var1[5]);
  t1731 = Cos(var1[7]);
  t4135 = Cos(var1[6]);
  t4581 = t1647*t4173*t4559;
  t5609 = t5126*t5316;
  t5626 = t4581 + t5609;
  t5635 = t4135*t5626;
  t5685 = -1.*t4173*t5126;
  t5806 = t1647*t4559*t5316;
  t6158 = t5685 + t5806;
  t6269 = Sin(var1[6]);
  t6519 = -1.*t6158*t6269;
  t6611 = t5635 + t6519;
  t1659 = Cos(var1[4]);
  t6683 = Sin(var1[7]);
  t1102 = Cos(var1[8]);
  t6959 = t4173*t5126*t4559;
  t6962 = -1.*t1647*t5316;
  t7044 = t6959 + t6962;
  t7099 = t4135*t7044;
  t7101 = t1647*t4173;
  t7171 = t5126*t4559*t5316;
  t7174 = t7101 + t7171;
  t7203 = -1.*t7174*t6269;
  t7223 = t7099 + t7203;
  t6933 = Sin(var1[8]);
  t7511 = t1659*t4173*t4135;
  t7531 = -1.*t1659*t5316*t6269;
  t7576 = t7511 + t7531;
  t6790 = t1731*t6611;
  t6856 = t1647*t1659*t6683;
  t6868 = t6790 + t6856;
  t1780 = t1647*t1659*t1731;
  t6687 = -1.*t6611*t6683;
  t6735 = t1780 + t6687;
  t7364 = t1731*t7223;
  t7412 = t1659*t5126*t6683;
  t7419 = t7364 + t7412;
  t6958 = t1659*t1731*t5126;
  t7249 = -1.*t7223*t6683;
  t7252 = t6958 + t7249;
  t7673 = t1731*t7576;
  t7708 = -1.*t4559*t6683;
  t7732 = t7673 + t7708;
  t7499 = -1.*t1731*t4559;
  t7596 = -1.*t7576*t6683;
  t7629 = t7499 + t7596;

  p_output1(0)=t1102*t6735 - 1.*t6868*t6933;
  p_output1(1)=t1102*t7252 - 1.*t6933*t7419;
  p_output1(2)=t1102*t7629 - 1.*t6933*t7732;
  p_output1(3)=t4135*t6158 + t5626*t6269;
  p_output1(4)=t6269*t7044 + t4135*t7174;
  p_output1(5)=t1659*t4135*t5316 + t1659*t4173*t6269;
  p_output1(6)=t1102*t6868 + t6735*t6933;
  p_output1(7)=t6933*t7252 + t1102*t7419;
  p_output1(8)=t6933*t7629 + t1102*t7732;
}


       
Eigen::Matrix<double,3,3> R_FRfoot(const Eigen::Matrix<double,18,1> &var1)
//void R_FRfoot(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



