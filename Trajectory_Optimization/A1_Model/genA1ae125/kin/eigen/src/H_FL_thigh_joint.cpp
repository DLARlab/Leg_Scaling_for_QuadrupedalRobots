/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:04:20 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FL_thigh_joint.h"

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
  double t1378;
  double t1768;
  double t1837;
  double t1813;
  double t1839;
  double t1370;
  double t1545;
  double t1704;
  double t1759;
  double t1894;
  double t1836;
  double t1881;
  double t1882;
  double t1938;
  double t1943;
  double t1965;
  double t1987;
  double t1989;
  double t2032;
  double t2068;
  double t2069;
  double t2071;
  double t1886;
  double t1966;
  double t1968;
  double t2044;
  double t2075;
  double t2079;
  double t2094;
  double t2096;
  double t2129;
  double t2146;
  double t2162;
  double t2163;
  double t1547;
  double t1969;
  double t1971;
  double t2287;
  double t2290;
  double t2291;
  double t2299;
  double t2306;
  double t2319;
  double t2334;
  double t2354;
  double t2360;
  double t2361;
  double t2172;
  double t2174;
  double t2175;
  double t2373;
  double t2374;
  double t1975;
  double t2080;
  double t2086;
  double t2178;
  double t2189;
  double t2190;
  double t2092;
  double t2134;
  double t2145;
  t1378 = Cos(var1[3]);
  t1768 = Cos(var1[5]);
  t1837 = Sin(var1[3]);
  t1813 = Sin(var1[4]);
  t1839 = Sin(var1[5]);
  t1370 = Cos(var1[10]);
  t1545 = Cos(var1[4]);
  t1704 = Sin(var1[10]);
  t1759 = Cos(var1[9]);
  t1894 = Sin(var1[9]);
  t1836 = t1378*t1768*t1813;
  t1881 = t1837*t1839;
  t1882 = t1836 + t1881;
  t1938 = -1.*t1768*t1837;
  t1943 = t1378*t1813*t1839;
  t1965 = t1938 + t1943;
  t1987 = t1768*t1837*t1813;
  t1989 = -1.*t1378*t1839;
  t2032 = t1987 + t1989;
  t2068 = t1378*t1768;
  t2069 = t1837*t1813*t1839;
  t2071 = t2068 + t2069;
  t1886 = t1759*t1882;
  t1966 = -1.*t1894*t1965;
  t1968 = t1886 + t1966;
  t2044 = t1759*t2032;
  t2075 = -1.*t1894*t2071;
  t2079 = t2044 + t2075;
  t2094 = t1759*t1545*t1768;
  t2096 = -1.*t1545*t1894*t1839;
  t2129 = t2094 + t2096;
  t2146 = t1894*t1882;
  t2162 = t1759*t1965;
  t2163 = t2146 + t2162;
  t1547 = t1370*t1378*t1545;
  t1969 = -1.*t1704*t1968;
  t1971 = t1547 + t1969;
  t2287 = -1.*t1370;
  t2290 = 1. + t2287;
  t2291 = 0.183*t2290;
  t2299 = 0. + t2291;
  t2306 = -0.047*t1894;
  t2319 = 0. + t2306;
  t2334 = -1.*t1759;
  t2354 = 1. + t2334;
  t2360 = 0.047*t2354;
  t2361 = 0. + t2360;
  t2172 = t1894*t2032;
  t2174 = t1759*t2071;
  t2175 = t2172 + t2174;
  t2373 = 0.183*t1704;
  t2374 = 0. + t2373;
  t1975 = t1370*t1545*t1837;
  t2080 = -1.*t1704*t2079;
  t2086 = t1975 + t2080;
  t2178 = t1545*t1768*t1894;
  t2189 = t1759*t1545*t1839;
  t2190 = t2178 + t2189;
  t2092 = -1.*t1370*t1813;
  t2134 = -1.*t1704*t2129;
  t2145 = t2092 + t2134;

  p_output1(0)=t1971;
  p_output1(1)=t2086;
  p_output1(2)=t2145;
  p_output1(3)=0.;
  p_output1(4)=t2163;
  p_output1(5)=t2175;
  p_output1(6)=t2190;
  p_output1(7)=0.;
  p_output1(8)=t1378*t1545*t1704 + t1370*t1968;
  p_output1(9)=t1545*t1704*t1837 + t1370*t2079;
  p_output1(10)=-1.*t1704*t1813 + t1370*t2129;
  p_output1(11)=0.;
  p_output1(12)=0. + 0.183*t1971 + 0.13205*t2163 + t1378*t1545*t2299 + t1882*t2319 + t1965*t2361 + t1968*t2374 + var1(0);
  p_output1(13)=0. + 0.183*t2086 + 0.13205*t2175 + t1545*t1837*t2299 + t2032*t2319 + t2071*t2361 + t2079*t2374 + var1(1);
  p_output1(14)=0. + 0.183*t2145 + 0.13205*t2190 - 1.*t1813*t2299 + t1545*t1768*t2319 + t1545*t1839*t2361 + t2129*t2374 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_FL_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void H_FL_thigh_joint(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



