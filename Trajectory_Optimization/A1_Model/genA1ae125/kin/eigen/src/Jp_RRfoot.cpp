/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:04:47 GMT-05:00
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
  double t720;
  double t1021;
  double t916;
  double t1002;
  double t1182;
  double t742;
  double t1012;
  double t1241;
  double t1315;
  double t1573;
  double t2254;
  double t2413;
  double t2556;
  double t693;
  double t2858;
  double t466;
  double t3343;
  double t3344;
  double t3472;
  double t3611;
  double t3798;
  double t3801;
  double t3815;
  double t3852;
  double t3854;
  double t3870;
  double t4022;
  double t4145;
  double t4237;
  double t579;
  double t621;
  double t631;
  double t654;
  double t816;
  double t913;
  double t1642;
  double t1655;
  double t1782;
  double t1820;
  double t4670;
  double t4721;
  double t4778;
  double t4871;
  double t4873;
  double t4894;
  double t3002;
  double t3093;
  double t3806;
  double t3847;
  double t3850;
  double t4978;
  double t5011;
  double t5022;
  double t3909;
  double t3918;
  double t3986;
  double t5102;
  double t5110;
  double t5140;
  double t5261;
  double t5270;
  double t5286;
  double t6355;
  double t6358;
  double t6361;
  double t6395;
  double t6445;
  double t6474;
  double t6617;
  double t6638;
  double t6702;
  double t7255;
  double t7256;
  double t7277;
  double t7342;
  double t7344;
  double t7364;
  double t7404;
  double t7416;
  double t7419;
  double t7746;
  double t7763;
  double t7769;
  double t7782;
  double t7788;
  double t7796;
  double t7811;
  double t7829;
  double t7831;
  double t7967;
  double t7969;
  double t7977;
  double t8025;
  double t8029;
  double t8030;
  double t8196;
  double t8208;
  double t8212;
  double t2682;
  double t8229;
  double t8230;
  double t8384;
  double t8386;
  double t8388;
  double t8481;
  double t8482;
  double t8559;
  double t8560;
  double t8561;
  double t8569;
  double t8570;
  double t8254;
  double t8389;
  double t8390;
  double t8392;
  double t8394;
  double t8401;
  double t8403;
  double t8410;
  double t8412;
  double t8415;
  double t8419;
  double t8455;
  double t8456;
  double t8459;
  double t8462;
  double t8472;
  double t8760;
  double t8761;
  double t8762;
  double t5390;
  double t8585;
  double t8591;
  double t8814;
  double t8815;
  double t8828;
  double t8832;
  double t8848;
  double t8912;
  double t8915;
  double t8916;
  double t8919;
  double t8920;
  double t8921;
  double t5370;
  double t5661;
  double t8786;
  double t8971;
  double t8977;
  double t8978;
  double t8988;
  double t8989;
  double t9008;
  double t9014;
  double t9017;
  double t8858;
  double t8877;
  double t9058;
  double t9061;
  double t9073;
  double t8927;
  double t8953;
  t720 = Sin(var1[3]);
  t1021 = Cos(var1[3]);
  t916 = Cos(var1[5]);
  t1002 = Sin(var1[4]);
  t1182 = Sin(var1[5]);
  t742 = Sin(var1[12]);
  t1012 = -1.*t916*t720*t1002;
  t1241 = t1021*t1182;
  t1315 = t1012 + t1241;
  t1573 = Cos(var1[12]);
  t2254 = -1.*t1021*t916;
  t2413 = -1.*t720*t1002*t1182;
  t2556 = t2254 + t2413;
  t693 = Cos(var1[4]);
  t2858 = Sin(var1[13]);
  t466 = Cos(var1[13]);
  t3343 = t1573*t1315;
  t3344 = -1.*t742*t2556;
  t3472 = t3343 + t3344;
  t3611 = Cos(var1[14]);
  t3798 = -1.*t3611;
  t3801 = 1. + t3798;
  t3815 = Sin(var1[14]);
  t3852 = -1.*t693*t2858*t720;
  t3854 = t466*t3472;
  t3870 = t3852 + t3854;
  t4022 = -1.*t466*t693*t720;
  t4145 = -1.*t2858*t3472;
  t4237 = t4022 + t4145;
  t579 = -1.*t466;
  t621 = 1. + t579;
  t631 = -0.183*t621;
  t654 = 0. + t631;
  t816 = 0.047*t742;
  t913 = 0. + t816;
  t1642 = -1.*t1573;
  t1655 = 1. + t1642;
  t1782 = -0.047*t1655;
  t1820 = 0. + t1782;
  t4670 = t1021*t916*t1002;
  t4721 = t720*t1182;
  t4778 = t4670 + t4721;
  t4871 = -1.*t916*t720;
  t4873 = t1021*t1002*t1182;
  t4894 = t4871 + t4873;
  t3002 = -0.183*t2858;
  t3093 = 0. + t3002;
  t3806 = -0.25*t3801;
  t3847 = -0.183*t3815;
  t3850 = 0. + t3806 + t3847;
  t4978 = t1573*t4778;
  t5011 = -1.*t742*t4894;
  t5022 = t4978 + t5011;
  t3909 = -0.183*t3801;
  t3918 = 0.25*t3815;
  t3986 = 0. + t3909 + t3918;
  t5102 = t1021*t693*t2858;
  t5110 = t466*t5022;
  t5140 = t5102 + t5110;
  t5261 = t466*t1021*t693;
  t5270 = -1.*t2858*t5022;
  t5286 = t5261 + t5270;
  t6355 = t1573*t1021*t693*t916;
  t6358 = -1.*t1021*t693*t742*t1182;
  t6361 = t6355 + t6358;
  t6395 = -1.*t1021*t2858*t1002;
  t6445 = t466*t6361;
  t6474 = t6395 + t6445;
  t6617 = -1.*t466*t1021*t1002;
  t6638 = -1.*t2858*t6361;
  t6702 = t6617 + t6638;
  t7255 = t1573*t693*t916*t720;
  t7256 = -1.*t693*t742*t720*t1182;
  t7277 = t7255 + t7256;
  t7342 = -1.*t2858*t720*t1002;
  t7344 = t466*t7277;
  t7364 = t7342 + t7344;
  t7404 = -1.*t466*t720*t1002;
  t7416 = -1.*t2858*t7277;
  t7419 = t7404 + t7416;
  t7746 = -1.*t1573*t916*t1002;
  t7763 = t742*t1002*t1182;
  t7769 = t7746 + t7763;
  t7782 = -1.*t693*t2858;
  t7788 = t466*t7769;
  t7796 = t7782 + t7788;
  t7811 = -1.*t466*t693;
  t7829 = -1.*t2858*t7769;
  t7831 = t7811 + t7829;
  t7967 = t916*t720;
  t7969 = -1.*t1021*t1002*t1182;
  t7977 = t7967 + t7969;
  t8025 = -1.*t742*t4778;
  t8029 = t1573*t7977;
  t8030 = t8025 + t8029;
  t8196 = t916*t720*t1002;
  t8208 = -1.*t1021*t1182;
  t8212 = t8196 + t8208;
  t2682 = t1573*t2556;
  t8229 = -1.*t742*t8212;
  t8230 = t8229 + t2682;
  t8384 = -1.*t693*t916*t742;
  t8386 = -1.*t1573*t693*t1182;
  t8388 = t8384 + t8386;
  t8481 = -1.*t1573*t4894;
  t8482 = t8025 + t8481;
  t8559 = t1021*t916;
  t8560 = t720*t1002*t1182;
  t8561 = t8559 + t8560;
  t8569 = -1.*t1573*t8561;
  t8570 = t8229 + t8569;
  t8254 = t1573*t8212;
  t8389 = t3093*t8388;
  t8390 = t466*t3850*t8388;
  t8392 = -1.*t2858*t3986*t8388;
  t8394 = t1573*t693*t916;
  t8401 = -1.*t693*t742*t1182;
  t8403 = t8394 + t8401;
  t8410 = -0.13205*t8403;
  t8412 = -1.*t3611*t2858*t8388;
  t8415 = -1.*t466*t3815*t8388;
  t8419 = t8412 + t8415;
  t8455 = -0.183*t8419;
  t8456 = t466*t3611*t8388;
  t8459 = -1.*t2858*t3815*t8388;
  t8462 = t8456 + t8459;
  t8472 = -0.5*t8462;
  t8760 = -1.*t1021*t693*t2858;
  t8761 = -1.*t466*t5022;
  t8762 = t8760 + t8761;
  t5390 = t3611*t5286;
  t8585 = -1.*t742*t8561;
  t8591 = t8254 + t8585;
  t8814 = -1.*t466*t8591;
  t8815 = t3852 + t8814;
  t8828 = t466*t693*t720;
  t8832 = -1.*t2858*t8591;
  t8848 = t8828 + t8832;
  t8912 = t2858*t1002;
  t8915 = -1.*t466*t8403;
  t8916 = t8912 + t8915;
  t8919 = -1.*t466*t1002;
  t8920 = -1.*t2858*t8403;
  t8921 = t8919 + t8920;
  t5370 = -1.*t3815*t5140;
  t5661 = t5370 + t5390;
  t8786 = -1.*t3815*t5286;
  t8971 = -0.183*t3611;
  t8977 = -0.25*t3815;
  t8978 = t8971 + t8977;
  t8988 = 0.25*t3611;
  t8989 = t8988 + t3847;
  t9008 = t693*t2858*t720;
  t9014 = t466*t8591;
  t9017 = t9008 + t9014;
  t8858 = t3611*t8848;
  t8877 = -1.*t3815*t8848;
  t9058 = -1.*t2858*t1002;
  t9061 = t466*t8403;
  t9073 = t9058 + t9061;
  t8927 = t3611*t8921;
  t8953 = -1.*t3815*t8921;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t1820*t2556 + t3093*t3472 + t3850*t3870 + t3986*t4237 - 0.183*(-1.*t3815*t3870 + t3611*t4237) - 0.5*(t3611*t3870 + t3815*t4237) - 1.*t654*t693*t720 - 0.13205*(t2682 + t1315*t742) + t1315*t913;
  p_output1(10)=t1820*t4894 + t3093*t5022 + t3850*t5140 + t3986*t5286 - 0.5*(t3611*t5140 + t3815*t5286) - 0.183*t5661 + t1021*t654*t693 - 0.13205*(t1573*t4894 + t4778*t742) + t4778*t913;
  p_output1(11)=0;
  p_output1(12)=t3093*t6361 + t3850*t6474 - 1.*t1002*t1021*t654 + t3986*t6702 - 0.183*(-1.*t3815*t6474 + t3611*t6702) - 0.5*(t3611*t6474 + t3815*t6702) + t1021*t1182*t1820*t693 + t1021*t693*t913*t916 - 0.13205*(t1021*t1182*t1573*t693 + t1021*t693*t742*t916);
  p_output1(13)=-1.*t1002*t654*t720 + t1182*t1820*t693*t720 + t3093*t7277 + t3850*t7364 + t3986*t7419 - 0.183*(-1.*t3815*t7364 + t3611*t7419) - 0.5*(t3611*t7364 + t3815*t7419) + t693*t720*t913*t916 - 0.13205*(t1182*t1573*t693*t720 + t693*t720*t742*t916);
  p_output1(14)=-1.*t1002*t1182*t1820 - 1.*t654*t693 + t3093*t7769 + t3850*t7796 + t3986*t7831 - 0.183*(-1.*t3815*t7796 + t3611*t7831) - 0.5*(t3611*t7796 + t3815*t7831) - 1.*t1002*t913*t916 - 0.13205*(-1.*t1002*t1182*t1573 - 1.*t1002*t742*t916);
  p_output1(15)=t1820*t4778 - 0.13205*(t4978 + t742*t7977) + t3093*t8030 - 1.*t2858*t3986*t8030 + t3850*t466*t8030 - 0.5*(-1.*t2858*t3815*t8030 + t3611*t466*t8030) - 0.183*(-1.*t2858*t3611*t8030 - 1.*t3815*t466*t8030) + t7977*t913;
  p_output1(16)=t1820*t8212 + t3093*t8230 - 1.*t2858*t3986*t8230 + t3850*t466*t8230 - 0.5*(-1.*t2858*t3815*t8230 + t3611*t466*t8230) - 0.183*(-1.*t2858*t3611*t8230 - 1.*t3815*t466*t8230) - 0.13205*(t2556*t742 + t8254) + t2556*t913;
  p_output1(17)=t8389 + t8390 + t8392 + t8410 + t8455 + t8472 - 1.*t1182*t693*t913 + t1820*t693*t916;
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
  p_output1(36)=0.047*t1573*t4778 - 0.13205*t5022 - 0.047*t4894*t742 + t3093*t8482 - 1.*t2858*t3986*t8482 + t3850*t466*t8482 - 0.5*(-1.*t2858*t3815*t8482 + t3611*t466*t8482) - 0.183*(-1.*t2858*t3611*t8482 - 1.*t3815*t466*t8482);
  p_output1(37)=0.047*t1573*t8212 - 0.047*t742*t8561 + t3093*t8570 - 1.*t2858*t3986*t8570 + t3850*t466*t8570 - 0.5*(-1.*t2858*t3815*t8570 + t3611*t466*t8570) - 0.183*(-1.*t2858*t3611*t8570 - 1.*t3815*t466*t8570) - 0.13205*t8591;
  p_output1(38)=-0.047*t1182*t693*t742 + t8389 + t8390 + t8392 + t8410 + t8455 + t8472 + 0.047*t1573*t693*t916;
  p_output1(39)=-0.183*t466*t5022 + t3850*t5286 - 0.183*t1021*t2858*t693 + t3986*t8762 - 0.5*(t5390 + t3815*t8762) - 0.183*(t3611*t8762 + t8786);
  p_output1(40)=-0.183*t2858*t693*t720 - 0.183*t466*t8591 + t3986*t8815 + t3850*t8848 - 0.5*(t3815*t8815 + t8858) - 0.183*(t3611*t8815 + t8877);
  p_output1(41)=0.183*t1002*t2858 - 0.183*t466*t8403 + t3986*t8916 + t3850*t8921 - 0.5*(t3815*t8916 + t8927) - 0.183*(t3611*t8916 + t8953);
  p_output1(42)=-0.5*t5661 - 0.183*(-1.*t3611*t5140 + t8786) + t5140*t8978 + t5286*t8989;
  p_output1(43)=t8848*t8989 + t8978*t9017 - 0.183*(t8877 - 1.*t3611*t9017) - 0.5*(t8858 - 1.*t3815*t9017);
  p_output1(44)=t8921*t8989 + t8978*t9073 - 0.183*(t8953 - 1.*t3611*t9073) - 0.5*(t8927 - 1.*t3815*t9073);
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



