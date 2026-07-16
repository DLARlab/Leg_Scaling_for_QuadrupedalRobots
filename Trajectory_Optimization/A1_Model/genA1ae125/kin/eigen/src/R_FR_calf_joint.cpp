/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:04:15 GMT-05:00
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
  double t2183;
  double t3438;
  double t3751;
  double t3439;
  double t3819;
  double t2437;
  double t3299;
  double t3644;
  double t3860;
  double t4112;
  double t4153;
  double t4161;
  double t4167;
  double t4210;
  double t4230;
  double t4239;
  double t4242;
  double t2423;
  double t4259;
  double t2050;
  double t4770;
  double t4806;
  double t4820;
  double t4876;
  double t4889;
  double t4891;
  double t4900;
  double t4944;
  double t4945;
  double t4571;
  double t5510;
  double t5524;
  double t5537;
  double t4314;
  double t4457;
  double t4482;
  double t2609;
  double t4260;
  double t4272;
  double t5313;
  double t5396;
  double t5422;
  double t4678;
  double t5021;
  double t5165;
  double t5634;
  double t5645;
  double t5652;
  double t5499;
  double t5589;
  double t5592;
  t2183 = Cos(var1[3]);
  t3438 = Cos(var1[5]);
  t3751 = Sin(var1[3]);
  t3439 = Sin(var1[4]);
  t3819 = Sin(var1[5]);
  t2437 = Cos(var1[7]);
  t3299 = Cos(var1[6]);
  t3644 = t2183*t3438*t3439;
  t3860 = t3751*t3819;
  t4112 = t3644 + t3860;
  t4153 = t3299*t4112;
  t4161 = -1.*t3438*t3751;
  t4167 = t2183*t3439*t3819;
  t4210 = t4161 + t4167;
  t4230 = Sin(var1[6]);
  t4239 = -1.*t4210*t4230;
  t4242 = t4153 + t4239;
  t2423 = Cos(var1[4]);
  t4259 = Sin(var1[7]);
  t2050 = Cos(var1[8]);
  t4770 = t3438*t3751*t3439;
  t4806 = -1.*t2183*t3819;
  t4820 = t4770 + t4806;
  t4876 = t3299*t4820;
  t4889 = t2183*t3438;
  t4891 = t3751*t3439*t3819;
  t4900 = t4889 + t4891;
  t4944 = -1.*t4900*t4230;
  t4945 = t4876 + t4944;
  t4571 = Sin(var1[8]);
  t5510 = t2423*t3438*t3299;
  t5524 = -1.*t2423*t3819*t4230;
  t5537 = t5510 + t5524;
  t4314 = t2437*t4242;
  t4457 = t2183*t2423*t4259;
  t4482 = t4314 + t4457;
  t2609 = t2183*t2423*t2437;
  t4260 = -1.*t4242*t4259;
  t4272 = t2609 + t4260;
  t5313 = t2437*t4945;
  t5396 = t2423*t3751*t4259;
  t5422 = t5313 + t5396;
  t4678 = t2423*t2437*t3751;
  t5021 = -1.*t4945*t4259;
  t5165 = t4678 + t5021;
  t5634 = t2437*t5537;
  t5645 = -1.*t3439*t4259;
  t5652 = t5634 + t5645;
  t5499 = -1.*t2437*t3439;
  t5589 = -1.*t5537*t4259;
  t5592 = t5499 + t5589;

  p_output1(0)=t2050*t4272 - 1.*t4482*t4571;
  p_output1(1)=t2050*t5165 - 1.*t4571*t5422;
  p_output1(2)=t2050*t5592 - 1.*t4571*t5652;
  p_output1(3)=t3299*t4210 + t4112*t4230;
  p_output1(4)=t4230*t4820 + t3299*t4900;
  p_output1(5)=t2423*t3299*t3819 + t2423*t3438*t4230;
  p_output1(6)=t2050*t4482 + t4272*t4571;
  p_output1(7)=t4571*t5165 + t2050*t5422;
  p_output1(8)=t4571*t5592 + t2050*t5652;
}


       
Eigen::Matrix<double,3,3> R_FR_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_FR_calf_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



