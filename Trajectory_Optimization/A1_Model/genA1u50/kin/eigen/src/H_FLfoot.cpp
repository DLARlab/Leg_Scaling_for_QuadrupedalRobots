/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:14:01 GMT-05:00
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
  double t256;
  double t587;
  double t1005;
  double t718;
  double t1012;
  double t515;
  double t266;
  double t271;
  double t552;
  double t972;
  double t1015;
  double t1025;
  double t1032;
  double t1110;
  double t1112;
  double t1190;
  double t1215;
  double t1364;
  double t1560;
  double t144;
  double t2110;
  double t2461;
  double t2468;
  double t2591;
  double t2753;
  double t2773;
  double t2825;
  double t2835;
  double t2848;
  double t2862;
  double t2891;
  double t2895;
  double t2897;
  double t471;
  double t1861;
  double t2084;
  double t2226;
  double t2311;
  double t2393;
  double t2422;
  double t2871;
  double t2877;
  double t2880;
  double t2881;
  double t2882;
  double t2890;
  double t2898;
  double t2902;
  double t2910;
  double t2911;
  double t2913;
  double t2970;
  double t2972;
  double t2982;
  double t4176;
  double t4339;
  double t2089;
  double t2417;
  double t2419;
  double t3147;
  double t3149;
  double t3244;
  double t3459;
  double t3461;
  double t3628;
  double t3687;
  double t3734;
  double t3759;
  double t3820;
  double t3832;
  double t3834;
  double t3847;
  double t3009;
  double t3073;
  double t3122;
  double t3945;
  double t4036;
  double t4394;
  double t4431;
  double t4457;
  double t4687;
  double t4689;
  double t4692;
  double t2878;
  double t2886;
  double t2889;
  double t3262;
  double t3271;
  double t3303;
  double t3136;
  double t3141;
  double t3146;
  double t2905;
  double t2964;
  double t2969;
  double t3306;
  double t3418;
  double t3434;
  t256 = Cos(var1[3]);
  t587 = Cos(var1[5]);
  t1005 = Sin(var1[3]);
  t718 = Sin(var1[4]);
  t1012 = Sin(var1[5]);
  t515 = Cos(var1[10]);
  t266 = Cos(var1[4]);
  t271 = Sin(var1[10]);
  t552 = Cos(var1[9]);
  t972 = t256*t587*t718;
  t1015 = t1005*t1012;
  t1025 = t972 + t1015;
  t1032 = t552*t1025;
  t1110 = Sin(var1[9]);
  t1112 = -1.*t587*t1005;
  t1190 = t256*t718*t1012;
  t1215 = t1112 + t1190;
  t1364 = -1.*t1110*t1215;
  t1560 = t1032 + t1364;
  t144 = Sin(var1[11]);
  t2110 = Cos(var1[11]);
  t2461 = t587*t1005*t718;
  t2468 = -1.*t256*t1012;
  t2591 = t2461 + t2468;
  t2753 = t552*t2591;
  t2773 = t256*t587;
  t2825 = t1005*t718*t1012;
  t2835 = t2773 + t2825;
  t2848 = -1.*t1110*t2835;
  t2862 = t2753 + t2848;
  t2891 = t552*t266*t587;
  t2895 = -1.*t266*t1110*t1012;
  t2897 = t2891 + t2895;
  t471 = t256*t266*t271;
  t1861 = t515*t1560;
  t2084 = t471 + t1861;
  t2226 = t515*t256*t266;
  t2311 = -1.*t271*t1560;
  t2393 = t2226 + t2311;
  t2422 = t266*t271*t1005;
  t2871 = t515*t2862;
  t2877 = t2422 + t2871;
  t2880 = t515*t266*t1005;
  t2881 = -1.*t271*t2862;
  t2882 = t2880 + t2881;
  t2890 = -1.*t271*t718;
  t2898 = t515*t2897;
  t2902 = t2890 + t2898;
  t2910 = -1.*t515*t718;
  t2911 = -1.*t271*t2897;
  t2913 = t2910 + t2911;
  t2970 = t1110*t1025;
  t2972 = t552*t1215;
  t2982 = t2970 + t2972;
  t4176 = -1.*t2110;
  t4339 = 1. + t4176;
  t2089 = -1.*t144*t2084;
  t2417 = t2110*t2393;
  t2419 = t2089 + t2417;
  t3147 = t2110*t2084;
  t3149 = t144*t2393;
  t3244 = t3147 + t3149;
  t3459 = -1.*t515;
  t3461 = 1. + t3459;
  t3628 = 0.183*t3461;
  t3687 = 0. + t3628;
  t3734 = -0.047*t1110;
  t3759 = 0. + t3734;
  t3820 = -1.*t552;
  t3832 = 1. + t3820;
  t3834 = 0.047*t3832;
  t3847 = 0. + t3834;
  t3009 = t1110*t2591;
  t3073 = t552*t2835;
  t3122 = t3009 + t3073;
  t3945 = 0.183*t271;
  t4036 = 0. + t3945;
  t4394 = -0.1*t4339;
  t4431 = 0.183*t144;
  t4457 = 0. + t4394 + t4431;
  t4687 = 0.183*t4339;
  t4689 = 0.1*t144;
  t4692 = 0. + t4687 + t4689;
  t2878 = -1.*t144*t2877;
  t2886 = t2110*t2882;
  t2889 = t2878 + t2886;
  t3262 = t2110*t2877;
  t3271 = t144*t2882;
  t3303 = t3262 + t3271;
  t3136 = t266*t587*t1110;
  t3141 = t552*t266*t1012;
  t3146 = t3136 + t3141;
  t2905 = -1.*t144*t2902;
  t2964 = t2110*t2913;
  t2969 = t2905 + t2964;
  t3306 = t2110*t2902;
  t3418 = t144*t2913;
  t3434 = t3306 + t3418;

  p_output1(0)=t2419;
  p_output1(1)=t2889;
  p_output1(2)=t2969;
  p_output1(3)=0.;
  p_output1(4)=t2982;
  p_output1(5)=t3122;
  p_output1(6)=t3146;
  p_output1(7)=0.;
  p_output1(8)=t3244;
  p_output1(9)=t3303;
  p_output1(10)=t3434;
  p_output1(11)=0.;
  p_output1(12)=0. + 0.183*t2419 + 0.08953*t2982 - 0.2*t3244 + t256*t266*t3687 + t1025*t3759 + t1215*t3847 + t1560*t4036 + t2084*t4457 + t2393*t4692 + var1(0);
  p_output1(13)=0. + 0.183*t2889 + 0.08953*t3122 - 0.2*t3303 + t1005*t266*t3687 + t2591*t3759 + t2835*t3847 + t2862*t4036 + t2877*t4457 + t2882*t4692 + var1(1);
  p_output1(14)=0. + 0.183*t2969 + 0.08953*t3146 - 0.2*t3434 + t1012*t266*t3847 + t2897*t4036 + t2902*t4457 + t2913*t4692 + t266*t3759*t587 - 1.*t3687*t718 + var1(2);
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



