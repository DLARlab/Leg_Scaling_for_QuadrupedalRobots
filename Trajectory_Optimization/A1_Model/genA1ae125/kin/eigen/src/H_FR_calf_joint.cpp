/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:04:14 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FR_calf_joint.h"

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
  double t722;
  double t1538;
  double t1818;
  double t1753;
  double t2005;
  double t1068;
  double t1375;
  double t1754;
  double t2233;
  double t2267;
  double t2271;
  double t2383;
  double t2437;
  double t2520;
  double t2596;
  double t2744;
  double t2757;
  double t1060;
  double t2762;
  double t335;
  double t3299;
  double t3351;
  double t3356;
  double t3438;
  double t3439;
  double t3465;
  double t3484;
  double t3508;
  double t3546;
  double t3050;
  double t3819;
  double t3846;
  double t4066;
  double t2983;
  double t3014;
  double t3029;
  double t1108;
  double t2926;
  double t2948;
  double t3627;
  double t3650;
  double t3654;
  double t3266;
  double t3564;
  double t3584;
  double t4167;
  double t4190;
  double t4198;
  double t3783;
  double t4087;
  double t4112;
  double t4230;
  double t4239;
  double t4242;
  double t5714;
  double t5726;
  double t2964;
  double t3158;
  double t3234;
  double t4571;
  double t4603;
  double t4649;
  double t5034;
  double t5129;
  double t5165;
  double t5216;
  double t5233;
  double t5291;
  double t5422;
  double t5437;
  double t5499;
  double t5524;
  double t4259;
  double t4260;
  double t4272;
  double t5618;
  double t5634;
  double t5734;
  double t5736;
  double t5787;
  double t5795;
  double t5797;
  double t5830;
  double t3626;
  double t3665;
  double t3751;
  double t4678;
  double t4820;
  double t4876;
  double t4273;
  double t4314;
  double t4482;
  double t4161;
  double t4208;
  double t4210;
  double t4944;
  double t4945;
  double t5021;
  t722 = Cos(var1[3]);
  t1538 = Cos(var1[5]);
  t1818 = Sin(var1[3]);
  t1753 = Sin(var1[4]);
  t2005 = Sin(var1[5]);
  t1068 = Cos(var1[7]);
  t1375 = Cos(var1[6]);
  t1754 = t722*t1538*t1753;
  t2233 = t1818*t2005;
  t2267 = t1754 + t2233;
  t2271 = t1375*t2267;
  t2383 = -1.*t1538*t1818;
  t2437 = t722*t1753*t2005;
  t2520 = t2383 + t2437;
  t2596 = Sin(var1[6]);
  t2744 = -1.*t2520*t2596;
  t2757 = t2271 + t2744;
  t1060 = Cos(var1[4]);
  t2762 = Sin(var1[7]);
  t335 = Cos(var1[8]);
  t3299 = t1538*t1818*t1753;
  t3351 = -1.*t722*t2005;
  t3356 = t3299 + t3351;
  t3438 = t1375*t3356;
  t3439 = t722*t1538;
  t3465 = t1818*t1753*t2005;
  t3484 = t3439 + t3465;
  t3508 = -1.*t3484*t2596;
  t3546 = t3438 + t3508;
  t3050 = Sin(var1[8]);
  t3819 = t1060*t1538*t1375;
  t3846 = -1.*t1060*t2005*t2596;
  t4066 = t3819 + t3846;
  t2983 = t1068*t2757;
  t3014 = t722*t1060*t2762;
  t3029 = t2983 + t3014;
  t1108 = t722*t1060*t1068;
  t2926 = -1.*t2757*t2762;
  t2948 = t1108 + t2926;
  t3627 = t1068*t3546;
  t3650 = t1060*t1818*t2762;
  t3654 = t3627 + t3650;
  t3266 = t1060*t1068*t1818;
  t3564 = -1.*t3546*t2762;
  t3584 = t3266 + t3564;
  t4167 = t1068*t4066;
  t4190 = -1.*t1753*t2762;
  t4198 = t4167 + t4190;
  t3783 = -1.*t1068*t1753;
  t4087 = -1.*t4066*t2762;
  t4112 = t3783 + t4087;
  t4230 = t1375*t2520;
  t4239 = t2267*t2596;
  t4242 = t4230 + t4239;
  t5714 = -1.*t335;
  t5726 = 1. + t5714;
  t2964 = t335*t2948;
  t3158 = -1.*t3029*t3050;
  t3234 = t2964 + t3158;
  t4571 = t335*t3029;
  t4603 = t2948*t3050;
  t4649 = t4571 + t4603;
  t5034 = -1.*t1068;
  t5129 = 1. + t5034;
  t5165 = 0.183*t5129;
  t5216 = 0. + t5165;
  t5233 = -1.*t1375;
  t5291 = 1. + t5233;
  t5422 = -0.047*t5291;
  t5437 = 0. + t5422;
  t5499 = 0.047*t2596;
  t5524 = 0. + t5499;
  t4259 = t1375*t3484;
  t4260 = t3356*t2596;
  t4272 = t4259 + t4260;
  t5618 = 0.183*t2762;
  t5634 = 0. + t5618;
  t5734 = -0.25*t5726;
  t5736 = 0.183*t3050;
  t5787 = 0. + t5734 + t5736;
  t5795 = 0.183*t5726;
  t5797 = 0.25*t3050;
  t5830 = 0. + t5795 + t5797;
  t3626 = t335*t3584;
  t3665 = -1.*t3654*t3050;
  t3751 = t3626 + t3665;
  t4678 = t335*t3654;
  t4820 = t3584*t3050;
  t4876 = t4678 + t4820;
  t4273 = t1060*t1375*t2005;
  t4314 = t1060*t1538*t2596;
  t4482 = t4273 + t4314;
  t4161 = t335*t4112;
  t4208 = -1.*t4198*t3050;
  t4210 = t4161 + t4208;
  t4944 = t335*t4198;
  t4945 = t4112*t3050;
  t5021 = t4944 + t4945;

  p_output1(0)=t3234;
  p_output1(1)=t3751;
  p_output1(2)=t4210;
  p_output1(3)=0.;
  p_output1(4)=t4242;
  p_output1(5)=t4272;
  p_output1(6)=t4482;
  p_output1(7)=0.;
  p_output1(8)=t4649;
  p_output1(9)=t4876;
  p_output1(10)=t5021;
  p_output1(11)=0.;
  p_output1(12)=0. + 0.183*t3234 - 0.13205*t4242 - 0.25*t4649 + t2520*t5437 + t2267*t5524 + t2757*t5634 + t3029*t5787 + t2948*t5830 + t1060*t5216*t722 + var1(0);
  p_output1(13)=0. + 0.183*t3751 - 0.13205*t4272 - 0.25*t4876 + t1060*t1818*t5216 + t3484*t5437 + t3356*t5524 + t3546*t5634 + t3654*t5787 + t3584*t5830 + var1(1);
  p_output1(14)=0. + 0.183*t4210 - 0.13205*t4482 - 0.25*t5021 - 1.*t1753*t5216 + t1060*t2005*t5437 + t1060*t1538*t5524 + t4066*t5634 + t4198*t5787 + t4112*t5830 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_FR_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void H_FR_calf_joint(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



