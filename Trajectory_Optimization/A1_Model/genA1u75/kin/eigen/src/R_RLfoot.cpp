/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:19:15 GMT-05:00
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
  double t1239;
  double t2444;
  double t2655;
  double t2613;
  double t2656;
  double t1568;
  double t1281;
  double t1449;
  double t2392;
  double t2643;
  double t2682;
  double t2847;
  double t2880;
  double t2882;
  double t2897;
  double t3122;
  double t3129;
  double t3139;
  double t3147;
  double t1129;
  double t3309;
  double t3734;
  double t3759;
  double t3795;
  double t3805;
  double t3834;
  double t3847;
  double t3851;
  double t3913;
  double t3929;
  double t4431;
  double t4455;
  double t4457;
  double t1492;
  double t3149;
  double t3198;
  double t3372;
  double t3453;
  double t3481;
  double t3703;
  double t3945;
  double t4036;
  double t4102;
  double t4142;
  double t4304;
  double t4394;
  double t4521;
  double t4582;
  double t4702;
  double t4703;
  double t4715;
  t1239 = Cos(var1[3]);
  t2444 = Cos(var1[5]);
  t2655 = Sin(var1[3]);
  t2613 = Sin(var1[4]);
  t2656 = Sin(var1[5]);
  t1568 = Cos(var1[16]);
  t1281 = Cos(var1[4]);
  t1449 = Sin(var1[16]);
  t2392 = Cos(var1[15]);
  t2643 = t1239*t2444*t2613;
  t2682 = t2655*t2656;
  t2847 = t2643 + t2682;
  t2880 = t2392*t2847;
  t2882 = Sin(var1[15]);
  t2897 = -1.*t2444*t2655;
  t3122 = t1239*t2613*t2656;
  t3129 = t2897 + t3122;
  t3139 = -1.*t2882*t3129;
  t3147 = t2880 + t3139;
  t1129 = Sin(var1[17]);
  t3309 = Cos(var1[17]);
  t3734 = t2444*t2655*t2613;
  t3759 = -1.*t1239*t2656;
  t3795 = t3734 + t3759;
  t3805 = t2392*t3795;
  t3834 = t1239*t2444;
  t3847 = t2655*t2613*t2656;
  t3851 = t3834 + t3847;
  t3913 = -1.*t2882*t3851;
  t3929 = t3805 + t3913;
  t4431 = t2392*t1281*t2444;
  t4455 = -1.*t1281*t2882*t2656;
  t4457 = t4431 + t4455;
  t1492 = t1239*t1281*t1449;
  t3149 = t1568*t3147;
  t3198 = t1492 + t3149;
  t3372 = t1568*t1239*t1281;
  t3453 = -1.*t1449*t3147;
  t3481 = t3372 + t3453;
  t3703 = t1281*t1449*t2655;
  t3945 = t1568*t3929;
  t4036 = t3703 + t3945;
  t4102 = t1568*t1281*t2655;
  t4142 = -1.*t1449*t3929;
  t4304 = t4102 + t4142;
  t4394 = -1.*t1449*t2613;
  t4521 = t1568*t4457;
  t4582 = t4394 + t4521;
  t4702 = -1.*t1568*t2613;
  t4703 = -1.*t1449*t4457;
  t4715 = t4702 + t4703;

  p_output1(0)=-1.*t1129*t3198 + t3309*t3481;
  p_output1(1)=-1.*t1129*t4036 + t3309*t4304;
  p_output1(2)=-1.*t1129*t4582 + t3309*t4715;
  p_output1(3)=t2847*t2882 + t2392*t3129;
  p_output1(4)=t2882*t3795 + t2392*t3851;
  p_output1(5)=t1281*t2392*t2656 + t1281*t2444*t2882;
  p_output1(6)=t3198*t3309 + t1129*t3481;
  p_output1(7)=t3309*t4036 + t1129*t4304;
  p_output1(8)=t3309*t4582 + t1129*t4715;
}


       
Eigen::Matrix<double,3,3> R_RLfoot(const Eigen::Matrix<double,18,1> &var1)
//void R_RLfoot(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



