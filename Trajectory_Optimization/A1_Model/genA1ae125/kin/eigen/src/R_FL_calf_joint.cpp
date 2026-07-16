/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:04:23 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_FL_calf_joint.h"

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
static void output1(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  double t448;
  double t1486;
  double t1502;
  double t1499;
  double t1512;
  double t1447;
  double t641;
  double t787;
  double t1482;
  double t1500;
  double t1517;
  double t1519;
  double t1528;
  double t1530;
  double t1531;
  double t1533;
  double t1535;
  double t1536;
  double t2352;
  double t328;
  double t3136;
  double t3512;
  double t3514;
  double t3515;
  double t3517;
  double t3519;
  double t3522;
  double t3531;
  double t3540;
  double t3543;
  double t3622;
  double t3649;
  double t3655;
  double t1252;
  double t3010;
  double t3031;
  double t3354;
  double t3365;
  double t3366;
  double t3502;
  double t3549;
  double t3560;
  double t3563;
  double t3581;
  double t3585;
  double t3621;
  double t3667;
  double t3668;
  double t3670;
  double t3674;
  double t3677;
  t448 = Cos(var1[3]);
  t1486 = Cos(var1[5]);
  t1502 = Sin(var1[3]);
  t1499 = Sin(var1[4]);
  t1512 = Sin(var1[5]);
  t1447 = Cos(var1[10]);
  t641 = Cos(var1[4]);
  t787 = Sin(var1[10]);
  t1482 = Cos(var1[9]);
  t1500 = t448*t1486*t1499;
  t1517 = t1502*t1512;
  t1519 = t1500 + t1517;
  t1528 = t1482*t1519;
  t1530 = Sin(var1[9]);
  t1531 = -1.*t1486*t1502;
  t1533 = t448*t1499*t1512;
  t1535 = t1531 + t1533;
  t1536 = -1.*t1530*t1535;
  t2352 = t1528 + t1536;
  t328 = Sin(var1[11]);
  t3136 = Cos(var1[11]);
  t3512 = t1486*t1502*t1499;
  t3514 = -1.*t448*t1512;
  t3515 = t3512 + t3514;
  t3517 = t1482*t3515;
  t3519 = t448*t1486;
  t3522 = t1502*t1499*t1512;
  t3531 = t3519 + t3522;
  t3540 = -1.*t1530*t3531;
  t3543 = t3517 + t3540;
  t3622 = t1482*t641*t1486;
  t3649 = -1.*t641*t1530*t1512;
  t3655 = t3622 + t3649;
  t1252 = t448*t641*t787;
  t3010 = t1447*t2352;
  t3031 = t1252 + t3010;
  t3354 = t1447*t448*t641;
  t3365 = -1.*t787*t2352;
  t3366 = t3354 + t3365;
  t3502 = t641*t787*t1502;
  t3549 = t1447*t3543;
  t3560 = t3502 + t3549;
  t3563 = t1447*t641*t1502;
  t3581 = -1.*t787*t3543;
  t3585 = t3563 + t3581;
  t3621 = -1.*t787*t1499;
  t3667 = t1447*t3655;
  t3668 = t3621 + t3667;
  t3670 = -1.*t1447*t1499;
  t3674 = -1.*t787*t3655;
  t3677 = t3670 + t3674;

  p_output1(0)=-1.*t3031*t328 + t3136*t3366;
  p_output1(1)=-1.*t328*t3560 + t3136*t3585;
  p_output1(2)=-1.*t328*t3668 + t3136*t3677;
  p_output1(3)=t1519*t1530 + t1482*t1535;
  p_output1(4)=t1530*t3515 + t1482*t3531;
  p_output1(5)=t1482*t1512*t641 + t1486*t1530*t641;
  p_output1(6)=t3031*t3136 + t328*t3366;
  p_output1(7)=t3136*t3560 + t328*t3585;
  p_output1(8)=t3136*t3668 + t328*t3677;
}


       
Eigen::Matrix<double,3,3> R_FL_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_FL_calf_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



