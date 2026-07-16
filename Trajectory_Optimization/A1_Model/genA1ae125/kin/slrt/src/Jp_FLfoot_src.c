/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:03:41 GMT-05:00
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
  double t665;
  double t1037;
  double t985;
  double t997;
  double t1040;
  double t828;
  double t1021;
  double t1043;
  double t1044;
  double t1047;
  double t1057;
  double t1059;
  double t1061;
  double t543;
  double t1416;
  double t90;
  double t1862;
  double t1919;
  double t1992;
  double t2313;
  double t2364;
  double t2411;
  double t2497;
  double t3382;
  double t3390;
  double t3609;
  double t4261;
  double t4564;
  double t4643;
  double t127;
  double t135;
  double t333;
  double t342;
  double t924;
  double t950;
  double t1048;
  double t1052;
  double t1055;
  double t1056;
  double t5454;
  double t5460;
  double t5535;
  double t5774;
  double t5856;
  double t5890;
  double t1514;
  double t1806;
  double t2486;
  double t2573;
  double t3265;
  double t7534;
  double t7602;
  double t7609;
  double t3786;
  double t4094;
  double t4211;
  double t7838;
  double t7853;
  double t7861;
  double t7985;
  double t8197;
  double t8212;
  double t8636;
  double t8687;
  double t8688;
  double t8691;
  double t8703;
  double t8707;
  double t8716;
  double t8721;
  double t8723;
  double t8809;
  double t8811;
  double t8812;
  double t8814;
  double t8820;
  double t8822;
  double t8830;
  double t8835;
  double t8840;
  double t8868;
  double t8873;
  double t8875;
  double t8885;
  double t8886;
  double t8887;
  double t8889;
  double t8890;
  double t8892;
  double t8911;
  double t8914;
  double t8917;
  double t8923;
  double t8926;
  double t8928;
  double t8953;
  double t8954;
  double t8956;
  double t1177;
  double t8959;
  double t8960;
  double t8989;
  double t8990;
  double t8991;
  double t9032;
  double t9033;
  double t9054;
  double t9055;
  double t9056;
  double t9059;
  double t9060;
  double t8965;
  double t8992;
  double t8993;
  double t8994;
  double t8995;
  double t9004;
  double t9011;
  double t9014;
  double t9016;
  double t9018;
  double t9019;
  double t9020;
  double t9025;
  double t9026;
  double t9027;
  double t9028;
  double t9090;
  double t9093;
  double t9094;
  double t8553;
  double t9065;
  double t9067;
  double t9114;
  double t9117;
  double t9119;
  double t9121;
  double t9122;
  double t9138;
  double t9139;
  double t9140;
  double t9144;
  double t9145;
  double t9146;
  double t8548;
  double t8554;
  double t9103;
  double t9160;
  double t9161;
  double t9163;
  double t9166;
  double t9169;
  double t9178;
  double t9179;
  double t9181;
  double t9125;
  double t9129;
  double t9194;
  double t9195;
  double t9196;
  double t9149;
  double t9156;
  t665 = Sin(var1[3]);
  t1037 = Cos(var1[3]);
  t985 = Cos(var1[5]);
  t997 = Sin(var1[4]);
  t1040 = Sin(var1[5]);
  t828 = Sin(var1[9]);
  t1021 = -1.*t985*t665*t997;
  t1043 = t1037*t1040;
  t1044 = t1021 + t1043;
  t1047 = Cos(var1[9]);
  t1057 = -1.*t1037*t985;
  t1059 = -1.*t665*t997*t1040;
  t1061 = t1057 + t1059;
  t543 = Cos(var1[4]);
  t1416 = Sin(var1[10]);
  t90 = Cos(var1[10]);
  t1862 = t1047*t1044;
  t1919 = -1.*t828*t1061;
  t1992 = t1862 + t1919;
  t2313 = Cos(var1[11]);
  t2364 = -1.*t2313;
  t2411 = 1. + t2364;
  t2497 = Sin(var1[11]);
  t3382 = -1.*t543*t1416*t665;
  t3390 = t90*t1992;
  t3609 = t3382 + t3390;
  t4261 = -1.*t90*t543*t665;
  t4564 = -1.*t1416*t1992;
  t4643 = t4261 + t4564;
  t127 = -1.*t90;
  t135 = 1. + t127;
  t333 = 0.183*t135;
  t342 = 0. + t333;
  t924 = -0.047*t828;
  t950 = 0. + t924;
  t1048 = -1.*t1047;
  t1052 = 1. + t1048;
  t1055 = 0.047*t1052;
  t1056 = 0. + t1055;
  t5454 = t1037*t985*t997;
  t5460 = t665*t1040;
  t5535 = t5454 + t5460;
  t5774 = -1.*t985*t665;
  t5856 = t1037*t997*t1040;
  t5890 = t5774 + t5856;
  t1514 = 0.183*t1416;
  t1806 = 0. + t1514;
  t2486 = -0.25*t2411;
  t2573 = 0.183*t2497;
  t3265 = 0. + t2486 + t2573;
  t7534 = t1047*t5535;
  t7602 = -1.*t828*t5890;
  t7609 = t7534 + t7602;
  t3786 = 0.183*t2411;
  t4094 = 0.25*t2497;
  t4211 = 0. + t3786 + t4094;
  t7838 = t1037*t543*t1416;
  t7853 = t90*t7609;
  t7861 = t7838 + t7853;
  t7985 = t90*t1037*t543;
  t8197 = -1.*t1416*t7609;
  t8212 = t7985 + t8197;
  t8636 = t1047*t1037*t543*t985;
  t8687 = -1.*t1037*t543*t828*t1040;
  t8688 = t8636 + t8687;
  t8691 = -1.*t1037*t1416*t997;
  t8703 = t90*t8688;
  t8707 = t8691 + t8703;
  t8716 = -1.*t90*t1037*t997;
  t8721 = -1.*t1416*t8688;
  t8723 = t8716 + t8721;
  t8809 = t1047*t543*t985*t665;
  t8811 = -1.*t543*t828*t665*t1040;
  t8812 = t8809 + t8811;
  t8814 = -1.*t1416*t665*t997;
  t8820 = t90*t8812;
  t8822 = t8814 + t8820;
  t8830 = -1.*t90*t665*t997;
  t8835 = -1.*t1416*t8812;
  t8840 = t8830 + t8835;
  t8868 = -1.*t1047*t985*t997;
  t8873 = t828*t997*t1040;
  t8875 = t8868 + t8873;
  t8885 = -1.*t543*t1416;
  t8886 = t90*t8875;
  t8887 = t8885 + t8886;
  t8889 = -1.*t90*t543;
  t8890 = -1.*t1416*t8875;
  t8892 = t8889 + t8890;
  t8911 = t985*t665;
  t8914 = -1.*t1037*t997*t1040;
  t8917 = t8911 + t8914;
  t8923 = -1.*t828*t5535;
  t8926 = t1047*t8917;
  t8928 = t8923 + t8926;
  t8953 = t985*t665*t997;
  t8954 = -1.*t1037*t1040;
  t8956 = t8953 + t8954;
  t1177 = t1047*t1061;
  t8959 = -1.*t828*t8956;
  t8960 = t8959 + t1177;
  t8989 = -1.*t543*t985*t828;
  t8990 = -1.*t1047*t543*t1040;
  t8991 = t8989 + t8990;
  t9032 = -1.*t1047*t5890;
  t9033 = t8923 + t9032;
  t9054 = t1037*t985;
  t9055 = t665*t997*t1040;
  t9056 = t9054 + t9055;
  t9059 = -1.*t1047*t9056;
  t9060 = t8959 + t9059;
  t8965 = t1047*t8956;
  t8992 = t1806*t8991;
  t8993 = t90*t3265*t8991;
  t8994 = -1.*t1416*t4211*t8991;
  t8995 = t1047*t543*t985;
  t9004 = -1.*t543*t828*t1040;
  t9011 = t8995 + t9004;
  t9014 = 0.13205*t9011;
  t9016 = -1.*t2313*t1416*t8991;
  t9018 = -1.*t90*t2497*t8991;
  t9019 = t9016 + t9018;
  t9020 = 0.183*t9019;
  t9025 = t90*t2313*t8991;
  t9026 = -1.*t1416*t2497*t8991;
  t9027 = t9025 + t9026;
  t9028 = -0.5*t9027;
  t9090 = -1.*t1037*t543*t1416;
  t9093 = -1.*t90*t7609;
  t9094 = t9090 + t9093;
  t8553 = t2313*t8212;
  t9065 = -1.*t828*t9056;
  t9067 = t8965 + t9065;
  t9114 = -1.*t90*t9067;
  t9117 = t3382 + t9114;
  t9119 = t90*t543*t665;
  t9121 = -1.*t1416*t9067;
  t9122 = t9119 + t9121;
  t9138 = t1416*t997;
  t9139 = -1.*t90*t9011;
  t9140 = t9138 + t9139;
  t9144 = -1.*t90*t997;
  t9145 = -1.*t1416*t9011;
  t9146 = t9144 + t9145;
  t8548 = -1.*t2497*t7861;
  t8554 = t8548 + t8553;
  t9103 = -1.*t2497*t8212;
  t9160 = 0.183*t2313;
  t9161 = -0.25*t2497;
  t9163 = t9160 + t9161;
  t9166 = 0.25*t2313;
  t9169 = t9166 + t2573;
  t9178 = t543*t1416*t665;
  t9179 = t90*t9067;
  t9181 = t9178 + t9179;
  t9125 = t2313*t9122;
  t9129 = -1.*t2497*t9122;
  t9194 = -1.*t1416*t997;
  t9195 = t90*t9011;
  t9196 = t9194 + t9195;
  t9149 = t2313*t9146;
  t9156 = -1.*t2497*t9146;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1056*t1061 + t1806*t1992 + t3265*t3609 + t4211*t4643 + 0.183*(-1.*t2497*t3609 + t2313*t4643) - 0.5*(t2313*t3609 + t2497*t4643) - 1.*t342*t543*t665 + 0.13205*(t1177 + t1044*t828) + t1044*t950;
  p_output1[10]=t1037*t342*t543 + t1056*t5890 + t1806*t7609 + t3265*t7861 + t4211*t8212 - 0.5*(t2313*t7861 + t2497*t8212) + 0.13205*(t1047*t5890 + t5535*t828) + 0.183*t8554 + t5535*t950;
  p_output1[11]=0;
  p_output1[12]=t1037*t1040*t1056*t543 + t1806*t8688 + t3265*t8707 + t4211*t8723 + 0.183*(-1.*t2497*t8707 + t2313*t8723) - 0.5*(t2313*t8707 + t2497*t8723) + t1037*t543*t950*t985 + 0.13205*(t1037*t1040*t1047*t543 + t1037*t543*t828*t985) - 1.*t1037*t342*t997;
  p_output1[13]=t1040*t1056*t543*t665 + t1806*t8812 + t3265*t8822 + t4211*t8840 + 0.183*(-1.*t2497*t8822 + t2313*t8840) - 0.5*(t2313*t8822 + t2497*t8840) + t543*t665*t950*t985 + 0.13205*(t1040*t1047*t543*t665 + t543*t665*t828*t985) - 1.*t342*t665*t997;
  p_output1[14]=-1.*t342*t543 + t1806*t8875 + t3265*t8887 + t4211*t8892 + 0.183*(-1.*t2497*t8887 + t2313*t8892) - 0.5*(t2313*t8887 + t2497*t8892) - 1.*t1040*t1056*t997 - 1.*t950*t985*t997 + 0.13205*(-1.*t1040*t1047*t997 - 1.*t828*t985*t997);
  p_output1[15]=t1056*t5535 + 0.13205*(t7534 + t828*t8917) + t1806*t8928 - 1.*t1416*t4211*t8928 + t3265*t8928*t90 - 0.5*(-1.*t1416*t2497*t8928 + t2313*t8928*t90) + 0.183*(-1.*t1416*t2313*t8928 - 1.*t2497*t8928*t90) + t8917*t950;
  p_output1[16]=t1056*t8956 + t1806*t8960 - 1.*t1416*t4211*t8960 + 0.13205*(t1061*t828 + t8965) + t3265*t8960*t90 - 0.5*(-1.*t1416*t2497*t8960 + t2313*t8960*t90) + 0.183*(-1.*t1416*t2313*t8960 - 1.*t2497*t8960*t90) + t1061*t950;
  p_output1[17]=t8992 + t8993 + t8994 + t9014 + t9020 + t9028 - 1.*t1040*t543*t950 + t1056*t543*t985;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=-0.047*t1047*t5535 + 0.13205*t7609 + 0.047*t5890*t828 + t1806*t9033 - 1.*t1416*t4211*t9033 + t3265*t90*t9033 - 0.5*(-1.*t1416*t2497*t9033 + t2313*t90*t9033) + 0.183*(-1.*t1416*t2313*t9033 - 1.*t2497*t90*t9033);
  p_output1[28]=-0.047*t1047*t8956 + 0.047*t828*t9056 + t1806*t9060 - 1.*t1416*t4211*t9060 + t3265*t90*t9060 - 0.5*(-1.*t1416*t2497*t9060 + t2313*t90*t9060) + 0.183*(-1.*t1416*t2313*t9060 - 1.*t2497*t90*t9060) + 0.13205*t9067;
  p_output1[29]=0.047*t1040*t543*t828 + t8992 + t8993 + t8994 + t9014 + t9020 + t9028 - 0.047*t1047*t543*t985;
  p_output1[30]=0.183*t1037*t1416*t543 + t3265*t8212 + 0.183*t7609*t90 + t4211*t9094 - 0.5*(t8553 + t2497*t9094) + 0.183*(t2313*t9094 + t9103);
  p_output1[31]=0.183*t1416*t543*t665 + 0.183*t90*t9067 + t4211*t9117 + t3265*t9122 - 0.5*(t2497*t9117 + t9125) + 0.183*(t2313*t9117 + t9129);
  p_output1[32]=0.183*t90*t9011 + t4211*t9140 + t3265*t9146 - 0.5*(t2497*t9140 + t9149) + 0.183*(t2313*t9140 + t9156) - 0.183*t1416*t997;
  p_output1[33]=-0.5*t8554 + 0.183*(-1.*t2313*t7861 + t9103) + t7861*t9163 + t8212*t9169;
  p_output1[34]=t9122*t9169 + t9163*t9181 + 0.183*(t9129 - 1.*t2313*t9181) - 0.5*(t9125 - 1.*t2497*t9181);
  p_output1[35]=t9146*t9169 + t9163*t9196 + 0.183*(t9156 - 1.*t2313*t9196) - 0.5*(t9149 - 1.*t2497*t9196);
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
