/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:14:01 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_FLfoot.h"

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
  double t229;
  double t260;
  double t255;
  double t257;
  double t261;
  double t250;
  double t258;
  double t262;
  double t263;
  double t267;
  double t313;
  double t363;
  double t447;
  double t207;
  double t595;
  double t111;
  double t1364;
  double t1770;
  double t1780;
  double t2063;
  double t2080;
  double t2177;
  double t2237;
  double t2394;
  double t2422;
  double t2423;
  double t2505;
  double t2778;
  double t2797;
  double t114;
  double t142;
  double t144;
  double t190;
  double t253;
  double t254;
  double t268;
  double t270;
  double t271;
  double t272;
  double t3262;
  double t3628;
  double t3635;
  double t3903;
  double t3929;
  double t3944;
  double t609;
  double t1005;
  double t2193;
  double t2311;
  double t2318;
  double t4715;
  double t4718;
  double t4732;
  double t2468;
  double t2484;
  double t2494;
  double t4882;
  double t4891;
  double t4901;
  double t4978;
  double t4985;
  double t5054;
  double t5593;
  double t5608;
  double t5635;
  double t5665;
  double t5682;
  double t5729;
  double t5875;
  double t5907;
  double t5908;
  double t6799;
  double t6800;
  double t6830;
  double t6893;
  double t6895;
  double t6909;
  double t6934;
  double t6941;
  double t6958;
  double t7639;
  double t7686;
  double t7925;
  double t8211;
  double t8224;
  double t8227;
  double t8868;
  double t8870;
  double t8871;
  double t9253;
  double t9264;
  double t9299;
  double t9339;
  double t9340;
  double t9341;
  double t9385;
  double t9387;
  double t9394;
  double t540;
  double t9397;
  double t9406;
  double t9504;
  double t9506;
  double t9507;
  double t9554;
  double t9555;
  double t9585;
  double t9586;
  double t9589;
  double t9593;
  double t9594;
  double t9433;
  double t9508;
  double t9510;
  double t9511;
  double t9512;
  double t9513;
  double t9514;
  double t9515;
  double t9517;
  double t9532;
  double t9544;
  double t9546;
  double t9547;
  double t9548;
  double t9549;
  double t9550;
  double t9651;
  double t9652;
  double t9653;
  double t5066;
  double t9600;
  double t9601;
  double t9675;
  double t9676;
  double t9678;
  double t9679;
  double t9680;
  double t9695;
  double t9696;
  double t9698;
  double t9700;
  double t9701;
  double t9702;
  double t5060;
  double t5071;
  double t9665;
  double t9718;
  double t9719;
  double t9720;
  double t9723;
  double t9724;
  double t9736;
  double t9737;
  double t9738;
  double t9683;
  double t9687;
  double t9748;
  double t9749;
  double t9750;
  double t9706;
  double t9713;
  t229 = Sin(var1[3]);
  t260 = Cos(var1[3]);
  t255 = Cos(var1[5]);
  t257 = Sin(var1[4]);
  t261 = Sin(var1[5]);
  t250 = Sin(var1[9]);
  t258 = -1.*t255*t229*t257;
  t262 = t260*t261;
  t263 = t258 + t262;
  t267 = Cos(var1[9]);
  t313 = -1.*t260*t255;
  t363 = -1.*t229*t257*t261;
  t447 = t313 + t363;
  t207 = Cos(var1[4]);
  t595 = Sin(var1[10]);
  t111 = Cos(var1[10]);
  t1364 = t267*t263;
  t1770 = -1.*t250*t447;
  t1780 = t1364 + t1770;
  t2063 = Cos(var1[11]);
  t2080 = -1.*t2063;
  t2177 = 1. + t2080;
  t2237 = Sin(var1[11]);
  t2394 = -1.*t207*t595*t229;
  t2422 = t111*t1780;
  t2423 = t2394 + t2422;
  t2505 = -1.*t111*t207*t229;
  t2778 = -1.*t595*t1780;
  t2797 = t2505 + t2778;
  t114 = -1.*t111;
  t142 = 1. + t114;
  t144 = 0.183*t142;
  t190 = 0. + t144;
  t253 = -0.047*t250;
  t254 = 0. + t253;
  t268 = -1.*t267;
  t270 = 1. + t268;
  t271 = 0.047*t270;
  t272 = 0. + t271;
  t3262 = t260*t255*t257;
  t3628 = t229*t261;
  t3635 = t3262 + t3628;
  t3903 = -1.*t255*t229;
  t3929 = t260*t257*t261;
  t3944 = t3903 + t3929;
  t609 = 0.183*t595;
  t1005 = 0. + t609;
  t2193 = -0.1*t2177;
  t2311 = 0.183*t2237;
  t2318 = 0. + t2193 + t2311;
  t4715 = t267*t3635;
  t4718 = -1.*t250*t3944;
  t4732 = t4715 + t4718;
  t2468 = 0.183*t2177;
  t2484 = 0.1*t2237;
  t2494 = 0. + t2468 + t2484;
  t4882 = t260*t207*t595;
  t4891 = t111*t4732;
  t4901 = t4882 + t4891;
  t4978 = t111*t260*t207;
  t4985 = -1.*t595*t4732;
  t5054 = t4978 + t4985;
  t5593 = t267*t260*t207*t255;
  t5608 = -1.*t260*t207*t250*t261;
  t5635 = t5593 + t5608;
  t5665 = -1.*t260*t595*t257;
  t5682 = t111*t5635;
  t5729 = t5665 + t5682;
  t5875 = -1.*t111*t260*t257;
  t5907 = -1.*t595*t5635;
  t5908 = t5875 + t5907;
  t6799 = t267*t207*t255*t229;
  t6800 = -1.*t207*t250*t229*t261;
  t6830 = t6799 + t6800;
  t6893 = -1.*t595*t229*t257;
  t6895 = t111*t6830;
  t6909 = t6893 + t6895;
  t6934 = -1.*t111*t229*t257;
  t6941 = -1.*t595*t6830;
  t6958 = t6934 + t6941;
  t7639 = -1.*t267*t255*t257;
  t7686 = t250*t257*t261;
  t7925 = t7639 + t7686;
  t8211 = -1.*t207*t595;
  t8224 = t111*t7925;
  t8227 = t8211 + t8224;
  t8868 = -1.*t111*t207;
  t8870 = -1.*t595*t7925;
  t8871 = t8868 + t8870;
  t9253 = t255*t229;
  t9264 = -1.*t260*t257*t261;
  t9299 = t9253 + t9264;
  t9339 = -1.*t250*t3635;
  t9340 = t267*t9299;
  t9341 = t9339 + t9340;
  t9385 = t255*t229*t257;
  t9387 = -1.*t260*t261;
  t9394 = t9385 + t9387;
  t540 = t267*t447;
  t9397 = -1.*t250*t9394;
  t9406 = t9397 + t540;
  t9504 = -1.*t207*t255*t250;
  t9506 = -1.*t267*t207*t261;
  t9507 = t9504 + t9506;
  t9554 = -1.*t267*t3944;
  t9555 = t9339 + t9554;
  t9585 = t260*t255;
  t9586 = t229*t257*t261;
  t9589 = t9585 + t9586;
  t9593 = -1.*t267*t9589;
  t9594 = t9397 + t9593;
  t9433 = t267*t9394;
  t9508 = t1005*t9507;
  t9510 = -1.*t595*t2494*t9507;
  t9511 = t111*t2318*t9507;
  t9512 = t267*t207*t255;
  t9513 = -1.*t207*t250*t261;
  t9514 = t9512 + t9513;
  t9515 = 0.08953*t9514;
  t9517 = -1.*t2063*t595*t9507;
  t9532 = -1.*t111*t2237*t9507;
  t9544 = t9517 + t9532;
  t9546 = 0.183*t9544;
  t9547 = t111*t2063*t9507;
  t9548 = -1.*t595*t2237*t9507;
  t9549 = t9547 + t9548;
  t9550 = -0.2*t9549;
  t9651 = -1.*t260*t207*t595;
  t9652 = -1.*t111*t4732;
  t9653 = t9651 + t9652;
  t5066 = t2063*t5054;
  t9600 = -1.*t250*t9589;
  t9601 = t9433 + t9600;
  t9675 = -1.*t111*t9601;
  t9676 = t2394 + t9675;
  t9678 = t111*t207*t229;
  t9679 = -1.*t595*t9601;
  t9680 = t9678 + t9679;
  t9695 = t595*t257;
  t9696 = -1.*t111*t9514;
  t9698 = t9695 + t9696;
  t9700 = -1.*t111*t257;
  t9701 = -1.*t595*t9514;
  t9702 = t9700 + t9701;
  t5060 = -1.*t2237*t4901;
  t5071 = t5060 + t5066;
  t9665 = -1.*t2237*t5054;
  t9718 = 0.183*t2063;
  t9719 = -0.1*t2237;
  t9720 = t9718 + t9719;
  t9723 = 0.1*t2063;
  t9724 = t9723 + t2311;
  t9736 = t207*t595*t229;
  t9737 = t111*t9601;
  t9738 = t9736 + t9737;
  t9683 = t2063*t9680;
  t9687 = -1.*t2237*t9680;
  t9748 = -1.*t595*t257;
  t9749 = t111*t9514;
  t9750 = t9748 + t9749;
  t9706 = t2063*t9702;
  t9713 = -1.*t2237*t9702;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t1005*t1780 - 1.*t190*t207*t229 + t2318*t2423 + t254*t263 + t2494*t2797 + 0.183*(-1.*t2237*t2423 + t2063*t2797) - 0.2*(t2063*t2423 + t2237*t2797) + t272*t447 + 0.08953*(t250*t263 + t540);
  p_output1(10)=t190*t207*t260 + t254*t3635 + t272*t3944 + 0.08953*(t250*t3635 + t267*t3944) + t1005*t4732 + t2318*t4901 + t2494*t5054 - 0.2*(t2063*t4901 + t2237*t5054) + 0.183*t5071;
  p_output1(11)=0;
  p_output1(12)=t207*t254*t255*t260 - 1.*t190*t257*t260 + 0.08953*(t207*t250*t255*t260 + t207*t260*t261*t267) + t207*t260*t261*t272 + t1005*t5635 + t2318*t5729 + t2494*t5908 + 0.183*(-1.*t2237*t5729 + t2063*t5908) - 0.2*(t2063*t5729 + t2237*t5908);
  p_output1(13)=t207*t229*t254*t255 - 1.*t190*t229*t257 + 0.08953*(t207*t229*t250*t255 + t207*t229*t261*t267) + t207*t229*t261*t272 + t1005*t6830 + t2318*t6909 + t2494*t6958 + 0.183*(-1.*t2237*t6909 + t2063*t6958) - 0.2*(t2063*t6909 + t2237*t6958);
  p_output1(14)=-1.*t190*t207 - 1.*t254*t255*t257 + 0.08953*(-1.*t250*t255*t257 - 1.*t257*t261*t267) - 1.*t257*t261*t272 + t1005*t7925 + t2318*t8227 + t2494*t8871 + 0.183*(-1.*t2237*t8227 + t2063*t8871) - 0.2*(t2063*t8227 + t2237*t8871);
  p_output1(15)=t272*t3635 + t254*t9299 + 0.08953*(t4715 + t250*t9299) + t1005*t9341 + t111*t2318*t9341 - 1.*t2494*t595*t9341 + 0.183*(-1.*t111*t2237*t9341 - 1.*t2063*t595*t9341) - 0.2*(t111*t2063*t9341 - 1.*t2237*t595*t9341);
  p_output1(16)=t254*t447 + t272*t9394 + t1005*t9406 + t111*t2318*t9406 - 1.*t2494*t595*t9406 + 0.183*(-1.*t111*t2237*t9406 - 1.*t2063*t595*t9406) - 0.2*(t111*t2063*t9406 - 1.*t2237*t595*t9406) + 0.08953*(t250*t447 + t9433);
  p_output1(17)=-1.*t207*t254*t261 + t207*t255*t272 + t9508 + t9510 + t9511 + t9515 + t9546 + t9550;
  p_output1(18)=0;
  p_output1(19)=0;
  p_output1(20)=0;
  p_output1(21)=0;
  p_output1(22)=0;
  p_output1(23)=0;
  p_output1(24)=0;
  p_output1(25)=0;
  p_output1(26)=0;
  p_output1(27)=-0.047*t267*t3635 + 0.047*t250*t3944 + 0.08953*t4732 + t1005*t9555 + t111*t2318*t9555 - 1.*t2494*t595*t9555 + 0.183*(-1.*t111*t2237*t9555 - 1.*t2063*t595*t9555) - 0.2*(t111*t2063*t9555 - 1.*t2237*t595*t9555);
  p_output1(28)=-0.047*t267*t9394 + 0.047*t250*t9589 + t1005*t9594 + t111*t2318*t9594 - 1.*t2494*t595*t9594 + 0.183*(-1.*t111*t2237*t9594 - 1.*t2063*t595*t9594) - 0.2*(t111*t2063*t9594 - 1.*t2237*t595*t9594) + 0.08953*t9601;
  p_output1(29)=0.047*t207*t250*t261 - 0.047*t207*t255*t267 + t9508 + t9510 + t9511 + t9515 + t9546 + t9550;
  p_output1(30)=0.183*t111*t4732 + t2318*t5054 + 0.183*t207*t260*t595 + t2494*t9653 - 0.2*(t5066 + t2237*t9653) + 0.183*(t2063*t9653 + t9665);
  p_output1(31)=0.183*t207*t229*t595 + 0.183*t111*t9601 + t2494*t9676 + t2318*t9680 - 0.2*(t2237*t9676 + t9683) + 0.183*(t2063*t9676 + t9687);
  p_output1(32)=-0.183*t257*t595 + 0.183*t111*t9514 + t2494*t9698 + t2318*t9702 - 0.2*(t2237*t9698 + t9706) + 0.183*(t2063*t9698 + t9713);
  p_output1(33)=-0.2*t5071 + 0.183*(-1.*t2063*t4901 + t9665) + t4901*t9720 + t5054*t9724;
  p_output1(34)=t9680*t9724 + t9720*t9738 + 0.183*(t9687 - 1.*t2063*t9738) - 0.2*(t9683 - 1.*t2237*t9738);
  p_output1(35)=t9702*t9724 + t9720*t9750 + 0.183*(t9713 - 1.*t2063*t9750) - 0.2*(t9706 - 1.*t2237*t9750);
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


       
Eigen::Matrix<double,3,18> Jp_FLfoot(const Eigen::Matrix<double,18,1> &var1)
//void Jp_FLfoot(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



