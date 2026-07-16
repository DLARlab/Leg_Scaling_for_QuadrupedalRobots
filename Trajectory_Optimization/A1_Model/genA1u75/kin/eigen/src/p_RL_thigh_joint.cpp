/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:19:01 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RL_thigh_joint.h"

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
  double t4091;
  double t4895;
  double t6236;
  double t5063;
  double t6322;
  double t4460;
  double t6123;
  double t6326;
  double t6598;
  double t6727;
  double t6834;
  double t6842;
  double t6849;
  double t254;
  double t4352;
  double t7103;
  double t7161;
  double t7274;
  double t7293;
  double t1875;
  double t3413;
  double t3564;
  double t3880;
  double t4567;
  double t4876;
  double t6756;
  double t6808;
  double t6817;
  double t6828;
  double t7544;
  double t7585;
  double t7592;
  double t7600;
  double t7604;
  double t7606;
  double t7110;
  double t7143;
  double t7665;
  double t7669;
  double t7670;
  double t7709;
  double t7712;
  double t7713;
  t4091 = Cos(var1[3]);
  t4895 = Cos(var1[5]);
  t6236 = Sin(var1[3]);
  t5063 = Sin(var1[4]);
  t6322 = Sin(var1[5]);
  t4460 = Sin(var1[15]);
  t6123 = t4091*t4895*t5063;
  t6326 = t6236*t6322;
  t6598 = t6123 + t6326;
  t6727 = Cos(var1[15]);
  t6834 = -1.*t4895*t6236;
  t6842 = t4091*t5063*t6322;
  t6849 = t6834 + t6842;
  t254 = Cos(var1[16]);
  t4352 = Cos(var1[4]);
  t7103 = Sin(var1[16]);
  t7161 = t6727*t6598;
  t7274 = -1.*t4460*t6849;
  t7293 = t7161 + t7274;
  t1875 = -1.*t254;
  t3413 = 1. + t1875;
  t3564 = -0.183*t3413;
  t3880 = 0. + t3564;
  t4567 = -0.047*t4460;
  t4876 = 0. + t4567;
  t6756 = -1.*t6727;
  t6808 = 1. + t6756;
  t6817 = 0.047*t6808;
  t6828 = 0. + t6817;
  t7544 = t4895*t6236*t5063;
  t7585 = -1.*t4091*t6322;
  t7592 = t7544 + t7585;
  t7600 = t4091*t4895;
  t7604 = t6236*t5063*t6322;
  t7606 = t7600 + t7604;
  t7110 = -0.183*t7103;
  t7143 = 0. + t7110;
  t7665 = t6727*t7592;
  t7669 = -1.*t4460*t7606;
  t7670 = t7665 + t7669;
  t7709 = t6727*t4352*t4895;
  t7712 = -1.*t4352*t4460*t6322;
  t7713 = t7709 + t7712;

  p_output1(0)=0. + t3880*t4091*t4352 + t4876*t6598 + t6828*t6849 + 0.11079*(t4460*t6598 + t6727*t6849) + t7143*t7293 - 0.183*(t254*t4091*t4352 - 1.*t7103*t7293) + var1(0);
  p_output1(1)=0. + t3880*t4352*t6236 + t4876*t7592 + t6828*t7606 + 0.11079*(t4460*t7592 + t6727*t7606) + t7143*t7670 - 0.183*(t254*t4352*t6236 - 1.*t7103*t7670) + var1(1);
  p_output1(2)=0. + t4352*t4876*t4895 - 1.*t3880*t5063 + 0.11079*(t4352*t4460*t4895 + t4352*t6322*t6727) + t4352*t6322*t6828 + t7143*t7713 - 0.183*(-1.*t254*t5063 - 1.*t7103*t7713) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_RL_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_RL_thigh_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



