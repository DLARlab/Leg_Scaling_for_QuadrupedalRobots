/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:11:19 GMT-05:00
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
  double t1335;
  double t2618;
  double t1986;
  double t2258;
  double t2619;
  double t1542;
  double t2399;
  double t2640;
  double t2678;
  double t2791;
  double t3109;
  double t3110;
  double t3293;
  double t1314;
  double t4095;
  double t96;
  double t4255;
  double t4263;
  double t4412;
  double t4570;
  double t4718;
  double t4719;
  double t5019;
  double t5097;
  double t5128;
  double t5208;
  double t5751;
  double t5821;
  double t5875;
  double t155;
  double t473;
  double t499;
  double t1228;
  double t1610;
  double t1755;
  double t2813;
  double t2821;
  double t2998;
  double t3087;
  double t6653;
  double t6655;
  double t6656;
  double t6662;
  double t6668;
  double t6694;
  double t4110;
  double t4175;
  double t4762;
  double t5030;
  double t5069;
  double t6715;
  double t6717;
  double t6720;
  double t5355;
  double t5445;
  double t5665;
  double t6756;
  double t6762;
  double t6765;
  double t6855;
  double t6871;
  double t6888;
  double t7416;
  double t7423;
  double t7444;
  double t7463;
  double t7467;
  double t7473;
  double t7482;
  double t7484;
  double t7485;
  double t7560;
  double t7561;
  double t7562;
  double t7569;
  double t7570;
  double t7574;
  double t7588;
  double t7611;
  double t7631;
  double t7860;
  double t7888;
  double t7918;
  double t7962;
  double t8011;
  double t8018;
  double t8041;
  double t8043;
  double t8058;
  double t8257;
  double t8258;
  double t8291;
  double t8293;
  double t8294;
  double t8297;
  double t8392;
  double t8394;
  double t8395;
  double t3577;
  double t8404;
  double t8405;
  double t8481;
  double t8508;
  double t8511;
  double t8594;
  double t8596;
  double t8642;
  double t8644;
  double t8646;
  double t8655;
  double t8658;
  double t8421;
  double t8512;
  double t8515;
  double t8519;
  double t8520;
  double t8522;
  double t8523;
  double t8543;
  double t8558;
  double t8560;
  double t8567;
  double t8571;
  double t8579;
  double t8585;
  double t8587;
  double t8588;
  double t8728;
  double t8737;
  double t8742;
  double t6919;
  double t8668;
  double t8670;
  double t8839;
  double t8841;
  double t8843;
  double t8847;
  double t8850;
  double t8871;
  double t8874;
  double t8875;
  double t8881;
  double t8883;
  double t8885;
  double t6917;
  double t6970;
  double t8816;
  double t8919;
  double t8920;
  double t8927;
  double t8930;
  double t8932;
  double t8944;
  double t8945;
  double t8947;
  double t8853;
  double t8857;
  double t8973;
  double t8975;
  double t8976;
  double t8891;
  double t8902;
  t1335 = Sin(var1[3]);
  t2618 = Cos(var1[3]);
  t1986 = Cos(var1[5]);
  t2258 = Sin(var1[4]);
  t2619 = Sin(var1[5]);
  t1542 = Sin(var1[9]);
  t2399 = -1.*t1986*t1335*t2258;
  t2640 = t2618*t2619;
  t2678 = t2399 + t2640;
  t2791 = Cos(var1[9]);
  t3109 = -1.*t2618*t1986;
  t3110 = -1.*t1335*t2258*t2619;
  t3293 = t3109 + t3110;
  t1314 = Cos(var1[4]);
  t4095 = Sin(var1[10]);
  t96 = Cos(var1[10]);
  t4255 = t2791*t2678;
  t4263 = -1.*t1542*t3293;
  t4412 = t4255 + t4263;
  t4570 = Cos(var1[11]);
  t4718 = -1.*t4570;
  t4719 = 1. + t4718;
  t5019 = Sin(var1[11]);
  t5097 = -1.*t1314*t4095*t1335;
  t5128 = t96*t4412;
  t5208 = t5097 + t5128;
  t5751 = -1.*t96*t1314*t1335;
  t5821 = -1.*t4095*t4412;
  t5875 = t5751 + t5821;
  t155 = -1.*t96;
  t473 = 1. + t155;
  t499 = 0.183*t473;
  t1228 = 0. + t499;
  t1610 = -0.047*t1542;
  t1755 = 0. + t1610;
  t2813 = -1.*t2791;
  t2821 = 1. + t2813;
  t2998 = 0.047*t2821;
  t3087 = 0. + t2998;
  t6653 = t2618*t1986*t2258;
  t6655 = t1335*t2619;
  t6656 = t6653 + t6655;
  t6662 = -1.*t1986*t1335;
  t6668 = t2618*t2258*t2619;
  t6694 = t6662 + t6668;
  t4110 = 0.183*t4095;
  t4175 = 0. + t4110;
  t4762 = -0.1*t4719;
  t5030 = 0.183*t5019;
  t5069 = 0. + t4762 + t5030;
  t6715 = t2791*t6656;
  t6717 = -1.*t1542*t6694;
  t6720 = t6715 + t6717;
  t5355 = 0.183*t4719;
  t5445 = 0.1*t5019;
  t5665 = 0. + t5355 + t5445;
  t6756 = t2618*t1314*t4095;
  t6762 = t96*t6720;
  t6765 = t6756 + t6762;
  t6855 = t96*t2618*t1314;
  t6871 = -1.*t4095*t6720;
  t6888 = t6855 + t6871;
  t7416 = t2791*t2618*t1314*t1986;
  t7423 = -1.*t2618*t1314*t1542*t2619;
  t7444 = t7416 + t7423;
  t7463 = -1.*t2618*t4095*t2258;
  t7467 = t96*t7444;
  t7473 = t7463 + t7467;
  t7482 = -1.*t96*t2618*t2258;
  t7484 = -1.*t4095*t7444;
  t7485 = t7482 + t7484;
  t7560 = t2791*t1314*t1986*t1335;
  t7561 = -1.*t1314*t1542*t1335*t2619;
  t7562 = t7560 + t7561;
  t7569 = -1.*t4095*t1335*t2258;
  t7570 = t96*t7562;
  t7574 = t7569 + t7570;
  t7588 = -1.*t96*t1335*t2258;
  t7611 = -1.*t4095*t7562;
  t7631 = t7588 + t7611;
  t7860 = -1.*t2791*t1986*t2258;
  t7888 = t1542*t2258*t2619;
  t7918 = t7860 + t7888;
  t7962 = -1.*t1314*t4095;
  t8011 = t96*t7918;
  t8018 = t7962 + t8011;
  t8041 = -1.*t96*t1314;
  t8043 = -1.*t4095*t7918;
  t8058 = t8041 + t8043;
  t8257 = t1986*t1335;
  t8258 = -1.*t2618*t2258*t2619;
  t8291 = t8257 + t8258;
  t8293 = -1.*t1542*t6656;
  t8294 = t2791*t8291;
  t8297 = t8293 + t8294;
  t8392 = t1986*t1335*t2258;
  t8394 = -1.*t2618*t2619;
  t8395 = t8392 + t8394;
  t3577 = t2791*t3293;
  t8404 = -1.*t1542*t8395;
  t8405 = t8404 + t3577;
  t8481 = -1.*t1314*t1986*t1542;
  t8508 = -1.*t2791*t1314*t2619;
  t8511 = t8481 + t8508;
  t8594 = -1.*t2791*t6694;
  t8596 = t8293 + t8594;
  t8642 = t2618*t1986;
  t8644 = t1335*t2258*t2619;
  t8646 = t8642 + t8644;
  t8655 = -1.*t2791*t8646;
  t8658 = t8404 + t8655;
  t8421 = t2791*t8395;
  t8512 = t4175*t8511;
  t8515 = -1.*t4095*t5665*t8511;
  t8519 = t96*t5069*t8511;
  t8520 = t2791*t1314*t1986;
  t8522 = -1.*t1314*t1542*t2619;
  t8523 = t8520 + t8522;
  t8543 = 0.13205*t8523;
  t8558 = -1.*t4570*t4095*t8511;
  t8560 = -1.*t96*t5019*t8511;
  t8567 = t8558 + t8560;
  t8571 = 0.183*t8567;
  t8579 = t96*t4570*t8511;
  t8585 = -1.*t4095*t5019*t8511;
  t8587 = t8579 + t8585;
  t8588 = -0.2*t8587;
  t8728 = -1.*t2618*t1314*t4095;
  t8737 = -1.*t96*t6720;
  t8742 = t8728 + t8737;
  t6919 = t4570*t6888;
  t8668 = -1.*t1542*t8646;
  t8670 = t8421 + t8668;
  t8839 = -1.*t96*t8670;
  t8841 = t5097 + t8839;
  t8843 = t96*t1314*t1335;
  t8847 = -1.*t4095*t8670;
  t8850 = t8843 + t8847;
  t8871 = t4095*t2258;
  t8874 = -1.*t96*t8523;
  t8875 = t8871 + t8874;
  t8881 = -1.*t96*t2258;
  t8883 = -1.*t4095*t8523;
  t8885 = t8881 + t8883;
  t6917 = -1.*t5019*t6765;
  t6970 = t6917 + t6919;
  t8816 = -1.*t5019*t6888;
  t8919 = 0.183*t4570;
  t8920 = -0.1*t5019;
  t8927 = t8919 + t8920;
  t8930 = 0.1*t4570;
  t8932 = t8930 + t5030;
  t8944 = t1314*t4095*t1335;
  t8945 = t96*t8670;
  t8947 = t8944 + t8945;
  t8853 = t4570*t8850;
  t8857 = -1.*t5019*t8850;
  t8973 = -1.*t4095*t2258;
  t8975 = t96*t8523;
  t8976 = t8973 + t8975;
  t8891 = t4570*t8885;
  t8902 = -1.*t5019*t8885;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=-1.*t1228*t1314*t1335 + t1755*t2678 + t3087*t3293 + 0.13205*(t1542*t2678 + t3577) + t4175*t4412 + t5069*t5208 + t5665*t5875 + 0.183*(-1.*t5019*t5208 + t4570*t5875) - 0.2*(t4570*t5208 + t5019*t5875);
  p_output1(10)=t1228*t1314*t2618 + t1755*t6656 + t3087*t6694 + 0.13205*(t1542*t6656 + t2791*t6694) + t4175*t6720 + t5069*t6765 + t5665*t6888 - 0.2*(t4570*t6765 + t5019*t6888) + 0.183*t6970;
  p_output1(11)=0;
  p_output1(12)=t1314*t1755*t1986*t2618 - 1.*t1228*t2258*t2618 + 0.13205*(t1314*t1542*t1986*t2618 + t1314*t2618*t2619*t2791) + t1314*t2618*t2619*t3087 + t4175*t7444 + t5069*t7473 + t5665*t7485 + 0.183*(-1.*t5019*t7473 + t4570*t7485) - 0.2*(t4570*t7473 + t5019*t7485);
  p_output1(13)=t1314*t1335*t1755*t1986 - 1.*t1228*t1335*t2258 + 0.13205*(t1314*t1335*t1542*t1986 + t1314*t1335*t2619*t2791) + t1314*t1335*t2619*t3087 + t4175*t7562 + t5069*t7574 + t5665*t7631 + 0.183*(-1.*t5019*t7574 + t4570*t7631) - 0.2*(t4570*t7574 + t5019*t7631);
  p_output1(14)=-1.*t1228*t1314 - 1.*t1755*t1986*t2258 + 0.13205*(-1.*t1542*t1986*t2258 - 1.*t2258*t2619*t2791) - 1.*t2258*t2619*t3087 + t4175*t7918 + t5069*t8018 + t5665*t8058 + 0.183*(-1.*t5019*t8018 + t4570*t8058) - 0.2*(t4570*t8018 + t5019*t8058);
  p_output1(15)=t3087*t6656 + t1755*t8291 + 0.13205*(t6715 + t1542*t8291) + t4175*t8297 - 1.*t4095*t5665*t8297 + t5069*t8297*t96 - 0.2*(-1.*t4095*t5019*t8297 + t4570*t8297*t96) + 0.183*(-1.*t4095*t4570*t8297 - 1.*t5019*t8297*t96);
  p_output1(16)=t1755*t3293 + t3087*t8395 + t4175*t8405 - 1.*t4095*t5665*t8405 + 0.13205*(t1542*t3293 + t8421) + t5069*t8405*t96 - 0.2*(-1.*t4095*t5019*t8405 + t4570*t8405*t96) + 0.183*(-1.*t4095*t4570*t8405 - 1.*t5019*t8405*t96);
  p_output1(17)=-1.*t1314*t1755*t2619 + t1314*t1986*t3087 + t8512 + t8515 + t8519 + t8543 + t8571 + t8588;
  p_output1(18)=0;
  p_output1(19)=0;
  p_output1(20)=0;
  p_output1(21)=0;
  p_output1(22)=0;
  p_output1(23)=0;
  p_output1(24)=0;
  p_output1(25)=0;
  p_output1(26)=0;
  p_output1(27)=-0.047*t2791*t6656 + 0.047*t1542*t6694 + 0.13205*t6720 + t4175*t8596 - 1.*t4095*t5665*t8596 + t5069*t8596*t96 - 0.2*(-1.*t4095*t5019*t8596 + t4570*t8596*t96) + 0.183*(-1.*t4095*t4570*t8596 - 1.*t5019*t8596*t96);
  p_output1(28)=-0.047*t2791*t8395 + 0.047*t1542*t8646 + t4175*t8658 - 1.*t4095*t5665*t8658 + 0.13205*t8670 + t5069*t8658*t96 - 0.2*(-1.*t4095*t5019*t8658 + t4570*t8658*t96) + 0.183*(-1.*t4095*t4570*t8658 - 1.*t5019*t8658*t96);
  p_output1(29)=0.047*t1314*t1542*t2619 - 0.047*t1314*t1986*t2791 + t8512 + t8515 + t8519 + t8543 + t8571 + t8588;
  p_output1(30)=0.183*t1314*t2618*t4095 + t5069*t6888 + t5665*t8742 - 0.2*(t6919 + t5019*t8742) + 0.183*(t4570*t8742 + t8816) + 0.183*t6720*t96;
  p_output1(31)=0.183*t1314*t1335*t4095 + t5665*t8841 + t5069*t8850 - 0.2*(t5019*t8841 + t8853) + 0.183*(t4570*t8841 + t8857) + 0.183*t8670*t96;
  p_output1(32)=-0.183*t2258*t4095 + t5665*t8875 + t5069*t8885 - 0.2*(t5019*t8875 + t8891) + 0.183*(t4570*t8875 + t8902) + 0.183*t8523*t96;
  p_output1(33)=-0.2*t6970 + 0.183*(-1.*t4570*t6765 + t8816) + t6765*t8927 + t6888*t8932;
  p_output1(34)=t8850*t8932 + t8927*t8947 + 0.183*(t8857 - 1.*t4570*t8947) - 0.2*(t8853 - 1.*t5019*t8947);
  p_output1(35)=t8885*t8932 + t8927*t8976 + 0.183*(t8902 - 1.*t4570*t8976) - 0.2*(t8891 - 1.*t5019*t8976);
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



