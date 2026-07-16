/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:19:05 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RL_calf_joint.h"

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
  double t2531;
  double t3801;
  double t4022;
  double t3820;
  double t4065;
  double t2997;
  double t2571;
  double t2909;
  double t3668;
  double t3897;
  double t4090;
  double t4098;
  double t4111;
  double t4234;
  double t4456;
  double t4630;
  double t4645;
  double t4716;
  double t4732;
  double t1047;
  double t4798;
  double t5061;
  double t5089;
  double t5103;
  double t5131;
  double t5132;
  double t5134;
  double t5147;
  double t5162;
  double t5167;
  double t5408;
  double t5529;
  double t5567;
  double t2948;
  double t4750;
  double t4774;
  double t4907;
  double t4942;
  double t4985;
  double t5055;
  double t5210;
  double t5233;
  double t5333;
  double t5334;
  double t5342;
  double t5397;
  double t5572;
  double t5630;
  double t5680;
  double t5742;
  double t5743;
  t2531 = Cos(var1[3]);
  t3801 = Cos(var1[5]);
  t4022 = Sin(var1[3]);
  t3820 = Sin(var1[4]);
  t4065 = Sin(var1[5]);
  t2997 = Cos(var1[16]);
  t2571 = Cos(var1[4]);
  t2909 = Sin(var1[16]);
  t3668 = Cos(var1[15]);
  t3897 = t2531*t3801*t3820;
  t4090 = t4022*t4065;
  t4098 = t3897 + t4090;
  t4111 = t3668*t4098;
  t4234 = Sin(var1[15]);
  t4456 = -1.*t3801*t4022;
  t4630 = t2531*t3820*t4065;
  t4645 = t4456 + t4630;
  t4716 = -1.*t4234*t4645;
  t4732 = t4111 + t4716;
  t1047 = Sin(var1[17]);
  t4798 = Cos(var1[17]);
  t5061 = t3801*t4022*t3820;
  t5089 = -1.*t2531*t4065;
  t5103 = t5061 + t5089;
  t5131 = t3668*t5103;
  t5132 = t2531*t3801;
  t5134 = t4022*t3820*t4065;
  t5147 = t5132 + t5134;
  t5162 = -1.*t4234*t5147;
  t5167 = t5131 + t5162;
  t5408 = t3668*t2571*t3801;
  t5529 = -1.*t2571*t4234*t4065;
  t5567 = t5408 + t5529;
  t2948 = t2531*t2571*t2909;
  t4750 = t2997*t4732;
  t4774 = t2948 + t4750;
  t4907 = t2997*t2531*t2571;
  t4942 = -1.*t2909*t4732;
  t4985 = t4907 + t4942;
  t5055 = t2571*t2909*t4022;
  t5210 = t2997*t5167;
  t5233 = t5055 + t5210;
  t5333 = t2997*t2571*t4022;
  t5334 = -1.*t2909*t5167;
  t5342 = t5333 + t5334;
  t5397 = -1.*t2909*t3820;
  t5572 = t2997*t5567;
  t5630 = t5397 + t5572;
  t5680 = -1.*t2997*t3820;
  t5742 = -1.*t2909*t5567;
  t5743 = t5680 + t5742;

  p_output1(0)=-1.*t1047*t4774 + t4798*t4985;
  p_output1(1)=-1.*t1047*t5233 + t4798*t5342;
  p_output1(2)=-1.*t1047*t5630 + t4798*t5743;
  p_output1(3)=t4098*t4234 + t3668*t4645;
  p_output1(4)=t4234*t5103 + t3668*t5147;
  p_output1(5)=t2571*t3668*t4065 + t2571*t3801*t4234;
  p_output1(6)=t4774*t4798 + t1047*t4985;
  p_output1(7)=t4798*t5233 + t1047*t5342;
  p_output1(8)=t4798*t5630 + t1047*t5743;
}


       
Eigen::Matrix<double,3,3> R_RL_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_RL_calf_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



