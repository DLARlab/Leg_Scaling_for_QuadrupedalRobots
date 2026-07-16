/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:26:59 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_FLfoot.h"

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
  double t823;
  double t1327;
  double t1283;
  double t1315;
  double t1332;
  double t945;
  double t1322;
  double t1344;
  double t1357;
  double t1382;
  double t1852;
  double t1930;
  double t1934;
  double t415;
  double t2224;
  double t61;
  double t2361;
  double t2366;
  double t2432;
  double t2539;
  double t2703;
  double t2719;
  double t2940;
  double t3156;
  double t3165;
  double t3194;
  double t3680;
  double t3685;
  double t3706;
  double t123;
  double t155;
  double t206;
  double t248;
  double t995;
  double t1227;
  double t1384;
  double t1390;
  double t1827;
  double t1842;
  double t4260;
  double t4289;
  double t4476;
  double t4726;
  double t4739;
  double t4774;
  double t2250;
  double t2267;
  double t2786;
  double t3092;
  double t3149;
  double t5119;
  double t5132;
  double t5181;
  double t3284;
  double t3334;
  double t3631;
  double t5251;
  double t5274;
  double t5275;
  double t5462;
  double t5469;
  double t5480;
  double t5827;
  double t5898;
  double t5916;
  double t5934;
  double t5946;
  double t5952;
  double t6039;
  double t6040;
  double t6043;
  double t6354;
  double t6355;
  double t6361;
  double t6452;
  double t6463;
  double t6470;
  double t6483;
  double t6507;
  double t6526;
  double t7036;
  double t7079;
  double t7081;
  double t7138;
  double t7176;
  double t7188;
  double t7237;
  double t7238;
  double t7272;
  double t7536;
  double t7542;
  double t7543;
  double t7554;
  double t7577;
  double t7622;
  double t7773;
  double t7799;
  double t7803;
  double t2076;
  double t7851;
  double t7857;
  double t8174;
  double t8178;
  double t8261;
  double t8514;
  double t8527;
  double t8710;
  double t8713;
  double t8714;
  double t8723;
  double t8743;
  double t7925;
  double t8270;
  double t8272;
  double t8285;
  double t8329;
  double t8343;
  double t8361;
  double t8362;
  double t8368;
  double t8412;
  double t8416;
  double t8422;
  double t8423;
  double t8476;
  double t8478;
  double t8493;
  double t9056;
  double t9069;
  double t9070;
  double t5603;
  double t8871;
  double t8887;
  double t9186;
  double t9219;
  double t9232;
  double t9235;
  double t9237;
  double t9291;
  double t9297;
  double t9301;
  double t9327;
  double t9341;
  double t9344;
  double t5596;
  double t5641;
  double t9130;
  double t9415;
  double t9422;
  double t9426;
  double t9464;
  double t9474;
  double t9547;
  double t9549;
  double t9551;
  double t9246;
  double t9252;
  double t9610;
  double t9625;
  double t9634;
  double t9366;
  double t9383;
  t823 = Sin(var1[3]);
  t1327 = Cos(var1[3]);
  t1283 = Cos(var1[5]);
  t1315 = Sin(var1[4]);
  t1332 = Sin(var1[5]);
  t945 = Sin(var1[9]);
  t1322 = -1.*t1283*t823*t1315;
  t1344 = t1327*t1332;
  t1357 = t1322 + t1344;
  t1382 = Cos(var1[9]);
  t1852 = -1.*t1327*t1283;
  t1930 = -1.*t823*t1315*t1332;
  t1934 = t1852 + t1930;
  t415 = Cos(var1[4]);
  t2224 = Sin(var1[10]);
  t61 = Cos(var1[10]);
  t2361 = t1382*t1357;
  t2366 = -1.*t945*t1934;
  t2432 = t2361 + t2366;
  t2539 = Cos(var1[11]);
  t2703 = -1.*t2539;
  t2719 = 1. + t2703;
  t2940 = Sin(var1[11]);
  t3156 = -1.*t415*t2224*t823;
  t3165 = t61*t2432;
  t3194 = t3156 + t3165;
  t3680 = -1.*t61*t415*t823;
  t3685 = -1.*t2224*t2432;
  t3706 = t3680 + t3685;
  t123 = -1.*t61;
  t155 = 1. + t123;
  t206 = 0.183*t155;
  t248 = 0. + t206;
  t995 = -0.047*t945;
  t1227 = 0. + t995;
  t1384 = -1.*t1382;
  t1390 = 1. + t1384;
  t1827 = 0.047*t1390;
  t1842 = 0. + t1827;
  t4260 = t1327*t1283*t1315;
  t4289 = t823*t1332;
  t4476 = t4260 + t4289;
  t4726 = -1.*t1283*t823;
  t4739 = t1327*t1315*t1332;
  t4774 = t4726 + t4739;
  t2250 = 0.183*t2224;
  t2267 = 0. + t2250;
  t2786 = -0.3*t2719;
  t3092 = 0.183*t2940;
  t3149 = 0. + t2786 + t3092;
  t5119 = t1382*t4476;
  t5132 = -1.*t945*t4774;
  t5181 = t5119 + t5132;
  t3284 = 0.183*t2719;
  t3334 = 0.3*t2940;
  t3631 = 0. + t3284 + t3334;
  t5251 = t1327*t415*t2224;
  t5274 = t61*t5181;
  t5275 = t5251 + t5274;
  t5462 = t61*t1327*t415;
  t5469 = -1.*t2224*t5181;
  t5480 = t5462 + t5469;
  t5827 = t1382*t1327*t415*t1283;
  t5898 = -1.*t1327*t415*t945*t1332;
  t5916 = t5827 + t5898;
  t5934 = -1.*t1327*t2224*t1315;
  t5946 = t61*t5916;
  t5952 = t5934 + t5946;
  t6039 = -1.*t61*t1327*t1315;
  t6040 = -1.*t2224*t5916;
  t6043 = t6039 + t6040;
  t6354 = t1382*t415*t1283*t823;
  t6355 = -1.*t415*t945*t823*t1332;
  t6361 = t6354 + t6355;
  t6452 = -1.*t2224*t823*t1315;
  t6463 = t61*t6361;
  t6470 = t6452 + t6463;
  t6483 = -1.*t61*t823*t1315;
  t6507 = -1.*t2224*t6361;
  t6526 = t6483 + t6507;
  t7036 = -1.*t1382*t1283*t1315;
  t7079 = t945*t1315*t1332;
  t7081 = t7036 + t7079;
  t7138 = -1.*t415*t2224;
  t7176 = t61*t7081;
  t7188 = t7138 + t7176;
  t7237 = -1.*t61*t415;
  t7238 = -1.*t2224*t7081;
  t7272 = t7237 + t7238;
  t7536 = t1283*t823;
  t7542 = -1.*t1327*t1315*t1332;
  t7543 = t7536 + t7542;
  t7554 = -1.*t945*t4476;
  t7577 = t1382*t7543;
  t7622 = t7554 + t7577;
  t7773 = t1283*t823*t1315;
  t7799 = -1.*t1327*t1332;
  t7803 = t7773 + t7799;
  t2076 = t1382*t1934;
  t7851 = -1.*t945*t7803;
  t7857 = t7851 + t2076;
  t8174 = -1.*t415*t1283*t945;
  t8178 = -1.*t1382*t415*t1332;
  t8261 = t8174 + t8178;
  t8514 = -1.*t1382*t4774;
  t8527 = t7554 + t8514;
  t8710 = t1327*t1283;
  t8713 = t823*t1315*t1332;
  t8714 = t8710 + t8713;
  t8723 = -1.*t1382*t8714;
  t8743 = t7851 + t8723;
  t7925 = t1382*t7803;
  t8270 = t2267*t8261;
  t8272 = t61*t3149*t8261;
  t8285 = -1.*t2224*t3631*t8261;
  t8329 = t1382*t415*t1283;
  t8343 = -1.*t415*t945*t1332;
  t8361 = t8329 + t8343;
  t8362 = 0.17458*t8361;
  t8368 = -1.*t2539*t2224*t8261;
  t8412 = -1.*t61*t2940*t8261;
  t8416 = t8368 + t8412;
  t8422 = 0.183*t8416;
  t8423 = t61*t2539*t8261;
  t8476 = -1.*t2224*t2940*t8261;
  t8478 = t8423 + t8476;
  t8493 = -0.6*t8478;
  t9056 = -1.*t1327*t415*t2224;
  t9069 = -1.*t61*t5181;
  t9070 = t9056 + t9069;
  t5603 = t2539*t5480;
  t8871 = -1.*t945*t8714;
  t8887 = t7925 + t8871;
  t9186 = -1.*t61*t8887;
  t9219 = t3156 + t9186;
  t9232 = t61*t415*t823;
  t9235 = -1.*t2224*t8887;
  t9237 = t9232 + t9235;
  t9291 = t2224*t1315;
  t9297 = -1.*t61*t8361;
  t9301 = t9291 + t9297;
  t9327 = -1.*t61*t1315;
  t9341 = -1.*t2224*t8361;
  t9344 = t9327 + t9341;
  t5596 = -1.*t2940*t5275;
  t5641 = t5596 + t5603;
  t9130 = -1.*t2940*t5480;
  t9415 = 0.183*t2539;
  t9422 = -0.3*t2940;
  t9426 = t9415 + t9422;
  t9464 = 0.3*t2539;
  t9474 = t9464 + t3092;
  t9547 = t415*t2224*t823;
  t9549 = t61*t8887;
  t9551 = t9547 + t9549;
  t9246 = t2539*t9237;
  t9252 = -1.*t2940*t9237;
  t9610 = -1.*t2224*t1315;
  t9625 = t61*t8361;
  t9634 = t9610 + t9625;
  t9366 = t2539*t9344;
  t9383 = -1.*t2940*t9344;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t1227*t1357 + t1842*t1934 + t2267*t2432 + t3149*t3194 + t3631*t3706 + 0.183*(-1.*t2940*t3194 + t2539*t3706) - 0.6*(t2539*t3194 + t2940*t3706) - 1.*t248*t415*t823 + 0.17458*(t2076 + t1357*t945);
  p_output1(10)=t1327*t248*t415 + t1227*t4476 + t1842*t4774 + t2267*t5181 + t3149*t5275 + t3631*t5480 - 0.6*(t2539*t5275 + t2940*t5480) + 0.183*t5641 + 0.17458*(t1382*t4774 + t4476*t945);
  p_output1(11)=0;
  p_output1(12)=-1.*t1315*t1327*t248 + t1227*t1283*t1327*t415 + t1327*t1332*t1842*t415 + t2267*t5916 + t3149*t5952 + t3631*t6043 + 0.183*(-1.*t2940*t5952 + t2539*t6043) - 0.6*(t2539*t5952 + t2940*t6043) + 0.17458*(t1327*t1332*t1382*t415 + t1283*t1327*t415*t945);
  p_output1(13)=t2267*t6361 + t3149*t6470 + t3631*t6526 + 0.183*(-1.*t2940*t6470 + t2539*t6526) - 0.6*(t2539*t6470 + t2940*t6526) - 1.*t1315*t248*t823 + t1227*t1283*t415*t823 + t1332*t1842*t415*t823 + 0.17458*(t1332*t1382*t415*t823 + t1283*t415*t823*t945);
  p_output1(14)=-1.*t1227*t1283*t1315 - 1.*t1315*t1332*t1842 - 1.*t248*t415 + t2267*t7081 + t3149*t7188 + t3631*t7272 + 0.183*(-1.*t2940*t7188 + t2539*t7272) - 0.6*(t2539*t7188 + t2940*t7272) + 0.17458*(-1.*t1315*t1332*t1382 - 1.*t1283*t1315*t945);
  p_output1(15)=t1842*t4476 + t1227*t7543 + t2267*t7622 - 1.*t2224*t3631*t7622 + t3149*t61*t7622 - 0.6*(-1.*t2224*t2940*t7622 + t2539*t61*t7622) + 0.183*(-1.*t2224*t2539*t7622 - 1.*t2940*t61*t7622) + 0.17458*(t5119 + t7543*t945);
  p_output1(16)=t1227*t1934 + t1842*t7803 + t2267*t7857 - 1.*t2224*t3631*t7857 + t3149*t61*t7857 - 0.6*(-1.*t2224*t2940*t7857 + t2539*t61*t7857) + 0.183*(-1.*t2224*t2539*t7857 - 1.*t2940*t61*t7857) + 0.17458*(t7925 + t1934*t945);
  p_output1(17)=-1.*t1227*t1332*t415 + t1283*t1842*t415 + t8270 + t8272 + t8285 + t8362 + t8422 + t8493;
  p_output1(18)=0;
  p_output1(19)=0;
  p_output1(20)=0;
  p_output1(21)=0;
  p_output1(22)=0;
  p_output1(23)=0;
  p_output1(24)=0;
  p_output1(25)=0;
  p_output1(26)=0;
  p_output1(27)=-0.047*t1382*t4476 + 0.17458*t5181 + t2267*t8527 - 1.*t2224*t3631*t8527 + t3149*t61*t8527 - 0.6*(-1.*t2224*t2940*t8527 + t2539*t61*t8527) + 0.183*(-1.*t2224*t2539*t8527 - 1.*t2940*t61*t8527) + 0.047*t4774*t945;
  p_output1(28)=-0.047*t1382*t7803 + t2267*t8743 - 1.*t2224*t3631*t8743 + t3149*t61*t8743 - 0.6*(-1.*t2224*t2940*t8743 + t2539*t61*t8743) + 0.183*(-1.*t2224*t2539*t8743 - 1.*t2940*t61*t8743) + 0.17458*t8887 + 0.047*t8714*t945;
  p_output1(29)=-0.047*t1283*t1382*t415 + t8270 + t8272 + t8285 + t8362 + t8422 + t8493 + 0.047*t1332*t415*t945;
  p_output1(30)=0.183*t1327*t2224*t415 + t3149*t5480 + 0.183*t5181*t61 + t3631*t9070 - 0.6*(t5603 + t2940*t9070) + 0.183*(t2539*t9070 + t9130);
  p_output1(31)=0.183*t2224*t415*t823 + 0.183*t61*t8887 + t3631*t9219 + t3149*t9237 - 0.6*(t2940*t9219 + t9246) + 0.183*(t2539*t9219 + t9252);
  p_output1(32)=-0.183*t1315*t2224 + 0.183*t61*t8361 + t3631*t9301 + t3149*t9344 - 0.6*(t2940*t9301 + t9366) + 0.183*(t2539*t9301 + t9383);
  p_output1(33)=-0.6*t5641 + 0.183*(-1.*t2539*t5275 + t9130) + t5275*t9426 + t5480*t9474;
  p_output1(34)=t9237*t9474 + t9426*t9551 + 0.183*(t9252 - 1.*t2539*t9551) - 0.6*(t9246 - 1.*t2940*t9551);
  p_output1(35)=t9344*t9474 + t9426*t9634 + 0.183*(t9383 - 1.*t2539*t9634) - 0.6*(t9366 - 1.*t2940*t9634);
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


       
Eigen::Matrix<double,3,18> Jp_FLfoot(const Eigen::Matrix<double,18,1> &var1)
//void Jp_FLfoot(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



