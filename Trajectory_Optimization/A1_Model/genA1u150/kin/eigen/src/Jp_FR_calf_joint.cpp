/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:26:33 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_FR_calf_joint.h"

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
  double t677;
  double t1634;
  double t1756;
  double t1608;
  double t1830;
  double t1015;
  double t1713;
  double t1877;
  double t1889;
  double t1903;
  double t1946;
  double t1957;
  double t1971;
  double t343;
  double t2444;
  double t2644;
  double t2696;
  double t230;
  double t2743;
  double t3228;
  double t3288;
  double t3313;
  double t3416;
  double t3889;
  double t3953;
  double t3961;
  double t3161;
  double t3183;
  double t3193;
  double t375;
  double t484;
  double t501;
  double t574;
  double t1080;
  double t1171;
  double t1376;
  double t1444;
  double t1998;
  double t2092;
  double t4351;
  double t4369;
  double t4388;
  double t4442;
  double t4489;
  double t4543;
  double t2794;
  double t2845;
  double t4833;
  double t4883;
  double t4898;
  double t3379;
  double t3439;
  double t3716;
  double t3969;
  double t4026;
  double t4036;
  double t4991;
  double t5213;
  double t5214;
  double t4910;
  double t4927;
  double t4952;
  double t5542;
  double t5549;
  double t5560;
  double t5671;
  double t5699;
  double t5701;
  double t5576;
  double t5632;
  double t5633;
  double t6465;
  double t6551;
  double t6592;
  double t6998;
  double t7021;
  double t7145;
  double t6935;
  double t6948;
  double t6955;
  double t7872;
  double t7873;
  double t7878;
  double t8101;
  double t8107;
  double t8128;
  double t7948;
  double t7992;
  double t8066;
  double t8273;
  double t8293;
  double t8297;
  double t8414;
  double t8415;
  double t8417;
  double t8602;
  double t8607;
  double t8612;
  double t2165;
  double t8769;
  double t8772;
  double t9039;
  double t9046;
  double t9049;
  double t9137;
  double t9143;
  double t8742;
  double t9267;
  double t9272;
  double t9275;
  double t9284;
  double t9286;
  double t9015;
  double t9029;
  double t9034;
  double t9036;
  double t9050;
  double t9059;
  double t9061;
  double t9064;
  double t9066;
  double t9082;
  double t9091;
  double t9096;
  double t9099;
  double t9101;
  double t9104;
  double t5262;
  double t9373;
  double t9378;
  double t9391;
  double t9279;
  double t9280;
  double t9477;
  double t9482;
  double t9483;
  double t9485;
  double t9488;
  double t9560;
  double t9561;
  double t9563;
  double t9577;
  double t9579;
  double t9582;
  double t5336;
  double t5341;
  double t9458;
  double t9665;
  double t9676;
  double t9681;
  double t9697;
  double t9706;
  double t9497;
  double t9739;
  double t9743;
  double t9745;
  double t9522;
  double t9588;
  double t9796;
  double t9797;
  double t9802;
  double t9640;
  t677 = Sin(var1[3]);
  t1634 = Cos(var1[5]);
  t1756 = Sin(var1[4]);
  t1608 = Cos(var1[3]);
  t1830 = Sin(var1[5]);
  t1015 = Cos(var1[6]);
  t1713 = -1.*t1608*t1634;
  t1877 = -1.*t677*t1756*t1830;
  t1889 = t1713 + t1877;
  t1903 = -1.*t1634*t677*t1756;
  t1946 = t1608*t1830;
  t1957 = t1903 + t1946;
  t1971 = Sin(var1[6]);
  t343 = Cos(var1[7]);
  t2444 = t1015*t1957;
  t2644 = -1.*t1889*t1971;
  t2696 = t2444 + t2644;
  t230 = Cos(var1[4]);
  t2743 = Sin(var1[7]);
  t3228 = Cos(var1[8]);
  t3288 = -1.*t3228;
  t3313 = 1. + t3288;
  t3416 = Sin(var1[8]);
  t3889 = -1.*t230*t343*t677;
  t3953 = -1.*t2696*t2743;
  t3961 = t3889 + t3953;
  t3161 = t343*t2696;
  t3183 = -1.*t230*t677*t2743;
  t3193 = t3161 + t3183;
  t375 = -1.*t343;
  t484 = 1. + t375;
  t501 = 0.183*t484;
  t574 = 0. + t501;
  t1080 = -1.*t1015;
  t1171 = 1. + t1080;
  t1376 = -0.047*t1171;
  t1444 = 0. + t1376;
  t1998 = 0.047*t1971;
  t2092 = 0. + t1998;
  t4351 = -1.*t1634*t677;
  t4369 = t1608*t1756*t1830;
  t4388 = t4351 + t4369;
  t4442 = t1608*t1634*t1756;
  t4489 = t677*t1830;
  t4543 = t4442 + t4489;
  t2794 = 0.183*t2743;
  t2845 = 0. + t2794;
  t4833 = t1015*t4543;
  t4883 = -1.*t4388*t1971;
  t4898 = t4833 + t4883;
  t3379 = -0.3*t3313;
  t3439 = 0.183*t3416;
  t3716 = 0. + t3379 + t3439;
  t3969 = 0.183*t3313;
  t4026 = 0.3*t3416;
  t4036 = 0. + t3969 + t4026;
  t4991 = t1608*t230*t343;
  t5213 = -1.*t4898*t2743;
  t5214 = t4991 + t5213;
  t4910 = t343*t4898;
  t4927 = t1608*t230*t2743;
  t4952 = t4910 + t4927;
  t5542 = t1608*t230*t1634*t1015;
  t5549 = -1.*t1608*t230*t1830*t1971;
  t5560 = t5542 + t5549;
  t5671 = -1.*t1608*t343*t1756;
  t5699 = -1.*t5560*t2743;
  t5701 = t5671 + t5699;
  t5576 = t343*t5560;
  t5632 = -1.*t1608*t1756*t2743;
  t5633 = t5576 + t5632;
  t6465 = t230*t1634*t1015*t677;
  t6551 = -1.*t230*t677*t1830*t1971;
  t6592 = t6465 + t6551;
  t6998 = -1.*t343*t677*t1756;
  t7021 = -1.*t6592*t2743;
  t7145 = t6998 + t7021;
  t6935 = t343*t6592;
  t6948 = -1.*t677*t1756*t2743;
  t6955 = t6935 + t6948;
  t7872 = -1.*t1634*t1015*t1756;
  t7873 = t1756*t1830*t1971;
  t7878 = t7872 + t7873;
  t8101 = -1.*t230*t343;
  t8107 = -1.*t7878*t2743;
  t8128 = t8101 + t8107;
  t7948 = t343*t7878;
  t7992 = -1.*t230*t2743;
  t8066 = t7948 + t7992;
  t8273 = t1634*t677;
  t8293 = -1.*t1608*t1756*t1830;
  t8297 = t8273 + t8293;
  t8414 = t1015*t8297;
  t8415 = -1.*t4543*t1971;
  t8417 = t8414 + t8415;
  t8602 = t1634*t677*t1756;
  t8607 = -1.*t1608*t1830;
  t8612 = t8602 + t8607;
  t2165 = t1015*t1889;
  t8769 = -1.*t8612*t1971;
  t8772 = t2165 + t8769;
  t9039 = -1.*t230*t1015*t1830;
  t9046 = -1.*t230*t1634*t1971;
  t9049 = t9039 + t9046;
  t9137 = -1.*t1015*t4388;
  t9143 = t9137 + t8415;
  t8742 = t1015*t8612;
  t9267 = t1608*t1634;
  t9272 = t677*t1756*t1830;
  t9275 = t9267 + t9272;
  t9284 = -1.*t1015*t9275;
  t9286 = t9284 + t8769;
  t9015 = t230*t1634*t1015;
  t9029 = -1.*t230*t1830*t1971;
  t9034 = t9015 + t9029;
  t9036 = -0.17458*t9034;
  t9050 = t9049*t2845;
  t9059 = t343*t9049*t3716;
  t9061 = -1.*t9049*t2743*t4036;
  t9064 = -1.*t3228*t9049*t2743;
  t9066 = -1.*t343*t9049*t3416;
  t9082 = t9064 + t9066;
  t9091 = 0.183*t9082;
  t9096 = t343*t3228*t9049;
  t9099 = -1.*t9049*t2743*t3416;
  t9101 = t9096 + t9099;
  t9104 = -0.3*t9101;
  t5262 = t3228*t5214;
  t9373 = -1.*t343*t4898;
  t9378 = -1.*t1608*t230*t2743;
  t9391 = t9373 + t9378;
  t9279 = -1.*t9275*t1971;
  t9280 = t8742 + t9279;
  t9477 = t230*t343*t677;
  t9482 = -1.*t9280*t2743;
  t9483 = t9477 + t9482;
  t9485 = -1.*t343*t9280;
  t9488 = t9485 + t3183;
  t9560 = -1.*t343*t1756;
  t9561 = -1.*t9034*t2743;
  t9563 = t9560 + t9561;
  t9577 = -1.*t343*t9034;
  t9579 = t1756*t2743;
  t9582 = t9577 + t9579;
  t5336 = -1.*t4952*t3416;
  t5341 = t5262 + t5336;
  t9458 = -1.*t5214*t3416;
  t9665 = 0.183*t3228;
  t9676 = -0.3*t3416;
  t9681 = t9665 + t9676;
  t9697 = 0.3*t3228;
  t9706 = t9697 + t3439;
  t9497 = t3228*t9483;
  t9739 = t343*t9280;
  t9743 = t230*t677*t2743;
  t9745 = t9739 + t9743;
  t9522 = -1.*t9483*t3416;
  t9588 = t3228*t9563;
  t9796 = t343*t9034;
  t9797 = -1.*t1756*t2743;
  t9802 = t9796 + t9797;
  t9640 = -1.*t9563*t3416;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t1444*t1889 + t1957*t2092 - 0.17458*(t1957*t1971 + t2165) + t2696*t2845 + t3193*t3716 + 0.183*(-1.*t3193*t3416 + t3228*t3961) - 0.3*(t3193*t3228 + t3416*t3961) + t3961*t4036 - 1.*t230*t574*t677;
  p_output1(10)=t1444*t4388 + t2092*t4543 - 0.17458*(t1015*t4388 + t1971*t4543) + t2845*t4898 + t3716*t4952 + t4036*t5214 - 0.3*(t3228*t4952 + t3416*t5214) + 0.183*t5341 + t1608*t230*t574;
  p_output1(11)=0;
  p_output1(12)=t1444*t1608*t1830*t230 + t1608*t1634*t2092*t230 - 0.17458*(t1015*t1608*t1830*t230 + t1608*t1634*t1971*t230) + t2845*t5560 + t3716*t5633 + t4036*t5701 + 0.183*(-1.*t3416*t5633 + t3228*t5701) - 0.3*(t3228*t5633 + t3416*t5701) - 1.*t1608*t1756*t574;
  p_output1(13)=t2845*t6592 + t1444*t1830*t230*t677 + t1634*t2092*t230*t677 - 1.*t1756*t574*t677 - 0.17458*(t1015*t1830*t230*t677 + t1634*t1971*t230*t677) + t3716*t6955 + t4036*t7145 + 0.183*(-1.*t3416*t6955 + t3228*t7145) - 0.3*(t3228*t6955 + t3416*t7145);
  p_output1(14)=-1.*t1444*t1756*t1830 - 0.17458*(-1.*t1015*t1756*t1830 - 1.*t1634*t1756*t1971) - 1.*t1634*t1756*t2092 - 1.*t230*t574 + t2845*t7878 + t3716*t8066 + t4036*t8128 + 0.183*(-1.*t3416*t8066 + t3228*t8128) - 0.3*(t3228*t8066 + t3416*t8128);
  p_output1(15)=t1444*t4543 + t2092*t8297 - 0.17458*(t4833 + t1971*t8297) + t2845*t8417 + t343*t3716*t8417 - 1.*t2743*t4036*t8417 - 0.3*(-1.*t2743*t3416*t8417 + t3228*t343*t8417) + 0.183*(-1.*t2743*t3228*t8417 - 1.*t3416*t343*t8417);
  p_output1(16)=t1889*t2092 + t1444*t8612 - 0.17458*(t1889*t1971 + t8742) + t2845*t8772 + t343*t3716*t8772 - 1.*t2743*t4036*t8772 - 0.3*(-1.*t2743*t3416*t8772 + t3228*t343*t8772) + 0.183*(-1.*t2743*t3228*t8772 - 1.*t3416*t343*t8772);
  p_output1(17)=t1444*t1634*t230 - 1.*t1830*t2092*t230 + t9036 + t9050 + t9059 + t9061 + t9091 + t9104;
  p_output1(18)=-0.047*t1971*t4388 + 0.047*t1015*t4543 - 0.17458*t4898 + t2845*t9143 + t343*t3716*t9143 - 1.*t2743*t4036*t9143 - 0.3*(-1.*t2743*t3416*t9143 + t3228*t343*t9143) + 0.183*(-1.*t2743*t3228*t9143 - 1.*t3416*t343*t9143);
  p_output1(19)=0.047*t1015*t8612 - 0.047*t1971*t9275 - 0.17458*t9280 + t2845*t9286 + t343*t3716*t9286 - 1.*t2743*t4036*t9286 - 0.3*(-1.*t2743*t3416*t9286 + t3228*t343*t9286) + 0.183*(-1.*t2743*t3228*t9286 - 1.*t3416*t343*t9286);
  p_output1(20)=0.047*t1015*t1634*t230 - 0.047*t1830*t1971*t230 + t9036 + t9050 + t9059 + t9061 + t9091 + t9104;
  p_output1(21)=0.183*t1608*t230*t2743 + 0.183*t343*t4898 + t3716*t5214 + t4036*t9391 - 0.3*(t5262 + t3416*t9391) + 0.183*(t3228*t9391 + t9458);
  p_output1(22)=0.183*t230*t2743*t677 + 0.183*t343*t9280 + t3716*t9483 + t4036*t9488 - 0.3*(t3416*t9488 + t9497) + 0.183*(t3228*t9488 + t9522);
  p_output1(23)=-0.183*t1756*t2743 + 0.183*t343*t9034 + t3716*t9563 + t4036*t9582 - 0.3*(t3416*t9582 + t9588) + 0.183*(t3228*t9582 + t9640);
  p_output1(24)=-0.3*t5341 + 0.183*(-1.*t3228*t4952 + t9458) + t4952*t9681 + t5214*t9706;
  p_output1(25)=t9483*t9706 + t9681*t9745 + 0.183*(t9522 - 1.*t3228*t9745) - 0.3*(t9497 - 1.*t3416*t9745);
  p_output1(26)=t9563*t9706 + t9681*t9802 + 0.183*(t9640 - 1.*t3228*t9802) - 0.3*(t9588 - 1.*t3416*t9802);
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


       
Eigen::Matrix<double,3,18> Jp_FR_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void Jp_FR_calf_joint(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



