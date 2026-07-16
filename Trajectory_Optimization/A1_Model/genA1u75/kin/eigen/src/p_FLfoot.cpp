/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:19:08 GMT-05:00
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
  double t1159;
  double t3446;
  double t4658;
  double t3614;
  double t4664;
  double t2960;
  double t4320;
  double t4839;
  double t4919;
  double t5681;
  double t6928;
  double t6933;
  double t6987;
  double t2223;
  double t7090;
  double t230;
  double t7123;
  double t7134;
  double t7151;
  double t7260;
  double t7303;
  double t7313;
  double t7319;
  double t7377;
  double t7410;
  double t7411;
  double t7595;
  double t7637;
  double t7651;
  double t395;
  double t860;
  double t1013;
  double t1124;
  double t3045;
  double t3238;
  double t6282;
  double t6550;
  double t6689;
  double t6749;
  double t7835;
  double t7837;
  double t7854;
  double t7864;
  double t7870;
  double t7903;
  double t7099;
  double t7100;
  double t7314;
  double t7351;
  double t7358;
  double t8020;
  double t8046;
  double t8061;
  double t7479;
  double t7491;
  double t7576;
  double t8067;
  double t8068;
  double t8075;
  double t8175;
  double t8178;
  double t8179;
  double t8470;
  double t8485;
  double t8527;
  double t8555;
  double t8578;
  double t8646;
  double t8658;
  double t8677;
  double t8685;
  t1159 = Cos(var1[3]);
  t3446 = Cos(var1[5]);
  t4658 = Sin(var1[3]);
  t3614 = Sin(var1[4]);
  t4664 = Sin(var1[5]);
  t2960 = Sin(var1[9]);
  t4320 = t1159*t3446*t3614;
  t4839 = t4658*t4664;
  t4919 = t4320 + t4839;
  t5681 = Cos(var1[9]);
  t6928 = -1.*t3446*t4658;
  t6933 = t1159*t3614*t4664;
  t6987 = t6928 + t6933;
  t2223 = Cos(var1[4]);
  t7090 = Sin(var1[10]);
  t230 = Cos(var1[10]);
  t7123 = t5681*t4919;
  t7134 = -1.*t2960*t6987;
  t7151 = t7123 + t7134;
  t7260 = Cos(var1[11]);
  t7303 = -1.*t7260;
  t7313 = 1. + t7303;
  t7319 = Sin(var1[11]);
  t7377 = t1159*t2223*t7090;
  t7410 = t230*t7151;
  t7411 = t7377 + t7410;
  t7595 = t230*t1159*t2223;
  t7637 = -1.*t7090*t7151;
  t7651 = t7595 + t7637;
  t395 = -1.*t230;
  t860 = 1. + t395;
  t1013 = 0.183*t860;
  t1124 = 0. + t1013;
  t3045 = -0.047*t2960;
  t3238 = 0. + t3045;
  t6282 = -1.*t5681;
  t6550 = 1. + t6282;
  t6689 = 0.047*t6550;
  t6749 = 0. + t6689;
  t7835 = t3446*t4658*t3614;
  t7837 = -1.*t1159*t4664;
  t7854 = t7835 + t7837;
  t7864 = t1159*t3446;
  t7870 = t4658*t3614*t4664;
  t7903 = t7864 + t7870;
  t7099 = 0.183*t7090;
  t7100 = 0. + t7099;
  t7314 = -0.15*t7313;
  t7351 = 0.183*t7319;
  t7358 = 0. + t7314 + t7351;
  t8020 = t5681*t7854;
  t8046 = -1.*t2960*t7903;
  t8061 = t8020 + t8046;
  t7479 = 0.183*t7313;
  t7491 = 0.15*t7319;
  t7576 = 0. + t7479 + t7491;
  t8067 = t2223*t7090*t4658;
  t8068 = t230*t8061;
  t8075 = t8067 + t8068;
  t8175 = t230*t2223*t4658;
  t8178 = -1.*t7090*t8061;
  t8179 = t8175 + t8178;
  t8470 = t5681*t2223*t3446;
  t8485 = -1.*t2223*t2960*t4664;
  t8527 = t8470 + t8485;
  t8555 = -1.*t7090*t3614;
  t8578 = t230*t8527;
  t8646 = t8555 + t8578;
  t8658 = -1.*t230*t3614;
  t8677 = -1.*t7090*t8527;
  t8685 = t8658 + t8677;

  p_output1(0)=0. + t1124*t1159*t2223 + t3238*t4919 + t6749*t6987 + 0.11079*(t2960*t4919 + t5681*t6987) + t7100*t7151 + t7358*t7411 + t7576*t7651 + 0.183*(-1.*t7319*t7411 + t7260*t7651) - 0.3*(t7260*t7411 + t7319*t7651) + var1(0);
  p_output1(1)=0. + t1124*t2223*t4658 + t3238*t7854 + t6749*t7903 + 0.11079*(t2960*t7854 + t5681*t7903) + t7100*t8061 + t7358*t8075 + t7576*t8179 + 0.183*(-1.*t7319*t8075 + t7260*t8179) - 0.3*(t7260*t8075 + t7319*t8179) + var1(1);
  p_output1(2)=0. + t2223*t3238*t3446 - 1.*t1124*t3614 + 0.11079*(t2223*t2960*t3446 + t2223*t4664*t5681) + t2223*t4664*t6749 + t7100*t8527 + t7358*t8646 + t7576*t8685 + 0.183*(-1.*t7319*t8646 + t7260*t8685) - 0.3*(t7260*t8646 + t7319*t8685) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_FLfoot(const Eigen::Matrix<double,18,1> &var1)
//void p_FLfoot(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



