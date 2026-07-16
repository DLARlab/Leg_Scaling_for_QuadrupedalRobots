/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:27:05 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RLfoot.h"

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
  double t134;
  double t2753;
  double t3729;
  double t3502;
  double t3986;
  double t2052;
  double t529;
  double t1334;
  double t2406;
  double t3578;
  double t5038;
  double t5071;
  double t5628;
  double t5638;
  double t5798;
  double t5849;
  double t5859;
  double t5937;
  double t6256;
  double t40;
  double t6530;
  double t6786;
  double t6847;
  double t6849;
  double t6872;
  double t6902;
  double t6906;
  double t6950;
  double t6982;
  double t6993;
  double t7124;
  double t7175;
  double t7185;
  double t1403;
  double t6420;
  double t6425;
  double t6668;
  double t6681;
  double t6716;
  double t6784;
  double t7010;
  double t7020;
  double t7025;
  double t7035;
  double t7046;
  double t7077;
  double t7215;
  double t7232;
  double t7255;
  double t7258;
  double t7264;
  t134 = Cos(var1[3]);
  t2753 = Cos(var1[5]);
  t3729 = Sin(var1[3]);
  t3502 = Sin(var1[4]);
  t3986 = Sin(var1[5]);
  t2052 = Cos(var1[16]);
  t529 = Cos(var1[4]);
  t1334 = Sin(var1[16]);
  t2406 = Cos(var1[15]);
  t3578 = t134*t2753*t3502;
  t5038 = t3729*t3986;
  t5071 = t3578 + t5038;
  t5628 = t2406*t5071;
  t5638 = Sin(var1[15]);
  t5798 = -1.*t2753*t3729;
  t5849 = t134*t3502*t3986;
  t5859 = t5798 + t5849;
  t5937 = -1.*t5638*t5859;
  t6256 = t5628 + t5937;
  t40 = Sin(var1[17]);
  t6530 = Cos(var1[17]);
  t6786 = t2753*t3729*t3502;
  t6847 = -1.*t134*t3986;
  t6849 = t6786 + t6847;
  t6872 = t2406*t6849;
  t6902 = t134*t2753;
  t6906 = t3729*t3502*t3986;
  t6950 = t6902 + t6906;
  t6982 = -1.*t5638*t6950;
  t6993 = t6872 + t6982;
  t7124 = t2406*t529*t2753;
  t7175 = -1.*t529*t5638*t3986;
  t7185 = t7124 + t7175;
  t1403 = t134*t529*t1334;
  t6420 = t2052*t6256;
  t6425 = t1403 + t6420;
  t6668 = t2052*t134*t529;
  t6681 = -1.*t1334*t6256;
  t6716 = t6668 + t6681;
  t6784 = t529*t1334*t3729;
  t7010 = t2052*t6993;
  t7020 = t6784 + t7010;
  t7025 = t2052*t529*t3729;
  t7035 = -1.*t1334*t6993;
  t7046 = t7025 + t7035;
  t7077 = -1.*t1334*t3502;
  t7215 = t2052*t7185;
  t7232 = t7077 + t7215;
  t7255 = -1.*t2052*t3502;
  t7258 = -1.*t1334*t7185;
  t7264 = t7255 + t7258;

  p_output1(0)=-1.*t40*t6425 + t6530*t6716;
  p_output1(1)=-1.*t40*t7020 + t6530*t7046;
  p_output1(2)=-1.*t40*t7232 + t6530*t7264;
  p_output1(3)=t5071*t5638 + t2406*t5859;
  p_output1(4)=t5638*t6849 + t2406*t6950;
  p_output1(5)=t2406*t3986*t529 + t2753*t529*t5638;
  p_output1(6)=t6425*t6530 + t40*t6716;
  p_output1(7)=t6530*t7020 + t40*t7046;
  p_output1(8)=t6530*t7232 + t40*t7264;
}


       
Eigen::Matrix<double,3,3> R_RLfoot(const Eigen::Matrix<double,18,1> &var1)
//void R_RLfoot(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



