/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:51:02 GMT-05:00
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
  double t250;
  double t480;
  double t726;
  double t675;
  double t775;
  double t376;
  double t457;
  double t688;
  double t1078;
  double t1397;
  double t1475;
  double t1517;
  double t1596;
  double t1652;
  double t1738;
  double t1770;
  double t1881;
  double t305;
  double t1885;
  double t148;
  double t3199;
  double t3207;
  double t3210;
  double t3217;
  double t3228;
  double t3229;
  double t3241;
  double t3244;
  double t3253;
  double t2872;
  double t3567;
  double t3604;
  double t3877;
  double t2106;
  double t2563;
  double t2831;
  double t406;
  double t1930;
  double t1945;
  double t3363;
  double t3372;
  double t3410;
  double t3192;
  double t3272;
  double t3313;
  double t4005;
  double t4010;
  double t4024;
  double t3503;
  double t3954;
  double t3977;
  double t4054;
  double t4074;
  double t4134;
  double t4973;
  double t4980;
  double t2015;
  double t2874;
  double t3149;
  double t4216;
  double t4217;
  double t4233;
  double t4472;
  double t4589;
  double t4603;
  double t4649;
  double t4668;
  double t4732;
  double t4792;
  double t4799;
  double t4835;
  double t4871;
  double t4140;
  double t4171;
  double t4185;
  double t4933;
  double t4941;
  double t5014;
  double t5016;
  double t5065;
  double t5070;
  double t5071;
  double t5073;
  double t3357;
  double t3477;
  double t3483;
  double t4323;
  double t4373;
  double t4391;
  double t4198;
  double t4207;
  double t4212;
  double t3985;
  double t4027;
  double t4053;
  double t4417;
  double t4463;
  double t4467;
  t250 = Cos(var1[3]);
  t480 = Cos(var1[5]);
  t726 = Sin(var1[3]);
  t675 = Sin(var1[4]);
  t775 = Sin(var1[5]);
  t376 = Cos(var1[7]);
  t457 = Cos(var1[6]);
  t688 = t250*t480*t675;
  t1078 = t726*t775;
  t1397 = t688 + t1078;
  t1475 = t457*t1397;
  t1517 = -1.*t480*t726;
  t1596 = t250*t675*t775;
  t1652 = t1517 + t1596;
  t1738 = Sin(var1[6]);
  t1770 = -1.*t1652*t1738;
  t1881 = t1475 + t1770;
  t305 = Cos(var1[4]);
  t1885 = Sin(var1[7]);
  t148 = Cos(var1[8]);
  t3199 = t480*t726*t675;
  t3207 = -1.*t250*t775;
  t3210 = t3199 + t3207;
  t3217 = t457*t3210;
  t3228 = t250*t480;
  t3229 = t726*t675*t775;
  t3241 = t3228 + t3229;
  t3244 = -1.*t3241*t1738;
  t3253 = t3217 + t3244;
  t2872 = Sin(var1[8]);
  t3567 = t305*t480*t457;
  t3604 = -1.*t305*t775*t1738;
  t3877 = t3567 + t3604;
  t2106 = t376*t1881;
  t2563 = t250*t305*t1885;
  t2831 = t2106 + t2563;
  t406 = t250*t305*t376;
  t1930 = -1.*t1881*t1885;
  t1945 = t406 + t1930;
  t3363 = t376*t3253;
  t3372 = t305*t726*t1885;
  t3410 = t3363 + t3372;
  t3192 = t305*t376*t726;
  t3272 = -1.*t3253*t1885;
  t3313 = t3192 + t3272;
  t4005 = t376*t3877;
  t4010 = -1.*t675*t1885;
  t4024 = t4005 + t4010;
  t3503 = -1.*t376*t675;
  t3954 = -1.*t3877*t1885;
  t3977 = t3503 + t3954;
  t4054 = t457*t1652;
  t4074 = t1397*t1738;
  t4134 = t4054 + t4074;
  t4973 = -1.*t148;
  t4980 = 1. + t4973;
  t2015 = t148*t1945;
  t2874 = -1.*t2831*t2872;
  t3149 = t2015 + t2874;
  t4216 = t148*t2831;
  t4217 = t1945*t2872;
  t4233 = t4216 + t4217;
  t4472 = -1.*t376;
  t4589 = 1. + t4472;
  t4603 = 0.183*t4589;
  t4649 = 0. + t4603;
  t4668 = -1.*t457;
  t4732 = 1. + t4668;
  t4792 = -0.047*t4732;
  t4799 = 0. + t4792;
  t4835 = 0.047*t1738;
  t4871 = 0. + t4835;
  t4140 = t457*t3241;
  t4171 = t3210*t1738;
  t4185 = t4140 + t4171;
  t4933 = 0.183*t1885;
  t4941 = 0. + t4933;
  t5014 = 0.183*t4980;
  t5016 = 0.15*t2872;
  t5065 = 0. + t5014 + t5016;
  t5070 = -0.15*t4980;
  t5071 = 0.183*t2872;
  t5073 = 0. + t5070 + t5071;
  t3357 = t148*t3313;
  t3477 = -1.*t3410*t2872;
  t3483 = t3357 + t3477;
  t4323 = t148*t3410;
  t4373 = t3313*t2872;
  t4391 = t4323 + t4373;
  t4198 = t305*t457*t775;
  t4207 = t305*t480*t1738;
  t4212 = t4198 + t4207;
  t3985 = t148*t3977;
  t4027 = -1.*t4024*t2872;
  t4053 = t3985 + t4027;
  t4417 = t148*t4024;
  t4463 = t3977*t2872;
  t4467 = t4417 + t4463;
  p_output1[0]=t3149;
  p_output1[1]=t3483;
  p_output1[2]=t4053;
  p_output1[3]=0.;
  p_output1[4]=t4134;
  p_output1[5]=t4185;
  p_output1[6]=t4212;
  p_output1[7]=0.;
  p_output1[8]=t4233;
  p_output1[9]=t4391;
  p_output1[10]=t4467;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.183*t3149 - 0.13205*t4134 - 0.3*t4233 + t250*t305*t4649 + t1652*t4799 + t1397*t4871 + t1881*t4941 + t1945*t5065 + t2831*t5073 + var1[0];
  p_output1[13]=0. + 0.183*t3483 - 0.13205*t4185 - 0.3*t4391 + t3241*t4799 + t3210*t4871 + t3253*t4941 + t3313*t5065 + t3410*t5073 + t305*t4649*t726 + var1[1];
  p_output1[14]=0. + 0.183*t4053 - 0.13205*t4212 - 0.3*t4467 + t305*t480*t4871 + t3877*t4941 + t3977*t5065 + t4024*t5073 - 1.*t4649*t675 + t305*t4799*t775 + var1[2];
  p_output1[15]=1.;
}



void H_FRfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
