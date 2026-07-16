/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:13:42 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FL_calf_joint.h"

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
static void output1(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  double t1784;
  double t3880;
  double t5706;
  double t5462;
  double t5713;
  double t3509;
  double t5465;
  double t8602;
  double t8626;
  double t8633;
  double t8648;
  double t8649;
  double t8651;
  double t2049;
  double t8671;
  double t582;
  double t8680;
  double t8682;
  double t8684;
  double t8688;
  double t8693;
  double t8699;
  double t8704;
  double t8707;
  double t8708;
  double t8709;
  double t8716;
  double t8720;
  double t8721;
  double t1057;
  double t1197;
  double t1625;
  double t1703;
  double t3697;
  double t3698;
  double t8639;
  double t8640;
  double t8643;
  double t8646;
  double t8737;
  double t8738;
  double t8741;
  double t8743;
  double t8744;
  double t8745;
  double t8678;
  double t8679;
  double t8703;
  double t8705;
  double t8706;
  double t8751;
  double t8752;
  double t8753;
  double t8712;
  double t8714;
  double t8715;
  double t8755;
  double t8756;
  double t8757;
  double t8761;
  double t8763;
  double t8765;
  double t8786;
  double t8787;
  double t8788;
  double t8790;
  double t8791;
  double t8792;
  double t8794;
  double t8795;
  double t8796;
  t1784 = Cos(var1[3]);
  t3880 = Cos(var1[5]);
  t5706 = Sin(var1[3]);
  t5462 = Sin(var1[4]);
  t5713 = Sin(var1[5]);
  t3509 = Sin(var1[9]);
  t5465 = t1784*t3880*t5462;
  t8602 = t5706*t5713;
  t8626 = t5465 + t8602;
  t8633 = Cos(var1[9]);
  t8648 = -1.*t3880*t5706;
  t8649 = t1784*t5462*t5713;
  t8651 = t8648 + t8649;
  t2049 = Cos(var1[4]);
  t8671 = Sin(var1[10]);
  t582 = Cos(var1[10]);
  t8680 = t8633*t8626;
  t8682 = -1.*t3509*t8651;
  t8684 = t8680 + t8682;
  t8688 = Cos(var1[11]);
  t8693 = -1.*t8688;
  t8699 = 1. + t8693;
  t8704 = Sin(var1[11]);
  t8707 = t1784*t2049*t8671;
  t8708 = t582*t8684;
  t8709 = t8707 + t8708;
  t8716 = t582*t1784*t2049;
  t8720 = -1.*t8671*t8684;
  t8721 = t8716 + t8720;
  t1057 = -1.*t582;
  t1197 = 1. + t1057;
  t1625 = 0.183*t1197;
  t1703 = 0. + t1625;
  t3697 = -0.047*t3509;
  t3698 = 0. + t3697;
  t8639 = -1.*t8633;
  t8640 = 1. + t8639;
  t8643 = 0.047*t8640;
  t8646 = 0. + t8643;
  t8737 = t3880*t5706*t5462;
  t8738 = -1.*t1784*t5713;
  t8741 = t8737 + t8738;
  t8743 = t1784*t3880;
  t8744 = t5706*t5462*t5713;
  t8745 = t8743 + t8744;
  t8678 = 0.183*t8671;
  t8679 = 0. + t8678;
  t8703 = -0.1*t8699;
  t8705 = 0.183*t8704;
  t8706 = 0. + t8703 + t8705;
  t8751 = t8633*t8741;
  t8752 = -1.*t3509*t8745;
  t8753 = t8751 + t8752;
  t8712 = 0.183*t8699;
  t8714 = 0.1*t8704;
  t8715 = 0. + t8712 + t8714;
  t8755 = t2049*t8671*t5706;
  t8756 = t582*t8753;
  t8757 = t8755 + t8756;
  t8761 = t582*t2049*t5706;
  t8763 = -1.*t8671*t8753;
  t8765 = t8761 + t8763;
  t8786 = t8633*t2049*t3880;
  t8787 = -1.*t2049*t3509*t5713;
  t8788 = t8786 + t8787;
  t8790 = -1.*t8671*t5462;
  t8791 = t582*t8788;
  t8792 = t8790 + t8791;
  t8794 = -1.*t582*t5462;
  t8795 = -1.*t8671*t8788;
  t8796 = t8794 + t8795;

  p_output1(0)=0. + t1703*t1784*t2049 + t3698*t8626 + t8646*t8651 + 0.08953*(t3509*t8626 + t8633*t8651) + t8679*t8684 + t8706*t8709 + t8715*t8721 + 0.183*(-1.*t8704*t8709 + t8688*t8721) - 0.1*(t8688*t8709 + t8704*t8721) + var1(0);
  p_output1(1)=0. + t1703*t2049*t5706 + t3698*t8741 + t8646*t8745 + 0.08953*(t3509*t8741 + t8633*t8745) + t8679*t8753 + t8706*t8757 + t8715*t8765 + 0.183*(-1.*t8704*t8757 + t8688*t8765) - 0.1*(t8688*t8757 + t8704*t8765) + var1(1);
  p_output1(2)=0. + t2049*t3698*t3880 - 1.*t1703*t5462 + 0.08953*(t2049*t3509*t3880 + t2049*t5713*t8633) + t2049*t5713*t8646 + t8679*t8788 + t8706*t8792 + t8715*t8796 + 0.183*(-1.*t8704*t8792 + t8688*t8796) - 0.1*(t8688*t8792 + t8704*t8796) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_FL_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_FL_calf_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



