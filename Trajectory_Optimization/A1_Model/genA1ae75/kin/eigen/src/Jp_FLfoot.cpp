/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:52:01 GMT-05:00
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
  double t403;
  double t843;
  double t762;
  double t787;
  double t853;
  double t560;
  double t842;
  double t877;
  double t920;
  double t1027;
  double t2470;
  double t2485;
  double t2506;
  double t297;
  double t3012;
  double t187;
  double t3089;
  double t3189;
  double t3277;
  double t3550;
  double t3651;
  double t3653;
  double t3898;
  double t4407;
  double t4468;
  double t4499;
  double t4699;
  double t4706;
  double t4708;
  double t200;
  double t247;
  double t274;
  double t285;
  double t707;
  double t737;
  double t1229;
  double t1585;
  double t2067;
  double t2154;
  double t4908;
  double t4922;
  double t5006;
  double t5043;
  double t5102;
  double t5256;
  double t3028;
  double t3056;
  double t3698;
  double t3937;
  double t4145;
  double t5409;
  double t5439;
  double t5486;
  double t4597;
  double t4611;
  double t4653;
  double t5712;
  double t5784;
  double t5788;
  double t5816;
  double t5846;
  double t5862;
  double t6110;
  double t6127;
  double t6174;
  double t6191;
  double t6223;
  double t6239;
  double t6259;
  double t6268;
  double t6272;
  double t6549;
  double t6586;
  double t6604;
  double t6623;
  double t6639;
  double t6679;
  double t6705;
  double t6720;
  double t6747;
  double t6953;
  double t6985;
  double t6992;
  double t7019;
  double t7035;
  double t7056;
  double t7102;
  double t7116;
  double t7135;
  double t7293;
  double t7299;
  double t7317;
  double t7333;
  double t7335;
  double t7350;
  double t7523;
  double t7527;
  double t7540;
  double t2695;
  double t7544;
  double t7581;
  double t7834;
  double t7841;
  double t7842;
  double t8026;
  double t8027;
  double t8214;
  double t8221;
  double t8230;
  double t8251;
  double t8264;
  double t7653;
  double t7848;
  double t7851;
  double t7852;
  double t7853;
  double t7855;
  double t7866;
  double t7871;
  double t7874;
  double t7895;
  double t7912;
  double t7923;
  double t7933;
  double t7934;
  double t7953;
  double t7975;
  double t8471;
  double t8481;
  double t8500;
  double t5924;
  double t8298;
  double t8299;
  double t8675;
  double t8677;
  double t8689;
  double t8691;
  double t8693;
  double t8753;
  double t8761;
  double t8766;
  double t8778;
  double t8799;
  double t8805;
  double t5919;
  double t5935;
  double t8618;
  double t8853;
  double t8859;
  double t8868;
  double t8877;
  double t8879;
  double t8933;
  double t8961;
  double t8962;
  double t8702;
  double t8718;
  double t9027;
  double t9032;
  double t9034;
  double t8815;
  double t8821;
  t403 = Sin(var1[3]);
  t843 = Cos(var1[3]);
  t762 = Cos(var1[5]);
  t787 = Sin(var1[4]);
  t853 = Sin(var1[5]);
  t560 = Sin(var1[9]);
  t842 = -1.*t762*t403*t787;
  t877 = t843*t853;
  t920 = t842 + t877;
  t1027 = Cos(var1[9]);
  t2470 = -1.*t843*t762;
  t2485 = -1.*t403*t787*t853;
  t2506 = t2470 + t2485;
  t297 = Cos(var1[4]);
  t3012 = Sin(var1[10]);
  t187 = Cos(var1[10]);
  t3089 = t1027*t920;
  t3189 = -1.*t560*t2506;
  t3277 = t3089 + t3189;
  t3550 = Cos(var1[11]);
  t3651 = -1.*t3550;
  t3653 = 1. + t3651;
  t3898 = Sin(var1[11]);
  t4407 = -1.*t297*t3012*t403;
  t4468 = t187*t3277;
  t4499 = t4407 + t4468;
  t4699 = -1.*t187*t297*t403;
  t4706 = -1.*t3012*t3277;
  t4708 = t4699 + t4706;
  t200 = -1.*t187;
  t247 = 1. + t200;
  t274 = 0.183*t247;
  t285 = 0. + t274;
  t707 = -0.047*t560;
  t737 = 0. + t707;
  t1229 = -1.*t1027;
  t1585 = 1. + t1229;
  t2067 = 0.047*t1585;
  t2154 = 0. + t2067;
  t4908 = t843*t762*t787;
  t4922 = t403*t853;
  t5006 = t4908 + t4922;
  t5043 = -1.*t762*t403;
  t5102 = t843*t787*t853;
  t5256 = t5043 + t5102;
  t3028 = 0.183*t3012;
  t3056 = 0. + t3028;
  t3698 = -0.15*t3653;
  t3937 = 0.183*t3898;
  t4145 = 0. + t3698 + t3937;
  t5409 = t1027*t5006;
  t5439 = -1.*t560*t5256;
  t5486 = t5409 + t5439;
  t4597 = 0.183*t3653;
  t4611 = 0.15*t3898;
  t4653 = 0. + t4597 + t4611;
  t5712 = t843*t297*t3012;
  t5784 = t187*t5486;
  t5788 = t5712 + t5784;
  t5816 = t187*t843*t297;
  t5846 = -1.*t3012*t5486;
  t5862 = t5816 + t5846;
  t6110 = t1027*t843*t297*t762;
  t6127 = -1.*t843*t297*t560*t853;
  t6174 = t6110 + t6127;
  t6191 = -1.*t843*t3012*t787;
  t6223 = t187*t6174;
  t6239 = t6191 + t6223;
  t6259 = -1.*t187*t843*t787;
  t6268 = -1.*t3012*t6174;
  t6272 = t6259 + t6268;
  t6549 = t1027*t297*t762*t403;
  t6586 = -1.*t297*t560*t403*t853;
  t6604 = t6549 + t6586;
  t6623 = -1.*t3012*t403*t787;
  t6639 = t187*t6604;
  t6679 = t6623 + t6639;
  t6705 = -1.*t187*t403*t787;
  t6720 = -1.*t3012*t6604;
  t6747 = t6705 + t6720;
  t6953 = -1.*t1027*t762*t787;
  t6985 = t560*t787*t853;
  t6992 = t6953 + t6985;
  t7019 = -1.*t297*t3012;
  t7035 = t187*t6992;
  t7056 = t7019 + t7035;
  t7102 = -1.*t187*t297;
  t7116 = -1.*t3012*t6992;
  t7135 = t7102 + t7116;
  t7293 = t762*t403;
  t7299 = -1.*t843*t787*t853;
  t7317 = t7293 + t7299;
  t7333 = -1.*t560*t5006;
  t7335 = t1027*t7317;
  t7350 = t7333 + t7335;
  t7523 = t762*t403*t787;
  t7527 = -1.*t843*t853;
  t7540 = t7523 + t7527;
  t2695 = t1027*t2506;
  t7544 = -1.*t560*t7540;
  t7581 = t7544 + t2695;
  t7834 = -1.*t297*t762*t560;
  t7841 = -1.*t1027*t297*t853;
  t7842 = t7834 + t7841;
  t8026 = -1.*t1027*t5256;
  t8027 = t7333 + t8026;
  t8214 = t843*t762;
  t8221 = t403*t787*t853;
  t8230 = t8214 + t8221;
  t8251 = -1.*t1027*t8230;
  t8264 = t7544 + t8251;
  t7653 = t1027*t7540;
  t7848 = t3056*t7842;
  t7851 = -1.*t3012*t4653*t7842;
  t7852 = t187*t4145*t7842;
  t7853 = t1027*t297*t762;
  t7855 = -1.*t297*t560*t853;
  t7866 = t7853 + t7855;
  t7871 = 0.13205*t7866;
  t7874 = -1.*t3550*t3012*t7842;
  t7895 = -1.*t187*t3898*t7842;
  t7912 = t7874 + t7895;
  t7923 = 0.183*t7912;
  t7933 = t187*t3550*t7842;
  t7934 = -1.*t3012*t3898*t7842;
  t7953 = t7933 + t7934;
  t7975 = -0.3*t7953;
  t8471 = -1.*t843*t297*t3012;
  t8481 = -1.*t187*t5486;
  t8500 = t8471 + t8481;
  t5924 = t3550*t5862;
  t8298 = -1.*t560*t8230;
  t8299 = t7653 + t8298;
  t8675 = -1.*t187*t8299;
  t8677 = t4407 + t8675;
  t8689 = t187*t297*t403;
  t8691 = -1.*t3012*t8299;
  t8693 = t8689 + t8691;
  t8753 = t3012*t787;
  t8761 = -1.*t187*t7866;
  t8766 = t8753 + t8761;
  t8778 = -1.*t187*t787;
  t8799 = -1.*t3012*t7866;
  t8805 = t8778 + t8799;
  t5919 = -1.*t3898*t5788;
  t5935 = t5919 + t5924;
  t8618 = -1.*t3898*t5862;
  t8853 = 0.183*t3550;
  t8859 = -0.15*t3898;
  t8868 = t8853 + t8859;
  t8877 = 0.15*t3550;
  t8879 = t8877 + t3937;
  t8933 = t297*t3012*t403;
  t8961 = t187*t8299;
  t8962 = t8933 + t8961;
  t8702 = t3550*t8693;
  t8718 = -1.*t3898*t8693;
  t9027 = -1.*t3012*t787;
  t9032 = t187*t7866;
  t9034 = t9027 + t9032;
  t8815 = t3550*t8805;
  t8821 = -1.*t3898*t8805;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t2154*t2506 + t3056*t3277 - 1.*t285*t297*t403 + t4145*t4499 + t4653*t4708 + 0.183*(-1.*t3898*t4499 + t3550*t4708) - 0.3*(t3550*t4499 + t3898*t4708) + t737*t920 + 0.13205*(t2695 + t560*t920);
  p_output1(10)=t2154*t5256 + t3056*t5486 + 0.13205*(t1027*t5256 + t5006*t560) + t4145*t5788 + t4653*t5862 - 0.3*(t3550*t5788 + t3898*t5862) + 0.183*t5935 + t5006*t737 + t285*t297*t843;
  p_output1(11)=0;
  p_output1(12)=t3056*t6174 + t4145*t6239 + t4653*t6272 + 0.183*(-1.*t3898*t6239 + t3550*t6272) - 0.3*(t3550*t6239 + t3898*t6272) + t297*t737*t762*t843 - 1.*t285*t787*t843 + t2154*t297*t843*t853 + 0.13205*(t297*t560*t762*t843 + t1027*t297*t843*t853);
  p_output1(13)=t3056*t6604 + t4145*t6679 + t4653*t6747 + 0.183*(-1.*t3898*t6679 + t3550*t6747) - 0.3*(t3550*t6679 + t3898*t6747) + t297*t403*t737*t762 - 1.*t285*t403*t787 + t2154*t297*t403*t853 + 0.13205*(t297*t403*t560*t762 + t1027*t297*t403*t853);
  p_output1(14)=-1.*t285*t297 + t3056*t6992 + t4145*t7056 + t4653*t7135 + 0.183*(-1.*t3898*t7056 + t3550*t7135) - 0.3*(t3550*t7056 + t3898*t7135) - 1.*t737*t762*t787 - 1.*t2154*t787*t853 + 0.13205*(-1.*t560*t762*t787 - 1.*t1027*t787*t853);
  p_output1(15)=t2154*t5006 + 0.13205*(t5409 + t560*t7317) + t3056*t7350 + t187*t4145*t7350 - 1.*t3012*t4653*t7350 + 0.183*(-1.*t3012*t3550*t7350 - 1.*t187*t3898*t7350) - 0.3*(t187*t3550*t7350 - 1.*t3012*t3898*t7350) + t7317*t737;
  p_output1(16)=t2506*t737 + t2154*t7540 + t3056*t7581 + t187*t4145*t7581 - 1.*t3012*t4653*t7581 + 0.183*(-1.*t3012*t3550*t7581 - 1.*t187*t3898*t7581) - 0.3*(t187*t3550*t7581 - 1.*t3012*t3898*t7581) + 0.13205*(t2506*t560 + t7653);
  p_output1(17)=t2154*t297*t762 + t7848 + t7851 + t7852 + t7871 + t7923 + t7975 - 1.*t297*t737*t853;
  p_output1(18)=0;
  p_output1(19)=0;
  p_output1(20)=0;
  p_output1(21)=0;
  p_output1(22)=0;
  p_output1(23)=0;
  p_output1(24)=0;
  p_output1(25)=0;
  p_output1(26)=0;
  p_output1(27)=-0.047*t1027*t5006 + 0.13205*t5486 + 0.047*t5256*t560 + t3056*t8027 + t187*t4145*t8027 - 1.*t3012*t4653*t8027 + 0.183*(-1.*t3012*t3550*t8027 - 1.*t187*t3898*t8027) - 0.3*(t187*t3550*t8027 - 1.*t3012*t3898*t8027);
  p_output1(28)=-0.047*t1027*t7540 + 0.047*t560*t8230 + t3056*t8264 + t187*t4145*t8264 - 1.*t3012*t4653*t8264 + 0.183*(-1.*t3012*t3550*t8264 - 1.*t187*t3898*t8264) - 0.3*(t187*t3550*t8264 - 1.*t3012*t3898*t8264) + 0.13205*t8299;
  p_output1(29)=-0.047*t1027*t297*t762 + t7848 + t7851 + t7852 + t7871 + t7923 + t7975 + 0.047*t297*t560*t853;
  p_output1(30)=0.183*t187*t5486 + t4145*t5862 + 0.183*t297*t3012*t843 + t4653*t8500 - 0.3*(t5924 + t3898*t8500) + 0.183*(t3550*t8500 + t8618);
  p_output1(31)=0.183*t297*t3012*t403 + 0.183*t187*t8299 + t4653*t8677 + t4145*t8693 - 0.3*(t3898*t8677 + t8702) + 0.183*(t3550*t8677 + t8718);
  p_output1(32)=0.183*t187*t7866 - 0.183*t3012*t787 + t4653*t8766 + t4145*t8805 - 0.3*(t3898*t8766 + t8815) + 0.183*(t3550*t8766 + t8821);
  p_output1(33)=-0.3*t5935 + 0.183*(-1.*t3550*t5788 + t8618) + t5788*t8868 + t5862*t8879;
  p_output1(34)=t8693*t8879 + t8868*t8962 + 0.183*(t8718 - 1.*t3550*t8962) - 0.3*(t8702 - 1.*t3898*t8962);
  p_output1(35)=t8805*t8879 + t8868*t9034 + 0.183*(t8821 - 1.*t3550*t9034) - 0.3*(t8815 - 1.*t3898*t9034);
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



