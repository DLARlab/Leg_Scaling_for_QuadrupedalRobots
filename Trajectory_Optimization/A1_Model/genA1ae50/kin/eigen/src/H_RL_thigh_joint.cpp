/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:11:13 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RL_thigh_joint.h"

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
  double t1559;
  double t1825;
  double t1835;
  double t1827;
  double t1838;
  double t1129;
  double t1696;
  double t1702;
  double t1773;
  double t2333;
  double t1829;
  double t1843;
  double t1845;
  double t2565;
  double t3244;
  double t3281;
  double t4287;
  double t4434;
  double t4563;
  double t4761;
  double t5038;
  double t5172;
  double t1893;
  double t3476;
  double t3486;
  double t4615;
  double t5194;
  double t5248;
  double t5437;
  double t5498;
  double t5515;
  double t5668;
  double t5938;
  double t6026;
  double t1698;
  double t4054;
  double t4117;
  double t6830;
  double t6843;
  double t6863;
  double t6911;
  double t6932;
  double t6938;
  double t6955;
  double t6981;
  double t6999;
  double t7003;
  double t6043;
  double t6112;
  double t6183;
  double t7024;
  double t7075;
  double t4169;
  double t5278;
  double t5287;
  double t6257;
  double t6307;
  double t6389;
  double t5325;
  double t5541;
  double t5557;
  t1559 = Cos(var1[3]);
  t1825 = Cos(var1[5]);
  t1835 = Sin(var1[3]);
  t1827 = Sin(var1[4]);
  t1838 = Sin(var1[5]);
  t1129 = Cos(var1[16]);
  t1696 = Cos(var1[4]);
  t1702 = Sin(var1[16]);
  t1773 = Cos(var1[15]);
  t2333 = Sin(var1[15]);
  t1829 = t1559*t1825*t1827;
  t1843 = t1835*t1838;
  t1845 = t1829 + t1843;
  t2565 = -1.*t1825*t1835;
  t3244 = t1559*t1827*t1838;
  t3281 = t2565 + t3244;
  t4287 = t1825*t1835*t1827;
  t4434 = -1.*t1559*t1838;
  t4563 = t4287 + t4434;
  t4761 = t1559*t1825;
  t5038 = t1835*t1827*t1838;
  t5172 = t4761 + t5038;
  t1893 = t1773*t1845;
  t3476 = -1.*t2333*t3281;
  t3486 = t1893 + t3476;
  t4615 = t1773*t4563;
  t5194 = -1.*t2333*t5172;
  t5248 = t4615 + t5194;
  t5437 = t1773*t1696*t1825;
  t5498 = -1.*t1696*t2333*t1838;
  t5515 = t5437 + t5498;
  t5668 = t2333*t1845;
  t5938 = t1773*t3281;
  t6026 = t5668 + t5938;
  t1698 = t1129*t1559*t1696;
  t4054 = -1.*t1702*t3486;
  t4117 = t1698 + t4054;
  t6830 = -1.*t1129;
  t6843 = 1. + t6830;
  t6863 = -0.183*t6843;
  t6911 = 0. + t6863;
  t6932 = -0.047*t2333;
  t6938 = 0. + t6932;
  t6955 = -1.*t1773;
  t6981 = 1. + t6955;
  t6999 = 0.047*t6981;
  t7003 = 0. + t6999;
  t6043 = t2333*t4563;
  t6112 = t1773*t5172;
  t6183 = t6043 + t6112;
  t7024 = -0.183*t1702;
  t7075 = 0. + t7024;
  t4169 = t1129*t1696*t1835;
  t5278 = -1.*t1702*t5248;
  t5287 = t4169 + t5278;
  t6257 = t1696*t1825*t2333;
  t6307 = t1773*t1696*t1838;
  t6389 = t6257 + t6307;
  t5325 = -1.*t1129*t1827;
  t5541 = -1.*t1702*t5515;
  t5557 = t5325 + t5541;

  p_output1(0)=t4117;
  p_output1(1)=t5287;
  p_output1(2)=t5557;
  p_output1(3)=0.;
  p_output1(4)=t6026;
  p_output1(5)=t6183;
  p_output1(6)=t6389;
  p_output1(7)=0.;
  p_output1(8)=t1559*t1696*t1702 + t1129*t3486;
  p_output1(9)=t1696*t1702*t1835 + t1129*t5248;
  p_output1(10)=-1.*t1702*t1827 + t1129*t5515;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.183*t4117 + 0.13205*t6026 + t1559*t1696*t6911 + t1845*t6938 + t3281*t7003 + t3486*t7075 + var1(0);
  p_output1(13)=0. - 0.183*t5287 + 0.13205*t6183 + t1696*t1835*t6911 + t4563*t6938 + t5172*t7003 + t5248*t7075 + var1(1);
  p_output1(14)=0. - 0.183*t5557 + 0.13205*t6389 - 1.*t1827*t6911 + t1696*t1825*t6938 + t1696*t1838*t7003 + t5515*t7075 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_RL_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void H_RL_thigh_joint(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



