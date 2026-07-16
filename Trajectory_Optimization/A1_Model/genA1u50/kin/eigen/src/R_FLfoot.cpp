/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:14:02 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_FLfoot.h"

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
  double t1492;
  double t3149;
  double t3481;
  double t3372;
  double t3628;
  double t3122;
  double t2613;
  double t2880;
  double t3147;
  double t3453;
  double t3703;
  double t3734;
  double t3759;
  double t3795;
  double t3834;
  double t3847;
  double t3913;
  double t3929;
  double t3945;
  double t1449;
  double t4394;
  double t4702;
  double t4703;
  double t4715;
  double t4728;
  double t4743;
  double t4775;
  double t4812;
  double t4827;
  double t4840;
  double t5130;
  double t5175;
  double t5197;
  double t2882;
  double t4036;
  double t4062;
  double t4431;
  double t4457;
  double t4521;
  double t4692;
  double t4867;
  double t4882;
  double t4906;
  double t4978;
  double t5059;
  double t5097;
  double t5246;
  double t5247;
  double t5323;
  double t5324;
  double t5331;
  t1492 = Cos(var1[3]);
  t3149 = Cos(var1[5]);
  t3481 = Sin(var1[3]);
  t3372 = Sin(var1[4]);
  t3628 = Sin(var1[5]);
  t3122 = Cos(var1[10]);
  t2613 = Cos(var1[4]);
  t2880 = Sin(var1[10]);
  t3147 = Cos(var1[9]);
  t3453 = t1492*t3149*t3372;
  t3703 = t3481*t3628;
  t3734 = t3453 + t3703;
  t3759 = t3147*t3734;
  t3795 = Sin(var1[9]);
  t3834 = -1.*t3149*t3481;
  t3847 = t1492*t3372*t3628;
  t3913 = t3834 + t3847;
  t3929 = -1.*t3795*t3913;
  t3945 = t3759 + t3929;
  t1449 = Sin(var1[11]);
  t4394 = Cos(var1[11]);
  t4702 = t3149*t3481*t3372;
  t4703 = -1.*t1492*t3628;
  t4715 = t4702 + t4703;
  t4728 = t3147*t4715;
  t4743 = t1492*t3149;
  t4775 = t3481*t3372*t3628;
  t4812 = t4743 + t4775;
  t4827 = -1.*t3795*t4812;
  t4840 = t4728 + t4827;
  t5130 = t3147*t2613*t3149;
  t5175 = -1.*t2613*t3795*t3628;
  t5197 = t5130 + t5175;
  t2882 = t1492*t2613*t2880;
  t4036 = t3122*t3945;
  t4062 = t2882 + t4036;
  t4431 = t3122*t1492*t2613;
  t4457 = -1.*t2880*t3945;
  t4521 = t4431 + t4457;
  t4692 = t2613*t2880*t3481;
  t4867 = t3122*t4840;
  t4882 = t4692 + t4867;
  t4906 = t3122*t2613*t3481;
  t4978 = -1.*t2880*t4840;
  t5059 = t4906 + t4978;
  t5097 = -1.*t2880*t3372;
  t5246 = t3122*t5197;
  t5247 = t5097 + t5246;
  t5323 = -1.*t3122*t3372;
  t5324 = -1.*t2880*t5197;
  t5331 = t5323 + t5324;

  p_output1(0)=-1.*t1449*t4062 + t4394*t4521;
  p_output1(1)=-1.*t1449*t4882 + t4394*t5059;
  p_output1(2)=-1.*t1449*t5247 + t4394*t5331;
  p_output1(3)=t3734*t3795 + t3147*t3913;
  p_output1(4)=t3795*t4715 + t3147*t4812;
  p_output1(5)=t2613*t3147*t3628 + t2613*t3149*t3795;
  p_output1(6)=t4062*t4394 + t1449*t4521;
  p_output1(7)=t4394*t4882 + t1449*t5059;
  p_output1(8)=t4394*t5247 + t1449*t5331;
}


       
Eigen::Matrix<double,3,3> R_FLfoot(const Eigen::Matrix<double,18,1> &var1)
//void R_FLfoot(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



