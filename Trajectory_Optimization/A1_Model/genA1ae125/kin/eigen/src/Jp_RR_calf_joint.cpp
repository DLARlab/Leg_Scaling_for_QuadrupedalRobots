/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:04:30 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RR_calf_joint.h"

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
  double t476;
  double t927;
  double t861;
  double t897;
  double t966;
  double t675;
  double t902;
  double t973;
  double t989;
  double t998;
  double t1034;
  double t1036;
  double t1067;
  double t202;
  double t1443;
  double t80;
  double t1647;
  double t1657;
  double t1663;
  double t1773;
  double t1793;
  double t1828;
  double t1879;
  double t1978;
  double t2024;
  double t2034;
  double t2351;
  double t2378;
  double t2582;
  double t121;
  double t122;
  double t180;
  double t185;
  double t737;
  double t791;
  double t1013;
  double t1014;
  double t1027;
  double t1030;
  double t3110;
  double t3115;
  double t3177;
  double t3656;
  double t3701;
  double t3702;
  double t1509;
  double t1561;
  double t1849;
  double t1905;
  double t1910;
  double t4064;
  double t4176;
  double t4199;
  double t2276;
  double t2277;
  double t2342;
  double t4372;
  double t4464;
  double t4478;
  double t4488;
  double t4495;
  double t4496;
  double t4686;
  double t4687;
  double t4693;
  double t4705;
  double t4747;
  double t4750;
  double t4753;
  double t4760;
  double t4764;
  double t4857;
  double t4858;
  double t4860;
  double t4862;
  double t4864;
  double t4866;
  double t4868;
  double t4869;
  double t4880;
  double t4937;
  double t4938;
  double t4941;
  double t4949;
  double t4954;
  double t4968;
  double t4972;
  double t4975;
  double t4979;
  double t5046;
  double t5052;
  double t5058;
  double t5066;
  double t5071;
  double t5078;
  double t5156;
  double t5157;
  double t5158;
  double t1135;
  double t5162;
  double t5163;
  double t5205;
  double t5206;
  double t5207;
  double t5300;
  double t5301;
  double t5341;
  double t5352;
  double t5355;
  double t5357;
  double t5358;
  double t5170;
  double t5208;
  double t5209;
  double t5210;
  double t5211;
  double t5212;
  double t5213;
  double t5217;
  double t5219;
  double t5230;
  double t5251;
  double t5258;
  double t5262;
  double t5266;
  double t5268;
  double t5279;
  double t5413;
  double t5414;
  double t5416;
  double t4505;
  double t5371;
  double t5372;
  double t5458;
  double t5461;
  double t5468;
  double t5469;
  double t5478;
  double t5553;
  double t5557;
  double t5559;
  double t5569;
  double t5573;
  double t5575;
  double t4503;
  double t4506;
  double t5445;
  double t5693;
  double t5703;
  double t5710;
  double t5712;
  double t5720;
  double t5785;
  double t5790;
  double t5794;
  double t5490;
  double t5515;
  double t5822;
  double t5824;
  double t5825;
  double t5601;
  double t5631;
  t476 = Sin(var1[3]);
  t927 = Cos(var1[3]);
  t861 = Cos(var1[5]);
  t897 = Sin(var1[4]);
  t966 = Sin(var1[5]);
  t675 = Sin(var1[12]);
  t902 = -1.*t861*t476*t897;
  t973 = t927*t966;
  t989 = t902 + t973;
  t998 = Cos(var1[12]);
  t1034 = -1.*t927*t861;
  t1036 = -1.*t476*t897*t966;
  t1067 = t1034 + t1036;
  t202 = Cos(var1[4]);
  t1443 = Sin(var1[13]);
  t80 = Cos(var1[13]);
  t1647 = t998*t989;
  t1657 = -1.*t675*t1067;
  t1663 = t1647 + t1657;
  t1773 = Cos(var1[14]);
  t1793 = -1.*t1773;
  t1828 = 1. + t1793;
  t1879 = Sin(var1[14]);
  t1978 = -1.*t202*t1443*t476;
  t2024 = t80*t1663;
  t2034 = t1978 + t2024;
  t2351 = -1.*t80*t202*t476;
  t2378 = -1.*t1443*t1663;
  t2582 = t2351 + t2378;
  t121 = -1.*t80;
  t122 = 1. + t121;
  t180 = -0.183*t122;
  t185 = 0. + t180;
  t737 = 0.047*t675;
  t791 = 0. + t737;
  t1013 = -1.*t998;
  t1014 = 1. + t1013;
  t1027 = -0.047*t1014;
  t1030 = 0. + t1027;
  t3110 = t927*t861*t897;
  t3115 = t476*t966;
  t3177 = t3110 + t3115;
  t3656 = -1.*t861*t476;
  t3701 = t927*t897*t966;
  t3702 = t3656 + t3701;
  t1509 = -0.183*t1443;
  t1561 = 0. + t1509;
  t1849 = -0.25*t1828;
  t1905 = -0.183*t1879;
  t1910 = 0. + t1849 + t1905;
  t4064 = t998*t3177;
  t4176 = -1.*t675*t3702;
  t4199 = t4064 + t4176;
  t2276 = -0.183*t1828;
  t2277 = 0.25*t1879;
  t2342 = 0. + t2276 + t2277;
  t4372 = t927*t202*t1443;
  t4464 = t80*t4199;
  t4478 = t4372 + t4464;
  t4488 = t80*t927*t202;
  t4495 = -1.*t1443*t4199;
  t4496 = t4488 + t4495;
  t4686 = t998*t927*t202*t861;
  t4687 = -1.*t927*t202*t675*t966;
  t4693 = t4686 + t4687;
  t4705 = -1.*t927*t1443*t897;
  t4747 = t80*t4693;
  t4750 = t4705 + t4747;
  t4753 = -1.*t80*t927*t897;
  t4760 = -1.*t1443*t4693;
  t4764 = t4753 + t4760;
  t4857 = t998*t202*t861*t476;
  t4858 = -1.*t202*t675*t476*t966;
  t4860 = t4857 + t4858;
  t4862 = -1.*t1443*t476*t897;
  t4864 = t80*t4860;
  t4866 = t4862 + t4864;
  t4868 = -1.*t80*t476*t897;
  t4869 = -1.*t1443*t4860;
  t4880 = t4868 + t4869;
  t4937 = -1.*t998*t861*t897;
  t4938 = t675*t897*t966;
  t4941 = t4937 + t4938;
  t4949 = -1.*t202*t1443;
  t4954 = t80*t4941;
  t4968 = t4949 + t4954;
  t4972 = -1.*t80*t202;
  t4975 = -1.*t1443*t4941;
  t4979 = t4972 + t4975;
  t5046 = t861*t476;
  t5052 = -1.*t927*t897*t966;
  t5058 = t5046 + t5052;
  t5066 = -1.*t675*t3177;
  t5071 = t998*t5058;
  t5078 = t5066 + t5071;
  t5156 = t861*t476*t897;
  t5157 = -1.*t927*t966;
  t5158 = t5156 + t5157;
  t1135 = t998*t1067;
  t5162 = -1.*t675*t5158;
  t5163 = t5162 + t1135;
  t5205 = -1.*t202*t861*t675;
  t5206 = -1.*t998*t202*t966;
  t5207 = t5205 + t5206;
  t5300 = -1.*t998*t3702;
  t5301 = t5066 + t5300;
  t5341 = t927*t861;
  t5352 = t476*t897*t966;
  t5355 = t5341 + t5352;
  t5357 = -1.*t998*t5355;
  t5358 = t5162 + t5357;
  t5170 = t998*t5158;
  t5208 = t1561*t5207;
  t5209 = t80*t1910*t5207;
  t5210 = -1.*t1443*t2342*t5207;
  t5211 = t998*t202*t861;
  t5212 = -1.*t202*t675*t966;
  t5213 = t5211 + t5212;
  t5217 = -0.13205*t5213;
  t5219 = -1.*t1773*t1443*t5207;
  t5230 = -1.*t80*t1879*t5207;
  t5251 = t5219 + t5230;
  t5258 = -0.183*t5251;
  t5262 = t80*t1773*t5207;
  t5266 = -1.*t1443*t1879*t5207;
  t5268 = t5262 + t5266;
  t5279 = -0.25*t5268;
  t5413 = -1.*t927*t202*t1443;
  t5414 = -1.*t80*t4199;
  t5416 = t5413 + t5414;
  t4505 = t1773*t4496;
  t5371 = -1.*t675*t5355;
  t5372 = t5170 + t5371;
  t5458 = -1.*t80*t5372;
  t5461 = t1978 + t5458;
  t5468 = t80*t202*t476;
  t5469 = -1.*t1443*t5372;
  t5478 = t5468 + t5469;
  t5553 = t1443*t897;
  t5557 = -1.*t80*t5213;
  t5559 = t5553 + t5557;
  t5569 = -1.*t80*t897;
  t5573 = -1.*t1443*t5213;
  t5575 = t5569 + t5573;
  t4503 = -1.*t1879*t4478;
  t4506 = t4503 + t4505;
  t5445 = -1.*t1879*t4496;
  t5693 = -0.183*t1773;
  t5703 = -0.25*t1879;
  t5710 = t5693 + t5703;
  t5712 = 0.25*t1773;
  t5720 = t5712 + t1905;
  t5785 = t202*t1443*t476;
  t5790 = t80*t5372;
  t5794 = t5785 + t5790;
  t5490 = t1773*t5478;
  t5515 = -1.*t1879*t5478;
  t5822 = -1.*t1443*t897;
  t5824 = t80*t5213;
  t5825 = t5822 + t5824;
  t5601 = t1773*t5575;
  t5631 = -1.*t1879*t5575;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t1030*t1067 + t1561*t1663 + t1910*t2034 + t2342*t2582 - 0.183*(-1.*t1879*t2034 + t1773*t2582) - 0.25*(t1773*t2034 + t1879*t2582) - 1.*t185*t202*t476 + t791*t989 - 0.13205*(t1135 + t675*t989);
  p_output1(10)=t1030*t3702 + t1561*t4199 + t1910*t4478 + t2342*t4496 - 0.25*(t1773*t4478 + t1879*t4496) - 0.183*t4506 + t3177*t791 + t185*t202*t927 - 0.13205*(t3177*t675 + t3702*t998);
  p_output1(11)=0;
  p_output1(12)=t1561*t4693 + t1910*t4750 + t2342*t4764 - 0.183*(-1.*t1879*t4750 + t1773*t4764) - 0.25*(t1773*t4750 + t1879*t4764) + t202*t791*t861*t927 - 1.*t185*t897*t927 + t1030*t202*t927*t966 - 0.13205*(t202*t675*t861*t927 + t202*t927*t966*t998);
  p_output1(13)=t1561*t4860 + t1910*t4866 + t2342*t4880 - 0.183*(-1.*t1879*t4866 + t1773*t4880) - 0.25*(t1773*t4866 + t1879*t4880) + t202*t476*t791*t861 - 1.*t185*t476*t897 + t1030*t202*t476*t966 - 0.13205*(t202*t476*t675*t861 + t202*t476*t966*t998);
  p_output1(14)=-1.*t185*t202 + t1561*t4941 + t1910*t4968 + t2342*t4979 - 0.183*(-1.*t1879*t4968 + t1773*t4979) - 0.25*(t1773*t4968 + t1879*t4979) - 1.*t791*t861*t897 - 1.*t1030*t897*t966 - 0.13205*(-1.*t675*t861*t897 - 1.*t897*t966*t998);
  p_output1(15)=t1030*t3177 + t1561*t5078 - 1.*t1443*t2342*t5078 - 0.13205*(t4064 + t5058*t675) + t5058*t791 + t1910*t5078*t80 - 0.25*(-1.*t1443*t1879*t5078 + t1773*t5078*t80) - 0.183*(-1.*t1443*t1773*t5078 - 1.*t1879*t5078*t80);
  p_output1(16)=t1030*t5158 + t1561*t5163 - 1.*t1443*t2342*t5163 - 0.13205*(t5170 + t1067*t675) + t1067*t791 + t1910*t5163*t80 - 0.25*(-1.*t1443*t1879*t5163 + t1773*t5163*t80) - 0.183*(-1.*t1443*t1773*t5163 - 1.*t1879*t5163*t80);
  p_output1(17)=t5208 + t5209 + t5210 + t5217 + t5258 + t5279 + t1030*t202*t861 - 1.*t202*t791*t966;
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
  p_output1(36)=-0.13205*t4199 + t1561*t5301 - 1.*t1443*t2342*t5301 - 0.047*t3702*t675 + t1910*t5301*t80 - 0.25*(-1.*t1443*t1879*t5301 + t1773*t5301*t80) - 0.183*(-1.*t1443*t1773*t5301 - 1.*t1879*t5301*t80) + 0.047*t3177*t998;
  p_output1(37)=t1561*t5358 - 1.*t1443*t2342*t5358 - 0.13205*t5372 - 0.047*t5355*t675 + t1910*t5358*t80 - 0.25*(-1.*t1443*t1879*t5358 + t1773*t5358*t80) - 0.183*(-1.*t1443*t1773*t5358 - 1.*t1879*t5358*t80) + 0.047*t5158*t998;
  p_output1(38)=t5208 + t5209 + t5210 + t5217 + t5258 + t5279 - 0.047*t202*t675*t966 + 0.047*t202*t861*t998;
  p_output1(39)=t1910*t4496 + t2342*t5416 - 0.25*(t4505 + t1879*t5416) - 0.183*(t1773*t5416 + t5445) - 0.183*t4199*t80 - 0.183*t1443*t202*t927;
  p_output1(40)=-0.183*t1443*t202*t476 + t2342*t5461 + t1910*t5478 - 0.25*(t1879*t5461 + t5490) - 0.183*(t1773*t5461 + t5515) - 0.183*t5372*t80;
  p_output1(41)=t2342*t5559 + t1910*t5575 - 0.25*(t1879*t5559 + t5601) - 0.183*(t1773*t5559 + t5631) - 0.183*t5213*t80 + 0.183*t1443*t897;
  p_output1(42)=-0.25*t4506 - 0.183*(-1.*t1773*t4478 + t5445) + t4478*t5710 + t4496*t5720;
  p_output1(43)=t5478*t5720 + t5710*t5794 - 0.183*(t5515 - 1.*t1773*t5794) - 0.25*(t5490 - 1.*t1879*t5794);
  p_output1(44)=t5575*t5720 + t5710*t5825 - 0.183*(t5631 - 1.*t1773*t5825) - 0.25*(t5601 - 1.*t1879*t5825);
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


       
Eigen::Matrix<double,3,18> Jp_RR_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void Jp_RR_calf_joint(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



