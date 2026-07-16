/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:52:06 GMT-05:00
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
  double t915;
  double t1570;
  double t1409;
  double t1442;
  double t1924;
  double t1215;
  double t1490;
  double t2124;
  double t2134;
  double t2172;
  double t2347;
  double t2395;
  double t2397;
  double t795;
  double t2690;
  double t132;
  double t2744;
  double t2770;
  double t2828;
  double t3250;
  double t3252;
  double t3269;
  double t3304;
  double t3624;
  double t3820;
  double t3951;
  double t4239;
  double t4274;
  double t4278;
  double t153;
  double t155;
  double t268;
  double t740;
  double t1219;
  double t1260;
  double t2198;
  double t2216;
  double t2243;
  double t2293;
  double t5294;
  double t5336;
  double t5500;
  double t5541;
  double t5543;
  double t5576;
  double t2727;
  double t2740;
  double t3301;
  double t3503;
  double t3578;
  double t6030;
  double t6083;
  double t6086;
  double t4188;
  double t4215;
  double t4225;
  double t6237;
  double t6329;
  double t6353;
  double t6388;
  double t6436;
  double t6452;
  double t6786;
  double t6802;
  double t6810;
  double t6846;
  double t6858;
  double t6934;
  double t6940;
  double t6973;
  double t6985;
  double t7401;
  double t7411;
  double t7467;
  double t7500;
  double t7526;
  double t7533;
  double t7541;
  double t7564;
  double t7624;
  double t7827;
  double t7828;
  double t7830;
  double t7953;
  double t7990;
  double t8011;
  double t8032;
  double t8044;
  double t8071;
  double t8221;
  double t8240;
  double t8258;
  double t8379;
  double t8381;
  double t8391;
  double t8593;
  double t8613;
  double t8625;
  double t2463;
  double t8678;
  double t8684;
  double t8795;
  double t8798;
  double t8808;
  double t8889;
  double t8904;
  double t9120;
  double t9132;
  double t9166;
  double t9176;
  double t9188;
  double t8712;
  double t8816;
  double t8817;
  double t8832;
  double t8834;
  double t8841;
  double t8843;
  double t8845;
  double t8847;
  double t8849;
  double t8851;
  double t8856;
  double t8859;
  double t8875;
  double t8876;
  double t8877;
  double t9311;
  double t9312;
  double t9318;
  double t6584;
  double t9208;
  double t9211;
  double t9395;
  double t9397;
  double t9410;
  double t9411;
  double t9412;
  double t9482;
  double t9488;
  double t9497;
  double t9502;
  double t9507;
  double t9508;
  double t6545;
  double t6592;
  double t9348;
  double t9574;
  double t9577;
  double t9582;
  double t9587;
  double t9590;
  double t9609;
  double t9614;
  double t9615;
  double t9424;
  double t9439;
  double t9675;
  double t9678;
  double t9680;
  double t9526;
  double t9537;
  t915 = Sin(var1[3]);
  t1570 = Cos(var1[3]);
  t1409 = Cos(var1[5]);
  t1442 = Sin(var1[4]);
  t1924 = Sin(var1[5]);
  t1215 = Sin(var1[15]);
  t1490 = -1.*t1409*t915*t1442;
  t2124 = t1570*t1924;
  t2134 = t1490 + t2124;
  t2172 = Cos(var1[15]);
  t2347 = -1.*t1570*t1409;
  t2395 = -1.*t915*t1442*t1924;
  t2397 = t2347 + t2395;
  t795 = Cos(var1[4]);
  t2690 = Sin(var1[16]);
  t132 = Cos(var1[16]);
  t2744 = t2172*t2134;
  t2770 = -1.*t1215*t2397;
  t2828 = t2744 + t2770;
  t3250 = Cos(var1[17]);
  t3252 = -1.*t3250;
  t3269 = 1. + t3252;
  t3304 = Sin(var1[17]);
  t3624 = -1.*t795*t2690*t915;
  t3820 = t132*t2828;
  t3951 = t3624 + t3820;
  t4239 = -1.*t132*t795*t915;
  t4274 = -1.*t2690*t2828;
  t4278 = t4239 + t4274;
  t153 = -1.*t132;
  t155 = 1. + t153;
  t268 = -0.183*t155;
  t740 = 0. + t268;
  t1219 = -0.047*t1215;
  t1260 = 0. + t1219;
  t2198 = -1.*t2172;
  t2216 = 1. + t2198;
  t2243 = 0.047*t2216;
  t2293 = 0. + t2243;
  t5294 = t1570*t1409*t1442;
  t5336 = t915*t1924;
  t5500 = t5294 + t5336;
  t5541 = -1.*t1409*t915;
  t5543 = t1570*t1442*t1924;
  t5576 = t5541 + t5543;
  t2727 = -0.183*t2690;
  t2740 = 0. + t2727;
  t3301 = -0.15*t3269;
  t3503 = -0.183*t3304;
  t3578 = 0. + t3301 + t3503;
  t6030 = t2172*t5500;
  t6083 = -1.*t1215*t5576;
  t6086 = t6030 + t6083;
  t4188 = -0.183*t3269;
  t4215 = 0.15*t3304;
  t4225 = 0. + t4188 + t4215;
  t6237 = t1570*t795*t2690;
  t6329 = t132*t6086;
  t6353 = t6237 + t6329;
  t6388 = t132*t1570*t795;
  t6436 = -1.*t2690*t6086;
  t6452 = t6388 + t6436;
  t6786 = t2172*t1570*t795*t1409;
  t6802 = -1.*t1570*t795*t1215*t1924;
  t6810 = t6786 + t6802;
  t6846 = -1.*t1570*t2690*t1442;
  t6858 = t132*t6810;
  t6934 = t6846 + t6858;
  t6940 = -1.*t132*t1570*t1442;
  t6973 = -1.*t2690*t6810;
  t6985 = t6940 + t6973;
  t7401 = t2172*t795*t1409*t915;
  t7411 = -1.*t795*t1215*t915*t1924;
  t7467 = t7401 + t7411;
  t7500 = -1.*t2690*t915*t1442;
  t7526 = t132*t7467;
  t7533 = t7500 + t7526;
  t7541 = -1.*t132*t915*t1442;
  t7564 = -1.*t2690*t7467;
  t7624 = t7541 + t7564;
  t7827 = -1.*t2172*t1409*t1442;
  t7828 = t1215*t1442*t1924;
  t7830 = t7827 + t7828;
  t7953 = -1.*t795*t2690;
  t7990 = t132*t7830;
  t8011 = t7953 + t7990;
  t8032 = -1.*t132*t795;
  t8044 = -1.*t2690*t7830;
  t8071 = t8032 + t8044;
  t8221 = t1409*t915;
  t8240 = -1.*t1570*t1442*t1924;
  t8258 = t8221 + t8240;
  t8379 = -1.*t1215*t5500;
  t8381 = t2172*t8258;
  t8391 = t8379 + t8381;
  t8593 = t1409*t915*t1442;
  t8613 = -1.*t1570*t1924;
  t8625 = t8593 + t8613;
  t2463 = t2172*t2397;
  t8678 = -1.*t1215*t8625;
  t8684 = t8678 + t2463;
  t8795 = -1.*t795*t1409*t1215;
  t8798 = -1.*t2172*t795*t1924;
  t8808 = t8795 + t8798;
  t8889 = -1.*t2172*t5576;
  t8904 = t8379 + t8889;
  t9120 = t1570*t1409;
  t9132 = t915*t1442*t1924;
  t9166 = t9120 + t9132;
  t9176 = -1.*t2172*t9166;
  t9188 = t8678 + t9176;
  t8712 = t2172*t8625;
  t8816 = t2740*t8808;
  t8817 = t132*t3578*t8808;
  t8832 = -1.*t2690*t4225*t8808;
  t8834 = t2172*t795*t1409;
  t8841 = -1.*t795*t1215*t1924;
  t8843 = t8834 + t8841;
  t8845 = 0.13205*t8843;
  t8847 = -1.*t3250*t2690*t8808;
  t8849 = -1.*t132*t3304*t8808;
  t8851 = t8847 + t8849;
  t8856 = -0.183*t8851;
  t8859 = t132*t3250*t8808;
  t8875 = -1.*t2690*t3304*t8808;
  t8876 = t8859 + t8875;
  t8877 = -0.3*t8876;
  t9311 = -1.*t1570*t795*t2690;
  t9312 = -1.*t132*t6086;
  t9318 = t9311 + t9312;
  t6584 = t3250*t6452;
  t9208 = -1.*t1215*t9166;
  t9211 = t8712 + t9208;
  t9395 = -1.*t132*t9211;
  t9397 = t3624 + t9395;
  t9410 = t132*t795*t915;
  t9411 = -1.*t2690*t9211;
  t9412 = t9410 + t9411;
  t9482 = t2690*t1442;
  t9488 = -1.*t132*t8843;
  t9497 = t9482 + t9488;
  t9502 = -1.*t132*t1442;
  t9507 = -1.*t2690*t8843;
  t9508 = t9502 + t9507;
  t6545 = -1.*t3304*t6353;
  t6592 = t6545 + t6584;
  t9348 = -1.*t3304*t6452;
  t9574 = -0.183*t3250;
  t9577 = -0.15*t3304;
  t9582 = t9574 + t9577;
  t9587 = 0.15*t3250;
  t9590 = t9587 + t3503;
  t9609 = t795*t2690*t915;
  t9614 = t132*t9211;
  t9615 = t9609 + t9614;
  t9424 = t3250*t9412;
  t9439 = -1.*t3304*t9412;
  t9675 = -1.*t2690*t1442;
  t9678 = t132*t8843;
  t9680 = t9675 + t9678;
  t9526 = t3250*t9508;
  t9537 = -1.*t3304*t9508;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t1260*t2134 + t2293*t2397 + 0.13205*(t1215*t2134 + t2463) + t2740*t2828 + t3578*t3951 + t4225*t4278 - 0.183*(-1.*t3304*t3951 + t3250*t4278) - 0.3*(t3250*t3951 + t3304*t4278) - 1.*t740*t795*t915;
  p_output1(10)=t1260*t5500 + t2293*t5576 + 0.13205*(t1215*t5500 + t2172*t5576) + t2740*t6086 + t3578*t6353 + t4225*t6452 - 0.3*(t3250*t6353 + t3304*t6452) - 0.183*t6592 + t1570*t740*t795;
  p_output1(11)=0;
  p_output1(12)=t2740*t6810 + t3578*t6934 + t4225*t6985 - 0.183*(-1.*t3304*t6934 + t3250*t6985) - 0.3*(t3250*t6934 + t3304*t6985) - 1.*t1442*t1570*t740 + t1260*t1409*t1570*t795 + t1570*t1924*t2293*t795 + 0.13205*(t1215*t1409*t1570*t795 + t1570*t1924*t2172*t795);
  p_output1(13)=t2740*t7467 + t3578*t7533 + t4225*t7624 - 0.183*(-1.*t3304*t7533 + t3250*t7624) - 0.3*(t3250*t7533 + t3304*t7624) - 1.*t1442*t740*t915 + t1260*t1409*t795*t915 + t1924*t2293*t795*t915 + 0.13205*(t1215*t1409*t795*t915 + t1924*t2172*t795*t915);
  p_output1(14)=-1.*t1260*t1409*t1442 + 0.13205*(-1.*t1215*t1409*t1442 - 1.*t1442*t1924*t2172) - 1.*t1442*t1924*t2293 + t2740*t7830 - 1.*t740*t795 + t3578*t8011 + t4225*t8071 - 0.183*(-1.*t3304*t8011 + t3250*t8071) - 0.3*(t3250*t8011 + t3304*t8071);
  p_output1(15)=t2293*t5500 + t1260*t8258 + 0.13205*(t6030 + t1215*t8258) + t2740*t8391 + t132*t3578*t8391 - 1.*t2690*t4225*t8391 - 0.183*(-1.*t2690*t3250*t8391 - 1.*t132*t3304*t8391) - 0.3*(t132*t3250*t8391 - 1.*t2690*t3304*t8391);
  p_output1(16)=t1260*t2397 + t2293*t8625 + t2740*t8684 + t132*t3578*t8684 - 1.*t2690*t4225*t8684 - 0.183*(-1.*t2690*t3250*t8684 - 1.*t132*t3304*t8684) - 0.3*(t132*t3250*t8684 - 1.*t2690*t3304*t8684) + 0.13205*(t1215*t2397 + t8712);
  p_output1(17)=-1.*t1260*t1924*t795 + t1409*t2293*t795 + t8816 + t8817 + t8832 + t8845 + t8856 + t8877;
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
  p_output1(45)=-0.047*t2172*t5500 + 0.047*t1215*t5576 + 0.13205*t6086 + t2740*t8904 + t132*t3578*t8904 - 1.*t2690*t4225*t8904 - 0.183*(-1.*t2690*t3250*t8904 - 1.*t132*t3304*t8904) - 0.3*(t132*t3250*t8904 - 1.*t2690*t3304*t8904);
  p_output1(46)=-0.047*t2172*t8625 + 0.047*t1215*t9166 + t2740*t9188 + t132*t3578*t9188 - 1.*t2690*t4225*t9188 - 0.183*(-1.*t2690*t3250*t9188 - 1.*t132*t3304*t9188) - 0.3*(t132*t3250*t9188 - 1.*t2690*t3304*t9188) + 0.13205*t9211;
  p_output1(47)=0.047*t1215*t1924*t795 - 0.047*t1409*t2172*t795 + t8816 + t8817 + t8832 + t8845 + t8856 + t8877;
  p_output1(48)=-0.183*t132*t6086 + t3578*t6452 - 0.183*t1570*t2690*t795 + t4225*t9318 - 0.3*(t6584 + t3304*t9318) - 0.183*(t3250*t9318 + t9348);
  p_output1(49)=-0.183*t2690*t795*t915 - 0.183*t132*t9211 + t4225*t9397 + t3578*t9412 - 0.3*(t3304*t9397 + t9424) - 0.183*(t3250*t9397 + t9439);
  p_output1(50)=0.183*t1442*t2690 - 0.183*t132*t8843 + t4225*t9497 + t3578*t9508 - 0.3*(t3304*t9497 + t9526) - 0.183*(t3250*t9497 + t9537);
  p_output1(51)=-0.3*t6592 - 0.183*(-1.*t3250*t6353 + t9348) + t6353*t9582 + t6452*t9590;
  p_output1(52)=t9412*t9590 + t9582*t9615 - 0.183*(t9439 - 1.*t3250*t9615) - 0.3*(t9424 - 1.*t3304*t9615);
  p_output1(53)=t9508*t9590 + t9582*t9680 - 0.183*(t9537 - 1.*t3250*t9680) - 0.3*(t9526 - 1.*t3304*t9680);
}


       
Eigen::Matrix<double,3,18> Jp_RLfoot(const Eigen::Matrix<double,18,1> &var1)
//void Jp_RLfoot(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



