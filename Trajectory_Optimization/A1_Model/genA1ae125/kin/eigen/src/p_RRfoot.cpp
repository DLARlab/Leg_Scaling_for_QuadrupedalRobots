/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:04:46 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RRfoot.h"

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
  double t1018;
  double t2249;
  double t3372;
  double t2689;
  double t4037;
  double t1115;
  double t3318;
  double t4842;
  double t5370;
  double t5657;
  double t5780;
  double t5827;
  double t5840;
  double t1029;
  double t5978;
  double t281;
  double t6093;
  double t6185;
  double t6219;
  double t6243;
  double t6251;
  double t6267;
  double t6383;
  double t6453;
  double t6474;
  double t6515;
  double t6655;
  double t6667;
  double t6710;
  double t584;
  double t820;
  double t956;
  double t1015;
  double t1289;
  double t1646;
  double t5671;
  double t5715;
  double t5742;
  double t5765;
  double t6933;
  double t6936;
  double t6991;
  double t7054;
  double t7065;
  double t7081;
  double t5998;
  double t6053;
  double t6355;
  double t6395;
  double t6436;
  double t7277;
  double t7292;
  double t7295;
  double t6542;
  double t6566;
  double t6606;
  double t7342;
  double t7344;
  double t7347;
  double t7364;
  double t7368;
  double t7372;
  double t7589;
  double t7591;
  double t7595;
  double t7634;
  double t7658;
  double t7666;
  double t7693;
  double t7695;
  double t7701;
  t1018 = Cos(var1[3]);
  t2249 = Cos(var1[5]);
  t3372 = Sin(var1[3]);
  t2689 = Sin(var1[4]);
  t4037 = Sin(var1[5]);
  t1115 = Sin(var1[12]);
  t3318 = t1018*t2249*t2689;
  t4842 = t3372*t4037;
  t5370 = t3318 + t4842;
  t5657 = Cos(var1[12]);
  t5780 = -1.*t2249*t3372;
  t5827 = t1018*t2689*t4037;
  t5840 = t5780 + t5827;
  t1029 = Cos(var1[4]);
  t5978 = Sin(var1[13]);
  t281 = Cos(var1[13]);
  t6093 = t5657*t5370;
  t6185 = -1.*t1115*t5840;
  t6219 = t6093 + t6185;
  t6243 = Cos(var1[14]);
  t6251 = -1.*t6243;
  t6267 = 1. + t6251;
  t6383 = Sin(var1[14]);
  t6453 = t1018*t1029*t5978;
  t6474 = t281*t6219;
  t6515 = t6453 + t6474;
  t6655 = t281*t1018*t1029;
  t6667 = -1.*t5978*t6219;
  t6710 = t6655 + t6667;
  t584 = -1.*t281;
  t820 = 1. + t584;
  t956 = -0.183*t820;
  t1015 = 0. + t956;
  t1289 = 0.047*t1115;
  t1646 = 0. + t1289;
  t5671 = -1.*t5657;
  t5715 = 1. + t5671;
  t5742 = -0.047*t5715;
  t5765 = 0. + t5742;
  t6933 = t2249*t3372*t2689;
  t6936 = -1.*t1018*t4037;
  t6991 = t6933 + t6936;
  t7054 = t1018*t2249;
  t7065 = t3372*t2689*t4037;
  t7081 = t7054 + t7065;
  t5998 = -0.183*t5978;
  t6053 = 0. + t5998;
  t6355 = -0.25*t6267;
  t6395 = -0.183*t6383;
  t6436 = 0. + t6355 + t6395;
  t7277 = t5657*t6991;
  t7292 = -1.*t1115*t7081;
  t7295 = t7277 + t7292;
  t6542 = -0.183*t6267;
  t6566 = 0.25*t6383;
  t6606 = 0. + t6542 + t6566;
  t7342 = t1029*t5978*t3372;
  t7344 = t281*t7295;
  t7347 = t7342 + t7344;
  t7364 = t281*t1029*t3372;
  t7368 = -1.*t5978*t7295;
  t7372 = t7364 + t7368;
  t7589 = t5657*t1029*t2249;
  t7591 = -1.*t1029*t1115*t4037;
  t7595 = t7589 + t7591;
  t7634 = -1.*t5978*t2689;
  t7658 = t281*t7595;
  t7666 = t7634 + t7658;
  t7693 = -1.*t281*t2689;
  t7695 = -1.*t5978*t7595;
  t7701 = t7693 + t7695;

  p_output1(0)=0. + t1015*t1018*t1029 + t1646*t5370 + t5765*t5840 - 0.13205*(t1115*t5370 + t5657*t5840) + t6053*t6219 + t6436*t6515 + t6606*t6710 - 0.183*(-1.*t6383*t6515 + t6243*t6710) - 0.5*(t6243*t6515 + t6383*t6710) + var1(0);
  p_output1(1)=0. + t1015*t1029*t3372 + t1646*t6991 + t5765*t7081 - 0.13205*(t1115*t6991 + t5657*t7081) + t6053*t7295 + t6436*t7347 + t6606*t7372 - 0.183*(-1.*t6383*t7347 + t6243*t7372) - 0.5*(t6243*t7347 + t6383*t7372) + var1(1);
  p_output1(2)=0. + t1029*t1646*t2249 - 1.*t1015*t2689 - 0.13205*(t1029*t1115*t2249 + t1029*t4037*t5657) + t1029*t4037*t5765 + t6053*t7595 + t6436*t7666 + t6606*t7701 - 0.183*(-1.*t6383*t7666 + t6243*t7701) - 0.5*(t6243*t7666 + t6383*t7701) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_RRfoot(const Eigen::Matrix<double,18,1> &var1)
//void p_RRfoot(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



