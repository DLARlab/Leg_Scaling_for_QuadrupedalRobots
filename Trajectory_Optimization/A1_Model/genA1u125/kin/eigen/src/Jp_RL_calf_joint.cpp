/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:21:37 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RL_calf_joint.h"

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
  double t297;
  double t725;
  double t374;
  double t441;
  double t781;
  double t308;
  double t587;
  double t1097;
  double t1132;
  double t1229;
  double t1652;
  double t1758;
  double t2119;
  double t265;
  double t2230;
  double t60;
  double t2946;
  double t2993;
  double t3162;
  double t3383;
  double t3469;
  double t3563;
  double t3568;
  double t3822;
  double t3867;
  double t3891;
  double t4149;
  double t4170;
  double t4282;
  double t81;
  double t131;
  double t194;
  double t230;
  double t323;
  double t330;
  double t1323;
  double t1364;
  double t1512;
  double t1596;
  double t4795;
  double t4805;
  double t4839;
  double t4938;
  double t4945;
  double t4966;
  double t2232;
  double t2315;
  double t3564;
  double t3570;
  double t3742;
  double t5062;
  double t5079;
  double t5121;
  double t4088;
  double t4103;
  double t4115;
  double t5170;
  double t5172;
  double t5293;
  double t5352;
  double t5359;
  double t5362;
  double t5592;
  double t5597;
  double t5611;
  double t5647;
  double t5650;
  double t5675;
  double t5689;
  double t5695;
  double t5719;
  double t5931;
  double t5943;
  double t5965;
  double t6004;
  double t6062;
  double t6071;
  double t6136;
  double t6227;
  double t6498;
  double t7058;
  double t7063;
  double t7085;
  double t7104;
  double t7110;
  double t7143;
  double t7177;
  double t7206;
  double t7210;
  double t7750;
  double t7752;
  double t7760;
  double t7808;
  double t7814;
  double t7860;
  double t8148;
  double t8150;
  double t8167;
  double t2171;
  double t8189;
  double t8194;
  double t8367;
  double t8376;
  double t8377;
  double t8594;
  double t8615;
  double t8732;
  double t8734;
  double t8753;
  double t8764;
  double t8772;
  double t8217;
  double t8383;
  double t8393;
  double t8401;
  double t8421;
  double t8426;
  double t8435;
  double t8459;
  double t8464;
  double t8479;
  double t8503;
  double t8504;
  double t8507;
  double t8514;
  double t8522;
  double t8550;
  double t8966;
  double t8967;
  double t8968;
  double t5412;
  double t8791;
  double t8853;
  double t9025;
  double t9027;
  double t9053;
  double t9062;
  double t9068;
  double t9125;
  double t9129;
  double t9131;
  double t9134;
  double t9204;
  double t9257;
  double t5410;
  double t5453;
  double t9001;
  double t9381;
  double t9385;
  double t9389;
  double t9398;
  double t9406;
  double t9477;
  double t9485;
  double t9489;
  double t9078;
  double t9104;
  double t9606;
  double t9609;
  double t9611;
  double t9314;
  double t9361;
  t297 = Sin(var1[3]);
  t725 = Cos(var1[3]);
  t374 = Cos(var1[5]);
  t441 = Sin(var1[4]);
  t781 = Sin(var1[5]);
  t308 = Sin(var1[15]);
  t587 = -1.*t374*t297*t441;
  t1097 = t725*t781;
  t1132 = t587 + t1097;
  t1229 = Cos(var1[15]);
  t1652 = -1.*t725*t374;
  t1758 = -1.*t297*t441*t781;
  t2119 = t1652 + t1758;
  t265 = Cos(var1[4]);
  t2230 = Sin(var1[16]);
  t60 = Cos(var1[16]);
  t2946 = t1229*t1132;
  t2993 = -1.*t308*t2119;
  t3162 = t2946 + t2993;
  t3383 = Cos(var1[17]);
  t3469 = -1.*t3383;
  t3563 = 1. + t3469;
  t3568 = Sin(var1[17]);
  t3822 = -1.*t265*t2230*t297;
  t3867 = t60*t3162;
  t3891 = t3822 + t3867;
  t4149 = -1.*t60*t265*t297;
  t4170 = -1.*t2230*t3162;
  t4282 = t4149 + t4170;
  t81 = -1.*t60;
  t131 = 1. + t81;
  t194 = -0.183*t131;
  t230 = 0. + t194;
  t323 = -0.047*t308;
  t330 = 0. + t323;
  t1323 = -1.*t1229;
  t1364 = 1. + t1323;
  t1512 = 0.047*t1364;
  t1596 = 0. + t1512;
  t4795 = t725*t374*t441;
  t4805 = t297*t781;
  t4839 = t4795 + t4805;
  t4938 = -1.*t374*t297;
  t4945 = t725*t441*t781;
  t4966 = t4938 + t4945;
  t2232 = -0.183*t2230;
  t2315 = 0. + t2232;
  t3564 = -0.25*t3563;
  t3570 = -0.183*t3568;
  t3742 = 0. + t3564 + t3570;
  t5062 = t1229*t4839;
  t5079 = -1.*t308*t4966;
  t5121 = t5062 + t5079;
  t4088 = -0.183*t3563;
  t4103 = 0.25*t3568;
  t4115 = 0. + t4088 + t4103;
  t5170 = t725*t265*t2230;
  t5172 = t60*t5121;
  t5293 = t5170 + t5172;
  t5352 = t60*t725*t265;
  t5359 = -1.*t2230*t5121;
  t5362 = t5352 + t5359;
  t5592 = t1229*t725*t265*t374;
  t5597 = -1.*t725*t265*t308*t781;
  t5611 = t5592 + t5597;
  t5647 = -1.*t725*t2230*t441;
  t5650 = t60*t5611;
  t5675 = t5647 + t5650;
  t5689 = -1.*t60*t725*t441;
  t5695 = -1.*t2230*t5611;
  t5719 = t5689 + t5695;
  t5931 = t1229*t265*t374*t297;
  t5943 = -1.*t265*t308*t297*t781;
  t5965 = t5931 + t5943;
  t6004 = -1.*t2230*t297*t441;
  t6062 = t60*t5965;
  t6071 = t6004 + t6062;
  t6136 = -1.*t60*t297*t441;
  t6227 = -1.*t2230*t5965;
  t6498 = t6136 + t6227;
  t7058 = -1.*t1229*t374*t441;
  t7063 = t308*t441*t781;
  t7085 = t7058 + t7063;
  t7104 = -1.*t265*t2230;
  t7110 = t60*t7085;
  t7143 = t7104 + t7110;
  t7177 = -1.*t60*t265;
  t7206 = -1.*t2230*t7085;
  t7210 = t7177 + t7206;
  t7750 = t374*t297;
  t7752 = -1.*t725*t441*t781;
  t7760 = t7750 + t7752;
  t7808 = -1.*t308*t4839;
  t7814 = t1229*t7760;
  t7860 = t7808 + t7814;
  t8148 = t374*t297*t441;
  t8150 = -1.*t725*t781;
  t8167 = t8148 + t8150;
  t2171 = t1229*t2119;
  t8189 = -1.*t308*t8167;
  t8194 = t8189 + t2171;
  t8367 = -1.*t265*t374*t308;
  t8376 = -1.*t1229*t265*t781;
  t8377 = t8367 + t8376;
  t8594 = -1.*t1229*t4966;
  t8615 = t7808 + t8594;
  t8732 = t725*t374;
  t8734 = t297*t441*t781;
  t8753 = t8732 + t8734;
  t8764 = -1.*t1229*t8753;
  t8772 = t8189 + t8764;
  t8217 = t1229*t8167;
  t8383 = t2315*t8377;
  t8393 = t60*t3742*t8377;
  t8401 = -1.*t2230*t4115*t8377;
  t8421 = t1229*t265*t374;
  t8426 = -1.*t265*t308*t781;
  t8435 = t8421 + t8426;
  t8459 = 0.15331*t8435;
  t8464 = -1.*t3383*t2230*t8377;
  t8479 = -1.*t60*t3568*t8377;
  t8503 = t8464 + t8479;
  t8504 = -0.183*t8503;
  t8507 = t60*t3383*t8377;
  t8514 = -1.*t2230*t3568*t8377;
  t8522 = t8507 + t8514;
  t8550 = -0.25*t8522;
  t8966 = -1.*t725*t265*t2230;
  t8967 = -1.*t60*t5121;
  t8968 = t8966 + t8967;
  t5412 = t3383*t5362;
  t8791 = -1.*t308*t8753;
  t8853 = t8217 + t8791;
  t9025 = -1.*t60*t8853;
  t9027 = t3822 + t9025;
  t9053 = t60*t265*t297;
  t9062 = -1.*t2230*t8853;
  t9068 = t9053 + t9062;
  t9125 = t2230*t441;
  t9129 = -1.*t60*t8435;
  t9131 = t9125 + t9129;
  t9134 = -1.*t60*t441;
  t9204 = -1.*t2230*t8435;
  t9257 = t9134 + t9204;
  t5410 = -1.*t3568*t5293;
  t5453 = t5410 + t5412;
  t9001 = -1.*t3568*t5362;
  t9381 = -0.183*t3383;
  t9385 = -0.25*t3568;
  t9389 = t9381 + t9385;
  t9398 = 0.25*t3383;
  t9406 = t9398 + t3570;
  t9477 = t265*t2230*t297;
  t9485 = t60*t8853;
  t9489 = t9477 + t9485;
  t9078 = t3383*t9068;
  t9104 = -1.*t3568*t9068;
  t9606 = -1.*t2230*t441;
  t9609 = t60*t8435;
  t9611 = t9606 + t9609;
  t9314 = t3383*t9257;
  t9361 = -1.*t3568*t9257;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t1596*t2119 - 1.*t230*t265*t297 + 0.15331*(t2171 + t1132*t308) + t2315*t3162 + t1132*t330 + t3742*t3891 + t4115*t4282 - 0.183*(-1.*t3568*t3891 + t3383*t4282) - 0.25*(t3383*t3891 + t3568*t4282);
  p_output1(10)=t330*t4839 + t1596*t4966 + 0.15331*(t308*t4839 + t1229*t4966) + t2315*t5121 + t3742*t5293 + t4115*t5362 - 0.25*(t3383*t5293 + t3568*t5362) - 0.183*t5453 + t230*t265*t725;
  p_output1(11)=0;
  p_output1(12)=t2315*t5611 + t3742*t5675 + t4115*t5719 - 0.183*(-1.*t3568*t5675 + t3383*t5719) - 0.25*(t3383*t5675 + t3568*t5719) + t265*t330*t374*t725 - 1.*t230*t441*t725 + t1596*t265*t725*t781 + 0.15331*(t265*t308*t374*t725 + t1229*t265*t725*t781);
  p_output1(13)=t265*t297*t330*t374 - 1.*t230*t297*t441 + t2315*t5965 + t3742*t6071 + t4115*t6498 - 0.183*(-1.*t3568*t6071 + t3383*t6498) - 0.25*(t3383*t6071 + t3568*t6498) + t1596*t265*t297*t781 + 0.15331*(t265*t297*t308*t374 + t1229*t265*t297*t781);
  p_output1(14)=-1.*t230*t265 - 1.*t330*t374*t441 + t2315*t7085 + t3742*t7143 + t4115*t7210 - 0.183*(-1.*t3568*t7143 + t3383*t7210) - 0.25*(t3383*t7143 + t3568*t7210) - 1.*t1596*t441*t781 + 0.15331*(-1.*t308*t374*t441 - 1.*t1229*t441*t781);
  p_output1(15)=t1596*t4839 + t330*t7760 + 0.15331*(t5062 + t308*t7760) + t2315*t7860 - 1.*t2230*t4115*t7860 + t3742*t60*t7860 - 0.25*(-1.*t2230*t3568*t7860 + t3383*t60*t7860) - 0.183*(-1.*t2230*t3383*t7860 - 1.*t3568*t60*t7860);
  p_output1(16)=t2119*t330 + t1596*t8167 + t2315*t8194 - 1.*t2230*t4115*t8194 + t3742*t60*t8194 - 0.25*(-1.*t2230*t3568*t8194 + t3383*t60*t8194) - 0.183*(-1.*t2230*t3383*t8194 - 1.*t3568*t60*t8194) + 0.15331*(t2119*t308 + t8217);
  p_output1(17)=t1596*t265*t374 - 1.*t265*t330*t781 + t8383 + t8393 + t8401 + t8459 + t8504 + t8550;
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
  p_output1(45)=-0.047*t1229*t4839 + 0.047*t308*t4966 + 0.15331*t5121 + t2315*t8615 - 1.*t2230*t4115*t8615 + t3742*t60*t8615 - 0.25*(-1.*t2230*t3568*t8615 + t3383*t60*t8615) - 0.183*(-1.*t2230*t3383*t8615 - 1.*t3568*t60*t8615);
  p_output1(46)=-0.047*t1229*t8167 + 0.047*t308*t8753 + t2315*t8772 - 1.*t2230*t4115*t8772 + t3742*t60*t8772 - 0.25*(-1.*t2230*t3568*t8772 + t3383*t60*t8772) - 0.183*(-1.*t2230*t3383*t8772 - 1.*t3568*t60*t8772) + 0.15331*t8853;
  p_output1(47)=-0.047*t1229*t265*t374 + 0.047*t265*t308*t781 + t8383 + t8393 + t8401 + t8459 + t8504 + t8550;
  p_output1(48)=t3742*t5362 - 0.183*t5121*t60 - 0.183*t2230*t265*t725 + t4115*t8968 - 0.25*(t5412 + t3568*t8968) - 0.183*(t3383*t8968 + t9001);
  p_output1(49)=-0.183*t2230*t265*t297 - 0.183*t60*t8853 + t4115*t9027 + t3742*t9068 - 0.25*(t3568*t9027 + t9078) - 0.183*(t3383*t9027 + t9104);
  p_output1(50)=0.183*t2230*t441 - 0.183*t60*t8435 + t4115*t9131 + t3742*t9257 - 0.25*(t3568*t9131 + t9314) - 0.183*(t3383*t9131 + t9361);
  p_output1(51)=-0.25*t5453 - 0.183*(-1.*t3383*t5293 + t9001) + t5293*t9389 + t5362*t9406;
  p_output1(52)=t9068*t9406 + t9389*t9489 - 0.183*(t9104 - 1.*t3383*t9489) - 0.25*(t9078 - 1.*t3568*t9489);
  p_output1(53)=t9257*t9406 + t9389*t9611 - 0.183*(t9361 - 1.*t3383*t9611) - 0.25*(t9314 - 1.*t3568*t9611);
}


       
Eigen::Matrix<double,3,18> Jp_RL_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void Jp_RL_calf_joint(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



