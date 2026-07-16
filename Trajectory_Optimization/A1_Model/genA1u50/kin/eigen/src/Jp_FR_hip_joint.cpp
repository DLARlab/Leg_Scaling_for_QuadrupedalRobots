/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:13:31 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_FR_hip_joint.h"

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
  double t174;
  double t3735;
  double t4573;
  double t2819;
  double t7834;
  double t1511;
  double t4188;
  double t7848;
  double t7856;
  double t7859;
  double t7860;
  double t7862;
  double t7865;
  double t110;
  double t1542;
  double t1757;
  double t2062;
  double t2166;
  double t7866;
  double t7867;
  double t7878;
  double t7879;
  double t7880;
  double t7882;
  double t7883;
  double t7884;
  double t7918;
  double t7919;
  double t7920;
  double t7929;
  double t7930;
  double t7931;
  double t7923;
  double t7936;
  double t7956;
  double t7957;
  double t7958;
  double t7943;
  double t7944;
  double t7945;
  double t7947;
  t174 = Sin(var1[3]);
  t3735 = Cos(var1[5]);
  t4573 = Sin(var1[4]);
  t2819 = Cos(var1[3]);
  t7834 = Sin(var1[5]);
  t1511 = Cos(var1[6]);
  t4188 = -1.*t2819*t3735;
  t7848 = -1.*t174*t4573*t7834;
  t7856 = t4188 + t7848;
  t7859 = -1.*t3735*t174*t4573;
  t7860 = t2819*t7834;
  t7862 = t7859 + t7860;
  t7865 = Sin(var1[6]);
  t110 = Cos(var1[4]);
  t1542 = -1.*t1511;
  t1757 = 1. + t1542;
  t2062 = -0.047*t1757;
  t2166 = 0. + t2062;
  t7866 = 0.047*t7865;
  t7867 = 0. + t7866;
  t7878 = -1.*t3735*t174;
  t7879 = t2819*t4573*t7834;
  t7880 = t7878 + t7879;
  t7882 = t2819*t3735*t4573;
  t7883 = t174*t7834;
  t7884 = t7882 + t7883;
  t7918 = t3735*t174;
  t7919 = -1.*t2819*t4573*t7834;
  t7920 = t7918 + t7919;
  t7929 = t3735*t174*t4573;
  t7930 = -1.*t2819*t7834;
  t7931 = t7929 + t7930;
  t7923 = t1511*t7884;
  t7936 = t1511*t7931;
  t7956 = t2819*t3735;
  t7957 = t174*t4573*t7834;
  t7958 = t7956 + t7957;
  t7943 = t110*t3735*t1511;
  t7944 = -1.*t110*t7834*t7865;
  t7945 = t7943 + t7944;
  t7947 = -0.047*t7945;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=-0.183*t110*t174 + t2166*t7856 - 0.047*(t1511*t7856 + t7862*t7865) + t7862*t7867;
  p_output1(10)=0.183*t110*t2819 + t2166*t7880 + t7867*t7884 - 0.047*(t1511*t7880 + t7865*t7884);
  p_output1(11)=0;
  p_output1(12)=-0.183*t2819*t4573 + t110*t2166*t2819*t7834 - 0.047*(t110*t1511*t2819*t7834 + t110*t2819*t3735*t7865) + t110*t2819*t3735*t7867;
  p_output1(13)=-0.183*t174*t4573 + t110*t174*t2166*t7834 - 0.047*(t110*t1511*t174*t7834 + t110*t174*t3735*t7865) + t110*t174*t3735*t7867;
  p_output1(14)=-0.183*t110 - 1.*t2166*t4573*t7834 - 0.047*(-1.*t1511*t4573*t7834 - 1.*t3735*t4573*t7865) - 1.*t3735*t4573*t7867;
  p_output1(15)=t2166*t7884 + t7867*t7920 - 0.047*(t7865*t7920 + t7923);
  p_output1(16)=t7856*t7867 + t2166*t7931 - 0.047*(t7856*t7865 + t7936);
  p_output1(17)=t110*t2166*t3735 - 1.*t110*t7834*t7867 + t7947;
  p_output1(18)=-0.047*t7865*t7880 + 0.047*t1511*t7884 - 0.047*(-1.*t7865*t7880 + t7923);
  p_output1(19)=0.047*t1511*t7931 - 0.047*t7865*t7958 - 0.047*(t7936 - 1.*t7865*t7958);
  p_output1(20)=0.047*t110*t1511*t3735 - 0.047*t110*t7834*t7865 + t7947;
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


       
Eigen::Matrix<double,3,18> Jp_FR_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void Jp_FR_hip_joint(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



