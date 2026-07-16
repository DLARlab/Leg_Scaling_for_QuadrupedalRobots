/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:26:48 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RR_calf_joint.h"

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
  double t403;
  double t846;
  double t1204;
  double t925;
  double t1254;
  double t770;
  double t464;
  double t703;
  double t790;
  double t1029;
  double t1269;
  double t1329;
  double t1387;
  double t1406;
  double t1438;
  double t1466;
  double t1507;
  double t1625;
  double t1706;
  double t310;
  double t2108;
  double t2469;
  double t2519;
  double t2690;
  double t2732;
  double t2788;
  double t2804;
  double t2825;
  double t2877;
  double t2891;
  double t3276;
  double t3362;
  double t3475;
  double t753;
  double t1740;
  double t2034;
  double t2134;
  double t2174;
  double t2194;
  double t2445;
  double t2913;
  double t2924;
  double t2948;
  double t3001;
  double t3015;
  double t3153;
  double t3480;
  double t3484;
  double t3572;
  double t3573;
  double t3663;
  double t3848;
  double t3852;
  double t3972;
  double t4925;
  double t4931;
  double t2079;
  double t2417;
  double t2426;
  double t4221;
  double t4226;
  double t4227;
  double t4443;
  double t4529;
  double t4545;
  double t4550;
  double t4716;
  double t4722;
  double t4770;
  double t4771;
  double t4787;
  double t4826;
  double t4032;
  double t4033;
  double t4060;
  double t4845;
  double t4874;
  double t4936;
  double t4947;
  double t4956;
  double t5068;
  double t5084;
  double t5112;
  double t2946;
  double t3041;
  double t3091;
  double t4259;
  double t4282;
  double t4374;
  double t4086;
  double t4112;
  double t4150;
  double t3499;
  double t3789;
  double t3790;
  double t4395;
  double t4402;
  double t4414;
  t403 = Cos(var1[3]);
  t846 = Cos(var1[5]);
  t1204 = Sin(var1[3]);
  t925 = Sin(var1[4]);
  t1254 = Sin(var1[5]);
  t770 = Cos(var1[13]);
  t464 = Cos(var1[4]);
  t703 = Sin(var1[13]);
  t790 = Cos(var1[12]);
  t1029 = t403*t846*t925;
  t1269 = t1204*t1254;
  t1329 = t1029 + t1269;
  t1387 = t790*t1329;
  t1406 = Sin(var1[12]);
  t1438 = -1.*t846*t1204;
  t1466 = t403*t925*t1254;
  t1507 = t1438 + t1466;
  t1625 = -1.*t1406*t1507;
  t1706 = t1387 + t1625;
  t310 = Sin(var1[14]);
  t2108 = Cos(var1[14]);
  t2469 = t846*t1204*t925;
  t2519 = -1.*t403*t1254;
  t2690 = t2469 + t2519;
  t2732 = t790*t2690;
  t2788 = t403*t846;
  t2804 = t1204*t925*t1254;
  t2825 = t2788 + t2804;
  t2877 = -1.*t1406*t2825;
  t2891 = t2732 + t2877;
  t3276 = t790*t464*t846;
  t3362 = -1.*t464*t1406*t1254;
  t3475 = t3276 + t3362;
  t753 = t403*t464*t703;
  t1740 = t770*t1706;
  t2034 = t753 + t1740;
  t2134 = t770*t403*t464;
  t2174 = -1.*t703*t1706;
  t2194 = t2134 + t2174;
  t2445 = t464*t703*t1204;
  t2913 = t770*t2891;
  t2924 = t2445 + t2913;
  t2948 = t770*t464*t1204;
  t3001 = -1.*t703*t2891;
  t3015 = t2948 + t3001;
  t3153 = -1.*t703*t925;
  t3480 = t770*t3475;
  t3484 = t3153 + t3480;
  t3572 = -1.*t770*t925;
  t3573 = -1.*t703*t3475;
  t3663 = t3572 + t3573;
  t3848 = t1406*t1329;
  t3852 = t790*t1507;
  t3972 = t3848 + t3852;
  t4925 = -1.*t2108;
  t4931 = 1. + t4925;
  t2079 = -1.*t310*t2034;
  t2417 = t2108*t2194;
  t2426 = t2079 + t2417;
  t4221 = t2108*t2034;
  t4226 = t310*t2194;
  t4227 = t4221 + t4226;
  t4443 = -1.*t770;
  t4529 = 1. + t4443;
  t4545 = -0.183*t4529;
  t4550 = 0. + t4545;
  t4716 = 0.047*t1406;
  t4722 = 0. + t4716;
  t4770 = -1.*t790;
  t4771 = 1. + t4770;
  t4787 = -0.047*t4771;
  t4826 = 0. + t4787;
  t4032 = t1406*t2690;
  t4033 = t790*t2825;
  t4060 = t4032 + t4033;
  t4845 = -0.183*t703;
  t4874 = 0. + t4845;
  t4936 = -0.3*t4931;
  t4947 = -0.183*t310;
  t4956 = 0. + t4936 + t4947;
  t5068 = -0.183*t4931;
  t5084 = 0.3*t310;
  t5112 = 0. + t5068 + t5084;
  t2946 = -1.*t310*t2924;
  t3041 = t2108*t3015;
  t3091 = t2946 + t3041;
  t4259 = t2108*t2924;
  t4282 = t310*t3015;
  t4374 = t4259 + t4282;
  t4086 = t464*t846*t1406;
  t4112 = t790*t464*t1254;
  t4150 = t4086 + t4112;
  t3499 = -1.*t310*t3484;
  t3789 = t2108*t3663;
  t3790 = t3499 + t3789;
  t4395 = t2108*t3484;
  t4402 = t310*t3663;
  t4414 = t4395 + t4402;

  p_output1(0)=t2426;
  p_output1(1)=t3091;
  p_output1(2)=t3790;
  p_output1(3)=0.;
  p_output1(4)=t3972;
  p_output1(5)=t4060;
  p_output1(6)=t4150;
  p_output1(7)=0.;
  p_output1(8)=t4227;
  p_output1(9)=t4374;
  p_output1(10)=t4414;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.183*t2426 - 0.17458*t3972 - 0.3*t4227 + t403*t4550*t464 + t1329*t4722 + t1507*t4826 + t1706*t4874 + t2034*t4956 + t2194*t5112 + var1(0);
  p_output1(13)=0. - 0.183*t3091 - 0.17458*t4060 - 0.3*t4374 + t1204*t4550*t464 + t2690*t4722 + t2825*t4826 + t2891*t4874 + t2924*t4956 + t3015*t5112 + var1(1);
  p_output1(14)=0. - 0.183*t3790 - 0.17458*t4150 - 0.3*t4414 + t1254*t464*t4826 + t3475*t4874 + t3484*t4956 + t3663*t5112 + t464*t4722*t846 - 1.*t4550*t925 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_RR_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void H_RR_calf_joint(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



