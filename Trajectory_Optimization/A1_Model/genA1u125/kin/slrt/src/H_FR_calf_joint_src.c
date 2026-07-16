/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:20:23 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FR_calf_joint_src.h"

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
  double t361;
  double t773;
  double t933;
  double t824;
  double t1009;
  double t670;
  double t746;
  double t826;
  double t1224;
  double t1260;
  double t1335;
  double t1352;
  double t1389;
  double t1390;
  double t1442;
  double t1525;
  double t1697;
  double t570;
  double t1791;
  double t315;
  double t2350;
  double t2365;
  double t2718;
  double t2782;
  double t2828;
  double t3081;
  double t3128;
  double t3169;
  double t3191;
  double t2157;
  double t3650;
  double t3709;
  double t3760;
  double t1963;
  double t1974;
  double t2018;
  double t690;
  double t1844;
  double t1929;
  double t3438;
  double t3456;
  double t3483;
  double t2262;
  double t3272;
  double t3301;
  double t3927;
  double t3975;
  double t4016;
  double t3646;
  double t3762;
  double t3794;
  double t4305;
  double t4397;
  double t4402;
  double t5496;
  double t5499;
  double t1959;
  double t2188;
  double t2255;
  double t4626;
  double t4636;
  double t4698;
  double t4921;
  double t4941;
  double t4952;
  double t4992;
  double t5034;
  double t5060;
  double t5108;
  double t5119;
  double t5204;
  double t5231;
  double t4417;
  double t4440;
  double t4453;
  double t5386;
  double t5447;
  double t5509;
  double t5558;
  double t5591;
  double t5673;
  double t5719;
  double t5720;
  double t3411;
  double t3500;
  double t3609;
  double t4826;
  double t4851;
  double t4873;
  double t4474;
  double t4507;
  double t4556;
  double t3800;
  double t4027;
  double t4233;
  double t4895;
  double t4899;
  double t4917;
  t361 = Cos(var1[3]);
  t773 = Cos(var1[5]);
  t933 = Sin(var1[3]);
  t824 = Sin(var1[4]);
  t1009 = Sin(var1[5]);
  t670 = Cos(var1[7]);
  t746 = Cos(var1[6]);
  t826 = t361*t773*t824;
  t1224 = t933*t1009;
  t1260 = t826 + t1224;
  t1335 = t746*t1260;
  t1352 = -1.*t773*t933;
  t1389 = t361*t824*t1009;
  t1390 = t1352 + t1389;
  t1442 = Sin(var1[6]);
  t1525 = -1.*t1390*t1442;
  t1697 = t1335 + t1525;
  t570 = Cos(var1[4]);
  t1791 = Sin(var1[7]);
  t315 = Cos(var1[8]);
  t2350 = t773*t933*t824;
  t2365 = -1.*t361*t1009;
  t2718 = t2350 + t2365;
  t2782 = t746*t2718;
  t2828 = t361*t773;
  t3081 = t933*t824*t1009;
  t3128 = t2828 + t3081;
  t3169 = -1.*t3128*t1442;
  t3191 = t2782 + t3169;
  t2157 = Sin(var1[8]);
  t3650 = t570*t773*t746;
  t3709 = -1.*t570*t1009*t1442;
  t3760 = t3650 + t3709;
  t1963 = t670*t1697;
  t1974 = t361*t570*t1791;
  t2018 = t1963 + t1974;
  t690 = t361*t570*t670;
  t1844 = -1.*t1697*t1791;
  t1929 = t690 + t1844;
  t3438 = t670*t3191;
  t3456 = t570*t933*t1791;
  t3483 = t3438 + t3456;
  t2262 = t570*t670*t933;
  t3272 = -1.*t3191*t1791;
  t3301 = t2262 + t3272;
  t3927 = t670*t3760;
  t3975 = -1.*t824*t1791;
  t4016 = t3927 + t3975;
  t3646 = -1.*t670*t824;
  t3762 = -1.*t3760*t1791;
  t3794 = t3646 + t3762;
  t4305 = t746*t1390;
  t4397 = t1260*t1442;
  t4402 = t4305 + t4397;
  t5496 = -1.*t315;
  t5499 = 1. + t5496;
  t1959 = t315*t1929;
  t2188 = -1.*t2018*t2157;
  t2255 = t1959 + t2188;
  t4626 = t315*t2018;
  t4636 = t1929*t2157;
  t4698 = t4626 + t4636;
  t4921 = -1.*t670;
  t4941 = 1. + t4921;
  t4952 = 0.183*t4941;
  t4992 = 0. + t4952;
  t5034 = -1.*t746;
  t5060 = 1. + t5034;
  t5108 = -0.047*t5060;
  t5119 = 0. + t5108;
  t5204 = 0.047*t1442;
  t5231 = 0. + t5204;
  t4417 = t746*t3128;
  t4440 = t2718*t1442;
  t4453 = t4417 + t4440;
  t5386 = 0.183*t1791;
  t5447 = 0. + t5386;
  t5509 = -0.25*t5499;
  t5558 = 0.183*t2157;
  t5591 = 0. + t5509 + t5558;
  t5673 = 0.183*t5499;
  t5719 = 0.25*t2157;
  t5720 = 0. + t5673 + t5719;
  t3411 = t315*t3301;
  t3500 = -1.*t3483*t2157;
  t3609 = t3411 + t3500;
  t4826 = t315*t3483;
  t4851 = t3301*t2157;
  t4873 = t4826 + t4851;
  t4474 = t570*t746*t1009;
  t4507 = t570*t773*t1442;
  t4556 = t4474 + t4507;
  t3800 = t315*t3794;
  t4027 = -1.*t4016*t2157;
  t4233 = t3800 + t4027;
  t4895 = t315*t4016;
  t4899 = t3794*t2157;
  t4917 = t4895 + t4899;
  p_output1[0]=t2255;
  p_output1[1]=t3609;
  p_output1[2]=t4233;
  p_output1[3]=0.;
  p_output1[4]=t4402;
  p_output1[5]=t4453;
  p_output1[6]=t4556;
  p_output1[7]=0.;
  p_output1[8]=t4698;
  p_output1[9]=t4873;
  p_output1[10]=t4917;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.183*t2255 - 0.15331*t4402 - 0.25*t4698 + t1390*t5119 + t1260*t5231 + t1697*t5447 + t2018*t5591 + t361*t4992*t570 + t1929*t5720 + var1[0];
  p_output1[13]=0. + 0.183*t3609 - 0.15331*t4453 - 0.25*t4873 + t3128*t5119 + t2718*t5231 + t3191*t5447 + t3483*t5591 + t3301*t5720 + t4992*t570*t933 + var1[1];
  p_output1[14]=0. + 0.183*t4233 - 0.15331*t4556 - 0.25*t4917 + t3760*t5447 + t4016*t5591 + t1009*t5119*t570 + t3794*t5720 + t5231*t570*t773 - 1.*t4992*t824 + var1[2];
  p_output1[15]=1.;
}



void H_FR_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
