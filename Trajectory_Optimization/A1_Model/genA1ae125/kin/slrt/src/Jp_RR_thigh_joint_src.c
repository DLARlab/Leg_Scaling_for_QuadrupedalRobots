/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:03:23 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RR_thigh_joint_src.h"

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
  double t1606;
  double t1809;
  double t1774;
  double t1777;
  double t1852;
  double t1718;
  double t1807;
  double t1854;
  double t1888;
  double t1891;
  double t1960;
  double t1962;
  double t1982;
  double t431;
  double t1529;
  double t2002;
  double t2026;
  double t2029;
  double t2030;
  double t584;
  double t820;
  double t1330;
  double t1397;
  double t1734;
  double t1773;
  double t1913;
  double t1915;
  double t1916;
  double t1956;
  double t2060;
  double t2064;
  double t2065;
  double t2077;
  double t2083;
  double t2087;
  double t2009;
  double t2018;
  double t2112;
  double t2113;
  double t2114;
  double t2231;
  double t2237;
  double t2238;
  double t2281;
  double t2284;
  double t2295;
  double t2358;
  double t2366;
  double t2367;
  double t2491;
  double t2513;
  double t2515;
  double t2521;
  double t2531;
  double t2532;
  double t2559;
  double t2568;
  double t2574;
  double t1991;
  double t2605;
  double t2609;
  double t2735;
  double t2736;
  double t2741;
  double t2967;
  double t2975;
  double t2984;
  double t2985;
  double t2986;
  double t2990;
  double t2992;
  double t2667;
  double t2753;
  double t2754;
  double t2756;
  double t2821;
  double t2822;
  double t2836;
  double t3001;
  double t3002;
  t1606 = Sin(var1[3]);
  t1809 = Cos(var1[3]);
  t1774 = Cos(var1[5]);
  t1777 = Sin(var1[4]);
  t1852 = Sin(var1[5]);
  t1718 = Sin(var1[12]);
  t1807 = -1.*t1774*t1606*t1777;
  t1854 = t1809*t1852;
  t1888 = t1807 + t1854;
  t1891 = Cos(var1[12]);
  t1960 = -1.*t1809*t1774;
  t1962 = -1.*t1606*t1777*t1852;
  t1982 = t1960 + t1962;
  t431 = Cos(var1[13]);
  t1529 = Cos(var1[4]);
  t2002 = Sin(var1[13]);
  t2026 = t1891*t1888;
  t2029 = -1.*t1718*t1982;
  t2030 = t2026 + t2029;
  t584 = -1.*t431;
  t820 = 1. + t584;
  t1330 = -0.183*t820;
  t1397 = 0. + t1330;
  t1734 = 0.047*t1718;
  t1773 = 0. + t1734;
  t1913 = -1.*t1891;
  t1915 = 1. + t1913;
  t1916 = -0.047*t1915;
  t1956 = 0. + t1916;
  t2060 = t1809*t1774*t1777;
  t2064 = t1606*t1852;
  t2065 = t2060 + t2064;
  t2077 = -1.*t1774*t1606;
  t2083 = t1809*t1777*t1852;
  t2087 = t2077 + t2083;
  t2009 = -0.183*t2002;
  t2018 = 0. + t2009;
  t2112 = t1891*t2065;
  t2113 = -1.*t1718*t2087;
  t2114 = t2112 + t2113;
  t2231 = t1891*t1809*t1529*t1774;
  t2237 = -1.*t1809*t1529*t1718*t1852;
  t2238 = t2231 + t2237;
  t2281 = t1891*t1529*t1774*t1606;
  t2284 = -1.*t1529*t1718*t1606*t1852;
  t2295 = t2281 + t2284;
  t2358 = -1.*t1891*t1774*t1777;
  t2366 = t1718*t1777*t1852;
  t2367 = t2358 + t2366;
  t2491 = t1774*t1606;
  t2513 = -1.*t1809*t1777*t1852;
  t2515 = t2491 + t2513;
  t2521 = -1.*t1718*t2065;
  t2531 = t1891*t2515;
  t2532 = t2521 + t2531;
  t2559 = t1774*t1606*t1777;
  t2568 = -1.*t1809*t1852;
  t2574 = t2559 + t2568;
  t1991 = t1891*t1982;
  t2605 = -1.*t1718*t2574;
  t2609 = t2605 + t1991;
  t2735 = -1.*t1529*t1774*t1718;
  t2736 = -1.*t1891*t1529*t1852;
  t2741 = t2735 + t2736;
  t2967 = -1.*t1891*t2087;
  t2975 = t2521 + t2967;
  t2984 = t1809*t1774;
  t2985 = t1606*t1777*t1852;
  t2986 = t2984 + t2985;
  t2990 = -1.*t1891*t2986;
  t2992 = t2605 + t2990;
  t2667 = t1891*t2574;
  t2753 = t2018*t2741;
  t2754 = 0.183*t2002*t2741;
  t2756 = t1891*t1529*t1774;
  t2821 = -1.*t1529*t1718*t1852;
  t2822 = t2756 + t2821;
  t2836 = -0.13205*t2822;
  t3001 = -1.*t1718*t2986;
  t3002 = t2667 + t3001;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=-1.*t1397*t1529*t1606 + t1773*t1888 + t1956*t1982 - 0.13205*(t1718*t1888 + t1991) + t2018*t2030 - 0.183*(-1.*t2002*t2030 - 1.*t1529*t1606*t431);
  p_output1[10]=t1397*t1529*t1809 + t1773*t2065 + t1956*t2087 - 0.13205*(t1718*t2065 + t1891*t2087) + t2018*t2114 - 0.183*(-1.*t2002*t2114 + t1529*t1809*t431);
  p_output1[11]=0;
  p_output1[12]=t1529*t1773*t1774*t1809 - 1.*t1397*t1777*t1809 - 0.13205*(t1529*t1718*t1774*t1809 + t1529*t1809*t1852*t1891) + t1529*t1809*t1852*t1956 + t2018*t2238 - 0.183*(-1.*t2002*t2238 - 1.*t1777*t1809*t431);
  p_output1[13]=t1529*t1606*t1773*t1774 - 1.*t1397*t1606*t1777 - 0.13205*(t1529*t1606*t1718*t1774 + t1529*t1606*t1852*t1891) + t1529*t1606*t1852*t1956 + t2018*t2295 - 0.183*(-1.*t2002*t2295 - 1.*t1606*t1777*t431);
  p_output1[14]=-1.*t1397*t1529 - 1.*t1773*t1774*t1777 - 0.13205*(-1.*t1718*t1774*t1777 - 1.*t1777*t1852*t1891) - 1.*t1777*t1852*t1956 + t2018*t2367 - 0.183*(-1.*t2002*t2367 - 1.*t1529*t431);
  p_output1[15]=t1956*t2065 + t1773*t2515 - 0.13205*(t2112 + t1718*t2515) + 0.183*t2002*t2532 + t2018*t2532;
  p_output1[16]=t1773*t1982 + t1956*t2574 + 0.183*t2002*t2609 + t2018*t2609 - 0.13205*(t1718*t1982 + t2667);
  p_output1[17]=-1.*t1529*t1773*t1852 + t1529*t1774*t1956 + t2753 + t2754 + t2836;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
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
  p_output1[36]=0.047*t1891*t2065 - 0.047*t1718*t2087 - 0.13205*t2114 + 0.183*t2002*t2975 + t2018*t2975;
  p_output1[37]=0.047*t1891*t2574 - 0.047*t1718*t2986 + 0.183*t2002*t2992 + t2018*t2992 - 0.13205*t3002;
  p_output1[38]=-0.047*t1529*t1718*t1852 + 0.047*t1529*t1774*t1891 + t2753 + t2754 + t2836;
  p_output1[39]=-0.183*t1529*t1809*t2002 - 0.183*t2114*t431 - 0.183*(-1.*t1529*t1809*t2002 - 1.*t2114*t431);
  p_output1[40]=-0.183*t1529*t1606*t2002 - 0.183*t3002*t431 - 0.183*(-1.*t1529*t1606*t2002 - 1.*t3002*t431);
  p_output1[41]=0.183*t1777*t2002 - 0.183*t2822*t431 - 0.183*(t1777*t2002 - 1.*t2822*t431);
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



void Jp_RR_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
