/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:27:01 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RRfoot.h"

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
  double t707;
  double t1422;
  double t1001;
  double t1059;
  double t1497;
  double t859;
  double t1121;
  double t1681;
  double t1695;
  double t1793;
  double t1932;
  double t1951;
  double t1959;
  double t693;
  double t2446;
  double t16;
  double t2855;
  double t2884;
  double t2954;
  double t3159;
  double t3209;
  double t3300;
  double t3359;
  double t3476;
  double t3516;
  double t3571;
  double t3669;
  double t3679;
  double t3878;
  double t235;
  double t386;
  double t407;
  double t447;
  double t870;
  double t991;
  double t1804;
  double t1873;
  double t1892;
  double t1921;
  double t5671;
  double t5672;
  double t5681;
  double t5779;
  double t5862;
  double t5885;
  double t2585;
  double t2783;
  double t3337;
  double t3365;
  double t3392;
  double t6088;
  double t6105;
  double t6111;
  double t3641;
  double t3657;
  double t3665;
  double t6160;
  double t6214;
  double t6260;
  double t6263;
  double t6314;
  double t6338;
  double t6905;
  double t6939;
  double t6967;
  double t7014;
  double t7016;
  double t7079;
  double t7102;
  double t7176;
  double t7183;
  double t7503;
  double t7504;
  double t7505;
  double t7536;
  double t7543;
  double t7544;
  double t7552;
  double t7577;
  double t7578;
  double t7737;
  double t7743;
  double t7745;
  double t7754;
  double t7763;
  double t7773;
  double t7805;
  double t7827;
  double t7861;
  double t7973;
  double t7999;
  double t8005;
  double t8018;
  double t8020;
  double t8027;
  double t8308;
  double t8354;
  double t8376;
  double t2186;
  double t8423;
  double t8428;
  double t8685;
  double t8686;
  double t8690;
  double t8936;
  double t8957;
  double t9079;
  double t9089;
  double t9105;
  double t9167;
  double t9176;
  double t8505;
  double t8693;
  double t8694;
  double t8696;
  double t8699;
  double t8709;
  double t8710;
  double t8713;
  double t8715;
  double t8746;
  double t8809;
  double t8849;
  double t8864;
  double t8885;
  double t8913;
  double t8915;
  double t9338;
  double t9363;
  double t9369;
  double t6475;
  double t9219;
  double t9225;
  double t9432;
  double t9435;
  double t9454;
  double t9460;
  double t9464;
  double t9555;
  double t9558;
  double t9588;
  double t9595;
  double t9598;
  double t9601;
  double t6386;
  double t6633;
  double t9407;
  double t9724;
  double t9730;
  double t9736;
  double t9740;
  double t9744;
  double t9810;
  double t9818;
  double t9822;
  double t9474;
  double t9516;
  double t9873;
  double t9875;
  double t9877;
  double t9661;
  double t9705;
  t707 = Sin(var1[3]);
  t1422 = Cos(var1[3]);
  t1001 = Cos(var1[5]);
  t1059 = Sin(var1[4]);
  t1497 = Sin(var1[5]);
  t859 = Sin(var1[12]);
  t1121 = -1.*t1001*t707*t1059;
  t1681 = t1422*t1497;
  t1695 = t1121 + t1681;
  t1793 = Cos(var1[12]);
  t1932 = -1.*t1422*t1001;
  t1951 = -1.*t707*t1059*t1497;
  t1959 = t1932 + t1951;
  t693 = Cos(var1[4]);
  t2446 = Sin(var1[13]);
  t16 = Cos(var1[13]);
  t2855 = t1793*t1695;
  t2884 = -1.*t859*t1959;
  t2954 = t2855 + t2884;
  t3159 = Cos(var1[14]);
  t3209 = -1.*t3159;
  t3300 = 1. + t3209;
  t3359 = Sin(var1[14]);
  t3476 = -1.*t693*t2446*t707;
  t3516 = t16*t2954;
  t3571 = t3476 + t3516;
  t3669 = -1.*t16*t693*t707;
  t3679 = -1.*t2446*t2954;
  t3878 = t3669 + t3679;
  t235 = -1.*t16;
  t386 = 1. + t235;
  t407 = -0.183*t386;
  t447 = 0. + t407;
  t870 = 0.047*t859;
  t991 = 0. + t870;
  t1804 = -1.*t1793;
  t1873 = 1. + t1804;
  t1892 = -0.047*t1873;
  t1921 = 0. + t1892;
  t5671 = t1422*t1001*t1059;
  t5672 = t707*t1497;
  t5681 = t5671 + t5672;
  t5779 = -1.*t1001*t707;
  t5862 = t1422*t1059*t1497;
  t5885 = t5779 + t5862;
  t2585 = -0.183*t2446;
  t2783 = 0. + t2585;
  t3337 = -0.3*t3300;
  t3365 = -0.183*t3359;
  t3392 = 0. + t3337 + t3365;
  t6088 = t1793*t5681;
  t6105 = -1.*t859*t5885;
  t6111 = t6088 + t6105;
  t3641 = -0.183*t3300;
  t3657 = 0.3*t3359;
  t3665 = 0. + t3641 + t3657;
  t6160 = t1422*t693*t2446;
  t6214 = t16*t6111;
  t6260 = t6160 + t6214;
  t6263 = t16*t1422*t693;
  t6314 = -1.*t2446*t6111;
  t6338 = t6263 + t6314;
  t6905 = t1793*t1422*t693*t1001;
  t6939 = -1.*t1422*t693*t859*t1497;
  t6967 = t6905 + t6939;
  t7014 = -1.*t1422*t2446*t1059;
  t7016 = t16*t6967;
  t7079 = t7014 + t7016;
  t7102 = -1.*t16*t1422*t1059;
  t7176 = -1.*t2446*t6967;
  t7183 = t7102 + t7176;
  t7503 = t1793*t693*t1001*t707;
  t7504 = -1.*t693*t859*t707*t1497;
  t7505 = t7503 + t7504;
  t7536 = -1.*t2446*t707*t1059;
  t7543 = t16*t7505;
  t7544 = t7536 + t7543;
  t7552 = -1.*t16*t707*t1059;
  t7577 = -1.*t2446*t7505;
  t7578 = t7552 + t7577;
  t7737 = -1.*t1793*t1001*t1059;
  t7743 = t859*t1059*t1497;
  t7745 = t7737 + t7743;
  t7754 = -1.*t693*t2446;
  t7763 = t16*t7745;
  t7773 = t7754 + t7763;
  t7805 = -1.*t16*t693;
  t7827 = -1.*t2446*t7745;
  t7861 = t7805 + t7827;
  t7973 = t1001*t707;
  t7999 = -1.*t1422*t1059*t1497;
  t8005 = t7973 + t7999;
  t8018 = -1.*t859*t5681;
  t8020 = t1793*t8005;
  t8027 = t8018 + t8020;
  t8308 = t1001*t707*t1059;
  t8354 = -1.*t1422*t1497;
  t8376 = t8308 + t8354;
  t2186 = t1793*t1959;
  t8423 = -1.*t859*t8376;
  t8428 = t8423 + t2186;
  t8685 = -1.*t693*t1001*t859;
  t8686 = -1.*t1793*t693*t1497;
  t8690 = t8685 + t8686;
  t8936 = -1.*t1793*t5885;
  t8957 = t8018 + t8936;
  t9079 = t1422*t1001;
  t9089 = t707*t1059*t1497;
  t9105 = t9079 + t9089;
  t9167 = -1.*t1793*t9105;
  t9176 = t8423 + t9167;
  t8505 = t1793*t8376;
  t8693 = t2783*t8690;
  t8694 = t16*t3392*t8690;
  t8696 = -1.*t2446*t3665*t8690;
  t8699 = t1793*t693*t1001;
  t8709 = -1.*t693*t859*t1497;
  t8710 = t8699 + t8709;
  t8713 = -0.17458*t8710;
  t8715 = -1.*t3159*t2446*t8690;
  t8746 = -1.*t16*t3359*t8690;
  t8809 = t8715 + t8746;
  t8849 = -0.183*t8809;
  t8864 = t16*t3159*t8690;
  t8885 = -1.*t2446*t3359*t8690;
  t8913 = t8864 + t8885;
  t8915 = -0.6*t8913;
  t9338 = -1.*t1422*t693*t2446;
  t9363 = -1.*t16*t6111;
  t9369 = t9338 + t9363;
  t6475 = t3159*t6338;
  t9219 = -1.*t859*t9105;
  t9225 = t8505 + t9219;
  t9432 = -1.*t16*t9225;
  t9435 = t3476 + t9432;
  t9454 = t16*t693*t707;
  t9460 = -1.*t2446*t9225;
  t9464 = t9454 + t9460;
  t9555 = t2446*t1059;
  t9558 = -1.*t16*t8710;
  t9588 = t9555 + t9558;
  t9595 = -1.*t16*t1059;
  t9598 = -1.*t2446*t8710;
  t9601 = t9595 + t9598;
  t6386 = -1.*t3359*t6260;
  t6633 = t6386 + t6475;
  t9407 = -1.*t3359*t6338;
  t9724 = -0.183*t3159;
  t9730 = -0.3*t3359;
  t9736 = t9724 + t9730;
  t9740 = 0.3*t3159;
  t9744 = t9740 + t3365;
  t9810 = t693*t2446*t707;
  t9818 = t16*t9225;
  t9822 = t9810 + t9818;
  t9474 = t3159*t9464;
  t9516 = -1.*t3359*t9464;
  t9873 = -1.*t2446*t1059;
  t9875 = t16*t8710;
  t9877 = t9873 + t9875;
  t9661 = t3159*t9601;
  t9705 = -1.*t3359*t9601;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t1921*t1959 + t2783*t2954 + t3392*t3571 + t3665*t3878 - 0.183*(-1.*t3359*t3571 + t3159*t3878) - 0.6*(t3159*t3571 + t3359*t3878) - 1.*t447*t693*t707 - 0.17458*(t2186 + t1695*t859) + t1695*t991;
  p_output1(10)=t1921*t5885 + t2783*t6111 + t3392*t6260 + t3665*t6338 - 0.6*(t3159*t6260 + t3359*t6338) - 0.183*t6633 + t1422*t447*t693 - 0.17458*(t1793*t5885 + t5681*t859) + t5681*t991;
  p_output1(11)=0;
  p_output1(12)=-1.*t1059*t1422*t447 + t1422*t1497*t1921*t693 + t2783*t6967 + t3392*t7079 + t3665*t7183 - 0.183*(-1.*t3359*t7079 + t3159*t7183) - 0.6*(t3159*t7079 + t3359*t7183) - 0.17458*(t1422*t1497*t1793*t693 + t1001*t1422*t693*t859) + t1001*t1422*t693*t991;
  p_output1(13)=-1.*t1059*t447*t707 + t1497*t1921*t693*t707 + t2783*t7505 + t3392*t7544 + t3665*t7578 - 0.183*(-1.*t3359*t7544 + t3159*t7578) - 0.6*(t3159*t7544 + t3359*t7578) - 0.17458*(t1497*t1793*t693*t707 + t1001*t693*t707*t859) + t1001*t693*t707*t991;
  p_output1(14)=-1.*t1059*t1497*t1921 - 1.*t447*t693 + t2783*t7745 + t3392*t7773 + t3665*t7861 - 0.183*(-1.*t3359*t7773 + t3159*t7861) - 0.6*(t3159*t7773 + t3359*t7861) - 0.17458*(-1.*t1059*t1497*t1793 - 1.*t1001*t1059*t859) - 1.*t1001*t1059*t991;
  p_output1(15)=t1921*t5681 + t2783*t8027 + t16*t3392*t8027 - 1.*t2446*t3665*t8027 - 0.183*(-1.*t2446*t3159*t8027 - 1.*t16*t3359*t8027) - 0.6*(t16*t3159*t8027 - 1.*t2446*t3359*t8027) - 0.17458*(t6088 + t8005*t859) + t8005*t991;
  p_output1(16)=t1921*t8376 + t2783*t8428 + t16*t3392*t8428 - 1.*t2446*t3665*t8428 - 0.183*(-1.*t2446*t3159*t8428 - 1.*t16*t3359*t8428) - 0.6*(t16*t3159*t8428 - 1.*t2446*t3359*t8428) - 0.17458*(t8505 + t1959*t859) + t1959*t991;
  p_output1(17)=t1001*t1921*t693 + t8693 + t8694 + t8696 + t8713 + t8849 + t8915 - 1.*t1497*t693*t991;
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
  p_output1(36)=0.047*t1793*t5681 - 0.17458*t6111 - 0.047*t5885*t859 + t2783*t8957 + t16*t3392*t8957 - 1.*t2446*t3665*t8957 - 0.183*(-1.*t2446*t3159*t8957 - 1.*t16*t3359*t8957) - 0.6*(t16*t3159*t8957 - 1.*t2446*t3359*t8957);
  p_output1(37)=0.047*t1793*t8376 - 0.047*t859*t9105 + t2783*t9176 + t16*t3392*t9176 - 1.*t2446*t3665*t9176 - 0.183*(-1.*t2446*t3159*t9176 - 1.*t16*t3359*t9176) - 0.6*(t16*t3159*t9176 - 1.*t2446*t3359*t9176) - 0.17458*t9225;
  p_output1(38)=0.047*t1001*t1793*t693 - 0.047*t1497*t693*t859 + t8693 + t8694 + t8696 + t8713 + t8849 + t8915;
  p_output1(39)=-0.183*t16*t6111 + t3392*t6338 - 0.183*t1422*t2446*t693 + t3665*t9369 - 0.6*(t6475 + t3359*t9369) - 0.183*(t3159*t9369 + t9407);
  p_output1(40)=-0.183*t2446*t693*t707 - 0.183*t16*t9225 + t3665*t9435 + t3392*t9464 - 0.6*(t3359*t9435 + t9474) - 0.183*(t3159*t9435 + t9516);
  p_output1(41)=0.183*t1059*t2446 - 0.183*t16*t8710 + t3665*t9588 + t3392*t9601 - 0.6*(t3359*t9588 + t9661) - 0.183*(t3159*t9588 + t9705);
  p_output1(42)=-0.6*t6633 - 0.183*(-1.*t3159*t6260 + t9407) + t6260*t9736 + t6338*t9744;
  p_output1(43)=t9464*t9744 + t9736*t9822 - 0.183*(t9516 - 1.*t3159*t9822) - 0.6*(t9474 - 1.*t3359*t9822);
  p_output1(44)=t9601*t9744 + t9736*t9877 - 0.183*(t9705 - 1.*t3159*t9877) - 0.6*(t9661 - 1.*t3359*t9877);
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


       
Eigen::Matrix<double,3,18> Jp_RRfoot(const Eigen::Matrix<double,18,1> &var1)
//void Jp_RRfoot(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



