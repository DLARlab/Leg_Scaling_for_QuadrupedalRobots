/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:10:19 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RL_calf_joint_src.h"

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
  double t1544;
  double t3201;
  double t3851;
  double t3291;
  double t4279;
  double t1936;
  double t3429;
  double t4299;
  double t5097;
  double t6131;
  double t8613;
  double t8751;
  double t8805;
  double t1744;
  double t8936;
  double t232;
  double t9148;
  double t9268;
  double t9497;
  double t9754;
  double t9814;
  double t9829;
  double t9861;
  double t9900;
  double t9904;
  double t9920;
  double t9943;
  double t9944;
  double t9945;
  double t436;
  double t487;
  double t770;
  double t854;
  double t2396;
  double t2698;
  double t6308;
  double t6370;
  double t6595;
  double t8604;
  double t9992;
  double t9993;
  double t9995;
  double t9999;
  double t10011;
  double t10012;
  double t8943;
  double t9020;
  double t9860;
  double t9864;
  double t9897;
  double t10024;
  double t10026;
  double t10028;
  double t9928;
  double t9929;
  double t9942;
  double t10044;
  double t10049;
  double t10051;
  double t10055;
  double t10056;
  double t10057;
  double t10136;
  double t10138;
  double t10142;
  double t10149;
  double t10150;
  double t10158;
  double t10172;
  double t10173;
  double t10174;
  t1544 = Cos(var1[3]);
  t3201 = Cos(var1[5]);
  t3851 = Sin(var1[3]);
  t3291 = Sin(var1[4]);
  t4279 = Sin(var1[5]);
  t1936 = Sin(var1[15]);
  t3429 = t1544*t3201*t3291;
  t4299 = t3851*t4279;
  t5097 = t3429 + t4299;
  t6131 = Cos(var1[15]);
  t8613 = -1.*t3201*t3851;
  t8751 = t1544*t3291*t4279;
  t8805 = t8613 + t8751;
  t1744 = Cos(var1[4]);
  t8936 = Sin(var1[16]);
  t232 = Cos(var1[16]);
  t9148 = t6131*t5097;
  t9268 = -1.*t1936*t8805;
  t9497 = t9148 + t9268;
  t9754 = Cos(var1[17]);
  t9814 = -1.*t9754;
  t9829 = 1. + t9814;
  t9861 = Sin(var1[17]);
  t9900 = t1544*t1744*t8936;
  t9904 = t232*t9497;
  t9920 = t9900 + t9904;
  t9943 = t232*t1544*t1744;
  t9944 = -1.*t8936*t9497;
  t9945 = t9943 + t9944;
  t436 = -1.*t232;
  t487 = 1. + t436;
  t770 = -0.183*t487;
  t854 = 0. + t770;
  t2396 = -0.047*t1936;
  t2698 = 0. + t2396;
  t6308 = -1.*t6131;
  t6370 = 1. + t6308;
  t6595 = 0.047*t6370;
  t8604 = 0. + t6595;
  t9992 = t3201*t3851*t3291;
  t9993 = -1.*t1544*t4279;
  t9995 = t9992 + t9993;
  t9999 = t1544*t3201;
  t10011 = t3851*t3291*t4279;
  t10012 = t9999 + t10011;
  t8943 = -0.183*t8936;
  t9020 = 0. + t8943;
  t9860 = -0.1*t9829;
  t9864 = -0.183*t9861;
  t9897 = 0. + t9860 + t9864;
  t10024 = t6131*t9995;
  t10026 = -1.*t1936*t10012;
  t10028 = t10024 + t10026;
  t9928 = -0.183*t9829;
  t9929 = 0.1*t9861;
  t9942 = 0. + t9928 + t9929;
  t10044 = t1744*t8936*t3851;
  t10049 = t232*t10028;
  t10051 = t10044 + t10049;
  t10055 = t232*t1744*t3851;
  t10056 = -1.*t8936*t10028;
  t10057 = t10055 + t10056;
  t10136 = t6131*t1744*t3201;
  t10138 = -1.*t1744*t1936*t4279;
  t10142 = t10136 + t10138;
  t10149 = -1.*t8936*t3291;
  t10150 = t232*t10142;
  t10158 = t10149 + t10150;
  t10172 = -1.*t232*t3291;
  t10173 = -1.*t8936*t10142;
  t10174 = t10172 + t10173;
  p_output1[0]=0. + t2698*t5097 + t1544*t1744*t854 + t8604*t8805 + 0.13205*(t1936*t5097 + t6131*t8805) + t9020*t9497 + t9897*t9920 + t9942*t9945 - 0.183*(-1.*t9861*t9920 + t9754*t9945) - 0.1*(t9754*t9920 + t9861*t9945) + var1[0];
  p_output1[1]=0. + t1744*t3851*t854 + t10012*t8604 + t10028*t9020 - 0.183*(t10057*t9754 - 1.*t10051*t9861) - 0.1*(t10051*t9754 + t10057*t9861) + t10051*t9897 + t10057*t9942 + t2698*t9995 + 0.13205*(t10012*t6131 + t1936*t9995) + var1[1];
  p_output1[2]=0. + t1744*t2698*t3201 + 0.13205*(t1744*t1936*t3201 + t1744*t4279*t6131) - 1.*t3291*t854 + t1744*t4279*t8604 + t10142*t9020 - 0.183*(t10174*t9754 - 1.*t10158*t9861) - 0.1*(t10158*t9754 + t10174*t9861) + t10158*t9897 + t10174*t9942 + var1[2];
}



void p_RL_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
