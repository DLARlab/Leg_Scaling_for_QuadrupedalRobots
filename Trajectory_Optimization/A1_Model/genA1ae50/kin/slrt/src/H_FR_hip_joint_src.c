/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:09:54 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FR_hip_joint_src.h"

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
  double t1042;
  double t1091;
  double t1003;
  double t1124;
  double t1175;
  double t1188;
  double t1166;
  double t1245;
  double t1238;
  double t1239;
  double t1240;
  double t1180;
  double t1205;
  double t1214;
  double t1356;
  double t1377;
  double t1389;
  double t1307;
  double t1308;
  double t1325;
  double t1236;
  double t1267;
  double t1281;
  double t1541;
  double t1573;
  double t1581;
  double t1592;
  double t1601;
  double t1603;
  double t1341;
  double t1393;
  double t1419;
  double t1423;
  double t1426;
  double t1439;
  t1042 = Cos(var1[4]);
  t1091 = Sin(var1[3]);
  t1003 = Cos(var1[3]);
  t1124 = Sin(var1[4]);
  t1175 = Cos(var1[5]);
  t1188 = Sin(var1[5]);
  t1166 = Cos(var1[6]);
  t1245 = Sin(var1[6]);
  t1238 = t1003*t1175*t1124;
  t1239 = t1091*t1188;
  t1240 = t1238 + t1239;
  t1180 = -1.*t1175*t1091;
  t1205 = t1003*t1124*t1188;
  t1214 = t1180 + t1205;
  t1356 = t1175*t1091*t1124;
  t1377 = -1.*t1003*t1188;
  t1389 = t1356 + t1377;
  t1307 = t1003*t1175;
  t1308 = t1091*t1124*t1188;
  t1325 = t1307 + t1308;
  t1236 = t1166*t1214;
  t1267 = t1240*t1245;
  t1281 = t1236 + t1267;
  t1541 = -1.*t1166;
  t1573 = 1. + t1541;
  t1581 = -0.047*t1573;
  t1592 = 0. + t1581;
  t1601 = 0.047*t1245;
  t1603 = 0. + t1601;
  t1341 = t1166*t1325;
  t1393 = t1389*t1245;
  t1419 = t1341 + t1393;
  t1423 = t1042*t1166*t1188;
  t1426 = t1042*t1175*t1245;
  t1439 = t1423 + t1426;
  p_output1[0]=t1003*t1042;
  p_output1[1]=t1042*t1091;
  p_output1[2]=-1.*t1124;
  p_output1[3]=0.;
  p_output1[4]=t1281;
  p_output1[5]=t1419;
  p_output1[6]=t1439;
  p_output1[7]=0.;
  p_output1[8]=t1166*t1240 - 1.*t1214*t1245;
  p_output1[9]=-1.*t1245*t1325 + t1166*t1389;
  p_output1[10]=t1042*t1166*t1175 - 1.*t1042*t1188*t1245;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.183*t1003*t1042 - 0.047*t1281 + t1214*t1592 + t1240*t1603 + var1[0];
  p_output1[13]=0. + 0.183*t1042*t1091 - 0.047*t1419 + t1325*t1592 + t1389*t1603 + var1[1];
  p_output1[14]=0. - 0.183*t1124 - 0.047*t1439 + t1042*t1188*t1592 + t1042*t1175*t1603 + var1[2];
  p_output1[15]=1.;
}



void H_FR_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
