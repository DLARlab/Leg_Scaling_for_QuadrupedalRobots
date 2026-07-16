/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:11:07 GMT-05:00
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
  double t769;
  double t1307;
  double t1193;
  double t1205;
  double t1341;
  double t871;
  double t1281;
  double t1447;
  double t1545;
  double t1935;
  double t2044;
  double t2254;
  double t2272;
  double t573;
  double t2797;
  double t119;
  double t3100;
  double t3218;
  double t3268;
  double t3276;
  double t3472;
  double t3500;
  double t3704;
  double t3809;
  double t3945;
  double t4240;
  double t4824;
  double t4847;
  double t4936;
  double t337;
  double t340;
  double t389;
  double t432;
  double t876;
  double t1146;
  double t1944;
  double t2002;
  double t2008;
  double t2030;
  double t5498;
  double t5898;
  double t6080;
  double t6312;
  double t6488;
  double t6489;
  double t3015;
  double t3071;
  double t3595;
  double t3748;
  double t3762;
  double t7010;
  double t7060;
  double t7116;
  double t4405;
  double t4445;
  double t4744;
  double t7124;
  double t7153;
  double t7163;
  double t7198;
  double t7211;
  double t7216;
  double t7382;
  double t7415;
  double t7429;
  double t7464;
  double t7470;
  double t7506;
  double t7515;
  double t7519;
  double t7520;
  double t7670;
  double t7677;
  double t7697;
  double t7699;
  double t7703;
  double t7706;
  double t7716;
  double t7718;
  double t7727;
  double t7785;
  double t7786;
  double t7788;
  double t7798;
  double t7802;
  double t7805;
  double t7818;
  double t7820;
  double t7821;
  double t7844;
  double t7846;
  double t7847;
  double t7859;
  double t7862;
  double t7865;
  double t7899;
  double t7900;
  double t7901;
  double t2381;
  double t7905;
  double t7906;
  double t7941;
  double t7942;
  double t7944;
  double t7989;
  double t7992;
  double t8021;
  double t8024;
  double t8025;
  double t8031;
  double t8032;
  double t7913;
  double t7945;
  double t7947;
  double t7948;
  double t7949;
  double t7950;
  double t7953;
  double t7955;
  double t7956;
  double t7958;
  double t7959;
  double t7960;
  double t7969;
  double t7977;
  double t7979;
  double t7981;
  double t8077;
  double t8081;
  double t8082;
  double t7276;
  double t8038;
  double t8039;
  double t8113;
  double t8114;
  double t8127;
  double t8131;
  double t8133;
  double t8162;
  double t8163;
  double t8164;
  double t8166;
  double t8167;
  double t8169;
  double t7266;
  double t7280;
  double t8100;
  double t8189;
  double t8190;
  double t8193;
  double t8198;
  double t8199;
  double t8217;
  double t8220;
  double t8223;
  double t8141;
  double t8153;
  double t8246;
  double t8247;
  double t8249;
  double t8173;
  double t8181;
  t769 = Sin(var1[3]);
  t1307 = Cos(var1[3]);
  t1193 = Cos(var1[5]);
  t1205 = Sin(var1[4]);
  t1341 = Sin(var1[5]);
  t871 = Sin(var1[12]);
  t1281 = -1.*t1193*t769*t1205;
  t1447 = t1307*t1341;
  t1545 = t1281 + t1447;
  t1935 = Cos(var1[12]);
  t2044 = -1.*t1307*t1193;
  t2254 = -1.*t769*t1205*t1341;
  t2272 = t2044 + t2254;
  t573 = Cos(var1[4]);
  t2797 = Sin(var1[13]);
  t119 = Cos(var1[13]);
  t3100 = t1935*t1545;
  t3218 = -1.*t871*t2272;
  t3268 = t3100 + t3218;
  t3276 = Cos(var1[14]);
  t3472 = -1.*t3276;
  t3500 = 1. + t3472;
  t3704 = Sin(var1[14]);
  t3809 = -1.*t573*t2797*t769;
  t3945 = t119*t3268;
  t4240 = t3809 + t3945;
  t4824 = -1.*t119*t573*t769;
  t4847 = -1.*t2797*t3268;
  t4936 = t4824 + t4847;
  t337 = -1.*t119;
  t340 = 1. + t337;
  t389 = -0.183*t340;
  t432 = 0. + t389;
  t876 = 0.047*t871;
  t1146 = 0. + t876;
  t1944 = -1.*t1935;
  t2002 = 1. + t1944;
  t2008 = -0.047*t2002;
  t2030 = 0. + t2008;
  t5498 = t1307*t1193*t1205;
  t5898 = t769*t1341;
  t6080 = t5498 + t5898;
  t6312 = -1.*t1193*t769;
  t6488 = t1307*t1205*t1341;
  t6489 = t6312 + t6488;
  t3015 = -0.183*t2797;
  t3071 = 0. + t3015;
  t3595 = -0.1*t3500;
  t3748 = -0.183*t3704;
  t3762 = 0. + t3595 + t3748;
  t7010 = t1935*t6080;
  t7060 = -1.*t871*t6489;
  t7116 = t7010 + t7060;
  t4405 = -0.183*t3500;
  t4445 = 0.1*t3704;
  t4744 = 0. + t4405 + t4445;
  t7124 = t1307*t573*t2797;
  t7153 = t119*t7116;
  t7163 = t7124 + t7153;
  t7198 = t119*t1307*t573;
  t7211 = -1.*t2797*t7116;
  t7216 = t7198 + t7211;
  t7382 = t1935*t1307*t573*t1193;
  t7415 = -1.*t1307*t573*t871*t1341;
  t7429 = t7382 + t7415;
  t7464 = -1.*t1307*t2797*t1205;
  t7470 = t119*t7429;
  t7506 = t7464 + t7470;
  t7515 = -1.*t119*t1307*t1205;
  t7519 = -1.*t2797*t7429;
  t7520 = t7515 + t7519;
  t7670 = t1935*t573*t1193*t769;
  t7677 = -1.*t573*t871*t769*t1341;
  t7697 = t7670 + t7677;
  t7699 = -1.*t2797*t769*t1205;
  t7703 = t119*t7697;
  t7706 = t7699 + t7703;
  t7716 = -1.*t119*t769*t1205;
  t7718 = -1.*t2797*t7697;
  t7727 = t7716 + t7718;
  t7785 = -1.*t1935*t1193*t1205;
  t7786 = t871*t1205*t1341;
  t7788 = t7785 + t7786;
  t7798 = -1.*t573*t2797;
  t7802 = t119*t7788;
  t7805 = t7798 + t7802;
  t7818 = -1.*t119*t573;
  t7820 = -1.*t2797*t7788;
  t7821 = t7818 + t7820;
  t7844 = t1193*t769;
  t7846 = -1.*t1307*t1205*t1341;
  t7847 = t7844 + t7846;
  t7859 = -1.*t871*t6080;
  t7862 = t1935*t7847;
  t7865 = t7859 + t7862;
  t7899 = t1193*t769*t1205;
  t7900 = -1.*t1307*t1341;
  t7901 = t7899 + t7900;
  t2381 = t1935*t2272;
  t7905 = -1.*t871*t7901;
  t7906 = t7905 + t2381;
  t7941 = -1.*t573*t1193*t871;
  t7942 = -1.*t1935*t573*t1341;
  t7944 = t7941 + t7942;
  t7989 = -1.*t1935*t6489;
  t7992 = t7859 + t7989;
  t8021 = t1307*t1193;
  t8024 = t769*t1205*t1341;
  t8025 = t8021 + t8024;
  t8031 = -1.*t1935*t8025;
  t8032 = t7905 + t8031;
  t7913 = t1935*t7901;
  t7945 = t3071*t7944;
  t7947 = t119*t3762*t7944;
  t7948 = -1.*t2797*t4744*t7944;
  t7949 = t1935*t573*t1193;
  t7950 = -1.*t573*t871*t1341;
  t7953 = t7949 + t7950;
  t7955 = -0.13205*t7953;
  t7956 = -1.*t3276*t2797*t7944;
  t7958 = -1.*t119*t3704*t7944;
  t7959 = t7956 + t7958;
  t7960 = -0.183*t7959;
  t7969 = t119*t3276*t7944;
  t7977 = -1.*t2797*t3704*t7944;
  t7979 = t7969 + t7977;
  t7981 = -0.1*t7979;
  t8077 = -1.*t1307*t573*t2797;
  t8081 = -1.*t119*t7116;
  t8082 = t8077 + t8081;
  t7276 = t3276*t7216;
  t8038 = -1.*t871*t8025;
  t8039 = t7913 + t8038;
  t8113 = -1.*t119*t8039;
  t8114 = t3809 + t8113;
  t8127 = t119*t573*t769;
  t8131 = -1.*t2797*t8039;
  t8133 = t8127 + t8131;
  t8162 = t2797*t1205;
  t8163 = -1.*t119*t7953;
  t8164 = t8162 + t8163;
  t8166 = -1.*t119*t1205;
  t8167 = -1.*t2797*t7953;
  t8169 = t8166 + t8167;
  t7266 = -1.*t3704*t7163;
  t7280 = t7266 + t7276;
  t8100 = -1.*t3704*t7216;
  t8189 = -0.183*t3276;
  t8190 = -0.1*t3704;
  t8193 = t8189 + t8190;
  t8198 = 0.1*t3276;
  t8199 = t8198 + t3748;
  t8217 = t573*t2797*t769;
  t8220 = t119*t8039;
  t8223 = t8217 + t8220;
  t8141 = t3276*t8133;
  t8153 = -1.*t3704*t8133;
  t8246 = -1.*t2797*t1205;
  t8247 = t119*t7953;
  t8249 = t8246 + t8247;
  t8173 = t3276*t8169;
  t8181 = -1.*t3704*t8169;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t1146*t1545 + t2030*t2272 + t3071*t3268 + t3762*t4240 + t4744*t4936 - 0.183*(-1.*t3704*t4240 + t3276*t4936) - 0.1*(t3276*t4240 + t3704*t4936) - 1.*t432*t573*t769 - 0.13205*(t2381 + t1545*t871);
  p_output1(10)=t1307*t432*t573 + t1146*t6080 + t2030*t6489 + t3071*t7116 + t3762*t7163 + t4744*t7216 - 0.1*(t3276*t7163 + t3704*t7216) - 0.183*t7280 - 0.13205*(t1935*t6489 + t6080*t871);
  p_output1(11)=0;
  p_output1(12)=-1.*t1205*t1307*t432 + t1146*t1193*t1307*t573 + t1307*t1341*t2030*t573 + t3071*t7429 + t3762*t7506 + t4744*t7520 - 0.183*(-1.*t3704*t7506 + t3276*t7520) - 0.1*(t3276*t7506 + t3704*t7520) - 0.13205*(t1307*t1341*t1935*t573 + t1193*t1307*t573*t871);
  p_output1(13)=-1.*t1205*t432*t769 + t1146*t1193*t573*t769 + t1341*t2030*t573*t769 + t3071*t7697 + t3762*t7706 + t4744*t7727 - 0.183*(-1.*t3704*t7706 + t3276*t7727) - 0.1*(t3276*t7706 + t3704*t7727) - 0.13205*(t1341*t1935*t573*t769 + t1193*t573*t769*t871);
  p_output1(14)=-1.*t1146*t1193*t1205 - 1.*t1205*t1341*t2030 - 1.*t432*t573 + t3071*t7788 + t3762*t7805 + t4744*t7821 - 0.183*(-1.*t3704*t7805 + t3276*t7821) - 0.1*(t3276*t7805 + t3704*t7821) - 0.13205*(-1.*t1205*t1341*t1935 - 1.*t1193*t1205*t871);
  p_output1(15)=t2030*t6080 + t1146*t7847 + t3071*t7865 + t119*t3762*t7865 - 1.*t2797*t4744*t7865 - 0.183*(-1.*t2797*t3276*t7865 - 1.*t119*t3704*t7865) - 0.1*(t119*t3276*t7865 - 1.*t2797*t3704*t7865) - 0.13205*(t7010 + t7847*t871);
  p_output1(16)=t1146*t2272 + t2030*t7901 + t3071*t7906 + t119*t3762*t7906 - 1.*t2797*t4744*t7906 - 0.183*(-1.*t2797*t3276*t7906 - 1.*t119*t3704*t7906) - 0.1*(t119*t3276*t7906 - 1.*t2797*t3704*t7906) - 0.13205*(t7913 + t2272*t871);
  p_output1(17)=-1.*t1146*t1341*t573 + t1193*t2030*t573 + t7945 + t7947 + t7948 + t7955 + t7960 + t7981;
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
  p_output1(36)=0.047*t1935*t6080 - 0.13205*t7116 + t3071*t7992 + t119*t3762*t7992 - 1.*t2797*t4744*t7992 - 0.183*(-1.*t2797*t3276*t7992 - 1.*t119*t3704*t7992) - 0.1*(t119*t3276*t7992 - 1.*t2797*t3704*t7992) - 0.047*t6489*t871;
  p_output1(37)=0.047*t1935*t7901 + t3071*t8032 + t119*t3762*t8032 - 1.*t2797*t4744*t8032 - 0.183*(-1.*t2797*t3276*t8032 - 1.*t119*t3704*t8032) - 0.1*(t119*t3276*t8032 - 1.*t2797*t3704*t8032) - 0.13205*t8039 - 0.047*t8025*t871;
  p_output1(38)=0.047*t1193*t1935*t573 + t7945 + t7947 + t7948 + t7955 + t7960 + t7981 - 0.047*t1341*t573*t871;
  p_output1(39)=-0.183*t1307*t2797*t573 - 0.183*t119*t7116 + t3762*t7216 + t4744*t8082 - 0.1*(t7276 + t3704*t8082) - 0.183*(t3276*t8082 + t8100);
  p_output1(40)=-0.183*t2797*t573*t769 - 0.183*t119*t8039 + t4744*t8114 + t3762*t8133 - 0.1*(t3704*t8114 + t8141) - 0.183*(t3276*t8114 + t8153);
  p_output1(41)=0.183*t1205*t2797 - 0.183*t119*t7953 + t4744*t8164 + t3762*t8169 - 0.1*(t3704*t8164 + t8173) - 0.183*(t3276*t8164 + t8181);
  p_output1(42)=-0.1*t7280 - 0.183*(-1.*t3276*t7163 + t8100) + t7163*t8193 + t7216*t8199;
  p_output1(43)=t8133*t8199 + t8193*t8223 - 0.183*(t8153 - 1.*t3276*t8223) - 0.1*(t8141 - 1.*t3704*t8223);
  p_output1(44)=t8169*t8199 + t8193*t8249 - 0.183*(t8181 - 1.*t3276*t8249) - 0.1*(t8173 - 1.*t3704*t8249);
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



