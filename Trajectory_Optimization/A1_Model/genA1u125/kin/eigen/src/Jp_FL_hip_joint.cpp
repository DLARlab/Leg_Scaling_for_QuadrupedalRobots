/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:21:18 GMT-05:00
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
  double t1665;
  double t4743;
  double t2379;
  double t2445;
  double t4784;
  double t2093;
  double t2933;
  double t4791;
  double t4802;
  double t4987;
  double t5192;
  double t5262;
  double t5270;
  double t787;
  double t2298;
  double t2353;
  double t5096;
  double t5152;
  double t5164;
  double t5176;
  double t5836;
  double t5860;
  double t5964;
  double t5970;
  double t5984;
  double t5990;
  double t6467;
  double t6494;
  double t6504;
  double t6765;
  double t6773;
  double t6799;
  double t6600;
  double t6822;
  double t7134;
  double t7138;
  double t7153;
  double t6926;
  double t6931;
  double t6947;
  double t6953;
  t1665 = Sin(var1[3]);
  t4743 = Cos(var1[3]);
  t2379 = Cos(var1[5]);
  t2445 = Sin(var1[4]);
  t4784 = Sin(var1[5]);
  t2093 = Sin(var1[9]);
  t2933 = -1.*t2379*t1665*t2445;
  t4791 = t4743*t4784;
  t4802 = t2933 + t4791;
  t4987 = Cos(var1[9]);
  t5192 = -1.*t4743*t2379;
  t5262 = -1.*t1665*t2445*t4784;
  t5270 = t5192 + t5262;
  t787 = Cos(var1[4]);
  t2298 = -0.047*t2093;
  t2353 = 0. + t2298;
  t5096 = -1.*t4987;
  t5152 = 1. + t5096;
  t5164 = 0.047*t5152;
  t5176 = 0. + t5164;
  t5836 = t4743*t2379*t2445;
  t5860 = t1665*t4784;
  t5964 = t5836 + t5860;
  t5970 = -1.*t2379*t1665;
  t5984 = t4743*t2445*t4784;
  t5990 = t5970 + t5984;
  t6467 = t2379*t1665;
  t6494 = -1.*t4743*t2445*t4784;
  t6504 = t6467 + t6494;
  t6765 = t2379*t1665*t2445;
  t6773 = -1.*t4743*t4784;
  t6799 = t6765 + t6773;
  t6600 = t4987*t5964;
  t6822 = t4987*t6799;
  t7134 = t4743*t2379;
  t7138 = t1665*t2445*t4784;
  t7153 = t7134 + t7138;
  t6926 = t4987*t787*t2379;
  t6931 = -1.*t787*t2093*t4784;
  t6947 = t6926 + t6931;
  t6953 = 0.047*t6947;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t2353*t4802 + t5176*t5270 + 0.047*(t2093*t4802 + t4987*t5270) - 0.183*t1665*t787;
  p_output1(10)=t2353*t5964 + t5176*t5990 + 0.047*(t2093*t5964 + t4987*t5990) + 0.183*t4743*t787;
  p_output1(11)=0;
  p_output1(12)=-0.183*t2445*t4743 + t2353*t2379*t4743*t787 + t4743*t4784*t5176*t787 + 0.047*(t2093*t2379*t4743*t787 + t4743*t4784*t4987*t787);
  p_output1(13)=-0.183*t1665*t2445 + t1665*t2353*t2379*t787 + t1665*t4784*t5176*t787 + 0.047*(t1665*t2093*t2379*t787 + t1665*t4784*t4987*t787);
  p_output1(14)=-1.*t2353*t2379*t2445 + 0.047*(-1.*t2093*t2379*t2445 - 1.*t2445*t4784*t4987) - 1.*t2445*t4784*t5176 - 0.183*t787;
  p_output1(15)=t5176*t5964 + t2353*t6504 + 0.047*(t2093*t6504 + t6600);
  p_output1(16)=t2353*t5270 + t5176*t6799 + 0.047*(t2093*t5270 + t6822);
  p_output1(17)=t6953 - 1.*t2353*t4784*t787 + t2379*t5176*t787;
  p_output1(18)=0;
  p_output1(19)=0;
  p_output1(20)=0;
  p_output1(21)=0;
  p_output1(22)=0;
  p_output1(23)=0;
  p_output1(24)=0;
  p_output1(25)=0;
  p_output1(26)=0;
  p_output1(27)=-0.047*t4987*t5964 + 0.047*t2093*t5990 + 0.047*(-1.*t2093*t5990 + t6600);
  p_output1(28)=-0.047*t4987*t6799 + 0.047*t2093*t7153 + 0.047*(t6822 - 1.*t2093*t7153);
  p_output1(29)=t6953 + 0.047*t2093*t4784*t787 - 0.047*t2379*t4987*t787;
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



