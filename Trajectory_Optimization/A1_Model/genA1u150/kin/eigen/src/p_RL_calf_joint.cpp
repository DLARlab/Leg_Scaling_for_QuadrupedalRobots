/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:26:54 GMT-05:00
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
  double t2425;
  double t4719;
  double t6433;
  double t5853;
  double t6783;
  double t3239;
  double t6140;
  double t6842;
  double t6880;
  double t7190;
  double t7398;
  double t7402;
  double t7412;
  double t2492;
  double t7535;
  double t1181;
  double t7595;
  double t7612;
  double t7627;
  double t7676;
  double t7681;
  double t7722;
  double t7730;
  double t7816;
  double t7834;
  double t7838;
  double t7879;
  double t7882;
  double t7887;
  double t1719;
  double t1750;
  double t1908;
  double t2382;
  double t3646;
  double t4650;
  double t7339;
  double t7372;
  double t7379;
  double t7397;
  double t8188;
  double t8193;
  double t8205;
  double t8241;
  double t8285;
  double t8327;
  double t7561;
  double t7581;
  double t7726;
  double t7796;
  double t7802;
  double t8383;
  double t8398;
  double t8409;
  double t7849;
  double t7852;
  double t7875;
  double t8461;
  double t8463;
  double t8520;
  double t8536;
  double t8549;
  double t8555;
  double t8745;
  double t8747;
  double t8765;
  double t8847;
  double t8850;
  double t8856;
  double t8888;
  double t8890;
  double t8899;
  t2425 = Cos(var1[3]);
  t4719 = Cos(var1[5]);
  t6433 = Sin(var1[3]);
  t5853 = Sin(var1[4]);
  t6783 = Sin(var1[5]);
  t3239 = Sin(var1[15]);
  t6140 = t2425*t4719*t5853;
  t6842 = t6433*t6783;
  t6880 = t6140 + t6842;
  t7190 = Cos(var1[15]);
  t7398 = -1.*t4719*t6433;
  t7402 = t2425*t5853*t6783;
  t7412 = t7398 + t7402;
  t2492 = Cos(var1[4]);
  t7535 = Sin(var1[16]);
  t1181 = Cos(var1[16]);
  t7595 = t7190*t6880;
  t7612 = -1.*t3239*t7412;
  t7627 = t7595 + t7612;
  t7676 = Cos(var1[17]);
  t7681 = -1.*t7676;
  t7722 = 1. + t7681;
  t7730 = Sin(var1[17]);
  t7816 = t2425*t2492*t7535;
  t7834 = t1181*t7627;
  t7838 = t7816 + t7834;
  t7879 = t1181*t2425*t2492;
  t7882 = -1.*t7535*t7627;
  t7887 = t7879 + t7882;
  t1719 = -1.*t1181;
  t1750 = 1. + t1719;
  t1908 = -0.183*t1750;
  t2382 = 0. + t1908;
  t3646 = -0.047*t3239;
  t4650 = 0. + t3646;
  t7339 = -1.*t7190;
  t7372 = 1. + t7339;
  t7379 = 0.047*t7372;
  t7397 = 0. + t7379;
  t8188 = t4719*t6433*t5853;
  t8193 = -1.*t2425*t6783;
  t8205 = t8188 + t8193;
  t8241 = t2425*t4719;
  t8285 = t6433*t5853*t6783;
  t8327 = t8241 + t8285;
  t7561 = -0.183*t7535;
  t7581 = 0. + t7561;
  t7726 = -0.3*t7722;
  t7796 = -0.183*t7730;
  t7802 = 0. + t7726 + t7796;
  t8383 = t7190*t8205;
  t8398 = -1.*t3239*t8327;
  t8409 = t8383 + t8398;
  t7849 = -0.183*t7722;
  t7852 = 0.3*t7730;
  t7875 = 0. + t7849 + t7852;
  t8461 = t2492*t7535*t6433;
  t8463 = t1181*t8409;
  t8520 = t8461 + t8463;
  t8536 = t1181*t2492*t6433;
  t8549 = -1.*t7535*t8409;
  t8555 = t8536 + t8549;
  t8745 = t7190*t2492*t4719;
  t8747 = -1.*t2492*t3239*t6783;
  t8765 = t8745 + t8747;
  t8847 = -1.*t7535*t5853;
  t8850 = t1181*t8765;
  t8856 = t8847 + t8850;
  t8888 = -1.*t1181*t5853;
  t8890 = -1.*t7535*t8765;
  t8899 = t8888 + t8890;

  p_output1(0)=0. + t2382*t2425*t2492 + t4650*t6880 + t7397*t7412 + 0.17458*(t3239*t6880 + t7190*t7412) + t7581*t7627 + t7802*t7838 + t7875*t7887 - 0.183*(-1.*t7730*t7838 + t7676*t7887) - 0.3*(t7676*t7838 + t7730*t7887) + var1(0);
  p_output1(1)=0. + t2382*t2492*t6433 + t4650*t8205 + t7397*t8327 + 0.17458*(t3239*t8205 + t7190*t8327) + t7581*t8409 + t7802*t8520 + t7875*t8555 - 0.183*(-1.*t7730*t8520 + t7676*t8555) - 0.3*(t7676*t8520 + t7730*t8555) + var1(1);
  p_output1(2)=0. + t2492*t4650*t4719 - 1.*t2382*t5853 + 0.17458*(t2492*t3239*t4719 + t2492*t6783*t7190) + t2492*t6783*t7397 + t7581*t8765 + t7802*t8856 + t7875*t8899 - 0.183*(-1.*t7730*t8856 + t7676*t8899) - 0.3*(t7676*t8856 + t7730*t8899) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_RL_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_RL_calf_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



