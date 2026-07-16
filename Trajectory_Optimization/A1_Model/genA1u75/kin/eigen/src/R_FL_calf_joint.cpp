/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:18:52 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_FL_calf_joint.h"

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
  double t961;
  double t3289;
  double t5164;
  double t4507;
  double t5174;
  double t3114;
  double t965;
  double t966;
  double t3171;
  double t4976;
  double t5429;
  double t5693;
  double t5713;
  double t5809;
  double t5907;
  double t5947;
  double t5994;
  double t6029;
  double t6114;
  double t288;
  double t6267;
  double t6699;
  double t6732;
  double t6733;
  double t6754;
  double t6765;
  double t6769;
  double t6798;
  double t6809;
  double t6912;
  double t7390;
  double t7409;
  double t7414;
  double t2778;
  double t6160;
  double t6199;
  double t6270;
  double t6316;
  double t6329;
  double t6464;
  double t7089;
  double t7135;
  double t7241;
  double t7299;
  double t7300;
  double t7363;
  double t7452;
  double t7466;
  double t7520;
  double t7521;
  double t7523;
  t961 = Cos(var1[3]);
  t3289 = Cos(var1[5]);
  t5164 = Sin(var1[3]);
  t4507 = Sin(var1[4]);
  t5174 = Sin(var1[5]);
  t3114 = Cos(var1[10]);
  t965 = Cos(var1[4]);
  t966 = Sin(var1[10]);
  t3171 = Cos(var1[9]);
  t4976 = t961*t3289*t4507;
  t5429 = t5164*t5174;
  t5693 = t4976 + t5429;
  t5713 = t3171*t5693;
  t5809 = Sin(var1[9]);
  t5907 = -1.*t3289*t5164;
  t5947 = t961*t4507*t5174;
  t5994 = t5907 + t5947;
  t6029 = -1.*t5809*t5994;
  t6114 = t5713 + t6029;
  t288 = Sin(var1[11]);
  t6267 = Cos(var1[11]);
  t6699 = t3289*t5164*t4507;
  t6732 = -1.*t961*t5174;
  t6733 = t6699 + t6732;
  t6754 = t3171*t6733;
  t6765 = t961*t3289;
  t6769 = t5164*t4507*t5174;
  t6798 = t6765 + t6769;
  t6809 = -1.*t5809*t6798;
  t6912 = t6754 + t6809;
  t7390 = t3171*t965*t3289;
  t7409 = -1.*t965*t5809*t5174;
  t7414 = t7390 + t7409;
  t2778 = t961*t965*t966;
  t6160 = t3114*t6114;
  t6199 = t2778 + t6160;
  t6270 = t3114*t961*t965;
  t6316 = -1.*t966*t6114;
  t6329 = t6270 + t6316;
  t6464 = t965*t966*t5164;
  t7089 = t3114*t6912;
  t7135 = t6464 + t7089;
  t7241 = t3114*t965*t5164;
  t7299 = -1.*t966*t6912;
  t7300 = t7241 + t7299;
  t7363 = -1.*t966*t4507;
  t7452 = t3114*t7414;
  t7466 = t7363 + t7452;
  t7520 = -1.*t3114*t4507;
  t7521 = -1.*t966*t7414;
  t7523 = t7520 + t7521;

  p_output1(0)=-1.*t288*t6199 + t6267*t6329;
  p_output1(1)=-1.*t288*t7135 + t6267*t7300;
  p_output1(2)=-1.*t288*t7466 + t6267*t7523;
  p_output1(3)=t5693*t5809 + t3171*t5994;
  p_output1(4)=t5809*t6733 + t3171*t6798;
  p_output1(5)=t3171*t5174*t965 + t3289*t5809*t965;
  p_output1(6)=t6199*t6267 + t288*t6329;
  p_output1(7)=t6267*t7135 + t288*t7300;
  p_output1(8)=t6267*t7466 + t288*t7523;
}


       
Eigen::Matrix<double,3,3> R_FL_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_FL_calf_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



