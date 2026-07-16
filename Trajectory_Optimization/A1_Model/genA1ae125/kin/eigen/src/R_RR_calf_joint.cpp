/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:04:32 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RR_calf_joint.h"

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
static void output1(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  double t426;
  double t2184;
  double t3207;
  double t2693;
  double t3237;
  double t1688;
  double t840;
  double t862;
  double t1765;
  double t2853;
  double t4109;
  double t4464;
  double t4465;
  double t4518;
  double t4574;
  double t4620;
  double t4659;
  double t4660;
  double t4664;
  double t369;
  double t4747;
  double t4796;
  double t4801;
  double t4818;
  double t4829;
  double t4835;
  double t4841;
  double t4843;
  double t4846;
  double t4849;
  double t4886;
  double t4895;
  double t4897;
  double t963;
  double t4666;
  double t4696;
  double t4751;
  double t4766;
  double t4771;
  double t4795;
  double t4850;
  double t4851;
  double t4855;
  double t4857;
  double t4861;
  double t4883;
  double t4899;
  double t4904;
  double t4910;
  double t4912;
  double t4924;
  t426 = Cos(var1[3]);
  t2184 = Cos(var1[5]);
  t3207 = Sin(var1[3]);
  t2693 = Sin(var1[4]);
  t3237 = Sin(var1[5]);
  t1688 = Cos(var1[13]);
  t840 = Cos(var1[4]);
  t862 = Sin(var1[13]);
  t1765 = Cos(var1[12]);
  t2853 = t426*t2184*t2693;
  t4109 = t3207*t3237;
  t4464 = t2853 + t4109;
  t4465 = t1765*t4464;
  t4518 = Sin(var1[12]);
  t4574 = -1.*t2184*t3207;
  t4620 = t426*t2693*t3237;
  t4659 = t4574 + t4620;
  t4660 = -1.*t4518*t4659;
  t4664 = t4465 + t4660;
  t369 = Sin(var1[14]);
  t4747 = Cos(var1[14]);
  t4796 = t2184*t3207*t2693;
  t4801 = -1.*t426*t3237;
  t4818 = t4796 + t4801;
  t4829 = t1765*t4818;
  t4835 = t426*t2184;
  t4841 = t3207*t2693*t3237;
  t4843 = t4835 + t4841;
  t4846 = -1.*t4518*t4843;
  t4849 = t4829 + t4846;
  t4886 = t1765*t840*t2184;
  t4895 = -1.*t840*t4518*t3237;
  t4897 = t4886 + t4895;
  t963 = t426*t840*t862;
  t4666 = t1688*t4664;
  t4696 = t963 + t4666;
  t4751 = t1688*t426*t840;
  t4766 = -1.*t862*t4664;
  t4771 = t4751 + t4766;
  t4795 = t840*t862*t3207;
  t4850 = t1688*t4849;
  t4851 = t4795 + t4850;
  t4855 = t1688*t840*t3207;
  t4857 = -1.*t862*t4849;
  t4861 = t4855 + t4857;
  t4883 = -1.*t862*t2693;
  t4899 = t1688*t4897;
  t4904 = t4883 + t4899;
  t4910 = -1.*t1688*t2693;
  t4912 = -1.*t862*t4897;
  t4924 = t4910 + t4912;

  p_output1(0)=-1.*t369*t4696 + t4747*t4771;
  p_output1(1)=-1.*t369*t4851 + t4747*t4861;
  p_output1(2)=-1.*t369*t4904 + t4747*t4924;
  p_output1(3)=t4464*t4518 + t1765*t4659;
  p_output1(4)=t4518*t4818 + t1765*t4843;
  p_output1(5)=t1765*t3237*t840 + t2184*t4518*t840;
  p_output1(6)=t4696*t4747 + t369*t4771;
  p_output1(7)=t4747*t4851 + t369*t4861;
  p_output1(8)=t4747*t4904 + t369*t4924;
}


       
Eigen::Matrix<double,3,3> R_RR_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_RR_calf_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



