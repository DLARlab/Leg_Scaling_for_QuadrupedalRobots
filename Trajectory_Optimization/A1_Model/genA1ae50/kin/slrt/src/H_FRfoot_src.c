/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:10:23 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FRfoot_src.h"

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
  double t388;
  double t848;
  double t1501;
  double t1440;
  double t1536;
  double t624;
  double t771;
  double t1493;
  double t1613;
  double t1761;
  double t1846;
  double t1847;
  double t1891;
  double t1978;
  double t2016;
  double t2132;
  double t2643;
  double t526;
  double t2872;
  double t371;
  double t4281;
  double t4350;
  double t4701;
  double t4762;
  double t4769;
  double t4840;
  double t4909;
  double t4946;
  double t4948;
  double t3643;
  double t5932;
  double t6330;
  double t6400;
  double t3114;
  double t3359;
  double t3423;
  double t690;
  double t2937;
  double t2949;
  double t5422;
  double t5665;
  double t5669;
  double t4038;
  double t5320;
  double t5355;
  double t6723;
  double t6733;
  double t6738;
  double t5857;
  double t6630;
  double t6639;
  double t6889;
  double t6944;
  double t6997;
  double t7565;
  double t7587;
  double t3002;
  double t3671;
  double t3713;
  double t7102;
  double t7105;
  double t7107;
  double t7201;
  double t7247;
  double t7293;
  double t7313;
  double t7334;
  double t7336;
  double t7347;
  double t7379;
  double t7403;
  double t7436;
  double t7004;
  double t7028;
  double t7037;
  double t7468;
  double t7509;
  double t7635;
  double t7643;
  double t7672;
  double t7713;
  double t7817;
  double t7819;
  double t5361;
  double t5770;
  double t5821;
  double t7126;
  double t7127;
  double t7155;
  double t7054;
  double t7073;
  double t7097;
  double t6719;
  double t6753;
  double t6871;
  double t7170;
  double t7179;
  double t7188;
  t388 = Cos(var1[3]);
  t848 = Cos(var1[5]);
  t1501 = Sin(var1[3]);
  t1440 = Sin(var1[4]);
  t1536 = Sin(var1[5]);
  t624 = Cos(var1[7]);
  t771 = Cos(var1[6]);
  t1493 = t388*t848*t1440;
  t1613 = t1501*t1536;
  t1761 = t1493 + t1613;
  t1846 = t771*t1761;
  t1847 = -1.*t848*t1501;
  t1891 = t388*t1440*t1536;
  t1978 = t1847 + t1891;
  t2016 = Sin(var1[6]);
  t2132 = -1.*t1978*t2016;
  t2643 = t1846 + t2132;
  t526 = Cos(var1[4]);
  t2872 = Sin(var1[7]);
  t371 = Cos(var1[8]);
  t4281 = t848*t1501*t1440;
  t4350 = -1.*t388*t1536;
  t4701 = t4281 + t4350;
  t4762 = t771*t4701;
  t4769 = t388*t848;
  t4840 = t1501*t1440*t1536;
  t4909 = t4769 + t4840;
  t4946 = -1.*t4909*t2016;
  t4948 = t4762 + t4946;
  t3643 = Sin(var1[8]);
  t5932 = t526*t848*t771;
  t6330 = -1.*t526*t1536*t2016;
  t6400 = t5932 + t6330;
  t3114 = t624*t2643;
  t3359 = t388*t526*t2872;
  t3423 = t3114 + t3359;
  t690 = t388*t526*t624;
  t2937 = -1.*t2643*t2872;
  t2949 = t690 + t2937;
  t5422 = t624*t4948;
  t5665 = t526*t1501*t2872;
  t5669 = t5422 + t5665;
  t4038 = t526*t624*t1501;
  t5320 = -1.*t4948*t2872;
  t5355 = t4038 + t5320;
  t6723 = t624*t6400;
  t6733 = -1.*t1440*t2872;
  t6738 = t6723 + t6733;
  t5857 = -1.*t624*t1440;
  t6630 = -1.*t6400*t2872;
  t6639 = t5857 + t6630;
  t6889 = t771*t1978;
  t6944 = t1761*t2016;
  t6997 = t6889 + t6944;
  t7565 = -1.*t371;
  t7587 = 1. + t7565;
  t3002 = t371*t2949;
  t3671 = -1.*t3423*t3643;
  t3713 = t3002 + t3671;
  t7102 = t371*t3423;
  t7105 = t2949*t3643;
  t7107 = t7102 + t7105;
  t7201 = -1.*t624;
  t7247 = 1. + t7201;
  t7293 = 0.183*t7247;
  t7313 = 0. + t7293;
  t7334 = -1.*t771;
  t7336 = 1. + t7334;
  t7347 = -0.047*t7336;
  t7379 = 0. + t7347;
  t7403 = 0.047*t2016;
  t7436 = 0. + t7403;
  t7004 = t771*t4909;
  t7028 = t4701*t2016;
  t7037 = t7004 + t7028;
  t7468 = 0.183*t2872;
  t7509 = 0. + t7468;
  t7635 = 0.183*t7587;
  t7643 = 0.1*t3643;
  t7672 = 0. + t7635 + t7643;
  t7713 = -0.1*t7587;
  t7817 = 0.183*t3643;
  t7819 = 0. + t7713 + t7817;
  t5361 = t371*t5355;
  t5770 = -1.*t5669*t3643;
  t5821 = t5361 + t5770;
  t7126 = t371*t5669;
  t7127 = t5355*t3643;
  t7155 = t7126 + t7127;
  t7054 = t526*t771*t1536;
  t7073 = t526*t848*t2016;
  t7097 = t7054 + t7073;
  t6719 = t371*t6639;
  t6753 = -1.*t6738*t3643;
  t6871 = t6719 + t6753;
  t7170 = t371*t6738;
  t7179 = t6639*t3643;
  t7188 = t7170 + t7179;
  p_output1[0]=t3713;
  p_output1[1]=t5821;
  p_output1[2]=t6871;
  p_output1[3]=0.;
  p_output1[4]=t6997;
  p_output1[5]=t7037;
  p_output1[6]=t7097;
  p_output1[7]=0.;
  p_output1[8]=t7107;
  p_output1[9]=t7155;
  p_output1[10]=t7188;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.183*t3713 - 0.13205*t6997 - 0.2*t7107 + t388*t526*t7313 + t1978*t7379 + t1761*t7436 + t2643*t7509 + t2949*t7672 + t3423*t7819 + var1[0];
  p_output1[13]=0. + 0.183*t5821 - 0.13205*t7037 - 0.2*t7155 + t1501*t526*t7313 + t4909*t7379 + t4701*t7436 + t4948*t7509 + t5355*t7672 + t5669*t7819 + var1[1];
  p_output1[14]=0. + 0.183*t6871 - 0.13205*t7097 - 0.2*t7188 - 1.*t1440*t7313 + t1536*t526*t7379 + t6400*t7509 + t6639*t7672 + t6738*t7819 + t526*t7436*t848 + var1[2];
  p_output1[15]=1.;
}



void H_FRfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
