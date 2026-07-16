/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:04:51 GMT-05:00
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
  double t1085;
  double t4551;
  double t4770;
  double t4707;
  double t5085;
  double t3944;
  double t1909;
  double t2458;
  double t3966;
  double t4716;
  double t5253;
  double t5255;
  double t5271;
  double t5332;
  double t5334;
  double t5344;
  double t5349;
  double t5396;
  double t5499;
  double t638;
  double t5545;
  double t5977;
  double t6005;
  double t6007;
  double t6041;
  double t6087;
  double t6090;
  double t6121;
  double t6123;
  double t6151;
  double t6406;
  double t6445;
  double t6457;
  double t3324;
  double t5510;
  double t5512;
  double t5582;
  double t5645;
  double t5673;
  double t5888;
  double t6158;
  double t6161;
  double t6231;
  double t6245;
  double t6315;
  double t6400;
  double t6467;
  double t6472;
  double t6495;
  double t6512;
  double t6517;
  t1085 = Cos(var1[3]);
  t4551 = Cos(var1[5]);
  t4770 = Sin(var1[3]);
  t4707 = Sin(var1[4]);
  t5085 = Sin(var1[5]);
  t3944 = Cos(var1[16]);
  t1909 = Cos(var1[4]);
  t2458 = Sin(var1[16]);
  t3966 = Cos(var1[15]);
  t4716 = t1085*t4551*t4707;
  t5253 = t4770*t5085;
  t5255 = t4716 + t5253;
  t5271 = t3966*t5255;
  t5332 = Sin(var1[15]);
  t5334 = -1.*t4551*t4770;
  t5344 = t1085*t4707*t5085;
  t5349 = t5334 + t5344;
  t5396 = -1.*t5332*t5349;
  t5499 = t5271 + t5396;
  t638 = Sin(var1[17]);
  t5545 = Cos(var1[17]);
  t5977 = t4551*t4770*t4707;
  t6005 = -1.*t1085*t5085;
  t6007 = t5977 + t6005;
  t6041 = t3966*t6007;
  t6087 = t1085*t4551;
  t6090 = t4770*t4707*t5085;
  t6121 = t6087 + t6090;
  t6123 = -1.*t5332*t6121;
  t6151 = t6041 + t6123;
  t6406 = t3966*t1909*t4551;
  t6445 = -1.*t1909*t5332*t5085;
  t6457 = t6406 + t6445;
  t3324 = t1085*t1909*t2458;
  t5510 = t3944*t5499;
  t5512 = t3324 + t5510;
  t5582 = t3944*t1085*t1909;
  t5645 = -1.*t2458*t5499;
  t5673 = t5582 + t5645;
  t5888 = t1909*t2458*t4770;
  t6158 = t3944*t6151;
  t6161 = t5888 + t6158;
  t6231 = t3944*t1909*t4770;
  t6245 = -1.*t2458*t6151;
  t6315 = t6231 + t6245;
  t6400 = -1.*t2458*t4707;
  t6467 = t3944*t6457;
  t6472 = t6400 + t6467;
  t6495 = -1.*t3944*t4707;
  t6512 = -1.*t2458*t6457;
  t6517 = t6495 + t6512;

  p_output1(0)=t5545*t5673 - 1.*t5512*t638;
  p_output1(1)=t5545*t6315 - 1.*t6161*t638;
  p_output1(2)=-1.*t638*t6472 + t5545*t6517;
  p_output1(3)=t5255*t5332 + t3966*t5349;
  p_output1(4)=t5332*t6007 + t3966*t6121;
  p_output1(5)=t1909*t3966*t5085 + t1909*t4551*t5332;
  p_output1(6)=t5512*t5545 + t5673*t638;
  p_output1(7)=t5545*t6161 + t6315*t638;
  p_output1(8)=t5545*t6472 + t638*t6517;
}


       
Eigen::Matrix<double,3,3> R_RLfoot(const Eigen::Matrix<double,18,1> &var1)
//void R_RLfoot(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



