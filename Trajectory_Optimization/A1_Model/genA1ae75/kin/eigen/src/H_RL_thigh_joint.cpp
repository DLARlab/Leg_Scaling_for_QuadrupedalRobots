/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:51:54 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RL_thigh_joint.h"

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
  double t1025;
  double t2496;
  double t2836;
  double t2499;
  double t3220;
  double t854;
  double t1327;
  double t1878;
  double t2454;
  double t3303;
  double t2610;
  double t3240;
  double t3246;
  double t3336;
  double t3661;
  double t3728;
  double t3905;
  double t3970;
  double t4107;
  double t4168;
  double t4231;
  double t4232;
  double t3302;
  double t3820;
  double t3833;
  double t4161;
  double t4255;
  double t4258;
  double t4306;
  double t4343;
  double t4353;
  double t4361;
  double t4400;
  double t4458;
  double t1514;
  double t3838;
  double t3894;
  double t4802;
  double t4808;
  double t4812;
  double t4817;
  double t4819;
  double t4870;
  double t5048;
  double t5130;
  double t5378;
  double t5570;
  double t4459;
  double t4492;
  double t4493;
  double t6334;
  double t6456;
  double t3903;
  double t4264;
  double t4266;
  double t4531;
  double t4532;
  double t4534;
  double t4296;
  double t4356;
  double t4359;
  t1025 = Cos(var1[3]);
  t2496 = Cos(var1[5]);
  t2836 = Sin(var1[3]);
  t2499 = Sin(var1[4]);
  t3220 = Sin(var1[5]);
  t854 = Cos(var1[16]);
  t1327 = Cos(var1[4]);
  t1878 = Sin(var1[16]);
  t2454 = Cos(var1[15]);
  t3303 = Sin(var1[15]);
  t2610 = t1025*t2496*t2499;
  t3240 = t2836*t3220;
  t3246 = t2610 + t3240;
  t3336 = -1.*t2496*t2836;
  t3661 = t1025*t2499*t3220;
  t3728 = t3336 + t3661;
  t3905 = t2496*t2836*t2499;
  t3970 = -1.*t1025*t3220;
  t4107 = t3905 + t3970;
  t4168 = t1025*t2496;
  t4231 = t2836*t2499*t3220;
  t4232 = t4168 + t4231;
  t3302 = t2454*t3246;
  t3820 = -1.*t3303*t3728;
  t3833 = t3302 + t3820;
  t4161 = t2454*t4107;
  t4255 = -1.*t3303*t4232;
  t4258 = t4161 + t4255;
  t4306 = t2454*t1327*t2496;
  t4343 = -1.*t1327*t3303*t3220;
  t4353 = t4306 + t4343;
  t4361 = t3303*t3246;
  t4400 = t2454*t3728;
  t4458 = t4361 + t4400;
  t1514 = t854*t1025*t1327;
  t3838 = -1.*t1878*t3833;
  t3894 = t1514 + t3838;
  t4802 = -1.*t854;
  t4808 = 1. + t4802;
  t4812 = -0.183*t4808;
  t4817 = 0. + t4812;
  t4819 = -0.047*t3303;
  t4870 = 0. + t4819;
  t5048 = -1.*t2454;
  t5130 = 1. + t5048;
  t5378 = 0.047*t5130;
  t5570 = 0. + t5378;
  t4459 = t3303*t4107;
  t4492 = t2454*t4232;
  t4493 = t4459 + t4492;
  t6334 = -0.183*t1878;
  t6456 = 0. + t6334;
  t3903 = t854*t1327*t2836;
  t4264 = -1.*t1878*t4258;
  t4266 = t3903 + t4264;
  t4531 = t1327*t2496*t3303;
  t4532 = t2454*t1327*t3220;
  t4534 = t4531 + t4532;
  t4296 = -1.*t854*t2499;
  t4356 = -1.*t1878*t4353;
  t4359 = t4296 + t4356;

  p_output1(0)=t3894;
  p_output1(1)=t4266;
  p_output1(2)=t4359;
  p_output1(3)=0.;
  p_output1(4)=t4458;
  p_output1(5)=t4493;
  p_output1(6)=t4534;
  p_output1(7)=0.;
  p_output1(8)=t1025*t1327*t1878 + t3833*t854;
  p_output1(9)=t1327*t1878*t2836 + t4258*t854;
  p_output1(10)=-1.*t1878*t2499 + t4353*t854;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.183*t3894 + 0.13205*t4458 + t1025*t1327*t4817 + t3246*t4870 + t3728*t5570 + t3833*t6456 + var1(0);
  p_output1(13)=0. - 0.183*t4266 + 0.13205*t4493 + t1327*t2836*t4817 + t4107*t4870 + t4232*t5570 + t4258*t6456 + var1(1);
  p_output1(14)=0. - 0.183*t4359 + 0.13205*t4534 - 1.*t2499*t4817 + t1327*t2496*t4870 + t1327*t3220*t5570 + t4353*t6456 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_RL_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void H_RL_thigh_joint(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



