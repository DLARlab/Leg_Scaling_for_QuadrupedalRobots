/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:51:36 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_FL_hip_joint.h"

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
  double t1484;
  double t4090;
  double t3746;
  double t3847;
  double t4092;
  double t2144;
  double t4051;
  double t4109;
  double t4256;
  double t4349;
  double t4437;
  double t4440;
  double t4488;
  double t1125;
  double t3473;
  double t3716;
  double t4360;
  double t4405;
  double t4408;
  double t4426;
  double t4629;
  double t4647;
  double t4652;
  double t4678;
  double t4694;
  double t4700;
  double t5202;
  double t5211;
  double t5231;
  double t5342;
  double t5352;
  double t5355;
  double t5244;
  double t5365;
  double t6037;
  double t6050;
  double t6075;
  double t5464;
  double t5488;
  double t5538;
  double t5588;
  t1484 = Sin(var1[3]);
  t4090 = Cos(var1[3]);
  t3746 = Cos(var1[5]);
  t3847 = Sin(var1[4]);
  t4092 = Sin(var1[5]);
  t2144 = Sin(var1[9]);
  t4051 = -1.*t3746*t1484*t3847;
  t4109 = t4090*t4092;
  t4256 = t4051 + t4109;
  t4349 = Cos(var1[9]);
  t4437 = -1.*t4090*t3746;
  t4440 = -1.*t1484*t3847*t4092;
  t4488 = t4437 + t4440;
  t1125 = Cos(var1[4]);
  t3473 = -0.047*t2144;
  t3716 = 0. + t3473;
  t4360 = -1.*t4349;
  t4405 = 1. + t4360;
  t4408 = 0.047*t4405;
  t4426 = 0. + t4408;
  t4629 = t4090*t3746*t3847;
  t4647 = t1484*t4092;
  t4652 = t4629 + t4647;
  t4678 = -1.*t3746*t1484;
  t4694 = t4090*t3847*t4092;
  t4700 = t4678 + t4694;
  t5202 = t3746*t1484;
  t5211 = -1.*t4090*t3847*t4092;
  t5231 = t5202 + t5211;
  t5342 = t3746*t1484*t3847;
  t5352 = -1.*t4090*t4092;
  t5355 = t5342 + t5352;
  t5244 = t4349*t4652;
  t5365 = t4349*t5355;
  t6037 = t4090*t3746;
  t6050 = t1484*t3847*t4092;
  t6075 = t6037 + t6050;
  t5464 = t4349*t1125*t3746;
  t5488 = -1.*t1125*t2144*t4092;
  t5538 = t5464 + t5488;
  t5588 = 0.047*t5538;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=-0.183*t1125*t1484 + t3716*t4256 + t4426*t4488 + 0.047*(t2144*t4256 + t4349*t4488);
  p_output1(10)=0.183*t1125*t4090 + t3716*t4652 + t4426*t4700 + 0.047*(t2144*t4652 + t4349*t4700);
  p_output1(11)=0;
  p_output1(12)=t1125*t3716*t3746*t4090 - 0.183*t3847*t4090 + 0.047*(t1125*t2144*t3746*t4090 + t1125*t4090*t4092*t4349) + t1125*t4090*t4092*t4426;
  p_output1(13)=t1125*t1484*t3716*t3746 - 0.183*t1484*t3847 + 0.047*(t1125*t1484*t2144*t3746 + t1125*t1484*t4092*t4349) + t1125*t1484*t4092*t4426;
  p_output1(14)=-0.183*t1125 - 1.*t3716*t3746*t3847 + 0.047*(-1.*t2144*t3746*t3847 - 1.*t3847*t4092*t4349) - 1.*t3847*t4092*t4426;
  p_output1(15)=t4426*t4652 + t3716*t5231 + 0.047*(t2144*t5231 + t5244);
  p_output1(16)=t3716*t4488 + t4426*t5355 + 0.047*(t2144*t4488 + t5365);
  p_output1(17)=-1.*t1125*t3716*t4092 + t1125*t3746*t4426 + t5588;
  p_output1(18)=0;
  p_output1(19)=0;
  p_output1(20)=0;
  p_output1(21)=0;
  p_output1(22)=0;
  p_output1(23)=0;
  p_output1(24)=0;
  p_output1(25)=0;
  p_output1(26)=0;
  p_output1(27)=-0.047*t4349*t4652 + 0.047*t2144*t4700 + 0.047*(-1.*t2144*t4700 + t5244);
  p_output1(28)=-0.047*t4349*t5355 + 0.047*t2144*t6075 + 0.047*(t5365 - 1.*t2144*t6075);
  p_output1(29)=0.047*t1125*t2144*t4092 - 0.047*t1125*t3746*t4349 + t5588;
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


       
Eigen::Matrix<double,3,18> Jp_FL_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void Jp_FL_hip_joint(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



