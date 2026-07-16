/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:51:51 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RL_hip_joint.h"

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
static void output1(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  double t1938;
  double t5436;
  double t5228;
  double t5253;
  double t5444;
  double t2368;
  double t5414;
  double t6007;
  double t7190;
  double t7745;
  double t8317;
  double t8358;
  double t8397;
  double t1357;
  double t2583;
  double t3684;
  double t8038;
  double t8199;
  double t8224;
  double t8233;
  double t8964;
  double t8997;
  double t9042;
  double t9150;
  double t9152;
  double t9193;
  double t9524;
  double t9548;
  double t9581;
  double t9657;
  double t9665;
  double t9689;
  double t9618;
  double t9753;
  double t9864;
  double t9877;
  double t9883;
  double t9810;
  double t9834;
  double t9836;
  double t9838;
  t1938 = Sin(var1[3]);
  t5436 = Cos(var1[3]);
  t5228 = Cos(var1[5]);
  t5253 = Sin(var1[4]);
  t5444 = Sin(var1[5]);
  t2368 = Sin(var1[15]);
  t5414 = -1.*t5228*t1938*t5253;
  t6007 = t5436*t5444;
  t7190 = t5414 + t6007;
  t7745 = Cos(var1[15]);
  t8317 = -1.*t5436*t5228;
  t8358 = -1.*t1938*t5253*t5444;
  t8397 = t8317 + t8358;
  t1357 = Cos(var1[4]);
  t2583 = -0.047*t2368;
  t3684 = 0. + t2583;
  t8038 = -1.*t7745;
  t8199 = 1. + t8038;
  t8224 = 0.047*t8199;
  t8233 = 0. + t8224;
  t8964 = t5436*t5228*t5253;
  t8997 = t1938*t5444;
  t9042 = t8964 + t8997;
  t9150 = -1.*t5228*t1938;
  t9152 = t5436*t5253*t5444;
  t9193 = t9150 + t9152;
  t9524 = t5228*t1938;
  t9548 = -1.*t5436*t5253*t5444;
  t9581 = t9524 + t9548;
  t9657 = t5228*t1938*t5253;
  t9665 = -1.*t5436*t5444;
  t9689 = t9657 + t9665;
  t9618 = t7745*t9042;
  t9753 = t7745*t9689;
  t9864 = t5436*t5228;
  t9877 = t1938*t5253*t5444;
  t9883 = t9864 + t9877;
  t9810 = t7745*t1357*t5228;
  t9834 = -1.*t1357*t2368*t5444;
  t9836 = t9810 + t9834;
  t9838 = 0.047*t9836;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=0.183*t1357*t1938 + t3684*t7190 + t8233*t8397 + 0.047*(t2368*t7190 + t7745*t8397);
  p_output1(10)=-0.183*t1357*t5436 + t3684*t9042 + t8233*t9193 + 0.047*(t2368*t9042 + t7745*t9193);
  p_output1(11)=0;
  p_output1(12)=t1357*t3684*t5228*t5436 + 0.183*t5253*t5436 + 0.047*(t1357*t2368*t5228*t5436 + t1357*t5436*t5444*t7745) + t1357*t5436*t5444*t8233;
  p_output1(13)=t1357*t1938*t3684*t5228 + 0.183*t1938*t5253 + 0.047*(t1357*t1938*t2368*t5228 + t1357*t1938*t5444*t7745) + t1357*t1938*t5444*t8233;
  p_output1(14)=0.183*t1357 - 1.*t3684*t5228*t5253 + 0.047*(-1.*t2368*t5228*t5253 - 1.*t5253*t5444*t7745) - 1.*t5253*t5444*t8233;
  p_output1(15)=t8233*t9042 + t3684*t9581 + 0.047*(t2368*t9581 + t9618);
  p_output1(16)=t3684*t8397 + t8233*t9689 + 0.047*(t2368*t8397 + t9753);
  p_output1(17)=-1.*t1357*t3684*t5444 + t1357*t5228*t8233 + t9838;
  p_output1(18)=0;
  p_output1(19)=0;
  p_output1(20)=0;
  p_output1(21)=0;
  p_output1(22)=0;
  p_output1(23)=0;
  p_output1(24)=0;
  p_output1(25)=0;
  p_output1(26)=0;
  p_output1(27)=0;
  p_output1(28)=0;
  p_output1(29)=0;
  p_output1(30)=0;
  p_output1(31)=0;
  p_output1(32)=0;
  p_output1(33)=0;
  p_output1(34)=0;
  p_output1(35)=0;
  p_output1(36)=0;
  p_output1(37)=0;
  p_output1(38)=0;
  p_output1(39)=0;
  p_output1(40)=0;
  p_output1(41)=0;
  p_output1(42)=0;
  p_output1(43)=0;
  p_output1(44)=0;
  p_output1(45)=-0.047*t7745*t9042 + 0.047*t2368*t9193 + 0.047*(-1.*t2368*t9193 + t9618);
  p_output1(46)=-0.047*t7745*t9689 + 0.047*t2368*t9883 + 0.047*(t9753 - 1.*t2368*t9883);
  p_output1(47)=0.047*t1357*t2368*t5444 - 0.047*t1357*t5228*t7745 + t9838;
  p_output1(48)=0;
  p_output1(49)=0;
  p_output1(50)=0;
  p_output1(51)=0;
  p_output1(52)=0;
  p_output1(53)=0;
}


       
Eigen::Matrix<double,3,18> Jp_RL_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void Jp_RL_hip_joint(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



