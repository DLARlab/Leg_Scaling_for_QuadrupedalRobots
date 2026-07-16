/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:26:56 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FRfoot.h"

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
static void output1(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  double t246;
  double t4495;
  double t6130;
  double t4567;
  double t6135;
  double t3541;
  double t5444;
  double t6274;
  double t6295;
  double t6395;
  double t6398;
  double t6405;
  double t6438;
  double t1771;
  double t6569;
  double t6593;
  double t6846;
  double t1199;
  double t6870;
  double t7137;
  double t7162;
  double t7308;
  double t7364;
  double t7413;
  double t7424;
  double t7425;
  double t7081;
  double t7098;
  double t7125;
  double t2274;
  double t2622;
  double t2980;
  double t3048;
  double t3893;
  double t3958;
  double t4242;
  double t4349;
  double t6452;
  double t6508;
  double t7834;
  double t7865;
  double t7866;
  double t7899;
  double t7921;
  double t7993;
  double t6953;
  double t6966;
  double t8079;
  double t8110;
  double t8121;
  double t7344;
  double t7371;
  double t7379;
  double t7482;
  double t7487;
  double t7497;
  double t8188;
  double t8205;
  double t8241;
  double t8148;
  double t8163;
  double t8168;
  double t8590;
  double t8601;
  double t8618;
  double t8650;
  double t8656;
  double t8657;
  double t8625;
  double t8636;
  double t8639;
  t246 = Cos(var1[3]);
  t4495 = Cos(var1[5]);
  t6130 = Sin(var1[4]);
  t4567 = Sin(var1[3]);
  t6135 = Sin(var1[5]);
  t3541 = Cos(var1[6]);
  t5444 = -1.*t4495*t4567;
  t6274 = t246*t6130*t6135;
  t6295 = t5444 + t6274;
  t6395 = t246*t4495*t6130;
  t6398 = t4567*t6135;
  t6405 = t6395 + t6398;
  t6438 = Sin(var1[6]);
  t1771 = Cos(var1[7]);
  t6569 = t3541*t6405;
  t6593 = -1.*t6295*t6438;
  t6846 = t6569 + t6593;
  t1199 = Cos(var1[4]);
  t6870 = Sin(var1[7]);
  t7137 = Cos(var1[8]);
  t7162 = -1.*t7137;
  t7308 = 1. + t7162;
  t7364 = Sin(var1[8]);
  t7413 = t246*t1199*t1771;
  t7424 = -1.*t6846*t6870;
  t7425 = t7413 + t7424;
  t7081 = t1771*t6846;
  t7098 = t246*t1199*t6870;
  t7125 = t7081 + t7098;
  t2274 = -1.*t1771;
  t2622 = 1. + t2274;
  t2980 = 0.183*t2622;
  t3048 = 0. + t2980;
  t3893 = -1.*t3541;
  t3958 = 1. + t3893;
  t4242 = -0.047*t3958;
  t4349 = 0. + t4242;
  t6452 = 0.047*t6438;
  t6508 = 0. + t6452;
  t7834 = t246*t4495;
  t7865 = t4567*t6130*t6135;
  t7866 = t7834 + t7865;
  t7899 = t4495*t4567*t6130;
  t7921 = -1.*t246*t6135;
  t7993 = t7899 + t7921;
  t6953 = 0.183*t6870;
  t6966 = 0. + t6953;
  t8079 = t3541*t7993;
  t8110 = -1.*t7866*t6438;
  t8121 = t8079 + t8110;
  t7344 = -0.3*t7308;
  t7371 = 0.183*t7364;
  t7379 = 0. + t7344 + t7371;
  t7482 = 0.183*t7308;
  t7487 = 0.3*t7364;
  t7497 = 0. + t7482 + t7487;
  t8188 = t1199*t1771*t4567;
  t8205 = -1.*t8121*t6870;
  t8241 = t8188 + t8205;
  t8148 = t1771*t8121;
  t8163 = t1199*t4567*t6870;
  t8168 = t8148 + t8163;
  t8590 = t1199*t4495*t3541;
  t8601 = -1.*t1199*t6135*t6438;
  t8618 = t8590 + t8601;
  t8650 = -1.*t1771*t6130;
  t8656 = -1.*t8618*t6870;
  t8657 = t8650 + t8656;
  t8625 = t1771*t8618;
  t8636 = -1.*t6130*t6870;
  t8639 = t8625 + t8636;

  p_output1(0)=0. + t1199*t246*t3048 + t4349*t6295 - 0.17458*(t3541*t6295 + t6405*t6438) + t6405*t6508 + t6846*t6966 + t7125*t7379 + 0.183*(-1.*t7125*t7364 + t7137*t7425) - 0.6*(t7125*t7137 + t7364*t7425) + t7425*t7497 + var1(0);
  p_output1(1)=0. + t1199*t3048*t4567 + t4349*t7866 + t6508*t7993 - 0.17458*(t3541*t7866 + t6438*t7993) + t6966*t8121 + t7379*t8168 + t7497*t8241 + 0.183*(-1.*t7364*t8168 + t7137*t8241) - 0.6*(t7137*t8168 + t7364*t8241) + var1(1);
  p_output1(2)=0. - 1.*t3048*t6130 + t1199*t4349*t6135 - 0.17458*(t1199*t3541*t6135 + t1199*t4495*t6438) + t1199*t4495*t6508 + t6966*t8618 + t7379*t8639 + t7497*t8657 + 0.183*(-1.*t7364*t8639 + t7137*t8657) - 0.6*(t7137*t8639 + t7364*t8657) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_FRfoot(const Eigen::Matrix<double,18,1> &var1)
//void p_FRfoot(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



