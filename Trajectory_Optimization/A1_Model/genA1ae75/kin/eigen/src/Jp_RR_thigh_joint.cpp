/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:51:46 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RR_thigh_joint.h"

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
  double t1209;
  double t1837;
  double t1507;
  double t1637;
  double t1863;
  double t1316;
  double t1695;
  double t1963;
  double t1979;
  double t2151;
  double t2271;
  double t2291;
  double t2328;
  double t409;
  double t1098;
  double t3018;
  double t3556;
  double t3582;
  double t3739;
  double t481;
  double t639;
  double t664;
  double t1002;
  double t1324;
  double t1467;
  double t2162;
  double t2221;
  double t2248;
  double t2260;
  double t5696;
  double t5766;
  double t6059;
  double t7007;
  double t7194;
  double t7674;
  double t3347;
  double t3519;
  double t8787;
  double t8936;
  double t8958;
  double t9233;
  double t9234;
  double t9238;
  double t9362;
  double t9363;
  double t9364;
  double t9413;
  double t9416;
  double t9425;
  double t9449;
  double t9450;
  double t9458;
  double t9464;
  double t9465;
  double t9470;
  double t9491;
  double t9492;
  double t9499;
  double t2389;
  double t9522;
  double t9524;
  double t9551;
  double t9553;
  double t9559;
  double t9616;
  double t9617;
  double t9644;
  double t9657;
  double t9664;
  double t9674;
  double t9677;
  double t9536;
  double t9563;
  double t9569;
  double t9573;
  double t9597;
  double t9602;
  double t9604;
  double t9683;
  double t9686;
  t1209 = Sin(var1[3]);
  t1837 = Cos(var1[3]);
  t1507 = Cos(var1[5]);
  t1637 = Sin(var1[4]);
  t1863 = Sin(var1[5]);
  t1316 = Sin(var1[12]);
  t1695 = -1.*t1507*t1209*t1637;
  t1963 = t1837*t1863;
  t1979 = t1695 + t1963;
  t2151 = Cos(var1[12]);
  t2271 = -1.*t1837*t1507;
  t2291 = -1.*t1209*t1637*t1863;
  t2328 = t2271 + t2291;
  t409 = Cos(var1[13]);
  t1098 = Cos(var1[4]);
  t3018 = Sin(var1[13]);
  t3556 = t2151*t1979;
  t3582 = -1.*t1316*t2328;
  t3739 = t3556 + t3582;
  t481 = -1.*t409;
  t639 = 1. + t481;
  t664 = -0.183*t639;
  t1002 = 0. + t664;
  t1324 = 0.047*t1316;
  t1467 = 0. + t1324;
  t2162 = -1.*t2151;
  t2221 = 1. + t2162;
  t2248 = -0.047*t2221;
  t2260 = 0. + t2248;
  t5696 = t1837*t1507*t1637;
  t5766 = t1209*t1863;
  t6059 = t5696 + t5766;
  t7007 = -1.*t1507*t1209;
  t7194 = t1837*t1637*t1863;
  t7674 = t7007 + t7194;
  t3347 = -0.183*t3018;
  t3519 = 0. + t3347;
  t8787 = t2151*t6059;
  t8936 = -1.*t1316*t7674;
  t8958 = t8787 + t8936;
  t9233 = t2151*t1837*t1098*t1507;
  t9234 = -1.*t1837*t1098*t1316*t1863;
  t9238 = t9233 + t9234;
  t9362 = t2151*t1098*t1507*t1209;
  t9363 = -1.*t1098*t1316*t1209*t1863;
  t9364 = t9362 + t9363;
  t9413 = -1.*t2151*t1507*t1637;
  t9416 = t1316*t1637*t1863;
  t9425 = t9413 + t9416;
  t9449 = t1507*t1209;
  t9450 = -1.*t1837*t1637*t1863;
  t9458 = t9449 + t9450;
  t9464 = -1.*t1316*t6059;
  t9465 = t2151*t9458;
  t9470 = t9464 + t9465;
  t9491 = t1507*t1209*t1637;
  t9492 = -1.*t1837*t1863;
  t9499 = t9491 + t9492;
  t2389 = t2151*t2328;
  t9522 = -1.*t1316*t9499;
  t9524 = t9522 + t2389;
  t9551 = -1.*t1098*t1507*t1316;
  t9553 = -1.*t2151*t1098*t1863;
  t9559 = t9551 + t9553;
  t9616 = -1.*t2151*t7674;
  t9617 = t9464 + t9616;
  t9644 = t1837*t1507;
  t9657 = t1209*t1637*t1863;
  t9664 = t9644 + t9657;
  t9674 = -1.*t2151*t9664;
  t9677 = t9522 + t9674;
  t9536 = t2151*t9499;
  t9563 = t3519*t9559;
  t9569 = 0.183*t3018*t9559;
  t9573 = t2151*t1098*t1507;
  t9597 = -1.*t1098*t1316*t1863;
  t9602 = t9573 + t9597;
  t9604 = -0.13205*t9602;
  t9683 = -1.*t1316*t9664;
  t9686 = t9536 + t9683;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=-1.*t1002*t1098*t1209 + t1467*t1979 + t2260*t2328 - 0.13205*(t1316*t1979 + t2389) + t3519*t3739 - 0.183*(-1.*t3018*t3739 - 1.*t1098*t1209*t409);
  p_output1(10)=t1002*t1098*t1837 + t1467*t6059 + t2260*t7674 - 0.13205*(t1316*t6059 + t2151*t7674) + t3519*t8958 - 0.183*(t1098*t1837*t409 - 1.*t3018*t8958);
  p_output1(11)=0;
  p_output1(12)=t1098*t1467*t1507*t1837 - 1.*t1002*t1637*t1837 - 0.13205*(t1098*t1316*t1507*t1837 + t1098*t1837*t1863*t2151) + t1098*t1837*t1863*t2260 + t3519*t9238 - 0.183*(-1.*t1637*t1837*t409 - 1.*t3018*t9238);
  p_output1(13)=t1098*t1209*t1467*t1507 - 1.*t1002*t1209*t1637 - 0.13205*(t1098*t1209*t1316*t1507 + t1098*t1209*t1863*t2151) + t1098*t1209*t1863*t2260 + t3519*t9364 - 0.183*(-1.*t1209*t1637*t409 - 1.*t3018*t9364);
  p_output1(14)=-1.*t1002*t1098 - 1.*t1467*t1507*t1637 - 0.13205*(-1.*t1316*t1507*t1637 - 1.*t1637*t1863*t2151) - 1.*t1637*t1863*t2260 + t3519*t9425 - 0.183*(-1.*t1098*t409 - 1.*t3018*t9425);
  p_output1(15)=t2260*t6059 + t1467*t9458 - 0.13205*(t8787 + t1316*t9458) + 0.183*t3018*t9470 + t3519*t9470;
  p_output1(16)=t1467*t2328 + t2260*t9499 + 0.183*t3018*t9524 + t3519*t9524 - 0.13205*(t1316*t2328 + t9536);
  p_output1(17)=-1.*t1098*t1467*t1863 + t1098*t1507*t2260 + t9563 + t9569 + t9604;
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
  p_output1(36)=0.047*t2151*t6059 - 0.047*t1316*t7674 - 0.13205*t8958 + 0.183*t3018*t9617 + t3519*t9617;
  p_output1(37)=0.047*t2151*t9499 - 0.047*t1316*t9664 + 0.183*t3018*t9677 + t3519*t9677 - 0.13205*t9686;
  p_output1(38)=-0.047*t1098*t1316*t1863 + 0.047*t1098*t1507*t2151 + t9563 + t9569 + t9604;
  p_output1(39)=-0.183*t1098*t1837*t3018 - 0.183*t409*t8958 - 0.183*(-1.*t1098*t1837*t3018 - 1.*t409*t8958);
  p_output1(40)=-0.183*t1098*t1209*t3018 - 0.183*t409*t9686 - 0.183*(-1.*t1098*t1209*t3018 - 1.*t409*t9686);
  p_output1(41)=0.183*t1637*t3018 - 0.183*t409*t9602 - 0.183*(t1637*t3018 - 1.*t409*t9602);
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


       
Eigen::Matrix<double,3,18> Jp_RR_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void Jp_RR_thigh_joint(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



