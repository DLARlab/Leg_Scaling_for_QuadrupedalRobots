/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:14:03 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RRfoot.h"

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
  double t836;
  double t1117;
  double t974;
  double t1091;
  double t1163;
  double t909;
  double t1101;
  double t1271;
  double t1273;
  double t1435;
  double t1942;
  double t2091;
  double t2096;
  double t771;
  double t2345;
  double t93;
  double t2405;
  double t2447;
  double t2475;
  double t2548;
  double t2553;
  double t2623;
  double t2977;
  double t3084;
  double t3115;
  double t3169;
  double t3267;
  double t3274;
  double t3305;
  double t116;
  double t117;
  double t610;
  double t697;
  double t916;
  double t920;
  double t1628;
  double t1638;
  double t1639;
  double t1668;
  double t3720;
  double t3804;
  double t3812;
  double t4045;
  double t4088;
  double t4110;
  double t2373;
  double t2386;
  double t2764;
  double t3043;
  double t3069;
  double t4636;
  double t4649;
  double t4650;
  double t3224;
  double t3228;
  double t3229;
  double t4655;
  double t4657;
  double t4658;
  double t4660;
  double t4661;
  double t4662;
  double t4830;
  double t4888;
  double t4938;
  double t5032;
  double t5037;
  double t5041;
  double t5047;
  double t5056;
  double t5150;
  double t5777;
  double t5780;
  double t5794;
  double t5866;
  double t5868;
  double t5870;
  double t5876;
  double t5877;
  double t5880;
  double t6342;
  double t6373;
  double t6406;
  double t6455;
  double t6461;
  double t6464;
  double t6506;
  double t6518;
  double t6530;
  double t6888;
  double t6924;
  double t6925;
  double t6937;
  double t6981;
  double t7004;
  double t7308;
  double t7319;
  double t7333;
  double t2285;
  double t7355;
  double t7376;
  double t8228;
  double t8237;
  double t8322;
  double t9185;
  double t9340;
  double t9396;
  double t9426;
  double t9430;
  double t9433;
  double t9434;
  double t7402;
  double t8365;
  double t8379;
  double t8381;
  double t8386;
  double t8387;
  double t8390;
  double t8397;
  double t8418;
  double t8579;
  double t8766;
  double t8915;
  double t8966;
  double t9027;
  double t9033;
  double t9039;
  double t9563;
  double t9568;
  double t9571;
  double t4665;
  double t9438;
  double t9443;
  double t9649;
  double t9650;
  double t9660;
  double t9661;
  double t9662;
  double t9686;
  double t9692;
  double t9693;
  double t9699;
  double t9704;
  double t9705;
  double t4664;
  double t4666;
  double t9582;
  double t9723;
  double t9724;
  double t9731;
  double t9733;
  double t9735;
  double t9744;
  double t9745;
  double t9747;
  double t9669;
  double t9676;
  double t9766;
  double t9767;
  double t9768;
  double t9712;
  double t9718;
  t836 = Sin(var1[3]);
  t1117 = Cos(var1[3]);
  t974 = Cos(var1[5]);
  t1091 = Sin(var1[4]);
  t1163 = Sin(var1[5]);
  t909 = Sin(var1[12]);
  t1101 = -1.*t974*t836*t1091;
  t1271 = t1117*t1163;
  t1273 = t1101 + t1271;
  t1435 = Cos(var1[12]);
  t1942 = -1.*t1117*t974;
  t2091 = -1.*t836*t1091*t1163;
  t2096 = t1942 + t2091;
  t771 = Cos(var1[4]);
  t2345 = Sin(var1[13]);
  t93 = Cos(var1[13]);
  t2405 = t1435*t1273;
  t2447 = -1.*t909*t2096;
  t2475 = t2405 + t2447;
  t2548 = Cos(var1[14]);
  t2553 = -1.*t2548;
  t2623 = 1. + t2553;
  t2977 = Sin(var1[14]);
  t3084 = -1.*t771*t2345*t836;
  t3115 = t93*t2475;
  t3169 = t3084 + t3115;
  t3267 = -1.*t93*t771*t836;
  t3274 = -1.*t2345*t2475;
  t3305 = t3267 + t3274;
  t116 = -1.*t93;
  t117 = 1. + t116;
  t610 = -0.183*t117;
  t697 = 0. + t610;
  t916 = 0.047*t909;
  t920 = 0. + t916;
  t1628 = -1.*t1435;
  t1638 = 1. + t1628;
  t1639 = -0.047*t1638;
  t1668 = 0. + t1639;
  t3720 = t1117*t974*t1091;
  t3804 = t836*t1163;
  t3812 = t3720 + t3804;
  t4045 = -1.*t974*t836;
  t4088 = t1117*t1091*t1163;
  t4110 = t4045 + t4088;
  t2373 = -0.183*t2345;
  t2386 = 0. + t2373;
  t2764 = -0.1*t2623;
  t3043 = -0.183*t2977;
  t3069 = 0. + t2764 + t3043;
  t4636 = t1435*t3812;
  t4649 = -1.*t909*t4110;
  t4650 = t4636 + t4649;
  t3224 = -0.183*t2623;
  t3228 = 0.1*t2977;
  t3229 = 0. + t3224 + t3228;
  t4655 = t1117*t771*t2345;
  t4657 = t93*t4650;
  t4658 = t4655 + t4657;
  t4660 = t93*t1117*t771;
  t4661 = -1.*t2345*t4650;
  t4662 = t4660 + t4661;
  t4830 = t1435*t1117*t771*t974;
  t4888 = -1.*t1117*t771*t909*t1163;
  t4938 = t4830 + t4888;
  t5032 = -1.*t1117*t2345*t1091;
  t5037 = t93*t4938;
  t5041 = t5032 + t5037;
  t5047 = -1.*t93*t1117*t1091;
  t5056 = -1.*t2345*t4938;
  t5150 = t5047 + t5056;
  t5777 = t1435*t771*t974*t836;
  t5780 = -1.*t771*t909*t836*t1163;
  t5794 = t5777 + t5780;
  t5866 = -1.*t2345*t836*t1091;
  t5868 = t93*t5794;
  t5870 = t5866 + t5868;
  t5876 = -1.*t93*t836*t1091;
  t5877 = -1.*t2345*t5794;
  t5880 = t5876 + t5877;
  t6342 = -1.*t1435*t974*t1091;
  t6373 = t909*t1091*t1163;
  t6406 = t6342 + t6373;
  t6455 = -1.*t771*t2345;
  t6461 = t93*t6406;
  t6464 = t6455 + t6461;
  t6506 = -1.*t93*t771;
  t6518 = -1.*t2345*t6406;
  t6530 = t6506 + t6518;
  t6888 = t974*t836;
  t6924 = -1.*t1117*t1091*t1163;
  t6925 = t6888 + t6924;
  t6937 = -1.*t909*t3812;
  t6981 = t1435*t6925;
  t7004 = t6937 + t6981;
  t7308 = t974*t836*t1091;
  t7319 = -1.*t1117*t1163;
  t7333 = t7308 + t7319;
  t2285 = t1435*t2096;
  t7355 = -1.*t909*t7333;
  t7376 = t7355 + t2285;
  t8228 = -1.*t771*t974*t909;
  t8237 = -1.*t1435*t771*t1163;
  t8322 = t8228 + t8237;
  t9185 = -1.*t1435*t4110;
  t9340 = t6937 + t9185;
  t9396 = t1117*t974;
  t9426 = t836*t1091*t1163;
  t9430 = t9396 + t9426;
  t9433 = -1.*t1435*t9430;
  t9434 = t7355 + t9433;
  t7402 = t1435*t7333;
  t8365 = t2386*t8322;
  t8379 = t93*t3069*t8322;
  t8381 = -1.*t2345*t3229*t8322;
  t8386 = t1435*t771*t974;
  t8387 = -1.*t771*t909*t1163;
  t8390 = t8386 + t8387;
  t8397 = -0.08953*t8390;
  t8418 = -1.*t2548*t2345*t8322;
  t8579 = -1.*t93*t2977*t8322;
  t8766 = t8418 + t8579;
  t8915 = -0.183*t8766;
  t8966 = t93*t2548*t8322;
  t9027 = -1.*t2345*t2977*t8322;
  t9033 = t8966 + t9027;
  t9039 = -0.2*t9033;
  t9563 = -1.*t1117*t771*t2345;
  t9568 = -1.*t93*t4650;
  t9571 = t9563 + t9568;
  t4665 = t2548*t4662;
  t9438 = -1.*t909*t9430;
  t9443 = t7402 + t9438;
  t9649 = -1.*t93*t9443;
  t9650 = t3084 + t9649;
  t9660 = t93*t771*t836;
  t9661 = -1.*t2345*t9443;
  t9662 = t9660 + t9661;
  t9686 = t2345*t1091;
  t9692 = -1.*t93*t8390;
  t9693 = t9686 + t9692;
  t9699 = -1.*t93*t1091;
  t9704 = -1.*t2345*t8390;
  t9705 = t9699 + t9704;
  t4664 = -1.*t2977*t4658;
  t4666 = t4664 + t4665;
  t9582 = -1.*t2977*t4662;
  t9723 = -0.183*t2548;
  t9724 = -0.1*t2977;
  t9731 = t9723 + t9724;
  t9733 = 0.1*t2548;
  t9735 = t9733 + t3043;
  t9744 = t771*t2345*t836;
  t9745 = t93*t9443;
  t9747 = t9744 + t9745;
  t9669 = t2548*t9662;
  t9676 = -1.*t2977*t9662;
  t9766 = -1.*t2345*t1091;
  t9767 = t93*t8390;
  t9768 = t9766 + t9767;
  t9712 = t2548*t9705;
  t9718 = -1.*t2977*t9705;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t1668*t2096 + t2386*t2475 + t3069*t3169 + t3229*t3305 - 0.183*(-1.*t2977*t3169 + t2548*t3305) - 0.2*(t2548*t3169 + t2977*t3305) - 1.*t697*t771*t836 - 0.08953*(t2285 + t1273*t909) + t1273*t920;
  p_output1(10)=t1668*t4110 + t2386*t4650 + t3069*t4658 + t3229*t4662 - 0.2*(t2548*t4658 + t2977*t4662) - 0.183*t4666 + t1117*t697*t771 - 0.08953*(t1435*t4110 + t3812*t909) + t3812*t920;
  p_output1(11)=0;
  p_output1(12)=t2386*t4938 + t3069*t5041 + t3229*t5150 - 0.183*(-1.*t2977*t5041 + t2548*t5150) - 0.2*(t2548*t5041 + t2977*t5150) - 1.*t1091*t1117*t697 + t1117*t1163*t1668*t771 + t1117*t771*t920*t974 - 0.08953*(t1117*t1163*t1435*t771 + t1117*t771*t909*t974);
  p_output1(13)=t2386*t5794 + t3069*t5870 + t3229*t5880 - 0.183*(-1.*t2977*t5870 + t2548*t5880) - 0.2*(t2548*t5870 + t2977*t5880) - 1.*t1091*t697*t836 + t1163*t1668*t771*t836 + t771*t836*t920*t974 - 0.08953*(t1163*t1435*t771*t836 + t771*t836*t909*t974);
  p_output1(14)=-1.*t1091*t1163*t1668 + t2386*t6406 + t3069*t6464 + t3229*t6530 - 0.183*(-1.*t2977*t6464 + t2548*t6530) - 0.2*(t2548*t6464 + t2977*t6530) - 1.*t697*t771 - 1.*t1091*t920*t974 - 0.08953*(-1.*t1091*t1163*t1435 - 1.*t1091*t909*t974);
  p_output1(15)=t1668*t3812 + t2386*t7004 - 1.*t2345*t3229*t7004 - 0.08953*(t4636 + t6925*t909) + t6925*t920 + t3069*t7004*t93 - 0.2*(-1.*t2345*t2977*t7004 + t2548*t7004*t93) - 0.183*(-1.*t2345*t2548*t7004 - 1.*t2977*t7004*t93);
  p_output1(16)=t1668*t7333 + t2386*t7376 - 1.*t2345*t3229*t7376 - 0.08953*(t7402 + t2096*t909) + t2096*t920 + t3069*t7376*t93 - 0.2*(-1.*t2345*t2977*t7376 + t2548*t7376*t93) - 0.183*(-1.*t2345*t2548*t7376 - 1.*t2977*t7376*t93);
  p_output1(17)=t8365 + t8379 + t8381 + t8397 + t8915 + t9039 - 1.*t1163*t771*t920 + t1668*t771*t974;
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
  p_output1(36)=0.047*t1435*t3812 - 0.08953*t4650 - 0.047*t4110*t909 + t2386*t9340 - 1.*t2345*t3229*t9340 + t3069*t93*t9340 - 0.2*(-1.*t2345*t2977*t9340 + t2548*t93*t9340) - 0.183*(-1.*t2345*t2548*t9340 - 1.*t2977*t93*t9340);
  p_output1(37)=0.047*t1435*t7333 - 0.047*t909*t9430 + t2386*t9434 - 1.*t2345*t3229*t9434 + t3069*t93*t9434 - 0.2*(-1.*t2345*t2977*t9434 + t2548*t93*t9434) - 0.183*(-1.*t2345*t2548*t9434 - 1.*t2977*t93*t9434) - 0.08953*t9443;
  p_output1(38)=t8365 + t8379 + t8381 + t8397 + t8915 + t9039 - 0.047*t1163*t771*t909 + 0.047*t1435*t771*t974;
  p_output1(39)=t3069*t4662 - 0.183*t1117*t2345*t771 - 0.183*t4650*t93 + t3229*t9571 - 0.2*(t4665 + t2977*t9571) - 0.183*(t2548*t9571 + t9582);
  p_output1(40)=-0.183*t2345*t771*t836 - 0.183*t93*t9443 + t3229*t9650 + t3069*t9662 - 0.2*(t2977*t9650 + t9669) - 0.183*(t2548*t9650 + t9676);
  p_output1(41)=0.183*t1091*t2345 - 0.183*t8390*t93 + t3229*t9693 + t3069*t9705 - 0.2*(t2977*t9693 + t9712) - 0.183*(t2548*t9693 + t9718);
  p_output1(42)=-0.2*t4666 - 0.183*(-1.*t2548*t4658 + t9582) + t4658*t9731 + t4662*t9735;
  p_output1(43)=t9662*t9735 + t9731*t9747 - 0.183*(t9676 - 1.*t2548*t9747) - 0.2*(t9669 - 1.*t2977*t9747);
  p_output1(44)=t9705*t9735 + t9731*t9768 - 0.183*(t9718 - 1.*t2548*t9768) - 0.2*(t9712 - 1.*t2977*t9768);
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


       
Eigen::Matrix<double,3,18> Jp_RRfoot(const Eigen::Matrix<double,18,1> &var1)
//void Jp_RRfoot(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



