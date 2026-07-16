/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:27:01 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RRfoot.h"

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
  double t2395;
  double t3955;
  double t4704;
  double t4271;
  double t4776;
  double t3186;
  double t4583;
  double t4783;
  double t4809;
  double t5416;
  double t5733;
  double t5756;
  double t5758;
  double t3025;
  double t5785;
  double t685;
  double t5862;
  double t5919;
  double t5924;
  double t5939;
  double t5971;
  double t5983;
  double t6046;
  double t6074;
  double t6088;
  double t6099;
  double t6152;
  double t6158;
  double t6163;
  double t1405;
  double t2064;
  double t2093;
  double t2169;
  double t3392;
  double t3721;
  double t5432;
  double t5601;
  double t5671;
  double t5681;
  double t6354;
  double t6463;
  double t6475;
  double t6552;
  double t6564;
  double t6569;
  double t5810;
  double t5829;
  double t6036;
  double t6049;
  double t6071;
  double t6670;
  double t6674;
  double t6718;
  double t6111;
  double t6112;
  double t6122;
  double t6786;
  double t6789;
  double t6799;
  double t6816;
  double t6892;
  double t6899;
  double t7338;
  double t7354;
  double t7355;
  double t7369;
  double t7371;
  double t7383;
  double t7420;
  double t7447;
  double t7456;
  t2395 = Cos(var1[3]);
  t3955 = Cos(var1[5]);
  t4704 = Sin(var1[3]);
  t4271 = Sin(var1[4]);
  t4776 = Sin(var1[5]);
  t3186 = Sin(var1[12]);
  t4583 = t2395*t3955*t4271;
  t4783 = t4704*t4776;
  t4809 = t4583 + t4783;
  t5416 = Cos(var1[12]);
  t5733 = -1.*t3955*t4704;
  t5756 = t2395*t4271*t4776;
  t5758 = t5733 + t5756;
  t3025 = Cos(var1[4]);
  t5785 = Sin(var1[13]);
  t685 = Cos(var1[13]);
  t5862 = t5416*t4809;
  t5919 = -1.*t3186*t5758;
  t5924 = t5862 + t5919;
  t5939 = Cos(var1[14]);
  t5971 = -1.*t5939;
  t5983 = 1. + t5971;
  t6046 = Sin(var1[14]);
  t6074 = t2395*t3025*t5785;
  t6088 = t685*t5924;
  t6099 = t6074 + t6088;
  t6152 = t685*t2395*t3025;
  t6158 = -1.*t5785*t5924;
  t6163 = t6152 + t6158;
  t1405 = -1.*t685;
  t2064 = 1. + t1405;
  t2093 = -0.183*t2064;
  t2169 = 0. + t2093;
  t3392 = 0.047*t3186;
  t3721 = 0. + t3392;
  t5432 = -1.*t5416;
  t5601 = 1. + t5432;
  t5671 = -0.047*t5601;
  t5681 = 0. + t5671;
  t6354 = t3955*t4704*t4271;
  t6463 = -1.*t2395*t4776;
  t6475 = t6354 + t6463;
  t6552 = t2395*t3955;
  t6564 = t4704*t4271*t4776;
  t6569 = t6552 + t6564;
  t5810 = -0.183*t5785;
  t5829 = 0. + t5810;
  t6036 = -0.3*t5983;
  t6049 = -0.183*t6046;
  t6071 = 0. + t6036 + t6049;
  t6670 = t5416*t6475;
  t6674 = -1.*t3186*t6569;
  t6718 = t6670 + t6674;
  t6111 = -0.183*t5983;
  t6112 = 0.3*t6046;
  t6122 = 0. + t6111 + t6112;
  t6786 = t3025*t5785*t4704;
  t6789 = t685*t6718;
  t6799 = t6786 + t6789;
  t6816 = t685*t3025*t4704;
  t6892 = -1.*t5785*t6718;
  t6899 = t6816 + t6892;
  t7338 = t5416*t3025*t3955;
  t7354 = -1.*t3025*t3186*t4776;
  t7355 = t7338 + t7354;
  t7369 = -1.*t5785*t4271;
  t7371 = t685*t7355;
  t7383 = t7369 + t7371;
  t7420 = -1.*t685*t4271;
  t7447 = -1.*t5785*t7355;
  t7456 = t7420 + t7447;

  p_output1(0)=0. + t2169*t2395*t3025 + t3721*t4809 + t5681*t5758 - 0.17458*(t3186*t4809 + t5416*t5758) + t5829*t5924 + t6071*t6099 + t6122*t6163 - 0.183*(-1.*t6046*t6099 + t5939*t6163) - 0.6*(t5939*t6099 + t6046*t6163) + var1(0);
  p_output1(1)=0. + t2169*t3025*t4704 + t3721*t6475 + t5681*t6569 - 0.17458*(t3186*t6475 + t5416*t6569) + t5829*t6718 + t6071*t6799 + t6122*t6899 - 0.183*(-1.*t6046*t6799 + t5939*t6899) - 0.6*(t5939*t6799 + t6046*t6899) + var1(1);
  p_output1(2)=0. + t3025*t3721*t3955 - 1.*t2169*t4271 - 0.17458*(t3025*t3186*t3955 + t3025*t4776*t5416) + t3025*t4776*t5681 + t5829*t7355 + t6071*t7383 + t6122*t7456 - 0.183*(-1.*t6046*t7383 + t5939*t7456) - 0.6*(t5939*t7383 + t6046*t7456) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_RRfoot(const Eigen::Matrix<double,18,1> &var1)
//void p_RRfoot(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



