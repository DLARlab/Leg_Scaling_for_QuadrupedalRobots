/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:51:40 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FL_calf_joint.h"

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
  double t1654;
  double t4626;
  double t6477;
  double t5887;
  double t6724;
  double t2465;
  double t6040;
  double t6733;
  double t6861;
  double t6899;
  double t6986;
  double t6995;
  double t7002;
  double t1701;
  double t7069;
  double t181;
  double t7131;
  double t7132;
  double t7144;
  double t7161;
  double t7173;
  double t7177;
  double t7217;
  double t7309;
  double t7348;
  double t7349;
  double t7420;
  double t7436;
  double t7443;
  double t253;
  double t503;
  double t566;
  double t1378;
  double t3596;
  double t3709;
  double t6905;
  double t6960;
  double t6961;
  double t6976;
  double t7642;
  double t7701;
  double t7833;
  double t7890;
  double t7892;
  double t7901;
  double t7093;
  double t7103;
  double t7189;
  double t7233;
  double t7300;
  double t7991;
  double t7999;
  double t8004;
  double t7413;
  double t7414;
  double t7417;
  double t8006;
  double t8013;
  double t8040;
  double t8064;
  double t8075;
  double t8078;
  double t8228;
  double t8230;
  double t8237;
  double t8258;
  double t8261;
  double t8269;
  double t8290;
  double t8293;
  double t8295;
  t1654 = Cos(var1[3]);
  t4626 = Cos(var1[5]);
  t6477 = Sin(var1[3]);
  t5887 = Sin(var1[4]);
  t6724 = Sin(var1[5]);
  t2465 = Sin(var1[9]);
  t6040 = t1654*t4626*t5887;
  t6733 = t6477*t6724;
  t6861 = t6040 + t6733;
  t6899 = Cos(var1[9]);
  t6986 = -1.*t4626*t6477;
  t6995 = t1654*t5887*t6724;
  t7002 = t6986 + t6995;
  t1701 = Cos(var1[4]);
  t7069 = Sin(var1[10]);
  t181 = Cos(var1[10]);
  t7131 = t6899*t6861;
  t7132 = -1.*t2465*t7002;
  t7144 = t7131 + t7132;
  t7161 = Cos(var1[11]);
  t7173 = -1.*t7161;
  t7177 = 1. + t7173;
  t7217 = Sin(var1[11]);
  t7309 = t1654*t1701*t7069;
  t7348 = t181*t7144;
  t7349 = t7309 + t7348;
  t7420 = t181*t1654*t1701;
  t7436 = -1.*t7069*t7144;
  t7443 = t7420 + t7436;
  t253 = -1.*t181;
  t503 = 1. + t253;
  t566 = 0.183*t503;
  t1378 = 0. + t566;
  t3596 = -0.047*t2465;
  t3709 = 0. + t3596;
  t6905 = -1.*t6899;
  t6960 = 1. + t6905;
  t6961 = 0.047*t6960;
  t6976 = 0. + t6961;
  t7642 = t4626*t6477*t5887;
  t7701 = -1.*t1654*t6724;
  t7833 = t7642 + t7701;
  t7890 = t1654*t4626;
  t7892 = t6477*t5887*t6724;
  t7901 = t7890 + t7892;
  t7093 = 0.183*t7069;
  t7103 = 0. + t7093;
  t7189 = -0.15*t7177;
  t7233 = 0.183*t7217;
  t7300 = 0. + t7189 + t7233;
  t7991 = t6899*t7833;
  t7999 = -1.*t2465*t7901;
  t8004 = t7991 + t7999;
  t7413 = 0.183*t7177;
  t7414 = 0.15*t7217;
  t7417 = 0. + t7413 + t7414;
  t8006 = t1701*t7069*t6477;
  t8013 = t181*t8004;
  t8040 = t8006 + t8013;
  t8064 = t181*t1701*t6477;
  t8075 = -1.*t7069*t8004;
  t8078 = t8064 + t8075;
  t8228 = t6899*t1701*t4626;
  t8230 = -1.*t1701*t2465*t6724;
  t8237 = t8228 + t8230;
  t8258 = -1.*t7069*t5887;
  t8261 = t181*t8237;
  t8269 = t8258 + t8261;
  t8290 = -1.*t181*t5887;
  t8293 = -1.*t7069*t8237;
  t8295 = t8290 + t8293;

  p_output1(0)=0. + t1378*t1654*t1701 + t3709*t6861 + t6976*t7002 + 0.13205*(t2465*t6861 + t6899*t7002) + t7103*t7144 + t7300*t7349 + t7417*t7443 + 0.183*(-1.*t7217*t7349 + t7161*t7443) - 0.15*(t7161*t7349 + t7217*t7443) + var1(0);
  p_output1(1)=0. + t1378*t1701*t6477 + t3709*t7833 + t6976*t7901 + 0.13205*(t2465*t7833 + t6899*t7901) + t7103*t8004 + t7300*t8040 + t7417*t8078 + 0.183*(-1.*t7217*t8040 + t7161*t8078) - 0.15*(t7161*t8040 + t7217*t8078) + var1(1);
  p_output1(2)=0. + t1701*t3709*t4626 - 1.*t1378*t5887 + 0.13205*(t1701*t2465*t4626 + t1701*t6724*t6899) + t1701*t6724*t6976 + t7103*t8237 + t7300*t8269 + t7417*t8295 + 0.183*(-1.*t7217*t8269 + t7161*t8295) - 0.15*(t7161*t8269 + t7217*t8295) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_FL_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_FL_calf_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



