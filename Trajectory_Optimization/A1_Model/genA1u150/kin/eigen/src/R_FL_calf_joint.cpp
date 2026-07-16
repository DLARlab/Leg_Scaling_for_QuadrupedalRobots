/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:26:42 GMT-05:00
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
  double t1019;
  double t2491;
  double t3703;
  double t2608;
  double t3825;
  double t1888;
  double t1072;
  double t1500;
  double t2220;
  double t2773;
  double t3864;
  double t4601;
  double t4745;
  double t4825;
  double t4828;
  double t4896;
  double t4976;
  double t4988;
  double t5005;
  double t586;
  double t5153;
  double t5230;
  double t5234;
  double t5242;
  double t5259;
  double t5302;
  double t5312;
  double t5319;
  double t5320;
  double t5326;
  double t5519;
  double t5526;
  double t5528;
  double t1510;
  double t5024;
  double t5043;
  double t5156;
  double t5177;
  double t5193;
  double t5220;
  double t5361;
  double t5384;
  double t5406;
  double t5414;
  double t5415;
  double t5518;
  double t5584;
  double t5594;
  double t5610;
  double t5617;
  double t5709;
  t1019 = Cos(var1[3]);
  t2491 = Cos(var1[5]);
  t3703 = Sin(var1[3]);
  t2608 = Sin(var1[4]);
  t3825 = Sin(var1[5]);
  t1888 = Cos(var1[10]);
  t1072 = Cos(var1[4]);
  t1500 = Sin(var1[10]);
  t2220 = Cos(var1[9]);
  t2773 = t1019*t2491*t2608;
  t3864 = t3703*t3825;
  t4601 = t2773 + t3864;
  t4745 = t2220*t4601;
  t4825 = Sin(var1[9]);
  t4828 = -1.*t2491*t3703;
  t4896 = t1019*t2608*t3825;
  t4976 = t4828 + t4896;
  t4988 = -1.*t4825*t4976;
  t5005 = t4745 + t4988;
  t586 = Sin(var1[11]);
  t5153 = Cos(var1[11]);
  t5230 = t2491*t3703*t2608;
  t5234 = -1.*t1019*t3825;
  t5242 = t5230 + t5234;
  t5259 = t2220*t5242;
  t5302 = t1019*t2491;
  t5312 = t3703*t2608*t3825;
  t5319 = t5302 + t5312;
  t5320 = -1.*t4825*t5319;
  t5326 = t5259 + t5320;
  t5519 = t2220*t1072*t2491;
  t5526 = -1.*t1072*t4825*t3825;
  t5528 = t5519 + t5526;
  t1510 = t1019*t1072*t1500;
  t5024 = t1888*t5005;
  t5043 = t1510 + t5024;
  t5156 = t1888*t1019*t1072;
  t5177 = -1.*t1500*t5005;
  t5193 = t5156 + t5177;
  t5220 = t1072*t1500*t3703;
  t5361 = t1888*t5326;
  t5384 = t5220 + t5361;
  t5406 = t1888*t1072*t3703;
  t5414 = -1.*t1500*t5326;
  t5415 = t5406 + t5414;
  t5518 = -1.*t1500*t2608;
  t5584 = t1888*t5528;
  t5594 = t5518 + t5584;
  t5610 = -1.*t1888*t2608;
  t5617 = -1.*t1500*t5528;
  t5709 = t5610 + t5617;

  p_output1(0)=t5153*t5193 - 1.*t5043*t586;
  p_output1(1)=t5153*t5415 - 1.*t5384*t586;
  p_output1(2)=t5153*t5709 - 1.*t5594*t586;
  p_output1(3)=t4601*t4825 + t2220*t4976;
  p_output1(4)=t4825*t5242 + t2220*t5319;
  p_output1(5)=t1072*t2220*t3825 + t1072*t2491*t4825;
  p_output1(6)=t5043*t5153 + t5193*t586;
  p_output1(7)=t5153*t5384 + t5415*t586;
  p_output1(8)=t5153*t5594 + t5709*t586;
}


       
Eigen::Matrix<double,3,3> R_FL_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_FL_calf_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



