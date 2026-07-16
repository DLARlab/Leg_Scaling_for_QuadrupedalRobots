/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:04:36 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RL_thigh_joint.h"

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
  double t953;
  double t1645;
  double t1219;
  double t1226;
  double t2105;
  double t1072;
  double t1604;
  double t2232;
  double t2507;
  double t2921;
  double t3752;
  double t3763;
  double t3768;
  double t143;
  double t934;
  double t4229;
  double t5384;
  double t5391;
  double t5392;
  double t366;
  double t386;
  double t454;
  double t763;
  double t1206;
  double t1212;
  double t2990;
  double t3023;
  double t3244;
  double t3728;
  double t5501;
  double t5513;
  double t5518;
  double t5559;
  double t5597;
  double t5600;
  double t4256;
  double t5297;
  double t5639;
  double t5649;
  double t5679;
  double t5809;
  double t5810;
  double t5812;
  double t5864;
  double t5867;
  double t5868;
  double t5934;
  double t5936;
  double t5948;
  double t5986;
  double t5997;
  double t6004;
  double t6020;
  double t6030;
  double t6040;
  double t6079;
  double t6081;
  double t6083;
  double t3802;
  double t6101;
  double t6107;
  double t6129;
  double t6145;
  double t6165;
  double t6220;
  double t6228;
  double t6292;
  double t6293;
  double t6295;
  double t6304;
  double t6305;
  double t6115;
  double t6182;
  double t6183;
  double t6186;
  double t6194;
  double t6202;
  double t6204;
  double t6325;
  double t6337;
  t953 = Sin(var1[3]);
  t1645 = Cos(var1[3]);
  t1219 = Cos(var1[5]);
  t1226 = Sin(var1[4]);
  t2105 = Sin(var1[5]);
  t1072 = Sin(var1[15]);
  t1604 = -1.*t1219*t953*t1226;
  t2232 = t1645*t2105;
  t2507 = t1604 + t2232;
  t2921 = Cos(var1[15]);
  t3752 = -1.*t1645*t1219;
  t3763 = -1.*t953*t1226*t2105;
  t3768 = t3752 + t3763;
  t143 = Cos(var1[16]);
  t934 = Cos(var1[4]);
  t4229 = Sin(var1[16]);
  t5384 = t2921*t2507;
  t5391 = -1.*t1072*t3768;
  t5392 = t5384 + t5391;
  t366 = -1.*t143;
  t386 = 1. + t366;
  t454 = -0.183*t386;
  t763 = 0. + t454;
  t1206 = -0.047*t1072;
  t1212 = 0. + t1206;
  t2990 = -1.*t2921;
  t3023 = 1. + t2990;
  t3244 = 0.047*t3023;
  t3728 = 0. + t3244;
  t5501 = t1645*t1219*t1226;
  t5513 = t953*t2105;
  t5518 = t5501 + t5513;
  t5559 = -1.*t1219*t953;
  t5597 = t1645*t1226*t2105;
  t5600 = t5559 + t5597;
  t4256 = -0.183*t4229;
  t5297 = 0. + t4256;
  t5639 = t2921*t5518;
  t5649 = -1.*t1072*t5600;
  t5679 = t5639 + t5649;
  t5809 = t2921*t1645*t934*t1219;
  t5810 = -1.*t1645*t934*t1072*t2105;
  t5812 = t5809 + t5810;
  t5864 = t2921*t934*t1219*t953;
  t5867 = -1.*t934*t1072*t953*t2105;
  t5868 = t5864 + t5867;
  t5934 = -1.*t2921*t1219*t1226;
  t5936 = t1072*t1226*t2105;
  t5948 = t5934 + t5936;
  t5986 = t1219*t953;
  t5997 = -1.*t1645*t1226*t2105;
  t6004 = t5986 + t5997;
  t6020 = -1.*t1072*t5518;
  t6030 = t2921*t6004;
  t6040 = t6020 + t6030;
  t6079 = t1219*t953*t1226;
  t6081 = -1.*t1645*t2105;
  t6083 = t6079 + t6081;
  t3802 = t2921*t3768;
  t6101 = -1.*t1072*t6083;
  t6107 = t6101 + t3802;
  t6129 = -1.*t934*t1219*t1072;
  t6145 = -1.*t2921*t934*t2105;
  t6165 = t6129 + t6145;
  t6220 = -1.*t2921*t5600;
  t6228 = t6020 + t6220;
  t6292 = t1645*t1219;
  t6293 = t953*t1226*t2105;
  t6295 = t6292 + t6293;
  t6304 = -1.*t2921*t6295;
  t6305 = t6101 + t6304;
  t6115 = t2921*t6083;
  t6182 = t5297*t6165;
  t6183 = 0.183*t4229*t6165;
  t6186 = t2921*t934*t1219;
  t6194 = -1.*t934*t1072*t2105;
  t6202 = t6186 + t6194;
  t6204 = 0.13205*t6202;
  t6325 = -1.*t1072*t6295;
  t6337 = t6115 + t6325;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t1212*t2507 + t3728*t3768 + 0.13205*(t1072*t2507 + t3802) + t5297*t5392 - 1.*t763*t934*t953 - 0.183*(-1.*t4229*t5392 - 1.*t143*t934*t953);
  p_output1(10)=t1212*t5518 + t3728*t5600 + 0.13205*(t1072*t5518 + t2921*t5600) + t5297*t5679 + t1645*t763*t934 - 0.183*(-1.*t4229*t5679 + t143*t1645*t934);
  p_output1(11)=0;
  p_output1(12)=t5297*t5812 - 0.183*(-1.*t1226*t143*t1645 - 1.*t4229*t5812) - 1.*t1226*t1645*t763 + t1212*t1219*t1645*t934 + t1645*t2105*t3728*t934 + 0.13205*(t1072*t1219*t1645*t934 + t1645*t2105*t2921*t934);
  p_output1(13)=t5297*t5868 - 1.*t1226*t763*t953 + t1212*t1219*t934*t953 + t2105*t3728*t934*t953 - 0.183*(-1.*t4229*t5868 - 1.*t1226*t143*t953) + 0.13205*(t1072*t1219*t934*t953 + t2105*t2921*t934*t953);
  p_output1(14)=-1.*t1212*t1219*t1226 + 0.13205*(-1.*t1072*t1219*t1226 - 1.*t1226*t2105*t2921) - 1.*t1226*t2105*t3728 + t5297*t5948 - 1.*t763*t934 - 0.183*(-1.*t4229*t5948 - 1.*t143*t934);
  p_output1(15)=t3728*t5518 + t1212*t6004 + 0.13205*(t5639 + t1072*t6004) + 0.183*t4229*t6040 + t5297*t6040;
  p_output1(16)=t1212*t3768 + t3728*t6083 + 0.183*t4229*t6107 + t5297*t6107 + 0.13205*(t1072*t3768 + t6115);
  p_output1(17)=t6182 + t6183 + t6204 - 1.*t1212*t2105*t934 + t1219*t3728*t934;
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
  p_output1(45)=-0.047*t2921*t5518 + 0.047*t1072*t5600 + 0.13205*t5679 + 0.183*t4229*t6228 + t5297*t6228;
  p_output1(46)=-0.047*t2921*t6083 + 0.047*t1072*t6295 + 0.183*t4229*t6305 + t5297*t6305 + 0.13205*t6337;
  p_output1(47)=t6182 + t6183 + t6204 + 0.047*t1072*t2105*t934 - 0.047*t1219*t2921*t934;
  p_output1(48)=-0.183*t143*t5679 - 0.183*t1645*t4229*t934 - 0.183*(-1.*t143*t5679 - 1.*t1645*t4229*t934);
  p_output1(49)=-0.183*t143*t6337 - 0.183*t4229*t934*t953 - 0.183*(-1.*t143*t6337 - 1.*t4229*t934*t953);
  p_output1(50)=0.183*t1226*t4229 - 0.183*t143*t6202 - 0.183*(t1226*t4229 - 1.*t143*t6202);
  p_output1(51)=0;
  p_output1(52)=0;
  p_output1(53)=0;
}


       
Eigen::Matrix<double,3,18> Jp_RL_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void Jp_RL_thigh_joint(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



