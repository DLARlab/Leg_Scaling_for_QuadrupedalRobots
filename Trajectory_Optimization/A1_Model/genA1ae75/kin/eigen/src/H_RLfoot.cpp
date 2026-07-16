/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:52:06 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RLfoot.h"

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
  double t268;
  double t1551;
  double t2098;
  double t1705;
  double t2145;
  double t1362;
  double t788;
  double t1040;
  double t1370;
  double t1733;
  double t2422;
  double t2463;
  double t2498;
  double t2587;
  double t2727;
  double t2740;
  double t2898;
  double t2970;
  double t3117;
  double t260;
  double t3321;
  double t3986;
  double t4046;
  double t4147;
  double t4159;
  double t4294;
  double t4421;
  double t4442;
  double t4636;
  double t4674;
  double t5240;
  double t5294;
  double t5336;
  double t1068;
  double t3182;
  double t3204;
  double t3499;
  double t3623;
  double t3645;
  double t3944;
  double t4678;
  double t4692;
  double t4942;
  double t5024;
  double t5091;
  double t5165;
  double t5530;
  double t5543;
  double t5591;
  double t5600;
  double t5637;
  double t5820;
  double t5823;
  double t5880;
  double t6970;
  double t6991;
  double t3301;
  double t3760;
  double t3832;
  double t6296;
  double t6374;
  double t6388;
  double t6614;
  double t6619;
  double t6622;
  double t6630;
  double t6639;
  double t6645;
  double t6664;
  double t6668;
  double t6670;
  double t6785;
  double t5926;
  double t6030;
  double t6082;
  double t6836;
  double t6858;
  double t7012;
  double t7028;
  double t7117;
  double t7132;
  double t7208;
  double t7211;
  double t4878;
  double t5099;
  double t5152;
  double t6459;
  double t6559;
  double t6584;
  double t6111;
  double t6162;
  double t6176;
  double t5563;
  double t5711;
  double t5758;
  double t6592;
  double t6599;
  double t6600;
  t268 = Cos(var1[3]);
  t1551 = Cos(var1[5]);
  t2098 = Sin(var1[3]);
  t1705 = Sin(var1[4]);
  t2145 = Sin(var1[5]);
  t1362 = Cos(var1[16]);
  t788 = Cos(var1[4]);
  t1040 = Sin(var1[16]);
  t1370 = Cos(var1[15]);
  t1733 = t268*t1551*t1705;
  t2422 = t2098*t2145;
  t2463 = t1733 + t2422;
  t2498 = t1370*t2463;
  t2587 = Sin(var1[15]);
  t2727 = -1.*t1551*t2098;
  t2740 = t268*t1705*t2145;
  t2898 = t2727 + t2740;
  t2970 = -1.*t2587*t2898;
  t3117 = t2498 + t2970;
  t260 = Sin(var1[17]);
  t3321 = Cos(var1[17]);
  t3986 = t1551*t2098*t1705;
  t4046 = -1.*t268*t2145;
  t4147 = t3986 + t4046;
  t4159 = t1370*t4147;
  t4294 = t268*t1551;
  t4421 = t2098*t1705*t2145;
  t4442 = t4294 + t4421;
  t4636 = -1.*t2587*t4442;
  t4674 = t4159 + t4636;
  t5240 = t1370*t788*t1551;
  t5294 = -1.*t788*t2587*t2145;
  t5336 = t5240 + t5294;
  t1068 = t268*t788*t1040;
  t3182 = t1362*t3117;
  t3204 = t1068 + t3182;
  t3499 = t1362*t268*t788;
  t3623 = -1.*t1040*t3117;
  t3645 = t3499 + t3623;
  t3944 = t788*t1040*t2098;
  t4678 = t1362*t4674;
  t4692 = t3944 + t4678;
  t4942 = t1362*t788*t2098;
  t5024 = -1.*t1040*t4674;
  t5091 = t4942 + t5024;
  t5165 = -1.*t1040*t1705;
  t5530 = t1362*t5336;
  t5543 = t5165 + t5530;
  t5591 = -1.*t1362*t1705;
  t5600 = -1.*t1040*t5336;
  t5637 = t5591 + t5600;
  t5820 = t2587*t2463;
  t5823 = t1370*t2898;
  t5880 = t5820 + t5823;
  t6970 = -1.*t3321;
  t6991 = 1. + t6970;
  t3301 = -1.*t260*t3204;
  t3760 = t3321*t3645;
  t3832 = t3301 + t3760;
  t6296 = t3321*t3204;
  t6374 = t260*t3645;
  t6388 = t6296 + t6374;
  t6614 = -1.*t1362;
  t6619 = 1. + t6614;
  t6622 = -0.183*t6619;
  t6630 = 0. + t6622;
  t6639 = -0.047*t2587;
  t6645 = 0. + t6639;
  t6664 = -1.*t1370;
  t6668 = 1. + t6664;
  t6670 = 0.047*t6668;
  t6785 = 0. + t6670;
  t5926 = t2587*t4147;
  t6030 = t1370*t4442;
  t6082 = t5926 + t6030;
  t6836 = -0.183*t1040;
  t6858 = 0. + t6836;
  t7012 = -0.15*t6991;
  t7028 = -0.183*t260;
  t7117 = 0. + t7012 + t7028;
  t7132 = -0.183*t6991;
  t7208 = 0.15*t260;
  t7211 = 0. + t7132 + t7208;
  t4878 = -1.*t260*t4692;
  t5099 = t3321*t5091;
  t5152 = t4878 + t5099;
  t6459 = t3321*t4692;
  t6559 = t260*t5091;
  t6584 = t6459 + t6559;
  t6111 = t788*t1551*t2587;
  t6162 = t1370*t788*t2145;
  t6176 = t6111 + t6162;
  t5563 = -1.*t260*t5543;
  t5711 = t3321*t5637;
  t5758 = t5563 + t5711;
  t6592 = t3321*t5543;
  t6599 = t260*t5637;
  t6600 = t6592 + t6599;

  p_output1(0)=t3832;
  p_output1(1)=t5152;
  p_output1(2)=t5758;
  p_output1(3)=0.;
  p_output1(4)=t5880;
  p_output1(5)=t6082;
  p_output1(6)=t6176;
  p_output1(7)=0.;
  p_output1(8)=t6388;
  p_output1(9)=t6584;
  p_output1(10)=t6600;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.183*t3832 + 0.13205*t5880 - 0.3*t6388 + t2463*t6645 + t2898*t6785 + t3117*t6858 + t3204*t7117 + t3645*t7211 + t268*t6630*t788 + var1(0);
  p_output1(13)=0. - 0.183*t5152 + 0.13205*t6082 - 0.3*t6584 + t4147*t6645 + t4442*t6785 + t4674*t6858 + t4692*t7117 + t5091*t7211 + t2098*t6630*t788 + var1(1);
  p_output1(14)=0. - 0.183*t5758 + 0.13205*t6176 - 0.3*t6600 - 1.*t1705*t6630 + t5336*t6858 + t5543*t7117 + t5637*t7211 + t1551*t6645*t788 + t2145*t6785*t788 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_RLfoot(const Eigen::Matrix<double,18,1> &var1)
//void H_RLfoot(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



