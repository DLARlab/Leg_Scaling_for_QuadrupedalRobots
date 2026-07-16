/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:19:14 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RLfoot.h"

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
  double t289;
  double t774;
  double t913;
  double t800;
  double t942;
  double t655;
  double t340;
  double t576;
  double t656;
  double t887;
  double t948;
  double t968;
  double t973;
  double t1000;
  double t1004;
  double t1005;
  double t1072;
  double t1096;
  double t1106;
  double t271;
  double t1646;
  double t2166;
  double t2236;
  double t2305;
  double t2340;
  double t2392;
  double t2413;
  double t2423;
  double t2474;
  double t2526;
  double t2911;
  double t2916;
  double t3034;
  double t649;
  double t1112;
  double t1136;
  double t1806;
  double t1824;
  double t1994;
  double t2129;
  double t2593;
  double t2595;
  double t2697;
  double t2721;
  double t2729;
  double t2910;
  double t3072;
  double t3196;
  double t3312;
  double t3384;
  double t3401;
  double t3665;
  double t3725;
  double t3805;
  double t5401;
  double t5455;
  double t1162;
  double t2028;
  double t2065;
  double t4476;
  double t4534;
  double t4582;
  double t4953;
  double t5057;
  double t5073;
  double t5129;
  double t5144;
  double t5186;
  double t5268;
  double t5274;
  double t5282;
  double t5308;
  double t3904;
  double t4013;
  double t4102;
  double t5351;
  double t5369;
  double t5472;
  double t5484;
  double t5535;
  double t5655;
  double t5686;
  double t5702;
  double t2675;
  double t2847;
  double t2897;
  double t4656;
  double t4687;
  double t4722;
  double t4142;
  double t4159;
  double t4334;
  double t3237;
  double t3457;
  double t3480;
  double t4842;
  double t4932;
  double t4951;
  t289 = Cos(var1[3]);
  t774 = Cos(var1[5]);
  t913 = Sin(var1[3]);
  t800 = Sin(var1[4]);
  t942 = Sin(var1[5]);
  t655 = Cos(var1[16]);
  t340 = Cos(var1[4]);
  t576 = Sin(var1[16]);
  t656 = Cos(var1[15]);
  t887 = t289*t774*t800;
  t948 = t913*t942;
  t968 = t887 + t948;
  t973 = t656*t968;
  t1000 = Sin(var1[15]);
  t1004 = -1.*t774*t913;
  t1005 = t289*t800*t942;
  t1072 = t1004 + t1005;
  t1096 = -1.*t1000*t1072;
  t1106 = t973 + t1096;
  t271 = Sin(var1[17]);
  t1646 = Cos(var1[17]);
  t2166 = t774*t913*t800;
  t2236 = -1.*t289*t942;
  t2305 = t2166 + t2236;
  t2340 = t656*t2305;
  t2392 = t289*t774;
  t2413 = t913*t800*t942;
  t2423 = t2392 + t2413;
  t2474 = -1.*t1000*t2423;
  t2526 = t2340 + t2474;
  t2911 = t656*t340*t774;
  t2916 = -1.*t340*t1000*t942;
  t3034 = t2911 + t2916;
  t649 = t289*t340*t576;
  t1112 = t655*t1106;
  t1136 = t649 + t1112;
  t1806 = t655*t289*t340;
  t1824 = -1.*t576*t1106;
  t1994 = t1806 + t1824;
  t2129 = t340*t576*t913;
  t2593 = t655*t2526;
  t2595 = t2129 + t2593;
  t2697 = t655*t340*t913;
  t2721 = -1.*t576*t2526;
  t2729 = t2697 + t2721;
  t2910 = -1.*t576*t800;
  t3072 = t655*t3034;
  t3196 = t2910 + t3072;
  t3312 = -1.*t655*t800;
  t3384 = -1.*t576*t3034;
  t3401 = t3312 + t3384;
  t3665 = t1000*t968;
  t3725 = t656*t1072;
  t3805 = t3665 + t3725;
  t5401 = -1.*t1646;
  t5455 = 1. + t5401;
  t1162 = -1.*t271*t1136;
  t2028 = t1646*t1994;
  t2065 = t1162 + t2028;
  t4476 = t1646*t1136;
  t4534 = t271*t1994;
  t4582 = t4476 + t4534;
  t4953 = -1.*t655;
  t5057 = 1. + t4953;
  t5073 = -0.183*t5057;
  t5129 = 0. + t5073;
  t5144 = -0.047*t1000;
  t5186 = 0. + t5144;
  t5268 = -1.*t656;
  t5274 = 1. + t5268;
  t5282 = 0.047*t5274;
  t5308 = 0. + t5282;
  t3904 = t1000*t2305;
  t4013 = t656*t2423;
  t4102 = t3904 + t4013;
  t5351 = -0.183*t576;
  t5369 = 0. + t5351;
  t5472 = -0.15*t5455;
  t5484 = -0.183*t271;
  t5535 = 0. + t5472 + t5484;
  t5655 = -0.183*t5455;
  t5686 = 0.15*t271;
  t5702 = 0. + t5655 + t5686;
  t2675 = -1.*t271*t2595;
  t2847 = t1646*t2729;
  t2897 = t2675 + t2847;
  t4656 = t1646*t2595;
  t4687 = t271*t2729;
  t4722 = t4656 + t4687;
  t4142 = t340*t774*t1000;
  t4159 = t656*t340*t942;
  t4334 = t4142 + t4159;
  t3237 = -1.*t271*t3196;
  t3457 = t1646*t3401;
  t3480 = t3237 + t3457;
  t4842 = t1646*t3196;
  t4932 = t271*t3401;
  t4951 = t4842 + t4932;

  p_output1(0)=t2065;
  p_output1(1)=t2897;
  p_output1(2)=t3480;
  p_output1(3)=0.;
  p_output1(4)=t3805;
  p_output1(5)=t4102;
  p_output1(6)=t4334;
  p_output1(7)=0.;
  p_output1(8)=t4582;
  p_output1(9)=t4722;
  p_output1(10)=t4951;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.183*t2065 + 0.11079*t3805 - 0.3*t4582 + t289*t340*t5129 + t1072*t5308 + t1106*t5369 + t1136*t5535 + t1994*t5702 + t5186*t968 + var1(0);
  p_output1(13)=0. - 0.183*t2897 + 0.11079*t4102 - 0.3*t4722 + t2305*t5186 + t2423*t5308 + t2526*t5369 + t2595*t5535 + t2729*t5702 + t340*t5129*t913 + var1(1);
  p_output1(14)=0. - 0.183*t3480 + 0.11079*t4334 - 0.3*t4951 + t3034*t5369 + t3196*t5535 + t3401*t5702 + t340*t5186*t774 - 1.*t5129*t800 + t340*t5308*t942 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_RLfoot(const Eigen::Matrix<double,18,1> &var1)
//void H_RLfoot(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



