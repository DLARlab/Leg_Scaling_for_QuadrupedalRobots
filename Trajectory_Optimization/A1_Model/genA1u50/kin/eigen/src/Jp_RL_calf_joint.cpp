/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:13:56 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RL_calf_joint.h"

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
  double t339;
  double t1125;
  double t780;
  double t800;
  double t1132;
  double t747;
  double t1116;
  double t1358;
  double t1637;
  double t1660;
  double t1740;
  double t1777;
  double t1812;
  double t320;
  double t2082;
  double t63;
  double t2365;
  double t2367;
  double t2368;
  double t2375;
  double t2437;
  double t2457;
  double t2501;
  double t2606;
  double t2652;
  double t2653;
  double t2690;
  double t2692;
  double t2693;
  double t68;
  double t155;
  double t246;
  double t264;
  double t763;
  double t774;
  double t1663;
  double t1675;
  double t1713;
  double t1738;
  double t2714;
  double t2715;
  double t2716;
  double t2720;
  double t2722;
  double t2723;
  double t2094;
  double t2101;
  double t2474;
  double t2563;
  double t2571;
  double t2730;
  double t2732;
  double t2735;
  double t2674;
  double t2675;
  double t2686;
  double t2737;
  double t2740;
  double t2741;
  double t2744;
  double t2747;
  double t2776;
  double t3587;
  double t3597;
  double t3639;
  double t3762;
  double t3764;
  double t3766;
  double t3798;
  double t4225;
  double t4246;
  double t5623;
  double t5656;
  double t5661;
  double t5690;
  double t6074;
  double t6082;
  double t6191;
  double t6208;
  double t6244;
  double t7406;
  double t7714;
  double t8303;
  double t8814;
  double t8822;
  double t8825;
  double t8852;
  double t8858;
  double t8864;
  double t9085;
  double t9089;
  double t9090;
  double t9125;
  double t9142;
  double t9154;
  double t9229;
  double t9230;
  double t9231;
  double t1946;
  double t9241;
  double t9247;
  double t9283;
  double t9285;
  double t9291;
  double t9329;
  double t9332;
  double t9356;
  double t9358;
  double t9359;
  double t9361;
  double t9362;
  double t9254;
  double t9292;
  double t9294;
  double t9295;
  double t9299;
  double t9302;
  double t9303;
  double t9304;
  double t9308;
  double t9309;
  double t9311;
  double t9312;
  double t9313;
  double t9315;
  double t9316;
  double t9317;
  double t9389;
  double t9390;
  double t9391;
  double t2822;
  double t9368;
  double t9369;
  double t9418;
  double t9419;
  double t9423;
  double t9424;
  double t9425;
  double t9438;
  double t9440;
  double t9443;
  double t9445;
  double t9448;
  double t9449;
  double t2813;
  double t2844;
  double t9398;
  double t9460;
  double t9461;
  double t9462;
  double t9466;
  double t9467;
  double t9475;
  double t9476;
  double t9477;
  double t9428;
  double t9432;
  double t9492;
  double t9493;
  double t9494;
  double t9452;
  double t9456;
  t339 = Sin(var1[3]);
  t1125 = Cos(var1[3]);
  t780 = Cos(var1[5]);
  t800 = Sin(var1[4]);
  t1132 = Sin(var1[5]);
  t747 = Sin(var1[15]);
  t1116 = -1.*t780*t339*t800;
  t1358 = t1125*t1132;
  t1637 = t1116 + t1358;
  t1660 = Cos(var1[15]);
  t1740 = -1.*t1125*t780;
  t1777 = -1.*t339*t800*t1132;
  t1812 = t1740 + t1777;
  t320 = Cos(var1[4]);
  t2082 = Sin(var1[16]);
  t63 = Cos(var1[16]);
  t2365 = t1660*t1637;
  t2367 = -1.*t747*t1812;
  t2368 = t2365 + t2367;
  t2375 = Cos(var1[17]);
  t2437 = -1.*t2375;
  t2457 = 1. + t2437;
  t2501 = Sin(var1[17]);
  t2606 = -1.*t320*t2082*t339;
  t2652 = t63*t2368;
  t2653 = t2606 + t2652;
  t2690 = -1.*t63*t320*t339;
  t2692 = -1.*t2082*t2368;
  t2693 = t2690 + t2692;
  t68 = -1.*t63;
  t155 = 1. + t68;
  t246 = -0.183*t155;
  t264 = 0. + t246;
  t763 = -0.047*t747;
  t774 = 0. + t763;
  t1663 = -1.*t1660;
  t1675 = 1. + t1663;
  t1713 = 0.047*t1675;
  t1738 = 0. + t1713;
  t2714 = t1125*t780*t800;
  t2715 = t339*t1132;
  t2716 = t2714 + t2715;
  t2720 = -1.*t780*t339;
  t2722 = t1125*t800*t1132;
  t2723 = t2720 + t2722;
  t2094 = -0.183*t2082;
  t2101 = 0. + t2094;
  t2474 = -0.1*t2457;
  t2563 = -0.183*t2501;
  t2571 = 0. + t2474 + t2563;
  t2730 = t1660*t2716;
  t2732 = -1.*t747*t2723;
  t2735 = t2730 + t2732;
  t2674 = -0.183*t2457;
  t2675 = 0.1*t2501;
  t2686 = 0. + t2674 + t2675;
  t2737 = t1125*t320*t2082;
  t2740 = t63*t2735;
  t2741 = t2737 + t2740;
  t2744 = t63*t1125*t320;
  t2747 = -1.*t2082*t2735;
  t2776 = t2744 + t2747;
  t3587 = t1660*t1125*t320*t780;
  t3597 = -1.*t1125*t320*t747*t1132;
  t3639 = t3587 + t3597;
  t3762 = -1.*t1125*t2082*t800;
  t3764 = t63*t3639;
  t3766 = t3762 + t3764;
  t3798 = -1.*t63*t1125*t800;
  t4225 = -1.*t2082*t3639;
  t4246 = t3798 + t4225;
  t5623 = t1660*t320*t780*t339;
  t5656 = -1.*t320*t747*t339*t1132;
  t5661 = t5623 + t5656;
  t5690 = -1.*t2082*t339*t800;
  t6074 = t63*t5661;
  t6082 = t5690 + t6074;
  t6191 = -1.*t63*t339*t800;
  t6208 = -1.*t2082*t5661;
  t6244 = t6191 + t6208;
  t7406 = -1.*t1660*t780*t800;
  t7714 = t747*t800*t1132;
  t8303 = t7406 + t7714;
  t8814 = -1.*t320*t2082;
  t8822 = t63*t8303;
  t8825 = t8814 + t8822;
  t8852 = -1.*t63*t320;
  t8858 = -1.*t2082*t8303;
  t8864 = t8852 + t8858;
  t9085 = t780*t339;
  t9089 = -1.*t1125*t800*t1132;
  t9090 = t9085 + t9089;
  t9125 = -1.*t747*t2716;
  t9142 = t1660*t9090;
  t9154 = t9125 + t9142;
  t9229 = t780*t339*t800;
  t9230 = -1.*t1125*t1132;
  t9231 = t9229 + t9230;
  t1946 = t1660*t1812;
  t9241 = -1.*t747*t9231;
  t9247 = t9241 + t1946;
  t9283 = -1.*t320*t780*t747;
  t9285 = -1.*t1660*t320*t1132;
  t9291 = t9283 + t9285;
  t9329 = -1.*t1660*t2723;
  t9332 = t9125 + t9329;
  t9356 = t1125*t780;
  t9358 = t339*t800*t1132;
  t9359 = t9356 + t9358;
  t9361 = -1.*t1660*t9359;
  t9362 = t9241 + t9361;
  t9254 = t1660*t9231;
  t9292 = t2101*t9291;
  t9294 = t63*t2571*t9291;
  t9295 = -1.*t2082*t2686*t9291;
  t9299 = t1660*t320*t780;
  t9302 = -1.*t320*t747*t1132;
  t9303 = t9299 + t9302;
  t9304 = 0.08953*t9303;
  t9308 = -1.*t2375*t2082*t9291;
  t9309 = -1.*t63*t2501*t9291;
  t9311 = t9308 + t9309;
  t9312 = -0.183*t9311;
  t9313 = t63*t2375*t9291;
  t9315 = -1.*t2082*t2501*t9291;
  t9316 = t9313 + t9315;
  t9317 = -0.1*t9316;
  t9389 = -1.*t1125*t320*t2082;
  t9390 = -1.*t63*t2735;
  t9391 = t9389 + t9390;
  t2822 = t2375*t2776;
  t9368 = -1.*t747*t9359;
  t9369 = t9254 + t9368;
  t9418 = -1.*t63*t9369;
  t9419 = t2606 + t9418;
  t9423 = t63*t320*t339;
  t9424 = -1.*t2082*t9369;
  t9425 = t9423 + t9424;
  t9438 = t2082*t800;
  t9440 = -1.*t63*t9303;
  t9443 = t9438 + t9440;
  t9445 = -1.*t63*t800;
  t9448 = -1.*t2082*t9303;
  t9449 = t9445 + t9448;
  t2813 = -1.*t2501*t2741;
  t2844 = t2813 + t2822;
  t9398 = -1.*t2501*t2776;
  t9460 = -0.183*t2375;
  t9461 = -0.1*t2501;
  t9462 = t9460 + t9461;
  t9466 = 0.1*t2375;
  t9467 = t9466 + t2563;
  t9475 = t320*t2082*t339;
  t9476 = t63*t9369;
  t9477 = t9475 + t9476;
  t9428 = t2375*t9425;
  t9432 = -1.*t2501*t9425;
  t9492 = -1.*t2082*t800;
  t9493 = t63*t9303;
  t9494 = t9492 + t9493;
  t9452 = t2375*t9449;
  t9456 = -1.*t2501*t9449;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t1738*t1812 + t2101*t2368 + t2571*t2653 + t2686*t2693 - 0.183*(-1.*t2501*t2653 + t2375*t2693) - 0.1*(t2375*t2653 + t2501*t2693) - 1.*t264*t320*t339 + 0.08953*(t1946 + t1637*t747) + t1637*t774;
  p_output1(10)=t1738*t2723 + t2101*t2735 + t2571*t2741 + t2686*t2776 - 0.1*(t2375*t2741 + t2501*t2776) - 0.183*t2844 + t1125*t264*t320 + 0.08953*(t1660*t2723 + t2716*t747) + t2716*t774;
  p_output1(11)=0;
  p_output1(12)=t1125*t1132*t1738*t320 + t2101*t3639 + t2571*t3766 + t2686*t4246 - 0.183*(-1.*t2501*t3766 + t2375*t4246) - 0.1*(t2375*t3766 + t2501*t4246) + t1125*t320*t774*t780 + 0.08953*(t1125*t1132*t1660*t320 + t1125*t320*t747*t780) - 1.*t1125*t264*t800;
  p_output1(13)=t1132*t1738*t320*t339 + t2101*t5661 + t2571*t6082 + t2686*t6244 - 0.183*(-1.*t2501*t6082 + t2375*t6244) - 0.1*(t2375*t6082 + t2501*t6244) + t320*t339*t774*t780 + 0.08953*(t1132*t1660*t320*t339 + t320*t339*t747*t780) - 1.*t264*t339*t800;
  p_output1(14)=-1.*t264*t320 - 1.*t1132*t1738*t800 - 1.*t774*t780*t800 + 0.08953*(-1.*t1132*t1660*t800 - 1.*t747*t780*t800) + t2101*t8303 + t2571*t8825 + t2686*t8864 - 0.183*(-1.*t2501*t8825 + t2375*t8864) - 0.1*(t2375*t8825 + t2501*t8864);
  p_output1(15)=t1738*t2716 + t774*t9090 + 0.08953*(t2730 + t747*t9090) + t2101*t9154 - 1.*t2082*t2686*t9154 + t2571*t63*t9154 - 0.1*(-1.*t2082*t2501*t9154 + t2375*t63*t9154) - 0.183*(-1.*t2082*t2375*t9154 - 1.*t2501*t63*t9154);
  p_output1(16)=t1812*t774 + t1738*t9231 + t2101*t9247 - 1.*t2082*t2686*t9247 + t2571*t63*t9247 - 0.1*(-1.*t2082*t2501*t9247 + t2375*t63*t9247) - 0.183*(-1.*t2082*t2375*t9247 - 1.*t2501*t63*t9247) + 0.08953*(t1812*t747 + t9254);
  p_output1(17)=-1.*t1132*t320*t774 + t1738*t320*t780 + t9292 + t9294 + t9295 + t9304 + t9312 + t9317;
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
  p_output1(45)=-0.047*t1660*t2716 + 0.08953*t2735 + 0.047*t2723*t747 + t2101*t9332 - 1.*t2082*t2686*t9332 + t2571*t63*t9332 - 0.1*(-1.*t2082*t2501*t9332 + t2375*t63*t9332) - 0.183*(-1.*t2082*t2375*t9332 - 1.*t2501*t63*t9332);
  p_output1(46)=-0.047*t1660*t9231 + 0.047*t747*t9359 + t2101*t9362 - 1.*t2082*t2686*t9362 + t2571*t63*t9362 - 0.1*(-1.*t2082*t2501*t9362 + t2375*t63*t9362) - 0.183*(-1.*t2082*t2375*t9362 - 1.*t2501*t63*t9362) + 0.08953*t9369;
  p_output1(47)=0.047*t1132*t320*t747 - 0.047*t1660*t320*t780 + t9292 + t9294 + t9295 + t9304 + t9312 + t9317;
  p_output1(48)=t2571*t2776 - 0.183*t1125*t2082*t320 - 0.183*t2735*t63 + t2686*t9391 - 0.1*(t2822 + t2501*t9391) - 0.183*(t2375*t9391 + t9398);
  p_output1(49)=-0.183*t2082*t320*t339 - 0.183*t63*t9369 + t2686*t9419 + t2571*t9425 - 0.1*(t2501*t9419 + t9428) - 0.183*(t2375*t9419 + t9432);
  p_output1(50)=0.183*t2082*t800 - 0.183*t63*t9303 + t2686*t9443 + t2571*t9449 - 0.1*(t2501*t9443 + t9452) - 0.183*(t2375*t9443 + t9456);
  p_output1(51)=-0.1*t2844 - 0.183*(-1.*t2375*t2741 + t9398) + t2741*t9462 + t2776*t9467;
  p_output1(52)=t9425*t9467 + t9462*t9477 - 0.183*(t9432 - 1.*t2375*t9477) - 0.1*(t9428 - 1.*t2501*t9477);
  p_output1(53)=t9449*t9467 + t9462*t9494 - 0.183*(t9456 - 1.*t2375*t9494) - 0.1*(t9452 - 1.*t2501*t9494);
}


       
Eigen::Matrix<double,3,18> Jp_RL_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void Jp_RL_calf_joint(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



