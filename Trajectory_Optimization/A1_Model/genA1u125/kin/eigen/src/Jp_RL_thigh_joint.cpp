/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:21:34 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RL_thigh_joint.h"

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
  double t368;
  double t2188;
  double t1632;
  double t1797;
  double t2546;
  double t973;
  double t2074;
  double t2600;
  double t2755;
  double t3293;
  double t3548;
  double t3967;
  double t3983;
  double t88;
  double t357;
  double t4413;
  double t4503;
  double t4512;
  double t4537;
  double t198;
  double t217;
  double t222;
  double t274;
  double t1228;
  double t1233;
  double t3339;
  double t3343;
  double t3433;
  double t3547;
  double t4720;
  double t4731;
  double t4739;
  double t4769;
  double t4779;
  double t4798;
  double t4424;
  double t4493;
  double t4933;
  double t4962;
  double t5054;
  double t5277;
  double t5310;
  double t5346;
  double t5879;
  double t5891;
  double t5938;
  double t7577;
  double t7609;
  double t7644;
  double t7782;
  double t7785;
  double t7820;
  double t7849;
  double t7860;
  double t7872;
  double t8032;
  double t8042;
  double t8074;
  double t4369;
  double t8105;
  double t8106;
  double t8261;
  double t8270;
  double t8278;
  double t8321;
  double t8330;
  double t8401;
  double t8421;
  double t8423;
  double t8454;
  double t8459;
  double t8144;
  double t8279;
  double t8280;
  double t8288;
  double t8289;
  double t8291;
  double t8296;
  double t8491;
  double t8492;
  t368 = Sin(var1[3]);
  t2188 = Cos(var1[3]);
  t1632 = Cos(var1[5]);
  t1797 = Sin(var1[4]);
  t2546 = Sin(var1[5]);
  t973 = Sin(var1[15]);
  t2074 = -1.*t1632*t368*t1797;
  t2600 = t2188*t2546;
  t2755 = t2074 + t2600;
  t3293 = Cos(var1[15]);
  t3548 = -1.*t2188*t1632;
  t3967 = -1.*t368*t1797*t2546;
  t3983 = t3548 + t3967;
  t88 = Cos(var1[16]);
  t357 = Cos(var1[4]);
  t4413 = Sin(var1[16]);
  t4503 = t3293*t2755;
  t4512 = -1.*t973*t3983;
  t4537 = t4503 + t4512;
  t198 = -1.*t88;
  t217 = 1. + t198;
  t222 = -0.183*t217;
  t274 = 0. + t222;
  t1228 = -0.047*t973;
  t1233 = 0. + t1228;
  t3339 = -1.*t3293;
  t3343 = 1. + t3339;
  t3433 = 0.047*t3343;
  t3547 = 0. + t3433;
  t4720 = t2188*t1632*t1797;
  t4731 = t368*t2546;
  t4739 = t4720 + t4731;
  t4769 = -1.*t1632*t368;
  t4779 = t2188*t1797*t2546;
  t4798 = t4769 + t4779;
  t4424 = -0.183*t4413;
  t4493 = 0. + t4424;
  t4933 = t3293*t4739;
  t4962 = -1.*t973*t4798;
  t5054 = t4933 + t4962;
  t5277 = t3293*t2188*t357*t1632;
  t5310 = -1.*t2188*t357*t973*t2546;
  t5346 = t5277 + t5310;
  t5879 = t3293*t357*t1632*t368;
  t5891 = -1.*t357*t973*t368*t2546;
  t5938 = t5879 + t5891;
  t7577 = -1.*t3293*t1632*t1797;
  t7609 = t973*t1797*t2546;
  t7644 = t7577 + t7609;
  t7782 = t1632*t368;
  t7785 = -1.*t2188*t1797*t2546;
  t7820 = t7782 + t7785;
  t7849 = -1.*t973*t4739;
  t7860 = t3293*t7820;
  t7872 = t7849 + t7860;
  t8032 = t1632*t368*t1797;
  t8042 = -1.*t2188*t2546;
  t8074 = t8032 + t8042;
  t4369 = t3293*t3983;
  t8105 = -1.*t973*t8074;
  t8106 = t8105 + t4369;
  t8261 = -1.*t357*t1632*t973;
  t8270 = -1.*t3293*t357*t2546;
  t8278 = t8261 + t8270;
  t8321 = -1.*t3293*t4798;
  t8330 = t7849 + t8321;
  t8401 = t2188*t1632;
  t8421 = t368*t1797*t2546;
  t8423 = t8401 + t8421;
  t8454 = -1.*t3293*t8423;
  t8459 = t8105 + t8454;
  t8144 = t3293*t8074;
  t8279 = t4493*t8278;
  t8280 = 0.183*t4413*t8278;
  t8288 = t3293*t357*t1632;
  t8289 = -1.*t357*t973*t2546;
  t8291 = t8288 + t8289;
  t8296 = 0.15331*t8291;
  t8491 = -1.*t973*t8423;
  t8492 = t8144 + t8491;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t1233*t2755 - 1.*t274*t357*t368 + t3547*t3983 + t4493*t4537 - 0.183*(-1.*t4413*t4537 - 1.*t357*t368*t88) + 0.15331*(t4369 + t2755*t973);
  p_output1(10)=t2188*t274*t357 + t1233*t4739 + t3547*t4798 + t4493*t5054 - 0.183*(-1.*t4413*t5054 + t2188*t357*t88) + 0.15331*(t3293*t4798 + t4739*t973);
  p_output1(11)=0;
  p_output1(12)=-1.*t1797*t2188*t274 + t1233*t1632*t2188*t357 + t2188*t2546*t3547*t357 + t4493*t5346 - 0.183*(-1.*t4413*t5346 - 1.*t1797*t2188*t88) + 0.15331*(t2188*t2546*t3293*t357 + t1632*t2188*t357*t973);
  p_output1(13)=-1.*t1797*t274*t368 + t1233*t1632*t357*t368 + t2546*t3547*t357*t368 + t4493*t5938 - 0.183*(-1.*t4413*t5938 - 1.*t1797*t368*t88) + 0.15331*(t2546*t3293*t357*t368 + t1632*t357*t368*t973);
  p_output1(14)=-1.*t1233*t1632*t1797 - 1.*t1797*t2546*t3547 - 1.*t274*t357 + t4493*t7644 - 0.183*(-1.*t4413*t7644 - 1.*t357*t88) + 0.15331*(-1.*t1797*t2546*t3293 - 1.*t1632*t1797*t973);
  p_output1(15)=t3547*t4739 + t1233*t7820 + 0.183*t4413*t7872 + t4493*t7872 + 0.15331*(t4933 + t7820*t973);
  p_output1(16)=t1233*t3983 + t3547*t8074 + 0.183*t4413*t8106 + t4493*t8106 + 0.15331*(t8144 + t3983*t973);
  p_output1(17)=-1.*t1233*t2546*t357 + t1632*t3547*t357 + t8279 + t8280 + t8296;
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
  p_output1(36)=0;
  p_output1(37)=0;
  p_output1(38)=0;
  p_output1(39)=0;
  p_output1(40)=0;
  p_output1(41)=0;
  p_output1(42)=0;
  p_output1(43)=0;
  p_output1(44)=0;
  p_output1(45)=-0.047*t3293*t4739 + 0.15331*t5054 + 0.183*t4413*t8330 + t4493*t8330 + 0.047*t4798*t973;
  p_output1(46)=-0.047*t3293*t8074 + 0.183*t4413*t8459 + t4493*t8459 + 0.15331*t8492 + 0.047*t8423*t973;
  p_output1(47)=-0.047*t1632*t3293*t357 + t8279 + t8280 + t8296 + 0.047*t2546*t357*t973;
  p_output1(48)=-0.183*t2188*t357*t4413 - 0.183*t5054*t88 - 0.183*(-1.*t2188*t357*t4413 - 1.*t5054*t88);
  p_output1(49)=-0.183*t357*t368*t4413 - 0.183*t8492*t88 - 0.183*(-1.*t357*t368*t4413 - 1.*t8492*t88);
  p_output1(50)=0.183*t1797*t4413 - 0.183*t8291*t88 - 0.183*(t1797*t4413 - 1.*t8291*t88);
  p_output1(51)=0;
  p_output1(52)=0;
  p_output1(53)=0;
}


       
Eigen::Matrix<double,3,18> Jp_RL_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void Jp_RL_thigh_joint(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



