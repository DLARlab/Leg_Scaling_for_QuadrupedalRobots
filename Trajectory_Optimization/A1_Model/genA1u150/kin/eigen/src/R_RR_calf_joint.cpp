/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:26:49 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RR_calf_joint.h"

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
  double t1161;
  double t2948;
  double t3972;
  double t3015;
  double t4060;
  double t2690;
  double t2010;
  double t2111;
  double t2691;
  double t3850;
  double t4086;
  double t4282;
  double t4414;
  double t4470;
  double t4545;
  double t4641;
  double t4716;
  double t4722;
  double t4754;
  double t390;
  double t4844;
  double t5001;
  double t5041;
  double t5068;
  double t5084;
  double t5112;
  double t5113;
  double t5168;
  double t5170;
  double t5189;
  double t5470;
  double t5507;
  double t5515;
  double t2173;
  double t4787;
  double t4826;
  double t4845;
  double t4874;
  double t4879;
  double t4956;
  double t5191;
  double t5255;
  double t5272;
  double t5318;
  double t5422;
  double t5458;
  double t5522;
  double t5541;
  double t5564;
  double t5568;
  double t5583;
  t1161 = Cos(var1[3]);
  t2948 = Cos(var1[5]);
  t3972 = Sin(var1[3]);
  t3015 = Sin(var1[4]);
  t4060 = Sin(var1[5]);
  t2690 = Cos(var1[13]);
  t2010 = Cos(var1[4]);
  t2111 = Sin(var1[13]);
  t2691 = Cos(var1[12]);
  t3850 = t1161*t2948*t3015;
  t4086 = t3972*t4060;
  t4282 = t3850 + t4086;
  t4414 = t2691*t4282;
  t4470 = Sin(var1[12]);
  t4545 = -1.*t2948*t3972;
  t4641 = t1161*t3015*t4060;
  t4716 = t4545 + t4641;
  t4722 = -1.*t4470*t4716;
  t4754 = t4414 + t4722;
  t390 = Sin(var1[14]);
  t4844 = Cos(var1[14]);
  t5001 = t2948*t3972*t3015;
  t5041 = -1.*t1161*t4060;
  t5068 = t5001 + t5041;
  t5084 = t2691*t5068;
  t5112 = t1161*t2948;
  t5113 = t3972*t3015*t4060;
  t5168 = t5112 + t5113;
  t5170 = -1.*t4470*t5168;
  t5189 = t5084 + t5170;
  t5470 = t2691*t2010*t2948;
  t5507 = -1.*t2010*t4470*t4060;
  t5515 = t5470 + t5507;
  t2173 = t1161*t2010*t2111;
  t4787 = t2690*t4754;
  t4826 = t2173 + t4787;
  t4845 = t2690*t1161*t2010;
  t4874 = -1.*t2111*t4754;
  t4879 = t4845 + t4874;
  t4956 = t2010*t2111*t3972;
  t5191 = t2690*t5189;
  t5255 = t4956 + t5191;
  t5272 = t2690*t2010*t3972;
  t5318 = -1.*t2111*t5189;
  t5422 = t5272 + t5318;
  t5458 = -1.*t2111*t3015;
  t5522 = t2690*t5515;
  t5541 = t5458 + t5522;
  t5564 = -1.*t2690*t3015;
  t5568 = -1.*t2111*t5515;
  t5583 = t5564 + t5568;

  p_output1(0)=-1.*t390*t4826 + t4844*t4879;
  p_output1(1)=-1.*t390*t5255 + t4844*t5422;
  p_output1(2)=-1.*t390*t5541 + t4844*t5583;
  p_output1(3)=t4282*t4470 + t2691*t4716;
  p_output1(4)=t4470*t5068 + t2691*t5168;
  p_output1(5)=t2010*t2691*t4060 + t2010*t2948*t4470;
  p_output1(6)=t4826*t4844 + t390*t4879;
  p_output1(7)=t4844*t5255 + t390*t5422;
  p_output1(8)=t4844*t5541 + t390*t5583;
}


       
Eigen::Matrix<double,3,3> R_RR_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_RR_calf_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



