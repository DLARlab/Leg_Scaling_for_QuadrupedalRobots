/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:03:38 GMT-05:00
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
  double t580;
  double t1577;
  double t1600;
  double t1467;
  double t1624;
  double t764;
  double t1594;
  double t1787;
  double t2196;
  double t2499;
  double t2500;
  double t2518;
  double t2694;
  double t303;
  double t3053;
  double t3113;
  double t3129;
  double t299;
  double t3130;
  double t3284;
  double t3292;
  double t3294;
  double t3371;
  double t3478;
  double t3501;
  double t3536;
  double t3173;
  double t3228;
  double t3247;
  double t308;
  double t338;
  double t357;
  double t573;
  double t803;
  double t861;
  double t1209;
  double t1342;
  double t2708;
  double t2793;
  double t3784;
  double t3806;
  double t3811;
  double t3825;
  double t3833;
  double t3835;
  double t3149;
  double t3159;
  double t3870;
  double t3877;
  double t3917;
  double t3370;
  double t3427;
  double t3429;
  double t3575;
  double t3577;
  double t3582;
  double t3986;
  double t3989;
  double t3990;
  double t3923;
  double t3931;
  double t3938;
  double t5750;
  double t5842;
  double t5873;
  double t6760;
  double t6782;
  double t6796;
  double t5973;
  double t6232;
  double t6363;
  double t8341;
  double t8354;
  double t8357;
  double t8381;
  double t8382;
  double t8391;
  double t8361;
  double t8370;
  double t8375;
  double t8506;
  double t8507;
  double t8509;
  double t8517;
  double t8518;
  double t8527;
  double t8512;
  double t8513;
  double t8514;
  double t8558;
  double t8559;
  double t8560;
  double t8574;
  double t8575;
  double t8576;
  double t8593;
  double t8596;
  double t8597;
  double t2869;
  double t8607;
  double t8608;
  double t8649;
  double t8650;
  double t8651;
  double t8673;
  double t8674;
  double t8600;
  double t8689;
  double t8691;
  double t8694;
  double t8700;
  double t8702;
  double t8643;
  double t8644;
  double t8645;
  double t8646;
  double t8652;
  double t8653;
  double t8654;
  double t8655;
  double t8656;
  double t8657;
  double t8658;
  double t8659;
  double t8661;
  double t8662;
  double t8663;
  double t4028;
  double t8732;
  double t8734;
  double t8735;
  double t8696;
  double t8697;
  double t8753;
  double t8754;
  double t8755;
  double t8758;
  double t8759;
  double t8775;
  double t8776;
  double t8777;
  double t8782;
  double t8783;
  double t8784;
  double t4105;
  double t4121;
  double t8747;
  double t8798;
  double t8799;
  double t8802;
  double t8805;
  double t8807;
  double t8761;
  double t8814;
  double t8817;
  double t8819;
  double t8767;
  double t8786;
  double t8831;
  double t8832;
  double t8833;
  double t8792;
  t580 = Sin(var1[3]);
  t1577 = Cos(var1[5]);
  t1600 = Sin(var1[4]);
  t1467 = Cos(var1[3]);
  t1624 = Sin(var1[5]);
  t764 = Cos(var1[6]);
  t1594 = -1.*t1467*t1577;
  t1787 = -1.*t580*t1600*t1624;
  t2196 = t1594 + t1787;
  t2499 = -1.*t1577*t580*t1600;
  t2500 = t1467*t1624;
  t2518 = t2499 + t2500;
  t2694 = Sin(var1[6]);
  t303 = Cos(var1[7]);
  t3053 = t764*t2518;
  t3113 = -1.*t2196*t2694;
  t3129 = t3053 + t3113;
  t299 = Cos(var1[4]);
  t3130 = Sin(var1[7]);
  t3284 = Cos(var1[8]);
  t3292 = -1.*t3284;
  t3294 = 1. + t3292;
  t3371 = Sin(var1[8]);
  t3478 = -1.*t299*t303*t580;
  t3501 = -1.*t3129*t3130;
  t3536 = t3478 + t3501;
  t3173 = t303*t3129;
  t3228 = -1.*t299*t580*t3130;
  t3247 = t3173 + t3228;
  t308 = -1.*t303;
  t338 = 1. + t308;
  t357 = 0.183*t338;
  t573 = 0. + t357;
  t803 = -1.*t764;
  t861 = 1. + t803;
  t1209 = -0.047*t861;
  t1342 = 0. + t1209;
  t2708 = 0.047*t2694;
  t2793 = 0. + t2708;
  t3784 = -1.*t1577*t580;
  t3806 = t1467*t1600*t1624;
  t3811 = t3784 + t3806;
  t3825 = t1467*t1577*t1600;
  t3833 = t580*t1624;
  t3835 = t3825 + t3833;
  t3149 = 0.183*t3130;
  t3159 = 0. + t3149;
  t3870 = t764*t3835;
  t3877 = -1.*t3811*t2694;
  t3917 = t3870 + t3877;
  t3370 = -0.25*t3294;
  t3427 = 0.183*t3371;
  t3429 = 0. + t3370 + t3427;
  t3575 = 0.183*t3294;
  t3577 = 0.25*t3371;
  t3582 = 0. + t3575 + t3577;
  t3986 = t1467*t299*t303;
  t3989 = -1.*t3917*t3130;
  t3990 = t3986 + t3989;
  t3923 = t303*t3917;
  t3931 = t1467*t299*t3130;
  t3938 = t3923 + t3931;
  t5750 = t1467*t299*t1577*t764;
  t5842 = -1.*t1467*t299*t1624*t2694;
  t5873 = t5750 + t5842;
  t6760 = -1.*t1467*t303*t1600;
  t6782 = -1.*t5873*t3130;
  t6796 = t6760 + t6782;
  t5973 = t303*t5873;
  t6232 = -1.*t1467*t1600*t3130;
  t6363 = t5973 + t6232;
  t8341 = t299*t1577*t764*t580;
  t8354 = -1.*t299*t580*t1624*t2694;
  t8357 = t8341 + t8354;
  t8381 = -1.*t303*t580*t1600;
  t8382 = -1.*t8357*t3130;
  t8391 = t8381 + t8382;
  t8361 = t303*t8357;
  t8370 = -1.*t580*t1600*t3130;
  t8375 = t8361 + t8370;
  t8506 = -1.*t1577*t764*t1600;
  t8507 = t1600*t1624*t2694;
  t8509 = t8506 + t8507;
  t8517 = -1.*t299*t303;
  t8518 = -1.*t8509*t3130;
  t8527 = t8517 + t8518;
  t8512 = t303*t8509;
  t8513 = -1.*t299*t3130;
  t8514 = t8512 + t8513;
  t8558 = t1577*t580;
  t8559 = -1.*t1467*t1600*t1624;
  t8560 = t8558 + t8559;
  t8574 = t764*t8560;
  t8575 = -1.*t3835*t2694;
  t8576 = t8574 + t8575;
  t8593 = t1577*t580*t1600;
  t8596 = -1.*t1467*t1624;
  t8597 = t8593 + t8596;
  t2869 = t764*t2196;
  t8607 = -1.*t8597*t2694;
  t8608 = t2869 + t8607;
  t8649 = -1.*t299*t764*t1624;
  t8650 = -1.*t299*t1577*t2694;
  t8651 = t8649 + t8650;
  t8673 = -1.*t764*t3811;
  t8674 = t8673 + t8575;
  t8600 = t764*t8597;
  t8689 = t1467*t1577;
  t8691 = t580*t1600*t1624;
  t8694 = t8689 + t8691;
  t8700 = -1.*t764*t8694;
  t8702 = t8700 + t8607;
  t8643 = t299*t1577*t764;
  t8644 = -1.*t299*t1624*t2694;
  t8645 = t8643 + t8644;
  t8646 = -0.13205*t8645;
  t8652 = t8651*t3159;
  t8653 = t303*t8651*t3429;
  t8654 = -1.*t8651*t3130*t3582;
  t8655 = -1.*t3284*t8651*t3130;
  t8656 = -1.*t303*t8651*t3371;
  t8657 = t8655 + t8656;
  t8658 = 0.183*t8657;
  t8659 = t303*t3284*t8651;
  t8661 = -1.*t8651*t3130*t3371;
  t8662 = t8659 + t8661;
  t8663 = -0.5*t8662;
  t4028 = t3284*t3990;
  t8732 = -1.*t303*t3917;
  t8734 = -1.*t1467*t299*t3130;
  t8735 = t8732 + t8734;
  t8696 = -1.*t8694*t2694;
  t8697 = t8600 + t8696;
  t8753 = t299*t303*t580;
  t8754 = -1.*t8697*t3130;
  t8755 = t8753 + t8754;
  t8758 = -1.*t303*t8697;
  t8759 = t8758 + t3228;
  t8775 = -1.*t303*t1600;
  t8776 = -1.*t8645*t3130;
  t8777 = t8775 + t8776;
  t8782 = -1.*t303*t8645;
  t8783 = t1600*t3130;
  t8784 = t8782 + t8783;
  t4105 = -1.*t3938*t3371;
  t4121 = t4028 + t4105;
  t8747 = -1.*t3990*t3371;
  t8798 = 0.183*t3284;
  t8799 = -0.25*t3371;
  t8802 = t8798 + t8799;
  t8805 = 0.25*t3284;
  t8807 = t8805 + t3427;
  t8761 = t3284*t8755;
  t8814 = t303*t8697;
  t8817 = t299*t580*t3130;
  t8819 = t8814 + t8817;
  t8767 = -1.*t8755*t3371;
  t8786 = t3284*t8777;
  t8831 = t303*t8645;
  t8832 = -1.*t1600*t3130;
  t8833 = t8831 + t8832;
  t8792 = -1.*t8777*t3371;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1342*t2196 + t2518*t2793 - 0.13205*(t2518*t2694 + t2869) + t3129*t3159 + t3247*t3429 + 0.183*(-1.*t3247*t3371 + t3284*t3536) - 0.5*(t3247*t3284 + t3371*t3536) + t3536*t3582 - 1.*t299*t573*t580;
  p_output1[10]=t1342*t3811 + t2793*t3835 + t3159*t3917 + t3429*t3938 + t3582*t3990 - 0.5*(t3284*t3938 + t3371*t3990) + 0.183*t4121 + t1467*t299*t573 - 0.13205*(t2694*t3835 + t3811*t764);
  p_output1[11]=0;
  p_output1[12]=t1342*t1467*t1624*t299 + t1467*t1577*t2793*t299 - 1.*t1467*t1600*t573 + t3159*t5873 + t3429*t6363 + t3582*t6796 + 0.183*(-1.*t3371*t6363 + t3284*t6796) - 0.5*(t3284*t6363 + t3371*t6796) - 0.13205*(t1467*t1577*t2694*t299 + t1467*t1624*t299*t764);
  p_output1[13]=t1342*t1624*t299*t580 + t1577*t2793*t299*t580 - 1.*t1600*t573*t580 - 0.13205*(t1577*t2694*t299*t580 + t1624*t299*t580*t764) + t3159*t8357 + t3429*t8375 + t3582*t8391 + 0.183*(-1.*t3371*t8375 + t3284*t8391) - 0.5*(t3284*t8375 + t3371*t8391);
  p_output1[14]=-1.*t1342*t1600*t1624 - 1.*t1577*t1600*t2793 - 1.*t299*t573 - 0.13205*(-1.*t1577*t1600*t2694 - 1.*t1600*t1624*t764) + t3159*t8509 + t3429*t8514 + t3582*t8527 + 0.183*(-1.*t3371*t8514 + t3284*t8527) - 0.5*(t3284*t8514 + t3371*t8527);
  p_output1[15]=t1342*t3835 + t2793*t8560 - 0.13205*(t3870 + t2694*t8560) + t3159*t8576 + t303*t3429*t8576 - 1.*t3130*t3582*t8576 + 0.183*(-1.*t3130*t3284*t8576 - 1.*t303*t3371*t8576) - 0.5*(t303*t3284*t8576 - 1.*t3130*t3371*t8576);
  p_output1[16]=t2196*t2793 + t1342*t8597 - 0.13205*(t2196*t2694 + t8600) + t3159*t8608 + t303*t3429*t8608 - 1.*t3130*t3582*t8608 + 0.183*(-1.*t3130*t3284*t8608 - 1.*t303*t3371*t8608) - 0.5*(t303*t3284*t8608 - 1.*t3130*t3371*t8608);
  p_output1[17]=t1342*t1577*t299 - 1.*t1624*t2793*t299 + t8646 + t8652 + t8653 + t8654 + t8658 + t8663;
  p_output1[18]=-0.047*t2694*t3811 - 0.13205*t3917 + 0.047*t3835*t764 + t3159*t8674 + t303*t3429*t8674 - 1.*t3130*t3582*t8674 + 0.183*(-1.*t3130*t3284*t8674 - 1.*t303*t3371*t8674) - 0.5*(t303*t3284*t8674 - 1.*t3130*t3371*t8674);
  p_output1[19]=0.047*t764*t8597 - 0.047*t2694*t8694 - 0.13205*t8697 + t3159*t8702 + t303*t3429*t8702 - 1.*t3130*t3582*t8702 + 0.183*(-1.*t3130*t3284*t8702 - 1.*t303*t3371*t8702) - 0.5*(t303*t3284*t8702 - 1.*t3130*t3371*t8702);
  p_output1[20]=-0.047*t1624*t2694*t299 + 0.047*t1577*t299*t764 + t8646 + t8652 + t8653 + t8654 + t8658 + t8663;
  p_output1[21]=0.183*t1467*t299*t3130 + 0.183*t303*t3917 + t3429*t3990 + t3582*t8735 - 0.5*(t4028 + t3371*t8735) + 0.183*(t3284*t8735 + t8747);
  p_output1[22]=0.183*t299*t3130*t580 + 0.183*t303*t8697 + t3429*t8755 + t3582*t8759 - 0.5*(t3371*t8759 + t8761) + 0.183*(t3284*t8759 + t8767);
  p_output1[23]=-0.183*t1600*t3130 + 0.183*t303*t8645 + t3429*t8777 + t3582*t8784 - 0.5*(t3371*t8784 + t8786) + 0.183*(t3284*t8784 + t8792);
  p_output1[24]=-0.5*t4121 + 0.183*(-1.*t3284*t3938 + t8747) + t3938*t8802 + t3990*t8807;
  p_output1[25]=t8755*t8807 + t8802*t8819 + 0.183*(t8767 - 1.*t3284*t8819) - 0.5*(t8761 - 1.*t3371*t8819);
  p_output1[26]=t8777*t8807 + t8802*t8833 + 0.183*(t8792 - 1.*t3284*t8833) - 0.5*(t8786 - 1.*t3371*t8833);
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
