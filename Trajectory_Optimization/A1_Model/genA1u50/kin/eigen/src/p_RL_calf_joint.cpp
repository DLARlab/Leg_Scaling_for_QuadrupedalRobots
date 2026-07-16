/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:13:56 GMT-05:00
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
  double t2363;
  double t3857;
  double t4312;
  double t4300;
  double t4730;
  double t3478;
  double t4302;
  double t4939;
  double t5343;
  double t5594;
  double t6103;
  double t6191;
  double t6225;
  double t2775;
  double t6348;
  double t853;
  double t6450;
  double t6454;
  double t6472;
  double t6490;
  double t6517;
  double t6521;
  double t6543;
  double t7067;
  double t7071;
  double t7108;
  double t7420;
  double t7480;
  double t8302;
  double t1175;
  double t1801;
  double t2054;
  double t2346;
  double t3485;
  double t3682;
  double t5636;
  double t5638;
  double t6026;
  double t6082;
  double t8958;
  double t8960;
  double t8966;
  double t9039;
  double t9046;
  double t9050;
  double t6352;
  double t6410;
  double t6539;
  double t6602;
  double t7066;
  double t9085;
  double t9087;
  double t9088;
  double t7196;
  double t7248;
  double t7382;
  double t9090;
  double t9091;
  double t9093;
  double t9096;
  double t9111;
  double t9119;
  double t9185;
  double t9186;
  double t9187;
  double t9195;
  double t9215;
  double t9219;
  double t9223;
  double t9224;
  double t9225;
  t2363 = Cos(var1[3]);
  t3857 = Cos(var1[5]);
  t4312 = Sin(var1[3]);
  t4300 = Sin(var1[4]);
  t4730 = Sin(var1[5]);
  t3478 = Sin(var1[15]);
  t4302 = t2363*t3857*t4300;
  t4939 = t4312*t4730;
  t5343 = t4302 + t4939;
  t5594 = Cos(var1[15]);
  t6103 = -1.*t3857*t4312;
  t6191 = t2363*t4300*t4730;
  t6225 = t6103 + t6191;
  t2775 = Cos(var1[4]);
  t6348 = Sin(var1[16]);
  t853 = Cos(var1[16]);
  t6450 = t5594*t5343;
  t6454 = -1.*t3478*t6225;
  t6472 = t6450 + t6454;
  t6490 = Cos(var1[17]);
  t6517 = -1.*t6490;
  t6521 = 1. + t6517;
  t6543 = Sin(var1[17]);
  t7067 = t2363*t2775*t6348;
  t7071 = t853*t6472;
  t7108 = t7067 + t7071;
  t7420 = t853*t2363*t2775;
  t7480 = -1.*t6348*t6472;
  t8302 = t7420 + t7480;
  t1175 = -1.*t853;
  t1801 = 1. + t1175;
  t2054 = -0.183*t1801;
  t2346 = 0. + t2054;
  t3485 = -0.047*t3478;
  t3682 = 0. + t3485;
  t5636 = -1.*t5594;
  t5638 = 1. + t5636;
  t6026 = 0.047*t5638;
  t6082 = 0. + t6026;
  t8958 = t3857*t4312*t4300;
  t8960 = -1.*t2363*t4730;
  t8966 = t8958 + t8960;
  t9039 = t2363*t3857;
  t9046 = t4312*t4300*t4730;
  t9050 = t9039 + t9046;
  t6352 = -0.183*t6348;
  t6410 = 0. + t6352;
  t6539 = -0.1*t6521;
  t6602 = -0.183*t6543;
  t7066 = 0. + t6539 + t6602;
  t9085 = t5594*t8966;
  t9087 = -1.*t3478*t9050;
  t9088 = t9085 + t9087;
  t7196 = -0.183*t6521;
  t7248 = 0.1*t6543;
  t7382 = 0. + t7196 + t7248;
  t9090 = t2775*t6348*t4312;
  t9091 = t853*t9088;
  t9093 = t9090 + t9091;
  t9096 = t853*t2775*t4312;
  t9111 = -1.*t6348*t9088;
  t9119 = t9096 + t9111;
  t9185 = t5594*t2775*t3857;
  t9186 = -1.*t2775*t3478*t4730;
  t9187 = t9185 + t9186;
  t9195 = -1.*t6348*t4300;
  t9215 = t853*t9187;
  t9219 = t9195 + t9215;
  t9223 = -1.*t853*t4300;
  t9224 = -1.*t6348*t9187;
  t9225 = t9223 + t9224;

  p_output1(0)=0. + t2346*t2363*t2775 + t3682*t5343 + t6082*t6225 + 0.08953*(t3478*t5343 + t5594*t6225) + t6410*t6472 + t7066*t7108 + t7382*t8302 - 0.183*(-1.*t6543*t7108 + t6490*t8302) - 0.1*(t6490*t7108 + t6543*t8302) + var1(0);
  p_output1(1)=0. + t2346*t2775*t4312 + t3682*t8966 + t6082*t9050 + 0.08953*(t3478*t8966 + t5594*t9050) + t6410*t9088 + t7066*t9093 + t7382*t9119 - 0.183*(-1.*t6543*t9093 + t6490*t9119) - 0.1*(t6490*t9093 + t6543*t9119) + var1(1);
  p_output1(2)=0. + t2775*t3682*t3857 - 1.*t2346*t4300 + 0.08953*(t2775*t3478*t3857 + t2775*t4730*t5594) + t2775*t4730*t6082 + t6410*t9187 + t7066*t9219 + t7382*t9225 - 0.183*(-1.*t6543*t9219 + t6490*t9225) - 0.1*(t6490*t9219 + t6543*t9225) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_RL_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_RL_calf_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



