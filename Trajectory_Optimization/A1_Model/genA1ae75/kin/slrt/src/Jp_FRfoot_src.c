/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:51:02 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_FRfoot_src.h"

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
  double t757;
  double t1666;
  double t1704;
  double t1632;
  double t1723;
  double t1004;
  double t1670;
  double t1764;
  double t1768;
  double t1792;
  double t1855;
  double t1870;
  double t1919;
  double t231;
  double t369;
  double t2150;
  double t2163;
  double t2164;
  double t2227;
  double t2541;
  double t2558;
  double t2566;
  double t2626;
  double t2386;
  double t2410;
  double t2481;
  double t2762;
  double t2775;
  double t2813;
  double t386;
  double t530;
  double t658;
  double t725;
  double t1035;
  double t1357;
  double t1509;
  double t1585;
  double t1930;
  double t1948;
  double t3308;
  double t3313;
  double t3351;
  double t3410;
  double t3477;
  double t3498;
  double t2263;
  double t2280;
  double t3800;
  double t3844;
  double t3853;
  double t2598;
  double t2659;
  double t2663;
  double t2848;
  double t2870;
  double t2872;
  double t3878;
  double t3891;
  double t3926;
  double t3931;
  double t3985;
  double t3996;
  double t4217;
  double t4227;
  double t4230;
  double t4236;
  double t4238;
  double t4264;
  double t4270;
  double t4288;
  double t4296;
  double t4801;
  double t4809;
  double t4823;
  double t4854;
  double t4855;
  double t4856;
  double t4881;
  double t4903;
  double t4912;
  double t5082;
  double t5116;
  double t5123;
  double t5130;
  double t5134;
  double t5136;
  double t5193;
  double t5216;
  double t5222;
  double t5290;
  double t5292;
  double t5368;
  double t5440;
  double t5447;
  double t5461;
  double t5528;
  double t5541;
  double t5544;
  double t2044;
  double t5654;
  double t5655;
  double t5860;
  double t5905;
  double t5906;
  double t6115;
  double t6119;
  double t5616;
  double t6286;
  double t6292;
  double t6293;
  double t6337;
  double t6353;
  double t5815;
  double t5816;
  double t5843;
  double t5846;
  double t5919;
  double t5951;
  double t5958;
  double t5959;
  double t5969;
  double t5981;
  double t5984;
  double t5989;
  double t6036;
  double t6061;
  double t6062;
  double t4010;
  double t6486;
  double t6502;
  double t6504;
  double t6295;
  double t6296;
  double t6625;
  double t6645;
  double t6652;
  double t6610;
  double t6612;
  double t6819;
  double t6822;
  double t6824;
  double t6781;
  double t6794;
  double t6795;
  double t4016;
  double t4019;
  double t6560;
  double t6919;
  double t6926;
  double t6991;
  double t7010;
  double t7049;
  double t6662;
  double t7202;
  double t7204;
  double t7206;
  double t6702;
  double t6833;
  double t7361;
  double t7362;
  double t7366;
  double t6881;
  t757 = Sin(var1[3]);
  t1666 = Cos(var1[5]);
  t1704 = Sin(var1[4]);
  t1632 = Cos(var1[3]);
  t1723 = Sin(var1[5]);
  t1004 = Cos(var1[6]);
  t1670 = -1.*t1632*t1666;
  t1764 = -1.*t757*t1704*t1723;
  t1768 = t1670 + t1764;
  t1792 = -1.*t1666*t757*t1704;
  t1855 = t1632*t1723;
  t1870 = t1792 + t1855;
  t1919 = Sin(var1[6]);
  t231 = Cos(var1[4]);
  t369 = Cos(var1[7]);
  t2150 = t1004*t1870;
  t2163 = -1.*t1768*t1919;
  t2164 = t2150 + t2163;
  t2227 = Sin(var1[7]);
  t2541 = Cos(var1[8]);
  t2558 = -1.*t2541;
  t2566 = 1. + t2558;
  t2626 = Sin(var1[8]);
  t2386 = -1.*t231*t369*t757;
  t2410 = -1.*t2164*t2227;
  t2481 = t2386 + t2410;
  t2762 = t369*t2164;
  t2775 = -1.*t231*t757*t2227;
  t2813 = t2762 + t2775;
  t386 = -1.*t369;
  t530 = 1. + t386;
  t658 = 0.183*t530;
  t725 = 0. + t658;
  t1035 = -1.*t1004;
  t1357 = 1. + t1035;
  t1509 = -0.047*t1357;
  t1585 = 0. + t1509;
  t1930 = 0.047*t1919;
  t1948 = 0. + t1930;
  t3308 = -1.*t1666*t757;
  t3313 = t1632*t1704*t1723;
  t3351 = t3308 + t3313;
  t3410 = t1632*t1666*t1704;
  t3477 = t757*t1723;
  t3498 = t3410 + t3477;
  t2263 = 0.183*t2227;
  t2280 = 0. + t2263;
  t3800 = t1004*t3498;
  t3844 = -1.*t3351*t1919;
  t3853 = t3800 + t3844;
  t2598 = 0.183*t2566;
  t2659 = 0.15*t2626;
  t2663 = 0. + t2598 + t2659;
  t2848 = -0.15*t2566;
  t2870 = 0.183*t2626;
  t2872 = 0. + t2848 + t2870;
  t3878 = t1632*t231*t369;
  t3891 = -1.*t3853*t2227;
  t3926 = t3878 + t3891;
  t3931 = t369*t3853;
  t3985 = t1632*t231*t2227;
  t3996 = t3931 + t3985;
  t4217 = t1632*t231*t1666*t1004;
  t4227 = -1.*t1632*t231*t1723*t1919;
  t4230 = t4217 + t4227;
  t4236 = -1.*t1632*t369*t1704;
  t4238 = -1.*t4230*t2227;
  t4264 = t4236 + t4238;
  t4270 = t369*t4230;
  t4288 = -1.*t1632*t1704*t2227;
  t4296 = t4270 + t4288;
  t4801 = t231*t1666*t1004*t757;
  t4809 = -1.*t231*t757*t1723*t1919;
  t4823 = t4801 + t4809;
  t4854 = -1.*t369*t757*t1704;
  t4855 = -1.*t4823*t2227;
  t4856 = t4854 + t4855;
  t4881 = t369*t4823;
  t4903 = -1.*t757*t1704*t2227;
  t4912 = t4881 + t4903;
  t5082 = -1.*t1666*t1004*t1704;
  t5116 = t1704*t1723*t1919;
  t5123 = t5082 + t5116;
  t5130 = -1.*t231*t369;
  t5134 = -1.*t5123*t2227;
  t5136 = t5130 + t5134;
  t5193 = t369*t5123;
  t5216 = -1.*t231*t2227;
  t5222 = t5193 + t5216;
  t5290 = t1666*t757;
  t5292 = -1.*t1632*t1704*t1723;
  t5368 = t5290 + t5292;
  t5440 = t1004*t5368;
  t5447 = -1.*t3498*t1919;
  t5461 = t5440 + t5447;
  t5528 = t1666*t757*t1704;
  t5541 = -1.*t1632*t1723;
  t5544 = t5528 + t5541;
  t2044 = t1004*t1768;
  t5654 = -1.*t5544*t1919;
  t5655 = t2044 + t5654;
  t5860 = -1.*t231*t1004*t1723;
  t5905 = -1.*t231*t1666*t1919;
  t5906 = t5860 + t5905;
  t6115 = -1.*t1004*t3351;
  t6119 = t6115 + t5447;
  t5616 = t1004*t5544;
  t6286 = t1632*t1666;
  t6292 = t757*t1704*t1723;
  t6293 = t6286 + t6292;
  t6337 = -1.*t1004*t6293;
  t6353 = t6337 + t5654;
  t5815 = t231*t1666*t1004;
  t5816 = -1.*t231*t1723*t1919;
  t5843 = t5815 + t5816;
  t5846 = -0.13205*t5843;
  t5919 = t5906*t2280;
  t5951 = -1.*t5906*t2227*t2663;
  t5958 = t369*t5906*t2872;
  t5959 = -1.*t2541*t5906*t2227;
  t5969 = -1.*t369*t5906*t2626;
  t5981 = t5959 + t5969;
  t5984 = 0.183*t5981;
  t5989 = t369*t2541*t5906;
  t6036 = -1.*t5906*t2227*t2626;
  t6061 = t5989 + t6036;
  t6062 = -0.3*t6061;
  t4010 = t2541*t3926;
  t6486 = -1.*t369*t3853;
  t6502 = -1.*t1632*t231*t2227;
  t6504 = t6486 + t6502;
  t6295 = -1.*t6293*t1919;
  t6296 = t5616 + t6295;
  t6625 = t231*t369*t757;
  t6645 = -1.*t6296*t2227;
  t6652 = t6625 + t6645;
  t6610 = -1.*t369*t6296;
  t6612 = t6610 + t2775;
  t6819 = -1.*t369*t1704;
  t6822 = -1.*t5843*t2227;
  t6824 = t6819 + t6822;
  t6781 = -1.*t369*t5843;
  t6794 = t1704*t2227;
  t6795 = t6781 + t6794;
  t4016 = -1.*t3996*t2626;
  t4019 = t4010 + t4016;
  t6560 = -1.*t3926*t2626;
  t6919 = 0.183*t2541;
  t6926 = -0.15*t2626;
  t6991 = t6919 + t6926;
  t7010 = 0.15*t2541;
  t7049 = t7010 + t2870;
  t6662 = t2541*t6652;
  t7202 = t369*t6296;
  t7204 = t231*t757*t2227;
  t7206 = t7202 + t7204;
  t6702 = -1.*t6652*t2626;
  t6833 = t2541*t6824;
  t7361 = t369*t5843;
  t7362 = -1.*t1704*t2227;
  t7366 = t7361 + t7362;
  t6881 = -1.*t6824*t2626;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1585*t1768 + t1870*t1948 - 0.13205*(t1870*t1919 + t2044) + t2164*t2280 + t2481*t2663 - 0.3*(t2481*t2626 + t2541*t2813) + 0.183*(t2481*t2541 - 1.*t2626*t2813) + t2813*t2872 - 1.*t231*t725*t757;
  p_output1[10]=t1585*t3351 + t1948*t3498 - 0.13205*(t1004*t3351 + t1919*t3498) + t2280*t3853 + t2663*t3926 + t2872*t3996 - 0.3*(t2626*t3926 + t2541*t3996) + 0.183*t4019 + t1632*t231*t725;
  p_output1[11]=0;
  p_output1[12]=t1585*t1632*t1723*t231 + t1632*t1666*t1948*t231 - 0.13205*(t1004*t1632*t1723*t231 + t1632*t1666*t1919*t231) + t2280*t4230 + t2663*t4264 + t2872*t4296 - 0.3*(t2626*t4264 + t2541*t4296) + 0.183*(t2541*t4264 - 1.*t2626*t4296) - 1.*t1632*t1704*t725;
  p_output1[13]=t2280*t4823 + t2663*t4856 + t2872*t4912 - 0.3*(t2626*t4856 + t2541*t4912) + 0.183*(t2541*t4856 - 1.*t2626*t4912) + t1585*t1723*t231*t757 + t1666*t1948*t231*t757 - 1.*t1704*t725*t757 - 0.13205*(t1004*t1723*t231*t757 + t1666*t1919*t231*t757);
  p_output1[14]=-1.*t1585*t1704*t1723 - 0.13205*(-1.*t1004*t1704*t1723 - 1.*t1666*t1704*t1919) - 1.*t1666*t1704*t1948 + t2280*t5123 + t2663*t5136 + t2872*t5222 - 0.3*(t2626*t5136 + t2541*t5222) + 0.183*(t2541*t5136 - 1.*t2626*t5222) - 1.*t231*t725;
  p_output1[15]=t1585*t3498 + t1948*t5368 - 0.13205*(t3800 + t1919*t5368) + t2280*t5461 - 1.*t2227*t2663*t5461 + t2872*t369*t5461 - 0.3*(-1.*t2227*t2626*t5461 + t2541*t369*t5461) + 0.183*(-1.*t2227*t2541*t5461 - 1.*t2626*t369*t5461);
  p_output1[16]=t1768*t1948 + t1585*t5544 - 0.13205*(t1768*t1919 + t5616) + t2280*t5655 - 1.*t2227*t2663*t5655 + t2872*t369*t5655 - 0.3*(-1.*t2227*t2626*t5655 + t2541*t369*t5655) + 0.183*(-1.*t2227*t2541*t5655 - 1.*t2626*t369*t5655);
  p_output1[17]=t1585*t1666*t231 - 1.*t1723*t1948*t231 + t5846 + t5919 + t5951 + t5958 + t5984 + t6062;
  p_output1[18]=-0.047*t1919*t3351 + 0.047*t1004*t3498 - 0.13205*t3853 + t2280*t6119 - 1.*t2227*t2663*t6119 + t2872*t369*t6119 - 0.3*(-1.*t2227*t2626*t6119 + t2541*t369*t6119) + 0.183*(-1.*t2227*t2541*t6119 - 1.*t2626*t369*t6119);
  p_output1[19]=0.047*t1004*t5544 - 0.047*t1919*t6293 - 0.13205*t6296 + t2280*t6353 - 1.*t2227*t2663*t6353 + t2872*t369*t6353 - 0.3*(-1.*t2227*t2626*t6353 + t2541*t369*t6353) + 0.183*(-1.*t2227*t2541*t6353 - 1.*t2626*t369*t6353);
  p_output1[20]=0.047*t1004*t1666*t231 - 0.047*t1723*t1919*t231 + t5846 + t5919 + t5951 + t5958 + t5984 + t6062;
  p_output1[21]=0.183*t1632*t2227*t231 + 0.183*t369*t3853 + t2872*t3926 + t2663*t6504 - 0.3*(t4010 + t2626*t6504) + 0.183*(t2541*t6504 + t6560);
  p_output1[22]=0.183*t369*t6296 + t2663*t6612 + t2872*t6652 - 0.3*(t2626*t6612 + t6662) + 0.183*(t2541*t6612 + t6702) + 0.183*t2227*t231*t757;
  p_output1[23]=-0.183*t1704*t2227 + 0.183*t369*t5843 + t2663*t6795 + t2872*t6824 - 0.3*(t2626*t6795 + t6833) + 0.183*(t2541*t6795 + t6881);
  p_output1[24]=-0.3*t4019 + 0.183*(-1.*t2541*t3996 + t6560) + t3996*t6991 + t3926*t7049;
  p_output1[25]=t6652*t7049 + t6991*t7206 + 0.183*(t6702 - 1.*t2541*t7206) - 0.3*(t6662 - 1.*t2626*t7206);
  p_output1[26]=t6824*t7049 + t6991*t7366 + 0.183*(t6881 - 1.*t2541*t7366) - 0.3*(t6833 - 1.*t2626*t7366);
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



void Jp_FRfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
