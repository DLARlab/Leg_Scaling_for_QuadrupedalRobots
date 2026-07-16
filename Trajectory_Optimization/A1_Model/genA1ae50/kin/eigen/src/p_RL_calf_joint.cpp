/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:11:14 GMT-05:00
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
  double t2262;
  double t2481;
  double t2499;
  double t2489;
  double t2508;
  double t2362;
  double t2495;
  double t2511;
  double t2513;
  double t2551;
  double t3421;
  double t3448;
  double t3594;
  double t2271;
  double t4862;
  double t1127;
  double t6440;
  double t6512;
  double t6821;
  double t6932;
  double t6961;
  double t7002;
  double t7055;
  double t7105;
  double t7110;
  double t7111;
  double t7181;
  double t7190;
  double t7200;
  double t1195;
  double t1858;
  double t2170;
  double t2255;
  double t2441;
  double t2480;
  double t2858;
  double t2907;
  double t3124;
  double t3133;
  double t7316;
  double t7321;
  double t7336;
  double t7358;
  double t7372;
  double t7381;
  double t5908;
  double t6407;
  double t7030;
  double t7068;
  double t7083;
  double t7544;
  double t7559;
  double t7568;
  double t7154;
  double t7167;
  double t7175;
  double t7607;
  double t7610;
  double t7613;
  double t7625;
  double t7626;
  double t7650;
  double t7807;
  double t7810;
  double t7822;
  double t7832;
  double t7840;
  double t7841;
  double t7843;
  double t7844;
  double t7847;
  t2262 = Cos(var1[3]);
  t2481 = Cos(var1[5]);
  t2499 = Sin(var1[3]);
  t2489 = Sin(var1[4]);
  t2508 = Sin(var1[5]);
  t2362 = Sin(var1[15]);
  t2495 = t2262*t2481*t2489;
  t2511 = t2499*t2508;
  t2513 = t2495 + t2511;
  t2551 = Cos(var1[15]);
  t3421 = -1.*t2481*t2499;
  t3448 = t2262*t2489*t2508;
  t3594 = t3421 + t3448;
  t2271 = Cos(var1[4]);
  t4862 = Sin(var1[16]);
  t1127 = Cos(var1[16]);
  t6440 = t2551*t2513;
  t6512 = -1.*t2362*t3594;
  t6821 = t6440 + t6512;
  t6932 = Cos(var1[17]);
  t6961 = -1.*t6932;
  t7002 = 1. + t6961;
  t7055 = Sin(var1[17]);
  t7105 = t2262*t2271*t4862;
  t7110 = t1127*t6821;
  t7111 = t7105 + t7110;
  t7181 = t1127*t2262*t2271;
  t7190 = -1.*t4862*t6821;
  t7200 = t7181 + t7190;
  t1195 = -1.*t1127;
  t1858 = 1. + t1195;
  t2170 = -0.183*t1858;
  t2255 = 0. + t2170;
  t2441 = -0.047*t2362;
  t2480 = 0. + t2441;
  t2858 = -1.*t2551;
  t2907 = 1. + t2858;
  t3124 = 0.047*t2907;
  t3133 = 0. + t3124;
  t7316 = t2481*t2499*t2489;
  t7321 = -1.*t2262*t2508;
  t7336 = t7316 + t7321;
  t7358 = t2262*t2481;
  t7372 = t2499*t2489*t2508;
  t7381 = t7358 + t7372;
  t5908 = -0.183*t4862;
  t6407 = 0. + t5908;
  t7030 = -0.1*t7002;
  t7068 = -0.183*t7055;
  t7083 = 0. + t7030 + t7068;
  t7544 = t2551*t7336;
  t7559 = -1.*t2362*t7381;
  t7568 = t7544 + t7559;
  t7154 = -0.183*t7002;
  t7167 = 0.1*t7055;
  t7175 = 0. + t7154 + t7167;
  t7607 = t2271*t4862*t2499;
  t7610 = t1127*t7568;
  t7613 = t7607 + t7610;
  t7625 = t1127*t2271*t2499;
  t7626 = -1.*t4862*t7568;
  t7650 = t7625 + t7626;
  t7807 = t2551*t2271*t2481;
  t7810 = -1.*t2271*t2362*t2508;
  t7822 = t7807 + t7810;
  t7832 = -1.*t4862*t2489;
  t7840 = t1127*t7822;
  t7841 = t7832 + t7840;
  t7843 = -1.*t1127*t2489;
  t7844 = -1.*t4862*t7822;
  t7847 = t7843 + t7844;

  p_output1(0)=0. + t2255*t2262*t2271 + t2480*t2513 + t3133*t3594 + 0.13205*(t2362*t2513 + t2551*t3594) + t6407*t6821 + t7083*t7111 + t7175*t7200 - 0.183*(-1.*t7055*t7111 + t6932*t7200) - 0.1*(t6932*t7111 + t7055*t7200) + var1(0);
  p_output1(1)=0. + t2255*t2271*t2499 + t2480*t7336 + t3133*t7381 + 0.13205*(t2362*t7336 + t2551*t7381) + t6407*t7568 + t7083*t7613 + t7175*t7650 - 0.183*(-1.*t7055*t7613 + t6932*t7650) - 0.1*(t6932*t7613 + t7055*t7650) + var1(1);
  p_output1(2)=0. + t2271*t2480*t2481 - 1.*t2255*t2489 + 0.13205*(t2271*t2362*t2481 + t2271*t2508*t2551) + t2271*t2508*t3133 + t6407*t7822 + t7083*t7841 + t7175*t7847 - 0.183*(-1.*t7055*t7841 + t6932*t7847) - 0.1*(t6932*t7841 + t7055*t7847) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_RL_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_RL_calf_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



