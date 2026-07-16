/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:26:57 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_FRfoot.h"

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
  double t708;
  double t847;
  double t699;
  double t876;
  double t282;
  double t839;
  double t1018;
  double t1058;
  double t1119;
  double t1221;
  double t1250;
  double t1276;
  double t81;
  double t1509;
  double t1515;
  double t1516;
  double t68;
  double t1574;
  double t1788;
  double t1831;
  double t1836;
  double t1897;
  double t2144;
  double t2206;
  double t2208;
  double t1738;
  double t1762;
  double t1782;
  double t92;
  double t131;
  double t153;
  double t193;
  double t347;
  double t396;
  double t427;
  double t484;
  double t1282;
  double t1316;
  double t2638;
  double t2662;
  double t2752;
  double t2760;
  double t2813;
  double t2815;
  double t1612;
  double t1615;
  double t3057;
  double t3078;
  double t3082;
  double t1870;
  double t1912;
  double t1970;
  double t2214;
  double t2261;
  double t2272;
  double t3258;
  double t3273;
  double t3314;
  double t3166;
  double t3210;
  double t3230;
  double t4016;
  double t4018;
  double t4065;
  double t4301;
  double t4308;
  double t4315;
  double t4241;
  double t4279;
  double t4286;
  double t4909;
  double t4948;
  double t4985;
  double t5146;
  double t5192;
  double t5245;
  double t5030;
  double t5091;
  double t5123;
  double t5525;
  double t5533;
  double t5548;
  double t5648;
  double t5649;
  double t5674;
  double t5574;
  double t5582;
  double t5616;
  double t5905;
  double t5918;
  double t5919;
  double t6314;
  double t6358;
  double t6431;
  double t6691;
  double t6697;
  double t6715;
  double t1364;
  double t7002;
  double t7066;
  double t7875;
  double t7899;
  double t7932;
  double t8188;
  double t8237;
  double t6786;
  double t8514;
  double t8558;
  double t8562;
  double t8625;
  double t8631;
  double t7796;
  double t7797;
  double t7819;
  double t7865;
  double t7965;
  double t7979;
  double t7993;
  double t8004;
  double t8008;
  double t8020;
  double t8025;
  double t8027;
  double t8056;
  double t8063;
  double t8065;
  double t3367;
  double t8823;
  double t8828;
  double t8837;
  double t8581;
  double t8591;
  double t8935;
  double t8943;
  double t8954;
  double t8960;
  double t8962;
  double t9094;
  double t9095;
  double t9103;
  double t9113;
  double t9117;
  double t9122;
  double t3398;
  double t3448;
  double t8907;
  double t9232;
  double t9235;
  double t9237;
  double t9243;
  double t9246;
  double t8973;
  double t9281;
  double t9287;
  double t9288;
  double t9053;
  double t9131;
  double t9395;
  double t9396;
  double t9398;
  double t9157;
  t208 = Sin(var1[3]);
  t708 = Cos(var1[5]);
  t847 = Sin(var1[4]);
  t699 = Cos(var1[3]);
  t876 = Sin(var1[5]);
  t282 = Cos(var1[6]);
  t839 = -1.*t699*t708;
  t1018 = -1.*t208*t847*t876;
  t1058 = t839 + t1018;
  t1119 = -1.*t708*t208*t847;
  t1221 = t699*t876;
  t1250 = t1119 + t1221;
  t1276 = Sin(var1[6]);
  t81 = Cos(var1[7]);
  t1509 = t282*t1250;
  t1515 = -1.*t1058*t1276;
  t1516 = t1509 + t1515;
  t68 = Cos(var1[4]);
  t1574 = Sin(var1[7]);
  t1788 = Cos(var1[8]);
  t1831 = -1.*t1788;
  t1836 = 1. + t1831;
  t1897 = Sin(var1[8]);
  t2144 = -1.*t68*t81*t208;
  t2206 = -1.*t1516*t1574;
  t2208 = t2144 + t2206;
  t1738 = t81*t1516;
  t1762 = -1.*t68*t208*t1574;
  t1782 = t1738 + t1762;
  t92 = -1.*t81;
  t131 = 1. + t92;
  t153 = 0.183*t131;
  t193 = 0. + t153;
  t347 = -1.*t282;
  t396 = 1. + t347;
  t427 = -0.047*t396;
  t484 = 0. + t427;
  t1282 = 0.047*t1276;
  t1316 = 0. + t1282;
  t2638 = -1.*t708*t208;
  t2662 = t699*t847*t876;
  t2752 = t2638 + t2662;
  t2760 = t699*t708*t847;
  t2813 = t208*t876;
  t2815 = t2760 + t2813;
  t1612 = 0.183*t1574;
  t1615 = 0. + t1612;
  t3057 = t282*t2815;
  t3078 = -1.*t2752*t1276;
  t3082 = t3057 + t3078;
  t1870 = -0.3*t1836;
  t1912 = 0.183*t1897;
  t1970 = 0. + t1870 + t1912;
  t2214 = 0.183*t1836;
  t2261 = 0.3*t1897;
  t2272 = 0. + t2214 + t2261;
  t3258 = t699*t68*t81;
  t3273 = -1.*t3082*t1574;
  t3314 = t3258 + t3273;
  t3166 = t81*t3082;
  t3210 = t699*t68*t1574;
  t3230 = t3166 + t3210;
  t4016 = t699*t68*t708*t282;
  t4018 = -1.*t699*t68*t876*t1276;
  t4065 = t4016 + t4018;
  t4301 = -1.*t699*t81*t847;
  t4308 = -1.*t4065*t1574;
  t4315 = t4301 + t4308;
  t4241 = t81*t4065;
  t4279 = -1.*t699*t847*t1574;
  t4286 = t4241 + t4279;
  t4909 = t68*t708*t282*t208;
  t4948 = -1.*t68*t208*t876*t1276;
  t4985 = t4909 + t4948;
  t5146 = -1.*t81*t208*t847;
  t5192 = -1.*t4985*t1574;
  t5245 = t5146 + t5192;
  t5030 = t81*t4985;
  t5091 = -1.*t208*t847*t1574;
  t5123 = t5030 + t5091;
  t5525 = -1.*t708*t282*t847;
  t5533 = t847*t876*t1276;
  t5548 = t5525 + t5533;
  t5648 = -1.*t68*t81;
  t5649 = -1.*t5548*t1574;
  t5674 = t5648 + t5649;
  t5574 = t81*t5548;
  t5582 = -1.*t68*t1574;
  t5616 = t5574 + t5582;
  t5905 = t708*t208;
  t5918 = -1.*t699*t847*t876;
  t5919 = t5905 + t5918;
  t6314 = t282*t5919;
  t6358 = -1.*t2815*t1276;
  t6431 = t6314 + t6358;
  t6691 = t708*t208*t847;
  t6697 = -1.*t699*t876;
  t6715 = t6691 + t6697;
  t1364 = t282*t1058;
  t7002 = -1.*t6715*t1276;
  t7066 = t1364 + t7002;
  t7875 = -1.*t68*t282*t876;
  t7899 = -1.*t68*t708*t1276;
  t7932 = t7875 + t7899;
  t8188 = -1.*t282*t2752;
  t8237 = t8188 + t6358;
  t6786 = t282*t6715;
  t8514 = t699*t708;
  t8558 = t208*t847*t876;
  t8562 = t8514 + t8558;
  t8625 = -1.*t282*t8562;
  t8631 = t8625 + t7002;
  t7796 = t68*t708*t282;
  t7797 = -1.*t68*t876*t1276;
  t7819 = t7796 + t7797;
  t7865 = -0.17458*t7819;
  t7965 = t7932*t1615;
  t7979 = t81*t7932*t1970;
  t7993 = -1.*t7932*t1574*t2272;
  t8004 = -1.*t1788*t7932*t1574;
  t8008 = -1.*t81*t7932*t1897;
  t8020 = t8004 + t8008;
  t8025 = 0.183*t8020;
  t8027 = t81*t1788*t7932;
  t8056 = -1.*t7932*t1574*t1897;
  t8063 = t8027 + t8056;
  t8065 = -0.6*t8063;
  t3367 = t1788*t3314;
  t8823 = -1.*t81*t3082;
  t8828 = -1.*t699*t68*t1574;
  t8837 = t8823 + t8828;
  t8581 = -1.*t8562*t1276;
  t8591 = t6786 + t8581;
  t8935 = t68*t81*t208;
  t8943 = -1.*t8591*t1574;
  t8954 = t8935 + t8943;
  t8960 = -1.*t81*t8591;
  t8962 = t8960 + t1762;
  t9094 = -1.*t81*t847;
  t9095 = -1.*t7819*t1574;
  t9103 = t9094 + t9095;
  t9113 = -1.*t81*t7819;
  t9117 = t847*t1574;
  t9122 = t9113 + t9117;
  t3398 = -1.*t3230*t1897;
  t3448 = t3367 + t3398;
  t8907 = -1.*t3314*t1897;
  t9232 = 0.183*t1788;
  t9235 = -0.3*t1897;
  t9237 = t9232 + t9235;
  t9243 = 0.3*t1788;
  t9246 = t9243 + t1912;
  t8973 = t1788*t8954;
  t9281 = t81*t8591;
  t9287 = t68*t208*t1574;
  t9288 = t9281 + t9287;
  t9053 = -1.*t8954*t1897;
  t9131 = t1788*t9103;
  t9395 = t81*t7819;
  t9396 = -1.*t847*t1574;
  t9398 = t9395 + t9396;
  t9157 = -1.*t9103*t1897;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t1250*t1316 - 0.17458*(t1250*t1276 + t1364) + t1516*t1615 + t1782*t1970 + 0.183*(-1.*t1782*t1897 + t1788*t2208) - 0.6*(t1782*t1788 + t1897*t2208) + t2208*t2272 + t1058*t484 - 1.*t193*t208*t68;
  p_output1(10)=t1316*t2815 - 0.17458*(t1276*t2815 + t2752*t282) + t1615*t3082 + t1970*t3230 + t2272*t3314 - 0.6*(t1788*t3230 + t1897*t3314) + 0.183*t3448 + t2752*t484 + t193*t68*t699;
  p_output1(11)=0;
  p_output1(12)=t1615*t4065 + t1970*t4286 + t2272*t4315 + 0.183*(-1.*t1897*t4286 + t1788*t4315) - 0.6*(t1788*t4286 + t1897*t4315) + t1316*t68*t699*t708 - 1.*t193*t699*t847 + t484*t68*t699*t876 - 0.17458*(t1276*t68*t699*t708 + t282*t68*t699*t876);
  p_output1(13)=t1615*t4985 + t1970*t5123 + t2272*t5245 + 0.183*(-1.*t1897*t5123 + t1788*t5245) - 0.6*(t1788*t5123 + t1897*t5245) + t1316*t208*t68*t708 - 1.*t193*t208*t847 + t208*t484*t68*t876 - 0.17458*(t1276*t208*t68*t708 + t208*t282*t68*t876);
  p_output1(14)=t1615*t5548 + t1970*t5616 + t2272*t5674 + 0.183*(-1.*t1897*t5616 + t1788*t5674) - 0.6*(t1788*t5616 + t1897*t5674) - 1.*t193*t68 - 1.*t1316*t708*t847 - 1.*t484*t847*t876 - 0.17458*(-1.*t1276*t708*t847 - 1.*t282*t847*t876);
  p_output1(15)=t2815*t484 + t1316*t5919 - 0.17458*(t3057 + t1276*t5919) + t1615*t6431 - 1.*t1574*t2272*t6431 + t1970*t6431*t81 - 0.6*(-1.*t1574*t1897*t6431 + t1788*t6431*t81) + 0.183*(-1.*t1574*t1788*t6431 - 1.*t1897*t6431*t81);
  p_output1(16)=t1058*t1316 + t484*t6715 - 0.17458*(t1058*t1276 + t6786) + t1615*t7066 - 1.*t1574*t2272*t7066 + t1970*t7066*t81 - 0.6*(-1.*t1574*t1897*t7066 + t1788*t7066*t81) + 0.183*(-1.*t1574*t1788*t7066 - 1.*t1897*t7066*t81);
  p_output1(17)=t484*t68*t708 + t7865 + t7965 + t7979 + t7993 + t8025 + t8065 - 1.*t1316*t68*t876;
  p_output1(18)=-0.047*t1276*t2752 + 0.047*t2815*t282 - 0.17458*t3082 + t1615*t8237 - 1.*t1574*t2272*t8237 + t1970*t81*t8237 - 0.6*(-1.*t1574*t1897*t8237 + t1788*t81*t8237) + 0.183*(-1.*t1574*t1788*t8237 - 1.*t1897*t81*t8237);
  p_output1(19)=0.047*t282*t6715 - 0.047*t1276*t8562 - 0.17458*t8591 + t1615*t8631 - 1.*t1574*t2272*t8631 + t1970*t81*t8631 - 0.6*(-1.*t1574*t1897*t8631 + t1788*t81*t8631) + 0.183*(-1.*t1574*t1788*t8631 - 1.*t1897*t81*t8631);
  p_output1(20)=0.047*t282*t68*t708 + t7865 + t7965 + t7979 + t7993 + t8025 + t8065 - 0.047*t1276*t68*t876;
  p_output1(21)=t1970*t3314 + 0.183*t1574*t68*t699 + 0.183*t3082*t81 + t2272*t8837 - 0.6*(t3367 + t1897*t8837) + 0.183*(t1788*t8837 + t8907);
  p_output1(22)=0.183*t1574*t208*t68 + 0.183*t81*t8591 + t1970*t8954 + t2272*t8962 - 0.6*(t1897*t8962 + t8973) + 0.183*(t1788*t8962 + t9053);
  p_output1(23)=0.183*t7819*t81 - 0.183*t1574*t847 + t1970*t9103 + t2272*t9122 - 0.6*(t1897*t9122 + t9131) + 0.183*(t1788*t9122 + t9157);
  p_output1(24)=-0.6*t3448 + 0.183*(-1.*t1788*t3230 + t8907) + t3230*t9237 + t3314*t9246;
  p_output1(25)=t8954*t9246 + t9237*t9288 + 0.183*(t9053 - 1.*t1788*t9288) - 0.6*(t8973 - 1.*t1897*t9288);
  p_output1(26)=t9103*t9246 + t9237*t9398 + 0.183*(t9157 - 1.*t1788*t9398) - 0.6*(t9131 - 1.*t1897*t9398);
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


       
Eigen::Matrix<double,3,18> Jp_FRfoot(const Eigen::Matrix<double,18,1> &var1)
//void Jp_FRfoot(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



