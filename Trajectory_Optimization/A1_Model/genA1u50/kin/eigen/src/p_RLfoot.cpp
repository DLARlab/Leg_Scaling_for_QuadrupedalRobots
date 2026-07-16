/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:14:05 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RLfoot.h"

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
  double t2857;
  double t3952;
  double t4829;
  double t4677;
  double t4833;
  double t3278;
  double t4682;
  double t5337;
  double t5391;
  double t5542;
  double t5648;
  double t5650;
  double t5652;
  double t2866;
  double t5754;
  double t953;
  double t5843;
  double t5868;
  double t5873;
  double t5884;
  double t5897;
  double t5900;
  double t5905;
  double t6060;
  double t6074;
  double t6079;
  double t6160;
  double t6166;
  double t6174;
  double t1000;
  double t2798;
  double t2829;
  double t2830;
  double t3426;
  double t3428;
  double t5544;
  double t5614;
  double t5617;
  double t5631;
  double t6361;
  double t6370;
  double t6373;
  double t6425;
  double t6461;
  double t6462;
  double t5777;
  double t5834;
  double t5904;
  double t5923;
  double t6049;
  double t6586;
  double t6591;
  double t6648;
  double t6137;
  double t6153;
  double t6158;
  double t6664;
  double t6666;
  double t6668;
  double t6729;
  double t6751;
  double t6791;
  double t7242;
  double t7255;
  double t7262;
  double t7308;
  double t7343;
  double t7346;
  double t7381;
  double t7394;
  double t7402;
  t2857 = Cos(var1[3]);
  t3952 = Cos(var1[5]);
  t4829 = Sin(var1[3]);
  t4677 = Sin(var1[4]);
  t4833 = Sin(var1[5]);
  t3278 = Sin(var1[15]);
  t4682 = t2857*t3952*t4677;
  t5337 = t4829*t4833;
  t5391 = t4682 + t5337;
  t5542 = Cos(var1[15]);
  t5648 = -1.*t3952*t4829;
  t5650 = t2857*t4677*t4833;
  t5652 = t5648 + t5650;
  t2866 = Cos(var1[4]);
  t5754 = Sin(var1[16]);
  t953 = Cos(var1[16]);
  t5843 = t5542*t5391;
  t5868 = -1.*t3278*t5652;
  t5873 = t5843 + t5868;
  t5884 = Cos(var1[17]);
  t5897 = -1.*t5884;
  t5900 = 1. + t5897;
  t5905 = Sin(var1[17]);
  t6060 = t2857*t2866*t5754;
  t6074 = t953*t5873;
  t6079 = t6060 + t6074;
  t6160 = t953*t2857*t2866;
  t6166 = -1.*t5754*t5873;
  t6174 = t6160 + t6166;
  t1000 = -1.*t953;
  t2798 = 1. + t1000;
  t2829 = -0.183*t2798;
  t2830 = 0. + t2829;
  t3426 = -0.047*t3278;
  t3428 = 0. + t3426;
  t5544 = -1.*t5542;
  t5614 = 1. + t5544;
  t5617 = 0.047*t5614;
  t5631 = 0. + t5617;
  t6361 = t3952*t4829*t4677;
  t6370 = -1.*t2857*t4833;
  t6373 = t6361 + t6370;
  t6425 = t2857*t3952;
  t6461 = t4829*t4677*t4833;
  t6462 = t6425 + t6461;
  t5777 = -0.183*t5754;
  t5834 = 0. + t5777;
  t5904 = -0.1*t5900;
  t5923 = -0.183*t5905;
  t6049 = 0. + t5904 + t5923;
  t6586 = t5542*t6373;
  t6591 = -1.*t3278*t6462;
  t6648 = t6586 + t6591;
  t6137 = -0.183*t5900;
  t6153 = 0.1*t5905;
  t6158 = 0. + t6137 + t6153;
  t6664 = t2866*t5754*t4829;
  t6666 = t953*t6648;
  t6668 = t6664 + t6666;
  t6729 = t953*t2866*t4829;
  t6751 = -1.*t5754*t6648;
  t6791 = t6729 + t6751;
  t7242 = t5542*t2866*t3952;
  t7255 = -1.*t2866*t3278*t4833;
  t7262 = t7242 + t7255;
  t7308 = -1.*t5754*t4677;
  t7343 = t953*t7262;
  t7346 = t7308 + t7343;
  t7381 = -1.*t953*t4677;
  t7394 = -1.*t5754*t7262;
  t7402 = t7381 + t7394;

  p_output1(0)=0. + t2830*t2857*t2866 + t3428*t5391 + t5631*t5652 + 0.08953*(t3278*t5391 + t5542*t5652) + t5834*t5873 + t6049*t6079 + t6158*t6174 - 0.183*(-1.*t5905*t6079 + t5884*t6174) - 0.2*(t5884*t6079 + t5905*t6174) + var1(0);
  p_output1(1)=0. + t2830*t2866*t4829 + t3428*t6373 + t5631*t6462 + 0.08953*(t3278*t6373 + t5542*t6462) + t5834*t6648 + t6049*t6668 + t6158*t6791 - 0.183*(-1.*t5905*t6668 + t5884*t6791) - 0.2*(t5884*t6668 + t5905*t6791) + var1(1);
  p_output1(2)=0. + t2866*t3428*t3952 - 1.*t2830*t4677 + 0.08953*(t2866*t3278*t3952 + t2866*t4833*t5542) + t2866*t4833*t5631 + t5834*t7262 + t6049*t7346 + t6158*t7402 - 0.183*(-1.*t5905*t7346 + t5884*t7402) - 0.2*(t5884*t7346 + t5905*t7402) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_RLfoot(const Eigen::Matrix<double,18,1> &var1)
//void p_RLfoot(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



