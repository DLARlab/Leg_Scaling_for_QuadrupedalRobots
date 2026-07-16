/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:11:12 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RL_thigh_joint.h"

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
  double t1660;
  double t3983;
  double t2879;
  double t3314;
  double t4098;
  double t2202;
  double t3395;
  double t4169;
  double t4563;
  double t4775;
  double t5092;
  double t5198;
  double t5249;
  double t148;
  double t721;
  double t5527;
  double t5557;
  double t5581;
  double t5733;
  double t370;
  double t399;
  double t501;
  double t668;
  double t2349;
  double t2391;
  double t4782;
  double t4788;
  double t5038;
  double t5074;
  double t6183;
  double t6307;
  double t6340;
  double t6432;
  double t6450;
  double t6455;
  double t5541;
  double t5554;
  double t6676;
  double t6682;
  double t6766;
  double t7005;
  double t7010;
  double t7012;
  double t7219;
  double t7233;
  double t7239;
  double t7345;
  double t7346;
  double t7348;
  double t7442;
  double t7470;
  double t7476;
  double t7507;
  double t7512;
  double t7537;
  double t7615;
  double t7617;
  double t7621;
  double t5437;
  double t7636;
  double t7650;
  double t7752;
  double t7753;
  double t7757;
  double t7783;
  double t7786;
  double t7815;
  double t7822;
  double t7824;
  double t7829;
  double t7830;
  double t7698;
  double t7761;
  double t7763;
  double t7765;
  double t7774;
  double t7775;
  double t7777;
  double t7836;
  double t7837;
  t1660 = Sin(var1[3]);
  t3983 = Cos(var1[3]);
  t2879 = Cos(var1[5]);
  t3314 = Sin(var1[4]);
  t4098 = Sin(var1[5]);
  t2202 = Sin(var1[15]);
  t3395 = -1.*t2879*t1660*t3314;
  t4169 = t3983*t4098;
  t4563 = t3395 + t4169;
  t4775 = Cos(var1[15]);
  t5092 = -1.*t3983*t2879;
  t5198 = -1.*t1660*t3314*t4098;
  t5249 = t5092 + t5198;
  t148 = Cos(var1[16]);
  t721 = Cos(var1[4]);
  t5527 = Sin(var1[16]);
  t5557 = t4775*t4563;
  t5581 = -1.*t2202*t5249;
  t5733 = t5557 + t5581;
  t370 = -1.*t148;
  t399 = 1. + t370;
  t501 = -0.183*t399;
  t668 = 0. + t501;
  t2349 = -0.047*t2202;
  t2391 = 0. + t2349;
  t4782 = -1.*t4775;
  t4788 = 1. + t4782;
  t5038 = 0.047*t4788;
  t5074 = 0. + t5038;
  t6183 = t3983*t2879*t3314;
  t6307 = t1660*t4098;
  t6340 = t6183 + t6307;
  t6432 = -1.*t2879*t1660;
  t6450 = t3983*t3314*t4098;
  t6455 = t6432 + t6450;
  t5541 = -0.183*t5527;
  t5554 = 0. + t5541;
  t6676 = t4775*t6340;
  t6682 = -1.*t2202*t6455;
  t6766 = t6676 + t6682;
  t7005 = t4775*t3983*t721*t2879;
  t7010 = -1.*t3983*t721*t2202*t4098;
  t7012 = t7005 + t7010;
  t7219 = t4775*t721*t2879*t1660;
  t7233 = -1.*t721*t2202*t1660*t4098;
  t7239 = t7219 + t7233;
  t7345 = -1.*t4775*t2879*t3314;
  t7346 = t2202*t3314*t4098;
  t7348 = t7345 + t7346;
  t7442 = t2879*t1660;
  t7470 = -1.*t3983*t3314*t4098;
  t7476 = t7442 + t7470;
  t7507 = -1.*t2202*t6340;
  t7512 = t4775*t7476;
  t7537 = t7507 + t7512;
  t7615 = t2879*t1660*t3314;
  t7617 = -1.*t3983*t4098;
  t7621 = t7615 + t7617;
  t5437 = t4775*t5249;
  t7636 = -1.*t2202*t7621;
  t7650 = t7636 + t5437;
  t7752 = -1.*t721*t2879*t2202;
  t7753 = -1.*t4775*t721*t4098;
  t7757 = t7752 + t7753;
  t7783 = -1.*t4775*t6455;
  t7786 = t7507 + t7783;
  t7815 = t3983*t2879;
  t7822 = t1660*t3314*t4098;
  t7824 = t7815 + t7822;
  t7829 = -1.*t4775*t7824;
  t7830 = t7636 + t7829;
  t7698 = t4775*t7621;
  t7761 = t5554*t7757;
  t7763 = 0.183*t5527*t7757;
  t7765 = t4775*t721*t2879;
  t7774 = -1.*t721*t2202*t4098;
  t7775 = t7765 + t7774;
  t7777 = 0.13205*t7775;
  t7836 = -1.*t2202*t7824;
  t7837 = t7698 + t7836;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t2391*t4563 + t5074*t5249 + 0.13205*(t2202*t4563 + t5437) + t5554*t5733 - 1.*t1660*t668*t721 - 0.183*(-1.*t5527*t5733 - 1.*t148*t1660*t721);
  p_output1(10)=t2391*t6340 + t5074*t6455 + 0.13205*(t2202*t6340 + t4775*t6455) + t5554*t6766 + t3983*t668*t721 - 0.183*(-1.*t5527*t6766 + t148*t3983*t721);
  p_output1(11)=0;
  p_output1(12)=-1.*t3314*t3983*t668 + t5554*t7012 - 0.183*(-1.*t148*t3314*t3983 - 1.*t5527*t7012) + t2391*t2879*t3983*t721 + t3983*t4098*t5074*t721 + 0.13205*(t2202*t2879*t3983*t721 + t3983*t4098*t4775*t721);
  p_output1(13)=-1.*t1660*t3314*t668 + t1660*t2391*t2879*t721 + t1660*t4098*t5074*t721 + 0.13205*(t1660*t2202*t2879*t721 + t1660*t4098*t4775*t721) + t5554*t7239 - 0.183*(-1.*t148*t1660*t3314 - 1.*t5527*t7239);
  p_output1(14)=-1.*t2391*t2879*t3314 + 0.13205*(-1.*t2202*t2879*t3314 - 1.*t3314*t4098*t4775) - 1.*t3314*t4098*t5074 - 1.*t668*t721 + t5554*t7348 - 0.183*(-1.*t148*t721 - 1.*t5527*t7348);
  p_output1(15)=t5074*t6340 + t2391*t7476 + 0.13205*(t6676 + t2202*t7476) + 0.183*t5527*t7537 + t5554*t7537;
  p_output1(16)=t2391*t5249 + t5074*t7621 + 0.183*t5527*t7650 + t5554*t7650 + 0.13205*(t2202*t5249 + t7698);
  p_output1(17)=-1.*t2391*t4098*t721 + t2879*t5074*t721 + t7761 + t7763 + t7777;
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
  p_output1(36)=0;
  p_output1(37)=0;
  p_output1(38)=0;
  p_output1(39)=0;
  p_output1(40)=0;
  p_output1(41)=0;
  p_output1(42)=0;
  p_output1(43)=0;
  p_output1(44)=0;
  p_output1(45)=-0.047*t4775*t6340 + 0.047*t2202*t6455 + 0.13205*t6766 + 0.183*t5527*t7786 + t5554*t7786;
  p_output1(46)=-0.047*t4775*t7621 + 0.047*t2202*t7824 + 0.183*t5527*t7830 + t5554*t7830 + 0.13205*t7837;
  p_output1(47)=0.047*t2202*t4098*t721 - 0.047*t2879*t4775*t721 + t7761 + t7763 + t7777;
  p_output1(48)=-0.183*t148*t6766 - 0.183*t3983*t5527*t721 - 0.183*(-1.*t148*t6766 - 1.*t3983*t5527*t721);
  p_output1(49)=-0.183*t1660*t5527*t721 - 0.183*t148*t7837 - 0.183*(-1.*t1660*t5527*t721 - 1.*t148*t7837);
  p_output1(50)=0.183*t3314*t5527 - 0.183*t148*t7775 - 0.183*(t3314*t5527 - 1.*t148*t7775);
  p_output1(51)=0;
  p_output1(52)=0;
  p_output1(53)=0;
}


       
Eigen::Matrix<double,3,18> Jp_RL_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void Jp_RL_thigh_joint(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



