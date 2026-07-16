/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:21:41 GMT-05:00
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
  double t208;
  double t972;
  double t643;
  double t756;
  double t1033;
  double t547;
  double t893;
  double t1225;
  double t1256;
  double t1344;
  double t1653;
  double t1683;
  double t1810;
  double t196;
  double t2122;
  double t50;
  double t2326;
  double t2358;
  double t2551;
  double t2581;
  double t2646;
  double t2730;
  double t2786;
  double t2802;
  double t2830;
  double t2841;
  double t3076;
  double t3328;
  double t3329;
  double t89;
  double t106;
  double t149;
  double t161;
  double t572;
  double t577;
  double t1350;
  double t1445;
  double t1462;
  double t1486;
  double t3697;
  double t3705;
  double t3724;
  double t3840;
  double t3852;
  double t3857;
  double t2243;
  double t2282;
  double t2731;
  double t2790;
  double t2795;
  double t4033;
  double t4082;
  double t4105;
  double t2906;
  double t3016;
  double t3073;
  double t4513;
  double t4559;
  double t4561;
  double t4754;
  double t4814;
  double t4960;
  double t6377;
  double t6390;
  double t6430;
  double t6587;
  double t6693;
  double t6705;
  double t6716;
  double t6752;
  double t6793;
  double t7094;
  double t7135;
  double t7140;
  double t7167;
  double t7171;
  double t7176;
  double t7279;
  double t7311;
  double t7317;
  double t7716;
  double t7728;
  double t7768;
  double t7827;
  double t7872;
  double t7873;
  double t7887;
  double t7929;
  double t7948;
  double t8217;
  double t8224;
  double t8225;
  double t8239;
  double t8245;
  double t8246;
  double t8532;
  double t8535;
  double t8537;
  double t1933;
  double t8563;
  double t8569;
  double t8799;
  double t8810;
  double t8818;
  double t9017;
  double t9023;
  double t9124;
  double t9125;
  double t9126;
  double t9132;
  double t9139;
  double t8651;
  double t8834;
  double t8854;
  double t8876;
  double t8886;
  double t8889;
  double t8906;
  double t8911;
  double t8912;
  double t8913;
  double t8920;
  double t8930;
  double t8949;
  double t8957;
  double t8958;
  double t8961;
  double t9465;
  double t9477;
  double t9490;
  double t5188;
  double t9175;
  double t9178;
  double t9651;
  double t9692;
  double t9708;
  double t9720;
  double t9733;
  double t9802;
  double t9811;
  double t9819;
  double t9830;
  double t9836;
  double t9837;
  double t5081;
  double t5216;
  double t9567;
  double t9866;
  double t9868;
  double t9870;
  double t9874;
  double t9875;
  double t9888;
  double t9889;
  double t9891;
  double t9747;
  double t9771;
  double t9902;
  double t9903;
  double t9904;
  double t9853;
  double t9858;
  t208 = Sin(var1[3]);
  t972 = Cos(var1[3]);
  t643 = Cos(var1[5]);
  t756 = Sin(var1[4]);
  t1033 = Sin(var1[5]);
  t547 = Sin(var1[9]);
  t893 = -1.*t643*t208*t756;
  t1225 = t972*t1033;
  t1256 = t893 + t1225;
  t1344 = Cos(var1[9]);
  t1653 = -1.*t972*t643;
  t1683 = -1.*t208*t756*t1033;
  t1810 = t1653 + t1683;
  t196 = Cos(var1[4]);
  t2122 = Sin(var1[10]);
  t50 = Cos(var1[10]);
  t2326 = t1344*t1256;
  t2358 = -1.*t547*t1810;
  t2551 = t2326 + t2358;
  t2581 = Cos(var1[11]);
  t2646 = -1.*t2581;
  t2730 = 1. + t2646;
  t2786 = Sin(var1[11]);
  t2802 = -1.*t196*t2122*t208;
  t2830 = t50*t2551;
  t2841 = t2802 + t2830;
  t3076 = -1.*t50*t196*t208;
  t3328 = -1.*t2122*t2551;
  t3329 = t3076 + t3328;
  t89 = -1.*t50;
  t106 = 1. + t89;
  t149 = 0.183*t106;
  t161 = 0. + t149;
  t572 = -0.047*t547;
  t577 = 0. + t572;
  t1350 = -1.*t1344;
  t1445 = 1. + t1350;
  t1462 = 0.047*t1445;
  t1486 = 0. + t1462;
  t3697 = t972*t643*t756;
  t3705 = t208*t1033;
  t3724 = t3697 + t3705;
  t3840 = -1.*t643*t208;
  t3852 = t972*t756*t1033;
  t3857 = t3840 + t3852;
  t2243 = 0.183*t2122;
  t2282 = 0. + t2243;
  t2731 = -0.25*t2730;
  t2790 = 0.183*t2786;
  t2795 = 0. + t2731 + t2790;
  t4033 = t1344*t3724;
  t4082 = -1.*t547*t3857;
  t4105 = t4033 + t4082;
  t2906 = 0.183*t2730;
  t3016 = 0.25*t2786;
  t3073 = 0. + t2906 + t3016;
  t4513 = t972*t196*t2122;
  t4559 = t50*t4105;
  t4561 = t4513 + t4559;
  t4754 = t50*t972*t196;
  t4814 = -1.*t2122*t4105;
  t4960 = t4754 + t4814;
  t6377 = t1344*t972*t196*t643;
  t6390 = -1.*t972*t196*t547*t1033;
  t6430 = t6377 + t6390;
  t6587 = -1.*t972*t2122*t756;
  t6693 = t50*t6430;
  t6705 = t6587 + t6693;
  t6716 = -1.*t50*t972*t756;
  t6752 = -1.*t2122*t6430;
  t6793 = t6716 + t6752;
  t7094 = t1344*t196*t643*t208;
  t7135 = -1.*t196*t547*t208*t1033;
  t7140 = t7094 + t7135;
  t7167 = -1.*t2122*t208*t756;
  t7171 = t50*t7140;
  t7176 = t7167 + t7171;
  t7279 = -1.*t50*t208*t756;
  t7311 = -1.*t2122*t7140;
  t7317 = t7279 + t7311;
  t7716 = -1.*t1344*t643*t756;
  t7728 = t547*t756*t1033;
  t7768 = t7716 + t7728;
  t7827 = -1.*t196*t2122;
  t7872 = t50*t7768;
  t7873 = t7827 + t7872;
  t7887 = -1.*t50*t196;
  t7929 = -1.*t2122*t7768;
  t7948 = t7887 + t7929;
  t8217 = t643*t208;
  t8224 = -1.*t972*t756*t1033;
  t8225 = t8217 + t8224;
  t8239 = -1.*t547*t3724;
  t8245 = t1344*t8225;
  t8246 = t8239 + t8245;
  t8532 = t643*t208*t756;
  t8535 = -1.*t972*t1033;
  t8537 = t8532 + t8535;
  t1933 = t1344*t1810;
  t8563 = -1.*t547*t8537;
  t8569 = t8563 + t1933;
  t8799 = -1.*t196*t643*t547;
  t8810 = -1.*t1344*t196*t1033;
  t8818 = t8799 + t8810;
  t9017 = -1.*t1344*t3857;
  t9023 = t8239 + t9017;
  t9124 = t972*t643;
  t9125 = t208*t756*t1033;
  t9126 = t9124 + t9125;
  t9132 = -1.*t1344*t9126;
  t9139 = t8563 + t9132;
  t8651 = t1344*t8537;
  t8834 = t2282*t8818;
  t8854 = t50*t2795*t8818;
  t8876 = -1.*t2122*t3073*t8818;
  t8886 = t1344*t196*t643;
  t8889 = -1.*t196*t547*t1033;
  t8906 = t8886 + t8889;
  t8911 = 0.15331*t8906;
  t8912 = -1.*t2581*t2122*t8818;
  t8913 = -1.*t50*t2786*t8818;
  t8920 = t8912 + t8913;
  t8930 = 0.183*t8920;
  t8949 = t50*t2581*t8818;
  t8957 = -1.*t2122*t2786*t8818;
  t8958 = t8949 + t8957;
  t8961 = -0.5*t8958;
  t9465 = -1.*t972*t196*t2122;
  t9477 = -1.*t50*t4105;
  t9490 = t9465 + t9477;
  t5188 = t2581*t4960;
  t9175 = -1.*t547*t9126;
  t9178 = t8651 + t9175;
  t9651 = -1.*t50*t9178;
  t9692 = t2802 + t9651;
  t9708 = t50*t196*t208;
  t9720 = -1.*t2122*t9178;
  t9733 = t9708 + t9720;
  t9802 = t2122*t756;
  t9811 = -1.*t50*t8906;
  t9819 = t9802 + t9811;
  t9830 = -1.*t50*t756;
  t9836 = -1.*t2122*t8906;
  t9837 = t9830 + t9836;
  t5081 = -1.*t2786*t4561;
  t5216 = t5081 + t5188;
  t9567 = -1.*t2786*t4960;
  t9866 = 0.183*t2581;
  t9868 = -0.25*t2786;
  t9870 = t9866 + t9868;
  t9874 = 0.25*t2581;
  t9875 = t9874 + t2790;
  t9888 = t196*t2122*t208;
  t9889 = t50*t9178;
  t9891 = t9888 + t9889;
  t9747 = t2581*t9733;
  t9771 = -1.*t2786*t9733;
  t9902 = -1.*t2122*t756;
  t9903 = t50*t8906;
  t9904 = t9902 + t9903;
  t9853 = t2581*t9837;
  t9858 = -1.*t2786*t9837;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t1486*t1810 - 1.*t161*t196*t208 + t2282*t2551 + t2795*t2841 + t3073*t3329 + 0.183*(-1.*t2786*t2841 + t2581*t3329) - 0.5*(t2581*t2841 + t2786*t3329) + 0.15331*(t1933 + t1256*t547) + t1256*t577;
  p_output1(10)=t1486*t3857 + t2282*t4105 + t2795*t4561 + t3073*t4960 - 0.5*(t2581*t4561 + t2786*t4960) + 0.183*t5216 + 0.15331*(t1344*t3857 + t3724*t547) + t3724*t577 + t161*t196*t972;
  p_output1(11)=0;
  p_output1(12)=t2282*t6430 + t2795*t6705 + t3073*t6793 + 0.183*(-1.*t2786*t6705 + t2581*t6793) - 0.5*(t2581*t6705 + t2786*t6793) + t1033*t1486*t196*t972 + t196*t577*t643*t972 - 1.*t161*t756*t972 + 0.15331*(t1033*t1344*t196*t972 + t196*t547*t643*t972);
  p_output1(13)=t1033*t1486*t196*t208 + t196*t208*t577*t643 + 0.15331*(t1033*t1344*t196*t208 + t196*t208*t547*t643) + t2282*t7140 + t2795*t7176 + t3073*t7317 + 0.183*(-1.*t2786*t7176 + t2581*t7317) - 0.5*(t2581*t7176 + t2786*t7317) - 1.*t161*t208*t756;
  p_output1(14)=-1.*t161*t196 - 1.*t1033*t1486*t756 - 1.*t577*t643*t756 + 0.15331*(-1.*t1033*t1344*t756 - 1.*t547*t643*t756) + t2282*t7768 + t2795*t7873 + t3073*t7948 + 0.183*(-1.*t2786*t7873 + t2581*t7948) - 0.5*(t2581*t7873 + t2786*t7948);
  p_output1(15)=t1486*t3724 + t577*t8225 + 0.15331*(t4033 + t547*t8225) + t2282*t8246 - 1.*t2122*t3073*t8246 + t2795*t50*t8246 - 0.5*(-1.*t2122*t2786*t8246 + t2581*t50*t8246) + 0.183*(-1.*t2122*t2581*t8246 - 1.*t2786*t50*t8246);
  p_output1(16)=t1810*t577 + t1486*t8537 + t2282*t8569 - 1.*t2122*t3073*t8569 + t2795*t50*t8569 - 0.5*(-1.*t2122*t2786*t8569 + t2581*t50*t8569) + 0.183*(-1.*t2122*t2581*t8569 - 1.*t2786*t50*t8569) + 0.15331*(t1810*t547 + t8651);
  p_output1(17)=-1.*t1033*t196*t577 + t1486*t196*t643 + t8834 + t8854 + t8876 + t8911 + t8930 + t8961;
  p_output1(18)=0;
  p_output1(19)=0;
  p_output1(20)=0;
  p_output1(21)=0;
  p_output1(22)=0;
  p_output1(23)=0;
  p_output1(24)=0;
  p_output1(25)=0;
  p_output1(26)=0;
  p_output1(27)=-0.047*t1344*t3724 + 0.15331*t4105 + 0.047*t3857*t547 + t2282*t9023 - 1.*t2122*t3073*t9023 + t2795*t50*t9023 - 0.5*(-1.*t2122*t2786*t9023 + t2581*t50*t9023) + 0.183*(-1.*t2122*t2581*t9023 - 1.*t2786*t50*t9023);
  p_output1(28)=-0.047*t1344*t8537 + 0.047*t547*t9126 + t2282*t9139 - 1.*t2122*t3073*t9139 + t2795*t50*t9139 - 0.5*(-1.*t2122*t2786*t9139 + t2581*t50*t9139) + 0.183*(-1.*t2122*t2581*t9139 - 1.*t2786*t50*t9139) + 0.15331*t9178;
  p_output1(29)=0.047*t1033*t196*t547 - 0.047*t1344*t196*t643 + t8834 + t8854 + t8876 + t8911 + t8930 + t8961;
  p_output1(30)=t2795*t4960 + 0.183*t4105*t50 + t3073*t9490 - 0.5*(t5188 + t2786*t9490) + 0.183*(t2581*t9490 + t9567) + 0.183*t196*t2122*t972;
  p_output1(31)=0.183*t196*t208*t2122 + 0.183*t50*t9178 + t3073*t9692 + t2795*t9733 - 0.5*(t2786*t9692 + t9747) + 0.183*(t2581*t9692 + t9771);
  p_output1(32)=-0.183*t2122*t756 + 0.183*t50*t8906 + t3073*t9819 + t2795*t9837 - 0.5*(t2786*t9819 + t9853) + 0.183*(t2581*t9819 + t9858);
  p_output1(33)=-0.5*t5216 + 0.183*(-1.*t2581*t4561 + t9567) + t4561*t9870 + t4960*t9875;
  p_output1(34)=t9733*t9875 + t9870*t9891 + 0.183*(t9771 - 1.*t2581*t9891) - 0.5*(t9747 - 1.*t2786*t9891);
  p_output1(35)=t9837*t9875 + t9870*t9904 + 0.183*(t9858 - 1.*t2581*t9904) - 0.5*(t9853 - 1.*t2786*t9904);
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



