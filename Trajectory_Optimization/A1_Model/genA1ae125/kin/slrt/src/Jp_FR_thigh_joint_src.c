/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:03:06 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_FR_thigh_joint_src.h"

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
  double t1317;
  double t1408;
  double t1418;
  double t1391;
  double t1419;
  double t1336;
  double t1416;
  double t1429;
  double t1434;
  double t1459;
  double t1464;
  double t1476;
  double t1480;
  double t1161;
  double t1176;
  double t1599;
  double t1600;
  double t1604;
  double t1607;
  double t1194;
  double t1286;
  double t1292;
  double t1299;
  double t1337;
  double t1372;
  double t1374;
  double t1378;
  double t1492;
  double t1501;
  double t1669;
  double t1680;
  double t1685;
  double t1687;
  double t1690;
  double t1691;
  double t1615;
  double t1619;
  double t1738;
  double t1739;
  double t1740;
  double t1847;
  double t1856;
  double t1857;
  double t1922;
  double t1925;
  double t1927;
  double t1979;
  double t2005;
  double t2019;
  double t2037;
  double t2039;
  double t2047;
  double t2063;
  double t2077;
  double t2078;
  double t2098;
  double t2099;
  double t2100;
  double t1516;
  double t2119;
  double t2126;
  double t2179;
  double t2185;
  double t2186;
  double t2208;
  double t2209;
  double t2104;
  double t2218;
  double t2220;
  double t2221;
  double t2258;
  double t2263;
  double t2165;
  double t2166;
  double t2169;
  double t2178;
  double t2189;
  double t2193;
  double t2242;
  double t2252;
  t1317 = Sin(var1[3]);
  t1408 = Cos(var1[5]);
  t1418 = Sin(var1[4]);
  t1391 = Cos(var1[3]);
  t1419 = Sin(var1[5]);
  t1336 = Cos(var1[6]);
  t1416 = -1.*t1391*t1408;
  t1429 = -1.*t1317*t1418*t1419;
  t1434 = t1416 + t1429;
  t1459 = -1.*t1408*t1317*t1418;
  t1464 = t1391*t1419;
  t1476 = t1459 + t1464;
  t1480 = Sin(var1[6]);
  t1161 = Cos(var1[4]);
  t1176 = Cos(var1[7]);
  t1599 = t1336*t1476;
  t1600 = -1.*t1434*t1480;
  t1604 = t1599 + t1600;
  t1607 = Sin(var1[7]);
  t1194 = -1.*t1176;
  t1286 = 1. + t1194;
  t1292 = 0.183*t1286;
  t1299 = 0. + t1292;
  t1337 = -1.*t1336;
  t1372 = 1. + t1337;
  t1374 = -0.047*t1372;
  t1378 = 0. + t1374;
  t1492 = 0.047*t1480;
  t1501 = 0. + t1492;
  t1669 = -1.*t1408*t1317;
  t1680 = t1391*t1418*t1419;
  t1685 = t1669 + t1680;
  t1687 = t1391*t1408*t1418;
  t1690 = t1317*t1419;
  t1691 = t1687 + t1690;
  t1615 = 0.183*t1607;
  t1619 = 0. + t1615;
  t1738 = t1336*t1691;
  t1739 = -1.*t1685*t1480;
  t1740 = t1738 + t1739;
  t1847 = t1391*t1161*t1408*t1336;
  t1856 = -1.*t1391*t1161*t1419*t1480;
  t1857 = t1847 + t1856;
  t1922 = t1161*t1408*t1336*t1317;
  t1925 = -1.*t1161*t1317*t1419*t1480;
  t1927 = t1922 + t1925;
  t1979 = -1.*t1408*t1336*t1418;
  t2005 = t1418*t1419*t1480;
  t2019 = t1979 + t2005;
  t2037 = t1408*t1317;
  t2039 = -1.*t1391*t1418*t1419;
  t2047 = t2037 + t2039;
  t2063 = t1336*t2047;
  t2077 = -1.*t1691*t1480;
  t2078 = t2063 + t2077;
  t2098 = t1408*t1317*t1418;
  t2099 = -1.*t1391*t1419;
  t2100 = t2098 + t2099;
  t1516 = t1336*t1434;
  t2119 = -1.*t2100*t1480;
  t2126 = t1516 + t2119;
  t2179 = -1.*t1161*t1336*t1419;
  t2185 = -1.*t1161*t1408*t1480;
  t2186 = t2179 + t2185;
  t2208 = -1.*t1336*t1685;
  t2209 = t2208 + t2077;
  t2104 = t1336*t2100;
  t2218 = t1391*t1408;
  t2220 = t1317*t1418*t1419;
  t2221 = t2218 + t2220;
  t2258 = -1.*t1336*t2221;
  t2263 = t2258 + t2119;
  t2165 = t1161*t1408*t1336;
  t2166 = -1.*t1161*t1419*t1480;
  t2169 = t2165 + t2166;
  t2178 = -0.13205*t2169;
  t2189 = t2186*t1619;
  t2193 = -0.183*t2186*t1607;
  t2242 = -1.*t2221*t1480;
  t2252 = t2104 + t2242;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=-1.*t1161*t1299*t1317 + t1378*t1434 + t1476*t1501 - 0.13205*(t1476*t1480 + t1516) + 0.183*(-1.*t1161*t1176*t1317 - 1.*t1604*t1607) + t1604*t1619;
  p_output1[10]=t1161*t1299*t1391 + t1378*t1685 + t1501*t1691 - 0.13205*(t1336*t1685 + t1480*t1691) + t1619*t1740 + 0.183*(t1161*t1176*t1391 - 1.*t1607*t1740);
  p_output1[11]=0;
  p_output1[12]=-1.*t1299*t1391*t1418 + t1161*t1378*t1391*t1419 - 0.13205*(t1161*t1336*t1391*t1419 + t1161*t1391*t1408*t1480) + t1161*t1391*t1408*t1501 + t1619*t1857 + 0.183*(-1.*t1176*t1391*t1418 - 1.*t1607*t1857);
  p_output1[13]=-1.*t1299*t1317*t1418 + t1161*t1317*t1378*t1419 - 0.13205*(t1161*t1317*t1336*t1419 + t1161*t1317*t1408*t1480) + t1161*t1317*t1408*t1501 + t1619*t1927 + 0.183*(-1.*t1176*t1317*t1418 - 1.*t1607*t1927);
  p_output1[14]=-1.*t1161*t1299 - 1.*t1378*t1418*t1419 - 0.13205*(-1.*t1336*t1418*t1419 - 1.*t1408*t1418*t1480) - 1.*t1408*t1418*t1501 + t1619*t2019 + 0.183*(-1.*t1161*t1176 - 1.*t1607*t2019);
  p_output1[15]=t1378*t1691 + t1501*t2047 - 0.13205*(t1738 + t1480*t2047) - 0.183*t1607*t2078 + t1619*t2078;
  p_output1[16]=t1434*t1501 + t1378*t2100 - 0.13205*(t1434*t1480 + t2104) - 0.183*t1607*t2126 + t1619*t2126;
  p_output1[17]=t1161*t1378*t1408 - 1.*t1161*t1419*t1501 + t2178 + t2189 + t2193;
  p_output1[18]=-0.047*t1480*t1685 + 0.047*t1336*t1691 - 0.13205*t1740 - 0.183*t1607*t2209 + t1619*t2209;
  p_output1[19]=0.047*t1336*t2100 - 0.047*t1480*t2221 - 0.13205*t2252 - 0.183*t1607*t2263 + t1619*t2263;
  p_output1[20]=0.047*t1161*t1336*t1408 - 0.047*t1161*t1419*t1480 + t2178 + t2189 + t2193;
  p_output1[21]=0.183*t1161*t1391*t1607 + 0.183*t1176*t1740 + 0.183*(-1.*t1161*t1391*t1607 - 1.*t1176*t1740);
  p_output1[22]=0.183*t1161*t1317*t1607 + 0.183*t1176*t2252 + 0.183*(-1.*t1161*t1317*t1607 - 1.*t1176*t2252);
  p_output1[23]=-0.183*t1418*t1607 + 0.183*t1176*t2169 + 0.183*(t1418*t1607 - 1.*t1176*t2169);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
}



void Jp_FR_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
