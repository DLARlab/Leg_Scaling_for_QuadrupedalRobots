/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:26:41 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FL_calf_joint.h"

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
static void output1(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  double t539;
  double t2060;
  double t2243;
  double t2149;
  double t2301;
  double t1628;
  double t1107;
  double t1523;
  double t1820;
  double t2205;
  double t2308;
  double t2329;
  double t2668;
  double t2781;
  double t2824;
  double t2840;
  double t2990;
  double t3032;
  double t3061;
  double t503;
  double t3378;
  double t3757;
  double t3772;
  double t3807;
  double t3825;
  double t3864;
  double t3872;
  double t3879;
  double t3880;
  double t3978;
  double t4352;
  double t4412;
  double t4431;
  double t1593;
  double t3110;
  double t3142;
  double t3380;
  double t3520;
  double t3548;
  double t3718;
  double t3981;
  double t4107;
  double t4196;
  double t4247;
  double t4325;
  double t4346;
  double t4436;
  double t4514;
  double t4691;
  double t4721;
  double t4738;
  double t4752;
  double t4778;
  double t4825;
  double t5260;
  double t5279;
  double t3215;
  double t3587;
  double t3703;
  double t4894;
  double t4896;
  double t4902;
  double t5050;
  double t5064;
  double t5075;
  double t5151;
  double t5156;
  double t5177;
  double t5194;
  double t5204;
  double t5218;
  double t5219;
  double t4828;
  double t4834;
  double t4865;
  double t5234;
  double t5242;
  double t5302;
  double t5312;
  double t5319;
  double t5326;
  double t5384;
  double t5403;
  double t4138;
  double t4327;
  double t4336;
  double t4951;
  double t4963;
  double t4976;
  double t4869;
  double t4875;
  double t4877;
  double t4558;
  double t4745;
  double t4751;
  double t5005;
  double t5024;
  double t5043;
  t539 = Cos(var1[3]);
  t2060 = Cos(var1[5]);
  t2243 = Sin(var1[3]);
  t2149 = Sin(var1[4]);
  t2301 = Sin(var1[5]);
  t1628 = Cos(var1[10]);
  t1107 = Cos(var1[4]);
  t1523 = Sin(var1[10]);
  t1820 = Cos(var1[9]);
  t2205 = t539*t2060*t2149;
  t2308 = t2243*t2301;
  t2329 = t2205 + t2308;
  t2668 = t1820*t2329;
  t2781 = Sin(var1[9]);
  t2824 = -1.*t2060*t2243;
  t2840 = t539*t2149*t2301;
  t2990 = t2824 + t2840;
  t3032 = -1.*t2781*t2990;
  t3061 = t2668 + t3032;
  t503 = Sin(var1[11]);
  t3378 = Cos(var1[11]);
  t3757 = t2060*t2243*t2149;
  t3772 = -1.*t539*t2301;
  t3807 = t3757 + t3772;
  t3825 = t1820*t3807;
  t3864 = t539*t2060;
  t3872 = t2243*t2149*t2301;
  t3879 = t3864 + t3872;
  t3880 = -1.*t2781*t3879;
  t3978 = t3825 + t3880;
  t4352 = t1820*t1107*t2060;
  t4412 = -1.*t1107*t2781*t2301;
  t4431 = t4352 + t4412;
  t1593 = t539*t1107*t1523;
  t3110 = t1628*t3061;
  t3142 = t1593 + t3110;
  t3380 = t1628*t539*t1107;
  t3520 = -1.*t1523*t3061;
  t3548 = t3380 + t3520;
  t3718 = t1107*t1523*t2243;
  t3981 = t1628*t3978;
  t4107 = t3718 + t3981;
  t4196 = t1628*t1107*t2243;
  t4247 = -1.*t1523*t3978;
  t4325 = t4196 + t4247;
  t4346 = -1.*t1523*t2149;
  t4436 = t1628*t4431;
  t4514 = t4346 + t4436;
  t4691 = -1.*t1628*t2149;
  t4721 = -1.*t1523*t4431;
  t4738 = t4691 + t4721;
  t4752 = t2781*t2329;
  t4778 = t1820*t2990;
  t4825 = t4752 + t4778;
  t5260 = -1.*t3378;
  t5279 = 1. + t5260;
  t3215 = -1.*t503*t3142;
  t3587 = t3378*t3548;
  t3703 = t3215 + t3587;
  t4894 = t3378*t3142;
  t4896 = t503*t3548;
  t4902 = t4894 + t4896;
  t5050 = -1.*t1628;
  t5064 = 1. + t5050;
  t5075 = 0.183*t5064;
  t5151 = 0. + t5075;
  t5156 = -0.047*t2781;
  t5177 = 0. + t5156;
  t5194 = -1.*t1820;
  t5204 = 1. + t5194;
  t5218 = 0.047*t5204;
  t5219 = 0. + t5218;
  t4828 = t2781*t3807;
  t4834 = t1820*t3879;
  t4865 = t4828 + t4834;
  t5234 = 0.183*t1523;
  t5242 = 0. + t5234;
  t5302 = -0.3*t5279;
  t5312 = 0.183*t503;
  t5319 = 0. + t5302 + t5312;
  t5326 = 0.183*t5279;
  t5384 = 0.3*t503;
  t5403 = 0. + t5326 + t5384;
  t4138 = -1.*t503*t4107;
  t4327 = t3378*t4325;
  t4336 = t4138 + t4327;
  t4951 = t3378*t4107;
  t4963 = t503*t4325;
  t4976 = t4951 + t4963;
  t4869 = t1107*t2060*t2781;
  t4875 = t1820*t1107*t2301;
  t4877 = t4869 + t4875;
  t4558 = -1.*t503*t4514;
  t4745 = t3378*t4738;
  t4751 = t4558 + t4745;
  t5005 = t3378*t4514;
  t5024 = t503*t4738;
  t5043 = t5005 + t5024;

  p_output1(0)=t3703;
  p_output1(1)=t4336;
  p_output1(2)=t4751;
  p_output1(3)=0.;
  p_output1(4)=t4825;
  p_output1(5)=t4865;
  p_output1(6)=t4877;
  p_output1(7)=0.;
  p_output1(8)=t4902;
  p_output1(9)=t4976;
  p_output1(10)=t5043;
  p_output1(11)=0.;
  p_output1(12)=0. + 0.183*t3703 + 0.17458*t4825 - 0.3*t4902 + t2329*t5177 + t2990*t5219 + t3061*t5242 + t3142*t5319 + t1107*t5151*t539 + t3548*t5403 + var1(0);
  p_output1(13)=0. + 0.183*t4336 + 0.17458*t4865 - 0.3*t4976 + t1107*t2243*t5151 + t3807*t5177 + t3879*t5219 + t3978*t5242 + t4107*t5319 + t4325*t5403 + var1(1);
  p_output1(14)=0. + 0.183*t4751 + 0.17458*t4877 - 0.3*t5043 - 1.*t2149*t5151 + t1107*t2060*t5177 + t1107*t2301*t5219 + t4431*t5242 + t4514*t5319 + t4738*t5403 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_FL_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void H_FL_calf_joint(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



