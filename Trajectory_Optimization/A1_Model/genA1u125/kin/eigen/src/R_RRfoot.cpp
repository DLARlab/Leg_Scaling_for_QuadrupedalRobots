/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:21:45 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RRfoot.h"

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
  double t1080;
  double t3228;
  double t4156;
  double t3313;
  double t4273;
  double t3068;
  double t1889;
  double t1957;
  double t3193;
  double t4050;
  double t4388;
  double t4434;
  double t4489;
  double t4543;
  double t4632;
  double t4669;
  double t4815;
  double t4833;
  double t4898;
  double t1015;
  double t5228;
  double t5420;
  double t5477;
  double t5481;
  double t5513;
  double t5521;
  double t5524;
  double t5531;
  double t5549;
  double t5560;
  double t5699;
  double t5701;
  double t5711;
  double t2644;
  double t4927;
  double t4991;
  double t5336;
  double t5341;
  double t5365;
  double t5386;
  double t5562;
  double t5576;
  double t5632;
  double t5633;
  double t5635;
  double t5671;
  double t5726;
  double t5740;
  double t5782;
  double t5788;
  double t5791;
  t1080 = Cos(var1[3]);
  t3228 = Cos(var1[5]);
  t4156 = Sin(var1[3]);
  t3313 = Sin(var1[4]);
  t4273 = Sin(var1[5]);
  t3068 = Cos(var1[13]);
  t1889 = Cos(var1[4]);
  t1957 = Sin(var1[13]);
  t3193 = Cos(var1[12]);
  t4050 = t1080*t3228*t3313;
  t4388 = t4156*t4273;
  t4434 = t4050 + t4388;
  t4489 = t3193*t4434;
  t4543 = Sin(var1[12]);
  t4632 = -1.*t3228*t4156;
  t4669 = t1080*t3313*t4273;
  t4815 = t4632 + t4669;
  t4833 = -1.*t4543*t4815;
  t4898 = t4489 + t4833;
  t1015 = Sin(var1[14]);
  t5228 = Cos(var1[14]);
  t5420 = t3228*t4156*t3313;
  t5477 = -1.*t1080*t4273;
  t5481 = t5420 + t5477;
  t5513 = t3193*t5481;
  t5521 = t1080*t3228;
  t5524 = t4156*t3313*t4273;
  t5531 = t5521 + t5524;
  t5549 = -1.*t4543*t5531;
  t5560 = t5513 + t5549;
  t5699 = t3193*t1889*t3228;
  t5701 = -1.*t1889*t4543*t4273;
  t5711 = t5699 + t5701;
  t2644 = t1080*t1889*t1957;
  t4927 = t3068*t4898;
  t4991 = t2644 + t4927;
  t5336 = t3068*t1080*t1889;
  t5341 = -1.*t1957*t4898;
  t5365 = t5336 + t5341;
  t5386 = t1889*t1957*t4156;
  t5562 = t3068*t5560;
  t5576 = t5386 + t5562;
  t5632 = t3068*t1889*t4156;
  t5633 = -1.*t1957*t5560;
  t5635 = t5632 + t5633;
  t5671 = -1.*t1957*t3313;
  t5726 = t3068*t5711;
  t5740 = t5671 + t5726;
  t5782 = -1.*t3068*t3313;
  t5788 = -1.*t1957*t5711;
  t5791 = t5782 + t5788;

  p_output1(0)=-1.*t1015*t4991 + t5228*t5365;
  p_output1(1)=-1.*t1015*t5576 + t5228*t5635;
  p_output1(2)=-1.*t1015*t5740 + t5228*t5791;
  p_output1(3)=t4434*t4543 + t3193*t4815;
  p_output1(4)=t4543*t5481 + t3193*t5531;
  p_output1(5)=t1889*t3193*t4273 + t1889*t3228*t4543;
  p_output1(6)=t4991*t5228 + t1015*t5365;
  p_output1(7)=t5228*t5576 + t1015*t5635;
  p_output1(8)=t5228*t5740 + t1015*t5791;
}


       
Eigen::Matrix<double,3,3> R_RRfoot(const Eigen::Matrix<double,18,1> &var1)
//void R_RRfoot(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



