/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:09:55 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_FR_thigh_joint_src.h"

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
  double t2573;
  double t2663;
  double t2669;
  double t2644;
  double t2670;
  double t2584;
  double t2664;
  double t2673;
  double t2686;
  double t2697;
  double t2718;
  double t2727;
  double t2728;
  double t2338;
  double t2403;
  double t2815;
  double t2819;
  double t2827;
  double t2831;
  double t2430;
  double t2540;
  double t2552;
  double t2560;
  double t2589;
  double t2602;
  double t2603;
  double t2620;
  double t2743;
  double t2771;
  double t2965;
  double t2982;
  double t2991;
  double t2999;
  double t3033;
  double t3041;
  double t2843;
  double t2875;
  double t3093;
  double t3094;
  double t3105;
  double t3192;
  double t3205;
  double t3220;
  double t3325;
  double t3330;
  double t3335;
  double t3379;
  double t3386;
  double t3398;
  double t3450;
  double t3451;
  double t3455;
  double t3509;
  double t3510;
  double t3511;
  double t3530;
  double t3532;
  double t3537;
  double t2781;
  double t3571;
  double t3590;
  double t3671;
  double t3679;
  double t3680;
  double t3725;
  double t3735;
  double t3550;
  double t3801;
  double t3804;
  double t3805;
  double t3820;
  double t3845;
  double t3653;
  double t3662;
  double t3663;
  double t3664;
  double t3684;
  double t3690;
  double t3814;
  double t3815;
  t2573 = Sin(var1[3]);
  t2663 = Cos(var1[5]);
  t2669 = Sin(var1[4]);
  t2644 = Cos(var1[3]);
  t2670 = Sin(var1[5]);
  t2584 = Cos(var1[6]);
  t2664 = -1.*t2644*t2663;
  t2673 = -1.*t2573*t2669*t2670;
  t2686 = t2664 + t2673;
  t2697 = -1.*t2663*t2573*t2669;
  t2718 = t2644*t2670;
  t2727 = t2697 + t2718;
  t2728 = Sin(var1[6]);
  t2338 = Cos(var1[4]);
  t2403 = Cos(var1[7]);
  t2815 = t2584*t2727;
  t2819 = -1.*t2686*t2728;
  t2827 = t2815 + t2819;
  t2831 = Sin(var1[7]);
  t2430 = -1.*t2403;
  t2540 = 1. + t2430;
  t2552 = 0.183*t2540;
  t2560 = 0. + t2552;
  t2589 = -1.*t2584;
  t2602 = 1. + t2589;
  t2603 = -0.047*t2602;
  t2620 = 0. + t2603;
  t2743 = 0.047*t2728;
  t2771 = 0. + t2743;
  t2965 = -1.*t2663*t2573;
  t2982 = t2644*t2669*t2670;
  t2991 = t2965 + t2982;
  t2999 = t2644*t2663*t2669;
  t3033 = t2573*t2670;
  t3041 = t2999 + t3033;
  t2843 = 0.183*t2831;
  t2875 = 0. + t2843;
  t3093 = t2584*t3041;
  t3094 = -1.*t2991*t2728;
  t3105 = t3093 + t3094;
  t3192 = t2644*t2338*t2663*t2584;
  t3205 = -1.*t2644*t2338*t2670*t2728;
  t3220 = t3192 + t3205;
  t3325 = t2338*t2663*t2584*t2573;
  t3330 = -1.*t2338*t2573*t2670*t2728;
  t3335 = t3325 + t3330;
  t3379 = -1.*t2663*t2584*t2669;
  t3386 = t2669*t2670*t2728;
  t3398 = t3379 + t3386;
  t3450 = t2663*t2573;
  t3451 = -1.*t2644*t2669*t2670;
  t3455 = t3450 + t3451;
  t3509 = t2584*t3455;
  t3510 = -1.*t3041*t2728;
  t3511 = t3509 + t3510;
  t3530 = t2663*t2573*t2669;
  t3532 = -1.*t2644*t2670;
  t3537 = t3530 + t3532;
  t2781 = t2584*t2686;
  t3571 = -1.*t3537*t2728;
  t3590 = t2781 + t3571;
  t3671 = -1.*t2338*t2584*t2670;
  t3679 = -1.*t2338*t2663*t2728;
  t3680 = t3671 + t3679;
  t3725 = -1.*t2584*t2991;
  t3735 = t3725 + t3510;
  t3550 = t2584*t3537;
  t3801 = t2644*t2663;
  t3804 = t2573*t2669*t2670;
  t3805 = t3801 + t3804;
  t3820 = -1.*t2584*t3805;
  t3845 = t3820 + t3571;
  t3653 = t2338*t2663*t2584;
  t3662 = -1.*t2338*t2670*t2728;
  t3663 = t3653 + t3662;
  t3664 = -0.13205*t3663;
  t3684 = t3680*t2875;
  t3690 = -0.183*t3680*t2831;
  t3814 = -1.*t3805*t2728;
  t3815 = t3550 + t3814;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=-1.*t2338*t2560*t2573 + t2620*t2686 + t2727*t2771 - 0.13205*(t2727*t2728 + t2781) + 0.183*(-1.*t2338*t2403*t2573 - 1.*t2827*t2831) + t2827*t2875;
  p_output1[10]=t2338*t2560*t2644 + t2620*t2991 + t2771*t3041 - 0.13205*(t2584*t2991 + t2728*t3041) + t2875*t3105 + 0.183*(t2338*t2403*t2644 - 1.*t2831*t3105);
  p_output1[11]=0;
  p_output1[12]=-1.*t2560*t2644*t2669 + t2338*t2620*t2644*t2670 - 0.13205*(t2338*t2584*t2644*t2670 + t2338*t2644*t2663*t2728) + t2338*t2644*t2663*t2771 + t2875*t3220 + 0.183*(-1.*t2403*t2644*t2669 - 1.*t2831*t3220);
  p_output1[13]=-1.*t2560*t2573*t2669 + t2338*t2573*t2620*t2670 - 0.13205*(t2338*t2573*t2584*t2670 + t2338*t2573*t2663*t2728) + t2338*t2573*t2663*t2771 + t2875*t3335 + 0.183*(-1.*t2403*t2573*t2669 - 1.*t2831*t3335);
  p_output1[14]=-1.*t2338*t2560 - 1.*t2620*t2669*t2670 - 0.13205*(-1.*t2584*t2669*t2670 - 1.*t2663*t2669*t2728) - 1.*t2663*t2669*t2771 + t2875*t3398 + 0.183*(-1.*t2338*t2403 - 1.*t2831*t3398);
  p_output1[15]=t2620*t3041 + t2771*t3455 - 0.13205*(t3093 + t2728*t3455) - 0.183*t2831*t3511 + t2875*t3511;
  p_output1[16]=t2686*t2771 + t2620*t3537 - 0.13205*(t2686*t2728 + t3550) - 0.183*t2831*t3590 + t2875*t3590;
  p_output1[17]=t2338*t2620*t2663 - 1.*t2338*t2670*t2771 + t3664 + t3684 + t3690;
  p_output1[18]=-0.047*t2728*t2991 + 0.047*t2584*t3041 - 0.13205*t3105 - 0.183*t2831*t3735 + t2875*t3735;
  p_output1[19]=0.047*t2584*t3537 - 0.047*t2728*t3805 - 0.13205*t3815 - 0.183*t2831*t3845 + t2875*t3845;
  p_output1[20]=0.047*t2338*t2584*t2663 - 0.047*t2338*t2670*t2728 + t3664 + t3684 + t3690;
  p_output1[21]=0.183*t2338*t2644*t2831 + 0.183*t2403*t3105 + 0.183*(-1.*t2338*t2644*t2831 - 1.*t2403*t3105);
  p_output1[22]=0.183*t2338*t2573*t2831 + 0.183*t2403*t3815 + 0.183*(-1.*t2338*t2573*t2831 - 1.*t2403*t3815);
  p_output1[23]=-0.183*t2669*t2831 + 0.183*t2403*t3663 + 0.183*(t2669*t2831 - 1.*t2403*t3663);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
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



void Jp_FR_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
