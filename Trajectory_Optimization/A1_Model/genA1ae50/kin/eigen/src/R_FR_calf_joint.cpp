/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:10:54 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_FR_calf_joint.h"

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
static void output1(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  double t205;
  double t2742;
  double t4143;
  double t3481;
  double t4771;
  double t1161;
  double t2599;
  double t4007;
  double t4811;
  double t4812;
  double t4943;
  double t4944;
  double t4949;
  double t5002;
  double t5006;
  double t5007;
  double t5029;
  double t424;
  double t5039;
  double t129;
  double t5098;
  double t5100;
  double t5119;
  double t5131;
  double t5135;
  double t5137;
  double t5139;
  double t5140;
  double t5144;
  double t5068;
  double t5187;
  double t5199;
  double t5201;
  double t5052;
  double t5053;
  double t5061;
  double t2523;
  double t5043;
  double t5044;
  double t5168;
  double t5171;
  double t5178;
  double t5091;
  double t5150;
  double t5157;
  double t5240;
  double t5266;
  double t5272;
  double t5186;
  double t5209;
  double t5233;
  t205 = Cos(var1[3]);
  t2742 = Cos(var1[5]);
  t4143 = Sin(var1[3]);
  t3481 = Sin(var1[4]);
  t4771 = Sin(var1[5]);
  t1161 = Cos(var1[7]);
  t2599 = Cos(var1[6]);
  t4007 = t205*t2742*t3481;
  t4811 = t4143*t4771;
  t4812 = t4007 + t4811;
  t4943 = t2599*t4812;
  t4944 = -1.*t2742*t4143;
  t4949 = t205*t3481*t4771;
  t5002 = t4944 + t4949;
  t5006 = Sin(var1[6]);
  t5007 = -1.*t5002*t5006;
  t5029 = t4943 + t5007;
  t424 = Cos(var1[4]);
  t5039 = Sin(var1[7]);
  t129 = Cos(var1[8]);
  t5098 = t2742*t4143*t3481;
  t5100 = -1.*t205*t4771;
  t5119 = t5098 + t5100;
  t5131 = t2599*t5119;
  t5135 = t205*t2742;
  t5137 = t4143*t3481*t4771;
  t5139 = t5135 + t5137;
  t5140 = -1.*t5139*t5006;
  t5144 = t5131 + t5140;
  t5068 = Sin(var1[8]);
  t5187 = t424*t2742*t2599;
  t5199 = -1.*t424*t4771*t5006;
  t5201 = t5187 + t5199;
  t5052 = t1161*t5029;
  t5053 = t205*t424*t5039;
  t5061 = t5052 + t5053;
  t2523 = t205*t424*t1161;
  t5043 = -1.*t5029*t5039;
  t5044 = t2523 + t5043;
  t5168 = t1161*t5144;
  t5171 = t424*t4143*t5039;
  t5178 = t5168 + t5171;
  t5091 = t424*t1161*t4143;
  t5150 = -1.*t5144*t5039;
  t5157 = t5091 + t5150;
  t5240 = t1161*t5201;
  t5266 = -1.*t3481*t5039;
  t5272 = t5240 + t5266;
  t5186 = -1.*t1161*t3481;
  t5209 = -1.*t5201*t5039;
  t5233 = t5186 + t5209;

  p_output1(0)=t129*t5044 - 1.*t5061*t5068;
  p_output1(1)=t129*t5157 - 1.*t5068*t5178;
  p_output1(2)=t129*t5233 - 1.*t5068*t5272;
  p_output1(3)=t2599*t5002 + t4812*t5006;
  p_output1(4)=t5006*t5119 + t2599*t5139;
  p_output1(5)=t2599*t424*t4771 + t2742*t424*t5006;
  p_output1(6)=t129*t5061 + t5044*t5068;
  p_output1(7)=t5068*t5157 + t129*t5178;
  p_output1(8)=t5068*t5233 + t129*t5272;
}


       
Eigen::Matrix<double,3,3> R_FR_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_FR_calf_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



