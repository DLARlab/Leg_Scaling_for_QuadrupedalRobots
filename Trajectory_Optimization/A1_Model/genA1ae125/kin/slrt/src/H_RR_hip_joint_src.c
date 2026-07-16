/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:03:21 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RR_hip_joint_src.h"

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
  double t939;
  double t910;
  double t1241;
  double t1175;
  double t1268;
  double t1296;
  double t1264;
  double t1441;
  double t1269;
  double t1297;
  double t1324;
  double t1442;
  double t1447;
  double t1452;
  double t1457;
  double t1465;
  double t1466;
  double t1477;
  double t1478;
  double t1479;
  double t1432;
  double t1455;
  double t1456;
  double t1521;
  double t1523;
  double t1525;
  double t1527;
  double t1528;
  double t1530;
  double t1471;
  double t1482;
  double t1483;
  double t1485;
  double t1486;
  double t1498;
  t939 = Cos(var1[4]);
  t910 = Cos(var1[3]);
  t1241 = Sin(var1[4]);
  t1175 = Sin(var1[3]);
  t1268 = Cos(var1[5]);
  t1296 = Sin(var1[5]);
  t1264 = Sin(var1[12]);
  t1441 = Cos(var1[12]);
  t1269 = t910*t1268*t1241;
  t1297 = t1175*t1296;
  t1324 = t1269 + t1297;
  t1442 = -1.*t1268*t1175;
  t1447 = t910*t1241*t1296;
  t1452 = t1442 + t1447;
  t1457 = t1268*t1175*t1241;
  t1465 = -1.*t910*t1296;
  t1466 = t1457 + t1465;
  t1477 = t910*t1268;
  t1478 = t1175*t1241*t1296;
  t1479 = t1477 + t1478;
  t1432 = t1264*t1324;
  t1455 = t1441*t1452;
  t1456 = t1432 + t1455;
  t1521 = 0.047*t1264;
  t1523 = 0. + t1521;
  t1525 = -1.*t1441;
  t1527 = 1. + t1525;
  t1528 = -0.047*t1527;
  t1530 = 0. + t1528;
  t1471 = t1264*t1466;
  t1482 = t1441*t1479;
  t1483 = t1471 + t1482;
  t1485 = t939*t1268*t1264;
  t1486 = t1441*t939*t1296;
  t1498 = t1485 + t1486;
  p_output1[0]=t910*t939;
  p_output1[1]=t1175*t939;
  p_output1[2]=-1.*t1241;
  p_output1[3]=0.;
  p_output1[4]=t1456;
  p_output1[5]=t1483;
  p_output1[6]=t1498;
  p_output1[7]=0.;
  p_output1[8]=t1324*t1441 - 1.*t1264*t1452;
  p_output1[9]=t1441*t1466 - 1.*t1264*t1479;
  p_output1[10]=-1.*t1264*t1296*t939 + t1268*t1441*t939;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.047*t1456 + t1324*t1523 + t1452*t1530 - 0.183*t910*t939 + var1[0];
  p_output1[13]=0. - 0.047*t1483 + t1466*t1523 + t1479*t1530 - 0.183*t1175*t939 + var1[1];
  p_output1[14]=0. + 0.183*t1241 - 0.047*t1498 + t1268*t1523*t939 + t1296*t1530*t939 + var1[2];
  p_output1[15]=1.;
}



void H_RR_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
