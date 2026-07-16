/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:18:41 GMT-05:00
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
  double t1498;
  double t3109;
  double t3210;
  double t3037;
  double t3630;
  double t1804;
  double t3180;
  double t3790;
  double t3798;
  double t4277;
  double t4278;
  double t5027;
  double t5071;
  double t25;
  double t1021;
  double t6256;
  double t6362;
  double t6565;
  double t6579;
  double t1027;
  double t1055;
  double t1203;
  double t1487;
  double t2394;
  double t2494;
  double t2933;
  double t3036;
  double t5270;
  double t5373;
  double t7338;
  double t7404;
  double t7462;
  double t7480;
  double t7494;
  double t7517;
  double t6620;
  double t6858;
  double t7830;
  double t7858;
  double t7859;
  double t8045;
  double t8060;
  double t8101;
  double t8360;
  double t8367;
  double t8378;
  double t8451;
  double t8452;
  double t8454;
  double t8510;
  double t8519;
  double t8528;
  double t8572;
  double t8573;
  double t8580;
  double t8595;
  double t8598;
  double t8601;
  double t5558;
  double t8635;
  double t8640;
  double t8690;
  double t8701;
  double t8753;
  double t8801;
  double t8803;
  double t8611;
  double t8873;
  double t8885;
  double t8903;
  double t8964;
  double t8976;
  double t8674;
  double t8676;
  double t8681;
  double t8684;
  double t8777;
  double t8779;
  double t8929;
  double t8933;
  t1498 = Sin(var1[3]);
  t3109 = Cos(var1[5]);
  t3210 = Sin(var1[4]);
  t3037 = Cos(var1[3]);
  t3630 = Sin(var1[5]);
  t1804 = Cos(var1[6]);
  t3180 = -1.*t3037*t3109;
  t3790 = -1.*t1498*t3210*t3630;
  t3798 = t3180 + t3790;
  t4277 = -1.*t3109*t1498*t3210;
  t4278 = t3037*t3630;
  t5027 = t4277 + t4278;
  t5071 = Sin(var1[6]);
  t25 = Cos(var1[4]);
  t1021 = Cos(var1[7]);
  t6256 = t1804*t5027;
  t6362 = -1.*t3798*t5071;
  t6565 = t6256 + t6362;
  t6579 = Sin(var1[7]);
  t1027 = -1.*t1021;
  t1055 = 1. + t1027;
  t1203 = 0.183*t1055;
  t1487 = 0. + t1203;
  t2394 = -1.*t1804;
  t2494 = 1. + t2394;
  t2933 = -0.047*t2494;
  t3036 = 0. + t2933;
  t5270 = 0.047*t5071;
  t5373 = 0. + t5270;
  t7338 = -1.*t3109*t1498;
  t7404 = t3037*t3210*t3630;
  t7462 = t7338 + t7404;
  t7480 = t3037*t3109*t3210;
  t7494 = t1498*t3630;
  t7517 = t7480 + t7494;
  t6620 = 0.183*t6579;
  t6858 = 0. + t6620;
  t7830 = t1804*t7517;
  t7858 = -1.*t7462*t5071;
  t7859 = t7830 + t7858;
  t8045 = t3037*t25*t3109*t1804;
  t8060 = -1.*t3037*t25*t3630*t5071;
  t8101 = t8045 + t8060;
  t8360 = t25*t3109*t1804*t1498;
  t8367 = -1.*t25*t1498*t3630*t5071;
  t8378 = t8360 + t8367;
  t8451 = -1.*t3109*t1804*t3210;
  t8452 = t3210*t3630*t5071;
  t8454 = t8451 + t8452;
  t8510 = t3109*t1498;
  t8519 = -1.*t3037*t3210*t3630;
  t8528 = t8510 + t8519;
  t8572 = t1804*t8528;
  t8573 = -1.*t7517*t5071;
  t8580 = t8572 + t8573;
  t8595 = t3109*t1498*t3210;
  t8598 = -1.*t3037*t3630;
  t8601 = t8595 + t8598;
  t5558 = t1804*t3798;
  t8635 = -1.*t8601*t5071;
  t8640 = t5558 + t8635;
  t8690 = -1.*t25*t1804*t3630;
  t8701 = -1.*t25*t3109*t5071;
  t8753 = t8690 + t8701;
  t8801 = -1.*t1804*t7462;
  t8803 = t8801 + t8573;
  t8611 = t1804*t8601;
  t8873 = t3037*t3109;
  t8885 = t1498*t3210*t3630;
  t8903 = t8873 + t8885;
  t8964 = -1.*t1804*t8903;
  t8976 = t8964 + t8635;
  t8674 = t25*t3109*t1804;
  t8676 = -1.*t25*t3630*t5071;
  t8681 = t8674 + t8676;
  t8684 = -0.11079*t8681;
  t8777 = t8753*t6858;
  t8779 = -0.183*t8753*t6579;
  t8929 = -1.*t8903*t5071;
  t8933 = t8611 + t8929;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=-1.*t1487*t1498*t25 + t3036*t3798 + t5027*t5373 - 0.11079*(t5027*t5071 + t5558) + 0.183*(-1.*t1021*t1498*t25 - 1.*t6565*t6579) + t6565*t6858;
  p_output1(10)=t1487*t25*t3037 + t3036*t7462 + t5373*t7517 - 0.11079*(t1804*t7462 + t5071*t7517) + t6858*t7859 + 0.183*(t1021*t25*t3037 - 1.*t6579*t7859);
  p_output1(11)=0;
  p_output1(12)=-1.*t1487*t3037*t3210 + t25*t3036*t3037*t3630 - 0.11079*(t1804*t25*t3037*t3630 + t25*t3037*t3109*t5071) + t25*t3037*t3109*t5373 + t6858*t8101 + 0.183*(-1.*t1021*t3037*t3210 - 1.*t6579*t8101);
  p_output1(13)=-1.*t1487*t1498*t3210 + t1498*t25*t3036*t3630 - 0.11079*(t1498*t1804*t25*t3630 + t1498*t25*t3109*t5071) + t1498*t25*t3109*t5373 + t6858*t8378 + 0.183*(-1.*t1021*t1498*t3210 - 1.*t6579*t8378);
  p_output1(14)=-1.*t1487*t25 - 1.*t3036*t3210*t3630 - 0.11079*(-1.*t1804*t3210*t3630 - 1.*t3109*t3210*t5071) - 1.*t3109*t3210*t5373 + t6858*t8454 + 0.183*(-1.*t1021*t25 - 1.*t6579*t8454);
  p_output1(15)=t3036*t7517 + t5373*t8528 - 0.11079*(t7830 + t5071*t8528) - 0.183*t6579*t8580 + t6858*t8580;
  p_output1(16)=t3798*t5373 + t3036*t8601 - 0.11079*(t3798*t5071 + t8611) - 0.183*t6579*t8640 + t6858*t8640;
  p_output1(17)=t25*t3036*t3109 - 1.*t25*t3630*t5373 + t8684 + t8777 + t8779;
  p_output1(18)=-0.047*t5071*t7462 + 0.047*t1804*t7517 - 0.11079*t7859 - 0.183*t6579*t8803 + t6858*t8803;
  p_output1(19)=0.047*t1804*t8601 - 0.047*t5071*t8903 - 0.11079*t8933 - 0.183*t6579*t8976 + t6858*t8976;
  p_output1(20)=0.047*t1804*t25*t3109 - 0.047*t25*t3630*t5071 + t8684 + t8777 + t8779;
  p_output1(21)=0.183*t25*t3037*t6579 + 0.183*t1021*t7859 + 0.183*(-1.*t25*t3037*t6579 - 1.*t1021*t7859);
  p_output1(22)=0.183*t1498*t25*t6579 + 0.183*t1021*t8933 + 0.183*(-1.*t1498*t25*t6579 - 1.*t1021*t8933);
  p_output1(23)=-0.183*t3210*t6579 + 0.183*t1021*t8681 + 0.183*(t3210*t6579 - 1.*t1021*t8681);
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



