/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:51:41 GMT-05:00
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
  double t565;
  double t1055;
  double t937;
  double t985;
  double t1085;
  double t701;
  double t1023;
  double t1159;
  double t1286;
  double t1338;
  double t1690;
  double t1745;
  double t1755;
  double t564;
  double t1865;
  double t134;
  double t2057;
  double t2110;
  double t2126;
  double t2203;
  double t2214;
  double t2215;
  double t2405;
  double t2863;
  double t3219;
  double t3300;
  double t3553;
  double t3709;
  double t3710;
  double t243;
  double t298;
  double t387;
  double t493;
  double t827;
  double t834;
  double t1486;
  double t1548;
  double t1599;
  double t1677;
  double t5067;
  double t5185;
  double t5477;
  double t5720;
  double t5723;
  double t5841;
  double t1961;
  double t2003;
  double t2390;
  double t2407;
  double t2834;
  double t6315;
  double t6362;
  double t6421;
  double t3387;
  double t3449;
  double t3525;
  double t6494;
  double t6529;
  double t6733;
  double t6928;
  double t6976;
  double t7022;
  double t7552;
  double t7798;
  double t7872;
  double t7892;
  double t7921;
  double t7945;
  double t7968;
  double t7988;
  double t7991;
  double t8228;
  double t8278;
  double t8306;
  double t8316;
  double t8332;
  double t8349;
  double t8438;
  double t8447;
  double t8479;
  double t8909;
  double t8911;
  double t8950;
  double t8959;
  double t8960;
  double t8965;
  double t8993;
  double t8994;
  double t8995;
  double t9061;
  double t9063;
  double t9065;
  double t9079;
  double t9080;
  double t9086;
  double t9129;
  double t9133;
  double t9135;
  double t1848;
  double t9144;
  double t9146;
  double t9188;
  double t9195;
  double t9196;
  double t9249;
  double t9268;
  double t9326;
  double t9329;
  double t9330;
  double t9332;
  double t9337;
  double t9158;
  double t9203;
  double t9204;
  double t9206;
  double t9207;
  double t9209;
  double t9213;
  double t9217;
  double t9219;
  double t9221;
  double t9222;
  double t9224;
  double t9225;
  double t9226;
  double t9227;
  double t9230;
  double t9393;
  double t9398;
  double t9401;
  double t7091;
  double t9351;
  double t9352;
  double t9446;
  double t9447;
  double t9450;
  double t9451;
  double t9453;
  double t9499;
  double t9500;
  double t9501;
  double t9510;
  double t9514;
  double t9516;
  double t7066;
  double t7093;
  double t9427;
  double t9542;
  double t9544;
  double t9546;
  double t9548;
  double t9550;
  double t9576;
  double t9583;
  double t9589;
  double t9462;
  double t9471;
  double t9621;
  double t9622;
  double t9624;
  double t9523;
  double t9533;
  t565 = Sin(var1[3]);
  t1055 = Cos(var1[3]);
  t937 = Cos(var1[5]);
  t985 = Sin(var1[4]);
  t1085 = Sin(var1[5]);
  t701 = Sin(var1[9]);
  t1023 = -1.*t937*t565*t985;
  t1159 = t1055*t1085;
  t1286 = t1023 + t1159;
  t1338 = Cos(var1[9]);
  t1690 = -1.*t1055*t937;
  t1745 = -1.*t565*t985*t1085;
  t1755 = t1690 + t1745;
  t564 = Cos(var1[4]);
  t1865 = Sin(var1[10]);
  t134 = Cos(var1[10]);
  t2057 = t1338*t1286;
  t2110 = -1.*t701*t1755;
  t2126 = t2057 + t2110;
  t2203 = Cos(var1[11]);
  t2214 = -1.*t2203;
  t2215 = 1. + t2214;
  t2405 = Sin(var1[11]);
  t2863 = -1.*t564*t1865*t565;
  t3219 = t134*t2126;
  t3300 = t2863 + t3219;
  t3553 = -1.*t134*t564*t565;
  t3709 = -1.*t1865*t2126;
  t3710 = t3553 + t3709;
  t243 = -1.*t134;
  t298 = 1. + t243;
  t387 = 0.183*t298;
  t493 = 0. + t387;
  t827 = -0.047*t701;
  t834 = 0. + t827;
  t1486 = -1.*t1338;
  t1548 = 1. + t1486;
  t1599 = 0.047*t1548;
  t1677 = 0. + t1599;
  t5067 = t1055*t937*t985;
  t5185 = t565*t1085;
  t5477 = t5067 + t5185;
  t5720 = -1.*t937*t565;
  t5723 = t1055*t985*t1085;
  t5841 = t5720 + t5723;
  t1961 = 0.183*t1865;
  t2003 = 0. + t1961;
  t2390 = -0.15*t2215;
  t2407 = 0.183*t2405;
  t2834 = 0. + t2390 + t2407;
  t6315 = t1338*t5477;
  t6362 = -1.*t701*t5841;
  t6421 = t6315 + t6362;
  t3387 = 0.183*t2215;
  t3449 = 0.15*t2405;
  t3525 = 0. + t3387 + t3449;
  t6494 = t1055*t564*t1865;
  t6529 = t134*t6421;
  t6733 = t6494 + t6529;
  t6928 = t134*t1055*t564;
  t6976 = -1.*t1865*t6421;
  t7022 = t6928 + t6976;
  t7552 = t1338*t1055*t564*t937;
  t7798 = -1.*t1055*t564*t701*t1085;
  t7872 = t7552 + t7798;
  t7892 = -1.*t1055*t1865*t985;
  t7921 = t134*t7872;
  t7945 = t7892 + t7921;
  t7968 = -1.*t134*t1055*t985;
  t7988 = -1.*t1865*t7872;
  t7991 = t7968 + t7988;
  t8228 = t1338*t564*t937*t565;
  t8278 = -1.*t564*t701*t565*t1085;
  t8306 = t8228 + t8278;
  t8316 = -1.*t1865*t565*t985;
  t8332 = t134*t8306;
  t8349 = t8316 + t8332;
  t8438 = -1.*t134*t565*t985;
  t8447 = -1.*t1865*t8306;
  t8479 = t8438 + t8447;
  t8909 = -1.*t1338*t937*t985;
  t8911 = t701*t985*t1085;
  t8950 = t8909 + t8911;
  t8959 = -1.*t564*t1865;
  t8960 = t134*t8950;
  t8965 = t8959 + t8960;
  t8993 = -1.*t134*t564;
  t8994 = -1.*t1865*t8950;
  t8995 = t8993 + t8994;
  t9061 = t937*t565;
  t9063 = -1.*t1055*t985*t1085;
  t9065 = t9061 + t9063;
  t9079 = -1.*t701*t5477;
  t9080 = t1338*t9065;
  t9086 = t9079 + t9080;
  t9129 = t937*t565*t985;
  t9133 = -1.*t1055*t1085;
  t9135 = t9129 + t9133;
  t1848 = t1338*t1755;
  t9144 = -1.*t701*t9135;
  t9146 = t9144 + t1848;
  t9188 = -1.*t564*t937*t701;
  t9195 = -1.*t1338*t564*t1085;
  t9196 = t9188 + t9195;
  t9249 = -1.*t1338*t5841;
  t9268 = t9079 + t9249;
  t9326 = t1055*t937;
  t9329 = t565*t985*t1085;
  t9330 = t9326 + t9329;
  t9332 = -1.*t1338*t9330;
  t9337 = t9144 + t9332;
  t9158 = t1338*t9135;
  t9203 = t2003*t9196;
  t9204 = -1.*t1865*t3525*t9196;
  t9206 = t134*t2834*t9196;
  t9207 = t1338*t564*t937;
  t9209 = -1.*t564*t701*t1085;
  t9213 = t9207 + t9209;
  t9217 = 0.13205*t9213;
  t9219 = -1.*t2203*t1865*t9196;
  t9221 = -1.*t134*t2405*t9196;
  t9222 = t9219 + t9221;
  t9224 = 0.183*t9222;
  t9225 = t134*t2203*t9196;
  t9226 = -1.*t1865*t2405*t9196;
  t9227 = t9225 + t9226;
  t9230 = -0.15*t9227;
  t9393 = -1.*t1055*t564*t1865;
  t9398 = -1.*t134*t6421;
  t9401 = t9393 + t9398;
  t7091 = t2203*t7022;
  t9351 = -1.*t701*t9330;
  t9352 = t9158 + t9351;
  t9446 = -1.*t134*t9352;
  t9447 = t2863 + t9446;
  t9450 = t134*t564*t565;
  t9451 = -1.*t1865*t9352;
  t9453 = t9450 + t9451;
  t9499 = t1865*t985;
  t9500 = -1.*t134*t9213;
  t9501 = t9499 + t9500;
  t9510 = -1.*t134*t985;
  t9514 = -1.*t1865*t9213;
  t9516 = t9510 + t9514;
  t7066 = -1.*t2405*t6733;
  t7093 = t7066 + t7091;
  t9427 = -1.*t2405*t7022;
  t9542 = 0.183*t2203;
  t9544 = -0.15*t2405;
  t9546 = t9542 + t9544;
  t9548 = 0.15*t2203;
  t9550 = t9548 + t2407;
  t9576 = t564*t1865*t565;
  t9583 = t134*t9352;
  t9589 = t9576 + t9583;
  t9462 = t2203*t9453;
  t9471 = -1.*t2405*t9453;
  t9621 = -1.*t1865*t985;
  t9622 = t134*t9213;
  t9624 = t9621 + t9622;
  t9523 = t2203*t9516;
  t9533 = -1.*t2405*t9516;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t1677*t1755 + t2003*t2126 + t2834*t3300 + t3525*t3710 + 0.183*(-1.*t2405*t3300 + t2203*t3710) - 0.15*(t2203*t3300 + t2405*t3710) - 1.*t493*t564*t565 + 0.13205*(t1848 + t1286*t701) + t1286*t834;
  p_output1(10)=t1055*t493*t564 + t1677*t5841 + t2003*t6421 + t2834*t6733 + 0.13205*(t1338*t5841 + t5477*t701) + t3525*t7022 - 0.15*(t2203*t6733 + t2405*t7022) + 0.183*t7093 + t5477*t834;
  p_output1(11)=0;
  p_output1(12)=t1055*t1085*t1677*t564 + t2003*t7872 + t2834*t7945 + t3525*t7991 + 0.183*(-1.*t2405*t7945 + t2203*t7991) - 0.15*(t2203*t7945 + t2405*t7991) + t1055*t564*t834*t937 + 0.13205*(t1055*t1085*t1338*t564 + t1055*t564*t701*t937) - 1.*t1055*t493*t985;
  p_output1(13)=t1085*t1677*t564*t565 + t2003*t8306 + t2834*t8349 + t3525*t8479 + 0.183*(-1.*t2405*t8349 + t2203*t8479) - 0.15*(t2203*t8349 + t2405*t8479) + t564*t565*t834*t937 + 0.13205*(t1085*t1338*t564*t565 + t564*t565*t701*t937) - 1.*t493*t565*t985;
  p_output1(14)=-1.*t493*t564 + t2003*t8950 + t2834*t8965 + t3525*t8995 + 0.183*(-1.*t2405*t8965 + t2203*t8995) - 0.15*(t2203*t8965 + t2405*t8995) - 1.*t1085*t1677*t985 - 1.*t834*t937*t985 + 0.13205*(-1.*t1085*t1338*t985 - 1.*t701*t937*t985);
  p_output1(15)=t1677*t5477 + t834*t9065 + 0.13205*(t6315 + t701*t9065) + t2003*t9086 + t134*t2834*t9086 - 1.*t1865*t3525*t9086 + 0.183*(-1.*t1865*t2203*t9086 - 1.*t134*t2405*t9086) - 0.15*(t134*t2203*t9086 - 1.*t1865*t2405*t9086);
  p_output1(16)=t1755*t834 + t1677*t9135 + t2003*t9146 + t134*t2834*t9146 - 1.*t1865*t3525*t9146 + 0.183*(-1.*t1865*t2203*t9146 - 1.*t134*t2405*t9146) - 0.15*(t134*t2203*t9146 - 1.*t1865*t2405*t9146) + 0.13205*(t1755*t701 + t9158);
  p_output1(17)=-1.*t1085*t564*t834 + t9203 + t9204 + t9206 + t9217 + t9224 + t9230 + t1677*t564*t937;
  p_output1(18)=0;
  p_output1(19)=0;
  p_output1(20)=0;
  p_output1(21)=0;
  p_output1(22)=0;
  p_output1(23)=0;
  p_output1(24)=0;
  p_output1(25)=0;
  p_output1(26)=0;
  p_output1(27)=-0.047*t1338*t5477 + 0.13205*t6421 + 0.047*t5841*t701 + t2003*t9268 + t134*t2834*t9268 - 1.*t1865*t3525*t9268 + 0.183*(-1.*t1865*t2203*t9268 - 1.*t134*t2405*t9268) - 0.15*(t134*t2203*t9268 - 1.*t1865*t2405*t9268);
  p_output1(28)=-0.047*t1338*t9135 + 0.047*t701*t9330 + t2003*t9337 + t134*t2834*t9337 - 1.*t1865*t3525*t9337 + 0.183*(-1.*t1865*t2203*t9337 - 1.*t134*t2405*t9337) - 0.15*(t134*t2203*t9337 - 1.*t1865*t2405*t9337) + 0.13205*t9352;
  p_output1(29)=0.047*t1085*t564*t701 + t9203 + t9204 + t9206 + t9217 + t9224 + t9230 - 0.047*t1338*t564*t937;
  p_output1(30)=0.183*t1055*t1865*t564 + 0.183*t134*t6421 + t2834*t7022 + t3525*t9401 - 0.15*(t7091 + t2405*t9401) + 0.183*(t2203*t9401 + t9427);
  p_output1(31)=0.183*t1865*t564*t565 + 0.183*t134*t9352 + t3525*t9447 + t2834*t9453 - 0.15*(t2405*t9447 + t9462) + 0.183*(t2203*t9447 + t9471);
  p_output1(32)=0.183*t134*t9213 + t3525*t9501 + t2834*t9516 - 0.15*(t2405*t9501 + t9523) + 0.183*(t2203*t9501 + t9533) - 0.183*t1865*t985;
  p_output1(33)=-0.15*t7093 + 0.183*(-1.*t2203*t6733 + t9427) + t6733*t9546 + t7022*t9550;
  p_output1(34)=t9453*t9550 + t9546*t9589 + 0.183*(t9471 - 1.*t2203*t9589) - 0.15*(t9462 - 1.*t2405*t9589);
  p_output1(35)=t9516*t9550 + t9546*t9624 + 0.183*(t9533 - 1.*t2203*t9624) - 0.15*(t9523 - 1.*t2405*t9624);
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



