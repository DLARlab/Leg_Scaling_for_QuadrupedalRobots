/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:03:07 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FR_thigh_joint_src.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE static __inline__        /* use standard inline */
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
static void output1(double *p_output1,const double *var1)
{
  double t1509;
  double t1767;
  double t1840;
  double t1834;
  double t1869;
  double t1686;
  double t1705;
  double t1724;
  double t1953;
  double t1970;
  double t1912;
  double t1945;
  double t1951;
  double t1838;
  double t1870;
  double t1872;
  double t2033;
  double t2034;
  double t2037;
  double t2005;
  double t2022;
  double t2027;
  double t1879;
  double t1964;
  double t1967;
  double t2028;
  double t2047;
  double t2051;
  double t2089;
  double t2103;
  double t2104;
  double t2118;
  double t2126;
  double t2128;
  double t1722;
  double t1972;
  double t1976;
  double t2233;
  double t2257;
  double t2263;
  double t2265;
  double t2269;
  double t2270;
  double t2276;
  double t2277;
  double t2283;
  double t2288;
  double t2138;
  double t2151;
  double t2156;
  double t2304;
  double t2307;
  double t1978;
  double t2057;
  double t2061;
  double t2159;
  double t2164;
  double t2186;
  double t2076;
  double t2111;
  double t2117;
  t1509 = Cos(var1[3]);
  t1767 = Cos(var1[5]);
  t1840 = Sin(var1[3]);
  t1834 = Sin(var1[4]);
  t1869 = Sin(var1[5]);
  t1686 = Cos(var1[4]);
  t1705 = Cos(var1[7]);
  t1724 = Cos(var1[6]);
  t1953 = Sin(var1[6]);
  t1970 = Sin(var1[7]);
  t1912 = -1.*t1767*t1840;
  t1945 = t1509*t1834*t1869;
  t1951 = t1912 + t1945;
  t1838 = t1509*t1767*t1834;
  t1870 = t1840*t1869;
  t1872 = t1838 + t1870;
  t2033 = t1509*t1767;
  t2034 = t1840*t1834*t1869;
  t2037 = t2033 + t2034;
  t2005 = t1767*t1840*t1834;
  t2022 = -1.*t1509*t1869;
  t2027 = t2005 + t2022;
  t1879 = t1724*t1872;
  t1964 = -1.*t1951*t1953;
  t1967 = t1879 + t1964;
  t2028 = t1724*t2027;
  t2047 = -1.*t2037*t1953;
  t2051 = t2028 + t2047;
  t2089 = t1686*t1767*t1724;
  t2103 = -1.*t1686*t1869*t1953;
  t2104 = t2089 + t2103;
  t2118 = t1724*t1951;
  t2126 = t1872*t1953;
  t2128 = t2118 + t2126;
  t1722 = t1509*t1686*t1705;
  t1972 = -1.*t1967*t1970;
  t1976 = t1722 + t1972;
  t2233 = -1.*t1705;
  t2257 = 1. + t2233;
  t2263 = 0.183*t2257;
  t2265 = 0. + t2263;
  t2269 = -1.*t1724;
  t2270 = 1. + t2269;
  t2276 = -0.047*t2270;
  t2277 = 0. + t2276;
  t2283 = 0.047*t1953;
  t2288 = 0. + t2283;
  t2138 = t1724*t2037;
  t2151 = t2027*t1953;
  t2156 = t2138 + t2151;
  t2304 = 0.183*t1970;
  t2307 = 0. + t2304;
  t1978 = t1686*t1705*t1840;
  t2057 = -1.*t2051*t1970;
  t2061 = t1978 + t2057;
  t2159 = t1686*t1724*t1869;
  t2164 = t1686*t1767*t1953;
  t2186 = t2159 + t2164;
  t2076 = -1.*t1705*t1834;
  t2111 = -1.*t2104*t1970;
  t2117 = t2076 + t2111;
  p_output1[0]=t1976;
  p_output1[1]=t2061;
  p_output1[2]=t2117;
  p_output1[3]=0.;
  p_output1[4]=t2128;
  p_output1[5]=t2156;
  p_output1[6]=t2186;
  p_output1[7]=0.;
  p_output1[8]=t1705*t1967 + t1509*t1686*t1970;
  p_output1[9]=t1686*t1840*t1970 + t1705*t2051;
  p_output1[10]=-1.*t1834*t1970 + t1705*t2104;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.183*t1976 - 0.13205*t2128 + t1509*t1686*t2265 + t1951*t2277 + t1872*t2288 + t1967*t2307 + var1[0];
  p_output1[13]=0. + 0.183*t2061 - 0.13205*t2156 + t1686*t1840*t2265 + t2037*t2277 + t2027*t2288 + t2051*t2307 + var1[1];
  p_output1[14]=0. + 0.183*t2117 - 0.13205*t2186 - 1.*t1834*t2265 + t1686*t1869*t2277 + t1686*t1767*t2288 + t2104*t2307 + var1[2];
  p_output1[15]=1.;
}



void H_FR_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
