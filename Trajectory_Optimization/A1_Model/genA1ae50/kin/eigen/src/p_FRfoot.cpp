/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:11:16 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FRfoot.h"

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
  double t167;
  double t2634;
  double t2891;
  double t2711;
  double t2899;
  double t1382;
  double t2748;
  double t2974;
  double t3601;
  double t4307;
  double t4308;
  double t4378;
  double t5173;
  double t430;
  double t805;
  double t6623;
  double t6872;
  double t6950;
  double t7117;
  double t7336;
  double t7338;
  double t7353;
  double t7421;
  double t7276;
  double t7280;
  double t7291;
  double t7596;
  double t7610;
  double t7690;
  double t968;
  double t1217;
  double t1218;
  double t1283;
  double t1930;
  double t2015;
  double t2217;
  double t2617;
  double t5607;
  double t5784;
  double t7827;
  double t7840;
  double t7848;
  double t7880;
  double t7909;
  double t7915;
  double t7168;
  double t7252;
  double t7928;
  double t7935;
  double t7936;
  double t7358;
  double t7524;
  double t7544;
  double t7698;
  double t7708;
  double t7729;
  double t7962;
  double t7979;
  double t7984;
  double t8002;
  double t8004;
  double t8006;
  double t8104;
  double t8105;
  double t8109;
  double t8112;
  double t8114;
  double t8124;
  double t8139;
  double t8144;
  double t8149;
  t167 = Cos(var1[3]);
  t2634 = Cos(var1[5]);
  t2891 = Sin(var1[4]);
  t2711 = Sin(var1[3]);
  t2899 = Sin(var1[5]);
  t1382 = Cos(var1[6]);
  t2748 = -1.*t2634*t2711;
  t2974 = t167*t2891*t2899;
  t3601 = t2748 + t2974;
  t4307 = t167*t2634*t2891;
  t4308 = t2711*t2899;
  t4378 = t4307 + t4308;
  t5173 = Sin(var1[6]);
  t430 = Cos(var1[4]);
  t805 = Cos(var1[7]);
  t6623 = t1382*t4378;
  t6872 = -1.*t3601*t5173;
  t6950 = t6623 + t6872;
  t7117 = Sin(var1[7]);
  t7336 = Cos(var1[8]);
  t7338 = -1.*t7336;
  t7353 = 1. + t7338;
  t7421 = Sin(var1[8]);
  t7276 = t167*t430*t805;
  t7280 = -1.*t6950*t7117;
  t7291 = t7276 + t7280;
  t7596 = t805*t6950;
  t7610 = t167*t430*t7117;
  t7690 = t7596 + t7610;
  t968 = -1.*t805;
  t1217 = 1. + t968;
  t1218 = 0.183*t1217;
  t1283 = 0. + t1218;
  t1930 = -1.*t1382;
  t2015 = 1. + t1930;
  t2217 = -0.047*t2015;
  t2617 = 0. + t2217;
  t5607 = 0.047*t5173;
  t5784 = 0. + t5607;
  t7827 = t167*t2634;
  t7840 = t2711*t2891*t2899;
  t7848 = t7827 + t7840;
  t7880 = t2634*t2711*t2891;
  t7909 = -1.*t167*t2899;
  t7915 = t7880 + t7909;
  t7168 = 0.183*t7117;
  t7252 = 0. + t7168;
  t7928 = t1382*t7915;
  t7935 = -1.*t7848*t5173;
  t7936 = t7928 + t7935;
  t7358 = 0.183*t7353;
  t7524 = 0.1*t7421;
  t7544 = 0. + t7358 + t7524;
  t7698 = -0.1*t7353;
  t7708 = 0.183*t7421;
  t7729 = 0. + t7698 + t7708;
  t7962 = t430*t805*t2711;
  t7979 = -1.*t7936*t7117;
  t7984 = t7962 + t7979;
  t8002 = t805*t7936;
  t8004 = t430*t2711*t7117;
  t8006 = t8002 + t8004;
  t8104 = t430*t2634*t1382;
  t8105 = -1.*t430*t2899*t5173;
  t8109 = t8104 + t8105;
  t8112 = -1.*t805*t2891;
  t8114 = -1.*t8109*t7117;
  t8124 = t8112 + t8114;
  t8139 = t805*t8109;
  t8144 = -1.*t2891*t7117;
  t8149 = t8139 + t8144;

  p_output1(0)=0. + t2617*t3601 + t1283*t167*t430 - 0.13205*(t1382*t3601 + t4378*t5173) + t4378*t5784 + t6950*t7252 + t7291*t7544 - 0.2*(t7291*t7421 + t7336*t7690) + 0.183*(t7291*t7336 - 1.*t7421*t7690) + t7690*t7729 + var1(0);
  p_output1(1)=0. + t1283*t2711*t430 + t2617*t7848 + t5784*t7915 - 0.13205*(t1382*t7848 + t5173*t7915) + t7252*t7936 + t7544*t7984 + t7729*t8006 - 0.2*(t7421*t7984 + t7336*t8006) + 0.183*(t7336*t7984 - 1.*t7421*t8006) + var1(1);
  p_output1(2)=0. - 1.*t1283*t2891 + t2617*t2899*t430 - 0.13205*(t1382*t2899*t430 + t2634*t430*t5173) + t2634*t430*t5784 + t7252*t8109 + t7544*t8124 + t7729*t8149 - 0.2*(t7421*t8124 + t7336*t8149) + 0.183*(t7336*t8124 - 1.*t7421*t8149) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_FRfoot(const Eigen::Matrix<double,18,1> &var1)
//void p_FRfoot(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



