/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:19:04 GMT-05:00
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
  double t381;
  double t919;
  double t762;
  double t881;
  double t1073;
  double t542;
  double t898;
  double t1193;
  double t1195;
  double t1289;
  double t1597;
  double t1753;
  double t1767;
  double t319;
  double t2233;
  double t157;
  double t2378;
  double t2604;
  double t2607;
  double t2736;
  double t2876;
  double t2900;
  double t2923;
  double t2991;
  double t3096;
  double t3099;
  double t3530;
  double t3531;
  double t3532;
  double t190;
  double t204;
  double t207;
  double t295;
  double t625;
  double t645;
  double t1368;
  double t1404;
  double t1430;
  double t1490;
  double t3897;
  double t3900;
  double t3968;
  double t3985;
  double t3993;
  double t3999;
  double t2327;
  double t2341;
  double t2921;
  double t2948;
  double t2952;
  double t4111;
  double t4367;
  double t4383;
  double t3158;
  double t3508;
  double t3514;
  double t4750;
  double t4774;
  double t4787;
  double t4798;
  double t4808;
  double t4894;
  double t5397;
  double t5404;
  double t5406;
  double t5523;
  double t5529;
  double t5547;
  double t5728;
  double t6121;
  double t6202;
  double t7539;
  double t7662;
  double t7691;
  double t7728;
  double t7734;
  double t7735;
  double t7740;
  double t7747;
  double t7750;
  double t8125;
  double t8149;
  double t8150;
  double t8215;
  double t8241;
  double t8286;
  double t8371;
  double t8376;
  double t8411;
  double t8780;
  double t8818;
  double t8839;
  double t8887;
  double t8890;
  double t8929;
  double t9158;
  double t9162;
  double t9165;
  double t2079;
  double t9209;
  double t9216;
  double t9396;
  double t9402;
  double t9412;
  double t9541;
  double t9542;
  double t9677;
  double t9678;
  double t9683;
  double t9693;
  double t9694;
  double t9236;
  double t9415;
  double t9418;
  double t9419;
  double t9420;
  double t9428;
  double t9431;
  double t9444;
  double t9469;
  double t9476;
  double t9481;
  double t9492;
  double t9498;
  double t9500;
  double t9503;
  double t9506;
  double t9824;
  double t9855;
  double t9874;
  double t4942;
  double t9755;
  double t9756;
  double t9925;
  double t9928;
  double t9932;
  double t9933;
  double t9934;
  double t9981;
  double t9985;
  double t9986;
  double t9994;
  double t9997;
  double t10000;
  double t4926;
  double t5012;
  double t9908;
  double t10033;
  double t10037;
  double t10038;
  double t10046;
  double t10048;
  double t10070;
  double t10077;
  double t10095;
  double t9940;
  double t9947;
  double t10138;
  double t10144;
  double t10145;
  double t10003;
  double t10010;
  t381 = Sin(var1[3]);
  t919 = Cos(var1[3]);
  t762 = Cos(var1[5]);
  t881 = Sin(var1[4]);
  t1073 = Sin(var1[5]);
  t542 = Sin(var1[15]);
  t898 = -1.*t762*t381*t881;
  t1193 = t919*t1073;
  t1195 = t898 + t1193;
  t1289 = Cos(var1[15]);
  t1597 = -1.*t919*t762;
  t1753 = -1.*t381*t881*t1073;
  t1767 = t1597 + t1753;
  t319 = Cos(var1[4]);
  t2233 = Sin(var1[16]);
  t157 = Cos(var1[16]);
  t2378 = t1289*t1195;
  t2604 = -1.*t542*t1767;
  t2607 = t2378 + t2604;
  t2736 = Cos(var1[17]);
  t2876 = -1.*t2736;
  t2900 = 1. + t2876;
  t2923 = Sin(var1[17]);
  t2991 = -1.*t319*t2233*t381;
  t3096 = t157*t2607;
  t3099 = t2991 + t3096;
  t3530 = -1.*t157*t319*t381;
  t3531 = -1.*t2233*t2607;
  t3532 = t3530 + t3531;
  t190 = -1.*t157;
  t204 = 1. + t190;
  t207 = -0.183*t204;
  t295 = 0. + t207;
  t625 = -0.047*t542;
  t645 = 0. + t625;
  t1368 = -1.*t1289;
  t1404 = 1. + t1368;
  t1430 = 0.047*t1404;
  t1490 = 0. + t1430;
  t3897 = t919*t762*t881;
  t3900 = t381*t1073;
  t3968 = t3897 + t3900;
  t3985 = -1.*t762*t381;
  t3993 = t919*t881*t1073;
  t3999 = t3985 + t3993;
  t2327 = -0.183*t2233;
  t2341 = 0. + t2327;
  t2921 = -0.15*t2900;
  t2948 = -0.183*t2923;
  t2952 = 0. + t2921 + t2948;
  t4111 = t1289*t3968;
  t4367 = -1.*t542*t3999;
  t4383 = t4111 + t4367;
  t3158 = -0.183*t2900;
  t3508 = 0.15*t2923;
  t3514 = 0. + t3158 + t3508;
  t4750 = t919*t319*t2233;
  t4774 = t157*t4383;
  t4787 = t4750 + t4774;
  t4798 = t157*t919*t319;
  t4808 = -1.*t2233*t4383;
  t4894 = t4798 + t4808;
  t5397 = t1289*t919*t319*t762;
  t5404 = -1.*t919*t319*t542*t1073;
  t5406 = t5397 + t5404;
  t5523 = -1.*t919*t2233*t881;
  t5529 = t157*t5406;
  t5547 = t5523 + t5529;
  t5728 = -1.*t157*t919*t881;
  t6121 = -1.*t2233*t5406;
  t6202 = t5728 + t6121;
  t7539 = t1289*t319*t762*t381;
  t7662 = -1.*t319*t542*t381*t1073;
  t7691 = t7539 + t7662;
  t7728 = -1.*t2233*t381*t881;
  t7734 = t157*t7691;
  t7735 = t7728 + t7734;
  t7740 = -1.*t157*t381*t881;
  t7747 = -1.*t2233*t7691;
  t7750 = t7740 + t7747;
  t8125 = -1.*t1289*t762*t881;
  t8149 = t542*t881*t1073;
  t8150 = t8125 + t8149;
  t8215 = -1.*t319*t2233;
  t8241 = t157*t8150;
  t8286 = t8215 + t8241;
  t8371 = -1.*t157*t319;
  t8376 = -1.*t2233*t8150;
  t8411 = t8371 + t8376;
  t8780 = t762*t381;
  t8818 = -1.*t919*t881*t1073;
  t8839 = t8780 + t8818;
  t8887 = -1.*t542*t3968;
  t8890 = t1289*t8839;
  t8929 = t8887 + t8890;
  t9158 = t762*t381*t881;
  t9162 = -1.*t919*t1073;
  t9165 = t9158 + t9162;
  t2079 = t1289*t1767;
  t9209 = -1.*t542*t9165;
  t9216 = t9209 + t2079;
  t9396 = -1.*t319*t762*t542;
  t9402 = -1.*t1289*t319*t1073;
  t9412 = t9396 + t9402;
  t9541 = -1.*t1289*t3999;
  t9542 = t8887 + t9541;
  t9677 = t919*t762;
  t9678 = t381*t881*t1073;
  t9683 = t9677 + t9678;
  t9693 = -1.*t1289*t9683;
  t9694 = t9209 + t9693;
  t9236 = t1289*t9165;
  t9415 = t2341*t9412;
  t9418 = t157*t2952*t9412;
  t9419 = -1.*t2233*t3514*t9412;
  t9420 = t1289*t319*t762;
  t9428 = -1.*t319*t542*t1073;
  t9431 = t9420 + t9428;
  t9444 = 0.11079*t9431;
  t9469 = -1.*t2736*t2233*t9412;
  t9476 = -1.*t157*t2923*t9412;
  t9481 = t9469 + t9476;
  t9492 = -0.183*t9481;
  t9498 = t157*t2736*t9412;
  t9500 = -1.*t2233*t2923*t9412;
  t9503 = t9498 + t9500;
  t9506 = -0.15*t9503;
  t9824 = -1.*t919*t319*t2233;
  t9855 = -1.*t157*t4383;
  t9874 = t9824 + t9855;
  t4942 = t2736*t4894;
  t9755 = -1.*t542*t9683;
  t9756 = t9236 + t9755;
  t9925 = -1.*t157*t9756;
  t9928 = t2991 + t9925;
  t9932 = t157*t319*t381;
  t9933 = -1.*t2233*t9756;
  t9934 = t9932 + t9933;
  t9981 = t2233*t881;
  t9985 = -1.*t157*t9431;
  t9986 = t9981 + t9985;
  t9994 = -1.*t157*t881;
  t9997 = -1.*t2233*t9431;
  t10000 = t9994 + t9997;
  t4926 = -1.*t2923*t4787;
  t5012 = t4926 + t4942;
  t9908 = -1.*t2923*t4894;
  t10033 = -0.183*t2736;
  t10037 = -0.15*t2923;
  t10038 = t10033 + t10037;
  t10046 = 0.15*t2736;
  t10048 = t10046 + t2948;
  t10070 = t319*t2233*t381;
  t10077 = t157*t9756;
  t10095 = t10070 + t10077;
  t9940 = t2736*t9934;
  t9947 = -1.*t2923*t9934;
  t10138 = -1.*t2233*t881;
  t10144 = t157*t9431;
  t10145 = t10138 + t10144;
  t10003 = t2736*t10000;
  t10010 = -1.*t2923*t10000;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t1490*t1767 + t2341*t2607 + t2952*t3099 + t3514*t3532 - 0.183*(-1.*t2923*t3099 + t2736*t3532) - 0.15*(t2736*t3099 + t2923*t3532) - 1.*t295*t319*t381 + 0.11079*(t2079 + t1195*t542) + t1195*t645;
  p_output1(10)=t1490*t3999 + t2341*t4383 + t2952*t4787 + t3514*t4894 - 0.15*(t2736*t4787 + t2923*t4894) - 0.183*t5012 + 0.11079*(t1289*t3999 + t3968*t542) + t3968*t645 + t295*t319*t919;
  p_output1(11)=0;
  p_output1(12)=t2341*t5406 + t2952*t5547 + t3514*t6202 - 0.183*(-1.*t2923*t5547 + t2736*t6202) - 0.15*(t2736*t5547 + t2923*t6202) + t1073*t1490*t319*t919 + t319*t645*t762*t919 - 1.*t295*t881*t919 + 0.11079*(t1073*t1289*t319*t919 + t319*t542*t762*t919);
  p_output1(13)=t1073*t1490*t319*t381 + t319*t381*t645*t762 + 0.11079*(t1073*t1289*t319*t381 + t319*t381*t542*t762) + t2341*t7691 + t2952*t7735 + t3514*t7750 - 0.183*(-1.*t2923*t7735 + t2736*t7750) - 0.15*(t2736*t7735 + t2923*t7750) - 1.*t295*t381*t881;
  p_output1(14)=-1.*t295*t319 + t2341*t8150 + t2952*t8286 + t3514*t8411 - 0.183*(-1.*t2923*t8286 + t2736*t8411) - 0.15*(t2736*t8286 + t2923*t8411) - 1.*t1073*t1490*t881 - 1.*t645*t762*t881 + 0.11079*(-1.*t1073*t1289*t881 - 1.*t542*t762*t881);
  p_output1(15)=t1490*t3968 + t645*t8839 + 0.11079*(t4111 + t542*t8839) + t2341*t8929 + t157*t2952*t8929 - 1.*t2233*t3514*t8929 - 0.183*(-1.*t2233*t2736*t8929 - 1.*t157*t2923*t8929) - 0.15*(t157*t2736*t8929 - 1.*t2233*t2923*t8929);
  p_output1(16)=t1767*t645 + t1490*t9165 + t2341*t9216 + t157*t2952*t9216 - 1.*t2233*t3514*t9216 - 0.183*(-1.*t2233*t2736*t9216 - 1.*t157*t2923*t9216) - 0.15*(t157*t2736*t9216 - 1.*t2233*t2923*t9216) + 0.11079*(t1767*t542 + t9236);
  p_output1(17)=-1.*t1073*t319*t645 + t1490*t319*t762 + t9415 + t9418 + t9419 + t9444 + t9492 + t9506;
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
  p_output1(45)=-0.047*t1289*t3968 + 0.11079*t4383 + 0.047*t3999*t542 + t2341*t9542 + t157*t2952*t9542 - 1.*t2233*t3514*t9542 - 0.183*(-1.*t2233*t2736*t9542 - 1.*t157*t2923*t9542) - 0.15*(t157*t2736*t9542 - 1.*t2233*t2923*t9542);
  p_output1(46)=-0.047*t1289*t9165 + 0.047*t542*t9683 + t2341*t9694 + t157*t2952*t9694 - 1.*t2233*t3514*t9694 - 0.183*(-1.*t2233*t2736*t9694 - 1.*t157*t2923*t9694) - 0.15*(t157*t2736*t9694 - 1.*t2233*t2923*t9694) + 0.11079*t9756;
  p_output1(47)=0.047*t1073*t319*t542 - 0.047*t1289*t319*t762 + t9415 + t9418 + t9419 + t9444 + t9492 + t9506;
  p_output1(48)=-0.183*t157*t4383 + t2952*t4894 - 0.183*t2233*t319*t919 + t3514*t9874 - 0.15*(t4942 + t2923*t9874) - 0.183*(t2736*t9874 + t9908);
  p_output1(49)=-0.183*t2233*t319*t381 - 0.183*t157*t9756 + t3514*t9928 + t2952*t9934 - 0.15*(t2923*t9928 + t9940) - 0.183*(t2736*t9928 + t9947);
  p_output1(50)=t10000*t2952 + 0.183*t2233*t881 - 0.183*t157*t9431 + t3514*t9986 - 0.183*(t10010 + t2736*t9986) - 0.15*(t10003 + t2923*t9986);
  p_output1(51)=t10038*t4787 + t10048*t4894 - 0.15*t5012 - 0.183*(-1.*t2736*t4787 + t9908);
  p_output1(52)=t10038*t10095 + t10048*t9934 - 0.15*(-1.*t10095*t2923 + t9940) - 0.183*(-1.*t10095*t2736 + t9947);
  p_output1(53)=t10000*t10048 + t10038*t10145 - 0.183*(t10010 - 1.*t10145*t2736) - 0.15*(t10003 - 1.*t10145*t2923);
}


       
Eigen::Matrix<double,3,18> Jp_RL_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void Jp_RL_calf_joint(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



