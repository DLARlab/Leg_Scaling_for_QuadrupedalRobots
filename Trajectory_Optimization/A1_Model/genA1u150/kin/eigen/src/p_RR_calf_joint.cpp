/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:26:47 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RR_calf_joint.h"

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
  double t1457;
  double t2985;
  double t3534;
  double t3017;
  double t4216;
  double t1766;
  double t3512;
  double t4269;
  double t4377;
  double t4535;
  double t5793;
  double t5959;
  double t5962;
  double t1496;
  double t6101;
  double t31;
  double t6154;
  double t6172;
  double t6182;
  double t6227;
  double t6257;
  double t6276;
  double t6294;
  double t6342;
  double t6360;
  double t6365;
  double t6471;
  double t6514;
  double t6524;
  double t413;
  double t675;
  double t1289;
  double t1424;
  double t2426;
  double t2560;
  double t4732;
  double t5013;
  double t5127;
  double t5569;
  double t6971;
  double t6987;
  double t6990;
  double t7049;
  double t7055;
  double t7056;
  double t6109;
  double t6110;
  double t6286;
  double t6316;
  double t6318;
  double t7333;
  double t7422;
  double t7431;
  double t6379;
  double t6387;
  double t6445;
  double t7567;
  double t7602;
  double t7613;
  double t7651;
  double t7659;
  double t7680;
  double t8082;
  double t8090;
  double t8091;
  double t8134;
  double t8145;
  double t8149;
  double t8177;
  double t8181;
  double t8185;
  t1457 = Cos(var1[3]);
  t2985 = Cos(var1[5]);
  t3534 = Sin(var1[3]);
  t3017 = Sin(var1[4]);
  t4216 = Sin(var1[5]);
  t1766 = Sin(var1[12]);
  t3512 = t1457*t2985*t3017;
  t4269 = t3534*t4216;
  t4377 = t3512 + t4269;
  t4535 = Cos(var1[12]);
  t5793 = -1.*t2985*t3534;
  t5959 = t1457*t3017*t4216;
  t5962 = t5793 + t5959;
  t1496 = Cos(var1[4]);
  t6101 = Sin(var1[13]);
  t31 = Cos(var1[13]);
  t6154 = t4535*t4377;
  t6172 = -1.*t1766*t5962;
  t6182 = t6154 + t6172;
  t6227 = Cos(var1[14]);
  t6257 = -1.*t6227;
  t6276 = 1. + t6257;
  t6294 = Sin(var1[14]);
  t6342 = t1457*t1496*t6101;
  t6360 = t31*t6182;
  t6365 = t6342 + t6360;
  t6471 = t31*t1457*t1496;
  t6514 = -1.*t6101*t6182;
  t6524 = t6471 + t6514;
  t413 = -1.*t31;
  t675 = 1. + t413;
  t1289 = -0.183*t675;
  t1424 = 0. + t1289;
  t2426 = 0.047*t1766;
  t2560 = 0. + t2426;
  t4732 = -1.*t4535;
  t5013 = 1. + t4732;
  t5127 = -0.047*t5013;
  t5569 = 0. + t5127;
  t6971 = t2985*t3534*t3017;
  t6987 = -1.*t1457*t4216;
  t6990 = t6971 + t6987;
  t7049 = t1457*t2985;
  t7055 = t3534*t3017*t4216;
  t7056 = t7049 + t7055;
  t6109 = -0.183*t6101;
  t6110 = 0. + t6109;
  t6286 = -0.3*t6276;
  t6316 = -0.183*t6294;
  t6318 = 0. + t6286 + t6316;
  t7333 = t4535*t6990;
  t7422 = -1.*t1766*t7056;
  t7431 = t7333 + t7422;
  t6379 = -0.183*t6276;
  t6387 = 0.3*t6294;
  t6445 = 0. + t6379 + t6387;
  t7567 = t1496*t6101*t3534;
  t7602 = t31*t7431;
  t7613 = t7567 + t7602;
  t7651 = t31*t1496*t3534;
  t7659 = -1.*t6101*t7431;
  t7680 = t7651 + t7659;
  t8082 = t4535*t1496*t2985;
  t8090 = -1.*t1496*t1766*t4216;
  t8091 = t8082 + t8090;
  t8134 = -1.*t6101*t3017;
  t8145 = t31*t8091;
  t8149 = t8134 + t8145;
  t8177 = -1.*t31*t3017;
  t8181 = -1.*t6101*t8091;
  t8185 = t8177 + t8181;

  p_output1(0)=0. + t1424*t1457*t1496 + t2560*t4377 + t5569*t5962 - 0.17458*(t1766*t4377 + t4535*t5962) + t6110*t6182 + t6318*t6365 + t6445*t6524 - 0.183*(-1.*t6294*t6365 + t6227*t6524) - 0.3*(t6227*t6365 + t6294*t6524) + var1(0);
  p_output1(1)=0. + t1424*t1496*t3534 + t2560*t6990 + t5569*t7056 - 0.17458*(t1766*t6990 + t4535*t7056) + t6110*t7431 + t6318*t7613 + t6445*t7680 - 0.183*(-1.*t6294*t7613 + t6227*t7680) - 0.3*(t6227*t7613 + t6294*t7680) + var1(1);
  p_output1(2)=0. + t1496*t2560*t2985 - 1.*t1424*t3017 - 0.17458*(t1496*t1766*t2985 + t1496*t4216*t4535) + t1496*t4216*t5569 + t6110*t8091 + t6318*t8149 + t6445*t8185 - 0.183*(-1.*t6294*t8149 + t6227*t8185) - 0.3*(t6227*t8149 + t6294*t8185) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_RR_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_RR_calf_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



