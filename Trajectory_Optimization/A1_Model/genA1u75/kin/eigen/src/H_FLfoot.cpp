/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:19:09 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FLfoot.h"

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
static void output1(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  double t416;
  double t1729;
  double t2147;
  double t1912;
  double t2247;
  double t1636;
  double t732;
  double t1217;
  double t1687;
  double t2087;
  double t2521;
  double t2574;
  double t2716;
  double t2744;
  double t2768;
  double t2849;
  double t2905;
  double t2919;
  double t2947;
  double t100;
  double t3537;
  double t4133;
  double t4144;
  double t4317;
  double t4740;
  double t4879;
  double t4890;
  double t4919;
  double t4972;
  double t5049;
  double t5627;
  double t5658;
  double t5684;
  double t1301;
  double t3001;
  double t3248;
  double t3690;
  double t3859;
  double t3868;
  double t4077;
  double t5074;
  double t5170;
  double t5187;
  double t5379;
  double t5433;
  double t5602;
  double t5722;
  double t5952;
  double t6014;
  double t6327;
  double t6337;
  double t6513;
  double t6560;
  double t6571;
  double t7491;
  double t7576;
  double t3379;
  double t4019;
  double t4048;
  double t6880;
  double t6913;
  double t6922;
  double t7136;
  double t7139;
  double t7175;
  double t7238;
  double t7314;
  double t7332;
  double t7352;
  double t7356;
  double t7358;
  double t7359;
  double t6652;
  double t6689;
  double t6734;
  double t7377;
  double t7450;
  double t7595;
  double t7609;
  double t7621;
  double t7699;
  double t7716;
  double t7736;
  double t5172;
  double t5469;
  double t5542;
  double t6970;
  double t7006;
  double t7033;
  double t6749;
  double t6824;
  double t6852;
  double t5985;
  double t6343;
  double t6427;
  double t7043;
  double t7056;
  double t7099;
  t416 = Cos(var1[3]);
  t1729 = Cos(var1[5]);
  t2147 = Sin(var1[3]);
  t1912 = Sin(var1[4]);
  t2247 = Sin(var1[5]);
  t1636 = Cos(var1[10]);
  t732 = Cos(var1[4]);
  t1217 = Sin(var1[10]);
  t1687 = Cos(var1[9]);
  t2087 = t416*t1729*t1912;
  t2521 = t2147*t2247;
  t2574 = t2087 + t2521;
  t2716 = t1687*t2574;
  t2744 = Sin(var1[9]);
  t2768 = -1.*t1729*t2147;
  t2849 = t416*t1912*t2247;
  t2905 = t2768 + t2849;
  t2919 = -1.*t2744*t2905;
  t2947 = t2716 + t2919;
  t100 = Sin(var1[11]);
  t3537 = Cos(var1[11]);
  t4133 = t1729*t2147*t1912;
  t4144 = -1.*t416*t2247;
  t4317 = t4133 + t4144;
  t4740 = t1687*t4317;
  t4879 = t416*t1729;
  t4890 = t2147*t1912*t2247;
  t4919 = t4879 + t4890;
  t4972 = -1.*t2744*t4919;
  t5049 = t4740 + t4972;
  t5627 = t1687*t732*t1729;
  t5658 = -1.*t732*t2744*t2247;
  t5684 = t5627 + t5658;
  t1301 = t416*t732*t1217;
  t3001 = t1636*t2947;
  t3248 = t1301 + t3001;
  t3690 = t1636*t416*t732;
  t3859 = -1.*t1217*t2947;
  t3868 = t3690 + t3859;
  t4077 = t732*t1217*t2147;
  t5074 = t1636*t5049;
  t5170 = t4077 + t5074;
  t5187 = t1636*t732*t2147;
  t5379 = -1.*t1217*t5049;
  t5433 = t5187 + t5379;
  t5602 = -1.*t1217*t1912;
  t5722 = t1636*t5684;
  t5952 = t5602 + t5722;
  t6014 = -1.*t1636*t1912;
  t6327 = -1.*t1217*t5684;
  t6337 = t6014 + t6327;
  t6513 = t2744*t2574;
  t6560 = t1687*t2905;
  t6571 = t6513 + t6560;
  t7491 = -1.*t3537;
  t7576 = 1. + t7491;
  t3379 = -1.*t100*t3248;
  t4019 = t3537*t3868;
  t4048 = t3379 + t4019;
  t6880 = t3537*t3248;
  t6913 = t100*t3868;
  t6922 = t6880 + t6913;
  t7136 = -1.*t1636;
  t7139 = 1. + t7136;
  t7175 = 0.183*t7139;
  t7238 = 0. + t7175;
  t7314 = -0.047*t2744;
  t7332 = 0. + t7314;
  t7352 = -1.*t1687;
  t7356 = 1. + t7352;
  t7358 = 0.047*t7356;
  t7359 = 0. + t7358;
  t6652 = t2744*t4317;
  t6689 = t1687*t4919;
  t6734 = t6652 + t6689;
  t7377 = 0.183*t1217;
  t7450 = 0. + t7377;
  t7595 = -0.15*t7576;
  t7609 = 0.183*t100;
  t7621 = 0. + t7595 + t7609;
  t7699 = 0.183*t7576;
  t7716 = 0.15*t100;
  t7736 = 0. + t7699 + t7716;
  t5172 = -1.*t100*t5170;
  t5469 = t3537*t5433;
  t5542 = t5172 + t5469;
  t6970 = t3537*t5170;
  t7006 = t100*t5433;
  t7033 = t6970 + t7006;
  t6749 = t732*t1729*t2744;
  t6824 = t1687*t732*t2247;
  t6852 = t6749 + t6824;
  t5985 = -1.*t100*t5952;
  t6343 = t3537*t6337;
  t6427 = t5985 + t6343;
  t7043 = t3537*t5952;
  t7056 = t100*t6337;
  t7099 = t7043 + t7056;

  p_output1(0)=t4048;
  p_output1(1)=t5542;
  p_output1(2)=t6427;
  p_output1(3)=0.;
  p_output1(4)=t6571;
  p_output1(5)=t6734;
  p_output1(6)=t6852;
  p_output1(7)=0.;
  p_output1(8)=t6922;
  p_output1(9)=t7033;
  p_output1(10)=t7099;
  p_output1(11)=0.;
  p_output1(12)=0. + 0.183*t4048 + 0.11079*t6571 - 0.3*t6922 + t416*t7238*t732 + t2574*t7332 + t2905*t7359 + t2947*t7450 + t3248*t7621 + t3868*t7736 + var1(0);
  p_output1(13)=0. + 0.183*t5542 + 0.11079*t6734 - 0.3*t7033 + t2147*t7238*t732 + t4317*t7332 + t4919*t7359 + t5049*t7450 + t5170*t7621 + t5433*t7736 + var1(1);
  p_output1(14)=0. + 0.183*t6427 + 0.11079*t6852 - 0.3*t7099 - 1.*t1912*t7238 + t1729*t732*t7332 + t2247*t732*t7359 + t5684*t7450 + t5952*t7621 + t6337*t7736 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_FLfoot(const Eigen::Matrix<double,18,1> &var1)
//void H_FLfoot(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



