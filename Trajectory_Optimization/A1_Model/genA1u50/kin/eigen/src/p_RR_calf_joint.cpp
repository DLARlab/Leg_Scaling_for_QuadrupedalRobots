/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:13:49 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RR_calf_joint.h"

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
  double t1966;
  double t2916;
  double t2925;
  double t2921;
  double t2926;
  double t2855;
  double t2922;
  double t2927;
  double t2930;
  double t2932;
  double t2946;
  double t2951;
  double t2954;
  double t2145;
  double t3521;
  double t101;
  double t4010;
  double t4149;
  double t5762;
  double t5785;
  double t5786;
  double t5826;
  double t6277;
  double t6590;
  double t6766;
  double t6908;
  double t8771;
  double t8780;
  double t8804;
  double t221;
  double t863;
  double t1838;
  double t1960;
  double t2893;
  double t2904;
  double t2934;
  double t2935;
  double t2936;
  double t2945;
  double t8850;
  double t8851;
  double t8852;
  double t8854;
  double t8858;
  double t8859;
  double t3725;
  double t4009;
  double t6144;
  double t6426;
  double t6427;
  double t8877;
  double t8879;
  double t8880;
  double t8656;
  double t8685;
  double t8722;
  double t8884;
  double t8885;
  double t8890;
  double t8897;
  double t8899;
  double t8902;
  double t8970;
  double t8972;
  double t8982;
  double t8990;
  double t9013;
  double t9017;
  double t9025;
  double t9026;
  double t9035;
  t1966 = Cos(var1[3]);
  t2916 = Cos(var1[5]);
  t2925 = Sin(var1[3]);
  t2921 = Sin(var1[4]);
  t2926 = Sin(var1[5]);
  t2855 = Sin(var1[12]);
  t2922 = t1966*t2916*t2921;
  t2927 = t2925*t2926;
  t2930 = t2922 + t2927;
  t2932 = Cos(var1[12]);
  t2946 = -1.*t2916*t2925;
  t2951 = t1966*t2921*t2926;
  t2954 = t2946 + t2951;
  t2145 = Cos(var1[4]);
  t3521 = Sin(var1[13]);
  t101 = Cos(var1[13]);
  t4010 = t2932*t2930;
  t4149 = -1.*t2855*t2954;
  t5762 = t4010 + t4149;
  t5785 = Cos(var1[14]);
  t5786 = -1.*t5785;
  t5826 = 1. + t5786;
  t6277 = Sin(var1[14]);
  t6590 = t1966*t2145*t3521;
  t6766 = t101*t5762;
  t6908 = t6590 + t6766;
  t8771 = t101*t1966*t2145;
  t8780 = -1.*t3521*t5762;
  t8804 = t8771 + t8780;
  t221 = -1.*t101;
  t863 = 1. + t221;
  t1838 = -0.183*t863;
  t1960 = 0. + t1838;
  t2893 = 0.047*t2855;
  t2904 = 0. + t2893;
  t2934 = -1.*t2932;
  t2935 = 1. + t2934;
  t2936 = -0.047*t2935;
  t2945 = 0. + t2936;
  t8850 = t2916*t2925*t2921;
  t8851 = -1.*t1966*t2926;
  t8852 = t8850 + t8851;
  t8854 = t1966*t2916;
  t8858 = t2925*t2921*t2926;
  t8859 = t8854 + t8858;
  t3725 = -0.183*t3521;
  t4009 = 0. + t3725;
  t6144 = -0.1*t5826;
  t6426 = -0.183*t6277;
  t6427 = 0. + t6144 + t6426;
  t8877 = t2932*t8852;
  t8879 = -1.*t2855*t8859;
  t8880 = t8877 + t8879;
  t8656 = -0.183*t5826;
  t8685 = 0.1*t6277;
  t8722 = 0. + t8656 + t8685;
  t8884 = t2145*t3521*t2925;
  t8885 = t101*t8880;
  t8890 = t8884 + t8885;
  t8897 = t101*t2145*t2925;
  t8899 = -1.*t3521*t8880;
  t8902 = t8897 + t8899;
  t8970 = t2932*t2145*t2916;
  t8972 = -1.*t2145*t2855*t2926;
  t8982 = t8970 + t8972;
  t8990 = -1.*t3521*t2921;
  t9013 = t101*t8982;
  t9017 = t8990 + t9013;
  t9025 = -1.*t101*t2921;
  t9026 = -1.*t3521*t8982;
  t9035 = t9025 + t9026;

  p_output1(0)=0. + t1960*t1966*t2145 + t2904*t2930 + t2945*t2954 - 0.08953*(t2855*t2930 + t2932*t2954) + t4009*t5762 + t6427*t6908 + t8722*t8804 - 0.183*(-1.*t6277*t6908 + t5785*t8804) - 0.1*(t5785*t6908 + t6277*t8804) + var1(0);
  p_output1(1)=0. + t1960*t2145*t2925 + t2904*t8852 + t2945*t8859 - 0.08953*(t2855*t8852 + t2932*t8859) + t4009*t8880 + t6427*t8890 + t8722*t8902 - 0.183*(-1.*t6277*t8890 + t5785*t8902) - 0.1*(t5785*t8890 + t6277*t8902) + var1(1);
  p_output1(2)=0. + t2145*t2904*t2916 - 1.*t1960*t2921 - 0.08953*(t2145*t2855*t2916 + t2145*t2926*t2932) + t2145*t2926*t2945 + t4009*t8982 + t6427*t9017 + t8722*t9035 - 0.183*(-1.*t6277*t9017 + t5785*t9035) - 0.1*(t5785*t9017 + t6277*t9035) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_RR_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_RR_calf_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



