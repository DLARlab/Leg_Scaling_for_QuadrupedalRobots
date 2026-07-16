/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:26:58 GMT-05:00
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
  double t557;
  double t1379;
  double t1810;
  double t1705;
  double t1844;
  double t1013;
  double t1707;
  double t1852;
  double t1940;
  double t2358;
  double t3105;
  double t3197;
  double t3317;
  double t858;
  double t3965;
  double t77;
  double t4522;
  double t4683;
  double t4736;
  double t4961;
  double t4998;
  double t5046;
  double t5162;
  double t5357;
  double t5378;
  double t5394;
  double t5495;
  double t5503;
  double t5533;
  double t387;
  double t400;
  double t471;
  double t527;
  double t1243;
  double t1344;
  double t2428;
  double t2831;
  double t2835;
  double t3092;
  double t5810;
  double t5813;
  double t5821;
  double t5825;
  double t5827;
  double t5855;
  double t4194;
  double t4417;
  double t5119;
  double t5241;
  double t5251;
  double t5971;
  double t5975;
  double t5985;
  double t5462;
  double t5480;
  double t5488;
  double t6039;
  double t6093;
  double t6103;
  double t6152;
  double t6175;
  double t6292;
  double t6674;
  double t6682;
  double t6691;
  double t6790;
  double t6799;
  double t6897;
  double t6917;
  double t6953;
  double t6966;
  t557 = Cos(var1[3]);
  t1379 = Cos(var1[5]);
  t1810 = Sin(var1[3]);
  t1705 = Sin(var1[4]);
  t1844 = Sin(var1[5]);
  t1013 = Sin(var1[9]);
  t1707 = t557*t1379*t1705;
  t1852 = t1810*t1844;
  t1940 = t1707 + t1852;
  t2358 = Cos(var1[9]);
  t3105 = -1.*t1379*t1810;
  t3197 = t557*t1705*t1844;
  t3317 = t3105 + t3197;
  t858 = Cos(var1[4]);
  t3965 = Sin(var1[10]);
  t77 = Cos(var1[10]);
  t4522 = t2358*t1940;
  t4683 = -1.*t1013*t3317;
  t4736 = t4522 + t4683;
  t4961 = Cos(var1[11]);
  t4998 = -1.*t4961;
  t5046 = 1. + t4998;
  t5162 = Sin(var1[11]);
  t5357 = t557*t858*t3965;
  t5378 = t77*t4736;
  t5394 = t5357 + t5378;
  t5495 = t77*t557*t858;
  t5503 = -1.*t3965*t4736;
  t5533 = t5495 + t5503;
  t387 = -1.*t77;
  t400 = 1. + t387;
  t471 = 0.183*t400;
  t527 = 0. + t471;
  t1243 = -0.047*t1013;
  t1344 = 0. + t1243;
  t2428 = -1.*t2358;
  t2831 = 1. + t2428;
  t2835 = 0.047*t2831;
  t3092 = 0. + t2835;
  t5810 = t1379*t1810*t1705;
  t5813 = -1.*t557*t1844;
  t5821 = t5810 + t5813;
  t5825 = t557*t1379;
  t5827 = t1810*t1705*t1844;
  t5855 = t5825 + t5827;
  t4194 = 0.183*t3965;
  t4417 = 0. + t4194;
  t5119 = -0.3*t5046;
  t5241 = 0.183*t5162;
  t5251 = 0. + t5119 + t5241;
  t5971 = t2358*t5821;
  t5975 = -1.*t1013*t5855;
  t5985 = t5971 + t5975;
  t5462 = 0.183*t5046;
  t5480 = 0.3*t5162;
  t5488 = 0. + t5462 + t5480;
  t6039 = t858*t3965*t1810;
  t6093 = t77*t5985;
  t6103 = t6039 + t6093;
  t6152 = t77*t858*t1810;
  t6175 = -1.*t3965*t5985;
  t6292 = t6152 + t6175;
  t6674 = t2358*t858*t1379;
  t6682 = -1.*t858*t1013*t1844;
  t6691 = t6674 + t6682;
  t6790 = -1.*t3965*t1705;
  t6799 = t77*t6691;
  t6897 = t6790 + t6799;
  t6917 = -1.*t77*t1705;
  t6953 = -1.*t3965*t6691;
  t6966 = t6917 + t6953;

  p_output1(0)=0. + t1344*t1940 + t3092*t3317 + 0.17458*(t1013*t1940 + t2358*t3317) + t4417*t4736 + t5251*t5394 + t5488*t5533 + 0.183*(-1.*t5162*t5394 + t4961*t5533) - 0.6*(t4961*t5394 + t5162*t5533) + t527*t557*t858 + var1(0);
  p_output1(1)=0. + t1344*t5821 + t3092*t5855 + 0.17458*(t1013*t5821 + t2358*t5855) + t4417*t5985 + t5251*t6103 + t5488*t6292 + 0.183*(-1.*t5162*t6103 + t4961*t6292) - 0.6*(t4961*t6103 + t5162*t6292) + t1810*t527*t858 + var1(1);
  p_output1(2)=0. - 1.*t1705*t527 + t4417*t6691 + t5251*t6897 + t5488*t6966 + 0.183*(-1.*t5162*t6897 + t4961*t6966) - 0.6*(t4961*t6897 + t5162*t6966) + t1344*t1379*t858 + t1844*t3092*t858 + 0.17458*(t1013*t1379*t858 + t1844*t2358*t858) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_FLfoot(const Eigen::Matrix<double,18,1> &var1)
//void p_FLfoot(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



