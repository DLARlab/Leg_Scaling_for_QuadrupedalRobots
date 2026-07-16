/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:21:23 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_FL_calf_joint.h"

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
  double t570;
  double t961;
  double t657;
  double t826;
  double t1077;
  double t613;
  double t890;
  double t1125;
  double t1156;
  double t1192;
  double t1368;
  double t1404;
  double t1409;
  double t423;
  double t1622;
  double t32;
  double t1744;
  double t1747;
  double t1793;
  double t1870;
  double t1930;
  double t2076;
  double t2208;
  double t2255;
  double t2306;
  double t2367;
  double t2557;
  double t2764;
  double t2778;
  double t105;
  double t136;
  double t285;
  double t335;
  double t638;
  double t656;
  double t1319;
  double t1326;
  double t1333;
  double t1346;
  double t3566;
  double t3635;
  double t3709;
  double t3833;
  double t3927;
  double t3943;
  double t1684;
  double t1715;
  double t2207;
  double t2229;
  double t2249;
  double t4451;
  double t4492;
  double t4494;
  double t2427;
  double t2483;
  double t2517;
  double t4594;
  double t4612;
  double t4613;
  double t4689;
  double t4718;
  double t4772;
  double t5779;
  double t5790;
  double t5811;
  double t5945;
  double t6022;
  double t6146;
  double t6167;
  double t6247;
  double t6254;
  double t6904;
  double t6940;
  double t6966;
  double t7035;
  double t7066;
  double t7098;
  double t7148;
  double t7266;
  double t7274;
  double t7516;
  double t7524;
  double t7535;
  double t7548;
  double t7592;
  double t7619;
  double t7680;
  double t7681;
  double t7695;
  double t7865;
  double t7899;
  double t7901;
  double t7959;
  double t7962;
  double t7963;
  double t8304;
  double t8305;
  double t8320;
  double t1450;
  double t8357;
  double t8362;
  double t8579;
  double t8582;
  double t8585;
  double t8748;
  double t8766;
  double t8932;
  double t8936;
  double t8942;
  double t8948;
  double t8953;
  double t8380;
  double t8586;
  double t8591;
  double t8593;
  double t8608;
  double t8620;
  double t8624;
  double t8627;
  double t8628;
  double t8633;
  double t8645;
  double t8652;
  double t8654;
  double t8661;
  double t8677;
  double t8685;
  double t9071;
  double t9091;
  double t9106;
  double t4893;
  double t8962;
  double t8963;
  double t9291;
  double t9314;
  double t9326;
  double t9335;
  double t9344;
  double t9461;
  double t9483;
  double t9490;
  double t9505;
  double t9511;
  double t9514;
  double t4845;
  double t4924;
  double t9209;
  double t9588;
  double t9592;
  double t9594;
  double t9609;
  double t9615;
  double t9662;
  double t9664;
  double t9674;
  double t9369;
  double t9386;
  double t9723;
  double t9728;
  double t9745;
  double t9523;
  double t9550;
  t570 = Sin(var1[3]);
  t961 = Cos(var1[3]);
  t657 = Cos(var1[5]);
  t826 = Sin(var1[4]);
  t1077 = Sin(var1[5]);
  t613 = Sin(var1[9]);
  t890 = -1.*t657*t570*t826;
  t1125 = t961*t1077;
  t1156 = t890 + t1125;
  t1192 = Cos(var1[9]);
  t1368 = -1.*t961*t657;
  t1404 = -1.*t570*t826*t1077;
  t1409 = t1368 + t1404;
  t423 = Cos(var1[4]);
  t1622 = Sin(var1[10]);
  t32 = Cos(var1[10]);
  t1744 = t1192*t1156;
  t1747 = -1.*t613*t1409;
  t1793 = t1744 + t1747;
  t1870 = Cos(var1[11]);
  t1930 = -1.*t1870;
  t2076 = 1. + t1930;
  t2208 = Sin(var1[11]);
  t2255 = -1.*t423*t1622*t570;
  t2306 = t32*t1793;
  t2367 = t2255 + t2306;
  t2557 = -1.*t32*t423*t570;
  t2764 = -1.*t1622*t1793;
  t2778 = t2557 + t2764;
  t105 = -1.*t32;
  t136 = 1. + t105;
  t285 = 0.183*t136;
  t335 = 0. + t285;
  t638 = -0.047*t613;
  t656 = 0. + t638;
  t1319 = -1.*t1192;
  t1326 = 1. + t1319;
  t1333 = 0.047*t1326;
  t1346 = 0. + t1333;
  t3566 = t961*t657*t826;
  t3635 = t570*t1077;
  t3709 = t3566 + t3635;
  t3833 = -1.*t657*t570;
  t3927 = t961*t826*t1077;
  t3943 = t3833 + t3927;
  t1684 = 0.183*t1622;
  t1715 = 0. + t1684;
  t2207 = -0.25*t2076;
  t2229 = 0.183*t2208;
  t2249 = 0. + t2207 + t2229;
  t4451 = t1192*t3709;
  t4492 = -1.*t613*t3943;
  t4494 = t4451 + t4492;
  t2427 = 0.183*t2076;
  t2483 = 0.25*t2208;
  t2517 = 0. + t2427 + t2483;
  t4594 = t961*t423*t1622;
  t4612 = t32*t4494;
  t4613 = t4594 + t4612;
  t4689 = t32*t961*t423;
  t4718 = -1.*t1622*t4494;
  t4772 = t4689 + t4718;
  t5779 = t1192*t961*t423*t657;
  t5790 = -1.*t961*t423*t613*t1077;
  t5811 = t5779 + t5790;
  t5945 = -1.*t961*t1622*t826;
  t6022 = t32*t5811;
  t6146 = t5945 + t6022;
  t6167 = -1.*t32*t961*t826;
  t6247 = -1.*t1622*t5811;
  t6254 = t6167 + t6247;
  t6904 = t1192*t423*t657*t570;
  t6940 = -1.*t423*t613*t570*t1077;
  t6966 = t6904 + t6940;
  t7035 = -1.*t1622*t570*t826;
  t7066 = t32*t6966;
  t7098 = t7035 + t7066;
  t7148 = -1.*t32*t570*t826;
  t7266 = -1.*t1622*t6966;
  t7274 = t7148 + t7266;
  t7516 = -1.*t1192*t657*t826;
  t7524 = t613*t826*t1077;
  t7535 = t7516 + t7524;
  t7548 = -1.*t423*t1622;
  t7592 = t32*t7535;
  t7619 = t7548 + t7592;
  t7680 = -1.*t32*t423;
  t7681 = -1.*t1622*t7535;
  t7695 = t7680 + t7681;
  t7865 = t657*t570;
  t7899 = -1.*t961*t826*t1077;
  t7901 = t7865 + t7899;
  t7959 = -1.*t613*t3709;
  t7962 = t1192*t7901;
  t7963 = t7959 + t7962;
  t8304 = t657*t570*t826;
  t8305 = -1.*t961*t1077;
  t8320 = t8304 + t8305;
  t1450 = t1192*t1409;
  t8357 = -1.*t613*t8320;
  t8362 = t8357 + t1450;
  t8579 = -1.*t423*t657*t613;
  t8582 = -1.*t1192*t423*t1077;
  t8585 = t8579 + t8582;
  t8748 = -1.*t1192*t3943;
  t8766 = t7959 + t8748;
  t8932 = t961*t657;
  t8936 = t570*t826*t1077;
  t8942 = t8932 + t8936;
  t8948 = -1.*t1192*t8942;
  t8953 = t8357 + t8948;
  t8380 = t1192*t8320;
  t8586 = t1715*t8585;
  t8591 = t32*t2249*t8585;
  t8593 = -1.*t1622*t2517*t8585;
  t8608 = t1192*t423*t657;
  t8620 = -1.*t423*t613*t1077;
  t8624 = t8608 + t8620;
  t8627 = 0.15331*t8624;
  t8628 = -1.*t1870*t1622*t8585;
  t8633 = -1.*t32*t2208*t8585;
  t8645 = t8628 + t8633;
  t8652 = 0.183*t8645;
  t8654 = t32*t1870*t8585;
  t8661 = -1.*t1622*t2208*t8585;
  t8677 = t8654 + t8661;
  t8685 = -0.25*t8677;
  t9071 = -1.*t961*t423*t1622;
  t9091 = -1.*t32*t4494;
  t9106 = t9071 + t9091;
  t4893 = t1870*t4772;
  t8962 = -1.*t613*t8942;
  t8963 = t8380 + t8962;
  t9291 = -1.*t32*t8963;
  t9314 = t2255 + t9291;
  t9326 = t32*t423*t570;
  t9335 = -1.*t1622*t8963;
  t9344 = t9326 + t9335;
  t9461 = t1622*t826;
  t9483 = -1.*t32*t8624;
  t9490 = t9461 + t9483;
  t9505 = -1.*t32*t826;
  t9511 = -1.*t1622*t8624;
  t9514 = t9505 + t9511;
  t4845 = -1.*t2208*t4613;
  t4924 = t4845 + t4893;
  t9209 = -1.*t2208*t4772;
  t9588 = 0.183*t1870;
  t9592 = -0.25*t2208;
  t9594 = t9588 + t9592;
  t9609 = 0.25*t1870;
  t9615 = t9609 + t2229;
  t9662 = t423*t1622*t570;
  t9664 = t32*t8963;
  t9674 = t9662 + t9664;
  t9369 = t1870*t9344;
  t9386 = -1.*t2208*t9344;
  t9723 = -1.*t1622*t826;
  t9728 = t32*t8624;
  t9745 = t9723 + t9728;
  t9523 = t1870*t9514;
  t9550 = -1.*t2208*t9514;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t1346*t1409 + t1715*t1793 + t2249*t2367 + t2517*t2778 + 0.183*(-1.*t2208*t2367 + t1870*t2778) - 0.25*(t1870*t2367 + t2208*t2778) - 1.*t335*t423*t570 + 0.15331*(t1450 + t1156*t613) + t1156*t656;
  p_output1(10)=t1346*t3943 + t1715*t4494 + t2249*t4613 + t2517*t4772 - 0.25*(t1870*t4613 + t2208*t4772) + 0.183*t4924 + 0.15331*(t1192*t3943 + t3709*t613) + t3709*t656 + t335*t423*t961;
  p_output1(11)=0;
  p_output1(12)=t1715*t5811 + t2249*t6146 + t2517*t6254 + 0.183*(-1.*t2208*t6146 + t1870*t6254) - 0.25*(t1870*t6146 + t2208*t6254) + t1077*t1346*t423*t961 + t423*t656*t657*t961 - 1.*t335*t826*t961 + 0.15331*(t1077*t1192*t423*t961 + t423*t613*t657*t961);
  p_output1(13)=t1077*t1346*t423*t570 + t423*t570*t656*t657 + 0.15331*(t1077*t1192*t423*t570 + t423*t570*t613*t657) + t1715*t6966 + t2249*t7098 + t2517*t7274 + 0.183*(-1.*t2208*t7098 + t1870*t7274) - 0.25*(t1870*t7098 + t2208*t7274) - 1.*t335*t570*t826;
  p_output1(14)=-1.*t335*t423 + t1715*t7535 + t2249*t7619 + t2517*t7695 + 0.183*(-1.*t2208*t7619 + t1870*t7695) - 0.25*(t1870*t7619 + t2208*t7695) - 1.*t1077*t1346*t826 - 1.*t656*t657*t826 + 0.15331*(-1.*t1077*t1192*t826 - 1.*t613*t657*t826);
  p_output1(15)=t1346*t3709 + t656*t7901 + 0.15331*(t4451 + t613*t7901) + t1715*t7963 - 1.*t1622*t2517*t7963 + t2249*t32*t7963 - 0.25*(-1.*t1622*t2208*t7963 + t1870*t32*t7963) + 0.183*(-1.*t1622*t1870*t7963 - 1.*t2208*t32*t7963);
  p_output1(16)=t1409*t656 + t1346*t8320 + t1715*t8362 - 1.*t1622*t2517*t8362 + t2249*t32*t8362 - 0.25*(-1.*t1622*t2208*t8362 + t1870*t32*t8362) + 0.183*(-1.*t1622*t1870*t8362 - 1.*t2208*t32*t8362) + 0.15331*(t1409*t613 + t8380);
  p_output1(17)=-1.*t1077*t423*t656 + t1346*t423*t657 + t8586 + t8591 + t8593 + t8627 + t8652 + t8685;
  p_output1(18)=0;
  p_output1(19)=0;
  p_output1(20)=0;
  p_output1(21)=0;
  p_output1(22)=0;
  p_output1(23)=0;
  p_output1(24)=0;
  p_output1(25)=0;
  p_output1(26)=0;
  p_output1(27)=-0.047*t1192*t3709 + 0.15331*t4494 + 0.047*t3943*t613 + t1715*t8766 - 1.*t1622*t2517*t8766 + t2249*t32*t8766 - 0.25*(-1.*t1622*t2208*t8766 + t1870*t32*t8766) + 0.183*(-1.*t1622*t1870*t8766 - 1.*t2208*t32*t8766);
  p_output1(28)=-0.047*t1192*t8320 + 0.047*t613*t8942 + t1715*t8953 - 1.*t1622*t2517*t8953 + t2249*t32*t8953 - 0.25*(-1.*t1622*t2208*t8953 + t1870*t32*t8953) + 0.183*(-1.*t1622*t1870*t8953 - 1.*t2208*t32*t8953) + 0.15331*t8963;
  p_output1(29)=0.047*t1077*t423*t613 - 0.047*t1192*t423*t657 + t8586 + t8591 + t8593 + t8627 + t8652 + t8685;
  p_output1(30)=0.183*t32*t4494 + t2249*t4772 + t2517*t9106 - 0.25*(t4893 + t2208*t9106) + 0.183*(t1870*t9106 + t9209) + 0.183*t1622*t423*t961;
  p_output1(31)=0.183*t1622*t423*t570 + 0.183*t32*t8963 + t2517*t9314 + t2249*t9344 - 0.25*(t2208*t9314 + t9369) + 0.183*(t1870*t9314 + t9386);
  p_output1(32)=-0.183*t1622*t826 + 0.183*t32*t8624 + t2517*t9490 + t2249*t9514 - 0.25*(t2208*t9490 + t9523) + 0.183*(t1870*t9490 + t9550);
  p_output1(33)=-0.25*t4924 + 0.183*(-1.*t1870*t4613 + t9209) + t4613*t9594 + t4772*t9615;
  p_output1(34)=t9344*t9615 + t9594*t9674 + 0.183*(t9386 - 1.*t1870*t9674) - 0.25*(t9369 - 1.*t2208*t9674);
  p_output1(35)=t9514*t9615 + t9594*t9745 + 0.183*(t9550 - 1.*t1870*t9745) - 0.25*(t9523 - 1.*t2208*t9745);
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


       
Eigen::Matrix<double,3,18> Jp_FL_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void Jp_FL_calf_joint(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



