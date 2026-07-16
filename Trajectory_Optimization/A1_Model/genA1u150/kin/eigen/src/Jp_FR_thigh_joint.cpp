/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:26:31 GMT-05:00
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
  double t1451;
  double t3408;
  double t3603;
  double t3281;
  double t3815;
  double t2369;
  double t3552;
  double t3886;
  double t4598;
  double t4977;
  double t5284;
  double t5323;
  double t5391;
  double t312;
  double t541;
  double t6591;
  double t6781;
  double t7027;
  double t7053;
  double t908;
  double t1077;
  double t1152;
  double t1449;
  double t2375;
  double t2440;
  double t3117;
  double t3179;
  double t5411;
  double t5512;
  double t7606;
  double t7641;
  double t7668;
  double t7725;
  double t7757;
  double t7784;
  double t7182;
  double t7276;
  double t7878;
  double t7927;
  double t7931;
  double t8167;
  double t8169;
  double t8175;
  double t8260;
  double t8261;
  double t8264;
  double t8394;
  double t8404;
  double t8407;
  double t8442;
  double t8452;
  double t8453;
  double t8482;
  double t8486;
  double t8513;
  double t8541;
  double t8542;
  double t8560;
  double t5826;
  double t8655;
  double t8670;
  double t8808;
  double t8812;
  double t8815;
  double t8902;
  double t8906;
  double t8612;
  double t8981;
  double t9008;
  double t9010;
  double t9028;
  double t9030;
  double t8772;
  double t8776;
  double t8788;
  double t8796;
  double t8816;
  double t8825;
  double t9018;
  double t9024;
  t1451 = Sin(var1[3]);
  t3408 = Cos(var1[5]);
  t3603 = Sin(var1[4]);
  t3281 = Cos(var1[3]);
  t3815 = Sin(var1[5]);
  t2369 = Cos(var1[6]);
  t3552 = -1.*t3281*t3408;
  t3886 = -1.*t1451*t3603*t3815;
  t4598 = t3552 + t3886;
  t4977 = -1.*t3408*t1451*t3603;
  t5284 = t3281*t3815;
  t5323 = t4977 + t5284;
  t5391 = Sin(var1[6]);
  t312 = Cos(var1[4]);
  t541 = Cos(var1[7]);
  t6591 = t2369*t5323;
  t6781 = -1.*t4598*t5391;
  t7027 = t6591 + t6781;
  t7053 = Sin(var1[7]);
  t908 = -1.*t541;
  t1077 = 1. + t908;
  t1152 = 0.183*t1077;
  t1449 = 0. + t1152;
  t2375 = -1.*t2369;
  t2440 = 1. + t2375;
  t3117 = -0.047*t2440;
  t3179 = 0. + t3117;
  t5411 = 0.047*t5391;
  t5512 = 0. + t5411;
  t7606 = -1.*t3408*t1451;
  t7641 = t3281*t3603*t3815;
  t7668 = t7606 + t7641;
  t7725 = t3281*t3408*t3603;
  t7757 = t1451*t3815;
  t7784 = t7725 + t7757;
  t7182 = 0.183*t7053;
  t7276 = 0. + t7182;
  t7878 = t2369*t7784;
  t7927 = -1.*t7668*t5391;
  t7931 = t7878 + t7927;
  t8167 = t3281*t312*t3408*t2369;
  t8169 = -1.*t3281*t312*t3815*t5391;
  t8175 = t8167 + t8169;
  t8260 = t312*t3408*t2369*t1451;
  t8261 = -1.*t312*t1451*t3815*t5391;
  t8264 = t8260 + t8261;
  t8394 = -1.*t3408*t2369*t3603;
  t8404 = t3603*t3815*t5391;
  t8407 = t8394 + t8404;
  t8442 = t3408*t1451;
  t8452 = -1.*t3281*t3603*t3815;
  t8453 = t8442 + t8452;
  t8482 = t2369*t8453;
  t8486 = -1.*t7784*t5391;
  t8513 = t8482 + t8486;
  t8541 = t3408*t1451*t3603;
  t8542 = -1.*t3281*t3815;
  t8560 = t8541 + t8542;
  t5826 = t2369*t4598;
  t8655 = -1.*t8560*t5391;
  t8670 = t5826 + t8655;
  t8808 = -1.*t312*t2369*t3815;
  t8812 = -1.*t312*t3408*t5391;
  t8815 = t8808 + t8812;
  t8902 = -1.*t2369*t7668;
  t8906 = t8902 + t8486;
  t8612 = t2369*t8560;
  t8981 = t3281*t3408;
  t9008 = t1451*t3603*t3815;
  t9010 = t8981 + t9008;
  t9028 = -1.*t2369*t9010;
  t9030 = t9028 + t8655;
  t8772 = t312*t3408*t2369;
  t8776 = -1.*t312*t3815*t5391;
  t8788 = t8772 + t8776;
  t8796 = -0.17458*t8788;
  t8816 = t8815*t7276;
  t8825 = -0.183*t8815*t7053;
  t9018 = -1.*t9010*t5391;
  t9024 = t8612 + t9018;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=-1.*t1449*t1451*t312 + t3179*t4598 + t5323*t5512 - 0.17458*(t5323*t5391 + t5826) + 0.183*(-1.*t1451*t312*t541 - 1.*t7027*t7053) + t7027*t7276;
  p_output1(10)=t1449*t312*t3281 + t3179*t7668 + t5512*t7784 - 0.17458*(t2369*t7668 + t5391*t7784) + t7276*t7931 + 0.183*(t312*t3281*t541 - 1.*t7053*t7931);
  p_output1(11)=0;
  p_output1(12)=-1.*t1449*t3281*t3603 + t312*t3179*t3281*t3815 - 0.17458*(t2369*t312*t3281*t3815 + t312*t3281*t3408*t5391) + t312*t3281*t3408*t5512 + t7276*t8175 + 0.183*(-1.*t3281*t3603*t541 - 1.*t7053*t8175);
  p_output1(13)=-1.*t1449*t1451*t3603 + t1451*t312*t3179*t3815 - 0.17458*(t1451*t2369*t312*t3815 + t1451*t312*t3408*t5391) + t1451*t312*t3408*t5512 + t7276*t8264 + 0.183*(-1.*t1451*t3603*t541 - 1.*t7053*t8264);
  p_output1(14)=-1.*t1449*t312 - 1.*t3179*t3603*t3815 - 0.17458*(-1.*t2369*t3603*t3815 - 1.*t3408*t3603*t5391) - 1.*t3408*t3603*t5512 + t7276*t8407 + 0.183*(-1.*t312*t541 - 1.*t7053*t8407);
  p_output1(15)=t3179*t7784 + t5512*t8453 - 0.17458*(t7878 + t5391*t8453) - 0.183*t7053*t8513 + t7276*t8513;
  p_output1(16)=t4598*t5512 + t3179*t8560 - 0.17458*(t4598*t5391 + t8612) - 0.183*t7053*t8670 + t7276*t8670;
  p_output1(17)=t312*t3179*t3408 - 1.*t312*t3815*t5512 + t8796 + t8816 + t8825;
  p_output1(18)=-0.047*t5391*t7668 + 0.047*t2369*t7784 - 0.17458*t7931 - 0.183*t7053*t8906 + t7276*t8906;
  p_output1(19)=0.047*t2369*t8560 - 0.047*t5391*t9010 - 0.17458*t9024 - 0.183*t7053*t9030 + t7276*t9030;
  p_output1(20)=0.047*t2369*t312*t3408 - 0.047*t312*t3815*t5391 + t8796 + t8816 + t8825;
  p_output1(21)=0.183*t312*t3281*t7053 + 0.183*t541*t7931 + 0.183*(-1.*t312*t3281*t7053 - 1.*t541*t7931);
  p_output1(22)=0.183*t1451*t312*t7053 + 0.183*t541*t9024 + 0.183*(-1.*t1451*t312*t7053 - 1.*t541*t9024);
  p_output1(23)=-0.183*t3603*t7053 + 0.183*t541*t8788 + 0.183*(t3603*t7053 - 1.*t541*t8788);
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



