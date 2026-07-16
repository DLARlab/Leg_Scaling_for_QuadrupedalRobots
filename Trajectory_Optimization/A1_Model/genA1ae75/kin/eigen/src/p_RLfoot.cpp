/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:52:05 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RLfoot.h"

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
  double t1061;
  double t2451;
  double t3369;
  double t3143;
  double t3371;
  double t1369;
  double t3252;
  double t3422;
  double t3537;
  double t3812;
  double t4997;
  double t5576;
  double t5582;
  double t1234;
  double t6050;
  double t108;
  double t6083;
  double t6091;
  double t6116;
  double t6144;
  double t6287;
  double t6300;
  double t6364;
  double t6388;
  double t6408;
  double t6422;
  double t6514;
  double t6528;
  double t6540;
  double t122;
  double t206;
  double t740;
  double t902;
  double t1490;
  double t1648;
  double t4080;
  double t4122;
  double t4274;
  double t4294;
  double t6646;
  double t6759;
  double t6785;
  double t6810;
  double t6811;
  double t6824;
  double t6073;
  double t6079;
  double t6353;
  double t6374;
  double t6383;
  double t6936;
  double t6955;
  double t6963;
  double t6452;
  double t6459;
  double t6489;
  double t6991;
  double t7012;
  double t7027;
  double t7061;
  double t7087;
  double t7092;
  double t7411;
  double t7425;
  double t7461;
  double t7479;
  double t7494;
  double t7499;
  double t7505;
  double t7506;
  double t7508;
  t1061 = Cos(var1[3]);
  t2451 = Cos(var1[5]);
  t3369 = Sin(var1[3]);
  t3143 = Sin(var1[4]);
  t3371 = Sin(var1[5]);
  t1369 = Sin(var1[15]);
  t3252 = t1061*t2451*t3143;
  t3422 = t3369*t3371;
  t3537 = t3252 + t3422;
  t3812 = Cos(var1[15]);
  t4997 = -1.*t2451*t3369;
  t5576 = t1061*t3143*t3371;
  t5582 = t4997 + t5576;
  t1234 = Cos(var1[4]);
  t6050 = Sin(var1[16]);
  t108 = Cos(var1[16]);
  t6083 = t3812*t3537;
  t6091 = -1.*t1369*t5582;
  t6116 = t6083 + t6091;
  t6144 = Cos(var1[17]);
  t6287 = -1.*t6144;
  t6300 = 1. + t6287;
  t6364 = Sin(var1[17]);
  t6388 = t1061*t1234*t6050;
  t6408 = t108*t6116;
  t6422 = t6388 + t6408;
  t6514 = t108*t1061*t1234;
  t6528 = -1.*t6050*t6116;
  t6540 = t6514 + t6528;
  t122 = -1.*t108;
  t206 = 1. + t122;
  t740 = -0.183*t206;
  t902 = 0. + t740;
  t1490 = -0.047*t1369;
  t1648 = 0. + t1490;
  t4080 = -1.*t3812;
  t4122 = 1. + t4080;
  t4274 = 0.047*t4122;
  t4294 = 0. + t4274;
  t6646 = t2451*t3369*t3143;
  t6759 = -1.*t1061*t3371;
  t6785 = t6646 + t6759;
  t6810 = t1061*t2451;
  t6811 = t3369*t3143*t3371;
  t6824 = t6810 + t6811;
  t6073 = -0.183*t6050;
  t6079 = 0. + t6073;
  t6353 = -0.15*t6300;
  t6374 = -0.183*t6364;
  t6383 = 0. + t6353 + t6374;
  t6936 = t3812*t6785;
  t6955 = -1.*t1369*t6824;
  t6963 = t6936 + t6955;
  t6452 = -0.183*t6300;
  t6459 = 0.15*t6364;
  t6489 = 0. + t6452 + t6459;
  t6991 = t1234*t6050*t3369;
  t7012 = t108*t6963;
  t7027 = t6991 + t7012;
  t7061 = t108*t1234*t3369;
  t7087 = -1.*t6050*t6963;
  t7092 = t7061 + t7087;
  t7411 = t3812*t1234*t2451;
  t7425 = -1.*t1234*t1369*t3371;
  t7461 = t7411 + t7425;
  t7479 = -1.*t6050*t3143;
  t7494 = t108*t7461;
  t7499 = t7479 + t7494;
  t7505 = -1.*t108*t3143;
  t7506 = -1.*t6050*t7461;
  t7508 = t7505 + t7506;

  p_output1(0)=0. + t1648*t3537 + t4294*t5582 + 0.13205*(t1369*t3537 + t3812*t5582) + t6079*t6116 + t6383*t6422 + t6489*t6540 - 0.183*(-1.*t6364*t6422 + t6144*t6540) - 0.3*(t6144*t6422 + t6364*t6540) + t1061*t1234*t902 + var1(0);
  p_output1(1)=0. + t1648*t6785 + t4294*t6824 + 0.13205*(t1369*t6785 + t3812*t6824) + t6079*t6963 + t6383*t7027 + t6489*t7092 - 0.183*(-1.*t6364*t7027 + t6144*t7092) - 0.3*(t6144*t7027 + t6364*t7092) + t1234*t3369*t902 + var1(1);
  p_output1(2)=0. + t1234*t1648*t2451 + 0.13205*(t1234*t1369*t2451 + t1234*t3371*t3812) + t1234*t3371*t4294 + t6079*t7461 + t6383*t7499 + t6489*t7508 - 0.183*(-1.*t6364*t7499 + t6144*t7508) - 0.3*(t6144*t7499 + t6364*t7508) - 1.*t3143*t902 + var1(2);
}


       
Eigen::Matrix<double,3,1> p_RLfoot(const Eigen::Matrix<double,18,1> &var1)
//void p_RLfoot(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



