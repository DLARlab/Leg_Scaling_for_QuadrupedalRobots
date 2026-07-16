/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:19:04 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RL_calf_joint.h"

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
  double t1810;
  double t2353;
  double t3259;
  double t2373;
  double t3644;
  double t2191;
  double t2981;
  double t4264;
  double t4335;
  double t4662;
  double t5152;
  double t5210;
  double t5292;
  double t1813;
  double t5637;
  double t342;
  double t5779;
  double t5796;
  double t5835;
  double t6492;
  double t6543;
  double t6580;
  double t6932;
  double t7066;
  double t7104;
  double t7250;
  double t7697;
  double t7709;
  double t7721;
  double t524;
  double t877;
  double t1037;
  double t1099;
  double t2216;
  double t2268;
  double t4772;
  double t4893;
  double t5061;
  double t5134;
  double t7843;
  double t7851;
  double t7854;
  double t7875;
  double t7919;
  double t7930;
  double t5672;
  double t5714;
  double t6698;
  double t7032;
  double t7038;
  double t8020;
  double t8028;
  double t8029;
  double t7539;
  double t7662;
  double t7696;
  double t8046;
  double t8066;
  double t8087;
  double t8103;
  double t8120;
  double t8183;
  double t8726;
  double t8768;
  double t8837;
  double t8856;
  double t8887;
  double t8888;
  double t8898;
  double t8902;
  double t8906;
  t1810 = Cos(var1[3]);
  t2353 = Cos(var1[5]);
  t3259 = Sin(var1[3]);
  t2373 = Sin(var1[4]);
  t3644 = Sin(var1[5]);
  t2191 = Sin(var1[15]);
  t2981 = t1810*t2353*t2373;
  t4264 = t3259*t3644;
  t4335 = t2981 + t4264;
  t4662 = Cos(var1[15]);
  t5152 = -1.*t2353*t3259;
  t5210 = t1810*t2373*t3644;
  t5292 = t5152 + t5210;
  t1813 = Cos(var1[4]);
  t5637 = Sin(var1[16]);
  t342 = Cos(var1[16]);
  t5779 = t4662*t4335;
  t5796 = -1.*t2191*t5292;
  t5835 = t5779 + t5796;
  t6492 = Cos(var1[17]);
  t6543 = -1.*t6492;
  t6580 = 1. + t6543;
  t6932 = Sin(var1[17]);
  t7066 = t1810*t1813*t5637;
  t7104 = t342*t5835;
  t7250 = t7066 + t7104;
  t7697 = t342*t1810*t1813;
  t7709 = -1.*t5637*t5835;
  t7721 = t7697 + t7709;
  t524 = -1.*t342;
  t877 = 1. + t524;
  t1037 = -0.183*t877;
  t1099 = 0. + t1037;
  t2216 = -0.047*t2191;
  t2268 = 0. + t2216;
  t4772 = -1.*t4662;
  t4893 = 1. + t4772;
  t5061 = 0.047*t4893;
  t5134 = 0. + t5061;
  t7843 = t2353*t3259*t2373;
  t7851 = -1.*t1810*t3644;
  t7854 = t7843 + t7851;
  t7875 = t1810*t2353;
  t7919 = t3259*t2373*t3644;
  t7930 = t7875 + t7919;
  t5672 = -0.183*t5637;
  t5714 = 0. + t5672;
  t6698 = -0.15*t6580;
  t7032 = -0.183*t6932;
  t7038 = 0. + t6698 + t7032;
  t8020 = t4662*t7854;
  t8028 = -1.*t2191*t7930;
  t8029 = t8020 + t8028;
  t7539 = -0.183*t6580;
  t7662 = 0.15*t6932;
  t7696 = 0. + t7539 + t7662;
  t8046 = t1813*t5637*t3259;
  t8066 = t342*t8029;
  t8087 = t8046 + t8066;
  t8103 = t342*t1813*t3259;
  t8120 = -1.*t5637*t8029;
  t8183 = t8103 + t8120;
  t8726 = t4662*t1813*t2353;
  t8768 = -1.*t1813*t2191*t3644;
  t8837 = t8726 + t8768;
  t8856 = -1.*t5637*t2373;
  t8887 = t342*t8837;
  t8888 = t8856 + t8887;
  t8898 = -1.*t342*t2373;
  t8902 = -1.*t5637*t8837;
  t8906 = t8898 + t8902;

  p_output1(0)=0. + t1099*t1810*t1813 + t2268*t4335 + t5134*t5292 + 0.11079*(t2191*t4335 + t4662*t5292) + t5714*t5835 + t7038*t7250 + t7696*t7721 - 0.183*(-1.*t6932*t7250 + t6492*t7721) - 0.15*(t6492*t7250 + t6932*t7721) + var1(0);
  p_output1(1)=0. + t1099*t1813*t3259 + t2268*t7854 + t5134*t7930 + 0.11079*(t2191*t7854 + t4662*t7930) + t5714*t8029 + t7038*t8087 + t7696*t8183 - 0.183*(-1.*t6932*t8087 + t6492*t8183) - 0.15*(t6492*t8087 + t6932*t8183) + var1(1);
  p_output1(2)=0. + t1813*t2268*t2353 - 1.*t1099*t2373 + 0.11079*(t1813*t2191*t2353 + t1813*t3644*t4662) + t1813*t3644*t5134 + t5714*t8837 + t7038*t8888 + t7696*t8906 - 0.183*(-1.*t6932*t8888 + t6492*t8906) - 0.15*(t6492*t8888 + t6932*t8906) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_RL_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_RL_calf_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



