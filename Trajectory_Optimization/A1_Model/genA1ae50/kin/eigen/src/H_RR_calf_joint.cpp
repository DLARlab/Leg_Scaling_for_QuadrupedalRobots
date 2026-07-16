/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:11:08 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RR_calf_joint.h"

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
  double t376;
  double t849;
  double t1070;
  double t851;
  double t1079;
  double t684;
  double t567;
  double t657;
  double t746;
  double t969;
  double t1088;
  double t1119;
  double t1143;
  double t1166;
  double t1214;
  double t1240;
  double t1245;
  double t1259;
  double t1272;
  double t330;
  double t1443;
  double t1675;
  double t1806;
  double t1834;
  double t1862;
  double t1890;
  double t1897;
  double t1926;
  double t1934;
  double t1953;
  double t2056;
  double t2078;
  double t2082;
  double t682;
  double t1328;
  double t1376;
  double t1447;
  double t1466;
  double t1489;
  double t1627;
  double t1984;
  double t1989;
  double t2005;
  double t2008;
  double t2027;
  double t2049;
  double t2095;
  double t2096;
  double t2110;
  double t2122;
  double t2124;
  double t2166;
  double t2178;
  double t2183;
  double t2870;
  double t2874;
  double t1409;
  double t1545;
  double t1546;
  double t2276;
  double t2278;
  double t2296;
  double t2365;
  double t2370;
  double t2381;
  double t2382;
  double t2406;
  double t2407;
  double t2425;
  double t2476;
  double t2503;
  double t2514;
  double t2193;
  double t2205;
  double t2243;
  double t2579;
  double t2694;
  double t2926;
  double t2976;
  double t2987;
  double t3071;
  double t3100;
  double t3179;
  double t2003;
  double t2045;
  double t2047;
  double t2307;
  double t2323;
  double t2324;
  double t2263;
  double t2264;
  double t2275;
  double t2101;
  double t2140;
  double t2159;
  double t2348;
  double t2350;
  double t2352;
  t376 = Cos(var1[3]);
  t849 = Cos(var1[5]);
  t1070 = Sin(var1[3]);
  t851 = Sin(var1[4]);
  t1079 = Sin(var1[5]);
  t684 = Cos(var1[13]);
  t567 = Cos(var1[4]);
  t657 = Sin(var1[13]);
  t746 = Cos(var1[12]);
  t969 = t376*t849*t851;
  t1088 = t1070*t1079;
  t1119 = t969 + t1088;
  t1143 = t746*t1119;
  t1166 = Sin(var1[12]);
  t1214 = -1.*t849*t1070;
  t1240 = t376*t851*t1079;
  t1245 = t1214 + t1240;
  t1259 = -1.*t1166*t1245;
  t1272 = t1143 + t1259;
  t330 = Sin(var1[14]);
  t1443 = Cos(var1[14]);
  t1675 = t849*t1070*t851;
  t1806 = -1.*t376*t1079;
  t1834 = t1675 + t1806;
  t1862 = t746*t1834;
  t1890 = t376*t849;
  t1897 = t1070*t851*t1079;
  t1926 = t1890 + t1897;
  t1934 = -1.*t1166*t1926;
  t1953 = t1862 + t1934;
  t2056 = t746*t567*t849;
  t2078 = -1.*t567*t1166*t1079;
  t2082 = t2056 + t2078;
  t682 = t376*t567*t657;
  t1328 = t684*t1272;
  t1376 = t682 + t1328;
  t1447 = t684*t376*t567;
  t1466 = -1.*t657*t1272;
  t1489 = t1447 + t1466;
  t1627 = t567*t657*t1070;
  t1984 = t684*t1953;
  t1989 = t1627 + t1984;
  t2005 = t684*t567*t1070;
  t2008 = -1.*t657*t1953;
  t2027 = t2005 + t2008;
  t2049 = -1.*t657*t851;
  t2095 = t684*t2082;
  t2096 = t2049 + t2095;
  t2110 = -1.*t684*t851;
  t2122 = -1.*t657*t2082;
  t2124 = t2110 + t2122;
  t2166 = t1166*t1119;
  t2178 = t746*t1245;
  t2183 = t2166 + t2178;
  t2870 = -1.*t1443;
  t2874 = 1. + t2870;
  t1409 = -1.*t330*t1376;
  t1545 = t1443*t1489;
  t1546 = t1409 + t1545;
  t2276 = t1443*t1376;
  t2278 = t330*t1489;
  t2296 = t2276 + t2278;
  t2365 = -1.*t684;
  t2370 = 1. + t2365;
  t2381 = -0.183*t2370;
  t2382 = 0. + t2381;
  t2406 = 0.047*t1166;
  t2407 = 0. + t2406;
  t2425 = -1.*t746;
  t2476 = 1. + t2425;
  t2503 = -0.047*t2476;
  t2514 = 0. + t2503;
  t2193 = t1166*t1834;
  t2205 = t746*t1926;
  t2243 = t2193 + t2205;
  t2579 = -0.183*t657;
  t2694 = 0. + t2579;
  t2926 = -0.1*t2874;
  t2976 = -0.183*t330;
  t2987 = 0. + t2926 + t2976;
  t3071 = -0.183*t2874;
  t3100 = 0.1*t330;
  t3179 = 0. + t3071 + t3100;
  t2003 = -1.*t330*t1989;
  t2045 = t1443*t2027;
  t2047 = t2003 + t2045;
  t2307 = t1443*t1989;
  t2323 = t330*t2027;
  t2324 = t2307 + t2323;
  t2263 = t567*t849*t1166;
  t2264 = t746*t567*t1079;
  t2275 = t2263 + t2264;
  t2101 = -1.*t330*t2096;
  t2140 = t1443*t2124;
  t2159 = t2101 + t2140;
  t2348 = t1443*t2096;
  t2350 = t330*t2124;
  t2352 = t2348 + t2350;

  p_output1(0)=t1546;
  p_output1(1)=t2047;
  p_output1(2)=t2159;
  p_output1(3)=0.;
  p_output1(4)=t2183;
  p_output1(5)=t2243;
  p_output1(6)=t2275;
  p_output1(7)=0.;
  p_output1(8)=t2296;
  p_output1(9)=t2324;
  p_output1(10)=t2352;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.183*t1546 - 0.13205*t2183 - 0.1*t2296 + t1119*t2407 + t1245*t2514 + t1272*t2694 + t1376*t2987 + t1489*t3179 + t2382*t376*t567 + var1(0);
  p_output1(13)=0. - 0.183*t2047 - 0.13205*t2243 - 0.1*t2324 + t1834*t2407 + t1926*t2514 + t1953*t2694 + t1989*t2987 + t2027*t3179 + t1070*t2382*t567 + var1(1);
  p_output1(14)=0. - 0.183*t2159 - 0.13205*t2275 - 0.1*t2352 + t2082*t2694 + t2096*t2987 + t2124*t3179 + t1079*t2514*t567 + t2407*t567*t849 - 1.*t2382*t851 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_RR_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void H_RR_calf_joint(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



