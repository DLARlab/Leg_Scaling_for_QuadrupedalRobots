/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:18:50 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_FL_calf_joint.h"

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
  double t819;
  double t1491;
  double t1088;
  double t1262;
  double t1544;
  double t840;
  double t1421;
  double t1594;
  double t1694;
  double t2111;
  double t2218;
  double t2302;
  double t2316;
  double t813;
  double t2582;
  double t44;
  double t2694;
  double t2799;
  double t3046;
  double t3172;
  double t3388;
  double t3412;
  double t3679;
  double t4029;
  double t4082;
  double t4244;
  double t4593;
  double t4656;
  double t4678;
  double t180;
  double t379;
  double t503;
  double t648;
  double t916;
  double t931;
  double t2119;
  double t2193;
  double t2197;
  double t2204;
  double t6413;
  double t6445;
  double t6498;
  double t6790;
  double t6809;
  double t7012;
  double t2677;
  double t2692;
  double t3673;
  double t3723;
  double t3769;
  double t7452;
  double t7460;
  double t7473;
  double t4263;
  double t4319;
  double t4552;
  double t7521;
  double t7523;
  double t7527;
  double t7626;
  double t7655;
  double t7672;
  double t8347;
  double t8358;
  double t8360;
  double t8388;
  double t8408;
  double t8423;
  double t8484;
  double t8486;
  double t8520;
  double t8923;
  double t8931;
  double t8970;
  double t8988;
  double t8993;
  double t9001;
  double t9032;
  double t9038;
  double t9048;
  double t9297;
  double t9299;
  double t9307;
  double t9312;
  double t9319;
  double t9330;
  double t9346;
  double t9348;
  double t9360;
  double t9423;
  double t9424;
  double t9425;
  double t9446;
  double t9448;
  double t9455;
  double t9537;
  double t9549;
  double t9553;
  double t2360;
  double t9559;
  double t9562;
  double t9649;
  double t9651;
  double t9657;
  double t9733;
  double t9736;
  double t9857;
  double t9858;
  double t9859;
  double t9866;
  double t9870;
  double t9574;
  double t9659;
  double t9661;
  double t9669;
  double t9673;
  double t9674;
  double t9681;
  double t9697;
  double t9700;
  double t9707;
  double t9710;
  double t9716;
  double t9717;
  double t9718;
  double t9720;
  double t9721;
  double t9926;
  double t9929;
  double t9933;
  double t7890;
  double t9879;
  double t9886;
  double t9969;
  double t9973;
  double t9977;
  double t9983;
  double t9984;
  double t10017;
  double t10018;
  double t10020;
  double t10024;
  double t10028;
  double t10029;
  double t7856;
  double t7989;
  double t9953;
  double t10083;
  double t10086;
  double t10089;
  double t10096;
  double t10097;
  double t10126;
  double t10131;
  double t10133;
  double t9989;
  double t9998;
  double t10172;
  double t10175;
  double t10183;
  double t10061;
  double t10076;
  t819 = Sin(var1[3]);
  t1491 = Cos(var1[3]);
  t1088 = Cos(var1[5]);
  t1262 = Sin(var1[4]);
  t1544 = Sin(var1[5]);
  t840 = Sin(var1[9]);
  t1421 = -1.*t1088*t819*t1262;
  t1594 = t1491*t1544;
  t1694 = t1421 + t1594;
  t2111 = Cos(var1[9]);
  t2218 = -1.*t1491*t1088;
  t2302 = -1.*t819*t1262*t1544;
  t2316 = t2218 + t2302;
  t813 = Cos(var1[4]);
  t2582 = Sin(var1[10]);
  t44 = Cos(var1[10]);
  t2694 = t2111*t1694;
  t2799 = -1.*t840*t2316;
  t3046 = t2694 + t2799;
  t3172 = Cos(var1[11]);
  t3388 = -1.*t3172;
  t3412 = 1. + t3388;
  t3679 = Sin(var1[11]);
  t4029 = -1.*t813*t2582*t819;
  t4082 = t44*t3046;
  t4244 = t4029 + t4082;
  t4593 = -1.*t44*t813*t819;
  t4656 = -1.*t2582*t3046;
  t4678 = t4593 + t4656;
  t180 = -1.*t44;
  t379 = 1. + t180;
  t503 = 0.183*t379;
  t648 = 0. + t503;
  t916 = -0.047*t840;
  t931 = 0. + t916;
  t2119 = -1.*t2111;
  t2193 = 1. + t2119;
  t2197 = 0.047*t2193;
  t2204 = 0. + t2197;
  t6413 = t1491*t1088*t1262;
  t6445 = t819*t1544;
  t6498 = t6413 + t6445;
  t6790 = -1.*t1088*t819;
  t6809 = t1491*t1262*t1544;
  t7012 = t6790 + t6809;
  t2677 = 0.183*t2582;
  t2692 = 0. + t2677;
  t3673 = -0.15*t3412;
  t3723 = 0.183*t3679;
  t3769 = 0. + t3673 + t3723;
  t7452 = t2111*t6498;
  t7460 = -1.*t840*t7012;
  t7473 = t7452 + t7460;
  t4263 = 0.183*t3412;
  t4319 = 0.15*t3679;
  t4552 = 0. + t4263 + t4319;
  t7521 = t1491*t813*t2582;
  t7523 = t44*t7473;
  t7527 = t7521 + t7523;
  t7626 = t44*t1491*t813;
  t7655 = -1.*t2582*t7473;
  t7672 = t7626 + t7655;
  t8347 = t2111*t1491*t813*t1088;
  t8358 = -1.*t1491*t813*t840*t1544;
  t8360 = t8347 + t8358;
  t8388 = -1.*t1491*t2582*t1262;
  t8408 = t44*t8360;
  t8423 = t8388 + t8408;
  t8484 = -1.*t44*t1491*t1262;
  t8486 = -1.*t2582*t8360;
  t8520 = t8484 + t8486;
  t8923 = t2111*t813*t1088*t819;
  t8931 = -1.*t813*t840*t819*t1544;
  t8970 = t8923 + t8931;
  t8988 = -1.*t2582*t819*t1262;
  t8993 = t44*t8970;
  t9001 = t8988 + t8993;
  t9032 = -1.*t44*t819*t1262;
  t9038 = -1.*t2582*t8970;
  t9048 = t9032 + t9038;
  t9297 = -1.*t2111*t1088*t1262;
  t9299 = t840*t1262*t1544;
  t9307 = t9297 + t9299;
  t9312 = -1.*t813*t2582;
  t9319 = t44*t9307;
  t9330 = t9312 + t9319;
  t9346 = -1.*t44*t813;
  t9348 = -1.*t2582*t9307;
  t9360 = t9346 + t9348;
  t9423 = t1088*t819;
  t9424 = -1.*t1491*t1262*t1544;
  t9425 = t9423 + t9424;
  t9446 = -1.*t840*t6498;
  t9448 = t2111*t9425;
  t9455 = t9446 + t9448;
  t9537 = t1088*t819*t1262;
  t9549 = -1.*t1491*t1544;
  t9553 = t9537 + t9549;
  t2360 = t2111*t2316;
  t9559 = -1.*t840*t9553;
  t9562 = t9559 + t2360;
  t9649 = -1.*t813*t1088*t840;
  t9651 = -1.*t2111*t813*t1544;
  t9657 = t9649 + t9651;
  t9733 = -1.*t2111*t7012;
  t9736 = t9446 + t9733;
  t9857 = t1491*t1088;
  t9858 = t819*t1262*t1544;
  t9859 = t9857 + t9858;
  t9866 = -1.*t2111*t9859;
  t9870 = t9559 + t9866;
  t9574 = t2111*t9553;
  t9659 = t2692*t9657;
  t9661 = -1.*t2582*t4552*t9657;
  t9669 = t44*t3769*t9657;
  t9673 = t2111*t813*t1088;
  t9674 = -1.*t813*t840*t1544;
  t9681 = t9673 + t9674;
  t9697 = 0.11079*t9681;
  t9700 = -1.*t3172*t2582*t9657;
  t9707 = -1.*t44*t3679*t9657;
  t9710 = t9700 + t9707;
  t9716 = 0.183*t9710;
  t9717 = t44*t3172*t9657;
  t9718 = -1.*t2582*t3679*t9657;
  t9720 = t9717 + t9718;
  t9721 = -0.15*t9720;
  t9926 = -1.*t1491*t813*t2582;
  t9929 = -1.*t44*t7473;
  t9933 = t9926 + t9929;
  t7890 = t3172*t7672;
  t9879 = -1.*t840*t9859;
  t9886 = t9574 + t9879;
  t9969 = -1.*t44*t9886;
  t9973 = t4029 + t9969;
  t9977 = t44*t813*t819;
  t9983 = -1.*t2582*t9886;
  t9984 = t9977 + t9983;
  t10017 = t2582*t1262;
  t10018 = -1.*t44*t9681;
  t10020 = t10017 + t10018;
  t10024 = -1.*t44*t1262;
  t10028 = -1.*t2582*t9681;
  t10029 = t10024 + t10028;
  t7856 = -1.*t3679*t7527;
  t7989 = t7856 + t7890;
  t9953 = -1.*t3679*t7672;
  t10083 = 0.183*t3172;
  t10086 = -0.15*t3679;
  t10089 = t10083 + t10086;
  t10096 = 0.15*t3172;
  t10097 = t10096 + t3723;
  t10126 = t813*t2582*t819;
  t10131 = t44*t9886;
  t10133 = t10126 + t10131;
  t9989 = t3172*t9984;
  t9998 = -1.*t3679*t9984;
  t10172 = -1.*t2582*t1262;
  t10175 = t44*t9681;
  t10183 = t10172 + t10175;
  t10061 = t3172*t10029;
  t10076 = -1.*t3679*t10029;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t2204*t2316 + t2692*t3046 + t3769*t4244 + t4552*t4678 + 0.183*(-1.*t3679*t4244 + t3172*t4678) - 0.15*(t3172*t4244 + t3679*t4678) - 1.*t648*t813*t819 + 0.11079*(t2360 + t1694*t840) + t1694*t931;
  p_output1(10)=t2204*t7012 + t2692*t7473 + t3769*t7527 + t4552*t7672 - 0.15*(t3172*t7527 + t3679*t7672) + 0.183*t7989 + t1491*t648*t813 + 0.11079*(t2111*t7012 + t6498*t840) + t6498*t931;
  p_output1(11)=0;
  p_output1(12)=-1.*t1262*t1491*t648 + t1491*t1544*t2204*t813 + t2692*t8360 + 0.11079*(t1491*t1544*t2111*t813 + t1088*t1491*t813*t840) + t3769*t8423 + t4552*t8520 + 0.183*(-1.*t3679*t8423 + t3172*t8520) - 0.15*(t3172*t8423 + t3679*t8520) + t1088*t1491*t813*t931;
  p_output1(13)=-1.*t1262*t648*t819 + t1544*t2204*t813*t819 + 0.11079*(t1544*t2111*t813*t819 + t1088*t813*t819*t840) + t2692*t8970 + t3769*t9001 + t4552*t9048 + 0.183*(-1.*t3679*t9001 + t3172*t9048) - 0.15*(t3172*t9001 + t3679*t9048) + t1088*t813*t819*t931;
  p_output1(14)=-1.*t1262*t1544*t2204 - 1.*t648*t813 + 0.11079*(-1.*t1262*t1544*t2111 - 1.*t1088*t1262*t840) + t2692*t9307 - 1.*t1088*t1262*t931 + t3769*t9330 + t4552*t9360 + 0.183*(-1.*t3679*t9330 + t3172*t9360) - 0.15*(t3172*t9330 + t3679*t9360);
  p_output1(15)=t2204*t6498 + t931*t9425 + 0.11079*(t7452 + t840*t9425) + t2692*t9455 + t3769*t44*t9455 - 1.*t2582*t4552*t9455 - 0.15*(-1.*t2582*t3679*t9455 + t3172*t44*t9455) + 0.183*(-1.*t2582*t3172*t9455 - 1.*t3679*t44*t9455);
  p_output1(16)=t2316*t931 + t2204*t9553 + t2692*t9562 + t3769*t44*t9562 - 1.*t2582*t4552*t9562 - 0.15*(-1.*t2582*t3679*t9562 + t3172*t44*t9562) + 0.183*(-1.*t2582*t3172*t9562 - 1.*t3679*t44*t9562) + 0.11079*(t2316*t840 + t9574);
  p_output1(17)=t1088*t2204*t813 - 1.*t1544*t813*t931 + t9659 + t9661 + t9669 + t9697 + t9716 + t9721;
  p_output1(18)=0;
  p_output1(19)=0;
  p_output1(20)=0;
  p_output1(21)=0;
  p_output1(22)=0;
  p_output1(23)=0;
  p_output1(24)=0;
  p_output1(25)=0;
  p_output1(26)=0;
  p_output1(27)=-0.047*t2111*t6498 + 0.11079*t7473 + 0.047*t7012*t840 + t2692*t9736 + t3769*t44*t9736 - 1.*t2582*t4552*t9736 - 0.15*(-1.*t2582*t3679*t9736 + t3172*t44*t9736) + 0.183*(-1.*t2582*t3172*t9736 - 1.*t3679*t44*t9736);
  p_output1(28)=-0.047*t2111*t9553 + 0.047*t840*t9859 + t2692*t9870 + t3769*t44*t9870 - 1.*t2582*t4552*t9870 - 0.15*(-1.*t2582*t3679*t9870 + t3172*t44*t9870) + 0.183*(-1.*t2582*t3172*t9870 - 1.*t3679*t44*t9870) + 0.11079*t9886;
  p_output1(29)=-0.047*t1088*t2111*t813 + 0.047*t1544*t813*t840 + t9659 + t9661 + t9669 + t9697 + t9716 + t9721;
  p_output1(30)=0.183*t44*t7473 + t3769*t7672 + 0.183*t1491*t2582*t813 + t4552*t9933 - 0.15*(t7890 + t3679*t9933) + 0.183*(t3172*t9933 + t9953);
  p_output1(31)=0.183*t2582*t813*t819 + 0.183*t44*t9886 + t4552*t9973 + t3769*t9984 - 0.15*(t3679*t9973 + t9989) + 0.183*(t3172*t9973 + t9998);
  p_output1(32)=-0.183*t1262*t2582 + 0.183*(t10076 + t10020*t3172) - 0.15*(t10061 + t10020*t3679) + t10029*t3769 + t10020*t4552 + 0.183*t44*t9681;
  p_output1(33)=t10089*t7527 + t10097*t7672 - 0.15*t7989 + 0.183*(-1.*t3172*t7527 + t9953);
  p_output1(34)=t10089*t10133 + t10097*t9984 - 0.15*(-1.*t10133*t3679 + t9989) + 0.183*(-1.*t10133*t3172 + t9998);
  p_output1(35)=t10029*t10097 + t10089*t10183 + 0.183*(t10076 - 1.*t10183*t3172) - 0.15*(t10061 - 1.*t10183*t3679);
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


       
Eigen::Matrix<double,3,18> Jp_FL_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void Jp_FL_calf_joint(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



