/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:04:11 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_FR_thigh_joint.h"

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
  double t254;
  double t729;
  double t842;
  double t676;
  double t896;
  double t339;
  double t802;
  double t929;
  double t1083;
  double t1141;
  double t1160;
  double t1216;
  double t1275;
  double t70;
  double t125;
  double t1974;
  double t1979;
  double t2116;
  double t2204;
  double t134;
  double t142;
  double t160;
  double t164;
  double t364;
  double t496;
  double t553;
  double t590;
  double t1319;
  double t1355;
  double t2899;
  double t3033;
  double t3124;
  double t3175;
  double t3285;
  double t3386;
  double t2451;
  double t2514;
  double t3971;
  double t4251;
  double t4252;
  double t4837;
  double t4914;
  double t4934;
  double t7025;
  double t7323;
  double t7776;
  double t9528;
  double t9539;
  double t9541;
  double t9575;
  double t9578;
  double t9579;
  double t9604;
  double t9605;
  double t9609;
  double t9615;
  double t9617;
  double t9622;
  double t1379;
  double t9647;
  double t9648;
  double t9659;
  double t9660;
  double t9664;
  double t9674;
  double t9676;
  double t9636;
  double t9686;
  double t9688;
  double t9689;
  double t9695;
  double t9696;
  double t9654;
  double t9655;
  double t9657;
  double t9658;
  double t9666;
  double t9668;
  double t9692;
  double t9693;
  t254 = Sin(var1[3]);
  t729 = Cos(var1[5]);
  t842 = Sin(var1[4]);
  t676 = Cos(var1[3]);
  t896 = Sin(var1[5]);
  t339 = Cos(var1[6]);
  t802 = -1.*t676*t729;
  t929 = -1.*t254*t842*t896;
  t1083 = t802 + t929;
  t1141 = -1.*t729*t254*t842;
  t1160 = t676*t896;
  t1216 = t1141 + t1160;
  t1275 = Sin(var1[6]);
  t70 = Cos(var1[4]);
  t125 = Cos(var1[7]);
  t1974 = t339*t1216;
  t1979 = -1.*t1083*t1275;
  t2116 = t1974 + t1979;
  t2204 = Sin(var1[7]);
  t134 = -1.*t125;
  t142 = 1. + t134;
  t160 = 0.183*t142;
  t164 = 0. + t160;
  t364 = -1.*t339;
  t496 = 1. + t364;
  t553 = -0.047*t496;
  t590 = 0. + t553;
  t1319 = 0.047*t1275;
  t1355 = 0. + t1319;
  t2899 = -1.*t729*t254;
  t3033 = t676*t842*t896;
  t3124 = t2899 + t3033;
  t3175 = t676*t729*t842;
  t3285 = t254*t896;
  t3386 = t3175 + t3285;
  t2451 = 0.183*t2204;
  t2514 = 0. + t2451;
  t3971 = t339*t3386;
  t4251 = -1.*t3124*t1275;
  t4252 = t3971 + t4251;
  t4837 = t676*t70*t729*t339;
  t4914 = -1.*t676*t70*t896*t1275;
  t4934 = t4837 + t4914;
  t7025 = t70*t729*t339*t254;
  t7323 = -1.*t70*t254*t896*t1275;
  t7776 = t7025 + t7323;
  t9528 = -1.*t729*t339*t842;
  t9539 = t842*t896*t1275;
  t9541 = t9528 + t9539;
  t9575 = t729*t254;
  t9578 = -1.*t676*t842*t896;
  t9579 = t9575 + t9578;
  t9604 = t339*t9579;
  t9605 = -1.*t3386*t1275;
  t9609 = t9604 + t9605;
  t9615 = t729*t254*t842;
  t9617 = -1.*t676*t896;
  t9622 = t9615 + t9617;
  t1379 = t339*t1083;
  t9647 = -1.*t9622*t1275;
  t9648 = t1379 + t9647;
  t9659 = -1.*t70*t339*t896;
  t9660 = -1.*t70*t729*t1275;
  t9664 = t9659 + t9660;
  t9674 = -1.*t339*t3124;
  t9676 = t9674 + t9605;
  t9636 = t339*t9622;
  t9686 = t676*t729;
  t9688 = t254*t842*t896;
  t9689 = t9686 + t9688;
  t9695 = -1.*t339*t9689;
  t9696 = t9695 + t9647;
  t9654 = t70*t729*t339;
  t9655 = -1.*t70*t896*t1275;
  t9657 = t9654 + t9655;
  t9658 = -0.13205*t9657;
  t9666 = t9664*t2514;
  t9668 = -0.183*t9664*t2204;
  t9692 = -1.*t9689*t1275;
  t9693 = t9636 + t9692;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t1216*t1355 - 0.13205*(t1216*t1275 + t1379) + t2116*t2514 + t1083*t590 - 1.*t164*t254*t70 + 0.183*(-1.*t2116*t2204 - 1.*t125*t254*t70);
  p_output1(10)=t1355*t3386 - 0.13205*(t1275*t3386 + t3124*t339) + t2514*t4252 + t3124*t590 + t164*t676*t70 + 0.183*(-1.*t2204*t4252 + t125*t676*t70);
  p_output1(11)=0;
  p_output1(12)=t2514*t4934 + t1355*t676*t70*t729 - 1.*t164*t676*t842 + 0.183*(-1.*t2204*t4934 - 1.*t125*t676*t842) + t590*t676*t70*t896 - 0.13205*(t1275*t676*t70*t729 + t339*t676*t70*t896);
  p_output1(13)=t1355*t254*t70*t729 + t2514*t7776 - 1.*t164*t254*t842 + 0.183*(-1.*t2204*t7776 - 1.*t125*t254*t842) + t254*t590*t70*t896 - 0.13205*(t1275*t254*t70*t729 + t254*t339*t70*t896);
  p_output1(14)=-1.*t164*t70 - 1.*t1355*t729*t842 - 1.*t590*t842*t896 - 0.13205*(-1.*t1275*t729*t842 - 1.*t339*t842*t896) + t2514*t9541 + 0.183*(-1.*t125*t70 - 1.*t2204*t9541);
  p_output1(15)=t3386*t590 + t1355*t9579 - 0.13205*(t3971 + t1275*t9579) - 0.183*t2204*t9609 + t2514*t9609;
  p_output1(16)=t1083*t1355 + t590*t9622 - 0.13205*(t1083*t1275 + t9636) - 0.183*t2204*t9648 + t2514*t9648;
  p_output1(17)=t590*t70*t729 - 1.*t1355*t70*t896 + t9658 + t9666 + t9668;
  p_output1(18)=-0.047*t1275*t3124 + 0.047*t3386*t339 - 0.13205*t4252 - 0.183*t2204*t9676 + t2514*t9676;
  p_output1(19)=0.047*t339*t9622 - 0.047*t1275*t9689 - 0.13205*t9693 - 0.183*t2204*t9696 + t2514*t9696;
  p_output1(20)=0.047*t339*t70*t729 - 0.047*t1275*t70*t896 + t9658 + t9666 + t9668;
  p_output1(21)=0.183*t125*t4252 + 0.183*t2204*t676*t70 + 0.183*(-1.*t125*t4252 - 1.*t2204*t676*t70);
  p_output1(22)=0.183*t2204*t254*t70 + 0.183*t125*t9693 + 0.183*(-1.*t2204*t254*t70 - 1.*t125*t9693);
  p_output1(23)=-0.183*t2204*t842 + 0.183*t125*t9657 + 0.183*(t2204*t842 - 1.*t125*t9657);
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


       
Eigen::Matrix<double,3,18> Jp_FR_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void Jp_FR_thigh_joint(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



