/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:11:20 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FLfoot.h"

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
  double t344;
  double t1610;
  double t2052;
  double t1763;
  double t2632;
  double t1388;
  double t433;
  double t985;
  double t1462;
  double t1999;
  double t2760;
  double t2840;
  double t2917;
  double t2957;
  double t2982;
  double t2998;
  double t3266;
  double t3291;
  double t3304;
  double t109;
  double t3584;
  double t4309;
  double t4366;
  double t4510;
  double t4576;
  double t4644;
  double t5069;
  double t5128;
  double t5238;
  double t5331;
  double t5700;
  double t5780;
  double t5847;
  double t1170;
  double t3352;
  double t3530;
  double t3600;
  double t3658;
  double t3996;
  double t4270;
  double t5355;
  double t5397;
  double t5447;
  double t5449;
  double t5472;
  double t5565;
  double t5958;
  double t6143;
  double t6253;
  double t6362;
  double t6388;
  double t6598;
  double t6625;
  double t6645;
  double t7440;
  double t7457;
  double t3577;
  double t4088;
  double t4236;
  double t6708;
  double t6713;
  double t6715;
  double t6970;
  double t7039;
  double t7138;
  double t7147;
  double t7172;
  double t7212;
  double t7282;
  double t7323;
  double t7333;
  double t7337;
  double t6652;
  double t6653;
  double t6655;
  double t7395;
  double t7396;
  double t7467;
  double t7477;
  double t7488;
  double t7491;
  double t7492;
  double t7493;
  double t5445;
  double t5507;
  double t5560;
  double t6723;
  double t6756;
  double t6818;
  double t6659;
  double t6702;
  double t6707;
  double t6179;
  double t6591;
  double t6593;
  double t6855;
  double t6889;
  double t6919;
  t344 = Cos(var1[3]);
  t1610 = Cos(var1[5]);
  t2052 = Sin(var1[3]);
  t1763 = Sin(var1[4]);
  t2632 = Sin(var1[5]);
  t1388 = Cos(var1[10]);
  t433 = Cos(var1[4]);
  t985 = Sin(var1[10]);
  t1462 = Cos(var1[9]);
  t1999 = t344*t1610*t1763;
  t2760 = t2052*t2632;
  t2840 = t1999 + t2760;
  t2917 = t1462*t2840;
  t2957 = Sin(var1[9]);
  t2982 = -1.*t1610*t2052;
  t2998 = t344*t1763*t2632;
  t3266 = t2982 + t2998;
  t3291 = -1.*t2957*t3266;
  t3304 = t2917 + t3291;
  t109 = Sin(var1[11]);
  t3584 = Cos(var1[11]);
  t4309 = t1610*t2052*t1763;
  t4366 = -1.*t344*t2632;
  t4510 = t4309 + t4366;
  t4576 = t1462*t4510;
  t4644 = t344*t1610;
  t5069 = t2052*t1763*t2632;
  t5128 = t4644 + t5069;
  t5238 = -1.*t2957*t5128;
  t5331 = t4576 + t5238;
  t5700 = t1462*t433*t1610;
  t5780 = -1.*t433*t2957*t2632;
  t5847 = t5700 + t5780;
  t1170 = t344*t433*t985;
  t3352 = t1388*t3304;
  t3530 = t1170 + t3352;
  t3600 = t1388*t344*t433;
  t3658 = -1.*t985*t3304;
  t3996 = t3600 + t3658;
  t4270 = t433*t985*t2052;
  t5355 = t1388*t5331;
  t5397 = t4270 + t5355;
  t5447 = t1388*t433*t2052;
  t5449 = -1.*t985*t5331;
  t5472 = t5447 + t5449;
  t5565 = -1.*t985*t1763;
  t5958 = t1388*t5847;
  t6143 = t5565 + t5958;
  t6253 = -1.*t1388*t1763;
  t6362 = -1.*t985*t5847;
  t6388 = t6253 + t6362;
  t6598 = t2957*t2840;
  t6625 = t1462*t3266;
  t6645 = t6598 + t6625;
  t7440 = -1.*t3584;
  t7457 = 1. + t7440;
  t3577 = -1.*t109*t3530;
  t4088 = t3584*t3996;
  t4236 = t3577 + t4088;
  t6708 = t3584*t3530;
  t6713 = t109*t3996;
  t6715 = t6708 + t6713;
  t6970 = -1.*t1388;
  t7039 = 1. + t6970;
  t7138 = 0.183*t7039;
  t7147 = 0. + t7138;
  t7172 = -0.047*t2957;
  t7212 = 0. + t7172;
  t7282 = -1.*t1462;
  t7323 = 1. + t7282;
  t7333 = 0.047*t7323;
  t7337 = 0. + t7333;
  t6652 = t2957*t4510;
  t6653 = t1462*t5128;
  t6655 = t6652 + t6653;
  t7395 = 0.183*t985;
  t7396 = 0. + t7395;
  t7467 = -0.1*t7457;
  t7477 = 0.183*t109;
  t7488 = 0. + t7467 + t7477;
  t7491 = 0.183*t7457;
  t7492 = 0.1*t109;
  t7493 = 0. + t7491 + t7492;
  t5445 = -1.*t109*t5397;
  t5507 = t3584*t5472;
  t5560 = t5445 + t5507;
  t6723 = t3584*t5397;
  t6756 = t109*t5472;
  t6818 = t6723 + t6756;
  t6659 = t433*t1610*t2957;
  t6702 = t1462*t433*t2632;
  t6707 = t6659 + t6702;
  t6179 = -1.*t109*t6143;
  t6591 = t3584*t6388;
  t6593 = t6179 + t6591;
  t6855 = t3584*t6143;
  t6889 = t109*t6388;
  t6919 = t6855 + t6889;

  p_output1(0)=t4236;
  p_output1(1)=t5560;
  p_output1(2)=t6593;
  p_output1(3)=0.;
  p_output1(4)=t6645;
  p_output1(5)=t6655;
  p_output1(6)=t6707;
  p_output1(7)=0.;
  p_output1(8)=t6715;
  p_output1(9)=t6818;
  p_output1(10)=t6919;
  p_output1(11)=0.;
  p_output1(12)=0. + 0.183*t4236 + 0.13205*t6645 - 0.2*t6715 + t344*t433*t7147 + t2840*t7212 + t3266*t7337 + t3304*t7396 + t3530*t7488 + t3996*t7493 + var1(0);
  p_output1(13)=0. + 0.183*t5560 + 0.13205*t6655 - 0.2*t6818 + t2052*t433*t7147 + t4510*t7212 + t5128*t7337 + t5331*t7396 + t5397*t7488 + t5472*t7493 + var1(1);
  p_output1(14)=0. + 0.183*t6593 + 0.13205*t6707 - 0.2*t6919 - 1.*t1763*t7147 + t1610*t433*t7212 + t2632*t433*t7337 + t5847*t7396 + t6143*t7488 + t6388*t7493 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_FLfoot(const Eigen::Matrix<double,18,1> &var1)
//void H_FLfoot(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



