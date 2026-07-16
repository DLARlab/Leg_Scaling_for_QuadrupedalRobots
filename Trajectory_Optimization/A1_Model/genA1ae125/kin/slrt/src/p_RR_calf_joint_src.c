/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:03:25 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RR_calf_joint_src.h"

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
  double t6700;
  double t6751;
  double t6756;
  double t6754;
  double t6759;
  double t6721;
  double t6755;
  double t6761;
  double t6777;
  double t6779;
  double t6799;
  double t6801;
  double t6805;
  double t6718;
  double t6819;
  double t3282;
  double t6822;
  double t6824;
  double t6825;
  double t6828;
  double t6829;
  double t6832;
  double t6836;
  double t6839;
  double t6841;
  double t6842;
  double t6852;
  double t6854;
  double t6855;
  double t6040;
  double t6372;
  double t6445;
  double t6677;
  double t6730;
  double t6734;
  double t6783;
  double t6791;
  double t6794;
  double t6797;
  double t6873;
  double t6875;
  double t6877;
  double t6879;
  double t6880;
  double t6881;
  double t6820;
  double t6821;
  double t6833;
  double t6837;
  double t6838;
  double t6898;
  double t6899;
  double t6900;
  double t6844;
  double t6847;
  double t6848;
  double t6903;
  double t6907;
  double t6908;
  double t6910;
  double t6913;
  double t6914;
  double t6936;
  double t6937;
  double t6938;
  double t6941;
  double t6942;
  double t6943;
  double t6947;
  double t6948;
  double t6949;
  t6700 = Cos(var1[3]);
  t6751 = Cos(var1[5]);
  t6756 = Sin(var1[3]);
  t6754 = Sin(var1[4]);
  t6759 = Sin(var1[5]);
  t6721 = Sin(var1[12]);
  t6755 = t6700*t6751*t6754;
  t6761 = t6756*t6759;
  t6777 = t6755 + t6761;
  t6779 = Cos(var1[12]);
  t6799 = -1.*t6751*t6756;
  t6801 = t6700*t6754*t6759;
  t6805 = t6799 + t6801;
  t6718 = Cos(var1[4]);
  t6819 = Sin(var1[13]);
  t3282 = Cos(var1[13]);
  t6822 = t6779*t6777;
  t6824 = -1.*t6721*t6805;
  t6825 = t6822 + t6824;
  t6828 = Cos(var1[14]);
  t6829 = -1.*t6828;
  t6832 = 1. + t6829;
  t6836 = Sin(var1[14]);
  t6839 = t6700*t6718*t6819;
  t6841 = t3282*t6825;
  t6842 = t6839 + t6841;
  t6852 = t3282*t6700*t6718;
  t6854 = -1.*t6819*t6825;
  t6855 = t6852 + t6854;
  t6040 = -1.*t3282;
  t6372 = 1. + t6040;
  t6445 = -0.183*t6372;
  t6677 = 0. + t6445;
  t6730 = 0.047*t6721;
  t6734 = 0. + t6730;
  t6783 = -1.*t6779;
  t6791 = 1. + t6783;
  t6794 = -0.047*t6791;
  t6797 = 0. + t6794;
  t6873 = t6751*t6756*t6754;
  t6875 = -1.*t6700*t6759;
  t6877 = t6873 + t6875;
  t6879 = t6700*t6751;
  t6880 = t6756*t6754*t6759;
  t6881 = t6879 + t6880;
  t6820 = -0.183*t6819;
  t6821 = 0. + t6820;
  t6833 = -0.25*t6832;
  t6837 = -0.183*t6836;
  t6838 = 0. + t6833 + t6837;
  t6898 = t6779*t6877;
  t6899 = -1.*t6721*t6881;
  t6900 = t6898 + t6899;
  t6844 = -0.183*t6832;
  t6847 = 0.25*t6836;
  t6848 = 0. + t6844 + t6847;
  t6903 = t6718*t6819*t6756;
  t6907 = t3282*t6900;
  t6908 = t6903 + t6907;
  t6910 = t3282*t6718*t6756;
  t6913 = -1.*t6819*t6900;
  t6914 = t6910 + t6913;
  t6936 = t6779*t6718*t6751;
  t6937 = -1.*t6718*t6721*t6759;
  t6938 = t6936 + t6937;
  t6941 = -1.*t6819*t6754;
  t6942 = t3282*t6938;
  t6943 = t6941 + t6942;
  t6947 = -1.*t3282*t6754;
  t6948 = -1.*t6819*t6938;
  t6949 = t6947 + t6948;
  p_output1[0]=0. + t6677*t6700*t6718 + t6734*t6777 + t6797*t6805 - 0.13205*(t6721*t6777 + t6779*t6805) + t6821*t6825 + t6838*t6842 + t6848*t6855 - 0.183*(-1.*t6836*t6842 + t6828*t6855) - 0.25*(t6828*t6842 + t6836*t6855) + var1[0];
  p_output1[1]=0. + t6677*t6718*t6756 + t6734*t6877 + t6797*t6881 - 0.13205*(t6721*t6877 + t6779*t6881) + t6821*t6900 + t6838*t6908 + t6848*t6914 - 0.183*(-1.*t6836*t6908 + t6828*t6914) - 0.25*(t6828*t6908 + t6836*t6914) + var1[1];
  p_output1[2]=0. + t6718*t6734*t6751 - 1.*t6677*t6754 - 0.13205*(t6718*t6721*t6751 + t6718*t6759*t6779) + t6718*t6759*t6797 + t6821*t6938 + t6838*t6943 + t6848*t6949 - 0.183*(-1.*t6836*t6943 + t6828*t6949) - 0.25*(t6828*t6943 + t6836*t6949) + var1[2];
}



void p_RR_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
