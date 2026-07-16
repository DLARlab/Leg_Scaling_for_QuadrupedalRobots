/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:26:38 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_FL_thigh_joint.h"

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
  double t1531;
  double t3338;
  double t2213;
  double t2784;
  double t3551;
  double t1816;
  double t3256;
  double t3671;
  double t3915;
  double t4166;
  double t5288;
  double t5373;
  double t5426;
  double t126;
  double t1503;
  double t6097;
  double t6125;
  double t6193;
  double t6209;
  double t583;
  double t1050;
  double t1195;
  double t1370;
  double t2030;
  double t2046;
  double t4717;
  double t5210;
  double t5229;
  double t5283;
  double t6429;
  double t6430;
  double t6446;
  double t6494;
  double t6522;
  double t6630;
  double t6106;
  double t6120;
  double t6934;
  double t6935;
  double t6936;
  double t7302;
  double t7305;
  double t7318;
  double t7555;
  double t7566;
  double t7593;
  double t7873;
  double t7874;
  double t7880;
  double t8001;
  double t8011;
  double t8014;
  double t8099;
  double t8105;
  double t8127;
  double t8187;
  double t8190;
  double t8192;
  double t5877;
  double t8245;
  double t8246;
  double t8374;
  double t8414;
  double t8419;
  double t8480;
  double t8499;
  double t8600;
  double t8602;
  double t8610;
  double t8630;
  double t8662;
  double t8257;
  double t8427;
  double t8444;
  double t8447;
  double t8453;
  double t8460;
  double t8464;
  double t8680;
  double t8681;
  t1531 = Sin(var1[3]);
  t3338 = Cos(var1[3]);
  t2213 = Cos(var1[5]);
  t2784 = Sin(var1[4]);
  t3551 = Sin(var1[5]);
  t1816 = Sin(var1[9]);
  t3256 = -1.*t2213*t1531*t2784;
  t3671 = t3338*t3551;
  t3915 = t3256 + t3671;
  t4166 = Cos(var1[9]);
  t5288 = -1.*t3338*t2213;
  t5373 = -1.*t1531*t2784*t3551;
  t5426 = t5288 + t5373;
  t126 = Cos(var1[10]);
  t1503 = Cos(var1[4]);
  t6097 = Sin(var1[10]);
  t6125 = t4166*t3915;
  t6193 = -1.*t1816*t5426;
  t6209 = t6125 + t6193;
  t583 = -1.*t126;
  t1050 = 1. + t583;
  t1195 = 0.183*t1050;
  t1370 = 0. + t1195;
  t2030 = -0.047*t1816;
  t2046 = 0. + t2030;
  t4717 = -1.*t4166;
  t5210 = 1. + t4717;
  t5229 = 0.047*t5210;
  t5283 = 0. + t5229;
  t6429 = t3338*t2213*t2784;
  t6430 = t1531*t3551;
  t6446 = t6429 + t6430;
  t6494 = -1.*t2213*t1531;
  t6522 = t3338*t2784*t3551;
  t6630 = t6494 + t6522;
  t6106 = 0.183*t6097;
  t6120 = 0. + t6106;
  t6934 = t4166*t6446;
  t6935 = -1.*t1816*t6630;
  t6936 = t6934 + t6935;
  t7302 = t4166*t3338*t1503*t2213;
  t7305 = -1.*t3338*t1503*t1816*t3551;
  t7318 = t7302 + t7305;
  t7555 = t4166*t1503*t2213*t1531;
  t7566 = -1.*t1503*t1816*t1531*t3551;
  t7593 = t7555 + t7566;
  t7873 = -1.*t4166*t2213*t2784;
  t7874 = t1816*t2784*t3551;
  t7880 = t7873 + t7874;
  t8001 = t2213*t1531;
  t8011 = -1.*t3338*t2784*t3551;
  t8014 = t8001 + t8011;
  t8099 = -1.*t1816*t6446;
  t8105 = t4166*t8014;
  t8127 = t8099 + t8105;
  t8187 = t2213*t1531*t2784;
  t8190 = -1.*t3338*t3551;
  t8192 = t8187 + t8190;
  t5877 = t4166*t5426;
  t8245 = -1.*t1816*t8192;
  t8246 = t8245 + t5877;
  t8374 = -1.*t1503*t2213*t1816;
  t8414 = -1.*t4166*t1503*t3551;
  t8419 = t8374 + t8414;
  t8480 = -1.*t4166*t6630;
  t8499 = t8099 + t8480;
  t8600 = t3338*t2213;
  t8602 = t1531*t2784*t3551;
  t8610 = t8600 + t8602;
  t8630 = -1.*t4166*t8610;
  t8662 = t8245 + t8630;
  t8257 = t4166*t8192;
  t8427 = t6120*t8419;
  t8444 = -0.183*t6097*t8419;
  t8447 = t4166*t1503*t2213;
  t8453 = -1.*t1503*t1816*t3551;
  t8460 = t8447 + t8453;
  t8464 = 0.17458*t8460;
  t8680 = -1.*t1816*t8610;
  t8681 = t8257 + t8680;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=-1.*t1370*t1503*t1531 + t2046*t3915 + t5283*t5426 + 0.17458*(t1816*t3915 + t5877) + t6120*t6209 + 0.183*(-1.*t126*t1503*t1531 - 1.*t6097*t6209);
  p_output1(10)=t1370*t1503*t3338 + t2046*t6446 + t5283*t6630 + 0.17458*(t1816*t6446 + t4166*t6630) + t6120*t6936 + 0.183*(t126*t1503*t3338 - 1.*t6097*t6936);
  p_output1(11)=0;
  p_output1(12)=t1503*t2046*t2213*t3338 - 1.*t1370*t2784*t3338 + 0.17458*(t1503*t1816*t2213*t3338 + t1503*t3338*t3551*t4166) + t1503*t3338*t3551*t5283 + t6120*t7318 + 0.183*(-1.*t126*t2784*t3338 - 1.*t6097*t7318);
  p_output1(13)=t1503*t1531*t2046*t2213 - 1.*t1370*t1531*t2784 + 0.17458*(t1503*t1531*t1816*t2213 + t1503*t1531*t3551*t4166) + t1503*t1531*t3551*t5283 + t6120*t7593 + 0.183*(-1.*t126*t1531*t2784 - 1.*t6097*t7593);
  p_output1(14)=-1.*t1370*t1503 - 1.*t2046*t2213*t2784 + 0.17458*(-1.*t1816*t2213*t2784 - 1.*t2784*t3551*t4166) - 1.*t2784*t3551*t5283 + t6120*t7880 + 0.183*(-1.*t126*t1503 - 1.*t6097*t7880);
  p_output1(15)=t5283*t6446 + t2046*t8014 + 0.17458*(t6934 + t1816*t8014) - 0.183*t6097*t8127 + t6120*t8127;
  p_output1(16)=t2046*t5426 + t5283*t8192 - 0.183*t6097*t8246 + t6120*t8246 + 0.17458*(t1816*t5426 + t8257);
  p_output1(17)=-1.*t1503*t2046*t3551 + t1503*t2213*t5283 + t8427 + t8444 + t8464;
  p_output1(18)=0;
  p_output1(19)=0;
  p_output1(20)=0;
  p_output1(21)=0;
  p_output1(22)=0;
  p_output1(23)=0;
  p_output1(24)=0;
  p_output1(25)=0;
  p_output1(26)=0;
  p_output1(27)=-0.047*t4166*t6446 + 0.047*t1816*t6630 + 0.17458*t6936 - 0.183*t6097*t8499 + t6120*t8499;
  p_output1(28)=-0.047*t4166*t8192 + 0.047*t1816*t8610 - 0.183*t6097*t8662 + t6120*t8662 + 0.17458*t8681;
  p_output1(29)=0.047*t1503*t1816*t3551 - 0.047*t1503*t2213*t4166 + t8427 + t8444 + t8464;
  p_output1(30)=0.183*t1503*t3338*t6097 + 0.183*t126*t6936 + 0.183*(-1.*t1503*t3338*t6097 - 1.*t126*t6936);
  p_output1(31)=0.183*t1503*t1531*t6097 + 0.183*t126*t8681 + 0.183*(-1.*t1503*t1531*t6097 - 1.*t126*t8681);
  p_output1(32)=-0.183*t2784*t6097 + 0.183*t126*t8460 + 0.183*(t2784*t6097 - 1.*t126*t8460);
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


       
Eigen::Matrix<double,3,18> Jp_FL_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void Jp_FL_thigh_joint(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



