/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:10:56 GMT-05:00
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
  double t1880;
  double t5394;
  double t5347;
  double t5382;
  double t5410;
  double t5310;
  double t5384;
  double t5434;
  double t5435;
  double t5455;
  double t5494;
  double t5495;
  double t5496;
  double t1180;
  double t5317;
  double t5333;
  double t5469;
  double t5474;
  double t5476;
  double t5482;
  double t5528;
  double t5533;
  double t5534;
  double t5537;
  double t5561;
  double t5567;
  double t5763;
  double t5769;
  double t5781;
  double t5797;
  double t5804;
  double t5808;
  double t5785;
  double t5818;
  double t5911;
  double t5918;
  double t5919;
  double t5853;
  double t5867;
  double t5872;
  double t5874;
  t1880 = Sin(var1[3]);
  t5394 = Cos(var1[3]);
  t5347 = Cos(var1[5]);
  t5382 = Sin(var1[4]);
  t5410 = Sin(var1[5]);
  t5310 = Sin(var1[9]);
  t5384 = -1.*t5347*t1880*t5382;
  t5434 = t5394*t5410;
  t5435 = t5384 + t5434;
  t5455 = Cos(var1[9]);
  t5494 = -1.*t5394*t5347;
  t5495 = -1.*t1880*t5382*t5410;
  t5496 = t5494 + t5495;
  t1180 = Cos(var1[4]);
  t5317 = -0.047*t5310;
  t5333 = 0. + t5317;
  t5469 = -1.*t5455;
  t5474 = 1. + t5469;
  t5476 = 0.047*t5474;
  t5482 = 0. + t5476;
  t5528 = t5394*t5347*t5382;
  t5533 = t1880*t5410;
  t5534 = t5528 + t5533;
  t5537 = -1.*t5347*t1880;
  t5561 = t5394*t5382*t5410;
  t5567 = t5537 + t5561;
  t5763 = t5347*t1880;
  t5769 = -1.*t5394*t5382*t5410;
  t5781 = t5763 + t5769;
  t5797 = t5347*t1880*t5382;
  t5804 = -1.*t5394*t5410;
  t5808 = t5797 + t5804;
  t5785 = t5455*t5534;
  t5818 = t5455*t5808;
  t5911 = t5394*t5347;
  t5918 = t1880*t5382*t5410;
  t5919 = t5911 + t5918;
  t5853 = t5455*t1180*t5347;
  t5867 = -1.*t1180*t5310*t5410;
  t5872 = t5853 + t5867;
  t5874 = 0.047*t5872;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=-0.183*t1180*t1880 + t5333*t5435 + t5482*t5496 + 0.047*(t5310*t5435 + t5455*t5496);
  p_output1(10)=0.183*t1180*t5394 + t5333*t5534 + t5482*t5567 + 0.047*(t5310*t5534 + t5455*t5567);
  p_output1(11)=0;
  p_output1(12)=t1180*t5333*t5347*t5394 - 0.183*t5382*t5394 + 0.047*(t1180*t5310*t5347*t5394 + t1180*t5394*t5410*t5455) + t1180*t5394*t5410*t5482;
  p_output1(13)=t1180*t1880*t5333*t5347 - 0.183*t1880*t5382 + 0.047*(t1180*t1880*t5310*t5347 + t1180*t1880*t5410*t5455) + t1180*t1880*t5410*t5482;
  p_output1(14)=-0.183*t1180 - 1.*t5333*t5347*t5382 + 0.047*(-1.*t5310*t5347*t5382 - 1.*t5382*t5410*t5455) - 1.*t5382*t5410*t5482;
  p_output1(15)=t5482*t5534 + t5333*t5781 + 0.047*(t5310*t5781 + t5785);
  p_output1(16)=t5333*t5496 + t5482*t5808 + 0.047*(t5310*t5496 + t5818);
  p_output1(17)=-1.*t1180*t5333*t5410 + t1180*t5347*t5482 + t5874;
  p_output1(18)=0;
  p_output1(19)=0;
  p_output1(20)=0;
  p_output1(21)=0;
  p_output1(22)=0;
  p_output1(23)=0;
  p_output1(24)=0;
  p_output1(25)=0;
  p_output1(26)=0;
  p_output1(27)=-0.047*t5455*t5534 + 0.047*t5310*t5567 + 0.047*(-1.*t5310*t5567 + t5785);
  p_output1(28)=-0.047*t5455*t5808 + 0.047*t5310*t5919 + 0.047*(t5818 - 1.*t5310*t5919);
  p_output1(29)=0.047*t1180*t5310*t5410 - 0.047*t1180*t5347*t5455 + t5874;
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



