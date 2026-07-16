/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:50:32 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_FR_hip_joint_src.h"

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
  double t1278;
  double t1446;
  double t1474;
  double t1424;
  double t1479;
  double t1339;
  double t1448;
  double t1483;
  double t1487;
  double t1508;
  double t1539;
  double t1556;
  double t1558;
  double t1203;
  double t1375;
  double t1385;
  double t1387;
  double t1419;
  double t1560;
  double t1596;
  double t1673;
  double t1674;
  double t1677;
  double t1683;
  double t1686;
  double t1698;
  double t1839;
  double t1845;
  double t1849;
  double t1865;
  double t1866;
  double t1871;
  double t1853;
  double t1907;
  double t2080;
  double t2097;
  double t2106;
  double t1958;
  double t1973;
  double t1974;
  double t1980;
  t1278 = Sin(var1[3]);
  t1446 = Cos(var1[5]);
  t1474 = Sin(var1[4]);
  t1424 = Cos(var1[3]);
  t1479 = Sin(var1[5]);
  t1339 = Cos(var1[6]);
  t1448 = -1.*t1424*t1446;
  t1483 = -1.*t1278*t1474*t1479;
  t1487 = t1448 + t1483;
  t1508 = -1.*t1446*t1278*t1474;
  t1539 = t1424*t1479;
  t1556 = t1508 + t1539;
  t1558 = Sin(var1[6]);
  t1203 = Cos(var1[4]);
  t1375 = -1.*t1339;
  t1385 = 1. + t1375;
  t1387 = -0.047*t1385;
  t1419 = 0. + t1387;
  t1560 = 0.047*t1558;
  t1596 = 0. + t1560;
  t1673 = -1.*t1446*t1278;
  t1674 = t1424*t1474*t1479;
  t1677 = t1673 + t1674;
  t1683 = t1424*t1446*t1474;
  t1686 = t1278*t1479;
  t1698 = t1683 + t1686;
  t1839 = t1446*t1278;
  t1845 = -1.*t1424*t1474*t1479;
  t1849 = t1839 + t1845;
  t1865 = t1446*t1278*t1474;
  t1866 = -1.*t1424*t1479;
  t1871 = t1865 + t1866;
  t1853 = t1339*t1698;
  t1907 = t1339*t1871;
  t2080 = t1424*t1446;
  t2097 = t1278*t1474*t1479;
  t2106 = t2080 + t2097;
  t1958 = t1203*t1446*t1339;
  t1973 = -1.*t1203*t1479*t1558;
  t1974 = t1958 + t1973;
  t1980 = -0.047*t1974;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=-0.183*t1203*t1278 + t1419*t1487 - 0.047*(t1339*t1487 + t1556*t1558) + t1556*t1596;
  p_output1[10]=0.183*t1203*t1424 + t1419*t1677 + t1596*t1698 - 0.047*(t1339*t1677 + t1558*t1698);
  p_output1[11]=0;
  p_output1[12]=-0.183*t1424*t1474 + t1203*t1419*t1424*t1479 - 0.047*(t1203*t1339*t1424*t1479 + t1203*t1424*t1446*t1558) + t1203*t1424*t1446*t1596;
  p_output1[13]=-0.183*t1278*t1474 + t1203*t1278*t1419*t1479 - 0.047*(t1203*t1278*t1339*t1479 + t1203*t1278*t1446*t1558) + t1203*t1278*t1446*t1596;
  p_output1[14]=-0.183*t1203 - 1.*t1419*t1474*t1479 - 0.047*(-1.*t1339*t1474*t1479 - 1.*t1446*t1474*t1558) - 1.*t1446*t1474*t1596;
  p_output1[15]=t1419*t1698 + t1596*t1849 - 0.047*(t1558*t1849 + t1853);
  p_output1[16]=t1487*t1596 + t1419*t1871 - 0.047*(t1487*t1558 + t1907);
  p_output1[17]=t1203*t1419*t1446 - 1.*t1203*t1479*t1596 + t1980;
  p_output1[18]=-0.047*t1558*t1677 + 0.047*t1339*t1698 - 0.047*(-1.*t1558*t1677 + t1853);
  p_output1[19]=0.047*t1339*t1871 - 0.047*t1558*t2106 - 0.047*(t1907 - 1.*t1558*t2106);
  p_output1[20]=0.047*t1203*t1339*t1446 - 0.047*t1203*t1479*t1558 + t1980;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
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



void Jp_FR_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
