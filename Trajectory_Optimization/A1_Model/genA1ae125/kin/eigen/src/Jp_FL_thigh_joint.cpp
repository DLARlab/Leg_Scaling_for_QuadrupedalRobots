/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:04:19 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_FL_thigh_joint.h"

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
  double t2789;
  double t3799;
  double t3648;
  double t3714;
  double t3890;
  double t2977;
  double t3726;
  double t4388;
  double t4407;
  double t4826;
  double t5519;
  double t5533;
  double t5989;
  double t669;
  double t2722;
  double t6522;
  double t6800;
  double t6817;
  double t6822;
  double t701;
  double t1312;
  double t1370;
  double t1742;
  double t3126;
  double t3379;
  double t5048;
  double t5050;
  double t5071;
  double t5440;
  double t6982;
  double t6992;
  double t6998;
  double t7003;
  double t7020;
  double t7025;
  double t6615;
  double t6798;
  double t7056;
  double t7057;
  double t7060;
  double t7232;
  double t7233;
  double t7238;
  double t7577;
  double t7605;
  double t7645;
  double t7945;
  double t7996;
  double t8018;
  double t8229;
  double t8232;
  double t8286;
  double t8383;
  double t8403;
  double t8411;
  double t8497;
  double t8498;
  double t8513;
  double t6460;
  double t8599;
  double t8690;
  double t9245;
  double t9264;
  double t9322;
  double t9547;
  double t9548;
  double t9613;
  double t9614;
  double t9632;
  double t9645;
  double t9646;
  double t8913;
  double t9360;
  double t9405;
  double t9446;
  double t9447;
  double t9467;
  double t9487;
  double t9650;
  double t9651;
  t2789 = Sin(var1[3]);
  t3799 = Cos(var1[3]);
  t3648 = Cos(var1[5]);
  t3714 = Sin(var1[4]);
  t3890 = Sin(var1[5]);
  t2977 = Sin(var1[9]);
  t3726 = -1.*t3648*t2789*t3714;
  t4388 = t3799*t3890;
  t4407 = t3726 + t4388;
  t4826 = Cos(var1[9]);
  t5519 = -1.*t3799*t3648;
  t5533 = -1.*t2789*t3714*t3890;
  t5989 = t5519 + t5533;
  t669 = Cos(var1[10]);
  t2722 = Cos(var1[4]);
  t6522 = Sin(var1[10]);
  t6800 = t4826*t4407;
  t6817 = -1.*t2977*t5989;
  t6822 = t6800 + t6817;
  t701 = -1.*t669;
  t1312 = 1. + t701;
  t1370 = 0.183*t1312;
  t1742 = 0. + t1370;
  t3126 = -0.047*t2977;
  t3379 = 0. + t3126;
  t5048 = -1.*t4826;
  t5050 = 1. + t5048;
  t5071 = 0.047*t5050;
  t5440 = 0. + t5071;
  t6982 = t3799*t3648*t3714;
  t6992 = t2789*t3890;
  t6998 = t6982 + t6992;
  t7003 = -1.*t3648*t2789;
  t7020 = t3799*t3714*t3890;
  t7025 = t7003 + t7020;
  t6615 = 0.183*t6522;
  t6798 = 0. + t6615;
  t7056 = t4826*t6998;
  t7057 = -1.*t2977*t7025;
  t7060 = t7056 + t7057;
  t7232 = t4826*t3799*t2722*t3648;
  t7233 = -1.*t3799*t2722*t2977*t3890;
  t7238 = t7232 + t7233;
  t7577 = t4826*t2722*t3648*t2789;
  t7605 = -1.*t2722*t2977*t2789*t3890;
  t7645 = t7577 + t7605;
  t7945 = -1.*t4826*t3648*t3714;
  t7996 = t2977*t3714*t3890;
  t8018 = t7945 + t7996;
  t8229 = t3648*t2789;
  t8232 = -1.*t3799*t3714*t3890;
  t8286 = t8229 + t8232;
  t8383 = -1.*t2977*t6998;
  t8403 = t4826*t8286;
  t8411 = t8383 + t8403;
  t8497 = t3648*t2789*t3714;
  t8498 = -1.*t3799*t3890;
  t8513 = t8497 + t8498;
  t6460 = t4826*t5989;
  t8599 = -1.*t2977*t8513;
  t8690 = t8599 + t6460;
  t9245 = -1.*t2722*t3648*t2977;
  t9264 = -1.*t4826*t2722*t3890;
  t9322 = t9245 + t9264;
  t9547 = -1.*t4826*t7025;
  t9548 = t8383 + t9547;
  t9613 = t3799*t3648;
  t9614 = t2789*t3714*t3890;
  t9632 = t9613 + t9614;
  t9645 = -1.*t4826*t9632;
  t9646 = t8599 + t9645;
  t8913 = t4826*t8513;
  t9360 = t6798*t9322;
  t9405 = -0.183*t6522*t9322;
  t9446 = t4826*t2722*t3648;
  t9447 = -1.*t2722*t2977*t3890;
  t9467 = t9446 + t9447;
  t9487 = 0.13205*t9467;
  t9650 = -1.*t2977*t9632;
  t9651 = t8913 + t9650;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=-1.*t1742*t2722*t2789 + t3379*t4407 + t5440*t5989 + 0.13205*(t2977*t4407 + t6460) + t6798*t6822 + 0.183*(-1.*t2722*t2789*t669 - 1.*t6522*t6822);
  p_output1(10)=t1742*t2722*t3799 + t3379*t6998 + t5440*t7025 + 0.13205*(t2977*t6998 + t4826*t7025) + t6798*t7060 + 0.183*(t2722*t3799*t669 - 1.*t6522*t7060);
  p_output1(11)=0;
  p_output1(12)=t2722*t3379*t3648*t3799 - 1.*t1742*t3714*t3799 + 0.13205*(t2722*t2977*t3648*t3799 + t2722*t3799*t3890*t4826) + t2722*t3799*t3890*t5440 + t6798*t7238 + 0.183*(-1.*t3714*t3799*t669 - 1.*t6522*t7238);
  p_output1(13)=t2722*t2789*t3379*t3648 - 1.*t1742*t2789*t3714 + 0.13205*(t2722*t2789*t2977*t3648 + t2722*t2789*t3890*t4826) + t2722*t2789*t3890*t5440 + t6798*t7645 + 0.183*(-1.*t2789*t3714*t669 - 1.*t6522*t7645);
  p_output1(14)=-1.*t1742*t2722 - 1.*t3379*t3648*t3714 + 0.13205*(-1.*t2977*t3648*t3714 - 1.*t3714*t3890*t4826) - 1.*t3714*t3890*t5440 + t6798*t8018 + 0.183*(-1.*t2722*t669 - 1.*t6522*t8018);
  p_output1(15)=t5440*t6998 + t3379*t8286 + 0.13205*(t7056 + t2977*t8286) - 0.183*t6522*t8411 + t6798*t8411;
  p_output1(16)=t3379*t5989 + t5440*t8513 - 0.183*t6522*t8690 + t6798*t8690 + 0.13205*(t2977*t5989 + t8913);
  p_output1(17)=-1.*t2722*t3379*t3890 + t2722*t3648*t5440 + t9360 + t9405 + t9487;
  p_output1(18)=0;
  p_output1(19)=0;
  p_output1(20)=0;
  p_output1(21)=0;
  p_output1(22)=0;
  p_output1(23)=0;
  p_output1(24)=0;
  p_output1(25)=0;
  p_output1(26)=0;
  p_output1(27)=-0.047*t4826*t6998 + 0.047*t2977*t7025 + 0.13205*t7060 - 0.183*t6522*t9548 + t6798*t9548;
  p_output1(28)=-0.047*t4826*t8513 + 0.047*t2977*t9632 - 0.183*t6522*t9646 + t6798*t9646 + 0.13205*t9651;
  p_output1(29)=0.047*t2722*t2977*t3890 - 0.047*t2722*t3648*t4826 + t9360 + t9405 + t9487;
  p_output1(30)=0.183*t2722*t3799*t6522 + 0.183*t669*t7060 + 0.183*(-1.*t2722*t3799*t6522 - 1.*t669*t7060);
  p_output1(31)=0.183*t2722*t2789*t6522 + 0.183*t669*t9651 + 0.183*(-1.*t2722*t2789*t6522 - 1.*t669*t9651);
  p_output1(32)=-0.183*t3714*t6522 + 0.183*t669*t9467 + 0.183*(t3714*t6522 - 1.*t669*t9467);
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


       
Eigen::Matrix<double,3,18> Jp_FL_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void Jp_FL_thigh_joint(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



