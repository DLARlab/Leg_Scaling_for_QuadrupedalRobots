/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:18:48 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_FL_thigh_joint.h"

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
  double t812;
  double t3278;
  double t2537;
  double t2538;
  double t3579;
  double t962;
  double t2545;
  double t3654;
  double t3678;
  double t4197;
  double t4763;
  double t5042;
  double t5104;
  double t355;
  double t797;
  double t5814;
  double t6140;
  double t6228;
  double t6535;
  double t481;
  double t626;
  double t731;
  double t751;
  double t1555;
  double t2160;
  double t4206;
  double t4405;
  double t4409;
  double t4601;
  double t7029;
  double t7049;
  double t7122;
  double t7253;
  double t7304;
  double t7305;
  double t5849;
  double t5868;
  double t7554;
  double t7560;
  double t7564;
  double t7880;
  double t7906;
  double t7923;
  double t8262;
  double t8291;
  double t8295;
  double t8414;
  double t8423;
  double t8447;
  double t8539;
  double t8559;
  double t8586;
  double t8609;
  double t8611;
  double t8613;
  double t8645;
  double t8661;
  double t8670;
  double t5601;
  double t8773;
  double t8778;
  double t8904;
  double t8905;
  double t8911;
  double t8994;
  double t9001;
  double t9100;
  double t9111;
  double t9122;
  double t9138;
  double t9140;
  double t8810;
  double t8940;
  double t8948;
  double t8949;
  double t8963;
  double t8975;
  double t8976;
  double t9164;
  double t9167;
  t812 = Sin(var1[3]);
  t3278 = Cos(var1[3]);
  t2537 = Cos(var1[5]);
  t2538 = Sin(var1[4]);
  t3579 = Sin(var1[5]);
  t962 = Sin(var1[9]);
  t2545 = -1.*t2537*t812*t2538;
  t3654 = t3278*t3579;
  t3678 = t2545 + t3654;
  t4197 = Cos(var1[9]);
  t4763 = -1.*t3278*t2537;
  t5042 = -1.*t812*t2538*t3579;
  t5104 = t4763 + t5042;
  t355 = Cos(var1[10]);
  t797 = Cos(var1[4]);
  t5814 = Sin(var1[10]);
  t6140 = t4197*t3678;
  t6228 = -1.*t962*t5104;
  t6535 = t6140 + t6228;
  t481 = -1.*t355;
  t626 = 1. + t481;
  t731 = 0.183*t626;
  t751 = 0. + t731;
  t1555 = -0.047*t962;
  t2160 = 0. + t1555;
  t4206 = -1.*t4197;
  t4405 = 1. + t4206;
  t4409 = 0.047*t4405;
  t4601 = 0. + t4409;
  t7029 = t3278*t2537*t2538;
  t7049 = t812*t3579;
  t7122 = t7029 + t7049;
  t7253 = -1.*t2537*t812;
  t7304 = t3278*t2538*t3579;
  t7305 = t7253 + t7304;
  t5849 = 0.183*t5814;
  t5868 = 0. + t5849;
  t7554 = t4197*t7122;
  t7560 = -1.*t962*t7305;
  t7564 = t7554 + t7560;
  t7880 = t4197*t3278*t797*t2537;
  t7906 = -1.*t3278*t797*t962*t3579;
  t7923 = t7880 + t7906;
  t8262 = t4197*t797*t2537*t812;
  t8291 = -1.*t797*t962*t812*t3579;
  t8295 = t8262 + t8291;
  t8414 = -1.*t4197*t2537*t2538;
  t8423 = t962*t2538*t3579;
  t8447 = t8414 + t8423;
  t8539 = t2537*t812;
  t8559 = -1.*t3278*t2538*t3579;
  t8586 = t8539 + t8559;
  t8609 = -1.*t962*t7122;
  t8611 = t4197*t8586;
  t8613 = t8609 + t8611;
  t8645 = t2537*t812*t2538;
  t8661 = -1.*t3278*t3579;
  t8670 = t8645 + t8661;
  t5601 = t4197*t5104;
  t8773 = -1.*t962*t8670;
  t8778 = t8773 + t5601;
  t8904 = -1.*t797*t2537*t962;
  t8905 = -1.*t4197*t797*t3579;
  t8911 = t8904 + t8905;
  t8994 = -1.*t4197*t7305;
  t9001 = t8609 + t8994;
  t9100 = t3278*t2537;
  t9111 = t812*t2538*t3579;
  t9122 = t9100 + t9111;
  t9138 = -1.*t4197*t9122;
  t9140 = t8773 + t9138;
  t8810 = t4197*t8670;
  t8940 = t5868*t8911;
  t8948 = -0.183*t5814*t8911;
  t8949 = t4197*t797*t2537;
  t8963 = -1.*t797*t962*t3579;
  t8975 = t8949 + t8963;
  t8976 = 0.11079*t8975;
  t9164 = -1.*t962*t9122;
  t9167 = t8810 + t9164;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t2160*t3678 + t4601*t5104 + t5868*t6535 - 1.*t751*t797*t812 + 0.183*(-1.*t5814*t6535 - 1.*t355*t797*t812) + 0.11079*(t5601 + t3678*t962);
  p_output1(10)=t2160*t7122 + t4601*t7305 + t5868*t7564 + t3278*t751*t797 + 0.183*(-1.*t5814*t7564 + t3278*t355*t797) + 0.11079*(t4197*t7305 + t7122*t962);
  p_output1(11)=0;
  p_output1(12)=-1.*t2538*t3278*t751 + t5868*t7923 + 0.183*(-1.*t2538*t3278*t355 - 1.*t5814*t7923) + t2160*t2537*t3278*t797 + t3278*t3579*t4601*t797 + 0.11079*(t3278*t3579*t4197*t797 + t2537*t3278*t797*t962);
  p_output1(13)=-1.*t2538*t751*t812 + t2160*t2537*t797*t812 + t3579*t4601*t797*t812 + t5868*t8295 + 0.183*(-1.*t2538*t355*t812 - 1.*t5814*t8295) + 0.11079*(t3579*t4197*t797*t812 + t2537*t797*t812*t962);
  p_output1(14)=-1.*t2160*t2537*t2538 - 1.*t2538*t3579*t4601 - 1.*t751*t797 + t5868*t8447 + 0.183*(-1.*t355*t797 - 1.*t5814*t8447) + 0.11079*(-1.*t2538*t3579*t4197 - 1.*t2537*t2538*t962);
  p_output1(15)=t4601*t7122 + t2160*t8586 - 0.183*t5814*t8613 + t5868*t8613 + 0.11079*(t7554 + t8586*t962);
  p_output1(16)=t2160*t5104 + t4601*t8670 - 0.183*t5814*t8778 + t5868*t8778 + 0.11079*(t8810 + t5104*t962);
  p_output1(17)=-1.*t2160*t3579*t797 + t2537*t4601*t797 + t8940 + t8948 + t8976;
  p_output1(18)=0;
  p_output1(19)=0;
  p_output1(20)=0;
  p_output1(21)=0;
  p_output1(22)=0;
  p_output1(23)=0;
  p_output1(24)=0;
  p_output1(25)=0;
  p_output1(26)=0;
  p_output1(27)=-0.047*t4197*t7122 + 0.11079*t7564 - 0.183*t5814*t9001 + t5868*t9001 + 0.047*t7305*t962;
  p_output1(28)=-0.047*t4197*t8670 - 0.183*t5814*t9140 + t5868*t9140 + 0.11079*t9167 + 0.047*t9122*t962;
  p_output1(29)=-0.047*t2537*t4197*t797 + t8940 + t8948 + t8976 + 0.047*t3579*t797*t962;
  p_output1(30)=0.183*t355*t7564 + 0.183*t3278*t5814*t797 + 0.183*(-1.*t355*t7564 - 1.*t3278*t5814*t797);
  p_output1(31)=0.183*t5814*t797*t812 + 0.183*t355*t9167 + 0.183*(-1.*t5814*t797*t812 - 1.*t355*t9167);
  p_output1(32)=-0.183*t2538*t5814 + 0.183*t355*t8975 + 0.183*(t2538*t5814 - 1.*t355*t8975);
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


       
Eigen::Matrix<double,3,18> Jp_FL_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void Jp_FL_thigh_joint(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



