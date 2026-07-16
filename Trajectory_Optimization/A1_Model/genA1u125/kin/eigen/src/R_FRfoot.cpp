/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:21:40 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_FRfoot.h"

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
  double t734;
  double t3118;
  double t4130;
  double t3806;
  double t4141;
  double t2541;
  double t2961;
  double t4003;
  double t4355;
  double t4516;
  double t4555;
  double t4609;
  double t4622;
  double t4627;
  double t4630;
  double t4643;
  double t4776;
  double t2530;
  double t4837;
  double t561;
  double t5423;
  double t5493;
  double t5504;
  double t5508;
  double t5514;
  double t5543;
  double t5552;
  double t5631;
  double t5781;
  double t5185;
  double t6036;
  double t6040;
  double t6048;
  double t5053;
  double t5107;
  double t5111;
  double t2866;
  double t4852;
  double t4886;
  double t5816;
  double t5841;
  double t5843;
  double t5357;
  double t5806;
  double t5808;
  double t6063;
  double t6082;
  double t6122;
  double t5977;
  double t6055;
  double t6057;
  t734 = Cos(var1[3]);
  t3118 = Cos(var1[5]);
  t4130 = Sin(var1[3]);
  t3806 = Sin(var1[4]);
  t4141 = Sin(var1[5]);
  t2541 = Cos(var1[7]);
  t2961 = Cos(var1[6]);
  t4003 = t734*t3118*t3806;
  t4355 = t4130*t4141;
  t4516 = t4003 + t4355;
  t4555 = t2961*t4516;
  t4609 = -1.*t3118*t4130;
  t4622 = t734*t3806*t4141;
  t4627 = t4609 + t4622;
  t4630 = Sin(var1[6]);
  t4643 = -1.*t4627*t4630;
  t4776 = t4555 + t4643;
  t2530 = Cos(var1[4]);
  t4837 = Sin(var1[7]);
  t561 = Cos(var1[8]);
  t5423 = t3118*t4130*t3806;
  t5493 = -1.*t734*t4141;
  t5504 = t5423 + t5493;
  t5508 = t2961*t5504;
  t5514 = t734*t3118;
  t5543 = t4130*t3806*t4141;
  t5552 = t5514 + t5543;
  t5631 = -1.*t5552*t4630;
  t5781 = t5508 + t5631;
  t5185 = Sin(var1[8]);
  t6036 = t2530*t3118*t2961;
  t6040 = -1.*t2530*t4141*t4630;
  t6048 = t6036 + t6040;
  t5053 = t2541*t4776;
  t5107 = t734*t2530*t4837;
  t5111 = t5053 + t5107;
  t2866 = t734*t2530*t2541;
  t4852 = -1.*t4776*t4837;
  t4886 = t2866 + t4852;
  t5816 = t2541*t5781;
  t5841 = t2530*t4130*t4837;
  t5843 = t5816 + t5841;
  t5357 = t2530*t2541*t4130;
  t5806 = -1.*t5781*t4837;
  t5808 = t5357 + t5806;
  t6063 = t2541*t6048;
  t6082 = -1.*t3806*t4837;
  t6122 = t6063 + t6082;
  t5977 = -1.*t2541*t3806;
  t6055 = -1.*t6048*t4837;
  t6057 = t5977 + t6055;

  p_output1(0)=-1.*t5111*t5185 + t4886*t561;
  p_output1(1)=t561*t5808 - 1.*t5185*t5843;
  p_output1(2)=t561*t6057 - 1.*t5185*t6122;
  p_output1(3)=t2961*t4627 + t4516*t4630;
  p_output1(4)=t4630*t5504 + t2961*t5552;
  p_output1(5)=t2530*t2961*t4141 + t2530*t3118*t4630;
  p_output1(6)=t4886*t5185 + t5111*t561;
  p_output1(7)=t5185*t5808 + t561*t5843;
  p_output1(8)=t5185*t6057 + t561*t6122;
}


       
Eigen::Matrix<double,3,3> R_FRfoot(const Eigen::Matrix<double,18,1> &var1)
//void R_FRfoot(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



