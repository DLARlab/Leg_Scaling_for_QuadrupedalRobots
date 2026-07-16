/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:11:07 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RR_calf_joint.h"

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
  double t2337;
  double t4941;
  double t6160;
  double t5493;
  double t6185;
  double t3850;
  double t5832;
  double t6214;
  double t6488;
  double t6669;
  double t6794;
  double t6830;
  double t6839;
  double t2990;
  double t6927;
  double t592;
  double t7010;
  double t7034;
  double t7045;
  double t7070;
  double t7071;
  double t7085;
  double t7108;
  double t7124;
  double t7138;
  double t7148;
  double t7193;
  double t7201;
  double t7202;
  double t656;
  double t727;
  double t733;
  double t1903;
  double t4445;
  double t4500;
  double t6718;
  double t6739;
  double t6767;
  double t6781;
  double t7287;
  double t7289;
  double t7290;
  double t7318;
  double t7321;
  double t7330;
  double t6999;
  double t7005;
  double t7103;
  double t7116;
  double t7117;
  double t7358;
  double t7371;
  double t7378;
  double t7163;
  double t7165;
  double t7183;
  double t7381;
  double t7382;
  double t7401;
  double t7422;
  double t7424;
  double t7427;
  double t7547;
  double t7552;
  double t7556;
  double t7564;
  double t7580;
  double t7581;
  double t7586;
  double t7593;
  double t7595;
  t2337 = Cos(var1[3]);
  t4941 = Cos(var1[5]);
  t6160 = Sin(var1[3]);
  t5493 = Sin(var1[4]);
  t6185 = Sin(var1[5]);
  t3850 = Sin(var1[12]);
  t5832 = t2337*t4941*t5493;
  t6214 = t6160*t6185;
  t6488 = t5832 + t6214;
  t6669 = Cos(var1[12]);
  t6794 = -1.*t4941*t6160;
  t6830 = t2337*t5493*t6185;
  t6839 = t6794 + t6830;
  t2990 = Cos(var1[4]);
  t6927 = Sin(var1[13]);
  t592 = Cos(var1[13]);
  t7010 = t6669*t6488;
  t7034 = -1.*t3850*t6839;
  t7045 = t7010 + t7034;
  t7070 = Cos(var1[14]);
  t7071 = -1.*t7070;
  t7085 = 1. + t7071;
  t7108 = Sin(var1[14]);
  t7124 = t2337*t2990*t6927;
  t7138 = t592*t7045;
  t7148 = t7124 + t7138;
  t7193 = t592*t2337*t2990;
  t7201 = -1.*t6927*t7045;
  t7202 = t7193 + t7201;
  t656 = -1.*t592;
  t727 = 1. + t656;
  t733 = -0.183*t727;
  t1903 = 0. + t733;
  t4445 = 0.047*t3850;
  t4500 = 0. + t4445;
  t6718 = -1.*t6669;
  t6739 = 1. + t6718;
  t6767 = -0.047*t6739;
  t6781 = 0. + t6767;
  t7287 = t4941*t6160*t5493;
  t7289 = -1.*t2337*t6185;
  t7290 = t7287 + t7289;
  t7318 = t2337*t4941;
  t7321 = t6160*t5493*t6185;
  t7330 = t7318 + t7321;
  t6999 = -0.183*t6927;
  t7005 = 0. + t6999;
  t7103 = -0.1*t7085;
  t7116 = -0.183*t7108;
  t7117 = 0. + t7103 + t7116;
  t7358 = t6669*t7290;
  t7371 = -1.*t3850*t7330;
  t7378 = t7358 + t7371;
  t7163 = -0.183*t7085;
  t7165 = 0.1*t7108;
  t7183 = 0. + t7163 + t7165;
  t7381 = t2990*t6927*t6160;
  t7382 = t592*t7378;
  t7401 = t7381 + t7382;
  t7422 = t592*t2990*t6160;
  t7424 = -1.*t6927*t7378;
  t7427 = t7422 + t7424;
  t7547 = t6669*t2990*t4941;
  t7552 = -1.*t2990*t3850*t6185;
  t7556 = t7547 + t7552;
  t7564 = -1.*t6927*t5493;
  t7580 = t592*t7556;
  t7581 = t7564 + t7580;
  t7586 = -1.*t592*t5493;
  t7593 = -1.*t6927*t7556;
  t7595 = t7586 + t7593;

  p_output1(0)=0. + t1903*t2337*t2990 + t4500*t6488 + t6781*t6839 - 0.13205*(t3850*t6488 + t6669*t6839) + t7005*t7045 + t7117*t7148 + t7183*t7202 - 0.183*(-1.*t7108*t7148 + t7070*t7202) - 0.1*(t7070*t7148 + t7108*t7202) + var1(0);
  p_output1(1)=0. + t1903*t2990*t6160 + t4500*t7290 + t6781*t7330 - 0.13205*(t3850*t7290 + t6669*t7330) + t7005*t7378 + t7117*t7401 + t7183*t7427 - 0.183*(-1.*t7108*t7401 + t7070*t7427) - 0.1*(t7070*t7401 + t7108*t7427) + var1(1);
  p_output1(2)=0. + t2990*t4500*t4941 - 1.*t1903*t5493 - 0.13205*(t2990*t3850*t4941 + t2990*t6185*t6669) + t2990*t6185*t6781 + t7005*t7556 + t7117*t7581 + t7183*t7595 - 0.183*(-1.*t7108*t7581 + t7070*t7595) - 0.1*(t7070*t7581 + t7108*t7595) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_RR_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_RR_calf_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



