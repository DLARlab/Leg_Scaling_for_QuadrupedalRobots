/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:19:11 GMT-05:00
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
  double t409;
  double t943;
  double t825;
  double t883;
  double t954;
  double t519;
  double t907;
  double t1086;
  double t1114;
  double t1273;
  double t1539;
  double t1574;
  double t1607;
  double t382;
  double t2292;
  double t95;
  double t2330;
  double t2333;
  double t2412;
  double t2603;
  double t2637;
  double t2639;
  double t2688;
  double t3008;
  double t3015;
  double t3039;
  double t3373;
  double t3409;
  double t3436;
  double t113;
  double t145;
  double t270;
  double t287;
  double t586;
  double t691;
  double t1333;
  double t1345;
  double t1399;
  double t1434;
  double t3857;
  double t3860;
  double t3863;
  double t3986;
  double t3992;
  double t4028;
  double t2304;
  double t2326;
  double t2670;
  double t2798;
  double t2984;
  double t4160;
  double t4215;
  double t4256;
  double t3132;
  double t3226;
  double t3366;
  double t4299;
  double t4312;
  double t4344;
  double t4398;
  double t4486;
  double t4491;
  double t4849;
  double t4877;
  double t4931;
  double t4961;
  double t4981;
  double t5009;
  double t5361;
  double t5374;
  double t5413;
  double t6146;
  double t6190;
  double t6250;
  double t6280;
  double t6286;
  double t6367;
  double t6546;
  double t6570;
  double t6649;
  double t7158;
  double t7159;
  double t7162;
  double t7167;
  double t7169;
  double t7174;
  double t7179;
  double t7181;
  double t7184;
  double t7222;
  double t7224;
  double t7234;
  double t7328;
  double t7335;
  double t7349;
  double t7764;
  double t7768;
  double t7776;
  double t2107;
  double t7789;
  double t7790;
  double t8077;
  double t8115;
  double t8152;
  double t8529;
  double t8617;
  double t8861;
  double t8870;
  double t8900;
  double t8913;
  double t8953;
  double t7824;
  double t8162;
  double t8171;
  double t8196;
  double t8198;
  double t8199;
  double t8236;
  double t8267;
  double t8289;
  double t8300;
  double t8304;
  double t8339;
  double t8340;
  double t8349;
  double t8379;
  double t8407;
  double t9160;
  double t9177;
  double t9192;
  double t4515;
  double t9081;
  double t9084;
  double t9386;
  double t9393;
  double t9430;
  double t9433;
  double t9443;
  double t9593;
  double t9607;
  double t9611;
  double t9644;
  double t9667;
  double t9687;
  double t4509;
  double t4554;
  double t9347;
  double t9787;
  double t9794;
  double t9804;
  double t9813;
  double t9814;
  double t9894;
  double t9896;
  double t9897;
  double t9481;
  double t9523;
  double t10121;
  double t10127;
  double t10130;
  double t9727;
  double t9769;
  t409 = Sin(var1[3]);
  t943 = Cos(var1[3]);
  t825 = Cos(var1[5]);
  t883 = Sin(var1[4]);
  t954 = Sin(var1[5]);
  t519 = Sin(var1[12]);
  t907 = -1.*t825*t409*t883;
  t1086 = t943*t954;
  t1114 = t907 + t1086;
  t1273 = Cos(var1[12]);
  t1539 = -1.*t943*t825;
  t1574 = -1.*t409*t883*t954;
  t1607 = t1539 + t1574;
  t382 = Cos(var1[4]);
  t2292 = Sin(var1[13]);
  t95 = Cos(var1[13]);
  t2330 = t1273*t1114;
  t2333 = -1.*t519*t1607;
  t2412 = t2330 + t2333;
  t2603 = Cos(var1[14]);
  t2637 = -1.*t2603;
  t2639 = 1. + t2637;
  t2688 = Sin(var1[14]);
  t3008 = -1.*t382*t2292*t409;
  t3015 = t95*t2412;
  t3039 = t3008 + t3015;
  t3373 = -1.*t95*t382*t409;
  t3409 = -1.*t2292*t2412;
  t3436 = t3373 + t3409;
  t113 = -1.*t95;
  t145 = 1. + t113;
  t270 = -0.183*t145;
  t287 = 0. + t270;
  t586 = 0.047*t519;
  t691 = 0. + t586;
  t1333 = -1.*t1273;
  t1345 = 1. + t1333;
  t1399 = -0.047*t1345;
  t1434 = 0. + t1399;
  t3857 = t943*t825*t883;
  t3860 = t409*t954;
  t3863 = t3857 + t3860;
  t3986 = -1.*t825*t409;
  t3992 = t943*t883*t954;
  t4028 = t3986 + t3992;
  t2304 = -0.183*t2292;
  t2326 = 0. + t2304;
  t2670 = -0.15*t2639;
  t2798 = -0.183*t2688;
  t2984 = 0. + t2670 + t2798;
  t4160 = t1273*t3863;
  t4215 = -1.*t519*t4028;
  t4256 = t4160 + t4215;
  t3132 = -0.183*t2639;
  t3226 = 0.15*t2688;
  t3366 = 0. + t3132 + t3226;
  t4299 = t943*t382*t2292;
  t4312 = t95*t4256;
  t4344 = t4299 + t4312;
  t4398 = t95*t943*t382;
  t4486 = -1.*t2292*t4256;
  t4491 = t4398 + t4486;
  t4849 = t1273*t943*t382*t825;
  t4877 = -1.*t943*t382*t519*t954;
  t4931 = t4849 + t4877;
  t4961 = -1.*t943*t2292*t883;
  t4981 = t95*t4931;
  t5009 = t4961 + t4981;
  t5361 = -1.*t95*t943*t883;
  t5374 = -1.*t2292*t4931;
  t5413 = t5361 + t5374;
  t6146 = t1273*t382*t825*t409;
  t6190 = -1.*t382*t519*t409*t954;
  t6250 = t6146 + t6190;
  t6280 = -1.*t2292*t409*t883;
  t6286 = t95*t6250;
  t6367 = t6280 + t6286;
  t6546 = -1.*t95*t409*t883;
  t6570 = -1.*t2292*t6250;
  t6649 = t6546 + t6570;
  t7158 = -1.*t1273*t825*t883;
  t7159 = t519*t883*t954;
  t7162 = t7158 + t7159;
  t7167 = -1.*t382*t2292;
  t7169 = t95*t7162;
  t7174 = t7167 + t7169;
  t7179 = -1.*t95*t382;
  t7181 = -1.*t2292*t7162;
  t7184 = t7179 + t7181;
  t7222 = t825*t409;
  t7224 = -1.*t943*t883*t954;
  t7234 = t7222 + t7224;
  t7328 = -1.*t519*t3863;
  t7335 = t1273*t7234;
  t7349 = t7328 + t7335;
  t7764 = t825*t409*t883;
  t7768 = -1.*t943*t954;
  t7776 = t7764 + t7768;
  t2107 = t1273*t1607;
  t7789 = -1.*t519*t7776;
  t7790 = t7789 + t2107;
  t8077 = -1.*t382*t825*t519;
  t8115 = -1.*t1273*t382*t954;
  t8152 = t8077 + t8115;
  t8529 = -1.*t1273*t4028;
  t8617 = t7328 + t8529;
  t8861 = t943*t825;
  t8870 = t409*t883*t954;
  t8900 = t8861 + t8870;
  t8913 = -1.*t1273*t8900;
  t8953 = t7789 + t8913;
  t7824 = t1273*t7776;
  t8162 = t2326*t8152;
  t8171 = t95*t2984*t8152;
  t8196 = -1.*t2292*t3366*t8152;
  t8198 = t1273*t382*t825;
  t8199 = -1.*t382*t519*t954;
  t8236 = t8198 + t8199;
  t8267 = -0.11079*t8236;
  t8289 = -1.*t2603*t2292*t8152;
  t8300 = -1.*t95*t2688*t8152;
  t8304 = t8289 + t8300;
  t8339 = -0.183*t8304;
  t8340 = t95*t2603*t8152;
  t8349 = -1.*t2292*t2688*t8152;
  t8379 = t8340 + t8349;
  t8407 = -0.3*t8379;
  t9160 = -1.*t943*t382*t2292;
  t9177 = -1.*t95*t4256;
  t9192 = t9160 + t9177;
  t4515 = t2603*t4491;
  t9081 = -1.*t519*t8900;
  t9084 = t7824 + t9081;
  t9386 = -1.*t95*t9084;
  t9393 = t3008 + t9386;
  t9430 = t95*t382*t409;
  t9433 = -1.*t2292*t9084;
  t9443 = t9430 + t9433;
  t9593 = t2292*t883;
  t9607 = -1.*t95*t8236;
  t9611 = t9593 + t9607;
  t9644 = -1.*t95*t883;
  t9667 = -1.*t2292*t8236;
  t9687 = t9644 + t9667;
  t4509 = -1.*t2688*t4344;
  t4554 = t4509 + t4515;
  t9347 = -1.*t2688*t4491;
  t9787 = -0.183*t2603;
  t9794 = -0.15*t2688;
  t9804 = t9787 + t9794;
  t9813 = 0.15*t2603;
  t9814 = t9813 + t2798;
  t9894 = t382*t2292*t409;
  t9896 = t95*t9084;
  t9897 = t9894 + t9896;
  t9481 = t2603*t9443;
  t9523 = -1.*t2688*t9443;
  t10121 = -1.*t2292*t883;
  t10127 = t95*t8236;
  t10130 = t10121 + t10127;
  t9727 = t2603*t9687;
  t9769 = -1.*t2688*t9687;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t1434*t1607 + t2326*t2412 + t2984*t3039 + t3366*t3436 - 0.183*(-1.*t2688*t3039 + t2603*t3436) - 0.3*(t2603*t3039 + t2688*t3436) - 1.*t287*t382*t409 - 0.11079*(t2107 + t1114*t519) + t1114*t691;
  p_output1(10)=t1434*t4028 + t2326*t4256 + t2984*t4344 + t3366*t4491 - 0.3*(t2603*t4344 + t2688*t4491) - 0.183*t4554 - 0.11079*(t1273*t4028 + t3863*t519) + t3863*t691 + t287*t382*t943;
  p_output1(11)=0;
  p_output1(12)=t2326*t4931 + t2984*t5009 + t3366*t5413 - 0.183*(-1.*t2688*t5009 + t2603*t5413) - 0.3*(t2603*t5009 + t2688*t5413) + t382*t691*t825*t943 - 1.*t287*t883*t943 + t1434*t382*t943*t954 - 0.11079*(t382*t519*t825*t943 + t1273*t382*t943*t954);
  p_output1(13)=t2326*t6250 + t2984*t6367 + t3366*t6649 - 0.183*(-1.*t2688*t6367 + t2603*t6649) - 0.3*(t2603*t6367 + t2688*t6649) + t382*t409*t691*t825 - 1.*t287*t409*t883 + t1434*t382*t409*t954 - 0.11079*(t382*t409*t519*t825 + t1273*t382*t409*t954);
  p_output1(14)=-1.*t287*t382 + t2326*t7162 + t2984*t7174 + t3366*t7184 - 0.183*(-1.*t2688*t7174 + t2603*t7184) - 0.3*(t2603*t7174 + t2688*t7184) - 1.*t691*t825*t883 - 1.*t1434*t883*t954 - 0.11079*(-1.*t519*t825*t883 - 1.*t1273*t883*t954);
  p_output1(15)=t1434*t3863 + t691*t7234 - 0.11079*(t4160 + t519*t7234) + t2326*t7349 - 1.*t2292*t3366*t7349 + t2984*t7349*t95 - 0.3*(-1.*t2292*t2688*t7349 + t2603*t7349*t95) - 0.183*(-1.*t2292*t2603*t7349 - 1.*t2688*t7349*t95);
  p_output1(16)=t1607*t691 + t1434*t7776 + t2326*t7790 - 1.*t2292*t3366*t7790 - 0.11079*(t1607*t519 + t7824) + t2984*t7790*t95 - 0.3*(-1.*t2292*t2688*t7790 + t2603*t7790*t95) - 0.183*(-1.*t2292*t2603*t7790 - 1.*t2688*t7790*t95);
  p_output1(17)=t8162 + t8171 + t8196 + t1434*t382*t825 + t8267 + t8339 + t8407 - 1.*t382*t691*t954;
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
  p_output1(36)=0.047*t1273*t3863 - 0.11079*t4256 - 0.047*t4028*t519 + t2326*t8617 - 1.*t2292*t3366*t8617 + t2984*t8617*t95 - 0.3*(-1.*t2292*t2688*t8617 + t2603*t8617*t95) - 0.183*(-1.*t2292*t2603*t8617 - 1.*t2688*t8617*t95);
  p_output1(37)=0.047*t1273*t7776 - 0.047*t519*t8900 + t2326*t8953 - 1.*t2292*t3366*t8953 - 0.11079*t9084 + t2984*t8953*t95 - 0.3*(-1.*t2292*t2688*t8953 + t2603*t8953*t95) - 0.183*(-1.*t2292*t2603*t8953 - 1.*t2688*t8953*t95);
  p_output1(38)=t8162 + t8171 + t8196 + 0.047*t1273*t382*t825 + t8267 + t8339 + t8407 - 0.047*t382*t519*t954;
  p_output1(39)=t2984*t4491 + t3366*t9192 - 0.3*(t4515 + t2688*t9192) - 0.183*(t2603*t9192 + t9347) - 0.183*t2292*t382*t943 - 0.183*t4256*t95;
  p_output1(40)=-0.183*t2292*t382*t409 + t3366*t9393 + t2984*t9443 - 0.3*(t2688*t9393 + t9481) - 0.183*t9084*t95 - 0.183*(t2603*t9393 + t9523);
  p_output1(41)=0.183*t2292*t883 - 0.183*t8236*t95 + t3366*t9611 + t2984*t9687 - 0.3*(t2688*t9611 + t9727) - 0.183*(t2603*t9611 + t9769);
  p_output1(42)=-0.3*t4554 - 0.183*(-1.*t2603*t4344 + t9347) + t4344*t9804 + t4491*t9814;
  p_output1(43)=t9443*t9814 + t9804*t9897 - 0.183*(t9523 - 1.*t2603*t9897) - 0.3*(t9481 - 1.*t2688*t9897);
  p_output1(44)=-0.3*(-1.*t10130*t2688 + t9727) - 0.183*(-1.*t10130*t2603 + t9769) + t10130*t9804 + t9687*t9814;
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



