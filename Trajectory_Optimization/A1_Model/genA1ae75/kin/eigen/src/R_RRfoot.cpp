/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:52:04 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RRfoot.h"

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
  double t882;
  double t1519;
  double t2924;
  double t2527;
  double t3427;
  double t1241;
  double t896;
  double t1213;
  double t1245;
  double t2568;
  double t3441;
  double t3736;
  double t3741;
  double t3879;
  double t3987;
  double t4111;
  double t4117;
  double t4366;
  double t4658;
  double t453;
  double t4954;
  double t5626;
  double t5647;
  double t5648;
  double t5666;
  double t5687;
  double t5749;
  double t5757;
  double t5772;
  double t5783;
  double t5925;
  double t5932;
  double t5939;
  double t1238;
  double t4764;
  double t4856;
  double t5141;
  double t5326;
  double t5538;
  double t5608;
  double t5808;
  double t5819;
  double t5830;
  double t5838;
  double t5878;
  double t5923;
  double t5946;
  double t5950;
  double t5962;
  double t5967;
  double t5976;
  t882 = Cos(var1[3]);
  t1519 = Cos(var1[5]);
  t2924 = Sin(var1[3]);
  t2527 = Sin(var1[4]);
  t3427 = Sin(var1[5]);
  t1241 = Cos(var1[13]);
  t896 = Cos(var1[4]);
  t1213 = Sin(var1[13]);
  t1245 = Cos(var1[12]);
  t2568 = t882*t1519*t2527;
  t3441 = t2924*t3427;
  t3736 = t2568 + t3441;
  t3741 = t1245*t3736;
  t3879 = Sin(var1[12]);
  t3987 = -1.*t1519*t2924;
  t4111 = t882*t2527*t3427;
  t4117 = t3987 + t4111;
  t4366 = -1.*t3879*t4117;
  t4658 = t3741 + t4366;
  t453 = Sin(var1[14]);
  t4954 = Cos(var1[14]);
  t5626 = t1519*t2924*t2527;
  t5647 = -1.*t882*t3427;
  t5648 = t5626 + t5647;
  t5666 = t1245*t5648;
  t5687 = t882*t1519;
  t5749 = t2924*t2527*t3427;
  t5757 = t5687 + t5749;
  t5772 = -1.*t3879*t5757;
  t5783 = t5666 + t5772;
  t5925 = t1245*t896*t1519;
  t5932 = -1.*t896*t3879*t3427;
  t5939 = t5925 + t5932;
  t1238 = t882*t896*t1213;
  t4764 = t1241*t4658;
  t4856 = t1238 + t4764;
  t5141 = t1241*t882*t896;
  t5326 = -1.*t1213*t4658;
  t5538 = t5141 + t5326;
  t5608 = t896*t1213*t2924;
  t5808 = t1241*t5783;
  t5819 = t5608 + t5808;
  t5830 = t1241*t896*t2924;
  t5838 = -1.*t1213*t5783;
  t5878 = t5830 + t5838;
  t5923 = -1.*t1213*t2527;
  t5946 = t1241*t5939;
  t5950 = t5923 + t5946;
  t5962 = -1.*t1241*t2527;
  t5967 = -1.*t1213*t5939;
  t5976 = t5962 + t5967;

  p_output1(0)=-1.*t453*t4856 + t4954*t5538;
  p_output1(1)=-1.*t453*t5819 + t4954*t5878;
  p_output1(2)=-1.*t453*t5950 + t4954*t5976;
  p_output1(3)=t3736*t3879 + t1245*t4117;
  p_output1(4)=t3879*t5648 + t1245*t5757;
  p_output1(5)=t1245*t3427*t896 + t1519*t3879*t896;
  p_output1(6)=t4856*t4954 + t453*t5538;
  p_output1(7)=t4954*t5819 + t453*t5878;
  p_output1(8)=t4954*t5950 + t453*t5976;
}


       
Eigen::Matrix<double,3,3> R_RRfoot(const Eigen::Matrix<double,18,1> &var1)
//void R_RRfoot(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



