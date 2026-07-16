/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:04:13 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FR_calf_joint.h"

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
  double t264;
  double t1632;
  double t1757;
  double t1673;
  double t1861;
  double t1340;
  double t1749;
  double t1873;
  double t1908;
  double t2141;
  double t2535;
  double t2780;
  double t2943;
  double t563;
  double t4680;
  double t4832;
  double t5290;
  double t330;
  double t5315;
  double t5681;
  double t5692;
  double t5723;
  double t5756;
  double t5837;
  double t5843;
  double t5858;
  double t5484;
  double t5592;
  double t5674;
  double t672;
  double t686;
  double t870;
  double t925;
  double t1393;
  double t1596;
  double t1601;
  double t1618;
  double t2959;
  double t3223;
  double t6831;
  double t6893;
  double t6900;
  double t7025;
  double t7058;
  double t7086;
  double t5321;
  double t5421;
  double t7219;
  double t7251;
  double t7329;
  double t5736;
  double t5786;
  double t5805;
  double t5940;
  double t5948;
  double t5975;
  double t7722;
  double t8013;
  double t8040;
  double t7397;
  double t7400;
  double t7548;
  double t9387;
  double t9426;
  double t9428;
  double t9491;
  double t9539;
  double t9544;
  double t9447;
  double t9453;
  double t9462;
  t264 = Cos(var1[3]);
  t1632 = Cos(var1[5]);
  t1757 = Sin(var1[4]);
  t1673 = Sin(var1[3]);
  t1861 = Sin(var1[5]);
  t1340 = Cos(var1[6]);
  t1749 = -1.*t1632*t1673;
  t1873 = t264*t1757*t1861;
  t1908 = t1749 + t1873;
  t2141 = t264*t1632*t1757;
  t2535 = t1673*t1861;
  t2780 = t2141 + t2535;
  t2943 = Sin(var1[6]);
  t563 = Cos(var1[7]);
  t4680 = t1340*t2780;
  t4832 = -1.*t1908*t2943;
  t5290 = t4680 + t4832;
  t330 = Cos(var1[4]);
  t5315 = Sin(var1[7]);
  t5681 = Cos(var1[8]);
  t5692 = -1.*t5681;
  t5723 = 1. + t5692;
  t5756 = Sin(var1[8]);
  t5837 = t264*t330*t563;
  t5843 = -1.*t5290*t5315;
  t5858 = t5837 + t5843;
  t5484 = t563*t5290;
  t5592 = t264*t330*t5315;
  t5674 = t5484 + t5592;
  t672 = -1.*t563;
  t686 = 1. + t672;
  t870 = 0.183*t686;
  t925 = 0. + t870;
  t1393 = -1.*t1340;
  t1596 = 1. + t1393;
  t1601 = -0.047*t1596;
  t1618 = 0. + t1601;
  t2959 = 0.047*t2943;
  t3223 = 0. + t2959;
  t6831 = t264*t1632;
  t6893 = t1673*t1757*t1861;
  t6900 = t6831 + t6893;
  t7025 = t1632*t1673*t1757;
  t7058 = -1.*t264*t1861;
  t7086 = t7025 + t7058;
  t5321 = 0.183*t5315;
  t5421 = 0. + t5321;
  t7219 = t1340*t7086;
  t7251 = -1.*t6900*t2943;
  t7329 = t7219 + t7251;
  t5736 = -0.25*t5723;
  t5786 = 0.183*t5756;
  t5805 = 0. + t5736 + t5786;
  t5940 = 0.183*t5723;
  t5948 = 0.25*t5756;
  t5975 = 0. + t5940 + t5948;
  t7722 = t330*t563*t1673;
  t8013 = -1.*t7329*t5315;
  t8040 = t7722 + t8013;
  t7397 = t563*t7329;
  t7400 = t330*t1673*t5315;
  t7548 = t7397 + t7400;
  t9387 = t330*t1632*t1340;
  t9426 = -1.*t330*t1861*t2943;
  t9428 = t9387 + t9426;
  t9491 = -1.*t563*t1757;
  t9539 = -1.*t9428*t5315;
  t9544 = t9491 + t9539;
  t9447 = t563*t9428;
  t9453 = -1.*t1757*t5315;
  t9462 = t9447 + t9453;

  p_output1(0)=0. + t1618*t1908 - 0.13205*(t1340*t1908 + t2780*t2943) + t2780*t3223 + t5290*t5421 + t5674*t5805 + 0.183*(-1.*t5674*t5756 + t5681*t5858) - 0.25*(t5674*t5681 + t5756*t5858) + t5858*t5975 + t264*t330*t925 + var1(0);
  p_output1(1)=0. + t1618*t6900 + t3223*t7086 - 0.13205*(t1340*t6900 + t2943*t7086) + t5421*t7329 + t5805*t7548 + t5975*t8040 + 0.183*(-1.*t5756*t7548 + t5681*t8040) - 0.25*(t5681*t7548 + t5756*t8040) + t1673*t330*t925 + var1(1);
  p_output1(2)=0. + t1618*t1861*t330 + t1632*t3223*t330 - 0.13205*(t1340*t1861*t330 + t1632*t2943*t330) - 1.*t1757*t925 + t5421*t9428 + t5805*t9462 + t5975*t9544 + 0.183*(-1.*t5756*t9462 + t5681*t9544) - 0.25*(t5681*t9462 + t5756*t9544) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_FR_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_FR_calf_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



