/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:11:18 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FRfoot.h"

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
  double t675;
  double t1822;
  double t1936;
  double t1864;
  double t1996;
  double t1058;
  double t1367;
  double t1916;
  double t2119;
  double t2207;
  double t2266;
  double t2385;
  double t2439;
  double t2486;
  double t2554;
  double t2706;
  double t2788;
  double t1039;
  double t2823;
  double t478;
  double t3861;
  double t4035;
  double t4134;
  double t4147;
  double t4173;
  double t4225;
  double t4279;
  double t4341;
  double t4359;
  double t3222;
  double t4612;
  double t4784;
  double t4791;
  double t3032;
  double t3038;
  double t3085;
  double t1073;
  double t2841;
  double t2918;
  double t4551;
  double t4559;
  double t4566;
  double t3676;
  double t4453;
  double t4538;
  double t5161;
  double t5179;
  double t5182;
  double t4610;
  double t4816;
  double t5125;
  double t5265;
  double t5273;
  double t5274;
  double t7023;
  double t7072;
  double t3000;
  double t3270;
  double t3338;
  double t5677;
  double t5698;
  double t5741;
  double t5909;
  double t5933;
  double t6158;
  double t6233;
  double t6339;
  double t6440;
  double t6519;
  double t6611;
  double t6735;
  double t6790;
  double t5340;
  double t5356;
  double t5430;
  double t6941;
  double t6958;
  double t7101;
  double t7171;
  double t7174;
  double t7223;
  double t7249;
  double t7252;
  double t4550;
  double t4578;
  double t4581;
  double t5770;
  double t5784;
  double t5806;
  double t5609;
  double t5635;
  double t5669;
  double t5151;
  double t5253;
  double t5260;
  double t5811;
  double t5884;
  double t5906;
  t675 = Cos(var1[3]);
  t1822 = Cos(var1[5]);
  t1936 = Sin(var1[3]);
  t1864 = Sin(var1[4]);
  t1996 = Sin(var1[5]);
  t1058 = Cos(var1[7]);
  t1367 = Cos(var1[6]);
  t1916 = t675*t1822*t1864;
  t2119 = t1936*t1996;
  t2207 = t1916 + t2119;
  t2266 = t1367*t2207;
  t2385 = -1.*t1822*t1936;
  t2439 = t675*t1864*t1996;
  t2486 = t2385 + t2439;
  t2554 = Sin(var1[6]);
  t2706 = -1.*t2486*t2554;
  t2788 = t2266 + t2706;
  t1039 = Cos(var1[4]);
  t2823 = Sin(var1[7]);
  t478 = Cos(var1[8]);
  t3861 = t1822*t1936*t1864;
  t4035 = -1.*t675*t1996;
  t4134 = t3861 + t4035;
  t4147 = t1367*t4134;
  t4173 = t675*t1822;
  t4225 = t1936*t1864*t1996;
  t4279 = t4173 + t4225;
  t4341 = -1.*t4279*t2554;
  t4359 = t4147 + t4341;
  t3222 = Sin(var1[8]);
  t4612 = t1039*t1822*t1367;
  t4784 = -1.*t1039*t1996*t2554;
  t4791 = t4612 + t4784;
  t3032 = t1058*t2788;
  t3038 = t675*t1039*t2823;
  t3085 = t3032 + t3038;
  t1073 = t675*t1039*t1058;
  t2841 = -1.*t2788*t2823;
  t2918 = t1073 + t2841;
  t4551 = t1058*t4359;
  t4559 = t1039*t1936*t2823;
  t4566 = t4551 + t4559;
  t3676 = t1039*t1058*t1936;
  t4453 = -1.*t4359*t2823;
  t4538 = t3676 + t4453;
  t5161 = t1058*t4791;
  t5179 = -1.*t1864*t2823;
  t5182 = t5161 + t5179;
  t4610 = -1.*t1058*t1864;
  t4816 = -1.*t4791*t2823;
  t5125 = t4610 + t4816;
  t5265 = t1367*t2486;
  t5273 = t2207*t2554;
  t5274 = t5265 + t5273;
  t7023 = -1.*t478;
  t7072 = 1. + t7023;
  t3000 = t478*t2918;
  t3270 = -1.*t3085*t3222;
  t3338 = t3000 + t3270;
  t5677 = t478*t3085;
  t5698 = t2918*t3222;
  t5741 = t5677 + t5698;
  t5909 = -1.*t1058;
  t5933 = 1. + t5909;
  t6158 = 0.183*t5933;
  t6233 = 0. + t6158;
  t6339 = -1.*t1367;
  t6440 = 1. + t6339;
  t6519 = -0.047*t6440;
  t6611 = 0. + t6519;
  t6735 = 0.047*t2554;
  t6790 = 0. + t6735;
  t5340 = t1367*t4279;
  t5356 = t4134*t2554;
  t5430 = t5340 + t5356;
  t6941 = 0.183*t2823;
  t6958 = 0. + t6941;
  t7101 = 0.183*t7072;
  t7171 = 0.1*t3222;
  t7174 = 0. + t7101 + t7171;
  t7223 = -0.1*t7072;
  t7249 = 0.183*t3222;
  t7252 = 0. + t7223 + t7249;
  t4550 = t478*t4538;
  t4578 = -1.*t4566*t3222;
  t4581 = t4550 + t4578;
  t5770 = t478*t4566;
  t5784 = t4538*t3222;
  t5806 = t5770 + t5784;
  t5609 = t1039*t1367*t1996;
  t5635 = t1039*t1822*t2554;
  t5669 = t5609 + t5635;
  t5151 = t478*t5125;
  t5253 = -1.*t5182*t3222;
  t5260 = t5151 + t5253;
  t5811 = t478*t5182;
  t5884 = t5125*t3222;
  t5906 = t5811 + t5884;

  p_output1(0)=t3338;
  p_output1(1)=t4581;
  p_output1(2)=t5260;
  p_output1(3)=0.;
  p_output1(4)=t5274;
  p_output1(5)=t5430;
  p_output1(6)=t5669;
  p_output1(7)=0.;
  p_output1(8)=t5741;
  p_output1(9)=t5806;
  p_output1(10)=t5906;
  p_output1(11)=0.;
  p_output1(12)=0. + 0.183*t3338 - 0.13205*t5274 - 0.2*t5741 + t2486*t6611 + t1039*t6233*t675 + t2207*t6790 + t2788*t6958 + t2918*t7174 + t3085*t7252 + var1(0);
  p_output1(13)=0. + 0.183*t4581 - 0.13205*t5430 - 0.2*t5806 + t1039*t1936*t6233 + t4279*t6611 + t4134*t6790 + t4359*t6958 + t4538*t7174 + t4566*t7252 + var1(1);
  p_output1(14)=0. + 0.183*t5260 - 0.13205*t5669 - 0.2*t5906 - 1.*t1864*t6233 + t1039*t1996*t6611 + t1039*t1822*t6790 + t4791*t6958 + t5125*t7174 + t5182*t7252 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_FRfoot(const Eigen::Matrix<double,18,1> &var1)
//void H_FRfoot(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



