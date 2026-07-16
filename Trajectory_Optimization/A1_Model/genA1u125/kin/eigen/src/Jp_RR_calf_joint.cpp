/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:21:30 GMT-05:00
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
  double t687;
  double t1523;
  double t1299;
  double t1448;
  double t1532;
  double t958;
  double t1513;
  double t1656;
  double t1664;
  double t1737;
  double t2218;
  double t2290;
  double t2299;
  double t461;
  double t2398;
  double t356;
  double t2533;
  double t2588;
  double t2621;
  double t2662;
  double t2735;
  double t2753;
  double t2815;
  double t3013;
  double t3021;
  double t3054;
  double t3214;
  double t3312;
  double t3318;
  double t395;
  double t397;
  double t421;
  double t454;
  double t1028;
  double t1116;
  double t1823;
  double t1872;
  double t1927;
  double t1949;
  double t3921;
  double t4120;
  double t4145;
  double t4201;
  double t4303;
  double t4326;
  double t2433;
  double t2484;
  double t2784;
  double t2823;
  double t2871;
  double t4520;
  double t4527;
  double t4541;
  double t3159;
  double t3184;
  double t3199;
  double t4597;
  double t4602;
  double t4606;
  double t4738;
  double t4796;
  double t4812;
  double t5892;
  double t5991;
  double t6018;
  double t6324;
  double t6372;
  double t6478;
  double t6635;
  double t6730;
  double t6786;
  double t7343;
  double t7450;
  double t7468;
  double t7539;
  double t7566;
  double t7591;
  double t7645;
  double t7683;
  double t7697;
  double t8022;
  double t8058;
  double t8067;
  double t8084;
  double t8085;
  double t8096;
  double t8117;
  double t8147;
  double t8156;
  double t8280;
  double t8298;
  double t8299;
  double t8327;
  double t8331;
  double t8354;
  double t8576;
  double t8577;
  double t8587;
  double t2360;
  double t8619;
  double t8626;
  double t8790;
  double t8792;
  double t8794;
  double t8932;
  double t8936;
  double t9003;
  double t9004;
  double t9005;
  double t9010;
  double t9018;
  double t8675;
  double t8795;
  double t8806;
  double t8814;
  double t8854;
  double t8862;
  double t8891;
  double t8894;
  double t8897;
  double t8903;
  double t8908;
  double t8917;
  double t8920;
  double t8921;
  double t8922;
  double t8924;
  double t9147;
  double t9211;
  double t9213;
  double t4889;
  double t9054;
  double t9058;
  double t9375;
  double t9376;
  double t9385;
  double t9390;
  double t9402;
  double t9540;
  double t9576;
  double t9586;
  double t9588;
  double t9592;
  double t9594;
  double t4877;
  double t4923;
  double t9318;
  double t9662;
  double t9664;
  double t9677;
  double t9685;
  double t9692;
  double t9715;
  double t9744;
  double t9746;
  double t9420;
  double t9461;
  double t9804;
  double t9805;
  double t9806;
  double t9615;
  double t9632;
  t687 = Sin(var1[3]);
  t1523 = Cos(var1[3]);
  t1299 = Cos(var1[5]);
  t1448 = Sin(var1[4]);
  t1532 = Sin(var1[5]);
  t958 = Sin(var1[12]);
  t1513 = -1.*t1299*t687*t1448;
  t1656 = t1523*t1532;
  t1664 = t1513 + t1656;
  t1737 = Cos(var1[12]);
  t2218 = -1.*t1523*t1299;
  t2290 = -1.*t687*t1448*t1532;
  t2299 = t2218 + t2290;
  t461 = Cos(var1[4]);
  t2398 = Sin(var1[13]);
  t356 = Cos(var1[13]);
  t2533 = t1737*t1664;
  t2588 = -1.*t958*t2299;
  t2621 = t2533 + t2588;
  t2662 = Cos(var1[14]);
  t2735 = -1.*t2662;
  t2753 = 1. + t2735;
  t2815 = Sin(var1[14]);
  t3013 = -1.*t461*t2398*t687;
  t3021 = t356*t2621;
  t3054 = t3013 + t3021;
  t3214 = -1.*t356*t461*t687;
  t3312 = -1.*t2398*t2621;
  t3318 = t3214 + t3312;
  t395 = -1.*t356;
  t397 = 1. + t395;
  t421 = -0.183*t397;
  t454 = 0. + t421;
  t1028 = 0.047*t958;
  t1116 = 0. + t1028;
  t1823 = -1.*t1737;
  t1872 = 1. + t1823;
  t1927 = -0.047*t1872;
  t1949 = 0. + t1927;
  t3921 = t1523*t1299*t1448;
  t4120 = t687*t1532;
  t4145 = t3921 + t4120;
  t4201 = -1.*t1299*t687;
  t4303 = t1523*t1448*t1532;
  t4326 = t4201 + t4303;
  t2433 = -0.183*t2398;
  t2484 = 0. + t2433;
  t2784 = -0.25*t2753;
  t2823 = -0.183*t2815;
  t2871 = 0. + t2784 + t2823;
  t4520 = t1737*t4145;
  t4527 = -1.*t958*t4326;
  t4541 = t4520 + t4527;
  t3159 = -0.183*t2753;
  t3184 = 0.25*t2815;
  t3199 = 0. + t3159 + t3184;
  t4597 = t1523*t461*t2398;
  t4602 = t356*t4541;
  t4606 = t4597 + t4602;
  t4738 = t356*t1523*t461;
  t4796 = -1.*t2398*t4541;
  t4812 = t4738 + t4796;
  t5892 = t1737*t1523*t461*t1299;
  t5991 = -1.*t1523*t461*t958*t1532;
  t6018 = t5892 + t5991;
  t6324 = -1.*t1523*t2398*t1448;
  t6372 = t356*t6018;
  t6478 = t6324 + t6372;
  t6635 = -1.*t356*t1523*t1448;
  t6730 = -1.*t2398*t6018;
  t6786 = t6635 + t6730;
  t7343 = t1737*t461*t1299*t687;
  t7450 = -1.*t461*t958*t687*t1532;
  t7468 = t7343 + t7450;
  t7539 = -1.*t2398*t687*t1448;
  t7566 = t356*t7468;
  t7591 = t7539 + t7566;
  t7645 = -1.*t356*t687*t1448;
  t7683 = -1.*t2398*t7468;
  t7697 = t7645 + t7683;
  t8022 = -1.*t1737*t1299*t1448;
  t8058 = t958*t1448*t1532;
  t8067 = t8022 + t8058;
  t8084 = -1.*t461*t2398;
  t8085 = t356*t8067;
  t8096 = t8084 + t8085;
  t8117 = -1.*t356*t461;
  t8147 = -1.*t2398*t8067;
  t8156 = t8117 + t8147;
  t8280 = t1299*t687;
  t8298 = -1.*t1523*t1448*t1532;
  t8299 = t8280 + t8298;
  t8327 = -1.*t958*t4145;
  t8331 = t1737*t8299;
  t8354 = t8327 + t8331;
  t8576 = t1299*t687*t1448;
  t8577 = -1.*t1523*t1532;
  t8587 = t8576 + t8577;
  t2360 = t1737*t2299;
  t8619 = -1.*t958*t8587;
  t8626 = t8619 + t2360;
  t8790 = -1.*t461*t1299*t958;
  t8792 = -1.*t1737*t461*t1532;
  t8794 = t8790 + t8792;
  t8932 = -1.*t1737*t4326;
  t8936 = t8327 + t8932;
  t9003 = t1523*t1299;
  t9004 = t687*t1448*t1532;
  t9005 = t9003 + t9004;
  t9010 = -1.*t1737*t9005;
  t9018 = t8619 + t9010;
  t8675 = t1737*t8587;
  t8795 = t2484*t8794;
  t8806 = t356*t2871*t8794;
  t8814 = -1.*t2398*t3199*t8794;
  t8854 = t1737*t461*t1299;
  t8862 = -1.*t461*t958*t1532;
  t8891 = t8854 + t8862;
  t8894 = -0.15331*t8891;
  t8897 = -1.*t2662*t2398*t8794;
  t8903 = -1.*t356*t2815*t8794;
  t8908 = t8897 + t8903;
  t8917 = -0.183*t8908;
  t8920 = t356*t2662*t8794;
  t8921 = -1.*t2398*t2815*t8794;
  t8922 = t8920 + t8921;
  t8924 = -0.25*t8922;
  t9147 = -1.*t1523*t461*t2398;
  t9211 = -1.*t356*t4541;
  t9213 = t9147 + t9211;
  t4889 = t2662*t4812;
  t9054 = -1.*t958*t9005;
  t9058 = t8675 + t9054;
  t9375 = -1.*t356*t9058;
  t9376 = t3013 + t9375;
  t9385 = t356*t461*t687;
  t9390 = -1.*t2398*t9058;
  t9402 = t9385 + t9390;
  t9540 = t2398*t1448;
  t9576 = -1.*t356*t8891;
  t9586 = t9540 + t9576;
  t9588 = -1.*t356*t1448;
  t9592 = -1.*t2398*t8891;
  t9594 = t9588 + t9592;
  t4877 = -1.*t2815*t4606;
  t4923 = t4877 + t4889;
  t9318 = -1.*t2815*t4812;
  t9662 = -0.183*t2662;
  t9664 = -0.25*t2815;
  t9677 = t9662 + t9664;
  t9685 = 0.25*t2662;
  t9692 = t9685 + t2823;
  t9715 = t461*t2398*t687;
  t9744 = t356*t9058;
  t9746 = t9715 + t9744;
  t9420 = t2662*t9402;
  t9461 = -1.*t2815*t9402;
  t9804 = -1.*t2398*t1448;
  t9805 = t356*t8891;
  t9806 = t9804 + t9805;
  t9615 = t2662*t9594;
  t9632 = -1.*t2815*t9594;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t1116*t1664 + t1949*t2299 + t2484*t2621 + t2871*t3054 + t3199*t3318 - 0.183*(-1.*t2815*t3054 + t2662*t3318) - 0.25*(t2662*t3054 + t2815*t3318) - 1.*t454*t461*t687 - 0.15331*(t2360 + t1664*t958);
  p_output1(10)=t1116*t4145 + t1949*t4326 + t2484*t4541 + t2871*t4606 + t1523*t454*t461 + t3199*t4812 - 0.25*(t2662*t4606 + t2815*t4812) - 0.183*t4923 - 0.15331*(t1737*t4326 + t4145*t958);
  p_output1(11)=0;
  p_output1(12)=-1.*t1448*t1523*t454 + t1116*t1299*t1523*t461 + t1523*t1532*t1949*t461 + t2484*t6018 + t2871*t6478 + t3199*t6786 - 0.183*(-1.*t2815*t6478 + t2662*t6786) - 0.25*(t2662*t6478 + t2815*t6786) - 0.15331*(t1523*t1532*t1737*t461 + t1299*t1523*t461*t958);
  p_output1(13)=-1.*t1448*t454*t687 + t1116*t1299*t461*t687 + t1532*t1949*t461*t687 + t2484*t7468 + t2871*t7591 + t3199*t7697 - 0.183*(-1.*t2815*t7591 + t2662*t7697) - 0.25*(t2662*t7591 + t2815*t7697) - 0.15331*(t1532*t1737*t461*t687 + t1299*t461*t687*t958);
  p_output1(14)=-1.*t1116*t1299*t1448 - 1.*t1448*t1532*t1949 - 1.*t454*t461 + t2484*t8067 + t2871*t8096 + t3199*t8156 - 0.183*(-1.*t2815*t8096 + t2662*t8156) - 0.25*(t2662*t8096 + t2815*t8156) - 0.15331*(-1.*t1448*t1532*t1737 - 1.*t1299*t1448*t958);
  p_output1(15)=t1949*t4145 + t1116*t8299 + t2484*t8354 - 1.*t2398*t3199*t8354 + t2871*t356*t8354 - 0.25*(-1.*t2398*t2815*t8354 + t2662*t356*t8354) - 0.183*(-1.*t2398*t2662*t8354 - 1.*t2815*t356*t8354) - 0.15331*(t4520 + t8299*t958);
  p_output1(16)=t1116*t2299 + t1949*t8587 + t2484*t8626 - 1.*t2398*t3199*t8626 + t2871*t356*t8626 - 0.25*(-1.*t2398*t2815*t8626 + t2662*t356*t8626) - 0.183*(-1.*t2398*t2662*t8626 - 1.*t2815*t356*t8626) - 0.15331*(t8675 + t2299*t958);
  p_output1(17)=-1.*t1116*t1532*t461 + t1299*t1949*t461 + t8795 + t8806 + t8814 + t8894 + t8917 + t8924;
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
  p_output1(36)=0.047*t1737*t4145 - 0.15331*t4541 + t2484*t8936 - 1.*t2398*t3199*t8936 + t2871*t356*t8936 - 0.25*(-1.*t2398*t2815*t8936 + t2662*t356*t8936) - 0.183*(-1.*t2398*t2662*t8936 - 1.*t2815*t356*t8936) - 0.047*t4326*t958;
  p_output1(37)=0.047*t1737*t8587 + t2484*t9018 - 1.*t2398*t3199*t9018 + t2871*t356*t9018 - 0.25*(-1.*t2398*t2815*t9018 + t2662*t356*t9018) - 0.183*(-1.*t2398*t2662*t9018 - 1.*t2815*t356*t9018) - 0.15331*t9058 - 0.047*t9005*t958;
  p_output1(38)=0.047*t1299*t1737*t461 + t8795 + t8806 + t8814 + t8894 + t8917 + t8924 - 0.047*t1532*t461*t958;
  p_output1(39)=-0.183*t356*t4541 - 0.183*t1523*t2398*t461 + t2871*t4812 + t3199*t9213 - 0.25*(t4889 + t2815*t9213) - 0.183*(t2662*t9213 + t9318);
  p_output1(40)=-0.183*t2398*t461*t687 - 0.183*t356*t9058 + t3199*t9376 + t2871*t9402 - 0.25*(t2815*t9376 + t9420) - 0.183*(t2662*t9376 + t9461);
  p_output1(41)=0.183*t1448*t2398 - 0.183*t356*t8891 + t3199*t9586 + t2871*t9594 - 0.25*(t2815*t9586 + t9615) - 0.183*(t2662*t9586 + t9632);
  p_output1(42)=-0.25*t4923 - 0.183*(-1.*t2662*t4606 + t9318) + t4606*t9677 + t4812*t9692;
  p_output1(43)=t9402*t9692 + t9677*t9746 - 0.183*(t9461 - 1.*t2662*t9746) - 0.25*(t9420 - 1.*t2815*t9746);
  p_output1(44)=t9594*t9692 + t9677*t9806 - 0.183*(t9632 - 1.*t2662*t9806) - 0.25*(t9615 - 1.*t2815*t9806);
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



