/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:13:48 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RR_thigh_joint.h"

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
  double t277;
  double t842;
  double t1043;
  double t942;
  double t1100;
  double t265;
  double t281;
  double t283;
  double t288;
  double t1739;
  double t1024;
  double t1102;
  double t1345;
  double t1745;
  double t1790;
  double t1868;
  double t1975;
  double t1976;
  double t1977;
  double t1980;
  double t1981;
  double t1982;
  double t1352;
  double t1957;
  double t1961;
  double t1979;
  double t1987;
  double t1988;
  double t1992;
  double t1993;
  double t1994;
  double t2000;
  double t2001;
  double t2342;
  double t282;
  double t1969;
  double t1972;
  double t3973;
  double t3979;
  double t4010;
  double t4017;
  double t4368;
  double t4382;
  double t4507;
  double t4564;
  double t4565;
  double t4884;
  double t2555;
  double t2757;
  double t3222;
  double t5165;
  double t5837;
  double t1973;
  double t1989;
  double t1990;
  double t3255;
  double t3379;
  double t3420;
  double t1991;
  double t1995;
  double t1999;
  t277 = Cos(var1[3]);
  t842 = Cos(var1[5]);
  t1043 = Sin(var1[3]);
  t942 = Sin(var1[4]);
  t1100 = Sin(var1[5]);
  t265 = Cos(var1[13]);
  t281 = Cos(var1[4]);
  t283 = Sin(var1[13]);
  t288 = Cos(var1[12]);
  t1739 = Sin(var1[12]);
  t1024 = t277*t842*t942;
  t1102 = t1043*t1100;
  t1345 = t1024 + t1102;
  t1745 = -1.*t842*t1043;
  t1790 = t277*t942*t1100;
  t1868 = t1745 + t1790;
  t1975 = t842*t1043*t942;
  t1976 = -1.*t277*t1100;
  t1977 = t1975 + t1976;
  t1980 = t277*t842;
  t1981 = t1043*t942*t1100;
  t1982 = t1980 + t1981;
  t1352 = t288*t1345;
  t1957 = -1.*t1739*t1868;
  t1961 = t1352 + t1957;
  t1979 = t288*t1977;
  t1987 = -1.*t1739*t1982;
  t1988 = t1979 + t1987;
  t1992 = t288*t281*t842;
  t1993 = -1.*t281*t1739*t1100;
  t1994 = t1992 + t1993;
  t2000 = t1739*t1345;
  t2001 = t288*t1868;
  t2342 = t2000 + t2001;
  t282 = t265*t277*t281;
  t1969 = -1.*t283*t1961;
  t1972 = t282 + t1969;
  t3973 = -1.*t265;
  t3979 = 1. + t3973;
  t4010 = -0.183*t3979;
  t4017 = 0. + t4010;
  t4368 = 0.047*t1739;
  t4382 = 0. + t4368;
  t4507 = -1.*t288;
  t4564 = 1. + t4507;
  t4565 = -0.047*t4564;
  t4884 = 0. + t4565;
  t2555 = t1739*t1977;
  t2757 = t288*t1982;
  t3222 = t2555 + t2757;
  t5165 = -0.183*t283;
  t5837 = 0. + t5165;
  t1973 = t265*t281*t1043;
  t1989 = -1.*t283*t1988;
  t1990 = t1973 + t1989;
  t3255 = t281*t842*t1739;
  t3379 = t288*t281*t1100;
  t3420 = t3255 + t3379;
  t1991 = -1.*t265*t942;
  t1995 = -1.*t283*t1994;
  t1999 = t1991 + t1995;

  p_output1(0)=t1972;
  p_output1(1)=t1990;
  p_output1(2)=t1999;
  p_output1(3)=0.;
  p_output1(4)=t2342;
  p_output1(5)=t3222;
  p_output1(6)=t3420;
  p_output1(7)=0.;
  p_output1(8)=t1961*t265 + t277*t281*t283;
  p_output1(9)=t1988*t265 + t1043*t281*t283;
  p_output1(10)=t1994*t265 - 1.*t283*t942;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.183*t1972 - 0.08953*t2342 + t277*t281*t4017 + t1345*t4382 + t1868*t4884 + t1961*t5837 + var1(0);
  p_output1(13)=0. - 0.183*t1990 - 0.08953*t3222 + t1043*t281*t4017 + t1977*t4382 + t1982*t4884 + t1988*t5837 + var1(1);
  p_output1(14)=0. - 0.183*t1999 - 0.08953*t3420 + t1100*t281*t4884 + t1994*t5837 + t281*t4382*t842 - 1.*t4017*t942 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_RR_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void H_RR_thigh_joint(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



