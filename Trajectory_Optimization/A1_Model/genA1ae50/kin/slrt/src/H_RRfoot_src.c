/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:10:28 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RRfoot_src.h"

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
  double t964;
  double t1399;
  double t1833;
  double t1492;
  double t1885;
  double t1173;
  double t1078;
  double t1152;
  double t1359;
  double t1747;
  double t1974;
  double t1975;
  double t2037;
  double t2198;
  double t2257;
  double t2281;
  double t2294;
  double t2354;
  double t2402;
  double t309;
  double t2869;
  double t3470;
  double t3756;
  double t3757;
  double t3786;
  double t3801;
  double t3829;
  double t3842;
  double t3872;
  double t3885;
  double t4044;
  double t4137;
  double t4250;
  double t1163;
  double t2410;
  double t2575;
  double t2877;
  double t2921;
  double t3122;
  double t3461;
  double t3890;
  double t3894;
  double t3961;
  double t3980;
  double t4000;
  double t4042;
  double t4349;
  double t4382;
  double t4455;
  double t4458;
  double t4496;
  double t4747;
  double t4754;
  double t4816;
  double t5190;
  double t5208;
  double t2771;
  double t3183;
  double t3442;
  double t4905;
  double t4920;
  double t4925;
  double t4976;
  double t4990;
  double t5004;
  double t5089;
  double t5103;
  double t5115;
  double t5124;
  double t5126;
  double t5129;
  double t5130;
  double t4842;
  double t4845;
  double t4848;
  double t5158;
  double t5167;
  double t5212;
  double t5214;
  double t5217;
  double t5231;
  double t5258;
  double t5284;
  double t3899;
  double t4016;
  double t4039;
  double t4926;
  double t4929;
  double t4951;
  double t4875;
  double t4884;
  double t4903;
  double t4428;
  double t4527;
  double t4572;
  double t4960;
  double t4961;
  double t4967;
  t964 = Cos(var1[3]);
  t1399 = Cos(var1[5]);
  t1833 = Sin(var1[3]);
  t1492 = Sin(var1[4]);
  t1885 = Sin(var1[5]);
  t1173 = Cos(var1[13]);
  t1078 = Cos(var1[4]);
  t1152 = Sin(var1[13]);
  t1359 = Cos(var1[12]);
  t1747 = t964*t1399*t1492;
  t1974 = t1833*t1885;
  t1975 = t1747 + t1974;
  t2037 = t1359*t1975;
  t2198 = Sin(var1[12]);
  t2257 = -1.*t1399*t1833;
  t2281 = t964*t1492*t1885;
  t2294 = t2257 + t2281;
  t2354 = -1.*t2198*t2294;
  t2402 = t2037 + t2354;
  t309 = Sin(var1[14]);
  t2869 = Cos(var1[14]);
  t3470 = t1399*t1833*t1492;
  t3756 = -1.*t964*t1885;
  t3757 = t3470 + t3756;
  t3786 = t1359*t3757;
  t3801 = t964*t1399;
  t3829 = t1833*t1492*t1885;
  t3842 = t3801 + t3829;
  t3872 = -1.*t2198*t3842;
  t3885 = t3786 + t3872;
  t4044 = t1359*t1078*t1399;
  t4137 = -1.*t1078*t2198*t1885;
  t4250 = t4044 + t4137;
  t1163 = t964*t1078*t1152;
  t2410 = t1173*t2402;
  t2575 = t1163 + t2410;
  t2877 = t1173*t964*t1078;
  t2921 = -1.*t1152*t2402;
  t3122 = t2877 + t2921;
  t3461 = t1078*t1152*t1833;
  t3890 = t1173*t3885;
  t3894 = t3461 + t3890;
  t3961 = t1173*t1078*t1833;
  t3980 = -1.*t1152*t3885;
  t4000 = t3961 + t3980;
  t4042 = -1.*t1152*t1492;
  t4349 = t1173*t4250;
  t4382 = t4042 + t4349;
  t4455 = -1.*t1173*t1492;
  t4458 = -1.*t1152*t4250;
  t4496 = t4455 + t4458;
  t4747 = t2198*t1975;
  t4754 = t1359*t2294;
  t4816 = t4747 + t4754;
  t5190 = -1.*t2869;
  t5208 = 1. + t5190;
  t2771 = -1.*t309*t2575;
  t3183 = t2869*t3122;
  t3442 = t2771 + t3183;
  t4905 = t2869*t2575;
  t4920 = t309*t3122;
  t4925 = t4905 + t4920;
  t4976 = -1.*t1173;
  t4990 = 1. + t4976;
  t5004 = -0.183*t4990;
  t5089 = 0. + t5004;
  t5103 = 0.047*t2198;
  t5115 = 0. + t5103;
  t5124 = -1.*t1359;
  t5126 = 1. + t5124;
  t5129 = -0.047*t5126;
  t5130 = 0. + t5129;
  t4842 = t2198*t3757;
  t4845 = t1359*t3842;
  t4848 = t4842 + t4845;
  t5158 = -0.183*t1152;
  t5167 = 0. + t5158;
  t5212 = -0.1*t5208;
  t5214 = -0.183*t309;
  t5217 = 0. + t5212 + t5214;
  t5231 = -0.183*t5208;
  t5258 = 0.1*t309;
  t5284 = 0. + t5231 + t5258;
  t3899 = -1.*t309*t3894;
  t4016 = t2869*t4000;
  t4039 = t3899 + t4016;
  t4926 = t2869*t3894;
  t4929 = t309*t4000;
  t4951 = t4926 + t4929;
  t4875 = t1078*t1399*t2198;
  t4884 = t1359*t1078*t1885;
  t4903 = t4875 + t4884;
  t4428 = -1.*t309*t4382;
  t4527 = t2869*t4496;
  t4572 = t4428 + t4527;
  t4960 = t2869*t4382;
  t4961 = t309*t4496;
  t4967 = t4960 + t4961;
  p_output1[0]=t3442;
  p_output1[1]=t4039;
  p_output1[2]=t4572;
  p_output1[3]=0.;
  p_output1[4]=t4816;
  p_output1[5]=t4848;
  p_output1[6]=t4903;
  p_output1[7]=0.;
  p_output1[8]=t4925;
  p_output1[9]=t4951;
  p_output1[10]=t4967;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.183*t3442 - 0.13205*t4816 - 0.2*t4925 + t1975*t5115 + t2294*t5130 + t2402*t5167 + t2575*t5217 + t3122*t5284 + t1078*t5089*t964 + var1[0];
  p_output1[13]=0. - 0.183*t4039 - 0.13205*t4848 - 0.2*t4951 + t1078*t1833*t5089 + t3757*t5115 + t3842*t5130 + t3885*t5167 + t3894*t5217 + t4000*t5284 + var1[1];
  p_output1[14]=0. - 0.183*t4572 - 0.13205*t4903 - 0.2*t4967 - 1.*t1492*t5089 + t1078*t1399*t5115 + t1078*t1885*t5130 + t4250*t5167 + t4382*t5217 + t4496*t5284 + var1[2];
  p_output1[15]=1.;
}



void H_RRfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
