/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:18:46 GMT-05:00
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
  double t1197;
  double t2175;
  double t1808;
  double t1880;
  double t2347;
  double t1347;
  double t1896;
  double t2507;
  double t2510;
  double t2941;
  double t3259;
  double t3263;
  double t3264;
  double t1057;
  double t1468;
  double t1700;
  double t2957;
  double t2966;
  double t3230;
  double t3247;
  double t3362;
  double t3369;
  double t3430;
  double t3475;
  double t3492;
  double t3565;
  double t6807;
  double t6837;
  double t6845;
  double t7091;
  double t7106;
  double t7112;
  double t6917;
  double t7146;
  double t7632;
  double t7664;
  double t7666;
  double t7370;
  double t7437;
  double t7465;
  double t7480;
  t1197 = Sin(var1[3]);
  t2175 = Cos(var1[3]);
  t1808 = Cos(var1[5]);
  t1880 = Sin(var1[4]);
  t2347 = Sin(var1[5]);
  t1347 = Sin(var1[9]);
  t1896 = -1.*t1808*t1197*t1880;
  t2507 = t2175*t2347;
  t2510 = t1896 + t2507;
  t2941 = Cos(var1[9]);
  t3259 = -1.*t2175*t1808;
  t3263 = -1.*t1197*t1880*t2347;
  t3264 = t3259 + t3263;
  t1057 = Cos(var1[4]);
  t1468 = -0.047*t1347;
  t1700 = 0. + t1468;
  t2957 = -1.*t2941;
  t2966 = 1. + t2957;
  t3230 = 0.047*t2966;
  t3247 = 0. + t3230;
  t3362 = t2175*t1808*t1880;
  t3369 = t1197*t2347;
  t3430 = t3362 + t3369;
  t3475 = -1.*t1808*t1197;
  t3492 = t2175*t1880*t2347;
  t3565 = t3475 + t3492;
  t6807 = t1808*t1197;
  t6837 = -1.*t2175*t1880*t2347;
  t6845 = t6807 + t6837;
  t7091 = t1808*t1197*t1880;
  t7106 = -1.*t2175*t2347;
  t7112 = t7091 + t7106;
  t6917 = t2941*t3430;
  t7146 = t2941*t7112;
  t7632 = t2175*t1808;
  t7664 = t1197*t1880*t2347;
  t7666 = t7632 + t7664;
  t7370 = t2941*t1057*t1808;
  t7437 = -1.*t1057*t1347*t2347;
  t7465 = t7370 + t7437;
  t7480 = 0.047*t7465;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=-0.183*t1057*t1197 + t1700*t2510 + t3247*t3264 + 0.047*(t1347*t2510 + t2941*t3264);
  p_output1(10)=0.183*t1057*t2175 + t1700*t3430 + t3247*t3565 + 0.047*(t1347*t3430 + t2941*t3565);
  p_output1(11)=0;
  p_output1(12)=t1057*t1700*t1808*t2175 - 0.183*t1880*t2175 + 0.047*(t1057*t1347*t1808*t2175 + t1057*t2175*t2347*t2941) + t1057*t2175*t2347*t3247;
  p_output1(13)=t1057*t1197*t1700*t1808 - 0.183*t1197*t1880 + 0.047*(t1057*t1197*t1347*t1808 + t1057*t1197*t2347*t2941) + t1057*t1197*t2347*t3247;
  p_output1(14)=-0.183*t1057 - 1.*t1700*t1808*t1880 + 0.047*(-1.*t1347*t1808*t1880 - 1.*t1880*t2347*t2941) - 1.*t1880*t2347*t3247;
  p_output1(15)=t3247*t3430 + t1700*t6845 + 0.047*(t1347*t6845 + t6917);
  p_output1(16)=t1700*t3264 + t3247*t7112 + 0.047*(t1347*t3264 + t7146);
  p_output1(17)=-1.*t1057*t1700*t2347 + t1057*t1808*t3247 + t7480;
  p_output1(18)=0;
  p_output1(19)=0;
  p_output1(20)=0;
  p_output1(21)=0;
  p_output1(22)=0;
  p_output1(23)=0;
  p_output1(24)=0;
  p_output1(25)=0;
  p_output1(26)=0;
  p_output1(27)=-0.047*t2941*t3430 + 0.047*t1347*t3565 + 0.047*(-1.*t1347*t3565 + t6917);
  p_output1(28)=-0.047*t2941*t7112 + 0.047*t1347*t7666 + 0.047*(t7146 - 1.*t1347*t7666);
  p_output1(29)=0.047*t1057*t1347*t2347 - 0.047*t1057*t1808*t2941 + t7480;
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



