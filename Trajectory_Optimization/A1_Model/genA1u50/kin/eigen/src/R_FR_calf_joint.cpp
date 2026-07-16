/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:13:37 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_FR_calf_joint.h"

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
static void output1(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  double t1239;
  double t2655;
  double t3129;
  double t2656;
  double t3139;
  double t1568;
  double t2643;
  double t2682;
  double t3253;
  double t3309;
  double t3851;
  double t4304;
  double t4350;
  double t4376;
  double t4455;
  double t5044;
  double t5124;
  double t1281;
  double t5238;
  double t1129;
  double t8214;
  double t8216;
  double t8217;
  double t8218;
  double t8219;
  double t8220;
  double t8221;
  double t8222;
  double t8225;
  double t6310;
  double t8276;
  double t8278;
  double t8279;
  double t5922;
  double t5927;
  double t5935;
  double t2444;
  double t5582;
  double t5914;
  double t8246;
  double t8248;
  double t8249;
  double t8209;
  double t8240;
  double t8242;
  double t8283;
  double t8284;
  double t8285;
  double t8271;
  double t8280;
  double t8281;
  t1239 = Cos(var1[3]);
  t2655 = Cos(var1[5]);
  t3129 = Sin(var1[3]);
  t2656 = Sin(var1[4]);
  t3139 = Sin(var1[5]);
  t1568 = Cos(var1[7]);
  t2643 = Cos(var1[6]);
  t2682 = t1239*t2655*t2656;
  t3253 = t3129*t3139;
  t3309 = t2682 + t3253;
  t3851 = t2643*t3309;
  t4304 = -1.*t2655*t3129;
  t4350 = t1239*t2656*t3139;
  t4376 = t4304 + t4350;
  t4455 = Sin(var1[6]);
  t5044 = -1.*t4376*t4455;
  t5124 = t3851 + t5044;
  t1281 = Cos(var1[4]);
  t5238 = Sin(var1[7]);
  t1129 = Cos(var1[8]);
  t8214 = t2655*t3129*t2656;
  t8216 = -1.*t1239*t3139;
  t8217 = t8214 + t8216;
  t8218 = t2643*t8217;
  t8219 = t1239*t2655;
  t8220 = t3129*t2656*t3139;
  t8221 = t8219 + t8220;
  t8222 = -1.*t8221*t4455;
  t8225 = t8218 + t8222;
  t6310 = Sin(var1[8]);
  t8276 = t1281*t2655*t2643;
  t8278 = -1.*t1281*t3139*t4455;
  t8279 = t8276 + t8278;
  t5922 = t1568*t5124;
  t5927 = t1239*t1281*t5238;
  t5935 = t5922 + t5927;
  t2444 = t1239*t1281*t1568;
  t5582 = -1.*t5124*t5238;
  t5914 = t2444 + t5582;
  t8246 = t1568*t8225;
  t8248 = t1281*t3129*t5238;
  t8249 = t8246 + t8248;
  t8209 = t1281*t1568*t3129;
  t8240 = -1.*t8225*t5238;
  t8242 = t8209 + t8240;
  t8283 = t1568*t8279;
  t8284 = -1.*t2656*t5238;
  t8285 = t8283 + t8284;
  t8271 = -1.*t1568*t2656;
  t8280 = -1.*t8279*t5238;
  t8281 = t8271 + t8280;

  p_output1(0)=t1129*t5914 - 1.*t5935*t6310;
  p_output1(1)=t1129*t8242 - 1.*t6310*t8249;
  p_output1(2)=t1129*t8281 - 1.*t6310*t8285;
  p_output1(3)=t2643*t4376 + t3309*t4455;
  p_output1(4)=t4455*t8217 + t2643*t8221;
  p_output1(5)=t1281*t2643*t3139 + t1281*t2655*t4455;
  p_output1(6)=t1129*t5935 + t5914*t6310;
  p_output1(7)=t6310*t8242 + t1129*t8249;
  p_output1(8)=t6310*t8281 + t1129*t8285;
}


       
Eigen::Matrix<double,3,3> R_FR_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_FR_calf_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



