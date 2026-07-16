/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:51:56 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RL_calf_joint.h"

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
  double t570;
  double t1210;
  double t1458;
  double t1374;
  double t1763;
  double t894;
  double t587;
  double t753;
  double t1099;
  double t1385;
  double t1805;
  double t2017;
  double t2030;
  double t2050;
  double t2069;
  double t2173;
  double t2180;
  double t2181;
  double t2189;
  double t462;
  double t2510;
  double t2769;
  double t2774;
  double t2808;
  double t2820;
  double t2844;
  double t2845;
  double t2851;
  double t2856;
  double t2858;
  double t2934;
  double t2981;
  double t2998;
  double t840;
  double t2197;
  double t2398;
  double t2549;
  double t2630;
  double t2665;
  double t2760;
  double t2869;
  double t2880;
  double t2884;
  double t2891;
  double t2901;
  double t2930;
  double t3009;
  double t3016;
  double t3026;
  double t3027;
  double t3030;
  double t3063;
  double t3065;
  double t3102;
  double t3490;
  double t3492;
  double t2447;
  double t2686;
  double t2756;
  double t3172;
  double t3174;
  double t3175;
  double t3261;
  double t3268;
  double t3271;
  double t3275;
  double t3291;
  double t3307;
  double t3367;
  double t3374;
  double t3409;
  double t3418;
  double t3103;
  double t3107;
  double t3122;
  double t3465;
  double t3470;
  double t3494;
  double t3497;
  double t3528;
  double t3571;
  double t3572;
  double t3576;
  double t2883;
  double t2907;
  double t2913;
  double t3177;
  double t3187;
  double t3195;
  double t3132;
  double t3133;
  double t3136;
  double t3019;
  double t3035;
  double t3053;
  double t3196;
  double t3214;
  double t3227;
  t570 = Cos(var1[3]);
  t1210 = Cos(var1[5]);
  t1458 = Sin(var1[3]);
  t1374 = Sin(var1[4]);
  t1763 = Sin(var1[5]);
  t894 = Cos(var1[16]);
  t587 = Cos(var1[4]);
  t753 = Sin(var1[16]);
  t1099 = Cos(var1[15]);
  t1385 = t570*t1210*t1374;
  t1805 = t1458*t1763;
  t2017 = t1385 + t1805;
  t2030 = t1099*t2017;
  t2050 = Sin(var1[15]);
  t2069 = -1.*t1210*t1458;
  t2173 = t570*t1374*t1763;
  t2180 = t2069 + t2173;
  t2181 = -1.*t2050*t2180;
  t2189 = t2030 + t2181;
  t462 = Sin(var1[17]);
  t2510 = Cos(var1[17]);
  t2769 = t1210*t1458*t1374;
  t2774 = -1.*t570*t1763;
  t2808 = t2769 + t2774;
  t2820 = t1099*t2808;
  t2844 = t570*t1210;
  t2845 = t1458*t1374*t1763;
  t2851 = t2844 + t2845;
  t2856 = -1.*t2050*t2851;
  t2858 = t2820 + t2856;
  t2934 = t1099*t587*t1210;
  t2981 = -1.*t587*t2050*t1763;
  t2998 = t2934 + t2981;
  t840 = t570*t587*t753;
  t2197 = t894*t2189;
  t2398 = t840 + t2197;
  t2549 = t894*t570*t587;
  t2630 = -1.*t753*t2189;
  t2665 = t2549 + t2630;
  t2760 = t587*t753*t1458;
  t2869 = t894*t2858;
  t2880 = t2760 + t2869;
  t2884 = t894*t587*t1458;
  t2891 = -1.*t753*t2858;
  t2901 = t2884 + t2891;
  t2930 = -1.*t753*t1374;
  t3009 = t894*t2998;
  t3016 = t2930 + t3009;
  t3026 = -1.*t894*t1374;
  t3027 = -1.*t753*t2998;
  t3030 = t3026 + t3027;
  t3063 = t2050*t2017;
  t3065 = t1099*t2180;
  t3102 = t3063 + t3065;
  t3490 = -1.*t2510;
  t3492 = 1. + t3490;
  t2447 = -1.*t462*t2398;
  t2686 = t2510*t2665;
  t2756 = t2447 + t2686;
  t3172 = t2510*t2398;
  t3174 = t462*t2665;
  t3175 = t3172 + t3174;
  t3261 = -1.*t894;
  t3268 = 1. + t3261;
  t3271 = -0.183*t3268;
  t3275 = 0. + t3271;
  t3291 = -0.047*t2050;
  t3307 = 0. + t3291;
  t3367 = -1.*t1099;
  t3374 = 1. + t3367;
  t3409 = 0.047*t3374;
  t3418 = 0. + t3409;
  t3103 = t2050*t2808;
  t3107 = t1099*t2851;
  t3122 = t3103 + t3107;
  t3465 = -0.183*t753;
  t3470 = 0. + t3465;
  t3494 = -0.15*t3492;
  t3497 = -0.183*t462;
  t3528 = 0. + t3494 + t3497;
  t3571 = -0.183*t3492;
  t3572 = 0.15*t462;
  t3576 = 0. + t3571 + t3572;
  t2883 = -1.*t462*t2880;
  t2907 = t2510*t2901;
  t2913 = t2883 + t2907;
  t3177 = t2510*t2880;
  t3187 = t462*t2901;
  t3195 = t3177 + t3187;
  t3132 = t587*t1210*t2050;
  t3133 = t1099*t587*t1763;
  t3136 = t3132 + t3133;
  t3019 = -1.*t462*t3016;
  t3035 = t2510*t3030;
  t3053 = t3019 + t3035;
  t3196 = t2510*t3016;
  t3214 = t462*t3030;
  t3227 = t3196 + t3214;

  p_output1(0)=t2756;
  p_output1(1)=t2913;
  p_output1(2)=t3053;
  p_output1(3)=0.;
  p_output1(4)=t3102;
  p_output1(5)=t3122;
  p_output1(6)=t3136;
  p_output1(7)=0.;
  p_output1(8)=t3175;
  p_output1(9)=t3195;
  p_output1(10)=t3227;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.183*t2756 + 0.13205*t3102 - 0.15*t3175 + t2017*t3307 + t2180*t3418 + t2189*t3470 + t2398*t3528 + t2665*t3576 + t3275*t570*t587 + var1(0);
  p_output1(13)=0. - 0.183*t2913 + 0.13205*t3122 - 0.15*t3195 + t2808*t3307 + t2851*t3418 + t2858*t3470 + t2880*t3528 + t2901*t3576 + t1458*t3275*t587 + var1(1);
  p_output1(14)=0. - 0.183*t3053 + 0.13205*t3136 - 0.15*t3227 - 1.*t1374*t3275 + t2998*t3470 + t3016*t3528 + t3030*t3576 + t1210*t3307*t587 + t1763*t3418*t587 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_RL_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void H_RL_calf_joint(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



