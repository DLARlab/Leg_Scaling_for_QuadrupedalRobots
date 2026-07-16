/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:11:24 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RLfoot.h"

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
  double t802;
  double t1450;
  double t1188;
  double t1215;
  double t1578;
  double t1111;
  double t1449;
  double t1640;
  double t1697;
  double t1844;
  double t2019;
  double t2035;
  double t2089;
  double t755;
  double t2564;
  double t153;
  double t2689;
  double t2703;
  double t2715;
  double t2739;
  double t2814;
  double t2832;
  double t3223;
  double t3631;
  double t3663;
  double t3694;
  double t3883;
  double t3939;
  double t4099;
  double t202;
  double t232;
  double t536;
  double t708;
  double t1120;
  double t1139;
  double t1913;
  double t1969;
  double t1993;
  double t2011;
  double t5033;
  double t5190;
  double t5332;
  double t5380;
  double t5406;
  double t5412;
  double t2627;
  double t2682;
  double t3113;
  double t3532;
  double t3561;
  double t5643;
  double t5852;
  double t5979;
  double t3789;
  double t3875;
  double t3880;
  double t6021;
  double t6067;
  double t6194;
  double t6295;
  double t6299;
  double t6310;
  double t7744;
  double t7750;
  double t7797;
  double t7839;
  double t7845;
  double t7886;
  double t8036;
  double t8056;
  double t8072;
  double t8447;
  double t8493;
  double t8498;
  double t8533;
  double t8534;
  double t8535;
  double t8548;
  double t8573;
  double t8593;
  double t8855;
  double t8858;
  double t8864;
  double t8871;
  double t8880;
  double t8887;
  double t8892;
  double t8897;
  double t8898;
  double t8975;
  double t8978;
  double t8980;
  double t8990;
  double t8992;
  double t8996;
  double t9064;
  double t9066;
  double t9068;
  double t2411;
  double t9072;
  double t9076;
  double t9116;
  double t9117;
  double t9122;
  double t9151;
  double t9158;
  double t9207;
  double t9208;
  double t9211;
  double t9214;
  double t9216;
  double t9082;
  double t9123;
  double t9127;
  double t9129;
  double t9130;
  double t9133;
  double t9134;
  double t9135;
  double t9136;
  double t9137;
  double t9138;
  double t9139;
  double t9141;
  double t9142;
  double t9143;
  double t9144;
  double t9254;
  double t9255;
  double t9258;
  double t6693;
  double t9223;
  double t9227;
  double t9274;
  double t9275;
  double t9281;
  double t9283;
  double t9284;
  double t9307;
  double t9308;
  double t9310;
  double t9312;
  double t9313;
  double t9314;
  double t6506;
  double t6698;
  double t9266;
  double t9326;
  double t9328;
  double t9330;
  double t9332;
  double t9333;
  double t9345;
  double t9346;
  double t9347;
  double t9288;
  double t9293;
  double t9363;
  double t9365;
  double t9368;
  double t9317;
  double t9321;
  t802 = Sin(var1[3]);
  t1450 = Cos(var1[3]);
  t1188 = Cos(var1[5]);
  t1215 = Sin(var1[4]);
  t1578 = Sin(var1[5]);
  t1111 = Sin(var1[15]);
  t1449 = -1.*t1188*t802*t1215;
  t1640 = t1450*t1578;
  t1697 = t1449 + t1640;
  t1844 = Cos(var1[15]);
  t2019 = -1.*t1450*t1188;
  t2035 = -1.*t802*t1215*t1578;
  t2089 = t2019 + t2035;
  t755 = Cos(var1[4]);
  t2564 = Sin(var1[16]);
  t153 = Cos(var1[16]);
  t2689 = t1844*t1697;
  t2703 = -1.*t1111*t2089;
  t2715 = t2689 + t2703;
  t2739 = Cos(var1[17]);
  t2814 = -1.*t2739;
  t2832 = 1. + t2814;
  t3223 = Sin(var1[17]);
  t3631 = -1.*t755*t2564*t802;
  t3663 = t153*t2715;
  t3694 = t3631 + t3663;
  t3883 = -1.*t153*t755*t802;
  t3939 = -1.*t2564*t2715;
  t4099 = t3883 + t3939;
  t202 = -1.*t153;
  t232 = 1. + t202;
  t536 = -0.183*t232;
  t708 = 0. + t536;
  t1120 = -0.047*t1111;
  t1139 = 0. + t1120;
  t1913 = -1.*t1844;
  t1969 = 1. + t1913;
  t1993 = 0.047*t1969;
  t2011 = 0. + t1993;
  t5033 = t1450*t1188*t1215;
  t5190 = t802*t1578;
  t5332 = t5033 + t5190;
  t5380 = -1.*t1188*t802;
  t5406 = t1450*t1215*t1578;
  t5412 = t5380 + t5406;
  t2627 = -0.183*t2564;
  t2682 = 0. + t2627;
  t3113 = -0.1*t2832;
  t3532 = -0.183*t3223;
  t3561 = 0. + t3113 + t3532;
  t5643 = t1844*t5332;
  t5852 = -1.*t1111*t5412;
  t5979 = t5643 + t5852;
  t3789 = -0.183*t2832;
  t3875 = 0.1*t3223;
  t3880 = 0. + t3789 + t3875;
  t6021 = t1450*t755*t2564;
  t6067 = t153*t5979;
  t6194 = t6021 + t6067;
  t6295 = t153*t1450*t755;
  t6299 = -1.*t2564*t5979;
  t6310 = t6295 + t6299;
  t7744 = t1844*t1450*t755*t1188;
  t7750 = -1.*t1450*t755*t1111*t1578;
  t7797 = t7744 + t7750;
  t7839 = -1.*t1450*t2564*t1215;
  t7845 = t153*t7797;
  t7886 = t7839 + t7845;
  t8036 = -1.*t153*t1450*t1215;
  t8056 = -1.*t2564*t7797;
  t8072 = t8036 + t8056;
  t8447 = t1844*t755*t1188*t802;
  t8493 = -1.*t755*t1111*t802*t1578;
  t8498 = t8447 + t8493;
  t8533 = -1.*t2564*t802*t1215;
  t8534 = t153*t8498;
  t8535 = t8533 + t8534;
  t8548 = -1.*t153*t802*t1215;
  t8573 = -1.*t2564*t8498;
  t8593 = t8548 + t8573;
  t8855 = -1.*t1844*t1188*t1215;
  t8858 = t1111*t1215*t1578;
  t8864 = t8855 + t8858;
  t8871 = -1.*t755*t2564;
  t8880 = t153*t8864;
  t8887 = t8871 + t8880;
  t8892 = -1.*t153*t755;
  t8897 = -1.*t2564*t8864;
  t8898 = t8892 + t8897;
  t8975 = t1188*t802;
  t8978 = -1.*t1450*t1215*t1578;
  t8980 = t8975 + t8978;
  t8990 = -1.*t1111*t5332;
  t8992 = t1844*t8980;
  t8996 = t8990 + t8992;
  t9064 = t1188*t802*t1215;
  t9066 = -1.*t1450*t1578;
  t9068 = t9064 + t9066;
  t2411 = t1844*t2089;
  t9072 = -1.*t1111*t9068;
  t9076 = t9072 + t2411;
  t9116 = -1.*t755*t1188*t1111;
  t9117 = -1.*t1844*t755*t1578;
  t9122 = t9116 + t9117;
  t9151 = -1.*t1844*t5412;
  t9158 = t8990 + t9151;
  t9207 = t1450*t1188;
  t9208 = t802*t1215*t1578;
  t9211 = t9207 + t9208;
  t9214 = -1.*t1844*t9211;
  t9216 = t9072 + t9214;
  t9082 = t1844*t9068;
  t9123 = t2682*t9122;
  t9127 = t153*t3561*t9122;
  t9129 = -1.*t2564*t3880*t9122;
  t9130 = t1844*t755*t1188;
  t9133 = -1.*t755*t1111*t1578;
  t9134 = t9130 + t9133;
  t9135 = 0.13205*t9134;
  t9136 = -1.*t2739*t2564*t9122;
  t9137 = -1.*t153*t3223*t9122;
  t9138 = t9136 + t9137;
  t9139 = -0.183*t9138;
  t9141 = t153*t2739*t9122;
  t9142 = -1.*t2564*t3223*t9122;
  t9143 = t9141 + t9142;
  t9144 = -0.2*t9143;
  t9254 = -1.*t1450*t755*t2564;
  t9255 = -1.*t153*t5979;
  t9258 = t9254 + t9255;
  t6693 = t2739*t6310;
  t9223 = -1.*t1111*t9211;
  t9227 = t9082 + t9223;
  t9274 = -1.*t153*t9227;
  t9275 = t3631 + t9274;
  t9281 = t153*t755*t802;
  t9283 = -1.*t2564*t9227;
  t9284 = t9281 + t9283;
  t9307 = t2564*t1215;
  t9308 = -1.*t153*t9134;
  t9310 = t9307 + t9308;
  t9312 = -1.*t153*t1215;
  t9313 = -1.*t2564*t9134;
  t9314 = t9312 + t9313;
  t6506 = -1.*t3223*t6194;
  t6698 = t6506 + t6693;
  t9266 = -1.*t3223*t6310;
  t9326 = -0.183*t2739;
  t9328 = -0.1*t3223;
  t9330 = t9326 + t9328;
  t9332 = 0.1*t2739;
  t9333 = t9332 + t3532;
  t9345 = t755*t2564*t802;
  t9346 = t153*t9227;
  t9347 = t9345 + t9346;
  t9288 = t2739*t9284;
  t9293 = -1.*t3223*t9284;
  t9363 = -1.*t2564*t1215;
  t9365 = t153*t9134;
  t9368 = t9363 + t9365;
  t9317 = t2739*t9314;
  t9321 = -1.*t3223*t9314;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t1139*t1697 + t2011*t2089 + 0.13205*(t1111*t1697 + t2411) + t2682*t2715 + t3561*t3694 + t3880*t4099 - 0.183*(-1.*t3223*t3694 + t2739*t4099) - 0.2*(t2739*t3694 + t3223*t4099) - 1.*t708*t755*t802;
  p_output1(10)=t1139*t5332 + t2011*t5412 + 0.13205*(t1111*t5332 + t1844*t5412) + t2682*t5979 + t3561*t6194 + t3880*t6310 - 0.2*(t2739*t6194 + t3223*t6310) - 0.183*t6698 + t1450*t708*t755;
  p_output1(11)=0;
  p_output1(12)=-1.*t1215*t1450*t708 + t1139*t1188*t1450*t755 + t1450*t1578*t2011*t755 + 0.13205*(t1111*t1188*t1450*t755 + t1450*t1578*t1844*t755) + t2682*t7797 + t3561*t7886 + t3880*t8072 - 0.183*(-1.*t3223*t7886 + t2739*t8072) - 0.2*(t2739*t7886 + t3223*t8072);
  p_output1(13)=-1.*t1215*t708*t802 + t1139*t1188*t755*t802 + t1578*t2011*t755*t802 + 0.13205*(t1111*t1188*t755*t802 + t1578*t1844*t755*t802) + t2682*t8498 + t3561*t8535 + t3880*t8593 - 0.183*(-1.*t3223*t8535 + t2739*t8593) - 0.2*(t2739*t8535 + t3223*t8593);
  p_output1(14)=-1.*t1139*t1188*t1215 + 0.13205*(-1.*t1111*t1188*t1215 - 1.*t1215*t1578*t1844) - 1.*t1215*t1578*t2011 - 1.*t708*t755 + t2682*t8864 + t3561*t8887 + t3880*t8898 - 0.183*(-1.*t3223*t8887 + t2739*t8898) - 0.2*(t2739*t8887 + t3223*t8898);
  p_output1(15)=t2011*t5332 + t1139*t8980 + 0.13205*(t5643 + t1111*t8980) + t2682*t8996 + t153*t3561*t8996 - 1.*t2564*t3880*t8996 - 0.183*(-1.*t2564*t2739*t8996 - 1.*t153*t3223*t8996) - 0.2*(t153*t2739*t8996 - 1.*t2564*t3223*t8996);
  p_output1(16)=t1139*t2089 + t2011*t9068 + t2682*t9076 + t153*t3561*t9076 - 1.*t2564*t3880*t9076 - 0.183*(-1.*t2564*t2739*t9076 - 1.*t153*t3223*t9076) - 0.2*(t153*t2739*t9076 - 1.*t2564*t3223*t9076) + 0.13205*(t1111*t2089 + t9082);
  p_output1(17)=-1.*t1139*t1578*t755 + t1188*t2011*t755 + t9123 + t9127 + t9129 + t9135 + t9139 + t9144;
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
  p_output1(45)=-0.047*t1844*t5332 + 0.047*t1111*t5412 + 0.13205*t5979 + t2682*t9158 + t153*t3561*t9158 - 1.*t2564*t3880*t9158 - 0.183*(-1.*t2564*t2739*t9158 - 1.*t153*t3223*t9158) - 0.2*(t153*t2739*t9158 - 1.*t2564*t3223*t9158);
  p_output1(46)=-0.047*t1844*t9068 + 0.047*t1111*t9211 + t2682*t9216 + t153*t3561*t9216 - 1.*t2564*t3880*t9216 - 0.183*(-1.*t2564*t2739*t9216 - 1.*t153*t3223*t9216) - 0.2*(t153*t2739*t9216 - 1.*t2564*t3223*t9216) + 0.13205*t9227;
  p_output1(47)=0.047*t1111*t1578*t755 - 0.047*t1188*t1844*t755 + t9123 + t9127 + t9129 + t9135 + t9139 + t9144;
  p_output1(48)=-0.183*t153*t5979 + t3561*t6310 - 0.183*t1450*t2564*t755 + t3880*t9258 - 0.2*(t6693 + t3223*t9258) - 0.183*(t2739*t9258 + t9266);
  p_output1(49)=-0.183*t2564*t755*t802 - 0.183*t153*t9227 + t3880*t9275 + t3561*t9284 - 0.2*(t3223*t9275 + t9288) - 0.183*(t2739*t9275 + t9293);
  p_output1(50)=0.183*t1215*t2564 - 0.183*t153*t9134 + t3880*t9310 + t3561*t9314 - 0.2*(t3223*t9310 + t9317) - 0.183*(t2739*t9310 + t9321);
  p_output1(51)=-0.2*t6698 - 0.183*(-1.*t2739*t6194 + t9266) + t6194*t9330 + t6310*t9333;
  p_output1(52)=t9284*t9333 + t9330*t9347 - 0.183*(t9293 - 1.*t2739*t9347) - 0.2*(t9288 - 1.*t3223*t9347);
  p_output1(53)=t9314*t9333 + t9330*t9368 - 0.183*(t9321 - 1.*t2739*t9368) - 0.2*(t9317 - 1.*t3223*t9368);
}


       
Eigen::Matrix<double,3,18> Jp_RLfoot(const Eigen::Matrix<double,18,1> &var1)
//void Jp_RLfoot(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



