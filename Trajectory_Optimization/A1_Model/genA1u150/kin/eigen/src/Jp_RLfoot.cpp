/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:27:04 GMT-05:00
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
  double t748;
  double t1167;
  double t972;
  double t986;
  double t1170;
  double t835;
  double t1050;
  double t1194;
  double t1214;
  double t1363;
  double t1654;
  double t1656;
  double t1728;
  double t717;
  double t2344;
  double t38;
  double t2850;
  double t2981;
  double t3004;
  double t3019;
  double t3112;
  double t3137;
  double t3199;
  double t3467;
  double t3538;
  double t3592;
  double t3968;
  double t4886;
  double t4982;
  double t50;
  double t242;
  double t289;
  double t573;
  double t956;
  double t969;
  double t1614;
  double t1616;
  double t1642;
  double t1651;
  double t5799;
  double t6070;
  double t6322;
  double t6337;
  double t6382;
  double t6391;
  double t2401;
  double t2823;
  double t3171;
  double t3323;
  double t3394;
  double t6442;
  double t6468;
  double t6646;
  double t3612;
  double t3839;
  double t3912;
  double t6716;
  double t6717;
  double t6720;
  double t6786;
  double t6874;
  double t6898;
  double t7336;
  double t7371;
  double t7411;
  double t7457;
  double t7460;
  double t7462;
  double t7469;
  double t7470;
  double t7493;
  double t7716;
  double t7719;
  double t7729;
  double t7765;
  double t7793;
  double t7811;
  double t7870;
  double t7890;
  double t7892;
  double t7978;
  double t7981;
  double t8000;
  double t8020;
  double t8051;
  double t8052;
  double t8068;
  double t8071;
  double t8072;
  double t8141;
  double t8152;
  double t8157;
  double t8218;
  double t8225;
  double t8235;
  double t8483;
  double t8492;
  double t8495;
  double t2019;
  double t8512;
  double t8530;
  double t8786;
  double t8794;
  double t8809;
  double t9017;
  double t9026;
  double t9243;
  double t9247;
  double t9248;
  double t9255;
  double t9258;
  double t8558;
  double t8814;
  double t8858;
  double t8864;
  double t8877;
  double t8897;
  double t8913;
  double t8916;
  double t8935;
  double t8941;
  double t8950;
  double t8962;
  double t8966;
  double t8977;
  double t8987;
  double t8988;
  double t9485;
  double t9506;
  double t9508;
  double t6993;
  double t9273;
  double t9274;
  double t9609;
  double t9624;
  double t9642;
  double t9656;
  double t9690;
  double t9744;
  double t9759;
  double t9769;
  double t9785;
  double t9788;
  double t9810;
  double t6962;
  double t7010;
  double t9552;
  double t9875;
  double t9876;
  double t9878;
  double t9898;
  double t9900;
  double t9916;
  double t9918;
  double t9920;
  double t9706;
  double t9724;
  double t9954;
  double t9956;
  double t9957;
  double t9830;
  double t9840;
  t748 = Sin(var1[3]);
  t1167 = Cos(var1[3]);
  t972 = Cos(var1[5]);
  t986 = Sin(var1[4]);
  t1170 = Sin(var1[5]);
  t835 = Sin(var1[15]);
  t1050 = -1.*t972*t748*t986;
  t1194 = t1167*t1170;
  t1214 = t1050 + t1194;
  t1363 = Cos(var1[15]);
  t1654 = -1.*t1167*t972;
  t1656 = -1.*t748*t986*t1170;
  t1728 = t1654 + t1656;
  t717 = Cos(var1[4]);
  t2344 = Sin(var1[16]);
  t38 = Cos(var1[16]);
  t2850 = t1363*t1214;
  t2981 = -1.*t835*t1728;
  t3004 = t2850 + t2981;
  t3019 = Cos(var1[17]);
  t3112 = -1.*t3019;
  t3137 = 1. + t3112;
  t3199 = Sin(var1[17]);
  t3467 = -1.*t717*t2344*t748;
  t3538 = t38*t3004;
  t3592 = t3467 + t3538;
  t3968 = -1.*t38*t717*t748;
  t4886 = -1.*t2344*t3004;
  t4982 = t3968 + t4886;
  t50 = -1.*t38;
  t242 = 1. + t50;
  t289 = -0.183*t242;
  t573 = 0. + t289;
  t956 = -0.047*t835;
  t969 = 0. + t956;
  t1614 = -1.*t1363;
  t1616 = 1. + t1614;
  t1642 = 0.047*t1616;
  t1651 = 0. + t1642;
  t5799 = t1167*t972*t986;
  t6070 = t748*t1170;
  t6322 = t5799 + t6070;
  t6337 = -1.*t972*t748;
  t6382 = t1167*t986*t1170;
  t6391 = t6337 + t6382;
  t2401 = -0.183*t2344;
  t2823 = 0. + t2401;
  t3171 = -0.3*t3137;
  t3323 = -0.183*t3199;
  t3394 = 0. + t3171 + t3323;
  t6442 = t1363*t6322;
  t6468 = -1.*t835*t6391;
  t6646 = t6442 + t6468;
  t3612 = -0.183*t3137;
  t3839 = 0.3*t3199;
  t3912 = 0. + t3612 + t3839;
  t6716 = t1167*t717*t2344;
  t6717 = t38*t6646;
  t6720 = t6716 + t6717;
  t6786 = t38*t1167*t717;
  t6874 = -1.*t2344*t6646;
  t6898 = t6786 + t6874;
  t7336 = t1363*t1167*t717*t972;
  t7371 = -1.*t1167*t717*t835*t1170;
  t7411 = t7336 + t7371;
  t7457 = -1.*t1167*t2344*t986;
  t7460 = t38*t7411;
  t7462 = t7457 + t7460;
  t7469 = -1.*t38*t1167*t986;
  t7470 = -1.*t2344*t7411;
  t7493 = t7469 + t7470;
  t7716 = t1363*t717*t972*t748;
  t7719 = -1.*t717*t835*t748*t1170;
  t7729 = t7716 + t7719;
  t7765 = -1.*t2344*t748*t986;
  t7793 = t38*t7729;
  t7811 = t7765 + t7793;
  t7870 = -1.*t38*t748*t986;
  t7890 = -1.*t2344*t7729;
  t7892 = t7870 + t7890;
  t7978 = -1.*t1363*t972*t986;
  t7981 = t835*t986*t1170;
  t8000 = t7978 + t7981;
  t8020 = -1.*t717*t2344;
  t8051 = t38*t8000;
  t8052 = t8020 + t8051;
  t8068 = -1.*t38*t717;
  t8071 = -1.*t2344*t8000;
  t8072 = t8068 + t8071;
  t8141 = t972*t748;
  t8152 = -1.*t1167*t986*t1170;
  t8157 = t8141 + t8152;
  t8218 = -1.*t835*t6322;
  t8225 = t1363*t8157;
  t8235 = t8218 + t8225;
  t8483 = t972*t748*t986;
  t8492 = -1.*t1167*t1170;
  t8495 = t8483 + t8492;
  t2019 = t1363*t1728;
  t8512 = -1.*t835*t8495;
  t8530 = t8512 + t2019;
  t8786 = -1.*t717*t972*t835;
  t8794 = -1.*t1363*t717*t1170;
  t8809 = t8786 + t8794;
  t9017 = -1.*t1363*t6391;
  t9026 = t8218 + t9017;
  t9243 = t1167*t972;
  t9247 = t748*t986*t1170;
  t9248 = t9243 + t9247;
  t9255 = -1.*t1363*t9248;
  t9258 = t8512 + t9255;
  t8558 = t1363*t8495;
  t8814 = t2823*t8809;
  t8858 = t38*t3394*t8809;
  t8864 = -1.*t2344*t3912*t8809;
  t8877 = t1363*t717*t972;
  t8897 = -1.*t717*t835*t1170;
  t8913 = t8877 + t8897;
  t8916 = 0.17458*t8913;
  t8935 = -1.*t3019*t2344*t8809;
  t8941 = -1.*t38*t3199*t8809;
  t8950 = t8935 + t8941;
  t8962 = -0.183*t8950;
  t8966 = t38*t3019*t8809;
  t8977 = -1.*t2344*t3199*t8809;
  t8987 = t8966 + t8977;
  t8988 = -0.6*t8987;
  t9485 = -1.*t1167*t717*t2344;
  t9506 = -1.*t38*t6646;
  t9508 = t9485 + t9506;
  t6993 = t3019*t6898;
  t9273 = -1.*t835*t9248;
  t9274 = t8558 + t9273;
  t9609 = -1.*t38*t9274;
  t9624 = t3467 + t9609;
  t9642 = t38*t717*t748;
  t9656 = -1.*t2344*t9274;
  t9690 = t9642 + t9656;
  t9744 = t2344*t986;
  t9759 = -1.*t38*t8913;
  t9769 = t9744 + t9759;
  t9785 = -1.*t38*t986;
  t9788 = -1.*t2344*t8913;
  t9810 = t9785 + t9788;
  t6962 = -1.*t3199*t6720;
  t7010 = t6962 + t6993;
  t9552 = -1.*t3199*t6898;
  t9875 = -0.183*t3019;
  t9876 = -0.3*t3199;
  t9878 = t9875 + t9876;
  t9898 = 0.3*t3019;
  t9900 = t9898 + t3323;
  t9916 = t717*t2344*t748;
  t9918 = t38*t9274;
  t9920 = t9916 + t9918;
  t9706 = t3019*t9690;
  t9724 = -1.*t3199*t9690;
  t9954 = -1.*t2344*t986;
  t9956 = t38*t8913;
  t9957 = t9954 + t9956;
  t9830 = t3019*t9810;
  t9840 = -1.*t3199*t9810;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t1651*t1728 + t2823*t3004 + t3394*t3592 + t3912*t4982 - 0.183*(-1.*t3199*t3592 + t3019*t4982) - 0.6*(t3019*t3592 + t3199*t4982) - 1.*t573*t717*t748 + 0.17458*(t2019 + t1214*t835) + t1214*t969;
  p_output1(10)=t1651*t6391 + t2823*t6646 + t3394*t6720 + t3912*t6898 - 0.6*(t3019*t6720 + t3199*t6898) - 0.183*t7010 + t1167*t573*t717 + 0.17458*(t1363*t6391 + t6322*t835) + t6322*t969;
  p_output1(11)=0;
  p_output1(12)=t1167*t1170*t1651*t717 + t2823*t7411 + t3394*t7462 + t3912*t7493 - 0.183*(-1.*t3199*t7462 + t3019*t7493) - 0.6*(t3019*t7462 + t3199*t7493) + t1167*t717*t969*t972 + 0.17458*(t1167*t1170*t1363*t717 + t1167*t717*t835*t972) - 1.*t1167*t573*t986;
  p_output1(13)=t1170*t1651*t717*t748 + t2823*t7729 + t3394*t7811 + t3912*t7892 - 0.183*(-1.*t3199*t7811 + t3019*t7892) - 0.6*(t3019*t7811 + t3199*t7892) + t717*t748*t969*t972 + 0.17458*(t1170*t1363*t717*t748 + t717*t748*t835*t972) - 1.*t573*t748*t986;
  p_output1(14)=-1.*t573*t717 + t2823*t8000 + t3394*t8052 + t3912*t8072 - 0.183*(-1.*t3199*t8052 + t3019*t8072) - 0.6*(t3019*t8052 + t3199*t8072) - 1.*t1170*t1651*t986 - 1.*t969*t972*t986 + 0.17458*(-1.*t1170*t1363*t986 - 1.*t835*t972*t986);
  p_output1(15)=t1651*t6322 + t2823*t8235 + t3394*t38*t8235 - 1.*t2344*t3912*t8235 - 0.6*(-1.*t2344*t3199*t8235 + t3019*t38*t8235) - 0.183*(-1.*t2344*t3019*t8235 - 1.*t3199*t38*t8235) + 0.17458*(t6442 + t8157*t835) + t8157*t969;
  p_output1(16)=t1651*t8495 + t2823*t8530 + t3394*t38*t8530 - 1.*t2344*t3912*t8530 - 0.6*(-1.*t2344*t3199*t8530 + t3019*t38*t8530) - 0.183*(-1.*t2344*t3019*t8530 - 1.*t3199*t38*t8530) + 0.17458*(t1728*t835 + t8558) + t1728*t969;
  p_output1(17)=t8814 + t8858 + t8864 + t8916 + t8962 + t8988 - 1.*t1170*t717*t969 + t1651*t717*t972;
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
  p_output1(45)=-0.047*t1363*t6322 + 0.17458*t6646 + 0.047*t6391*t835 + t2823*t9026 + t3394*t38*t9026 - 1.*t2344*t3912*t9026 - 0.6*(-1.*t2344*t3199*t9026 + t3019*t38*t9026) - 0.183*(-1.*t2344*t3019*t9026 - 1.*t3199*t38*t9026);
  p_output1(46)=-0.047*t1363*t8495 + 0.047*t835*t9248 + t2823*t9258 + t3394*t38*t9258 - 1.*t2344*t3912*t9258 - 0.6*(-1.*t2344*t3199*t9258 + t3019*t38*t9258) - 0.183*(-1.*t2344*t3019*t9258 - 1.*t3199*t38*t9258) + 0.17458*t9274;
  p_output1(47)=0.047*t1170*t717*t835 + t8814 + t8858 + t8864 + t8916 + t8962 + t8988 - 0.047*t1363*t717*t972;
  p_output1(48)=-0.183*t38*t6646 + t3394*t6898 - 0.183*t1167*t2344*t717 + t3912*t9508 - 0.6*(t6993 + t3199*t9508) - 0.183*(t3019*t9508 + t9552);
  p_output1(49)=-0.183*t2344*t717*t748 - 0.183*t38*t9274 + t3912*t9624 + t3394*t9690 - 0.6*(t3199*t9624 + t9706) - 0.183*(t3019*t9624 + t9724);
  p_output1(50)=-0.183*t38*t8913 + t3912*t9769 + t3394*t9810 - 0.6*(t3199*t9769 + t9830) - 0.183*(t3019*t9769 + t9840) + 0.183*t2344*t986;
  p_output1(51)=-0.6*t7010 - 0.183*(-1.*t3019*t6720 + t9552) + t6720*t9878 + t6898*t9900;
  p_output1(52)=t9690*t9900 + t9878*t9920 - 0.183*(t9724 - 1.*t3019*t9920) - 0.6*(t9706 - 1.*t3199*t9920);
  p_output1(53)=t9810*t9900 + t9878*t9957 - 0.183*(t9840 - 1.*t3019*t9957) - 0.6*(t9830 - 1.*t3199*t9957);
}


       
Eigen::Matrix<double,3,18> Jp_RLfoot(const Eigen::Matrix<double,18,1> &var1)
//void Jp_RLfoot(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



