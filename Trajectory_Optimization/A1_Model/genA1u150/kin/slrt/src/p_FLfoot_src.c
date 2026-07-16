/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:26:05 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FLfoot_src.h"

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
  double t1090;
  double t1807;
  double t2103;
  double t1848;
  double t2178;
  double t1549;
  double t2059;
  double t2548;
  double t2607;
  double t2851;
  double t4164;
  double t4204;
  double t4237;
  double t1231;
  double t5931;
  double t483;
  double t6165;
  double t6311;
  double t6530;
  double t6589;
  double t6696;
  double t6742;
  double t6768;
  double t6835;
  double t6838;
  double t6867;
  double t6918;
  double t7025;
  double t7042;
  double t580;
  double t601;
  double t974;
  double t1013;
  double t1556;
  double t1799;
  double t2902;
  double t2916;
  double t3463;
  double t3617;
  double t7245;
  double t7258;
  double t7333;
  double t7338;
  double t7340;
  double t7357;
  double t6001;
  double t6002;
  double t6744;
  double t6773;
  double t6782;
  double t7458;
  double t7471;
  double t7483;
  double t6884;
  double t6894;
  double t6912;
  double t7523;
  double t7524;
  double t7526;
  double t7540;
  double t7587;
  double t7598;
  double t7819;
  double t7828;
  double t7830;
  double t7881;
  double t7926;
  double t7932;
  double t7937;
  double t7972;
  double t7979;
  t1090 = Cos(var1[3]);
  t1807 = Cos(var1[5]);
  t2103 = Sin(var1[3]);
  t1848 = Sin(var1[4]);
  t2178 = Sin(var1[5]);
  t1549 = Sin(var1[9]);
  t2059 = t1090*t1807*t1848;
  t2548 = t2103*t2178;
  t2607 = t2059 + t2548;
  t2851 = Cos(var1[9]);
  t4164 = -1.*t1807*t2103;
  t4204 = t1090*t1848*t2178;
  t4237 = t4164 + t4204;
  t1231 = Cos(var1[4]);
  t5931 = Sin(var1[10]);
  t483 = Cos(var1[10]);
  t6165 = t2851*t2607;
  t6311 = -1.*t1549*t4237;
  t6530 = t6165 + t6311;
  t6589 = Cos(var1[11]);
  t6696 = -1.*t6589;
  t6742 = 1. + t6696;
  t6768 = Sin(var1[11]);
  t6835 = t1090*t1231*t5931;
  t6838 = t483*t6530;
  t6867 = t6835 + t6838;
  t6918 = t483*t1090*t1231;
  t7025 = -1.*t5931*t6530;
  t7042 = t6918 + t7025;
  t580 = -1.*t483;
  t601 = 1. + t580;
  t974 = 0.183*t601;
  t1013 = 0. + t974;
  t1556 = -0.047*t1549;
  t1799 = 0. + t1556;
  t2902 = -1.*t2851;
  t2916 = 1. + t2902;
  t3463 = 0.047*t2916;
  t3617 = 0. + t3463;
  t7245 = t1807*t2103*t1848;
  t7258 = -1.*t1090*t2178;
  t7333 = t7245 + t7258;
  t7338 = t1090*t1807;
  t7340 = t2103*t1848*t2178;
  t7357 = t7338 + t7340;
  t6001 = 0.183*t5931;
  t6002 = 0. + t6001;
  t6744 = -0.3*t6742;
  t6773 = 0.183*t6768;
  t6782 = 0. + t6744 + t6773;
  t7458 = t2851*t7333;
  t7471 = -1.*t1549*t7357;
  t7483 = t7458 + t7471;
  t6884 = 0.183*t6742;
  t6894 = 0.3*t6768;
  t6912 = 0. + t6884 + t6894;
  t7523 = t1231*t5931*t2103;
  t7524 = t483*t7483;
  t7526 = t7523 + t7524;
  t7540 = t483*t1231*t2103;
  t7587 = -1.*t5931*t7483;
  t7598 = t7540 + t7587;
  t7819 = t2851*t1231*t1807;
  t7828 = -1.*t1231*t1549*t2178;
  t7830 = t7819 + t7828;
  t7881 = -1.*t5931*t1848;
  t7926 = t483*t7830;
  t7932 = t7881 + t7926;
  t7937 = -1.*t483*t1848;
  t7972 = -1.*t5931*t7830;
  t7979 = t7937 + t7972;
  p_output1[0]=0. + t1013*t1090*t1231 + t1799*t2607 + t3617*t4237 + 0.17458*(t1549*t2607 + t2851*t4237) + t6002*t6530 + t6782*t6867 + t6912*t7042 + 0.183*(-1.*t6768*t6867 + t6589*t7042) - 0.6*(t6589*t6867 + t6768*t7042) + var1[0];
  p_output1[1]=0. + t1013*t1231*t2103 + t1799*t7333 + t3617*t7357 + 0.17458*(t1549*t7333 + t2851*t7357) + t6002*t7483 + t6782*t7526 + t6912*t7598 + 0.183*(-1.*t6768*t7526 + t6589*t7598) - 0.6*(t6589*t7526 + t6768*t7598) + var1[1];
  p_output1[2]=0. + t1231*t1799*t1807 - 1.*t1013*t1848 + 0.17458*(t1231*t1549*t1807 + t1231*t2178*t2851) + t1231*t2178*t3617 + t6002*t7830 + t6782*t7932 + t6912*t7979 + 0.183*(-1.*t6768*t7932 + t6589*t7979) - 0.6*(t6589*t7932 + t6768*t7979) + var1[2];
}



void p_FLfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
