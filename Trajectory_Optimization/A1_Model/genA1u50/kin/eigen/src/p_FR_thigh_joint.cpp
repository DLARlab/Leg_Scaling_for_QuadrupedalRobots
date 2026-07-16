/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:13:33 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FR_thigh_joint.h"

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
  double t181;
  double t7942;
  double t7949;
  double t7945;
  double t7950;
  double t3863;
  double t7948;
  double t7952;
  double t7953;
  double t7955;
  double t7956;
  double t7957;
  double t7959;
  double t889;
  double t917;
  double t7970;
  double t7971;
  double t7972;
  double t7973;
  double t1060;
  double t1433;
  double t1553;
  double t3653;
  double t5340;
  double t7895;
  double t7928;
  double t7934;
  double t7960;
  double t7964;
  double t7985;
  double t7988;
  double t7989;
  double t7991;
  double t7992;
  double t7993;
  double t7974;
  double t7976;
  double t7999;
  double t8000;
  double t8001;
  double t8017;
  double t8018;
  double t8019;
  t181 = Cos(var1[3]);
  t7942 = Cos(var1[5]);
  t7949 = Sin(var1[4]);
  t7945 = Sin(var1[3]);
  t7950 = Sin(var1[5]);
  t3863 = Cos(var1[6]);
  t7948 = -1.*t7942*t7945;
  t7952 = t181*t7949*t7950;
  t7953 = t7948 + t7952;
  t7955 = t181*t7942*t7949;
  t7956 = t7945*t7950;
  t7957 = t7955 + t7956;
  t7959 = Sin(var1[6]);
  t889 = Cos(var1[4]);
  t917 = Cos(var1[7]);
  t7970 = t3863*t7957;
  t7971 = -1.*t7953*t7959;
  t7972 = t7970 + t7971;
  t7973 = Sin(var1[7]);
  t1060 = -1.*t917;
  t1433 = 1. + t1060;
  t1553 = 0.183*t1433;
  t3653 = 0. + t1553;
  t5340 = -1.*t3863;
  t7895 = 1. + t5340;
  t7928 = -0.047*t7895;
  t7934 = 0. + t7928;
  t7960 = 0.047*t7959;
  t7964 = 0. + t7960;
  t7985 = t181*t7942;
  t7988 = t7945*t7949*t7950;
  t7989 = t7985 + t7988;
  t7991 = t7942*t7945*t7949;
  t7992 = -1.*t181*t7950;
  t7993 = t7991 + t7992;
  t7974 = 0.183*t7973;
  t7976 = 0. + t7974;
  t7999 = t3863*t7993;
  t8000 = -1.*t7989*t7959;
  t8001 = t7999 + t8000;
  t8017 = t889*t7942*t3863;
  t8018 = -1.*t889*t7950*t7959;
  t8019 = t8017 + t8018;

  p_output1(0)=0. + t7934*t7953 - 0.08953*(t3863*t7953 + t7957*t7959) + t7957*t7964 + t7972*t7976 + t181*t3653*t889 + 0.183*(-1.*t7972*t7973 + t181*t889*t917) + var1(0);
  p_output1(1)=0. + t7934*t7989 + t7964*t7993 - 0.08953*(t3863*t7989 + t7959*t7993) + t7976*t8001 + t3653*t7945*t889 + 0.183*(-1.*t7973*t8001 + t7945*t889*t917) + var1(1);
  p_output1(2)=0. - 1.*t3653*t7949 + t7976*t8019 + t7934*t7950*t889 + t7942*t7964*t889 - 0.08953*(t3863*t7950*t889 + t7942*t7959*t889) + 0.183*(-1.*t7973*t8019 - 1.*t7949*t917) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_FR_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_FR_thigh_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



