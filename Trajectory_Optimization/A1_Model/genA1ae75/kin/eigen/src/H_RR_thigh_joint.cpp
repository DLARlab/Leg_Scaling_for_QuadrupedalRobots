/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:51:47 GMT-05:00
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
  double t349;
  double t1324;
  double t1979;
  double t1773;
  double t2323;
  double t232;
  double t674;
  double t1150;
  double t1222;
  double t2594;
  double t1809;
  double t2341;
  double t2344;
  double t2603;
  double t2702;
  double t3236;
  double t4193;
  double t4220;
  double t4642;
  double t4728;
  double t4730;
  double t4780;
  double t2567;
  double t3519;
  double t3573;
  double t4698;
  double t4899;
  double t4972;
  double t5579;
  double t5696;
  double t5766;
  double t6293;
  double t6298;
  double t6398;
  double t901;
  double t3901;
  double t3999;
  double t9131;
  double t9139;
  double t9151;
  double t9153;
  double t9163;
  double t9169;
  double t9178;
  double t9181;
  double t9187;
  double t9207;
  double t6501;
  double t6648;
  double t6806;
  double t9233;
  double t9243;
  double t4087;
  double t5064;
  double t5076;
  double t7194;
  double t7224;
  double t7253;
  double t5532;
  double t6183;
  double t6205;
  t349 = Cos(var1[3]);
  t1324 = Cos(var1[5]);
  t1979 = Sin(var1[3]);
  t1773 = Sin(var1[4]);
  t2323 = Sin(var1[5]);
  t232 = Cos(var1[13]);
  t674 = Cos(var1[4]);
  t1150 = Sin(var1[13]);
  t1222 = Cos(var1[12]);
  t2594 = Sin(var1[12]);
  t1809 = t349*t1324*t1773;
  t2341 = t1979*t2323;
  t2344 = t1809 + t2341;
  t2603 = -1.*t1324*t1979;
  t2702 = t349*t1773*t2323;
  t3236 = t2603 + t2702;
  t4193 = t1324*t1979*t1773;
  t4220 = -1.*t349*t2323;
  t4642 = t4193 + t4220;
  t4728 = t349*t1324;
  t4730 = t1979*t1773*t2323;
  t4780 = t4728 + t4730;
  t2567 = t1222*t2344;
  t3519 = -1.*t2594*t3236;
  t3573 = t2567 + t3519;
  t4698 = t1222*t4642;
  t4899 = -1.*t2594*t4780;
  t4972 = t4698 + t4899;
  t5579 = t1222*t674*t1324;
  t5696 = -1.*t674*t2594*t2323;
  t5766 = t5579 + t5696;
  t6293 = t2594*t2344;
  t6298 = t1222*t3236;
  t6398 = t6293 + t6298;
  t901 = t232*t349*t674;
  t3901 = -1.*t1150*t3573;
  t3999 = t901 + t3901;
  t9131 = -1.*t232;
  t9139 = 1. + t9131;
  t9151 = -0.183*t9139;
  t9153 = 0. + t9151;
  t9163 = 0.047*t2594;
  t9169 = 0. + t9163;
  t9178 = -1.*t1222;
  t9181 = 1. + t9178;
  t9187 = -0.047*t9181;
  t9207 = 0. + t9187;
  t6501 = t2594*t4642;
  t6648 = t1222*t4780;
  t6806 = t6501 + t6648;
  t9233 = -0.183*t1150;
  t9243 = 0. + t9233;
  t4087 = t232*t674*t1979;
  t5064 = -1.*t1150*t4972;
  t5076 = t4087 + t5064;
  t7194 = t674*t1324*t2594;
  t7224 = t1222*t674*t2323;
  t7253 = t7194 + t7224;
  t5532 = -1.*t232*t1773;
  t6183 = -1.*t1150*t5766;
  t6205 = t5532 + t6183;

  p_output1(0)=t3999;
  p_output1(1)=t5076;
  p_output1(2)=t6205;
  p_output1(3)=0.;
  p_output1(4)=t6398;
  p_output1(5)=t6806;
  p_output1(6)=t7253;
  p_output1(7)=0.;
  p_output1(8)=t232*t3573 + t1150*t349*t674;
  p_output1(9)=t232*t4972 + t1150*t1979*t674;
  p_output1(10)=-1.*t1150*t1773 + t232*t5766;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.183*t3999 - 0.13205*t6398 + t349*t674*t9153 + t2344*t9169 + t3236*t9207 + t3573*t9243 + var1(0);
  p_output1(13)=0. - 0.183*t5076 - 0.13205*t6806 + t1979*t674*t9153 + t4642*t9169 + t4780*t9207 + t4972*t9243 + var1(1);
  p_output1(14)=0. - 0.183*t6205 - 0.13205*t7253 - 1.*t1773*t9153 + t1324*t674*t9169 + t2323*t674*t9207 + t5766*t9243 + var1(2);
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



