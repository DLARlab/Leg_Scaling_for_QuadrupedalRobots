/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:13:46 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RR_thigh_joint.h"

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
  double t3075;
  double t5012;
  double t5386;
  double t5367;
  double t5474;
  double t3797;
  double t5368;
  double t5506;
  double t5513;
  double t5632;
  double t6254;
  double t6277;
  double t6343;
  double t1038;
  double t3133;
  double t7630;
  double t8656;
  double t8659;
  double t8662;
  double t1522;
  double t1746;
  double t1805;
  double t1963;
  double t3802;
  double t4057;
  double t5888;
  double t5941;
  double t6000;
  double t6144;
  double t8749;
  double t8751;
  double t8758;
  double t8771;
  double t8772;
  double t8775;
  double t8643;
  double t8646;
  double t8791;
  double t8797;
  double t8799;
  double t8825;
  double t8826;
  double t8828;
  t3075 = Cos(var1[3]);
  t5012 = Cos(var1[5]);
  t5386 = Sin(var1[3]);
  t5367 = Sin(var1[4]);
  t5474 = Sin(var1[5]);
  t3797 = Sin(var1[12]);
  t5368 = t3075*t5012*t5367;
  t5506 = t5386*t5474;
  t5513 = t5368 + t5506;
  t5632 = Cos(var1[12]);
  t6254 = -1.*t5012*t5386;
  t6277 = t3075*t5367*t5474;
  t6343 = t6254 + t6277;
  t1038 = Cos(var1[13]);
  t3133 = Cos(var1[4]);
  t7630 = Sin(var1[13]);
  t8656 = t5632*t5513;
  t8659 = -1.*t3797*t6343;
  t8662 = t8656 + t8659;
  t1522 = -1.*t1038;
  t1746 = 1. + t1522;
  t1805 = -0.183*t1746;
  t1963 = 0. + t1805;
  t3802 = 0.047*t3797;
  t4057 = 0. + t3802;
  t5888 = -1.*t5632;
  t5941 = 1. + t5888;
  t6000 = -0.047*t5941;
  t6144 = 0. + t6000;
  t8749 = t5012*t5386*t5367;
  t8751 = -1.*t3075*t5474;
  t8758 = t8749 + t8751;
  t8771 = t3075*t5012;
  t8772 = t5386*t5367*t5474;
  t8775 = t8771 + t8772;
  t8643 = -0.183*t7630;
  t8646 = 0. + t8643;
  t8791 = t5632*t8758;
  t8797 = -1.*t3797*t8775;
  t8799 = t8791 + t8797;
  t8825 = t5632*t3133*t5012;
  t8826 = -1.*t3133*t3797*t5474;
  t8828 = t8825 + t8826;

  p_output1(0)=0. + t1963*t3075*t3133 + t4057*t5513 + t6144*t6343 - 0.08953*(t3797*t5513 + t5632*t6343) + t8646*t8662 - 0.183*(t1038*t3075*t3133 - 1.*t7630*t8662) + var1(0);
  p_output1(1)=0. + t1963*t3133*t5386 + t4057*t8758 + t6144*t8775 - 0.08953*(t3797*t8758 + t5632*t8775) + t8646*t8799 - 0.183*(t1038*t3133*t5386 - 1.*t7630*t8799) + var1(1);
  p_output1(2)=0. + t3133*t4057*t5012 - 1.*t1963*t5367 - 0.08953*(t3133*t3797*t5012 + t3133*t5474*t5632) + t3133*t5474*t6144 + t8646*t8828 - 0.183*(-1.*t1038*t5367 - 1.*t7630*t8828) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_RR_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_RR_thigh_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



