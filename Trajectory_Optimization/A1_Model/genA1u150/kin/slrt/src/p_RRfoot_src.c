/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:26:08 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RRfoot_src.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE static __inline__        /* use standard inline */
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
static void output1(double *p_output1,const double *var1)
{
  double t1645;
  double t2802;
  double t3295;
  double t3021;
  double t3339;
  double t1864;
  double t3022;
  double t3436;
  double t3443;
  double t3783;
  double t4676;
  double t4871;
  double t4901;
  double t1695;
  double t5452;
  double t125;
  double t5473;
  double t5490;
  double t5611;
  double t5691;
  double t5695;
  double t5713;
  double t5773;
  double t6022;
  double t6025;
  double t6080;
  double t6143;
  double t6162;
  double t6224;
  double t819;
  double t1249;
  double t1253;
  double t1360;
  double t2278;
  double t2310;
  double t4120;
  double t4179;
  double t4500;
  double t4635;
  double t6499;
  double t6535;
  double t6578;
  double t6679;
  double t6736;
  double t6752;
  double t5457;
  double t5464;
  double t5754;
  double t5936;
  double t6011;
  double t6868;
  double t6872;
  double t6890;
  double t6117;
  double t6122;
  double t6123;
  double t6962;
  double t6964;
  double t6993;
  double t7006;
  double t7015;
  double t7020;
  double t7429;
  double t7501;
  double t7509;
  double t7560;
  double t7568;
  double t7619;
  double t7658;
  double t7674;
  double t7679;
  t1645 = Cos(var1[3]);
  t2802 = Cos(var1[5]);
  t3295 = Sin(var1[3]);
  t3021 = Sin(var1[4]);
  t3339 = Sin(var1[5]);
  t1864 = Sin(var1[12]);
  t3022 = t1645*t2802*t3021;
  t3436 = t3295*t3339;
  t3443 = t3022 + t3436;
  t3783 = Cos(var1[12]);
  t4676 = -1.*t2802*t3295;
  t4871 = t1645*t3021*t3339;
  t4901 = t4676 + t4871;
  t1695 = Cos(var1[4]);
  t5452 = Sin(var1[13]);
  t125 = Cos(var1[13]);
  t5473 = t3783*t3443;
  t5490 = -1.*t1864*t4901;
  t5611 = t5473 + t5490;
  t5691 = Cos(var1[14]);
  t5695 = -1.*t5691;
  t5713 = 1. + t5695;
  t5773 = Sin(var1[14]);
  t6022 = t1645*t1695*t5452;
  t6025 = t125*t5611;
  t6080 = t6022 + t6025;
  t6143 = t125*t1645*t1695;
  t6162 = -1.*t5452*t5611;
  t6224 = t6143 + t6162;
  t819 = -1.*t125;
  t1249 = 1. + t819;
  t1253 = -0.183*t1249;
  t1360 = 0. + t1253;
  t2278 = 0.047*t1864;
  t2310 = 0. + t2278;
  t4120 = -1.*t3783;
  t4179 = 1. + t4120;
  t4500 = -0.047*t4179;
  t4635 = 0. + t4500;
  t6499 = t2802*t3295*t3021;
  t6535 = -1.*t1645*t3339;
  t6578 = t6499 + t6535;
  t6679 = t1645*t2802;
  t6736 = t3295*t3021*t3339;
  t6752 = t6679 + t6736;
  t5457 = -0.183*t5452;
  t5464 = 0. + t5457;
  t5754 = -0.3*t5713;
  t5936 = -0.183*t5773;
  t6011 = 0. + t5754 + t5936;
  t6868 = t3783*t6578;
  t6872 = -1.*t1864*t6752;
  t6890 = t6868 + t6872;
  t6117 = -0.183*t5713;
  t6122 = 0.3*t5773;
  t6123 = 0. + t6117 + t6122;
  t6962 = t1695*t5452*t3295;
  t6964 = t125*t6890;
  t6993 = t6962 + t6964;
  t7006 = t125*t1695*t3295;
  t7015 = -1.*t5452*t6890;
  t7020 = t7006 + t7015;
  t7429 = t3783*t1695*t2802;
  t7501 = -1.*t1695*t1864*t3339;
  t7509 = t7429 + t7501;
  t7560 = -1.*t5452*t3021;
  t7568 = t125*t7509;
  t7619 = t7560 + t7568;
  t7658 = -1.*t125*t3021;
  t7674 = -1.*t5452*t7509;
  t7679 = t7658 + t7674;
  p_output1[0]=0. + t1360*t1645*t1695 + t2310*t3443 + t4635*t4901 - 0.17458*(t1864*t3443 + t3783*t4901) + t5464*t5611 + t6011*t6080 + t6123*t6224 - 0.183*(-1.*t5773*t6080 + t5691*t6224) - 0.6*(t5691*t6080 + t5773*t6224) + var1[0];
  p_output1[1]=0. + t1360*t1695*t3295 + t2310*t6578 + t4635*t6752 - 0.17458*(t1864*t6578 + t3783*t6752) + t5464*t6890 + t6011*t6993 + t6123*t7020 - 0.183*(-1.*t5773*t6993 + t5691*t7020) - 0.6*(t5691*t6993 + t5773*t7020) + var1[1];
  p_output1[2]=0. + t1695*t2310*t2802 - 1.*t1360*t3021 - 0.17458*(t1695*t1864*t2802 + t1695*t3339*t3783) + t1695*t3339*t4635 + t5464*t7509 + t6011*t7619 + t6123*t7679 - 0.183*(-1.*t5773*t7619 + t5691*t7679) - 0.6*(t5691*t7619 + t5773*t7679) + var1[2];
}



void p_RRfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
