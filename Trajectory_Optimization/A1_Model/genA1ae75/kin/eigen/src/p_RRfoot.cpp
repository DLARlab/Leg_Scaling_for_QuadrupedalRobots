/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:52:02 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RRfoot.h"

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
static void output1(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  double t1628;
  double t2021;
  double t2062;
  double t2028;
  double t2092;
  double t1800;
  double t2059;
  double t2113;
  double t2127;
  double t2142;
  double t2319;
  double t2353;
  double t2360;
  double t1649;
  double t3505;
  double t1000;
  double t4520;
  double t4542;
  double t4618;
  double t5286;
  double t5455;
  double t5479;
  double t5554;
  double t5624;
  double t5626;
  double t5627;
  double t5680;
  double t5686;
  double t5704;
  double t1230;
  double t1469;
  double t1520;
  double t1620;
  double t1820;
  double t1970;
  double t2249;
  double t2297;
  double t2303;
  double t2307;
  double t5878;
  double t5883;
  double t5888;
  double t5924;
  double t5927;
  double t5958;
  double t4133;
  double t4165;
  double t5547;
  double t5576;
  double t5608;
  double t6050;
  double t6052;
  double t6062;
  double t5648;
  double t5649;
  double t5677;
  double t6079;
  double t6083;
  double t6090;
  double t6101;
  double t6106;
  double t6107;
  double t6459;
  double t6460;
  double t6461;
  double t6480;
  double t6490;
  double t6491;
  double t6516;
  double t6518;
  double t6523;
  t1628 = Cos(var1[3]);
  t2021 = Cos(var1[5]);
  t2062 = Sin(var1[3]);
  t2028 = Sin(var1[4]);
  t2092 = Sin(var1[5]);
  t1800 = Sin(var1[12]);
  t2059 = t1628*t2021*t2028;
  t2113 = t2062*t2092;
  t2127 = t2059 + t2113;
  t2142 = Cos(var1[12]);
  t2319 = -1.*t2021*t2062;
  t2353 = t1628*t2028*t2092;
  t2360 = t2319 + t2353;
  t1649 = Cos(var1[4]);
  t3505 = Sin(var1[13]);
  t1000 = Cos(var1[13]);
  t4520 = t2142*t2127;
  t4542 = -1.*t1800*t2360;
  t4618 = t4520 + t4542;
  t5286 = Cos(var1[14]);
  t5455 = -1.*t5286;
  t5479 = 1. + t5455;
  t5554 = Sin(var1[14]);
  t5624 = t1628*t1649*t3505;
  t5626 = t1000*t4618;
  t5627 = t5624 + t5626;
  t5680 = t1000*t1628*t1649;
  t5686 = -1.*t3505*t4618;
  t5704 = t5680 + t5686;
  t1230 = -1.*t1000;
  t1469 = 1. + t1230;
  t1520 = -0.183*t1469;
  t1620 = 0. + t1520;
  t1820 = 0.047*t1800;
  t1970 = 0. + t1820;
  t2249 = -1.*t2142;
  t2297 = 1. + t2249;
  t2303 = -0.047*t2297;
  t2307 = 0. + t2303;
  t5878 = t2021*t2062*t2028;
  t5883 = -1.*t1628*t2092;
  t5888 = t5878 + t5883;
  t5924 = t1628*t2021;
  t5927 = t2062*t2028*t2092;
  t5958 = t5924 + t5927;
  t4133 = -0.183*t3505;
  t4165 = 0. + t4133;
  t5547 = -0.15*t5479;
  t5576 = -0.183*t5554;
  t5608 = 0. + t5547 + t5576;
  t6050 = t2142*t5888;
  t6052 = -1.*t1800*t5958;
  t6062 = t6050 + t6052;
  t5648 = -0.183*t5479;
  t5649 = 0.15*t5554;
  t5677 = 0. + t5648 + t5649;
  t6079 = t1649*t3505*t2062;
  t6083 = t1000*t6062;
  t6090 = t6079 + t6083;
  t6101 = t1000*t1649*t2062;
  t6106 = -1.*t3505*t6062;
  t6107 = t6101 + t6106;
  t6459 = t2142*t1649*t2021;
  t6460 = -1.*t1649*t1800*t2092;
  t6461 = t6459 + t6460;
  t6480 = -1.*t3505*t2028;
  t6490 = t1000*t6461;
  t6491 = t6480 + t6490;
  t6516 = -1.*t1000*t2028;
  t6518 = -1.*t3505*t6461;
  t6523 = t6516 + t6518;

  p_output1(0)=0. + t1620*t1628*t1649 + t1970*t2127 + t2307*t2360 - 0.13205*(t1800*t2127 + t2142*t2360) + t4165*t4618 + t5608*t5627 + t5677*t5704 - 0.183*(-1.*t5554*t5627 + t5286*t5704) - 0.3*(t5286*t5627 + t5554*t5704) + var1(0);
  p_output1(1)=0. + t1620*t1649*t2062 + t1970*t5888 + t2307*t5958 - 0.13205*(t1800*t5888 + t2142*t5958) + t4165*t6062 + t5608*t6090 + t5677*t6107 - 0.183*(-1.*t5554*t6090 + t5286*t6107) - 0.3*(t5286*t6090 + t5554*t6107) + var1(1);
  p_output1(2)=0. + t1649*t1970*t2021 - 1.*t1620*t2028 - 0.13205*(t1649*t1800*t2021 + t1649*t2092*t2142) + t1649*t2092*t2307 + t4165*t6461 + t5608*t6491 + t5677*t6523 - 0.183*(-1.*t5554*t6491 + t5286*t6523) - 0.3*(t5286*t6491 + t5554*t6523) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_RRfoot(const Eigen::Matrix<double,18,1> &var1)
//void p_RRfoot(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



