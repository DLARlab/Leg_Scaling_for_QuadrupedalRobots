/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:04:38 GMT-05:00
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
  double t2179;
  double t3960;
  double t4268;
  double t3977;
  double t4383;
  double t3541;
  double t4233;
  double t4529;
  double t4777;
  double t5055;
  double t5880;
  double t5893;
  double t5931;
  double t2640;
  double t5995;
  double t526;
  double t6059;
  double t6063;
  double t6067;
  double t6089;
  double t6096;
  double t6107;
  double t6116;
  double t6119;
  double t6124;
  double t6125;
  double t6201;
  double t6206;
  double t6214;
  double t1221;
  double t1336;
  double t1419;
  double t1830;
  double t3545;
  double t3747;
  double t5406;
  double t5506;
  double t5531;
  double t5640;
  double t6336;
  double t6341;
  double t6348;
  double t6362;
  double t6374;
  double t6387;
  double t6040;
  double t6051;
  double t6112;
  double t6117;
  double t6118;
  double t6437;
  double t6438;
  double t6439;
  double t6165;
  double t6186;
  double t6196;
  double t6452;
  double t6460;
  double t6464;
  double t6468;
  double t6479;
  double t6493;
  double t6621;
  double t6624;
  double t6627;
  double t6633;
  double t6636;
  double t6639;
  double t6642;
  double t6644;
  double t6646;
  t2179 = Cos(var1[3]);
  t3960 = Cos(var1[5]);
  t4268 = Sin(var1[3]);
  t3977 = Sin(var1[4]);
  t4383 = Sin(var1[5]);
  t3541 = Sin(var1[15]);
  t4233 = t2179*t3960*t3977;
  t4529 = t4268*t4383;
  t4777 = t4233 + t4529;
  t5055 = Cos(var1[15]);
  t5880 = -1.*t3960*t4268;
  t5893 = t2179*t3977*t4383;
  t5931 = t5880 + t5893;
  t2640 = Cos(var1[4]);
  t5995 = Sin(var1[16]);
  t526 = Cos(var1[16]);
  t6059 = t5055*t4777;
  t6063 = -1.*t3541*t5931;
  t6067 = t6059 + t6063;
  t6089 = Cos(var1[17]);
  t6096 = -1.*t6089;
  t6107 = 1. + t6096;
  t6116 = Sin(var1[17]);
  t6119 = t2179*t2640*t5995;
  t6124 = t526*t6067;
  t6125 = t6119 + t6124;
  t6201 = t526*t2179*t2640;
  t6206 = -1.*t5995*t6067;
  t6214 = t6201 + t6206;
  t1221 = -1.*t526;
  t1336 = 1. + t1221;
  t1419 = -0.183*t1336;
  t1830 = 0. + t1419;
  t3545 = -0.047*t3541;
  t3747 = 0. + t3545;
  t5406 = -1.*t5055;
  t5506 = 1. + t5406;
  t5531 = 0.047*t5506;
  t5640 = 0. + t5531;
  t6336 = t3960*t4268*t3977;
  t6341 = -1.*t2179*t4383;
  t6348 = t6336 + t6341;
  t6362 = t2179*t3960;
  t6374 = t4268*t3977*t4383;
  t6387 = t6362 + t6374;
  t6040 = -0.183*t5995;
  t6051 = 0. + t6040;
  t6112 = -0.25*t6107;
  t6117 = -0.183*t6116;
  t6118 = 0. + t6112 + t6117;
  t6437 = t5055*t6348;
  t6438 = -1.*t3541*t6387;
  t6439 = t6437 + t6438;
  t6165 = -0.183*t6107;
  t6186 = 0.25*t6116;
  t6196 = 0. + t6165 + t6186;
  t6452 = t2640*t5995*t4268;
  t6460 = t526*t6439;
  t6464 = t6452 + t6460;
  t6468 = t526*t2640*t4268;
  t6479 = -1.*t5995*t6439;
  t6493 = t6468 + t6479;
  t6621 = t5055*t2640*t3960;
  t6624 = -1.*t2640*t3541*t4383;
  t6627 = t6621 + t6624;
  t6633 = -1.*t5995*t3977;
  t6636 = t526*t6627;
  t6639 = t6633 + t6636;
  t6642 = -1.*t526*t3977;
  t6644 = -1.*t5995*t6627;
  t6646 = t6642 + t6644;

  p_output1(0)=0. + t1830*t2179*t2640 + t3747*t4777 + t5640*t5931 + 0.13205*(t3541*t4777 + t5055*t5931) + t6051*t6067 + t6118*t6125 + t6196*t6214 - 0.183*(-1.*t6116*t6125 + t6089*t6214) - 0.25*(t6089*t6125 + t6116*t6214) + var1(0);
  p_output1(1)=0. + t1830*t2640*t4268 + t3747*t6348 + t5640*t6387 + 0.13205*(t3541*t6348 + t5055*t6387) + t6051*t6439 + t6118*t6464 + t6196*t6493 - 0.183*(-1.*t6116*t6464 + t6089*t6493) - 0.25*(t6089*t6464 + t6116*t6493) + var1(1);
  p_output1(2)=0. + t2640*t3747*t3960 - 1.*t1830*t3977 + 0.13205*(t2640*t3541*t3960 + t2640*t4383*t5055) + t2640*t4383*t5640 + t6051*t6627 + t6118*t6639 + t6196*t6646 - 0.183*(-1.*t6116*t6639 + t6089*t6646) - 0.25*(t6089*t6639 + t6116*t6646) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_RL_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_RL_calf_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



