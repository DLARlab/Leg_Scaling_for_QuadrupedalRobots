/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:13:11 GMT-05:00
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
  double t53;
  double t760;
  double t1115;
  double t850;
  double t1158;
  double t64;
  double t57;
  double t60;
  double t630;
  double t890;
  double t1203;
  double t1563;
  double t2235;
  double t2768;
  double t3019;
  double t3137;
  double t3168;
  double t3169;
  double t3274;
  double t49;
  double t3723;
  double t3896;
  double t3897;
  double t3901;
  double t3908;
  double t3942;
  double t4968;
  double t6750;
  double t6758;
  double t6779;
  double t6822;
  double t6825;
  double t6829;
  double t62;
  double t3275;
  double t3279;
  double t3801;
  double t3804;
  double t3807;
  double t3893;
  double t6782;
  double t6786;
  double t6811;
  double t6812;
  double t6813;
  double t6820;
  double t6833;
  double t6837;
  double t6846;
  double t6850;
  double t6859;
  double t6871;
  double t6872;
  double t6873;
  double t6957;
  double t6961;
  double t3552;
  double t3808;
  double t3878;
  double t6900;
  double t6903;
  double t6904;
  double t6920;
  double t6922;
  double t6927;
  double t6939;
  double t6944;
  double t6945;
  double t6947;
  double t6948;
  double t6949;
  double t6950;
  double t6883;
  double t6890;
  double t6892;
  double t6953;
  double t6954;
  double t6963;
  double t6965;
  double t6972;
  double t6976;
  double t6984;
  double t6985;
  double t6806;
  double t6815;
  double t6816;
  double t6907;
  double t6909;
  double t6911;
  double t6894;
  double t6898;
  double t6899;
  double t6838;
  double t6866;
  double t6868;
  double t6915;
  double t6916;
  double t6917;
  t53 = Cos(var1[3]);
  t760 = Cos(var1[5]);
  t1115 = Sin(var1[3]);
  t850 = Sin(var1[4]);
  t1158 = Sin(var1[5]);
  t64 = Cos(var1[13]);
  t57 = Cos(var1[4]);
  t60 = Sin(var1[13]);
  t630 = Cos(var1[12]);
  t890 = t53*t760*t850;
  t1203 = t1115*t1158;
  t1563 = t890 + t1203;
  t2235 = t630*t1563;
  t2768 = Sin(var1[12]);
  t3019 = -1.*t760*t1115;
  t3137 = t53*t850*t1158;
  t3168 = t3019 + t3137;
  t3169 = -1.*t2768*t3168;
  t3274 = t2235 + t3169;
  t49 = Sin(var1[14]);
  t3723 = Cos(var1[14]);
  t3896 = t760*t1115*t850;
  t3897 = -1.*t53*t1158;
  t3901 = t3896 + t3897;
  t3908 = t630*t3901;
  t3942 = t53*t760;
  t4968 = t1115*t850*t1158;
  t6750 = t3942 + t4968;
  t6758 = -1.*t2768*t6750;
  t6779 = t3908 + t6758;
  t6822 = t630*t57*t760;
  t6825 = -1.*t57*t2768*t1158;
  t6829 = t6822 + t6825;
  t62 = t53*t57*t60;
  t3275 = t64*t3274;
  t3279 = t62 + t3275;
  t3801 = t64*t53*t57;
  t3804 = -1.*t60*t3274;
  t3807 = t3801 + t3804;
  t3893 = t57*t60*t1115;
  t6782 = t64*t6779;
  t6786 = t3893 + t6782;
  t6811 = t64*t57*t1115;
  t6812 = -1.*t60*t6779;
  t6813 = t6811 + t6812;
  t6820 = -1.*t60*t850;
  t6833 = t64*t6829;
  t6837 = t6820 + t6833;
  t6846 = -1.*t64*t850;
  t6850 = -1.*t60*t6829;
  t6859 = t6846 + t6850;
  t6871 = t2768*t1563;
  t6872 = t630*t3168;
  t6873 = t6871 + t6872;
  t6957 = -1.*t3723;
  t6961 = 1. + t6957;
  t3552 = -1.*t49*t3279;
  t3808 = t3723*t3807;
  t3878 = t3552 + t3808;
  t6900 = t3723*t3279;
  t6903 = t49*t3807;
  t6904 = t6900 + t6903;
  t6920 = -1.*t64;
  t6922 = 1. + t6920;
  t6927 = -0.183*t6922;
  t6939 = 0. + t6927;
  t6944 = 0.047*t2768;
  t6945 = 0. + t6944;
  t6947 = -1.*t630;
  t6948 = 1. + t6947;
  t6949 = -0.047*t6948;
  t6950 = 0. + t6949;
  t6883 = t2768*t3901;
  t6890 = t630*t6750;
  t6892 = t6883 + t6890;
  t6953 = -0.183*t60;
  t6954 = 0. + t6953;
  t6963 = -0.1*t6961;
  t6965 = -0.183*t49;
  t6972 = 0. + t6963 + t6965;
  t6976 = -0.183*t6961;
  t6984 = 0.1*t49;
  t6985 = 0. + t6976 + t6984;
  t6806 = -1.*t49*t6786;
  t6815 = t3723*t6813;
  t6816 = t6806 + t6815;
  t6907 = t3723*t6786;
  t6909 = t49*t6813;
  t6911 = t6907 + t6909;
  t6894 = t57*t760*t2768;
  t6898 = t630*t57*t1158;
  t6899 = t6894 + t6898;
  t6838 = -1.*t49*t6837;
  t6866 = t3723*t6859;
  t6868 = t6838 + t6866;
  t6915 = t3723*t6837;
  t6916 = t49*t6859;
  t6917 = t6915 + t6916;
  p_output1[0]=t3878;
  p_output1[1]=t6816;
  p_output1[2]=t6868;
  p_output1[3]=0.;
  p_output1[4]=t6873;
  p_output1[5]=t6892;
  p_output1[6]=t6899;
  p_output1[7]=0.;
  p_output1[8]=t6904;
  p_output1[9]=t6911;
  p_output1[10]=t6917;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.183*t3878 - 0.08953*t6873 - 0.2*t6904 + t53*t57*t6939 + t1563*t6945 + t3168*t6950 + t3274*t6954 + t3279*t6972 + t3807*t6985 + var1[0];
  p_output1[13]=0. - 0.183*t6816 - 0.08953*t6892 - 0.2*t6911 + t1115*t57*t6939 + t3901*t6945 + t6750*t6950 + t6779*t6954 + t6786*t6972 + t6813*t6985 + var1[1];
  p_output1[14]=0. - 0.183*t6868 - 0.08953*t6899 - 0.2*t6917 + t1158*t57*t6950 + t6829*t6954 + t6837*t6972 + t6859*t6985 + t57*t6945*t760 - 1.*t6939*t850 + var1[2];
  p_output1[15]=1.;
}



void H_RRfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
