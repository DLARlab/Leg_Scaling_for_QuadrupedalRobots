/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:19:11 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RRfoot.h"

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
  double t2703;
  double t3710;
  double t4231;
  double t3753;
  double t4278;
  double t3357;
  double t3811;
  double t4495;
  double t4628;
  double t4778;
  double t5815;
  double t6067;
  double t6216;
  double t2780;
  double t7137;
  double t142;
  double t7358;
  double t7368;
  double t7377;
  double t7450;
  double t7451;
  double t7483;
  double t7595;
  double t7706;
  double t7743;
  double t7763;
  double t7816;
  double t7818;
  double t7820;
  double t258;
  double t539;
  double t704;
  double t2250;
  double t3468;
  double t3517;
  double t4855;
  double t5439;
  double t5797;
  double t5806;
  double t7920;
  double t7925;
  double t7943;
  double t8011;
  double t8016;
  double t8020;
  double t7158;
  double t7335;
  double t7484;
  double t7609;
  double t7621;
  double t8162;
  double t8163;
  double t8168;
  double t7785;
  double t7789;
  double t7811;
  double t8198;
  double t8236;
  double t8259;
  double t8289;
  double t8311;
  double t8323;
  double t8706;
  double t8712;
  double t8726;
  double t8776;
  double t8799;
  double t8820;
  double t8834;
  double t8836;
  double t8839;
  t2703 = Cos(var1[3]);
  t3710 = Cos(var1[5]);
  t4231 = Sin(var1[3]);
  t3753 = Sin(var1[4]);
  t4278 = Sin(var1[5]);
  t3357 = Sin(var1[12]);
  t3811 = t2703*t3710*t3753;
  t4495 = t4231*t4278;
  t4628 = t3811 + t4495;
  t4778 = Cos(var1[12]);
  t5815 = -1.*t3710*t4231;
  t6067 = t2703*t3753*t4278;
  t6216 = t5815 + t6067;
  t2780 = Cos(var1[4]);
  t7137 = Sin(var1[13]);
  t142 = Cos(var1[13]);
  t7358 = t4778*t4628;
  t7368 = -1.*t3357*t6216;
  t7377 = t7358 + t7368;
  t7450 = Cos(var1[14]);
  t7451 = -1.*t7450;
  t7483 = 1. + t7451;
  t7595 = Sin(var1[14]);
  t7706 = t2703*t2780*t7137;
  t7743 = t142*t7377;
  t7763 = t7706 + t7743;
  t7816 = t142*t2703*t2780;
  t7818 = -1.*t7137*t7377;
  t7820 = t7816 + t7818;
  t258 = -1.*t142;
  t539 = 1. + t258;
  t704 = -0.183*t539;
  t2250 = 0. + t704;
  t3468 = 0.047*t3357;
  t3517 = 0. + t3468;
  t4855 = -1.*t4778;
  t5439 = 1. + t4855;
  t5797 = -0.047*t5439;
  t5806 = 0. + t5797;
  t7920 = t3710*t4231*t3753;
  t7925 = -1.*t2703*t4278;
  t7943 = t7920 + t7925;
  t8011 = t2703*t3710;
  t8016 = t4231*t3753*t4278;
  t8020 = t8011 + t8016;
  t7158 = -0.183*t7137;
  t7335 = 0. + t7158;
  t7484 = -0.15*t7483;
  t7609 = -0.183*t7595;
  t7621 = 0. + t7484 + t7609;
  t8162 = t4778*t7943;
  t8163 = -1.*t3357*t8020;
  t8168 = t8162 + t8163;
  t7785 = -0.183*t7483;
  t7789 = 0.15*t7595;
  t7811 = 0. + t7785 + t7789;
  t8198 = t2780*t7137*t4231;
  t8236 = t142*t8168;
  t8259 = t8198 + t8236;
  t8289 = t142*t2780*t4231;
  t8311 = -1.*t7137*t8168;
  t8323 = t8289 + t8311;
  t8706 = t4778*t2780*t3710;
  t8712 = -1.*t2780*t3357*t4278;
  t8726 = t8706 + t8712;
  t8776 = -1.*t7137*t3753;
  t8799 = t142*t8726;
  t8820 = t8776 + t8799;
  t8834 = -1.*t142*t3753;
  t8836 = -1.*t7137*t8726;
  t8839 = t8834 + t8836;

  p_output1(0)=0. + t2250*t2703*t2780 + t3517*t4628 + t5806*t6216 - 0.11079*(t3357*t4628 + t4778*t6216) + t7335*t7377 + t7621*t7763 + t7811*t7820 - 0.183*(-1.*t7595*t7763 + t7450*t7820) - 0.3*(t7450*t7763 + t7595*t7820) + var1(0);
  p_output1(1)=0. + t2250*t2780*t4231 + t3517*t7943 + t5806*t8020 - 0.11079*(t3357*t7943 + t4778*t8020) + t7335*t8168 + t7621*t8259 + t7811*t8323 - 0.183*(-1.*t7595*t8259 + t7450*t8323) - 0.3*(t7450*t8259 + t7595*t8323) + var1(1);
  p_output1(2)=0. + t2780*t3517*t3710 - 1.*t2250*t3753 - 0.11079*(t2780*t3357*t3710 + t2780*t4278*t4778) + t2780*t4278*t5806 + t7335*t8726 + t7621*t8820 + t7811*t8839 - 0.183*(-1.*t7595*t8820 + t7450*t8839) - 0.3*(t7450*t8820 + t7595*t8839) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_RRfoot(const Eigen::Matrix<double,18,1> &var1)
//void p_RRfoot(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



