/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:51:04 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_FLfoot_src.h"

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
  double t416;
  double t1384;
  double t994;
  double t1168;
  double t1444;
  double t474;
  double t1225;
  double t1750;
  double t1766;
  double t1934;
  double t2334;
  double t2406;
  double t2637;
  double t395;
  double t3150;
  double t100;
  double t3373;
  double t3438;
  double t3440;
  double t3632;
  double t3749;
  double t3784;
  double t3843;
  double t3858;
  double t3861;
  double t3873;
  double t4248;
  double t4252;
  double t4261;
  double t291;
  double t349;
  double t351;
  double t356;
  double t497;
  double t836;
  double t2149;
  double t2198;
  double t2251;
  double t2272;
  double t4566;
  double t4618;
  double t4638;
  double t4764;
  double t4785;
  double t4804;
  double t3154;
  double t3294;
  double t3805;
  double t3848;
  double t3850;
  double t5088;
  double t5117;
  double t5141;
  double t4150;
  double t4188;
  double t4229;
  double t5220;
  double t5221;
  double t5224;
  double t5294;
  double t5300;
  double t5412;
  double t6072;
  double t6182;
  double t6192;
  double t6212;
  double t6220;
  double t6254;
  double t6264;
  double t6291;
  double t6304;
  double t6647;
  double t6649;
  double t6653;
  double t6663;
  double t6664;
  double t6666;
  double t6670;
  double t6687;
  double t6692;
  double t6838;
  double t6843;
  double t6847;
  double t6853;
  double t6854;
  double t6856;
  double t6863;
  double t6866;
  double t6870;
  double t6919;
  double t6920;
  double t6926;
  double t6933;
  double t6937;
  double t6939;
  double t7052;
  double t7070;
  double t7074;
  double t3074;
  double t7083;
  double t7086;
  double t7241;
  double t7242;
  double t7248;
  double t7321;
  double t7325;
  double t7364;
  double t7365;
  double t7367;
  double t7372;
  double t7374;
  double t7116;
  double t7250;
  double t7251;
  double t7252;
  double t7253;
  double t7254;
  double t7255;
  double t7258;
  double t7261;
  double t7272;
  double t7282;
  double t7284;
  double t7285;
  double t7294;
  double t7302;
  double t7305;
  double t7493;
  double t7494;
  double t7495;
  double t5494;
  double t7433;
  double t7442;
  double t7535;
  double t7537;
  double t7539;
  double t7545;
  double t7548;
  double t7614;
  double t7616;
  double t7620;
  double t7625;
  double t7626;
  double t7643;
  double t5468;
  double t5748;
  double t7518;
  double t7706;
  double t7710;
  double t7713;
  double t7724;
  double t7727;
  double t7761;
  double t7762;
  double t7765;
  double t7559;
  double t7594;
  double t7812;
  double t7815;
  double t7825;
  double t7677;
  double t7692;
  t416 = Sin(var1[3]);
  t1384 = Cos(var1[3]);
  t994 = Cos(var1[5]);
  t1168 = Sin(var1[4]);
  t1444 = Sin(var1[5]);
  t474 = Sin(var1[9]);
  t1225 = -1.*t994*t416*t1168;
  t1750 = t1384*t1444;
  t1766 = t1225 + t1750;
  t1934 = Cos(var1[9]);
  t2334 = -1.*t1384*t994;
  t2406 = -1.*t416*t1168*t1444;
  t2637 = t2334 + t2406;
  t395 = Cos(var1[4]);
  t3150 = Sin(var1[10]);
  t100 = Cos(var1[10]);
  t3373 = t1934*t1766;
  t3438 = -1.*t474*t2637;
  t3440 = t3373 + t3438;
  t3632 = Cos(var1[11]);
  t3749 = -1.*t3632;
  t3784 = 1. + t3749;
  t3843 = Sin(var1[11]);
  t3858 = -1.*t395*t3150*t416;
  t3861 = t100*t3440;
  t3873 = t3858 + t3861;
  t4248 = -1.*t100*t395*t416;
  t4252 = -1.*t3150*t3440;
  t4261 = t4248 + t4252;
  t291 = -1.*t100;
  t349 = 1. + t291;
  t351 = 0.183*t349;
  t356 = 0. + t351;
  t497 = -0.047*t474;
  t836 = 0. + t497;
  t2149 = -1.*t1934;
  t2198 = 1. + t2149;
  t2251 = 0.047*t2198;
  t2272 = 0. + t2251;
  t4566 = t1384*t994*t1168;
  t4618 = t416*t1444;
  t4638 = t4566 + t4618;
  t4764 = -1.*t994*t416;
  t4785 = t1384*t1168*t1444;
  t4804 = t4764 + t4785;
  t3154 = 0.183*t3150;
  t3294 = 0. + t3154;
  t3805 = -0.15*t3784;
  t3848 = 0.183*t3843;
  t3850 = 0. + t3805 + t3848;
  t5088 = t1934*t4638;
  t5117 = -1.*t474*t4804;
  t5141 = t5088 + t5117;
  t4150 = 0.183*t3784;
  t4188 = 0.15*t3843;
  t4229 = 0. + t4150 + t4188;
  t5220 = t1384*t395*t3150;
  t5221 = t100*t5141;
  t5224 = t5220 + t5221;
  t5294 = t100*t1384*t395;
  t5300 = -1.*t3150*t5141;
  t5412 = t5294 + t5300;
  t6072 = t1934*t1384*t395*t994;
  t6182 = -1.*t1384*t395*t474*t1444;
  t6192 = t6072 + t6182;
  t6212 = -1.*t1384*t3150*t1168;
  t6220 = t100*t6192;
  t6254 = t6212 + t6220;
  t6264 = -1.*t100*t1384*t1168;
  t6291 = -1.*t3150*t6192;
  t6304 = t6264 + t6291;
  t6647 = t1934*t395*t994*t416;
  t6649 = -1.*t395*t474*t416*t1444;
  t6653 = t6647 + t6649;
  t6663 = -1.*t3150*t416*t1168;
  t6664 = t100*t6653;
  t6666 = t6663 + t6664;
  t6670 = -1.*t100*t416*t1168;
  t6687 = -1.*t3150*t6653;
  t6692 = t6670 + t6687;
  t6838 = -1.*t1934*t994*t1168;
  t6843 = t474*t1168*t1444;
  t6847 = t6838 + t6843;
  t6853 = -1.*t395*t3150;
  t6854 = t100*t6847;
  t6856 = t6853 + t6854;
  t6863 = -1.*t100*t395;
  t6866 = -1.*t3150*t6847;
  t6870 = t6863 + t6866;
  t6919 = t994*t416;
  t6920 = -1.*t1384*t1168*t1444;
  t6926 = t6919 + t6920;
  t6933 = -1.*t474*t4638;
  t6937 = t1934*t6926;
  t6939 = t6933 + t6937;
  t7052 = t994*t416*t1168;
  t7070 = -1.*t1384*t1444;
  t7074 = t7052 + t7070;
  t3074 = t1934*t2637;
  t7083 = -1.*t474*t7074;
  t7086 = t7083 + t3074;
  t7241 = -1.*t395*t994*t474;
  t7242 = -1.*t1934*t395*t1444;
  t7248 = t7241 + t7242;
  t7321 = -1.*t1934*t4804;
  t7325 = t6933 + t7321;
  t7364 = t1384*t994;
  t7365 = t416*t1168*t1444;
  t7367 = t7364 + t7365;
  t7372 = -1.*t1934*t7367;
  t7374 = t7083 + t7372;
  t7116 = t1934*t7074;
  t7250 = t3294*t7248;
  t7251 = -1.*t3150*t4229*t7248;
  t7252 = t100*t3850*t7248;
  t7253 = t1934*t395*t994;
  t7254 = -1.*t395*t474*t1444;
  t7255 = t7253 + t7254;
  t7258 = 0.13205*t7255;
  t7261 = -1.*t3632*t3150*t7248;
  t7272 = -1.*t100*t3843*t7248;
  t7282 = t7261 + t7272;
  t7284 = 0.183*t7282;
  t7285 = t100*t3632*t7248;
  t7294 = -1.*t3150*t3843*t7248;
  t7302 = t7285 + t7294;
  t7305 = -0.3*t7302;
  t7493 = -1.*t1384*t395*t3150;
  t7494 = -1.*t100*t5141;
  t7495 = t7493 + t7494;
  t5494 = t3632*t5412;
  t7433 = -1.*t474*t7367;
  t7442 = t7116 + t7433;
  t7535 = -1.*t100*t7442;
  t7537 = t3858 + t7535;
  t7539 = t100*t395*t416;
  t7545 = -1.*t3150*t7442;
  t7548 = t7539 + t7545;
  t7614 = t3150*t1168;
  t7616 = -1.*t100*t7255;
  t7620 = t7614 + t7616;
  t7625 = -1.*t100*t1168;
  t7626 = -1.*t3150*t7255;
  t7643 = t7625 + t7626;
  t5468 = -1.*t3843*t5224;
  t5748 = t5468 + t5494;
  t7518 = -1.*t3843*t5412;
  t7706 = 0.183*t3632;
  t7710 = -0.15*t3843;
  t7713 = t7706 + t7710;
  t7724 = 0.15*t3632;
  t7727 = t7724 + t3848;
  t7761 = t395*t3150*t416;
  t7762 = t100*t7442;
  t7765 = t7761 + t7762;
  t7559 = t3632*t7548;
  t7594 = -1.*t3843*t7548;
  t7812 = -1.*t3150*t1168;
  t7815 = t100*t7255;
  t7825 = t7812 + t7815;
  t7677 = t3632*t7643;
  t7692 = -1.*t3843*t7643;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t2272*t2637 + t3294*t3440 + t3850*t3873 - 1.*t356*t395*t416 + t4229*t4261 + 0.183*(-1.*t3843*t3873 + t3632*t4261) - 0.3*(t3632*t3873 + t3843*t4261) + 0.13205*(t3074 + t1766*t474) + t1766*t836;
  p_output1[10]=t1384*t356*t395 + t2272*t4804 + 0.13205*(t4638*t474 + t1934*t4804) + t3294*t5141 + t3850*t5224 + t4229*t5412 - 0.3*(t3632*t5224 + t3843*t5412) + 0.183*t5748 + t4638*t836;
  p_output1[11]=0;
  p_output1[12]=-1.*t1168*t1384*t356 + t1384*t1444*t2272*t395 + t3294*t6192 + t3850*t6254 + t4229*t6304 + 0.183*(-1.*t3843*t6254 + t3632*t6304) - 0.3*(t3632*t6254 + t3843*t6304) + t1384*t395*t836*t994 + 0.13205*(t1384*t1444*t1934*t395 + t1384*t395*t474*t994);
  p_output1[13]=-1.*t1168*t356*t416 + t1444*t2272*t395*t416 + t3294*t6653 + t3850*t6666 + t4229*t6692 + 0.183*(-1.*t3843*t6666 + t3632*t6692) - 0.3*(t3632*t6666 + t3843*t6692) + t395*t416*t836*t994 + 0.13205*(t1444*t1934*t395*t416 + t395*t416*t474*t994);
  p_output1[14]=-1.*t1168*t1444*t2272 - 1.*t356*t395 + t3294*t6847 + t3850*t6856 + t4229*t6870 + 0.183*(-1.*t3843*t6856 + t3632*t6870) - 0.3*(t3632*t6856 + t3843*t6870) - 1.*t1168*t836*t994 + 0.13205*(-1.*t1168*t1444*t1934 - 1.*t1168*t474*t994);
  p_output1[15]=t2272*t4638 + 0.13205*(t5088 + t474*t6926) + t3294*t6939 + t100*t3850*t6939 - 1.*t3150*t4229*t6939 + 0.183*(-1.*t3150*t3632*t6939 - 1.*t100*t3843*t6939) - 0.3*(t100*t3632*t6939 - 1.*t3150*t3843*t6939) + t6926*t836;
  p_output1[16]=t2272*t7074 + t3294*t7086 + t100*t3850*t7086 - 1.*t3150*t4229*t7086 + 0.183*(-1.*t3150*t3632*t7086 - 1.*t100*t3843*t7086) - 0.3*(t100*t3632*t7086 - 1.*t3150*t3843*t7086) + 0.13205*(t2637*t474 + t7116) + t2637*t836;
  p_output1[17]=t7250 + t7251 + t7252 + t7258 + t7284 + t7305 - 1.*t1444*t395*t836 + t2272*t395*t994;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=-0.047*t1934*t4638 + 0.047*t474*t4804 + 0.13205*t5141 + t3294*t7325 + t100*t3850*t7325 - 1.*t3150*t4229*t7325 + 0.183*(-1.*t3150*t3632*t7325 - 1.*t100*t3843*t7325) - 0.3*(t100*t3632*t7325 - 1.*t3150*t3843*t7325);
  p_output1[28]=-0.047*t1934*t7074 + 0.047*t474*t7367 + t3294*t7374 + t100*t3850*t7374 - 1.*t3150*t4229*t7374 + 0.183*(-1.*t3150*t3632*t7374 - 1.*t100*t3843*t7374) - 0.3*(t100*t3632*t7374 - 1.*t3150*t3843*t7374) + 0.13205*t7442;
  p_output1[29]=0.047*t1444*t395*t474 + t7250 + t7251 + t7252 + t7258 + t7284 + t7305 - 0.047*t1934*t395*t994;
  p_output1[30]=0.183*t1384*t3150*t395 + 0.183*t100*t5141 + t3850*t5412 + t4229*t7495 - 0.3*(t5494 + t3843*t7495) + 0.183*(t3632*t7495 + t7518);
  p_output1[31]=0.183*t3150*t395*t416 + 0.183*t100*t7442 + t4229*t7537 + t3850*t7548 - 0.3*(t3843*t7537 + t7559) + 0.183*(t3632*t7537 + t7594);
  p_output1[32]=-0.183*t1168*t3150 + 0.183*t100*t7255 + t4229*t7620 + t3850*t7643 - 0.3*(t3843*t7620 + t7677) + 0.183*(t3632*t7620 + t7692);
  p_output1[33]=-0.3*t5748 + 0.183*(-1.*t3632*t5224 + t7518) + t5224*t7713 + t5412*t7727;
  p_output1[34]=t7548*t7727 + t7713*t7765 + 0.183*(t7594 - 1.*t3632*t7765) - 0.3*(t7559 - 1.*t3843*t7765);
  p_output1[35]=t7643*t7727 + t7713*t7825 + 0.183*(t7692 - 1.*t3632*t7825) - 0.3*(t7677 - 1.*t3843*t7825);
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
}



void Jp_FLfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
