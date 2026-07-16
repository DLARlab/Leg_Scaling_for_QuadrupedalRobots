/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:13:47 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RR_thigh_joint.h"

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
  double t1547;
  double t2598;
  double t2300;
  double t2446;
  double t2865;
  double t1823;
  double t2455;
  double t2869;
  double t3379;
  double t3477;
  double t3738;
  double t3772;
  double t3802;
  double t606;
  double t1536;
  double t4458;
  double t4537;
  double t4722;
  double t5163;
  double t672;
  double t687;
  double t1043;
  double t1326;
  double t1868;
  double t1869;
  double t3510;
  double t3514;
  double t3701;
  double t3705;
  double t8656;
  double t8685;
  double t8712;
  double t8725;
  double t8742;
  double t8748;
  double t4491;
  double t4507;
  double t8780;
  double t8783;
  double t8785;
  double t8842;
  double t8846;
  double t8847;
  double t8870;
  double t8874;
  double t8875;
  double t8898;
  double t8899;
  double t8900;
  double t8914;
  double t8915;
  double t8916;
  double t8931;
  double t8944;
  double t8950;
  double t8961;
  double t8962;
  double t8965;
  double t4195;
  double t8969;
  double t8970;
  double t8999;
  double t9000;
  double t9001;
  double t9023;
  double t9025;
  double t9043;
  double t9044;
  double t9045;
  double t9047;
  double t9048;
  double t8981;
  double t9006;
  double t9007;
  double t9008;
  double t9009;
  double t9011;
  double t9012;
  double t9055;
  double t9056;
  t1547 = Sin(var1[3]);
  t2598 = Cos(var1[3]);
  t2300 = Cos(var1[5]);
  t2446 = Sin(var1[4]);
  t2865 = Sin(var1[5]);
  t1823 = Sin(var1[12]);
  t2455 = -1.*t2300*t1547*t2446;
  t2869 = t2598*t2865;
  t3379 = t2455 + t2869;
  t3477 = Cos(var1[12]);
  t3738 = -1.*t2598*t2300;
  t3772 = -1.*t1547*t2446*t2865;
  t3802 = t3738 + t3772;
  t606 = Cos(var1[13]);
  t1536 = Cos(var1[4]);
  t4458 = Sin(var1[13]);
  t4537 = t3477*t3379;
  t4722 = -1.*t1823*t3802;
  t5163 = t4537 + t4722;
  t672 = -1.*t606;
  t687 = 1. + t672;
  t1043 = -0.183*t687;
  t1326 = 0. + t1043;
  t1868 = 0.047*t1823;
  t1869 = 0. + t1868;
  t3510 = -1.*t3477;
  t3514 = 1. + t3510;
  t3701 = -0.047*t3514;
  t3705 = 0. + t3701;
  t8656 = t2598*t2300*t2446;
  t8685 = t1547*t2865;
  t8712 = t8656 + t8685;
  t8725 = -1.*t2300*t1547;
  t8742 = t2598*t2446*t2865;
  t8748 = t8725 + t8742;
  t4491 = -0.183*t4458;
  t4507 = 0. + t4491;
  t8780 = t3477*t8712;
  t8783 = -1.*t1823*t8748;
  t8785 = t8780 + t8783;
  t8842 = t3477*t2598*t1536*t2300;
  t8846 = -1.*t2598*t1536*t1823*t2865;
  t8847 = t8842 + t8846;
  t8870 = t3477*t1536*t2300*t1547;
  t8874 = -1.*t1536*t1823*t1547*t2865;
  t8875 = t8870 + t8874;
  t8898 = -1.*t3477*t2300*t2446;
  t8899 = t1823*t2446*t2865;
  t8900 = t8898 + t8899;
  t8914 = t2300*t1547;
  t8915 = -1.*t2598*t2446*t2865;
  t8916 = t8914 + t8915;
  t8931 = -1.*t1823*t8712;
  t8944 = t3477*t8916;
  t8950 = t8931 + t8944;
  t8961 = t2300*t1547*t2446;
  t8962 = -1.*t2598*t2865;
  t8965 = t8961 + t8962;
  t4195 = t3477*t3802;
  t8969 = -1.*t1823*t8965;
  t8970 = t8969 + t4195;
  t8999 = -1.*t1536*t2300*t1823;
  t9000 = -1.*t3477*t1536*t2865;
  t9001 = t8999 + t9000;
  t9023 = -1.*t3477*t8748;
  t9025 = t8931 + t9023;
  t9043 = t2598*t2300;
  t9044 = t1547*t2446*t2865;
  t9045 = t9043 + t9044;
  t9047 = -1.*t3477*t9045;
  t9048 = t8969 + t9047;
  t8981 = t3477*t8965;
  t9006 = t4507*t9001;
  t9007 = 0.183*t4458*t9001;
  t9008 = t3477*t1536*t2300;
  t9009 = -1.*t1536*t1823*t2865;
  t9011 = t9008 + t9009;
  t9012 = -0.08953*t9011;
  t9055 = -1.*t1823*t9045;
  t9056 = t8981 + t9055;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=-1.*t1326*t1536*t1547 + t1869*t3379 + t3705*t3802 - 0.08953*(t1823*t3379 + t4195) + t4507*t5163 - 0.183*(-1.*t4458*t5163 - 1.*t1536*t1547*t606);
  p_output1(10)=t1326*t1536*t2598 + t1869*t8712 + t3705*t8748 - 0.08953*(t1823*t8712 + t3477*t8748) + t4507*t8785 - 0.183*(t1536*t2598*t606 - 1.*t4458*t8785);
  p_output1(11)=0;
  p_output1(12)=t1536*t1869*t2300*t2598 - 1.*t1326*t2446*t2598 - 0.08953*(t1536*t1823*t2300*t2598 + t1536*t2598*t2865*t3477) + t1536*t2598*t2865*t3705 + t4507*t8847 - 0.183*(-1.*t2446*t2598*t606 - 1.*t4458*t8847);
  p_output1(13)=t1536*t1547*t1869*t2300 - 1.*t1326*t1547*t2446 - 0.08953*(t1536*t1547*t1823*t2300 + t1536*t1547*t2865*t3477) + t1536*t1547*t2865*t3705 + t4507*t8875 - 0.183*(-1.*t1547*t2446*t606 - 1.*t4458*t8875);
  p_output1(14)=-1.*t1326*t1536 - 1.*t1869*t2300*t2446 - 0.08953*(-1.*t1823*t2300*t2446 - 1.*t2446*t2865*t3477) - 1.*t2446*t2865*t3705 + t4507*t8900 - 0.183*(-1.*t1536*t606 - 1.*t4458*t8900);
  p_output1(15)=t3705*t8712 + t1869*t8916 - 0.08953*(t8780 + t1823*t8916) + 0.183*t4458*t8950 + t4507*t8950;
  p_output1(16)=t1869*t3802 + t3705*t8965 + 0.183*t4458*t8970 + t4507*t8970 - 0.08953*(t1823*t3802 + t8981);
  p_output1(17)=-1.*t1536*t1869*t2865 + t1536*t2300*t3705 + t9006 + t9007 + t9012;
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
  p_output1(36)=0.047*t3477*t8712 - 0.047*t1823*t8748 - 0.08953*t8785 + 0.183*t4458*t9025 + t4507*t9025;
  p_output1(37)=0.047*t3477*t8965 - 0.047*t1823*t9045 + 0.183*t4458*t9048 + t4507*t9048 - 0.08953*t9056;
  p_output1(38)=-0.047*t1536*t1823*t2865 + 0.047*t1536*t2300*t3477 + t9006 + t9007 + t9012;
  p_output1(39)=-0.183*t1536*t2598*t4458 - 0.183*t606*t8785 - 0.183*(-1.*t1536*t2598*t4458 - 1.*t606*t8785);
  p_output1(40)=-0.183*t1536*t1547*t4458 - 0.183*t606*t9056 - 0.183*(-1.*t1536*t1547*t4458 - 1.*t606*t9056);
  p_output1(41)=0.183*t2446*t4458 - 0.183*t606*t9011 - 0.183*(t2446*t4458 - 1.*t606*t9011);
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


       
Eigen::Matrix<double,3,18> Jp_RR_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void Jp_RR_thigh_joint(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



