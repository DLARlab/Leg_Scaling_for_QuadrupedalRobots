/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:10:49 GMT-05:00
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
  double t259;
  double t4101;
  double t4126;
  double t4029;
  double t4132;
  double t279;
  double t4121;
  double t4135;
  double t4144;
  double t4151;
  double t4154;
  double t4156;
  double t4158;
  double t254;
  double t2428;
  double t2472;
  double t2613;
  double t2709;
  double t4161;
  double t4164;
  double t4191;
  double t4192;
  double t4197;
  double t4200;
  double t4205;
  double t4206;
  double t4273;
  double t4274;
  double t4280;
  double t4302;
  double t4305;
  double t4307;
  double t4285;
  double t4310;
  double t4361;
  double t4363;
  double t4365;
  double t4335;
  double t4340;
  double t4344;
  double t4345;
  t259 = Sin(var1[3]);
  t4101 = Cos(var1[5]);
  t4126 = Sin(var1[4]);
  t4029 = Cos(var1[3]);
  t4132 = Sin(var1[5]);
  t279 = Cos(var1[6]);
  t4121 = -1.*t4029*t4101;
  t4135 = -1.*t259*t4126*t4132;
  t4144 = t4121 + t4135;
  t4151 = -1.*t4101*t259*t4126;
  t4154 = t4029*t4132;
  t4156 = t4151 + t4154;
  t4158 = Sin(var1[6]);
  t254 = Cos(var1[4]);
  t2428 = -1.*t279;
  t2472 = 1. + t2428;
  t2613 = -0.047*t2472;
  t2709 = 0. + t2613;
  t4161 = 0.047*t4158;
  t4164 = 0. + t4161;
  t4191 = -1.*t4101*t259;
  t4192 = t4029*t4126*t4132;
  t4197 = t4191 + t4192;
  t4200 = t4029*t4101*t4126;
  t4205 = t259*t4132;
  t4206 = t4200 + t4205;
  t4273 = t4101*t259;
  t4274 = -1.*t4029*t4126*t4132;
  t4280 = t4273 + t4274;
  t4302 = t4101*t259*t4126;
  t4305 = -1.*t4029*t4132;
  t4307 = t4302 + t4305;
  t4285 = t279*t4206;
  t4310 = t279*t4307;
  t4361 = t4029*t4101;
  t4363 = t259*t4126*t4132;
  t4365 = t4361 + t4363;
  t4335 = t254*t4101*t279;
  t4340 = -1.*t254*t4132*t4158;
  t4344 = t4335 + t4340;
  t4345 = -0.047*t4344;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=-0.183*t254*t259 + t2709*t4144 - 0.047*(t279*t4144 + t4156*t4158) + t4156*t4164;
  p_output1(10)=0.183*t254*t4029 + t2709*t4197 + t4164*t4206 - 0.047*(t279*t4197 + t4158*t4206);
  p_output1(11)=0;
  p_output1(12)=-0.183*t4029*t4126 + t254*t2709*t4029*t4132 - 0.047*(t254*t279*t4029*t4132 + t254*t4029*t4101*t4158) + t254*t4029*t4101*t4164;
  p_output1(13)=-0.183*t259*t4126 + t254*t259*t2709*t4132 - 0.047*(t254*t259*t279*t4132 + t254*t259*t4101*t4158) + t254*t259*t4101*t4164;
  p_output1(14)=-0.183*t254 - 1.*t2709*t4126*t4132 - 0.047*(-1.*t279*t4126*t4132 - 1.*t4101*t4126*t4158) - 1.*t4101*t4126*t4164;
  p_output1(15)=t2709*t4206 + t4164*t4280 - 0.047*(t4158*t4280 + t4285);
  p_output1(16)=t4144*t4164 + t2709*t4307 - 0.047*(t4144*t4158 + t4310);
  p_output1(17)=t254*t2709*t4101 - 1.*t254*t4132*t4164 + t4345;
  p_output1(18)=-0.047*t4158*t4197 + 0.047*t279*t4206 - 0.047*(-1.*t4158*t4197 + t4285);
  p_output1(19)=0.047*t279*t4307 - 0.047*t4158*t4365 - 0.047*(t4310 - 1.*t4158*t4365);
  p_output1(20)=0.047*t254*t279*t4101 - 0.047*t254*t4132*t4158 + t4345;
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



