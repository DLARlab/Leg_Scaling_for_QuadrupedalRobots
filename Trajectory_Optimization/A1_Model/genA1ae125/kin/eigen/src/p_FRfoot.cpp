/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:04:41 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FRfoot.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE static inline        /* use standard inline */
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
static void output1(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  double t193;
  double t5609;
  double t5828;
  double t5768;
  double t5916;
  double t3134;
  double t5796;
  double t6017;
  double t6222;
  double t6654;
  double t6731;
  double t6736;
  double t6743;
  double t921;
  double t6793;
  double t6800;
  double t6805;
  double t635;
  double t6824;
  double t6917;
  double t6926;
  double t6928;
  double t6957;
  double t6985;
  double t6988;
  double t6989;
  double t6886;
  double t6887;
  double t6910;
  double t1058;
  double t1082;
  double t1407;
  double t1829;
  double t4515;
  double t4903;
  double t4925;
  double t4962;
  double t6744;
  double t6747;
  double t7056;
  double t7061;
  double t7062;
  double t7071;
  double t7075;
  double t7078;
  double t6860;
  double t6873;
  double t7147;
  double t7150;
  double t7155;
  double t6932;
  double t6978;
  double t6982;
  double t6992;
  double t6994;
  double t6995;
  double t7168;
  double t7169;
  double t7170;
  double t7158;
  double t7159;
  double t7166;
  double t7268;
  double t7272;
  double t7273;
  double t7286;
  double t7287;
  double t7289;
  double t7277;
  double t7279;
  double t7284;
  t193 = Cos(var1[3]);
  t5609 = Cos(var1[5]);
  t5828 = Sin(var1[4]);
  t5768 = Sin(var1[3]);
  t5916 = Sin(var1[5]);
  t3134 = Cos(var1[6]);
  t5796 = -1.*t5609*t5768;
  t6017 = t193*t5828*t5916;
  t6222 = t5796 + t6017;
  t6654 = t193*t5609*t5828;
  t6731 = t5768*t5916;
  t6736 = t6654 + t6731;
  t6743 = Sin(var1[6]);
  t921 = Cos(var1[7]);
  t6793 = t3134*t6736;
  t6800 = -1.*t6222*t6743;
  t6805 = t6793 + t6800;
  t635 = Cos(var1[4]);
  t6824 = Sin(var1[7]);
  t6917 = Cos(var1[8]);
  t6926 = -1.*t6917;
  t6928 = 1. + t6926;
  t6957 = Sin(var1[8]);
  t6985 = t193*t635*t921;
  t6988 = -1.*t6805*t6824;
  t6989 = t6985 + t6988;
  t6886 = t921*t6805;
  t6887 = t193*t635*t6824;
  t6910 = t6886 + t6887;
  t1058 = -1.*t921;
  t1082 = 1. + t1058;
  t1407 = 0.183*t1082;
  t1829 = 0. + t1407;
  t4515 = -1.*t3134;
  t4903 = 1. + t4515;
  t4925 = -0.047*t4903;
  t4962 = 0. + t4925;
  t6744 = 0.047*t6743;
  t6747 = 0. + t6744;
  t7056 = t193*t5609;
  t7061 = t5768*t5828*t5916;
  t7062 = t7056 + t7061;
  t7071 = t5609*t5768*t5828;
  t7075 = -1.*t193*t5916;
  t7078 = t7071 + t7075;
  t6860 = 0.183*t6824;
  t6873 = 0. + t6860;
  t7147 = t3134*t7078;
  t7150 = -1.*t7062*t6743;
  t7155 = t7147 + t7150;
  t6932 = -0.25*t6928;
  t6978 = 0.183*t6957;
  t6982 = 0. + t6932 + t6978;
  t6992 = 0.183*t6928;
  t6994 = 0.25*t6957;
  t6995 = 0. + t6992 + t6994;
  t7168 = t635*t921*t5768;
  t7169 = -1.*t7155*t6824;
  t7170 = t7168 + t7169;
  t7158 = t921*t7155;
  t7159 = t635*t5768*t6824;
  t7166 = t7158 + t7159;
  t7268 = t635*t5609*t3134;
  t7272 = -1.*t635*t5916*t6743;
  t7273 = t7268 + t7272;
  t7286 = -1.*t921*t5828;
  t7287 = -1.*t7273*t6824;
  t7289 = t7286 + t7287;
  t7277 = t921*t7273;
  t7279 = -1.*t5828*t6824;
  t7284 = t7277 + t7279;

  p_output1(0)=0. + t4962*t6222 + t1829*t193*t635 - 0.13205*(t3134*t6222 + t6736*t6743) + t6736*t6747 + t6805*t6873 + t6910*t6982 + 0.183*(-1.*t6910*t6957 + t6917*t6989) - 0.5*(t6910*t6917 + t6957*t6989) + t6989*t6995 + var1(0);
  p_output1(1)=0. + t1829*t5768*t635 + t4962*t7062 + t6747*t7078 - 0.13205*(t3134*t7062 + t6743*t7078) + t6873*t7155 + t6982*t7166 + t6995*t7170 + 0.183*(-1.*t6957*t7166 + t6917*t7170) - 0.5*(t6917*t7166 + t6957*t7170) + var1(1);
  p_output1(2)=0. - 1.*t1829*t5828 + t4962*t5916*t635 - 0.13205*(t3134*t5916*t635 + t5609*t635*t6743) + t5609*t635*t6747 + t6873*t7273 + t6982*t7284 + t6995*t7289 + 0.183*(-1.*t6957*t7284 + t6917*t7289) - 0.5*(t6917*t7284 + t6957*t7289) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_FRfoot(const Eigen::Matrix<double,18,1> &var1)
//void p_FRfoot(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



