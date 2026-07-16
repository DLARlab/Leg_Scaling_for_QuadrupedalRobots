/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:18:58 GMT-05:00
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
  double t280;
  double t941;
  double t1383;
  double t1002;
  double t1385;
  double t821;
  double t286;
  double t305;
  double t879;
  double t1108;
  double t1456;
  double t1479;
  double t1499;
  double t1635;
  double t1643;
  double t1668;
  double t1672;
  double t1691;
  double t1726;
  double t259;
  double t1832;
  double t2438;
  double t2615;
  double t2758;
  double t2814;
  double t3111;
  double t3131;
  double t3138;
  double t3153;
  double t3157;
  double t3553;
  double t3558;
  double t3692;
  double t459;
  double t1738;
  double t1752;
  double t1887;
  double t1955;
  double t2165;
  double t2364;
  double t3243;
  double t3277;
  double t3377;
  double t3389;
  double t3473;
  double t3528;
  double t3704;
  double t3720;
  double t3972;
  double t3980;
  double t4033;
  double t4236;
  double t4253;
  double t4279;
  double t5640;
  double t5682;
  double t1788;
  double t2228;
  double t2270;
  double t4807;
  double t4819;
  double t4854;
  double t5120;
  double t5212;
  double t5228;
  double t5262;
  double t5291;
  double t5335;
  double t5403;
  double t5441;
  double t5446;
  double t5448;
  double t4290;
  double t4544;
  double t4584;
  double t5562;
  double t5609;
  double t5683;
  double t5687;
  double t5711;
  double t5740;
  double t5766;
  double t5767;
  double t3293;
  double t3502;
  double t3506;
  double t4866;
  double t4915;
  double t4922;
  double t4620;
  double t4651;
  double t4697;
  double t3755;
  double t4034;
  double t4166;
  double t4946;
  double t4949;
  double t5084;
  t280 = Cos(var1[3]);
  t941 = Cos(var1[5]);
  t1383 = Sin(var1[3]);
  t1002 = Sin(var1[4]);
  t1385 = Sin(var1[5]);
  t821 = Cos(var1[13]);
  t286 = Cos(var1[4]);
  t305 = Sin(var1[13]);
  t879 = Cos(var1[12]);
  t1108 = t280*t941*t1002;
  t1456 = t1383*t1385;
  t1479 = t1108 + t1456;
  t1499 = t879*t1479;
  t1635 = Sin(var1[12]);
  t1643 = -1.*t941*t1383;
  t1668 = t280*t1002*t1385;
  t1672 = t1643 + t1668;
  t1691 = -1.*t1635*t1672;
  t1726 = t1499 + t1691;
  t259 = Sin(var1[14]);
  t1832 = Cos(var1[14]);
  t2438 = t941*t1383*t1002;
  t2615 = -1.*t280*t1385;
  t2758 = t2438 + t2615;
  t2814 = t879*t2758;
  t3111 = t280*t941;
  t3131 = t1383*t1002*t1385;
  t3138 = t3111 + t3131;
  t3153 = -1.*t1635*t3138;
  t3157 = t2814 + t3153;
  t3553 = t879*t286*t941;
  t3558 = -1.*t286*t1635*t1385;
  t3692 = t3553 + t3558;
  t459 = t280*t286*t305;
  t1738 = t821*t1726;
  t1752 = t459 + t1738;
  t1887 = t821*t280*t286;
  t1955 = -1.*t305*t1726;
  t2165 = t1887 + t1955;
  t2364 = t286*t305*t1383;
  t3243 = t821*t3157;
  t3277 = t2364 + t3243;
  t3377 = t821*t286*t1383;
  t3389 = -1.*t305*t3157;
  t3473 = t3377 + t3389;
  t3528 = -1.*t305*t1002;
  t3704 = t821*t3692;
  t3720 = t3528 + t3704;
  t3972 = -1.*t821*t1002;
  t3980 = -1.*t305*t3692;
  t4033 = t3972 + t3980;
  t4236 = t1635*t1479;
  t4253 = t879*t1672;
  t4279 = t4236 + t4253;
  t5640 = -1.*t1832;
  t5682 = 1. + t5640;
  t1788 = -1.*t259*t1752;
  t2228 = t1832*t2165;
  t2270 = t1788 + t2228;
  t4807 = t1832*t1752;
  t4819 = t259*t2165;
  t4854 = t4807 + t4819;
  t5120 = -1.*t821;
  t5212 = 1. + t5120;
  t5228 = -0.183*t5212;
  t5262 = 0. + t5228;
  t5291 = 0.047*t1635;
  t5335 = 0. + t5291;
  t5403 = -1.*t879;
  t5441 = 1. + t5403;
  t5446 = -0.047*t5441;
  t5448 = 0. + t5446;
  t4290 = t1635*t2758;
  t4544 = t879*t3138;
  t4584 = t4290 + t4544;
  t5562 = -0.183*t305;
  t5609 = 0. + t5562;
  t5683 = -0.15*t5682;
  t5687 = -0.183*t259;
  t5711 = 0. + t5683 + t5687;
  t5740 = -0.183*t5682;
  t5766 = 0.15*t259;
  t5767 = 0. + t5740 + t5766;
  t3293 = -1.*t259*t3277;
  t3502 = t1832*t3473;
  t3506 = t3293 + t3502;
  t4866 = t1832*t3277;
  t4915 = t259*t3473;
  t4922 = t4866 + t4915;
  t4620 = t286*t941*t1635;
  t4651 = t879*t286*t1385;
  t4697 = t4620 + t4651;
  t3755 = -1.*t259*t3720;
  t4034 = t1832*t4033;
  t4166 = t3755 + t4034;
  t4946 = t1832*t3720;
  t4949 = t259*t4033;
  t5084 = t4946 + t4949;

  p_output1(0)=t2270;
  p_output1(1)=t3506;
  p_output1(2)=t4166;
  p_output1(3)=0.;
  p_output1(4)=t4279;
  p_output1(5)=t4584;
  p_output1(6)=t4697;
  p_output1(7)=0.;
  p_output1(8)=t4854;
  p_output1(9)=t4922;
  p_output1(10)=t5084;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.183*t2270 - 0.11079*t4279 - 0.15*t4854 + t280*t286*t5262 + t1479*t5335 + t1672*t5448 + t1726*t5609 + t1752*t5711 + t2165*t5767 + var1(0);
  p_output1(13)=0. - 0.183*t3506 - 0.11079*t4584 - 0.15*t4922 + t1383*t286*t5262 + t2758*t5335 + t3138*t5448 + t3157*t5609 + t3277*t5711 + t3473*t5767 + var1(1);
  p_output1(14)=0. - 0.183*t4166 - 0.11079*t4697 - 0.15*t5084 - 1.*t1002*t5262 + t1385*t286*t5448 + t3692*t5609 + t3720*t5711 + t4033*t5767 + t286*t5335*t941 + var1(2);
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



