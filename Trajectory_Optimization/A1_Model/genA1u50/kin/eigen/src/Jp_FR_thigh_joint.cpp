/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:13:33 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_FR_thigh_joint.h"

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
  double t1577;
  double t3657;
  double t5043;
  double t3049;
  double t5061;
  double t2141;
  double t3905;
  double t5605;
  double t7934;
  double t7970;
  double t7976;
  double t7977;
  double t7980;
  double t400;
  double t476;
  double t7996;
  double t7997;
  double t7998;
  double t7999;
  double t586;
  double t1489;
  double t1551;
  double t1570;
  double t2233;
  double t2243;
  double t2564;
  double t2981;
  double t7982;
  double t7983;
  double t8016;
  double t8017;
  double t8020;
  double t8022;
  double t8025;
  double t8026;
  double t8004;
  double t8005;
  double t8032;
  double t8033;
  double t8034;
  double t8050;
  double t8051;
  double t8052;
  double t8068;
  double t8069;
  double t8071;
  double t8087;
  double t8089;
  double t8090;
  double t8100;
  double t8101;
  double t8103;
  double t8108;
  double t8109;
  double t8115;
  double t8121;
  double t8123;
  double t8124;
  double t7985;
  double t8134;
  double t8136;
  double t8146;
  double t8147;
  double t8148;
  double t8155;
  double t8156;
  double t8127;
  double t8161;
  double t8162;
  double t8163;
  double t8168;
  double t8169;
  double t8142;
  double t8143;
  double t8144;
  double t8145;
  double t8149;
  double t8150;
  double t8165;
  double t8166;
  t1577 = Sin(var1[3]);
  t3657 = Cos(var1[5]);
  t5043 = Sin(var1[4]);
  t3049 = Cos(var1[3]);
  t5061 = Sin(var1[5]);
  t2141 = Cos(var1[6]);
  t3905 = -1.*t3049*t3657;
  t5605 = -1.*t1577*t5043*t5061;
  t7934 = t3905 + t5605;
  t7970 = -1.*t3657*t1577*t5043;
  t7976 = t3049*t5061;
  t7977 = t7970 + t7976;
  t7980 = Sin(var1[6]);
  t400 = Cos(var1[4]);
  t476 = Cos(var1[7]);
  t7996 = t2141*t7977;
  t7997 = -1.*t7934*t7980;
  t7998 = t7996 + t7997;
  t7999 = Sin(var1[7]);
  t586 = -1.*t476;
  t1489 = 1. + t586;
  t1551 = 0.183*t1489;
  t1570 = 0. + t1551;
  t2233 = -1.*t2141;
  t2243 = 1. + t2233;
  t2564 = -0.047*t2243;
  t2981 = 0. + t2564;
  t7982 = 0.047*t7980;
  t7983 = 0. + t7982;
  t8016 = -1.*t3657*t1577;
  t8017 = t3049*t5043*t5061;
  t8020 = t8016 + t8017;
  t8022 = t3049*t3657*t5043;
  t8025 = t1577*t5061;
  t8026 = t8022 + t8025;
  t8004 = 0.183*t7999;
  t8005 = 0. + t8004;
  t8032 = t2141*t8026;
  t8033 = -1.*t8020*t7980;
  t8034 = t8032 + t8033;
  t8050 = t3049*t400*t3657*t2141;
  t8051 = -1.*t3049*t400*t5061*t7980;
  t8052 = t8050 + t8051;
  t8068 = t400*t3657*t2141*t1577;
  t8069 = -1.*t400*t1577*t5061*t7980;
  t8071 = t8068 + t8069;
  t8087 = -1.*t3657*t2141*t5043;
  t8089 = t5043*t5061*t7980;
  t8090 = t8087 + t8089;
  t8100 = t3657*t1577;
  t8101 = -1.*t3049*t5043*t5061;
  t8103 = t8100 + t8101;
  t8108 = t2141*t8103;
  t8109 = -1.*t8026*t7980;
  t8115 = t8108 + t8109;
  t8121 = t3657*t1577*t5043;
  t8123 = -1.*t3049*t5061;
  t8124 = t8121 + t8123;
  t7985 = t2141*t7934;
  t8134 = -1.*t8124*t7980;
  t8136 = t7985 + t8134;
  t8146 = -1.*t400*t2141*t5061;
  t8147 = -1.*t400*t3657*t7980;
  t8148 = t8146 + t8147;
  t8155 = -1.*t2141*t8020;
  t8156 = t8155 + t8109;
  t8127 = t2141*t8124;
  t8161 = t3049*t3657;
  t8162 = t1577*t5043*t5061;
  t8163 = t8161 + t8162;
  t8168 = -1.*t2141*t8163;
  t8169 = t8168 + t8134;
  t8142 = t400*t3657*t2141;
  t8143 = -1.*t400*t5061*t7980;
  t8144 = t8142 + t8143;
  t8145 = -0.08953*t8144;
  t8149 = t8148*t8005;
  t8150 = -0.183*t8148*t7999;
  t8165 = -1.*t8163*t7980;
  t8166 = t8127 + t8165;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=-1.*t1570*t1577*t400 + t2981*t7934 + t7977*t7983 - 0.08953*(t7977*t7980 + t7985) + 0.183*(-1.*t1577*t400*t476 - 1.*t7998*t7999) + t7998*t8005;
  p_output1(10)=t1570*t3049*t400 + t2981*t8020 + t7983*t8026 - 0.08953*(t2141*t8020 + t7980*t8026) + t8005*t8034 + 0.183*(t3049*t400*t476 - 1.*t7999*t8034);
  p_output1(11)=0;
  p_output1(12)=-1.*t1570*t3049*t5043 + t2981*t3049*t400*t5061 - 0.08953*(t2141*t3049*t400*t5061 + t3049*t3657*t400*t7980) + t3049*t3657*t400*t7983 + t8005*t8052 + 0.183*(-1.*t3049*t476*t5043 - 1.*t7999*t8052);
  p_output1(13)=-1.*t1570*t1577*t5043 + t1577*t2981*t400*t5061 - 0.08953*(t1577*t2141*t400*t5061 + t1577*t3657*t400*t7980) + t1577*t3657*t400*t7983 + t8005*t8071 + 0.183*(-1.*t1577*t476*t5043 - 1.*t7999*t8071);
  p_output1(14)=-1.*t1570*t400 - 1.*t2981*t5043*t5061 - 0.08953*(-1.*t2141*t5043*t5061 - 1.*t3657*t5043*t7980) - 1.*t3657*t5043*t7983 + t8005*t8090 + 0.183*(-1.*t400*t476 - 1.*t7999*t8090);
  p_output1(15)=t2981*t8026 + t7983*t8103 - 0.08953*(t8032 + t7980*t8103) - 0.183*t7999*t8115 + t8005*t8115;
  p_output1(16)=t7934*t7983 + t2981*t8124 - 0.08953*(t7934*t7980 + t8127) - 0.183*t7999*t8136 + t8005*t8136;
  p_output1(17)=t2981*t3657*t400 - 1.*t400*t5061*t7983 + t8145 + t8149 + t8150;
  p_output1(18)=-0.047*t7980*t8020 + 0.047*t2141*t8026 - 0.08953*t8034 - 0.183*t7999*t8156 + t8005*t8156;
  p_output1(19)=0.047*t2141*t8124 - 0.047*t7980*t8163 - 0.08953*t8166 - 0.183*t7999*t8169 + t8005*t8169;
  p_output1(20)=0.047*t2141*t3657*t400 - 0.047*t400*t5061*t7980 + t8145 + t8149 + t8150;
  p_output1(21)=0.183*t3049*t400*t7999 + 0.183*t476*t8034 + 0.183*(-1.*t3049*t400*t7999 - 1.*t476*t8034);
  p_output1(22)=0.183*t1577*t400*t7999 + 0.183*t476*t8166 + 0.183*(-1.*t1577*t400*t7999 - 1.*t476*t8166);
  p_output1(23)=-0.183*t5043*t7999 + 0.183*t476*t8144 + 0.183*(t5043*t7999 - 1.*t476*t8144);
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


       
Eigen::Matrix<double,3,18> Jp_FR_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void Jp_FR_thigh_joint(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



