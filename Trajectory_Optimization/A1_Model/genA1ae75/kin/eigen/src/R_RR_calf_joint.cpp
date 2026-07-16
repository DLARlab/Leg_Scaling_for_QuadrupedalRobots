/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:51:50 GMT-05:00
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
  double t663;
  double t1858;
  double t1944;
  double t1908;
  double t1958;
  double t1746;
  double t904;
  double t1321;
  double t1814;
  double t1937;
  double t1983;
  double t2023;
  double t2051;
  double t2141;
  double t2159;
  double t2170;
  double t2190;
  double t2240;
  double t2250;
  double t277;
  double t2365;
  double t5467;
  double t5635;
  double t5715;
  double t5892;
  double t6070;
  double t6072;
  double t6190;
  double t6220;
  double t6234;
  double t6894;
  double t6921;
  double t7039;
  double t1554;
  double t2255;
  double t2274;
  double t3052;
  double t3221;
  double t3272;
  double t4479;
  double t6357;
  double t6382;
  double t6430;
  double t6500;
  double t6602;
  double t6859;
  double t7090;
  double t7137;
  double t7289;
  double t7340;
  double t7397;
  t663 = Cos(var1[3]);
  t1858 = Cos(var1[5]);
  t1944 = Sin(var1[3]);
  t1908 = Sin(var1[4]);
  t1958 = Sin(var1[5]);
  t1746 = Cos(var1[13]);
  t904 = Cos(var1[4]);
  t1321 = Sin(var1[13]);
  t1814 = Cos(var1[12]);
  t1937 = t663*t1858*t1908;
  t1983 = t1944*t1958;
  t2023 = t1937 + t1983;
  t2051 = t1814*t2023;
  t2141 = Sin(var1[12]);
  t2159 = -1.*t1858*t1944;
  t2170 = t663*t1908*t1958;
  t2190 = t2159 + t2170;
  t2240 = -1.*t2141*t2190;
  t2250 = t2051 + t2240;
  t277 = Sin(var1[14]);
  t2365 = Cos(var1[14]);
  t5467 = t1858*t1944*t1908;
  t5635 = -1.*t663*t1958;
  t5715 = t5467 + t5635;
  t5892 = t1814*t5715;
  t6070 = t663*t1858;
  t6072 = t1944*t1908*t1958;
  t6190 = t6070 + t6072;
  t6220 = -1.*t2141*t6190;
  t6234 = t5892 + t6220;
  t6894 = t1814*t904*t1858;
  t6921 = -1.*t904*t2141*t1958;
  t7039 = t6894 + t6921;
  t1554 = t663*t904*t1321;
  t2255 = t1746*t2250;
  t2274 = t1554 + t2255;
  t3052 = t1746*t663*t904;
  t3221 = -1.*t1321*t2250;
  t3272 = t3052 + t3221;
  t4479 = t904*t1321*t1944;
  t6357 = t1746*t6234;
  t6382 = t4479 + t6357;
  t6430 = t1746*t904*t1944;
  t6500 = -1.*t1321*t6234;
  t6602 = t6430 + t6500;
  t6859 = -1.*t1321*t1908;
  t7090 = t1746*t7039;
  t7137 = t6859 + t7090;
  t7289 = -1.*t1746*t1908;
  t7340 = -1.*t1321*t7039;
  t7397 = t7289 + t7340;

  p_output1(0)=-1.*t2274*t277 + t2365*t3272;
  p_output1(1)=-1.*t277*t6382 + t2365*t6602;
  p_output1(2)=-1.*t277*t7137 + t2365*t7397;
  p_output1(3)=t2023*t2141 + t1814*t2190;
  p_output1(4)=t2141*t5715 + t1814*t6190;
  p_output1(5)=t1814*t1958*t904 + t1858*t2141*t904;
  p_output1(6)=t2274*t2365 + t277*t3272;
  p_output1(7)=t2365*t6382 + t277*t6602;
  p_output1(8)=t2365*t7137 + t277*t7397;
}


       
Eigen::Matrix<double,3,3> R_RR_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_RR_calf_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



