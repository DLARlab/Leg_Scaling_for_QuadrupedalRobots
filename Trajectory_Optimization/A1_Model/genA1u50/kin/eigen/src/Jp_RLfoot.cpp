/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:14:05 GMT-05:00
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
  double t820;
  double t1532;
  double t1213;
  double t1448;
  double t1548;
  double t1004;
  double t1490;
  double t1581;
  double t2239;
  double t2347;
  double t3050;
  double t3202;
  double t3295;
  double t777;
  double t3775;
  double t92;
  double t3951;
  double t4040;
  double t4049;
  double t4101;
  double t4133;
  double t4284;
  double t4334;
  double t4682;
  double t4782;
  double t4823;
  double t5027;
  double t5049;
  double t5068;
  double t139;
  double t211;
  double t323;
  double t534;
  double t1069;
  double t1174;
  double t2438;
  double t2854;
  double t2900;
  double t2901;
  double t5159;
  double t5162;
  double t5164;
  double t5186;
  double t5189;
  double t5190;
  double t3811;
  double t3950;
  double t4327;
  double t4525;
  double t4640;
  double t5202;
  double t5206;
  double t5207;
  double t4950;
  double t5018;
  double t5019;
  double t5209;
  double t5210;
  double t5212;
  double t5217;
  double t5218;
  double t5226;
  double t5747;
  double t5777;
  double t5881;
  double t5913;
  double t6046;
  double t6049;
  double t6067;
  double t6075;
  double t6080;
  double t6282;
  double t6301;
  double t6302;
  double t6316;
  double t6321;
  double t6361;
  double t6409;
  double t6414;
  double t6425;
  double t7002;
  double t7029;
  double t7042;
  double t7115;
  double t7128;
  double t7149;
  double t7165;
  double t7168;
  double t7176;
  double t7434;
  double t7435;
  double t7477;
  double t7520;
  double t7574;
  double t7612;
  double t8109;
  double t8113;
  double t8224;
  double t3445;
  double t8424;
  double t8445;
  double t9363;
  double t9371;
  double t9375;
  double t9576;
  double t9577;
  double t9678;
  double t9681;
  double t9682;
  double t9686;
  double t9693;
  double t8953;
  double t9378;
  double t9385;
  double t9396;
  double t9426;
  double t9431;
  double t9436;
  double t9444;
  double t9454;
  double t9479;
  double t9551;
  double t9552;
  double t9553;
  double t9556;
  double t9557;
  double t9558;
  double t9763;
  double t9776;
  double t9779;
  double t5240;
  double t9720;
  double t9721;
  double t9797;
  double t9798;
  double t9801;
  double t9802;
  double t9803;
  double t9823;
  double t9824;
  double t9825;
  double t9827;
  double t9828;
  double t9829;
  double t5228;
  double t5249;
  double t9791;
  double t9843;
  double t9844;
  double t9845;
  double t9848;
  double t9849;
  double t9860;
  double t9861;
  double t9862;
  double t9807;
  double t9817;
  double t9877;
  double t9879;
  double t9880;
  double t9834;
  double t9838;
  t820 = Sin(var1[3]);
  t1532 = Cos(var1[3]);
  t1213 = Cos(var1[5]);
  t1448 = Sin(var1[4]);
  t1548 = Sin(var1[5]);
  t1004 = Sin(var1[15]);
  t1490 = -1.*t1213*t820*t1448;
  t1581 = t1532*t1548;
  t2239 = t1490 + t1581;
  t2347 = Cos(var1[15]);
  t3050 = -1.*t1532*t1213;
  t3202 = -1.*t820*t1448*t1548;
  t3295 = t3050 + t3202;
  t777 = Cos(var1[4]);
  t3775 = Sin(var1[16]);
  t92 = Cos(var1[16]);
  t3951 = t2347*t2239;
  t4040 = -1.*t1004*t3295;
  t4049 = t3951 + t4040;
  t4101 = Cos(var1[17]);
  t4133 = -1.*t4101;
  t4284 = 1. + t4133;
  t4334 = Sin(var1[17]);
  t4682 = -1.*t777*t3775*t820;
  t4782 = t92*t4049;
  t4823 = t4682 + t4782;
  t5027 = -1.*t92*t777*t820;
  t5049 = -1.*t3775*t4049;
  t5068 = t5027 + t5049;
  t139 = -1.*t92;
  t211 = 1. + t139;
  t323 = -0.183*t211;
  t534 = 0. + t323;
  t1069 = -0.047*t1004;
  t1174 = 0. + t1069;
  t2438 = -1.*t2347;
  t2854 = 1. + t2438;
  t2900 = 0.047*t2854;
  t2901 = 0. + t2900;
  t5159 = t1532*t1213*t1448;
  t5162 = t820*t1548;
  t5164 = t5159 + t5162;
  t5186 = -1.*t1213*t820;
  t5189 = t1532*t1448*t1548;
  t5190 = t5186 + t5189;
  t3811 = -0.183*t3775;
  t3950 = 0. + t3811;
  t4327 = -0.1*t4284;
  t4525 = -0.183*t4334;
  t4640 = 0. + t4327 + t4525;
  t5202 = t2347*t5164;
  t5206 = -1.*t1004*t5190;
  t5207 = t5202 + t5206;
  t4950 = -0.183*t4284;
  t5018 = 0.1*t4334;
  t5019 = 0. + t4950 + t5018;
  t5209 = t1532*t777*t3775;
  t5210 = t92*t5207;
  t5212 = t5209 + t5210;
  t5217 = t92*t1532*t777;
  t5218 = -1.*t3775*t5207;
  t5226 = t5217 + t5218;
  t5747 = t2347*t1532*t777*t1213;
  t5777 = -1.*t1532*t777*t1004*t1548;
  t5881 = t5747 + t5777;
  t5913 = -1.*t1532*t3775*t1448;
  t6046 = t92*t5881;
  t6049 = t5913 + t6046;
  t6067 = -1.*t92*t1532*t1448;
  t6075 = -1.*t3775*t5881;
  t6080 = t6067 + t6075;
  t6282 = t2347*t777*t1213*t820;
  t6301 = -1.*t777*t1004*t820*t1548;
  t6302 = t6282 + t6301;
  t6316 = -1.*t3775*t820*t1448;
  t6321 = t92*t6302;
  t6361 = t6316 + t6321;
  t6409 = -1.*t92*t820*t1448;
  t6414 = -1.*t3775*t6302;
  t6425 = t6409 + t6414;
  t7002 = -1.*t2347*t1213*t1448;
  t7029 = t1004*t1448*t1548;
  t7042 = t7002 + t7029;
  t7115 = -1.*t777*t3775;
  t7128 = t92*t7042;
  t7149 = t7115 + t7128;
  t7165 = -1.*t92*t777;
  t7168 = -1.*t3775*t7042;
  t7176 = t7165 + t7168;
  t7434 = t1213*t820;
  t7435 = -1.*t1532*t1448*t1548;
  t7477 = t7434 + t7435;
  t7520 = -1.*t1004*t5164;
  t7574 = t2347*t7477;
  t7612 = t7520 + t7574;
  t8109 = t1213*t820*t1448;
  t8113 = -1.*t1532*t1548;
  t8224 = t8109 + t8113;
  t3445 = t2347*t3295;
  t8424 = -1.*t1004*t8224;
  t8445 = t8424 + t3445;
  t9363 = -1.*t777*t1213*t1004;
  t9371 = -1.*t2347*t777*t1548;
  t9375 = t9363 + t9371;
  t9576 = -1.*t2347*t5190;
  t9577 = t7520 + t9576;
  t9678 = t1532*t1213;
  t9681 = t820*t1448*t1548;
  t9682 = t9678 + t9681;
  t9686 = -1.*t2347*t9682;
  t9693 = t8424 + t9686;
  t8953 = t2347*t8224;
  t9378 = t3950*t9375;
  t9385 = t92*t4640*t9375;
  t9396 = -1.*t3775*t5019*t9375;
  t9426 = t2347*t777*t1213;
  t9431 = -1.*t777*t1004*t1548;
  t9436 = t9426 + t9431;
  t9444 = 0.08953*t9436;
  t9454 = -1.*t4101*t3775*t9375;
  t9479 = -1.*t92*t4334*t9375;
  t9551 = t9454 + t9479;
  t9552 = -0.183*t9551;
  t9553 = t92*t4101*t9375;
  t9556 = -1.*t3775*t4334*t9375;
  t9557 = t9553 + t9556;
  t9558 = -0.2*t9557;
  t9763 = -1.*t1532*t777*t3775;
  t9776 = -1.*t92*t5207;
  t9779 = t9763 + t9776;
  t5240 = t4101*t5226;
  t9720 = -1.*t1004*t9682;
  t9721 = t8953 + t9720;
  t9797 = -1.*t92*t9721;
  t9798 = t4682 + t9797;
  t9801 = t92*t777*t820;
  t9802 = -1.*t3775*t9721;
  t9803 = t9801 + t9802;
  t9823 = t3775*t1448;
  t9824 = -1.*t92*t9436;
  t9825 = t9823 + t9824;
  t9827 = -1.*t92*t1448;
  t9828 = -1.*t3775*t9436;
  t9829 = t9827 + t9828;
  t5228 = -1.*t4334*t5212;
  t5249 = t5228 + t5240;
  t9791 = -1.*t4334*t5226;
  t9843 = -0.183*t4101;
  t9844 = -0.1*t4334;
  t9845 = t9843 + t9844;
  t9848 = 0.1*t4101;
  t9849 = t9848 + t4525;
  t9860 = t777*t3775*t820;
  t9861 = t92*t9721;
  t9862 = t9860 + t9861;
  t9807 = t4101*t9803;
  t9817 = -1.*t4334*t9803;
  t9877 = -1.*t3775*t1448;
  t9879 = t92*t9436;
  t9880 = t9877 + t9879;
  t9834 = t4101*t9829;
  t9838 = -1.*t4334*t9829;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t1174*t2239 + t2901*t3295 + 0.08953*(t1004*t2239 + t3445) + t3950*t4049 + t4640*t4823 + t5019*t5068 - 0.183*(-1.*t4334*t4823 + t4101*t5068) - 0.2*(t4101*t4823 + t4334*t5068) - 1.*t534*t777*t820;
  p_output1(10)=t1174*t5164 + t2901*t5190 + 0.08953*(t1004*t5164 + t2347*t5190) + t3950*t5207 + t4640*t5212 + t5019*t5226 - 0.2*(t4101*t5212 + t4334*t5226) - 0.183*t5249 + t1532*t534*t777;
  p_output1(11)=0;
  p_output1(12)=-1.*t1448*t1532*t534 + t3950*t5881 + t4640*t6049 + t5019*t6080 - 0.183*(-1.*t4334*t6049 + t4101*t6080) - 0.2*(t4101*t6049 + t4334*t6080) + t1174*t1213*t1532*t777 + t1532*t1548*t2901*t777 + 0.08953*(t1004*t1213*t1532*t777 + t1532*t1548*t2347*t777);
  p_output1(13)=t3950*t6302 + t4640*t6361 + t5019*t6425 - 0.183*(-1.*t4334*t6361 + t4101*t6425) - 0.2*(t4101*t6361 + t4334*t6425) - 1.*t1448*t534*t820 + t1174*t1213*t777*t820 + t1548*t2901*t777*t820 + 0.08953*(t1004*t1213*t777*t820 + t1548*t2347*t777*t820);
  p_output1(14)=-1.*t1174*t1213*t1448 + 0.08953*(-1.*t1004*t1213*t1448 - 1.*t1448*t1548*t2347) - 1.*t1448*t1548*t2901 + t3950*t7042 + t4640*t7149 + t5019*t7176 - 0.183*(-1.*t4334*t7149 + t4101*t7176) - 0.2*(t4101*t7149 + t4334*t7176) - 1.*t534*t777;
  p_output1(15)=t2901*t5164 + t1174*t7477 + 0.08953*(t5202 + t1004*t7477) + t3950*t7612 - 1.*t3775*t5019*t7612 + t4640*t7612*t92 - 0.2*(-1.*t3775*t4334*t7612 + t4101*t7612*t92) - 0.183*(-1.*t3775*t4101*t7612 - 1.*t4334*t7612*t92);
  p_output1(16)=t1174*t3295 + t2901*t8224 + t3950*t8445 - 1.*t3775*t5019*t8445 + 0.08953*(t1004*t3295 + t8953) + t4640*t8445*t92 - 0.2*(-1.*t3775*t4334*t8445 + t4101*t8445*t92) - 0.183*(-1.*t3775*t4101*t8445 - 1.*t4334*t8445*t92);
  p_output1(17)=-1.*t1174*t1548*t777 + t1213*t2901*t777 + t9378 + t9385 + t9396 + t9444 + t9552 + t9558;
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
  p_output1(45)=-0.047*t2347*t5164 + 0.047*t1004*t5190 + 0.08953*t5207 + t3950*t9577 - 1.*t3775*t5019*t9577 + t4640*t92*t9577 - 0.2*(-1.*t3775*t4334*t9577 + t4101*t92*t9577) - 0.183*(-1.*t3775*t4101*t9577 - 1.*t4334*t92*t9577);
  p_output1(46)=-0.047*t2347*t8224 + 0.047*t1004*t9682 + t3950*t9693 - 1.*t3775*t5019*t9693 + t4640*t92*t9693 - 0.2*(-1.*t3775*t4334*t9693 + t4101*t92*t9693) - 0.183*(-1.*t3775*t4101*t9693 - 1.*t4334*t92*t9693) + 0.08953*t9721;
  p_output1(47)=0.047*t1004*t1548*t777 - 0.047*t1213*t2347*t777 + t9378 + t9385 + t9396 + t9444 + t9552 + t9558;
  p_output1(48)=t4640*t5226 - 0.183*t1532*t3775*t777 - 0.183*t5207*t92 + t5019*t9779 - 0.2*(t5240 + t4334*t9779) - 0.183*(t4101*t9779 + t9791);
  p_output1(49)=-0.183*t3775*t777*t820 - 0.183*t92*t9721 + t5019*t9798 + t4640*t9803 - 0.2*(t4334*t9798 + t9807) - 0.183*(t4101*t9798 + t9817);
  p_output1(50)=0.183*t1448*t3775 - 0.183*t92*t9436 + t5019*t9825 + t4640*t9829 - 0.2*(t4334*t9825 + t9834) - 0.183*(t4101*t9825 + t9838);
  p_output1(51)=-0.2*t5249 - 0.183*(-1.*t4101*t5212 + t9791) + t5212*t9845 + t5226*t9849;
  p_output1(52)=t9803*t9849 + t9845*t9862 - 0.183*(t9817 - 1.*t4101*t9862) - 0.2*(t9807 - 1.*t4334*t9862);
  p_output1(53)=t9829*t9849 + t9845*t9880 - 0.183*(t9838 - 1.*t4101*t9880) - 0.2*(t9834 - 1.*t4334*t9880);
}


       
Eigen::Matrix<double,3,18> Jp_RLfoot(const Eigen::Matrix<double,18,1> &var1)
//void Jp_RLfoot(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



