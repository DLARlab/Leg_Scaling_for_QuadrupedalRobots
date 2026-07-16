/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:18:50 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FL_calf_joint.h"

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
  double t4093;
  double t5741;
  double t6276;
  double t5992;
  double t6355;
  double t4579;
  double t6061;
  double t6413;
  double t6732;
  double t6786;
  double t7339;
  double t7373;
  double t7399;
  double t4094;
  double t7553;
  double t124;
  double t7672;
  double t7693;
  double t7733;
  double t7793;
  double t7806;
  double t7810;
  double t7848;
  double t7878;
  double t7890;
  double t7960;
  double t8094;
  double t8113;
  double t8114;
  double t752;
  double t1411;
  double t3066;
  double t3542;
  double t4821;
  double t4932;
  double t7029;
  double t7049;
  double t7226;
  double t7325;
  double t8335;
  double t8337;
  double t8347;
  double t8360;
  double t8387;
  double t8403;
  double t7620;
  double t7655;
  double t7846;
  double t7856;
  double t7863;
  double t8525;
  double t8528;
  double t8539;
  double t7989;
  double t8004;
  double t8031;
  double t8586;
  double t8593;
  double t8611;
  double t8616;
  double t8618;
  double t8627;
  double t9001;
  double t9004;
  double t9008;
  double t9037;
  double t9038;
  double t9100;
  double t9136;
  double t9140;
  double t9141;
  t4093 = Cos(var1[3]);
  t5741 = Cos(var1[5]);
  t6276 = Sin(var1[3]);
  t5992 = Sin(var1[4]);
  t6355 = Sin(var1[5]);
  t4579 = Sin(var1[9]);
  t6061 = t4093*t5741*t5992;
  t6413 = t6276*t6355;
  t6732 = t6061 + t6413;
  t6786 = Cos(var1[9]);
  t7339 = -1.*t5741*t6276;
  t7373 = t4093*t5992*t6355;
  t7399 = t7339 + t7373;
  t4094 = Cos(var1[4]);
  t7553 = Sin(var1[10]);
  t124 = Cos(var1[10]);
  t7672 = t6786*t6732;
  t7693 = -1.*t4579*t7399;
  t7733 = t7672 + t7693;
  t7793 = Cos(var1[11]);
  t7806 = -1.*t7793;
  t7810 = 1. + t7806;
  t7848 = Sin(var1[11]);
  t7878 = t4093*t4094*t7553;
  t7890 = t124*t7733;
  t7960 = t7878 + t7890;
  t8094 = t124*t4093*t4094;
  t8113 = -1.*t7553*t7733;
  t8114 = t8094 + t8113;
  t752 = -1.*t124;
  t1411 = 1. + t752;
  t3066 = 0.183*t1411;
  t3542 = 0. + t3066;
  t4821 = -0.047*t4579;
  t4932 = 0. + t4821;
  t7029 = -1.*t6786;
  t7049 = 1. + t7029;
  t7226 = 0.047*t7049;
  t7325 = 0. + t7226;
  t8335 = t5741*t6276*t5992;
  t8337 = -1.*t4093*t6355;
  t8347 = t8335 + t8337;
  t8360 = t4093*t5741;
  t8387 = t6276*t5992*t6355;
  t8403 = t8360 + t8387;
  t7620 = 0.183*t7553;
  t7655 = 0. + t7620;
  t7846 = -0.15*t7810;
  t7856 = 0.183*t7848;
  t7863 = 0. + t7846 + t7856;
  t8525 = t6786*t8347;
  t8528 = -1.*t4579*t8403;
  t8539 = t8525 + t8528;
  t7989 = 0.183*t7810;
  t8004 = 0.15*t7848;
  t8031 = 0. + t7989 + t8004;
  t8586 = t4094*t7553*t6276;
  t8593 = t124*t8539;
  t8611 = t8586 + t8593;
  t8616 = t124*t4094*t6276;
  t8618 = -1.*t7553*t8539;
  t8627 = t8616 + t8618;
  t9001 = t6786*t4094*t5741;
  t9004 = -1.*t4094*t4579*t6355;
  t9008 = t9001 + t9004;
  t9037 = -1.*t7553*t5992;
  t9038 = t124*t9008;
  t9100 = t9037 + t9038;
  t9136 = -1.*t124*t5992;
  t9140 = -1.*t7553*t9008;
  t9141 = t9136 + t9140;

  p_output1(0)=0. + t3542*t4093*t4094 + t4932*t6732 + t7325*t7399 + 0.11079*(t4579*t6732 + t6786*t7399) + t7655*t7733 + t7863*t7960 + t8031*t8114 + 0.183*(-1.*t7848*t7960 + t7793*t8114) - 0.15*(t7793*t7960 + t7848*t8114) + var1(0);
  p_output1(1)=0. + t3542*t4094*t6276 + t4932*t8347 + t7325*t8403 + 0.11079*(t4579*t8347 + t6786*t8403) + t7655*t8539 + t7863*t8611 + t8031*t8627 + 0.183*(-1.*t7848*t8611 + t7793*t8627) - 0.15*(t7793*t8611 + t7848*t8627) + var1(1);
  p_output1(2)=0. + t4094*t4932*t5741 - 1.*t3542*t5992 + 0.11079*(t4094*t4579*t5741 + t4094*t6355*t6786) + t4094*t6355*t7325 + t7655*t9008 + t7863*t9100 + t8031*t9141 + 0.183*(-1.*t7848*t9100 + t7793*t9141) - 0.15*(t7793*t9100 + t7848*t9141) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_FL_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_FL_calf_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



