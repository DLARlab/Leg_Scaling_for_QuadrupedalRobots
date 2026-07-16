/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:52:07 GMT-05:00
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
  double t1476;
  double t4381;
  double t4942;
  double t4883;
  double t5091;
  double t4159;
  double t2385;
  double t3515;
  double t4282;
  double t4939;
  double t5926;
  double t6122;
  double t6162;
  double t6584;
  double t6622;
  double t6633;
  double t6639;
  double t6645;
  double t6646;
  double t605;
  double t6826;
  double t7012;
  double t7028;
  double t7117;
  double t7125;
  double t7132;
  double t7208;
  double t7211;
  double t7225;
  double t7264;
  double t7381;
  double t7401;
  double t7426;
  double t3655;
  double t6670;
  double t6785;
  double t6836;
  double t6858;
  double t6908;
  double t7001;
  double t7293;
  double t7295;
  double t7328;
  double t7335;
  double t7353;
  double t7378;
  double t7476;
  double t7494;
  double t7526;
  double t7537;
  double t7585;
  t1476 = Cos(var1[3]);
  t4381 = Cos(var1[5]);
  t4942 = Sin(var1[3]);
  t4883 = Sin(var1[4]);
  t5091 = Sin(var1[5]);
  t4159 = Cos(var1[16]);
  t2385 = Cos(var1[4]);
  t3515 = Sin(var1[16]);
  t4282 = Cos(var1[15]);
  t4939 = t1476*t4381*t4883;
  t5926 = t4942*t5091;
  t6122 = t4939 + t5926;
  t6162 = t4282*t6122;
  t6584 = Sin(var1[15]);
  t6622 = -1.*t4381*t4942;
  t6633 = t1476*t4883*t5091;
  t6639 = t6622 + t6633;
  t6645 = -1.*t6584*t6639;
  t6646 = t6162 + t6645;
  t605 = Sin(var1[17]);
  t6826 = Cos(var1[17]);
  t7012 = t4381*t4942*t4883;
  t7028 = -1.*t1476*t5091;
  t7117 = t7012 + t7028;
  t7125 = t4282*t7117;
  t7132 = t1476*t4381;
  t7208 = t4942*t4883*t5091;
  t7211 = t7132 + t7208;
  t7225 = -1.*t6584*t7211;
  t7264 = t7125 + t7225;
  t7381 = t4282*t2385*t4381;
  t7401 = -1.*t2385*t6584*t5091;
  t7426 = t7381 + t7401;
  t3655 = t1476*t2385*t3515;
  t6670 = t4159*t6646;
  t6785 = t3655 + t6670;
  t6836 = t4159*t1476*t2385;
  t6858 = -1.*t3515*t6646;
  t6908 = t6836 + t6858;
  t7001 = t2385*t3515*t4942;
  t7293 = t4159*t7264;
  t7295 = t7001 + t7293;
  t7328 = t4159*t2385*t4942;
  t7335 = -1.*t3515*t7264;
  t7353 = t7328 + t7335;
  t7378 = -1.*t3515*t4883;
  t7476 = t4159*t7426;
  t7494 = t7378 + t7476;
  t7526 = -1.*t4159*t4883;
  t7537 = -1.*t3515*t7426;
  t7585 = t7526 + t7537;

  p_output1(0)=-1.*t605*t6785 + t6826*t6908;
  p_output1(1)=-1.*t605*t7295 + t6826*t7353;
  p_output1(2)=-1.*t605*t7494 + t6826*t7585;
  p_output1(3)=t6122*t6584 + t4282*t6639;
  p_output1(4)=t6584*t7117 + t4282*t7211;
  p_output1(5)=t2385*t4282*t5091 + t2385*t4381*t6584;
  p_output1(6)=t6785*t6826 + t605*t6908;
  p_output1(7)=t6826*t7295 + t605*t7353;
  p_output1(8)=t6826*t7494 + t605*t7585;
}


       
Eigen::Matrix<double,3,3> R_RLfoot(const Eigen::Matrix<double,18,1> &var1)
//void R_RLfoot(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



