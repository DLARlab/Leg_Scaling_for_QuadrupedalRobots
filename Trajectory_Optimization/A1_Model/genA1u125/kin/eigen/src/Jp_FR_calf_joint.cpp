/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:21:16 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_FR_calf_joint.h"

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
  double t331;
  double t599;
  double t634;
  double t584;
  double t653;
  double t429;
  double t617;
  double t785;
  double t832;
  double t926;
  double t980;
  double t1061;
  double t1141;
  double t144;
  double t1586;
  double t1663;
  double t1867;
  double t139;
  double t1931;
  double t2615;
  double t2647;
  double t2722;
  double t2739;
  double t2929;
  double t2965;
  double t2996;
  double t2197;
  double t2318;
  double t2432;
  double t174;
  double t216;
  double t245;
  double t280;
  double t435;
  double t455;
  double t539;
  double t583;
  double t1221;
  double t1370;
  double t4473;
  double t4610;
  double t4714;
  double t4832;
  double t4863;
  double t4868;
  double t1995;
  double t2027;
  double t5184;
  double t5236;
  double t5251;
  double t2738;
  double t2876;
  double t2900;
  double t3110;
  double t3155;
  double t3410;
  double t5361;
  double t5364;
  double t5399;
  double t5320;
  double t5323;
  double t5324;
  double t6074;
  double t6131;
  double t6204;
  double t6603;
  double t6653;
  double t6664;
  double t6399;
  double t6574;
  double t6595;
  double t7158;
  double t7175;
  double t7194;
  double t7271;
  double t7313;
  double t7357;
  double t7220;
  double t7244;
  double t7258;
  double t7635;
  double t7640;
  double t7653;
  double t7731;
  double t7751;
  double t7759;
  double t7695;
  double t7699;
  double t7711;
  double t8048;
  double t8049;
  double t8087;
  double t8204;
  double t8206;
  double t8208;
  double t8422;
  double t8433;
  double t8453;
  double t1408;
  double t8526;
  double t8565;
  double t8762;
  double t8784;
  double t8831;
  double t8933;
  double t8937;
  double t8500;
  double t9008;
  double t9034;
  double t9049;
  double t9096;
  double t9103;
  double t8716;
  double t8717;
  double t8744;
  double t8759;
  double t8832;
  double t8840;
  double t8843;
  double t8851;
  double t8865;
  double t8867;
  double t8875;
  double t8894;
  double t8895;
  double t8898;
  double t8901;
  double t5641;
  double t9293;
  double t9297;
  double t9307;
  double t9072;
  double t9084;
  double t9454;
  double t9460;
  double t9469;
  double t9474;
  double t9483;
  double t9597;
  double t9599;
  double t9600;
  double t9605;
  double t9606;
  double t9615;
  double t5762;
  double t5800;
  double t9379;
  double t9676;
  double t9677;
  double t9681;
  double t9691;
  double t9692;
  double t9499;
  double t9723;
  double t9728;
  double t9730;
  double t9551;
  double t9633;
  double t9767;
  double t9769;
  double t9789;
  double t9656;
  t331 = Sin(var1[3]);
  t599 = Cos(var1[5]);
  t634 = Sin(var1[4]);
  t584 = Cos(var1[3]);
  t653 = Sin(var1[5]);
  t429 = Cos(var1[6]);
  t617 = -1.*t584*t599;
  t785 = -1.*t331*t634*t653;
  t832 = t617 + t785;
  t926 = -1.*t599*t331*t634;
  t980 = t584*t653;
  t1061 = t926 + t980;
  t1141 = Sin(var1[6]);
  t144 = Cos(var1[7]);
  t1586 = t429*t1061;
  t1663 = -1.*t832*t1141;
  t1867 = t1586 + t1663;
  t139 = Cos(var1[4]);
  t1931 = Sin(var1[7]);
  t2615 = Cos(var1[8]);
  t2647 = -1.*t2615;
  t2722 = 1. + t2647;
  t2739 = Sin(var1[8]);
  t2929 = -1.*t139*t144*t331;
  t2965 = -1.*t1867*t1931;
  t2996 = t2929 + t2965;
  t2197 = t144*t1867;
  t2318 = -1.*t139*t331*t1931;
  t2432 = t2197 + t2318;
  t174 = -1.*t144;
  t216 = 1. + t174;
  t245 = 0.183*t216;
  t280 = 0. + t245;
  t435 = -1.*t429;
  t455 = 1. + t435;
  t539 = -0.047*t455;
  t583 = 0. + t539;
  t1221 = 0.047*t1141;
  t1370 = 0. + t1221;
  t4473 = -1.*t599*t331;
  t4610 = t584*t634*t653;
  t4714 = t4473 + t4610;
  t4832 = t584*t599*t634;
  t4863 = t331*t653;
  t4868 = t4832 + t4863;
  t1995 = 0.183*t1931;
  t2027 = 0. + t1995;
  t5184 = t429*t4868;
  t5236 = -1.*t4714*t1141;
  t5251 = t5184 + t5236;
  t2738 = -0.25*t2722;
  t2876 = 0.183*t2739;
  t2900 = 0. + t2738 + t2876;
  t3110 = 0.183*t2722;
  t3155 = 0.25*t2739;
  t3410 = 0. + t3110 + t3155;
  t5361 = t584*t139*t144;
  t5364 = -1.*t5251*t1931;
  t5399 = t5361 + t5364;
  t5320 = t144*t5251;
  t5323 = t584*t139*t1931;
  t5324 = t5320 + t5323;
  t6074 = t584*t139*t599*t429;
  t6131 = -1.*t584*t139*t653*t1141;
  t6204 = t6074 + t6131;
  t6603 = -1.*t584*t144*t634;
  t6653 = -1.*t6204*t1931;
  t6664 = t6603 + t6653;
  t6399 = t144*t6204;
  t6574 = -1.*t584*t634*t1931;
  t6595 = t6399 + t6574;
  t7158 = t139*t599*t429*t331;
  t7175 = -1.*t139*t331*t653*t1141;
  t7194 = t7158 + t7175;
  t7271 = -1.*t144*t331*t634;
  t7313 = -1.*t7194*t1931;
  t7357 = t7271 + t7313;
  t7220 = t144*t7194;
  t7244 = -1.*t331*t634*t1931;
  t7258 = t7220 + t7244;
  t7635 = -1.*t599*t429*t634;
  t7640 = t634*t653*t1141;
  t7653 = t7635 + t7640;
  t7731 = -1.*t139*t144;
  t7751 = -1.*t7653*t1931;
  t7759 = t7731 + t7751;
  t7695 = t144*t7653;
  t7699 = -1.*t139*t1931;
  t7711 = t7695 + t7699;
  t8048 = t599*t331;
  t8049 = -1.*t584*t634*t653;
  t8087 = t8048 + t8049;
  t8204 = t429*t8087;
  t8206 = -1.*t4868*t1141;
  t8208 = t8204 + t8206;
  t8422 = t599*t331*t634;
  t8433 = -1.*t584*t653;
  t8453 = t8422 + t8433;
  t1408 = t429*t832;
  t8526 = -1.*t8453*t1141;
  t8565 = t1408 + t8526;
  t8762 = -1.*t139*t429*t653;
  t8784 = -1.*t139*t599*t1141;
  t8831 = t8762 + t8784;
  t8933 = -1.*t429*t4714;
  t8937 = t8933 + t8206;
  t8500 = t429*t8453;
  t9008 = t584*t599;
  t9034 = t331*t634*t653;
  t9049 = t9008 + t9034;
  t9096 = -1.*t429*t9049;
  t9103 = t9096 + t8526;
  t8716 = t139*t599*t429;
  t8717 = -1.*t139*t653*t1141;
  t8744 = t8716 + t8717;
  t8759 = -0.15331*t8744;
  t8832 = t8831*t2027;
  t8840 = t144*t8831*t2900;
  t8843 = -1.*t8831*t1931*t3410;
  t8851 = -1.*t2615*t8831*t1931;
  t8865 = -1.*t144*t8831*t2739;
  t8867 = t8851 + t8865;
  t8875 = 0.183*t8867;
  t8894 = t144*t2615*t8831;
  t8895 = -1.*t8831*t1931*t2739;
  t8898 = t8894 + t8895;
  t8901 = -0.25*t8898;
  t5641 = t2615*t5399;
  t9293 = -1.*t144*t5251;
  t9297 = -1.*t584*t139*t1931;
  t9307 = t9293 + t9297;
  t9072 = -1.*t9049*t1141;
  t9084 = t8500 + t9072;
  t9454 = t139*t144*t331;
  t9460 = -1.*t9084*t1931;
  t9469 = t9454 + t9460;
  t9474 = -1.*t144*t9084;
  t9483 = t9474 + t2318;
  t9597 = -1.*t144*t634;
  t9599 = -1.*t8744*t1931;
  t9600 = t9597 + t9599;
  t9605 = -1.*t144*t8744;
  t9606 = t634*t1931;
  t9615 = t9605 + t9606;
  t5762 = -1.*t5324*t2739;
  t5800 = t5641 + t5762;
  t9379 = -1.*t5399*t2739;
  t9676 = 0.183*t2615;
  t9677 = -0.25*t2739;
  t9681 = t9676 + t9677;
  t9691 = 0.25*t2615;
  t9692 = t9691 + t2876;
  t9499 = t2615*t9469;
  t9723 = t144*t9084;
  t9728 = t139*t331*t1931;
  t9730 = t9723 + t9728;
  t9551 = -1.*t9469*t2739;
  t9633 = t2615*t9600;
  t9767 = t144*t8744;
  t9769 = -1.*t634*t1931;
  t9789 = t9767 + t9769;
  t9656 = -1.*t9600*t2739;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t1061*t1370 - 0.15331*(t1061*t1141 + t1408) + t1867*t2027 + t2432*t2900 + 0.183*(-1.*t2432*t2739 + t2615*t2996) - 0.25*(t2432*t2615 + t2739*t2996) - 1.*t139*t280*t331 + t2996*t3410 + t583*t832;
  p_output1(10)=t1370*t4868 - 0.15331*(t429*t4714 + t1141*t4868) + t2027*t5251 + t2900*t5324 + t3410*t5399 - 0.25*(t2615*t5324 + t2739*t5399) + 0.183*t5800 + t4714*t583 + t139*t280*t584;
  p_output1(11)=0;
  p_output1(12)=t1370*t139*t584*t599 + t2027*t6204 - 1.*t280*t584*t634 + t139*t583*t584*t653 - 0.15331*(t1141*t139*t584*t599 + t139*t429*t584*t653) + t2900*t6595 + t3410*t6664 + 0.183*(-1.*t2739*t6595 + t2615*t6664) - 0.25*(t2615*t6595 + t2739*t6664);
  p_output1(13)=t1370*t139*t331*t599 - 1.*t280*t331*t634 + t139*t331*t583*t653 - 0.15331*(t1141*t139*t331*t599 + t139*t331*t429*t653) + t2027*t7194 + t2900*t7258 + t3410*t7357 + 0.183*(-1.*t2739*t7258 + t2615*t7357) - 0.25*(t2615*t7258 + t2739*t7357);
  p_output1(14)=-1.*t139*t280 - 1.*t1370*t599*t634 - 1.*t583*t634*t653 - 0.15331*(-1.*t1141*t599*t634 - 1.*t429*t634*t653) + t2027*t7653 + t2900*t7711 + t3410*t7759 + 0.183*(-1.*t2739*t7711 + t2615*t7759) - 0.25*(t2615*t7711 + t2739*t7759);
  p_output1(15)=t4868*t583 + t1370*t8087 - 0.15331*(t5184 + t1141*t8087) + t2027*t8208 + t144*t2900*t8208 - 1.*t1931*t3410*t8208 + 0.183*(-1.*t1931*t2615*t8208 - 1.*t144*t2739*t8208) - 0.25*(t144*t2615*t8208 - 1.*t1931*t2739*t8208);
  p_output1(16)=t1370*t832 + t583*t8453 - 0.15331*(t1141*t832 + t8500) + t2027*t8565 + t144*t2900*t8565 - 1.*t1931*t3410*t8565 + 0.183*(-1.*t1931*t2615*t8565 - 1.*t144*t2739*t8565) - 0.25*(t144*t2615*t8565 - 1.*t1931*t2739*t8565);
  p_output1(17)=t139*t583*t599 - 1.*t1370*t139*t653 + t8759 + t8832 + t8840 + t8843 + t8875 + t8901;
  p_output1(18)=-0.047*t1141*t4714 + 0.047*t429*t4868 - 0.15331*t5251 + t2027*t8937 + t144*t2900*t8937 - 1.*t1931*t3410*t8937 + 0.183*(-1.*t1931*t2615*t8937 - 1.*t144*t2739*t8937) - 0.25*(t144*t2615*t8937 - 1.*t1931*t2739*t8937);
  p_output1(19)=0.047*t429*t8453 - 0.047*t1141*t9049 - 0.15331*t9084 + t2027*t9103 + t144*t2900*t9103 - 1.*t1931*t3410*t9103 + 0.183*(-1.*t1931*t2615*t9103 - 1.*t144*t2739*t9103) - 0.25*(t144*t2615*t9103 - 1.*t1931*t2739*t9103);
  p_output1(20)=0.047*t139*t429*t599 - 0.047*t1141*t139*t653 + t8759 + t8832 + t8840 + t8843 + t8875 + t8901;
  p_output1(21)=0.183*t144*t5251 + t2900*t5399 + 0.183*t139*t1931*t584 + t3410*t9307 - 0.25*(t5641 + t2739*t9307) + 0.183*(t2615*t9307 + t9379);
  p_output1(22)=0.183*t139*t1931*t331 + 0.183*t144*t9084 + t2900*t9469 + t3410*t9483 - 0.25*(t2739*t9483 + t9499) + 0.183*(t2615*t9483 + t9551);
  p_output1(23)=-0.183*t1931*t634 + 0.183*t144*t8744 + t2900*t9600 + t3410*t9615 - 0.25*(t2739*t9615 + t9633) + 0.183*(t2615*t9615 + t9656);
  p_output1(24)=-0.25*t5800 + 0.183*(-1.*t2615*t5324 + t9379) + t5324*t9681 + t5399*t9692;
  p_output1(25)=t9469*t9692 + t9681*t9730 + 0.183*(t9551 - 1.*t2615*t9730) - 0.25*(t9499 - 1.*t2739*t9730);
  p_output1(26)=t9600*t9692 + t9681*t9789 + 0.183*(t9656 - 1.*t2615*t9789) - 0.25*(t9633 - 1.*t2739*t9789);
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


       
Eigen::Matrix<double,3,18> Jp_FR_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void Jp_FR_calf_joint(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



