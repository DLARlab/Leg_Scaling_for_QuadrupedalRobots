/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:04:25 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RR_hip_joint.h"

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
  double t138;
  double t1284;
  double t1232;
  double t1235;
  double t1302;
  double t1007;
  double t1239;
  double t1304;
  double t1306;
  double t1325;
  double t3756;
  double t3787;
  double t3812;
  double t98;
  double t1146;
  double t1191;
  double t1357;
  double t3561;
  double t3569;
  double t3592;
  double t3837;
  double t3838;
  double t3840;
  double t3861;
  double t3866;
  double t3885;
  double t4088;
  double t4090;
  double t4091;
  double t4124;
  double t4129;
  double t4132;
  double t4095;
  double t4158;
  double t4266;
  double t4294;
  double t4297;
  double t4204;
  double t4205;
  double t4207;
  double t4213;
  t138 = Sin(var1[3]);
  t1284 = Cos(var1[3]);
  t1232 = Cos(var1[5]);
  t1235 = Sin(var1[4]);
  t1302 = Sin(var1[5]);
  t1007 = Sin(var1[12]);
  t1239 = -1.*t1232*t138*t1235;
  t1304 = t1284*t1302;
  t1306 = t1239 + t1304;
  t1325 = Cos(var1[12]);
  t3756 = -1.*t1284*t1232;
  t3787 = -1.*t138*t1235*t1302;
  t3812 = t3756 + t3787;
  t98 = Cos(var1[4]);
  t1146 = 0.047*t1007;
  t1191 = 0. + t1146;
  t1357 = -1.*t1325;
  t3561 = 1. + t1357;
  t3569 = -0.047*t3561;
  t3592 = 0. + t3569;
  t3837 = t1284*t1232*t1235;
  t3838 = t138*t1302;
  t3840 = t3837 + t3838;
  t3861 = -1.*t1232*t138;
  t3866 = t1284*t1235*t1302;
  t3885 = t3861 + t3866;
  t4088 = t1232*t138;
  t4090 = -1.*t1284*t1235*t1302;
  t4091 = t4088 + t4090;
  t4124 = t1232*t138*t1235;
  t4129 = -1.*t1284*t1302;
  t4132 = t4124 + t4129;
  t4095 = t1325*t3840;
  t4158 = t1325*t4132;
  t4266 = t1284*t1232;
  t4294 = t138*t1235*t1302;
  t4297 = t4266 + t4294;
  t4204 = t1325*t98*t1232;
  t4205 = -1.*t98*t1007*t1302;
  t4207 = t4204 + t4205;
  t4213 = -0.047*t4207;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t1191*t1306 + t3592*t3812 - 0.047*(t1007*t1306 + t1325*t3812) + 0.183*t138*t98;
  p_output1(10)=t1191*t3840 + t3592*t3885 - 0.047*(t1007*t3840 + t1325*t3885) - 0.183*t1284*t98;
  p_output1(11)=0;
  p_output1(12)=0.183*t1235*t1284 + t1191*t1232*t1284*t98 + t1284*t1302*t3592*t98 - 0.047*(t1007*t1232*t1284*t98 + t1284*t1302*t1325*t98);
  p_output1(13)=0.183*t1235*t138 + t1191*t1232*t138*t98 + t1302*t138*t3592*t98 - 0.047*(t1007*t1232*t138*t98 + t1302*t1325*t138*t98);
  p_output1(14)=-1.*t1191*t1232*t1235 - 0.047*(-1.*t1007*t1232*t1235 - 1.*t1235*t1302*t1325) - 1.*t1235*t1302*t3592 + 0.183*t98;
  p_output1(15)=t3592*t3840 + t1191*t4091 - 0.047*(t1007*t4091 + t4095);
  p_output1(16)=t1191*t3812 + t3592*t4132 - 0.047*(t1007*t3812 + t4158);
  p_output1(17)=t4213 - 1.*t1191*t1302*t98 + t1232*t3592*t98;
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
  p_output1(36)=0.047*t1325*t3840 - 0.047*t1007*t3885 - 0.047*(-1.*t1007*t3885 + t4095);
  p_output1(37)=0.047*t1325*t4132 - 0.047*t1007*t4297 - 0.047*(t4158 - 1.*t1007*t4297);
  p_output1(38)=t4213 - 0.047*t1007*t1302*t98 + 0.047*t1232*t1325*t98;
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


       
Eigen::Matrix<double,3,18> Jp_RR_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void Jp_RR_hip_joint(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



