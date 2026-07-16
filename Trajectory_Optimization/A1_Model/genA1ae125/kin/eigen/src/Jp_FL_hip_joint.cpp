/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:04:16 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_FL_hip_joint.h"

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
  double t1999;
  double t5577;
  double t4892;
  double t5191;
  double t5584;
  double t2065;
  double t5567;
  double t5732;
  double t5830;
  double t5881;
  double t5940;
  double t5949;
  double t5970;
  double t1635;
  double t3131;
  double t4273;
  double t5898;
  double t5914;
  double t5919;
  double t5927;
  double t6045;
  double t6094;
  double t6103;
  double t6152;
  double t6162;
  double t6195;
  double t6440;
  double t6441;
  double t6448;
  double t6473;
  double t6475;
  double t6483;
  double t6456;
  double t6500;
  double t6833;
  double t6834;
  double t6853;
  double t6681;
  double t6687;
  double t6698;
  double t6723;
  t1999 = Sin(var1[3]);
  t5577 = Cos(var1[3]);
  t4892 = Cos(var1[5]);
  t5191 = Sin(var1[4]);
  t5584 = Sin(var1[5]);
  t2065 = Sin(var1[9]);
  t5567 = -1.*t4892*t1999*t5191;
  t5732 = t5577*t5584;
  t5830 = t5567 + t5732;
  t5881 = Cos(var1[9]);
  t5940 = -1.*t5577*t4892;
  t5949 = -1.*t1999*t5191*t5584;
  t5970 = t5940 + t5949;
  t1635 = Cos(var1[4]);
  t3131 = -0.047*t2065;
  t4273 = 0. + t3131;
  t5898 = -1.*t5881;
  t5914 = 1. + t5898;
  t5919 = 0.047*t5914;
  t5927 = 0. + t5919;
  t6045 = t5577*t4892*t5191;
  t6094 = t1999*t5584;
  t6103 = t6045 + t6094;
  t6152 = -1.*t4892*t1999;
  t6162 = t5577*t5191*t5584;
  t6195 = t6152 + t6162;
  t6440 = t4892*t1999;
  t6441 = -1.*t5577*t5191*t5584;
  t6448 = t6440 + t6441;
  t6473 = t4892*t1999*t5191;
  t6475 = -1.*t5577*t5584;
  t6483 = t6473 + t6475;
  t6456 = t5881*t6103;
  t6500 = t5881*t6483;
  t6833 = t5577*t4892;
  t6834 = t1999*t5191*t5584;
  t6853 = t6833 + t6834;
  t6681 = t5881*t1635*t4892;
  t6687 = -1.*t1635*t2065*t5584;
  t6698 = t6681 + t6687;
  t6723 = 0.047*t6698;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=-0.183*t1635*t1999 + t4273*t5830 + t5927*t5970 + 0.047*(t2065*t5830 + t5881*t5970);
  p_output1(10)=0.183*t1635*t5577 + t4273*t6103 + t5927*t6195 + 0.047*(t2065*t6103 + t5881*t6195);
  p_output1(11)=0;
  p_output1(12)=t1635*t4273*t4892*t5577 - 0.183*t5191*t5577 + 0.047*(t1635*t2065*t4892*t5577 + t1635*t5577*t5584*t5881) + t1635*t5577*t5584*t5927;
  p_output1(13)=t1635*t1999*t4273*t4892 - 0.183*t1999*t5191 + 0.047*(t1635*t1999*t2065*t4892 + t1635*t1999*t5584*t5881) + t1635*t1999*t5584*t5927;
  p_output1(14)=-0.183*t1635 - 1.*t4273*t4892*t5191 + 0.047*(-1.*t2065*t4892*t5191 - 1.*t5191*t5584*t5881) - 1.*t5191*t5584*t5927;
  p_output1(15)=t5927*t6103 + t4273*t6448 + 0.047*(t2065*t6448 + t6456);
  p_output1(16)=t4273*t5970 + t5927*t6483 + 0.047*(t2065*t5970 + t6500);
  p_output1(17)=-1.*t1635*t4273*t5584 + t1635*t4892*t5927 + t6723;
  p_output1(18)=0;
  p_output1(19)=0;
  p_output1(20)=0;
  p_output1(21)=0;
  p_output1(22)=0;
  p_output1(23)=0;
  p_output1(24)=0;
  p_output1(25)=0;
  p_output1(26)=0;
  p_output1(27)=-0.047*t5881*t6103 + 0.047*t2065*t6195 + 0.047*(-1.*t2065*t6195 + t6456);
  p_output1(28)=-0.047*t5881*t6483 + 0.047*t2065*t6853 + 0.047*(t6500 - 1.*t2065*t6853);
  p_output1(29)=0.047*t1635*t2065*t5584 - 0.047*t1635*t4892*t5881 + t6723;
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
  p_output1(45)=0;
  p_output1(46)=0;
  p_output1(47)=0;
  p_output1(48)=0;
  p_output1(49)=0;
  p_output1(50)=0;
  p_output1(51)=0;
  p_output1(52)=0;
  p_output1(53)=0;
}


       
Eigen::Matrix<double,3,18> Jp_FL_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void Jp_FL_hip_joint(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



