/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:19:02 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RL_thigh_joint.h"

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
  double t250;
  double t1903;
  double t2122;
  double t1977;
  double t2144;
  double t8;
  double t852;
  double t1717;
  double t1862;
  double t3552;
  double t2068;
  double t2328;
  double t3233;
  double t3577;
  double t3599;
  double t3619;
  double t5237;
  double t5458;
  double t5467;
  double t5515;
  double t5690;
  double t5727;
  double t3249;
  double t4074;
  double t4147;
  double t5468;
  double t5746;
  double t5785;
  double t6277;
  double t6281;
  double t6326;
  double t6593;
  double t6622;
  double t6711;
  double t865;
  double t4353;
  double t4581;
  double t7592;
  double t7596;
  double t7604;
  double t7616;
  double t7640;
  double t7662;
  double t7676;
  double t7677;
  double t7679;
  double t7680;
  double t6795;
  double t6800;
  double t6932;
  double t7696;
  double t7697;
  double t4748;
  double t5847;
  double t5926;
  double t7038;
  double t7095;
  double t7110;
  double t6035;
  double t6451;
  double t6517;
  t250 = Cos(var1[3]);
  t1903 = Cos(var1[5]);
  t2122 = Sin(var1[3]);
  t1977 = Sin(var1[4]);
  t2144 = Sin(var1[5]);
  t8 = Cos(var1[16]);
  t852 = Cos(var1[4]);
  t1717 = Sin(var1[16]);
  t1862 = Cos(var1[15]);
  t3552 = Sin(var1[15]);
  t2068 = t250*t1903*t1977;
  t2328 = t2122*t2144;
  t3233 = t2068 + t2328;
  t3577 = -1.*t1903*t2122;
  t3599 = t250*t1977*t2144;
  t3619 = t3577 + t3599;
  t5237 = t1903*t2122*t1977;
  t5458 = -1.*t250*t2144;
  t5467 = t5237 + t5458;
  t5515 = t250*t1903;
  t5690 = t2122*t1977*t2144;
  t5727 = t5515 + t5690;
  t3249 = t1862*t3233;
  t4074 = -1.*t3552*t3619;
  t4147 = t3249 + t4074;
  t5468 = t1862*t5467;
  t5746 = -1.*t3552*t5727;
  t5785 = t5468 + t5746;
  t6277 = t1862*t852*t1903;
  t6281 = -1.*t852*t3552*t2144;
  t6326 = t6277 + t6281;
  t6593 = t3552*t3233;
  t6622 = t1862*t3619;
  t6711 = t6593 + t6622;
  t865 = t8*t250*t852;
  t4353 = -1.*t1717*t4147;
  t4581 = t865 + t4353;
  t7592 = -1.*t8;
  t7596 = 1. + t7592;
  t7604 = -0.183*t7596;
  t7616 = 0. + t7604;
  t7640 = -0.047*t3552;
  t7662 = 0. + t7640;
  t7676 = -1.*t1862;
  t7677 = 1. + t7676;
  t7679 = 0.047*t7677;
  t7680 = 0. + t7679;
  t6795 = t3552*t5467;
  t6800 = t1862*t5727;
  t6932 = t6795 + t6800;
  t7696 = -0.183*t1717;
  t7697 = 0. + t7696;
  t4748 = t8*t852*t2122;
  t5847 = -1.*t1717*t5785;
  t5926 = t4748 + t5847;
  t7038 = t852*t1903*t3552;
  t7095 = t1862*t852*t2144;
  t7110 = t7038 + t7095;
  t6035 = -1.*t8*t1977;
  t6451 = -1.*t1717*t6326;
  t6517 = t6035 + t6451;

  p_output1(0)=t4581;
  p_output1(1)=t5926;
  p_output1(2)=t6517;
  p_output1(3)=0.;
  p_output1(4)=t6711;
  p_output1(5)=t6932;
  p_output1(6)=t7110;
  p_output1(7)=0.;
  p_output1(8)=t4147*t8 + t1717*t250*t852;
  p_output1(9)=t5785*t8 + t1717*t2122*t852;
  p_output1(10)=-1.*t1717*t1977 + t6326*t8;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.183*t4581 + 0.11079*t6711 + t3233*t7662 + t3619*t7680 + t4147*t7697 + t250*t7616*t852 + var1(0);
  p_output1(13)=0. - 0.183*t5926 + 0.11079*t6932 + t5467*t7662 + t5727*t7680 + t5785*t7697 + t2122*t7616*t852 + var1(1);
  p_output1(14)=0. - 0.183*t6517 + 0.11079*t7110 - 1.*t1977*t7616 + t6326*t7697 + t1903*t7662*t852 + t2144*t7680*t852 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_RL_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void H_RL_thigh_joint(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



