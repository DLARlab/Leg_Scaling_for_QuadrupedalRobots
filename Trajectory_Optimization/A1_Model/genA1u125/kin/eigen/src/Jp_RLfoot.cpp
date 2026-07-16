/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:21:46 GMT-05:00
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
  double t808;
  double t1436;
  double t1198;
  double t1234;
  double t1592;
  double t951;
  double t1367;
  double t1739;
  double t1848;
  double t2036;
  double t2654;
  double t2661;
  double t3067;
  double t440;
  double t4172;
  double t90;
  double t4237;
  double t4260;
  double t4320;
  double t4914;
  double t4971;
  double t5002;
  double t5145;
  double t5262;
  double t5290;
  double t5409;
  double t5734;
  double t5846;
  double t5949;
  double t138;
  double t201;
  double t204;
  double t343;
  double t985;
  double t1046;
  double t2044;
  double t2086;
  double t2412;
  double t2427;
  double t6627;
  double t6685;
  double t6696;
  double t6755;
  double t6756;
  double t6790;
  double t4173;
  double t4230;
  double t5010;
  double t5245;
  double t5257;
  double t7065;
  double t7088;
  double t7119;
  double t5491;
  double t5503;
  double t5615;
  double t7183;
  double t7209;
  double t7294;
  double t7345;
  double t7346;
  double t7351;
  double t7607;
  double t7654;
  double t7710;
  double t7745;
  double t7756;
  double t7773;
  double t7803;
  double t7842;
  double t7869;
  double t8150;
  double t8152;
  double t8155;
  double t8181;
  double t8182;
  double t8188;
  double t8297;
  double t8304;
  double t8352;
  double t8571;
  double t8578;
  double t8595;
  double t8649;
  double t8655;
  double t8660;
  double t8675;
  double t8676;
  double t8678;
  double t8776;
  double t8779;
  double t8784;
  double t8869;
  double t8890;
  double t8892;
  double t9131;
  double t9143;
  double t9159;
  double t3729;
  double t9205;
  double t9206;
  double t9399;
  double t9402;
  double t9404;
  double t9610;
  double t9623;
  double t9870;
  double t9872;
  double t9874;
  double t9878;
  double t9881;
  double t9243;
  double t9405;
  double t9413;
  double t9415;
  double t9417;
  double t9438;
  double t9447;
  double t9448;
  double t9449;
  double t9468;
  double t9469;
  double t9490;
  double t9492;
  double t9494;
  double t9499;
  double t9507;
  double t9936;
  double t9939;
  double t9940;
  double t7368;
  double t9906;
  double t9909;
  double t9964;
  double t9968;
  double t9971;
  double t9972;
  double t9973;
  double t9993;
  double t9997;
  double t9998;
  double t10000;
  double t10001;
  double t10002;
  double t7365;
  double t7406;
  double t9952;
  double t10016;
  double t10018;
  double t10019;
  double t10021;
  double t10022;
  double t10031;
  double t10033;
  double t10034;
  double t9977;
  double t9982;
  double t10044;
  double t10045;
  double t10046;
  double t10006;
  double t10011;
  t808 = Sin(var1[3]);
  t1436 = Cos(var1[3]);
  t1198 = Cos(var1[5]);
  t1234 = Sin(var1[4]);
  t1592 = Sin(var1[5]);
  t951 = Sin(var1[15]);
  t1367 = -1.*t1198*t808*t1234;
  t1739 = t1436*t1592;
  t1848 = t1367 + t1739;
  t2036 = Cos(var1[15]);
  t2654 = -1.*t1436*t1198;
  t2661 = -1.*t808*t1234*t1592;
  t3067 = t2654 + t2661;
  t440 = Cos(var1[4]);
  t4172 = Sin(var1[16]);
  t90 = Cos(var1[16]);
  t4237 = t2036*t1848;
  t4260 = -1.*t951*t3067;
  t4320 = t4237 + t4260;
  t4914 = Cos(var1[17]);
  t4971 = -1.*t4914;
  t5002 = 1. + t4971;
  t5145 = Sin(var1[17]);
  t5262 = -1.*t440*t4172*t808;
  t5290 = t90*t4320;
  t5409 = t5262 + t5290;
  t5734 = -1.*t90*t440*t808;
  t5846 = -1.*t4172*t4320;
  t5949 = t5734 + t5846;
  t138 = -1.*t90;
  t201 = 1. + t138;
  t204 = -0.183*t201;
  t343 = 0. + t204;
  t985 = -0.047*t951;
  t1046 = 0. + t985;
  t2044 = -1.*t2036;
  t2086 = 1. + t2044;
  t2412 = 0.047*t2086;
  t2427 = 0. + t2412;
  t6627 = t1436*t1198*t1234;
  t6685 = t808*t1592;
  t6696 = t6627 + t6685;
  t6755 = -1.*t1198*t808;
  t6756 = t1436*t1234*t1592;
  t6790 = t6755 + t6756;
  t4173 = -0.183*t4172;
  t4230 = 0. + t4173;
  t5010 = -0.25*t5002;
  t5245 = -0.183*t5145;
  t5257 = 0. + t5010 + t5245;
  t7065 = t2036*t6696;
  t7088 = -1.*t951*t6790;
  t7119 = t7065 + t7088;
  t5491 = -0.183*t5002;
  t5503 = 0.25*t5145;
  t5615 = 0. + t5491 + t5503;
  t7183 = t1436*t440*t4172;
  t7209 = t90*t7119;
  t7294 = t7183 + t7209;
  t7345 = t90*t1436*t440;
  t7346 = -1.*t4172*t7119;
  t7351 = t7345 + t7346;
  t7607 = t2036*t1436*t440*t1198;
  t7654 = -1.*t1436*t440*t951*t1592;
  t7710 = t7607 + t7654;
  t7745 = -1.*t1436*t4172*t1234;
  t7756 = t90*t7710;
  t7773 = t7745 + t7756;
  t7803 = -1.*t90*t1436*t1234;
  t7842 = -1.*t4172*t7710;
  t7869 = t7803 + t7842;
  t8150 = t2036*t440*t1198*t808;
  t8152 = -1.*t440*t951*t808*t1592;
  t8155 = t8150 + t8152;
  t8181 = -1.*t4172*t808*t1234;
  t8182 = t90*t8155;
  t8188 = t8181 + t8182;
  t8297 = -1.*t90*t808*t1234;
  t8304 = -1.*t4172*t8155;
  t8352 = t8297 + t8304;
  t8571 = -1.*t2036*t1198*t1234;
  t8578 = t951*t1234*t1592;
  t8595 = t8571 + t8578;
  t8649 = -1.*t440*t4172;
  t8655 = t90*t8595;
  t8660 = t8649 + t8655;
  t8675 = -1.*t90*t440;
  t8676 = -1.*t4172*t8595;
  t8678 = t8675 + t8676;
  t8776 = t1198*t808;
  t8779 = -1.*t1436*t1234*t1592;
  t8784 = t8776 + t8779;
  t8869 = -1.*t951*t6696;
  t8890 = t2036*t8784;
  t8892 = t8869 + t8890;
  t9131 = t1198*t808*t1234;
  t9143 = -1.*t1436*t1592;
  t9159 = t9131 + t9143;
  t3729 = t2036*t3067;
  t9205 = -1.*t951*t9159;
  t9206 = t9205 + t3729;
  t9399 = -1.*t440*t1198*t951;
  t9402 = -1.*t2036*t440*t1592;
  t9404 = t9399 + t9402;
  t9610 = -1.*t2036*t6790;
  t9623 = t8869 + t9610;
  t9870 = t1436*t1198;
  t9872 = t808*t1234*t1592;
  t9874 = t9870 + t9872;
  t9878 = -1.*t2036*t9874;
  t9881 = t9205 + t9878;
  t9243 = t2036*t9159;
  t9405 = t4230*t9404;
  t9413 = t90*t5257*t9404;
  t9415 = -1.*t4172*t5615*t9404;
  t9417 = t2036*t440*t1198;
  t9438 = -1.*t440*t951*t1592;
  t9447 = t9417 + t9438;
  t9448 = 0.15331*t9447;
  t9449 = -1.*t4914*t4172*t9404;
  t9468 = -1.*t90*t5145*t9404;
  t9469 = t9449 + t9468;
  t9490 = -0.183*t9469;
  t9492 = t90*t4914*t9404;
  t9494 = -1.*t4172*t5145*t9404;
  t9499 = t9492 + t9494;
  t9507 = -0.5*t9499;
  t9936 = -1.*t1436*t440*t4172;
  t9939 = -1.*t90*t7119;
  t9940 = t9936 + t9939;
  t7368 = t4914*t7351;
  t9906 = -1.*t951*t9874;
  t9909 = t9243 + t9906;
  t9964 = -1.*t90*t9909;
  t9968 = t5262 + t9964;
  t9971 = t90*t440*t808;
  t9972 = -1.*t4172*t9909;
  t9973 = t9971 + t9972;
  t9993 = t4172*t1234;
  t9997 = -1.*t90*t9447;
  t9998 = t9993 + t9997;
  t10000 = -1.*t90*t1234;
  t10001 = -1.*t4172*t9447;
  t10002 = t10000 + t10001;
  t7365 = -1.*t5145*t7294;
  t7406 = t7365 + t7368;
  t9952 = -1.*t5145*t7351;
  t10016 = -0.183*t4914;
  t10018 = -0.25*t5145;
  t10019 = t10016 + t10018;
  t10021 = 0.25*t4914;
  t10022 = t10021 + t5245;
  t10031 = t440*t4172*t808;
  t10033 = t90*t9909;
  t10034 = t10031 + t10033;
  t9977 = t4914*t9973;
  t9982 = -1.*t5145*t9973;
  t10044 = -1.*t4172*t1234;
  t10045 = t90*t9447;
  t10046 = t10044 + t10045;
  t10006 = t4914*t10002;
  t10011 = -1.*t5145*t10002;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t1046*t1848 + t2427*t3067 + t4230*t4320 + t5257*t5409 + t5615*t5949 - 0.183*(-1.*t5145*t5409 + t4914*t5949) - 0.5*(t4914*t5409 + t5145*t5949) - 1.*t343*t440*t808 + 0.15331*(t3729 + t1848*t951);
  p_output1(10)=t1436*t343*t440 + t1046*t6696 + t2427*t6790 + t4230*t7119 + t5257*t7294 + t5615*t7351 - 0.5*(t4914*t7294 + t5145*t7351) - 0.183*t7406 + 0.15331*(t2036*t6790 + t6696*t951);
  p_output1(11)=0;
  p_output1(12)=-1.*t1234*t1436*t343 + t1046*t1198*t1436*t440 + t1436*t1592*t2427*t440 + t4230*t7710 + t5257*t7773 + t5615*t7869 - 0.183*(-1.*t5145*t7773 + t4914*t7869) - 0.5*(t4914*t7773 + t5145*t7869) + 0.15331*(t1436*t1592*t2036*t440 + t1198*t1436*t440*t951);
  p_output1(13)=-1.*t1234*t343*t808 + t1046*t1198*t440*t808 + t1592*t2427*t440*t808 + t4230*t8155 + t5257*t8188 + t5615*t8352 - 0.183*(-1.*t5145*t8188 + t4914*t8352) - 0.5*(t4914*t8188 + t5145*t8352) + 0.15331*(t1592*t2036*t440*t808 + t1198*t440*t808*t951);
  p_output1(14)=-1.*t1046*t1198*t1234 - 1.*t1234*t1592*t2427 - 1.*t343*t440 + t4230*t8595 + t5257*t8660 + t5615*t8678 - 0.183*(-1.*t5145*t8660 + t4914*t8678) - 0.5*(t4914*t8660 + t5145*t8678) + 0.15331*(-1.*t1234*t1592*t2036 - 1.*t1198*t1234*t951);
  p_output1(15)=t2427*t6696 + t1046*t8784 + t4230*t8892 - 1.*t4172*t5615*t8892 + t5257*t8892*t90 - 0.5*(-1.*t4172*t5145*t8892 + t4914*t8892*t90) - 0.183*(-1.*t4172*t4914*t8892 - 1.*t5145*t8892*t90) + 0.15331*(t7065 + t8784*t951);
  p_output1(16)=t1046*t3067 + t2427*t9159 + t4230*t9206 - 1.*t4172*t5615*t9206 + t5257*t90*t9206 - 0.5*(-1.*t4172*t5145*t9206 + t4914*t90*t9206) - 0.183*(-1.*t4172*t4914*t9206 - 1.*t5145*t90*t9206) + 0.15331*(t9243 + t3067*t951);
  p_output1(17)=-1.*t1046*t1592*t440 + t1198*t2427*t440 + t9405 + t9413 + t9415 + t9448 + t9490 + t9507;
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
  p_output1(45)=-0.047*t2036*t6696 + 0.15331*t7119 + 0.047*t6790*t951 + t4230*t9623 - 1.*t4172*t5615*t9623 + t5257*t90*t9623 - 0.5*(-1.*t4172*t5145*t9623 + t4914*t90*t9623) - 0.183*(-1.*t4172*t4914*t9623 - 1.*t5145*t90*t9623);
  p_output1(46)=-0.047*t2036*t9159 + 0.047*t951*t9874 + t4230*t9881 - 1.*t4172*t5615*t9881 + t5257*t90*t9881 - 0.5*(-1.*t4172*t5145*t9881 + t4914*t90*t9881) - 0.183*(-1.*t4172*t4914*t9881 - 1.*t5145*t90*t9881) + 0.15331*t9909;
  p_output1(47)=-0.047*t1198*t2036*t440 + t9405 + t9413 + t9415 + t9448 + t9490 + t9507 + 0.047*t1592*t440*t951;
  p_output1(48)=-0.183*t1436*t4172*t440 + t5257*t7351 - 0.183*t7119*t90 + t5615*t9940 - 0.5*(t7368 + t5145*t9940) - 0.183*(t4914*t9940 + t9952);
  p_output1(49)=-0.183*t4172*t440*t808 - 0.183*t90*t9909 + t5615*t9968 + t5257*t9973 - 0.5*(t5145*t9968 + t9977) - 0.183*(t4914*t9968 + t9982);
  p_output1(50)=0.183*t1234*t4172 + t10002*t5257 - 0.183*t90*t9447 + t5615*t9998 - 0.183*(t10011 + t4914*t9998) - 0.5*(t10006 + t5145*t9998);
  p_output1(51)=t10019*t7294 + t10022*t7351 - 0.5*t7406 - 0.183*(-1.*t4914*t7294 + t9952);
  p_output1(52)=t10019*t10034 + t10022*t9973 - 0.5*(-1.*t10034*t5145 + t9977) - 0.183*(-1.*t10034*t4914 + t9982);
  p_output1(53)=t10002*t10022 + t10019*t10046 - 0.183*(t10011 - 1.*t10046*t4914) - 0.5*(t10006 - 1.*t10046*t5145);
}


       
Eigen::Matrix<double,3,18> Jp_RLfoot(const Eigen::Matrix<double,18,1> &var1)
//void Jp_RLfoot(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



