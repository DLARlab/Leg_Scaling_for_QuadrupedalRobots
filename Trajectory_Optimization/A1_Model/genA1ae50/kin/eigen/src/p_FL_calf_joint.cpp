/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:11:00 GMT-05:00
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
  double t3181;
  double t5302;
  double t5467;
  double t5448;
  double t5752;
  double t4494;
  double t5454;
  double t5786;
  double t5793;
  double t5805;
  double t5841;
  double t5844;
  double t5885;
  double t3305;
  double t5950;
  double t2246;
  double t5987;
  double t5988;
  double t5997;
  double t6006;
  double t6054;
  double t6056;
  double t6061;
  double t6071;
  double t6077;
  double t6079;
  double t6100;
  double t6103;
  double t6104;
  double t2881;
  double t2969;
  double t3159;
  double t3175;
  double t4899;
  double t5298;
  double t5815;
  double t5829;
  double t5834;
  double t5840;
  double t6165;
  double t6168;
  double t6176;
  double t6181;
  double t6182;
  double t6191;
  double t5978;
  double t5985;
  double t6060;
  double t6062;
  double t6066;
  double t6213;
  double t6220;
  double t6221;
  double t6090;
  double t6092;
  double t6095;
  double t6228;
  double t6232;
  double t6241;
  double t6259;
  double t6273;
  double t6276;
  double t6371;
  double t6372;
  double t6373;
  double t6377;
  double t6379;
  double t6381;
  double t6384;
  double t6385;
  double t6386;
  t3181 = Cos(var1[3]);
  t5302 = Cos(var1[5]);
  t5467 = Sin(var1[3]);
  t5448 = Sin(var1[4]);
  t5752 = Sin(var1[5]);
  t4494 = Sin(var1[9]);
  t5454 = t3181*t5302*t5448;
  t5786 = t5467*t5752;
  t5793 = t5454 + t5786;
  t5805 = Cos(var1[9]);
  t5841 = -1.*t5302*t5467;
  t5844 = t3181*t5448*t5752;
  t5885 = t5841 + t5844;
  t3305 = Cos(var1[4]);
  t5950 = Sin(var1[10]);
  t2246 = Cos(var1[10]);
  t5987 = t5805*t5793;
  t5988 = -1.*t4494*t5885;
  t5997 = t5987 + t5988;
  t6006 = Cos(var1[11]);
  t6054 = -1.*t6006;
  t6056 = 1. + t6054;
  t6061 = Sin(var1[11]);
  t6071 = t3181*t3305*t5950;
  t6077 = t2246*t5997;
  t6079 = t6071 + t6077;
  t6100 = t2246*t3181*t3305;
  t6103 = -1.*t5950*t5997;
  t6104 = t6100 + t6103;
  t2881 = -1.*t2246;
  t2969 = 1. + t2881;
  t3159 = 0.183*t2969;
  t3175 = 0. + t3159;
  t4899 = -0.047*t4494;
  t5298 = 0. + t4899;
  t5815 = -1.*t5805;
  t5829 = 1. + t5815;
  t5834 = 0.047*t5829;
  t5840 = 0. + t5834;
  t6165 = t5302*t5467*t5448;
  t6168 = -1.*t3181*t5752;
  t6176 = t6165 + t6168;
  t6181 = t3181*t5302;
  t6182 = t5467*t5448*t5752;
  t6191 = t6181 + t6182;
  t5978 = 0.183*t5950;
  t5985 = 0. + t5978;
  t6060 = -0.1*t6056;
  t6062 = 0.183*t6061;
  t6066 = 0. + t6060 + t6062;
  t6213 = t5805*t6176;
  t6220 = -1.*t4494*t6191;
  t6221 = t6213 + t6220;
  t6090 = 0.183*t6056;
  t6092 = 0.1*t6061;
  t6095 = 0. + t6090 + t6092;
  t6228 = t3305*t5950*t5467;
  t6232 = t2246*t6221;
  t6241 = t6228 + t6232;
  t6259 = t2246*t3305*t5467;
  t6273 = -1.*t5950*t6221;
  t6276 = t6259 + t6273;
  t6371 = t5805*t3305*t5302;
  t6372 = -1.*t3305*t4494*t5752;
  t6373 = t6371 + t6372;
  t6377 = -1.*t5950*t5448;
  t6379 = t2246*t6373;
  t6381 = t6377 + t6379;
  t6384 = -1.*t2246*t5448;
  t6385 = -1.*t5950*t6373;
  t6386 = t6384 + t6385;

  p_output1(0)=0. + t3175*t3181*t3305 + t5298*t5793 + t5840*t5885 + 0.13205*(t4494*t5793 + t5805*t5885) + t5985*t5997 + t6066*t6079 + t6095*t6104 + 0.183*(-1.*t6061*t6079 + t6006*t6104) - 0.1*(t6006*t6079 + t6061*t6104) + var1(0);
  p_output1(1)=0. + t3175*t3305*t5467 + t5298*t6176 + t5840*t6191 + 0.13205*(t4494*t6176 + t5805*t6191) + t5985*t6221 + t6066*t6241 + t6095*t6276 + 0.183*(-1.*t6061*t6241 + t6006*t6276) - 0.1*(t6006*t6241 + t6061*t6276) + var1(1);
  p_output1(2)=0. + t3305*t5298*t5302 - 1.*t3175*t5448 + 0.13205*(t3305*t4494*t5302 + t3305*t5752*t5805) + t3305*t5752*t5840 + t5985*t6373 + t6066*t6381 + t6095*t6386 + 0.183*(-1.*t6061*t6381 + t6006*t6386) - 0.1*(t6006*t6381 + t6061*t6386) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_FL_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_FL_calf_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



