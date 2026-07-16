/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:04:34 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RL_hip_joint.h"

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
  double t1236;
  double t907;
  double t5039;
  double t4635;
  double t5060;
  double t5096;
  double t5049;
  double t5145;
  double t5071;
  double t5138;
  double t5139;
  double t5146;
  double t5147;
  double t5148;
  double t5153;
  double t5155;
  double t5156;
  double t5161;
  double t5164;
  double t5167;
  double t5141;
  double t5150;
  double t5151;
  double t5296;
  double t5299;
  double t5306;
  double t5308;
  double t5312;
  double t5317;
  double t5159;
  double t5168;
  double t5169;
  double t5170;
  double t5171;
  double t5173;
  t1236 = Cos(var1[4]);
  t907 = Cos(var1[3]);
  t5039 = Sin(var1[4]);
  t4635 = Sin(var1[3]);
  t5060 = Cos(var1[5]);
  t5096 = Sin(var1[5]);
  t5049 = Sin(var1[15]);
  t5145 = Cos(var1[15]);
  t5071 = t907*t5060*t5039;
  t5138 = t4635*t5096;
  t5139 = t5071 + t5138;
  t5146 = -1.*t5060*t4635;
  t5147 = t907*t5039*t5096;
  t5148 = t5146 + t5147;
  t5153 = t5060*t4635*t5039;
  t5155 = -1.*t907*t5096;
  t5156 = t5153 + t5155;
  t5161 = t907*t5060;
  t5164 = t4635*t5039*t5096;
  t5167 = t5161 + t5164;
  t5141 = t5049*t5139;
  t5150 = t5145*t5148;
  t5151 = t5141 + t5150;
  t5296 = -0.047*t5049;
  t5299 = 0. + t5296;
  t5306 = -1.*t5145;
  t5308 = 1. + t5306;
  t5312 = 0.047*t5308;
  t5317 = 0. + t5312;
  t5159 = t5049*t5156;
  t5168 = t5145*t5167;
  t5169 = t5159 + t5168;
  t5170 = t1236*t5060*t5049;
  t5171 = t5145*t1236*t5096;
  t5173 = t5170 + t5171;

  p_output1(0)=t1236*t907;
  p_output1(1)=t1236*t4635;
  p_output1(2)=-1.*t5039;
  p_output1(3)=0.;
  p_output1(4)=t5151;
  p_output1(5)=t5169;
  p_output1(6)=t5173;
  p_output1(7)=0.;
  p_output1(8)=t5139*t5145 - 1.*t5049*t5148;
  p_output1(9)=t5145*t5156 - 1.*t5049*t5167;
  p_output1(10)=-1.*t1236*t5049*t5096 + t1236*t5060*t5145;
  p_output1(11)=0.;
  p_output1(12)=0. + 0.047*t5151 + t5139*t5299 + t5148*t5317 - 0.183*t1236*t907 + var1(0);
  p_output1(13)=0. - 0.183*t1236*t4635 + 0.047*t5169 + t5156*t5299 + t5167*t5317 + var1(1);
  p_output1(14)=0. + 0.183*t5039 + 0.047*t5173 + t1236*t5060*t5299 + t1236*t5096*t5317 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_RL_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void H_RL_hip_joint(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



