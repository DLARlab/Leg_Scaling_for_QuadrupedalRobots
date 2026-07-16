/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:18:57 GMT-05:00
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
  double t651;
  double t1342;
  double t995;
  double t1128;
  double t1381;
  double t923;
  double t1132;
  double t1382;
  double t1383;
  double t1473;
  double t1814;
  double t1815;
  double t1834;
  double t605;
  double t2209;
  double t24;
  double t2558;
  double t2573;
  double t2578;
  double t2690;
  double t2724;
  double t3051;
  double t3088;
  double t3241;
  double t3243;
  double t3444;
  double t3597;
  double t3663;
  double t3670;
  double t112;
  double t466;
  double t553;
  double t604;
  double t941;
  double t963;
  double t1566;
  double t1627;
  double t1788;
  double t1794;
  double t4584;
  double t4651;
  double t4682;
  double t4700;
  double t4807;
  double t4814;
  double t2270;
  double t2427;
  double t3065;
  double t3138;
  double t3153;
  double t4946;
  double t5017;
  double t5070;
  double t3506;
  double t3553;
  double t3576;
  double t5262;
  double t5280;
  double t5310;
  double t5513;
  double t5606;
  double t5721;
  double t6556;
  double t6557;
  double t6559;
  double t6648;
  double t6717;
  double t6740;
  double t6751;
  double t6762;
  double t6827;
  double t7306;
  double t7310;
  double t7340;
  double t7381;
  double t7403;
  double t7416;
  double t7451;
  double t7459;
  double t7514;
  double t8394;
  double t8437;
  double t8477;
  double t8499;
  double t8517;
  double t8521;
  double t8576;
  double t8596;
  double t8612;
  double t8885;
  double t8897;
  double t8923;
  double t8959;
  double t9015;
  double t9016;
  double t9257;
  double t9302;
  double t9309;
  double t1945;
  double t9371;
  double t9390;
  double t9572;
  double t9577;
  double t9591;
  double t9723;
  double t9730;
  double t9794;
  double t9795;
  double t9796;
  double t9809;
  double t9810;
  double t9429;
  double t9596;
  double t9610;
  double t9613;
  double t9615;
  double t9630;
  double t9637;
  double t9640;
  double t9641;
  double t9642;
  double t9647;
  double t9654;
  double t9658;
  double t9673;
  double t9683;
  double t9685;
  double t9906;
  double t9912;
  double t9915;
  double t5830;
  double t9837;
  double t9839;
  double t9950;
  double t9951;
  double t9960;
  double t9961;
  double t9962;
  double t10005;
  double t10007;
  double t10015;
  double t10017;
  double t10020;
  double t10022;
  double t5791;
  double t5940;
  double t9937;
  double t10126;
  double t10131;
  double t10132;
  double t10138;
  double t10142;
  double t10156;
  double t10157;
  double t10160;
  double t9975;
  double t9990;
  double t10242;
  double t10243;
  double t10245;
  double t10083;
  double t10099;
  t651 = Sin(var1[3]);
  t1342 = Cos(var1[3]);
  t995 = Cos(var1[5]);
  t1128 = Sin(var1[4]);
  t1381 = Sin(var1[5]);
  t923 = Sin(var1[12]);
  t1132 = -1.*t995*t651*t1128;
  t1382 = t1342*t1381;
  t1383 = t1132 + t1382;
  t1473 = Cos(var1[12]);
  t1814 = -1.*t1342*t995;
  t1815 = -1.*t651*t1128*t1381;
  t1834 = t1814 + t1815;
  t605 = Cos(var1[4]);
  t2209 = Sin(var1[13]);
  t24 = Cos(var1[13]);
  t2558 = t1473*t1383;
  t2573 = -1.*t923*t1834;
  t2578 = t2558 + t2573;
  t2690 = Cos(var1[14]);
  t2724 = -1.*t2690;
  t3051 = 1. + t2724;
  t3088 = Sin(var1[14]);
  t3241 = -1.*t605*t2209*t651;
  t3243 = t24*t2578;
  t3444 = t3241 + t3243;
  t3597 = -1.*t24*t605*t651;
  t3663 = -1.*t2209*t2578;
  t3670 = t3597 + t3663;
  t112 = -1.*t24;
  t466 = 1. + t112;
  t553 = -0.183*t466;
  t604 = 0. + t553;
  t941 = 0.047*t923;
  t963 = 0. + t941;
  t1566 = -1.*t1473;
  t1627 = 1. + t1566;
  t1788 = -0.047*t1627;
  t1794 = 0. + t1788;
  t4584 = t1342*t995*t1128;
  t4651 = t651*t1381;
  t4682 = t4584 + t4651;
  t4700 = -1.*t995*t651;
  t4807 = t1342*t1128*t1381;
  t4814 = t4700 + t4807;
  t2270 = -0.183*t2209;
  t2427 = 0. + t2270;
  t3065 = -0.15*t3051;
  t3138 = -0.183*t3088;
  t3153 = 0. + t3065 + t3138;
  t4946 = t1473*t4682;
  t5017 = -1.*t923*t4814;
  t5070 = t4946 + t5017;
  t3506 = -0.183*t3051;
  t3553 = 0.15*t3088;
  t3576 = 0. + t3506 + t3553;
  t5262 = t1342*t605*t2209;
  t5280 = t24*t5070;
  t5310 = t5262 + t5280;
  t5513 = t24*t1342*t605;
  t5606 = -1.*t2209*t5070;
  t5721 = t5513 + t5606;
  t6556 = t1473*t1342*t605*t995;
  t6557 = -1.*t1342*t605*t923*t1381;
  t6559 = t6556 + t6557;
  t6648 = -1.*t1342*t2209*t1128;
  t6717 = t24*t6559;
  t6740 = t6648 + t6717;
  t6751 = -1.*t24*t1342*t1128;
  t6762 = -1.*t2209*t6559;
  t6827 = t6751 + t6762;
  t7306 = t1473*t605*t995*t651;
  t7310 = -1.*t605*t923*t651*t1381;
  t7340 = t7306 + t7310;
  t7381 = -1.*t2209*t651*t1128;
  t7403 = t24*t7340;
  t7416 = t7381 + t7403;
  t7451 = -1.*t24*t651*t1128;
  t7459 = -1.*t2209*t7340;
  t7514 = t7451 + t7459;
  t8394 = -1.*t1473*t995*t1128;
  t8437 = t923*t1128*t1381;
  t8477 = t8394 + t8437;
  t8499 = -1.*t605*t2209;
  t8517 = t24*t8477;
  t8521 = t8499 + t8517;
  t8576 = -1.*t24*t605;
  t8596 = -1.*t2209*t8477;
  t8612 = t8576 + t8596;
  t8885 = t995*t651;
  t8897 = -1.*t1342*t1128*t1381;
  t8923 = t8885 + t8897;
  t8959 = -1.*t923*t4682;
  t9015 = t1473*t8923;
  t9016 = t8959 + t9015;
  t9257 = t995*t651*t1128;
  t9302 = -1.*t1342*t1381;
  t9309 = t9257 + t9302;
  t1945 = t1473*t1834;
  t9371 = -1.*t923*t9309;
  t9390 = t9371 + t1945;
  t9572 = -1.*t605*t995*t923;
  t9577 = -1.*t1473*t605*t1381;
  t9591 = t9572 + t9577;
  t9723 = -1.*t1473*t4814;
  t9730 = t8959 + t9723;
  t9794 = t1342*t995;
  t9795 = t651*t1128*t1381;
  t9796 = t9794 + t9795;
  t9809 = -1.*t1473*t9796;
  t9810 = t9371 + t9809;
  t9429 = t1473*t9309;
  t9596 = t2427*t9591;
  t9610 = t24*t3153*t9591;
  t9613 = -1.*t2209*t3576*t9591;
  t9615 = t1473*t605*t995;
  t9630 = -1.*t605*t923*t1381;
  t9637 = t9615 + t9630;
  t9640 = -0.11079*t9637;
  t9641 = -1.*t2690*t2209*t9591;
  t9642 = -1.*t24*t3088*t9591;
  t9647 = t9641 + t9642;
  t9654 = -0.183*t9647;
  t9658 = t24*t2690*t9591;
  t9673 = -1.*t2209*t3088*t9591;
  t9683 = t9658 + t9673;
  t9685 = -0.15*t9683;
  t9906 = -1.*t1342*t605*t2209;
  t9912 = -1.*t24*t5070;
  t9915 = t9906 + t9912;
  t5830 = t2690*t5721;
  t9837 = -1.*t923*t9796;
  t9839 = t9429 + t9837;
  t9950 = -1.*t24*t9839;
  t9951 = t3241 + t9950;
  t9960 = t24*t605*t651;
  t9961 = -1.*t2209*t9839;
  t9962 = t9960 + t9961;
  t10005 = t2209*t1128;
  t10007 = -1.*t24*t9637;
  t10015 = t10005 + t10007;
  t10017 = -1.*t24*t1128;
  t10020 = -1.*t2209*t9637;
  t10022 = t10017 + t10020;
  t5791 = -1.*t3088*t5310;
  t5940 = t5791 + t5830;
  t9937 = -1.*t3088*t5721;
  t10126 = -0.183*t2690;
  t10131 = -0.15*t3088;
  t10132 = t10126 + t10131;
  t10138 = 0.15*t2690;
  t10142 = t10138 + t3138;
  t10156 = t605*t2209*t651;
  t10157 = t24*t9839;
  t10160 = t10156 + t10157;
  t9975 = t2690*t9962;
  t9990 = -1.*t3088*t9962;
  t10242 = -1.*t2209*t1128;
  t10243 = t24*t9637;
  t10245 = t10242 + t10243;
  t10083 = t2690*t10022;
  t10099 = -1.*t3088*t10022;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t1794*t1834 + t2427*t2578 + t3153*t3444 + t3576*t3670 - 0.183*(-1.*t3088*t3444 + t2690*t3670) - 0.15*(t2690*t3444 + t3088*t3670) - 1.*t604*t605*t651 - 0.11079*(t1945 + t1383*t923) + t1383*t963;
  p_output1(10)=t1794*t4814 + t2427*t5070 + t3153*t5310 + t3576*t5721 - 0.15*(t2690*t5310 + t3088*t5721) - 0.183*t5940 + t1342*t604*t605 - 0.11079*(t1473*t4814 + t4682*t923) + t4682*t963;
  p_output1(11)=0;
  p_output1(12)=-1.*t1128*t1342*t604 + t1342*t1381*t1794*t605 + t2427*t6559 + t3153*t6740 + t3576*t6827 - 0.183*(-1.*t3088*t6740 + t2690*t6827) - 0.15*(t2690*t6740 + t3088*t6827) + t1342*t605*t963*t995 - 0.11079*(t1342*t1381*t1473*t605 + t1342*t605*t923*t995);
  p_output1(13)=-1.*t1128*t604*t651 + t1381*t1794*t605*t651 + t2427*t7340 + t3153*t7416 + t3576*t7514 - 0.183*(-1.*t3088*t7416 + t2690*t7514) - 0.15*(t2690*t7416 + t3088*t7514) + t605*t651*t963*t995 - 0.11079*(t1381*t1473*t605*t651 + t605*t651*t923*t995);
  p_output1(14)=-1.*t1128*t1381*t1794 - 1.*t604*t605 + t2427*t8477 + t3153*t8521 + t3576*t8612 - 0.183*(-1.*t3088*t8521 + t2690*t8612) - 0.15*(t2690*t8521 + t3088*t8612) - 1.*t1128*t963*t995 - 0.11079*(-1.*t1128*t1381*t1473 - 1.*t1128*t923*t995);
  p_output1(15)=t1794*t4682 + t2427*t9016 + t24*t3153*t9016 - 1.*t2209*t3576*t9016 - 0.15*(t24*t2690*t9016 - 1.*t2209*t3088*t9016) - 0.183*(-1.*t2209*t2690*t9016 - 1.*t24*t3088*t9016) - 0.11079*(t4946 + t8923*t923) + t8923*t963;
  p_output1(16)=t1794*t9309 + t2427*t9390 + t24*t3153*t9390 - 1.*t2209*t3576*t9390 - 0.15*(t24*t2690*t9390 - 1.*t2209*t3088*t9390) - 0.183*(-1.*t2209*t2690*t9390 - 1.*t24*t3088*t9390) - 0.11079*(t1834*t923 + t9429) + t1834*t963;
  p_output1(17)=t9596 + t9610 + t9613 - 1.*t1381*t605*t963 + t9640 + t9654 + t9685 + t1794*t605*t995;
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
  p_output1(36)=0.047*t1473*t4682 - 0.11079*t5070 - 0.047*t4814*t923 + t2427*t9730 + t24*t3153*t9730 - 1.*t2209*t3576*t9730 - 0.15*(t24*t2690*t9730 - 1.*t2209*t3088*t9730) - 0.183*(-1.*t2209*t2690*t9730 - 1.*t24*t3088*t9730);
  p_output1(37)=0.047*t1473*t9309 - 0.047*t923*t9796 + t2427*t9810 + t24*t3153*t9810 - 1.*t2209*t3576*t9810 - 0.15*(t24*t2690*t9810 - 1.*t2209*t3088*t9810) - 0.183*(-1.*t2209*t2690*t9810 - 1.*t24*t3088*t9810) - 0.11079*t9839;
  p_output1(38)=-0.047*t1381*t605*t923 + t9596 + t9610 + t9613 + t9640 + t9654 + t9685 + 0.047*t1473*t605*t995;
  p_output1(39)=-0.183*t24*t5070 + t3153*t5721 - 0.183*t1342*t2209*t605 + t3576*t9915 - 0.15*(t5830 + t3088*t9915) - 0.183*(t2690*t9915 + t9937);
  p_output1(40)=-0.183*t2209*t605*t651 - 0.183*t24*t9839 + t3576*t9951 + t3153*t9962 - 0.15*(t3088*t9951 + t9975) - 0.183*(t2690*t9951 + t9990);
  p_output1(41)=0.183*t1128*t2209 - 0.183*(t10099 + t10015*t2690) - 0.15*(t10083 + t10015*t3088) + t10022*t3153 + t10015*t3576 - 0.183*t24*t9637;
  p_output1(42)=t10132*t5310 + t10142*t5721 - 0.15*t5940 - 0.183*(-1.*t2690*t5310 + t9937);
  p_output1(43)=t10132*t10160 + t10142*t9962 - 0.15*(-1.*t10160*t3088 + t9975) - 0.183*(-1.*t10160*t2690 + t9990);
  p_output1(44)=t10022*t10142 + t10132*t10245 - 0.183*(t10099 - 1.*t10245*t2690) - 0.15*(t10083 - 1.*t10245*t3088);
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



