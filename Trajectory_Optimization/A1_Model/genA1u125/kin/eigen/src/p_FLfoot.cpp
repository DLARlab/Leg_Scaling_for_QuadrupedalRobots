/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:21:41 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FLfoot.h"

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
  double t1525;
  double t2017;
  double t3330;
  double t2883;
  double t3670;
  double t1647;
  double t2935;
  double t3771;
  double t3860;
  double t3922;
  double t4384;
  double t4459;
  double t4486;
  double t1604;
  double t5360;
  double t132;
  double t6062;
  double t6138;
  double t6213;
  double t6249;
  double t6331;
  double t6345;
  double t6412;
  double t6567;
  double t6587;
  double t6623;
  double t6785;
  double t6850;
  double t6866;
  double t490;
  double t1173;
  double t1353;
  double t1437;
  double t1683;
  double t1941;
  double t3947;
  double t3978;
  double t4142;
  double t4281;
  double t7014;
  double t7025;
  double t7031;
  double t7078;
  double t7086;
  double t7105;
  double t5565;
  double t5967;
  double t6377;
  double t6477;
  double t6562;
  double t7188;
  double t7213;
  double t7229;
  double t6726;
  double t6728;
  double t6758;
  double t7274;
  double t7279;
  double t7289;
  double t7332;
  double t7334;
  double t7417;
  double t7768;
  double t7781;
  double t7786;
  double t7876;
  double t7887;
  double t7926;
  double t7932;
  double t7943;
  double t7979;
  t1525 = Cos(var1[3]);
  t2017 = Cos(var1[5]);
  t3330 = Sin(var1[3]);
  t2883 = Sin(var1[4]);
  t3670 = Sin(var1[5]);
  t1647 = Sin(var1[9]);
  t2935 = t1525*t2017*t2883;
  t3771 = t3330*t3670;
  t3860 = t2935 + t3771;
  t3922 = Cos(var1[9]);
  t4384 = -1.*t2017*t3330;
  t4459 = t1525*t2883*t3670;
  t4486 = t4384 + t4459;
  t1604 = Cos(var1[4]);
  t5360 = Sin(var1[10]);
  t132 = Cos(var1[10]);
  t6062 = t3922*t3860;
  t6138 = -1.*t1647*t4486;
  t6213 = t6062 + t6138;
  t6249 = Cos(var1[11]);
  t6331 = -1.*t6249;
  t6345 = 1. + t6331;
  t6412 = Sin(var1[11]);
  t6567 = t1525*t1604*t5360;
  t6587 = t132*t6213;
  t6623 = t6567 + t6587;
  t6785 = t132*t1525*t1604;
  t6850 = -1.*t5360*t6213;
  t6866 = t6785 + t6850;
  t490 = -1.*t132;
  t1173 = 1. + t490;
  t1353 = 0.183*t1173;
  t1437 = 0. + t1353;
  t1683 = -0.047*t1647;
  t1941 = 0. + t1683;
  t3947 = -1.*t3922;
  t3978 = 1. + t3947;
  t4142 = 0.047*t3978;
  t4281 = 0. + t4142;
  t7014 = t2017*t3330*t2883;
  t7025 = -1.*t1525*t3670;
  t7031 = t7014 + t7025;
  t7078 = t1525*t2017;
  t7086 = t3330*t2883*t3670;
  t7105 = t7078 + t7086;
  t5565 = 0.183*t5360;
  t5967 = 0. + t5565;
  t6377 = -0.25*t6345;
  t6477 = 0.183*t6412;
  t6562 = 0. + t6377 + t6477;
  t7188 = t3922*t7031;
  t7213 = -1.*t1647*t7105;
  t7229 = t7188 + t7213;
  t6726 = 0.183*t6345;
  t6728 = 0.25*t6412;
  t6758 = 0. + t6726 + t6728;
  t7274 = t1604*t5360*t3330;
  t7279 = t132*t7229;
  t7289 = t7274 + t7279;
  t7332 = t132*t1604*t3330;
  t7334 = -1.*t5360*t7229;
  t7417 = t7332 + t7334;
  t7768 = t3922*t1604*t2017;
  t7781 = -1.*t1604*t1647*t3670;
  t7786 = t7768 + t7781;
  t7876 = -1.*t5360*t2883;
  t7887 = t132*t7786;
  t7926 = t7876 + t7887;
  t7932 = -1.*t132*t2883;
  t7943 = -1.*t5360*t7786;
  t7979 = t7932 + t7943;

  p_output1(0)=0. + t1437*t1525*t1604 + t1941*t3860 + t4281*t4486 + 0.15331*(t1647*t3860 + t3922*t4486) + t5967*t6213 + t6562*t6623 + t6758*t6866 + 0.183*(-1.*t6412*t6623 + t6249*t6866) - 0.5*(t6249*t6623 + t6412*t6866) + var1(0);
  p_output1(1)=0. + t1437*t1604*t3330 + t1941*t7031 + t4281*t7105 + 0.15331*(t1647*t7031 + t3922*t7105) + t5967*t7229 + t6562*t7289 + t6758*t7417 + 0.183*(-1.*t6412*t7289 + t6249*t7417) - 0.5*(t6249*t7289 + t6412*t7417) + var1(1);
  p_output1(2)=0. + t1604*t1941*t2017 - 1.*t1437*t2883 + 0.15331*(t1604*t1647*t2017 + t1604*t3670*t3922) + t1604*t3670*t4281 + t5967*t7786 + t6562*t7926 + t6758*t7979 + 0.183*(-1.*t6412*t7926 + t6249*t7979) - 0.5*(t6249*t7926 + t6412*t7979) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_FLfoot(const Eigen::Matrix<double,18,1> &var1)
//void p_FLfoot(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



