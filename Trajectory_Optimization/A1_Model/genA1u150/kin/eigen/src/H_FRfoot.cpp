/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:26:57 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FRfoot.h"

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
static void output1(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  double t258;
  double t1004;
  double t1351;
  double t1282;
  double t1364;
  double t811;
  double t936;
  double t1331;
  double t1473;
  double t1476;
  double t1509;
  double t1539;
  double t1615;
  double t1677;
  double t1688;
  double t1696;
  double t1947;
  double t489;
  double t1970;
  double t74;
  double t2578;
  double t2609;
  double t2614;
  double t2631;
  double t2632;
  double t2662;
  double t2695;
  double t2709;
  double t2757;
  double t2330;
  double t3126;
  double t3210;
  double t3238;
  double t2219;
  double t2291;
  double t2314;
  double t813;
  double t2138;
  double t2163;
  double t2829;
  double t2833;
  double t2838;
  double t2508;
  double t2760;
  double t2787;
  double t3325;
  double t3367;
  double t3448;
  double t3057;
  double t3257;
  double t3258;
  double t3519;
  double t3581;
  double t3586;
  double t4540;
  double t4561;
  double t2211;
  double t2471;
  double t2481;
  double t3817;
  double t3840;
  double t4008;
  double t4241;
  double t4249;
  double t4297;
  double t4313;
  double t4349;
  double t4367;
  double t4413;
  double t4437;
  double t4445;
  double t4461;
  double t3650;
  double t3652;
  double t3677;
  double t4487;
  double t4506;
  double t4569;
  double t4602;
  double t4610;
  double t4686;
  double t4703;
  double t4727;
  double t2813;
  double t2872;
  double t2903;
  double t4016;
  double t4026;
  double t4070;
  double t3728;
  double t3756;
  double t3788;
  double t3294;
  double t3453;
  double t3490;
  double t4100;
  double t4126;
  double t4219;
  t258 = Cos(var1[3]);
  t1004 = Cos(var1[5]);
  t1351 = Sin(var1[3]);
  t1282 = Sin(var1[4]);
  t1364 = Sin(var1[5]);
  t811 = Cos(var1[7]);
  t936 = Cos(var1[6]);
  t1331 = t258*t1004*t1282;
  t1473 = t1351*t1364;
  t1476 = t1331 + t1473;
  t1509 = t936*t1476;
  t1539 = -1.*t1004*t1351;
  t1615 = t258*t1282*t1364;
  t1677 = t1539 + t1615;
  t1688 = Sin(var1[6]);
  t1696 = -1.*t1677*t1688;
  t1947 = t1509 + t1696;
  t489 = Cos(var1[4]);
  t1970 = Sin(var1[7]);
  t74 = Cos(var1[8]);
  t2578 = t1004*t1351*t1282;
  t2609 = -1.*t258*t1364;
  t2614 = t2578 + t2609;
  t2631 = t936*t2614;
  t2632 = t258*t1004;
  t2662 = t1351*t1282*t1364;
  t2695 = t2632 + t2662;
  t2709 = -1.*t2695*t1688;
  t2757 = t2631 + t2709;
  t2330 = Sin(var1[8]);
  t3126 = t489*t1004*t936;
  t3210 = -1.*t489*t1364*t1688;
  t3238 = t3126 + t3210;
  t2219 = t811*t1947;
  t2291 = t258*t489*t1970;
  t2314 = t2219 + t2291;
  t813 = t258*t489*t811;
  t2138 = -1.*t1947*t1970;
  t2163 = t813 + t2138;
  t2829 = t811*t2757;
  t2833 = t489*t1351*t1970;
  t2838 = t2829 + t2833;
  t2508 = t489*t811*t1351;
  t2760 = -1.*t2757*t1970;
  t2787 = t2508 + t2760;
  t3325 = t811*t3238;
  t3367 = -1.*t1282*t1970;
  t3448 = t3325 + t3367;
  t3057 = -1.*t811*t1282;
  t3257 = -1.*t3238*t1970;
  t3258 = t3057 + t3257;
  t3519 = t936*t1677;
  t3581 = t1476*t1688;
  t3586 = t3519 + t3581;
  t4540 = -1.*t74;
  t4561 = 1. + t4540;
  t2211 = t74*t2163;
  t2471 = -1.*t2314*t2330;
  t2481 = t2211 + t2471;
  t3817 = t74*t2314;
  t3840 = t2163*t2330;
  t4008 = t3817 + t3840;
  t4241 = -1.*t811;
  t4249 = 1. + t4241;
  t4297 = 0.183*t4249;
  t4313 = 0. + t4297;
  t4349 = -1.*t936;
  t4367 = 1. + t4349;
  t4413 = -0.047*t4367;
  t4437 = 0. + t4413;
  t4445 = 0.047*t1688;
  t4461 = 0. + t4445;
  t3650 = t936*t2695;
  t3652 = t2614*t1688;
  t3677 = t3650 + t3652;
  t4487 = 0.183*t1970;
  t4506 = 0. + t4487;
  t4569 = -0.3*t4561;
  t4602 = 0.183*t2330;
  t4610 = 0. + t4569 + t4602;
  t4686 = 0.183*t4561;
  t4703 = 0.3*t2330;
  t4727 = 0. + t4686 + t4703;
  t2813 = t74*t2787;
  t2872 = -1.*t2838*t2330;
  t2903 = t2813 + t2872;
  t4016 = t74*t2838;
  t4026 = t2787*t2330;
  t4070 = t4016 + t4026;
  t3728 = t489*t936*t1364;
  t3756 = t489*t1004*t1688;
  t3788 = t3728 + t3756;
  t3294 = t74*t3258;
  t3453 = -1.*t3448*t2330;
  t3490 = t3294 + t3453;
  t4100 = t74*t3448;
  t4126 = t3258*t2330;
  t4219 = t4100 + t4126;

  p_output1(0)=t2481;
  p_output1(1)=t2903;
  p_output1(2)=t3490;
  p_output1(3)=0.;
  p_output1(4)=t3586;
  p_output1(5)=t3677;
  p_output1(6)=t3788;
  p_output1(7)=0.;
  p_output1(8)=t4008;
  p_output1(9)=t4070;
  p_output1(10)=t4219;
  p_output1(11)=0.;
  p_output1(12)=0. + 0.183*t2481 - 0.17458*t3586 - 0.6*t4008 + t1677*t4437 + t1476*t4461 + t1947*t4506 + t2314*t4610 + t2163*t4727 + t258*t4313*t489 + var1(0);
  p_output1(13)=0. + 0.183*t2903 - 0.17458*t3677 - 0.6*t4070 + t2695*t4437 + t2614*t4461 + t2757*t4506 + t2838*t4610 + t2787*t4727 + t1351*t4313*t489 + var1(1);
  p_output1(14)=0. + 0.183*t3490 - 0.17458*t3788 - 0.6*t4219 - 1.*t1282*t4313 + t3238*t4506 + t3448*t4610 + t3258*t4727 + t1364*t4437*t489 + t1004*t4461*t489 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_FRfoot(const Eigen::Matrix<double,18,1> &var1)
//void H_FRfoot(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



