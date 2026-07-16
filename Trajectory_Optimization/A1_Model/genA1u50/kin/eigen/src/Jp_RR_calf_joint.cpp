/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:13:49 GMT-05:00
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
  double t703;
  double t1528;
  double t1460;
  double t1499;
  double t2074;
  double t981;
  double t1504;
  double t2081;
  double t2140;
  double t2354;
  double t2876;
  double t2899;
  double t2909;
  double t557;
  double t2945;
  double t171;
  double t2956;
  double t3055;
  double t3096;
  double t3172;
  double t3173;
  double t3177;
  double t3370;
  double t3643;
  double t3792;
  double t3810;
  double t4010;
  double t4054;
  double t4058;
  double t191;
  double t212;
  double t224;
  double t492;
  double t1031;
  double t1167;
  double t2439;
  double t2828;
  double t2845;
  double t2850;
  double t5072;
  double t5084;
  double t5166;
  double t5292;
  double t5329;
  double t5339;
  double t2951;
  double t2952;
  double t3249;
  double t3468;
  double t3480;
  double t6127;
  double t6144;
  double t6148;
  double t3872;
  double t3906;
  double t3937;
  double t6390;
  double t6410;
  double t6426;
  double t6435;
  double t6532;
  double t6687;
  double t8870;
  double t8876;
  double t8877;
  double t8884;
  double t8885;
  double t8897;
  double t8914;
  double t8916;
  double t8923;
  double t9051;
  double t9058;
  double t9060;
  double t9063;
  double t9064;
  double t9065;
  double t9070;
  double t9073;
  double t9075;
  double t9099;
  double t9102;
  double t9104;
  double t9110;
  double t9111;
  double t9112;
  double t9114;
  double t9115;
  double t9116;
  double t9130;
  double t9132;
  double t9134;
  double t9139;
  double t9140;
  double t9141;
  double t9160;
  double t9161;
  double t9162;
  double t2929;
  double t9165;
  double t9166;
  double t9189;
  double t9190;
  double t9191;
  double t9226;
  double t9227;
  double t9247;
  double t9248;
  double t9249;
  double t9251;
  double t9252;
  double t9170;
  double t9192;
  double t9193;
  double t9194;
  double t9195;
  double t9202;
  double t9208;
  double t9210;
  double t9212;
  double t9214;
  double t9215;
  double t9216;
  double t9219;
  double t9220;
  double t9221;
  double t9222;
  double t9277;
  double t9280;
  double t9281;
  double t7710;
  double t9256;
  double t9257;
  double t9300;
  double t9302;
  double t9304;
  double t9306;
  double t9307;
  double t9320;
  double t9321;
  double t9322;
  double t9325;
  double t9326;
  double t9327;
  double t7024;
  double t8722;
  double t9290;
  double t9340;
  double t9341;
  double t9342;
  double t9344;
  double t9345;
  double t9352;
  double t9353;
  double t9354;
  double t9310;
  double t9314;
  double t9364;
  double t9365;
  double t9366;
  double t9330;
  double t9336;
  t703 = Sin(var1[3]);
  t1528 = Cos(var1[3]);
  t1460 = Cos(var1[5]);
  t1499 = Sin(var1[4]);
  t2074 = Sin(var1[5]);
  t981 = Sin(var1[12]);
  t1504 = -1.*t1460*t703*t1499;
  t2081 = t1528*t2074;
  t2140 = t1504 + t2081;
  t2354 = Cos(var1[12]);
  t2876 = -1.*t1528*t1460;
  t2899 = -1.*t703*t1499*t2074;
  t2909 = t2876 + t2899;
  t557 = Cos(var1[4]);
  t2945 = Sin(var1[13]);
  t171 = Cos(var1[13]);
  t2956 = t2354*t2140;
  t3055 = -1.*t981*t2909;
  t3096 = t2956 + t3055;
  t3172 = Cos(var1[14]);
  t3173 = -1.*t3172;
  t3177 = 1. + t3173;
  t3370 = Sin(var1[14]);
  t3643 = -1.*t557*t2945*t703;
  t3792 = t171*t3096;
  t3810 = t3643 + t3792;
  t4010 = -1.*t171*t557*t703;
  t4054 = -1.*t2945*t3096;
  t4058 = t4010 + t4054;
  t191 = -1.*t171;
  t212 = 1. + t191;
  t224 = -0.183*t212;
  t492 = 0. + t224;
  t1031 = 0.047*t981;
  t1167 = 0. + t1031;
  t2439 = -1.*t2354;
  t2828 = 1. + t2439;
  t2845 = -0.047*t2828;
  t2850 = 0. + t2845;
  t5072 = t1528*t1460*t1499;
  t5084 = t703*t2074;
  t5166 = t5072 + t5084;
  t5292 = -1.*t1460*t703;
  t5329 = t1528*t1499*t2074;
  t5339 = t5292 + t5329;
  t2951 = -0.183*t2945;
  t2952 = 0. + t2951;
  t3249 = -0.1*t3177;
  t3468 = -0.183*t3370;
  t3480 = 0. + t3249 + t3468;
  t6127 = t2354*t5166;
  t6144 = -1.*t981*t5339;
  t6148 = t6127 + t6144;
  t3872 = -0.183*t3177;
  t3906 = 0.1*t3370;
  t3937 = 0. + t3872 + t3906;
  t6390 = t1528*t557*t2945;
  t6410 = t171*t6148;
  t6426 = t6390 + t6410;
  t6435 = t171*t1528*t557;
  t6532 = -1.*t2945*t6148;
  t6687 = t6435 + t6532;
  t8870 = t2354*t1528*t557*t1460;
  t8876 = -1.*t1528*t557*t981*t2074;
  t8877 = t8870 + t8876;
  t8884 = -1.*t1528*t2945*t1499;
  t8885 = t171*t8877;
  t8897 = t8884 + t8885;
  t8914 = -1.*t171*t1528*t1499;
  t8916 = -1.*t2945*t8877;
  t8923 = t8914 + t8916;
  t9051 = t2354*t557*t1460*t703;
  t9058 = -1.*t557*t981*t703*t2074;
  t9060 = t9051 + t9058;
  t9063 = -1.*t2945*t703*t1499;
  t9064 = t171*t9060;
  t9065 = t9063 + t9064;
  t9070 = -1.*t171*t703*t1499;
  t9073 = -1.*t2945*t9060;
  t9075 = t9070 + t9073;
  t9099 = -1.*t2354*t1460*t1499;
  t9102 = t981*t1499*t2074;
  t9104 = t9099 + t9102;
  t9110 = -1.*t557*t2945;
  t9111 = t171*t9104;
  t9112 = t9110 + t9111;
  t9114 = -1.*t171*t557;
  t9115 = -1.*t2945*t9104;
  t9116 = t9114 + t9115;
  t9130 = t1460*t703;
  t9132 = -1.*t1528*t1499*t2074;
  t9134 = t9130 + t9132;
  t9139 = -1.*t981*t5166;
  t9140 = t2354*t9134;
  t9141 = t9139 + t9140;
  t9160 = t1460*t703*t1499;
  t9161 = -1.*t1528*t2074;
  t9162 = t9160 + t9161;
  t2929 = t2354*t2909;
  t9165 = -1.*t981*t9162;
  t9166 = t9165 + t2929;
  t9189 = -1.*t557*t1460*t981;
  t9190 = -1.*t2354*t557*t2074;
  t9191 = t9189 + t9190;
  t9226 = -1.*t2354*t5339;
  t9227 = t9139 + t9226;
  t9247 = t1528*t1460;
  t9248 = t703*t1499*t2074;
  t9249 = t9247 + t9248;
  t9251 = -1.*t2354*t9249;
  t9252 = t9165 + t9251;
  t9170 = t2354*t9162;
  t9192 = t2952*t9191;
  t9193 = t171*t3480*t9191;
  t9194 = -1.*t2945*t3937*t9191;
  t9195 = t2354*t557*t1460;
  t9202 = -1.*t557*t981*t2074;
  t9208 = t9195 + t9202;
  t9210 = -0.08953*t9208;
  t9212 = -1.*t3172*t2945*t9191;
  t9214 = -1.*t171*t3370*t9191;
  t9215 = t9212 + t9214;
  t9216 = -0.183*t9215;
  t9219 = t171*t3172*t9191;
  t9220 = -1.*t2945*t3370*t9191;
  t9221 = t9219 + t9220;
  t9222 = -0.1*t9221;
  t9277 = -1.*t1528*t557*t2945;
  t9280 = -1.*t171*t6148;
  t9281 = t9277 + t9280;
  t7710 = t3172*t6687;
  t9256 = -1.*t981*t9249;
  t9257 = t9170 + t9256;
  t9300 = -1.*t171*t9257;
  t9302 = t3643 + t9300;
  t9304 = t171*t557*t703;
  t9306 = -1.*t2945*t9257;
  t9307 = t9304 + t9306;
  t9320 = t2945*t1499;
  t9321 = -1.*t171*t9208;
  t9322 = t9320 + t9321;
  t9325 = -1.*t171*t1499;
  t9326 = -1.*t2945*t9208;
  t9327 = t9325 + t9326;
  t7024 = -1.*t3370*t6426;
  t8722 = t7024 + t7710;
  t9290 = -1.*t3370*t6687;
  t9340 = -0.183*t3172;
  t9341 = -0.1*t3370;
  t9342 = t9340 + t9341;
  t9344 = 0.1*t3172;
  t9345 = t9344 + t3468;
  t9352 = t557*t2945*t703;
  t9353 = t171*t9257;
  t9354 = t9352 + t9353;
  t9310 = t3172*t9307;
  t9314 = -1.*t3370*t9307;
  t9364 = -1.*t2945*t1499;
  t9365 = t171*t9208;
  t9366 = t9364 + t9365;
  t9330 = t3172*t9327;
  t9336 = -1.*t3370*t9327;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t1167*t2140 + t2850*t2909 + t2952*t3096 + t3480*t3810 + t3937*t4058 - 0.183*(-1.*t3370*t3810 + t3172*t4058) - 0.1*(t3172*t3810 + t3370*t4058) - 1.*t492*t557*t703 - 0.08953*(t2929 + t2140*t981);
  p_output1(10)=t1167*t5166 + t2850*t5339 + t1528*t492*t557 + t2952*t6148 + t3480*t6426 + t3937*t6687 - 0.1*(t3172*t6426 + t3370*t6687) - 0.183*t8722 - 0.08953*(t2354*t5339 + t5166*t981);
  p_output1(11)=0;
  p_output1(12)=-1.*t1499*t1528*t492 + t1167*t1460*t1528*t557 + t1528*t2074*t2850*t557 + t2952*t8877 + t3480*t8897 + t3937*t8923 - 0.183*(-1.*t3370*t8897 + t3172*t8923) - 0.1*(t3172*t8897 + t3370*t8923) - 0.08953*(t1528*t2074*t2354*t557 + t1460*t1528*t557*t981);
  p_output1(13)=-1.*t1499*t492*t703 + t1167*t1460*t557*t703 + t2074*t2850*t557*t703 + t2952*t9060 + t3480*t9065 + t3937*t9075 - 0.183*(-1.*t3370*t9065 + t3172*t9075) - 0.1*(t3172*t9065 + t3370*t9075) - 0.08953*(t2074*t2354*t557*t703 + t1460*t557*t703*t981);
  p_output1(14)=-1.*t1167*t1460*t1499 - 1.*t1499*t2074*t2850 - 1.*t492*t557 + t2952*t9104 + t3480*t9112 + t3937*t9116 - 0.183*(-1.*t3370*t9112 + t3172*t9116) - 0.1*(t3172*t9112 + t3370*t9116) - 0.08953*(-1.*t1499*t2074*t2354 - 1.*t1460*t1499*t981);
  p_output1(15)=t2850*t5166 + t1167*t9134 + t2952*t9141 + t171*t3480*t9141 - 1.*t2945*t3937*t9141 - 0.183*(-1.*t2945*t3172*t9141 - 1.*t171*t3370*t9141) - 0.1*(t171*t3172*t9141 - 1.*t2945*t3370*t9141) - 0.08953*(t6127 + t9134*t981);
  p_output1(16)=t1167*t2909 + t2850*t9162 + t2952*t9166 + t171*t3480*t9166 - 1.*t2945*t3937*t9166 - 0.183*(-1.*t2945*t3172*t9166 - 1.*t171*t3370*t9166) - 0.1*(t171*t3172*t9166 - 1.*t2945*t3370*t9166) - 0.08953*(t9170 + t2909*t981);
  p_output1(17)=-1.*t1167*t2074*t557 + t1460*t2850*t557 + t9192 + t9193 + t9194 + t9210 + t9216 + t9222;
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
  p_output1(36)=0.047*t2354*t5166 - 0.08953*t6148 + t2952*t9227 + t171*t3480*t9227 - 1.*t2945*t3937*t9227 - 0.183*(-1.*t2945*t3172*t9227 - 1.*t171*t3370*t9227) - 0.1*(t171*t3172*t9227 - 1.*t2945*t3370*t9227) - 0.047*t5339*t981;
  p_output1(37)=0.047*t2354*t9162 + t2952*t9252 + t171*t3480*t9252 - 1.*t2945*t3937*t9252 - 0.183*(-1.*t2945*t3172*t9252 - 1.*t171*t3370*t9252) - 0.1*(t171*t3172*t9252 - 1.*t2945*t3370*t9252) - 0.08953*t9257 - 0.047*t9249*t981;
  p_output1(38)=0.047*t1460*t2354*t557 + t9192 + t9193 + t9194 + t9210 + t9216 + t9222 - 0.047*t2074*t557*t981;
  p_output1(39)=-0.183*t1528*t2945*t557 - 0.183*t171*t6148 + t3480*t6687 + t3937*t9281 - 0.1*(t7710 + t3370*t9281) - 0.183*(t3172*t9281 + t9290);
  p_output1(40)=-0.183*t2945*t557*t703 - 0.183*t171*t9257 + t3937*t9302 + t3480*t9307 - 0.1*(t3370*t9302 + t9310) - 0.183*(t3172*t9302 + t9314);
  p_output1(41)=0.183*t1499*t2945 - 0.183*t171*t9208 + t3937*t9322 + t3480*t9327 - 0.1*(t3370*t9322 + t9330) - 0.183*(t3172*t9322 + t9336);
  p_output1(42)=-0.1*t8722 - 0.183*(-1.*t3172*t6426 + t9290) + t6426*t9342 + t6687*t9345;
  p_output1(43)=t9307*t9345 + t9342*t9354 - 0.183*(t9314 - 1.*t3172*t9354) - 0.1*(t9310 - 1.*t3370*t9354);
  p_output1(44)=t9327*t9345 + t9342*t9366 - 0.183*(t9336 - 1.*t3172*t9366) - 0.1*(t9330 - 1.*t3370*t9366);
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



