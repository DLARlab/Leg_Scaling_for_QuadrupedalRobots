/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:51:59 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_FRfoot.h"

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
static void output1(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  double t547;
  double t1092;
  double t1218;
  double t1130;
  double t1277;
  double t1045;
  double t1066;
  double t1163;
  double t1280;
  double t1287;
  double t1326;
  double t1351;
  double t1358;
  double t1368;
  double t1373;
  double t1393;
  double t1394;
  double t945;
  double t1405;
  double t473;
  double t1504;
  double t1542;
  double t1549;
  double t1552;
  double t1559;
  double t1565;
  double t1578;
  double t1593;
  double t1625;
  double t1461;
  double t1889;
  double t1965;
  double t1991;
  double t1439;
  double t1440;
  double t1451;
  double t1050;
  double t1406;
  double t1426;
  double t1646;
  double t1647;
  double t1660;
  double t1496;
  double t1626;
  double t1641;
  double t2294;
  double t2457;
  double t2503;
  double t1713;
  double t2245;
  double t2246;
  t547 = Cos(var1[3]);
  t1092 = Cos(var1[5]);
  t1218 = Sin(var1[3]);
  t1130 = Sin(var1[4]);
  t1277 = Sin(var1[5]);
  t1045 = Cos(var1[7]);
  t1066 = Cos(var1[6]);
  t1163 = t547*t1092*t1130;
  t1280 = t1218*t1277;
  t1287 = t1163 + t1280;
  t1326 = t1066*t1287;
  t1351 = -1.*t1092*t1218;
  t1358 = t547*t1130*t1277;
  t1368 = t1351 + t1358;
  t1373 = Sin(var1[6]);
  t1393 = -1.*t1368*t1373;
  t1394 = t1326 + t1393;
  t945 = Cos(var1[4]);
  t1405 = Sin(var1[7]);
  t473 = Cos(var1[8]);
  t1504 = t1092*t1218*t1130;
  t1542 = -1.*t547*t1277;
  t1549 = t1504 + t1542;
  t1552 = t1066*t1549;
  t1559 = t547*t1092;
  t1565 = t1218*t1130*t1277;
  t1578 = t1559 + t1565;
  t1593 = -1.*t1578*t1373;
  t1625 = t1552 + t1593;
  t1461 = Sin(var1[8]);
  t1889 = t945*t1092*t1066;
  t1965 = -1.*t945*t1277*t1373;
  t1991 = t1889 + t1965;
  t1439 = t1045*t1394;
  t1440 = t547*t945*t1405;
  t1451 = t1439 + t1440;
  t1050 = t547*t945*t1045;
  t1406 = -1.*t1394*t1405;
  t1426 = t1050 + t1406;
  t1646 = t1045*t1625;
  t1647 = t945*t1218*t1405;
  t1660 = t1646 + t1647;
  t1496 = t945*t1045*t1218;
  t1626 = -1.*t1625*t1405;
  t1641 = t1496 + t1626;
  t2294 = t1045*t1991;
  t2457 = -1.*t1130*t1405;
  t2503 = t2294 + t2457;
  t1713 = -1.*t1045*t1130;
  t2245 = -1.*t1991*t1405;
  t2246 = t1713 + t2245;

  p_output1(0)=-1.*t1451*t1461 + t1426*t473;
  p_output1(1)=-1.*t1461*t1660 + t1641*t473;
  p_output1(2)=-1.*t1461*t2503 + t2246*t473;
  p_output1(3)=t1066*t1368 + t1287*t1373;
  p_output1(4)=t1373*t1549 + t1066*t1578;
  p_output1(5)=t1066*t1277*t945 + t1092*t1373*t945;
  p_output1(6)=t1426*t1461 + t1451*t473;
  p_output1(7)=t1461*t1641 + t1660*t473;
  p_output1(8)=t1461*t2246 + t2503*t473;
}


       
Eigen::Matrix<double,3,3> R_FRfoot(const Eigen::Matrix<double,18,1> &var1)
//void R_FRfoot(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



