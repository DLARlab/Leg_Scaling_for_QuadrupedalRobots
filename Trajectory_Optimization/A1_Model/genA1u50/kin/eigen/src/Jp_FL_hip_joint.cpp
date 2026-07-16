/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:13:38 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_FL_hip_joint.h"

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
static void output1(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  double t387;
  double t2646;
  double t1564;
  double t2055;
  double t4704;
  double t848;
  double t2219;
  double t4714;
  double t8245;
  double t8306;
  double t8329;
  double t8331;
  double t8332;
  double t383;
  double t943;
  double t1543;
  double t8314;
  double t8323;
  double t8324;
  double t8328;
  double t8356;
  double t8357;
  double t8358;
  double t8360;
  double t8361;
  double t8362;
  double t8413;
  double t8427;
  double t8429;
  double t8442;
  double t8443;
  double t8447;
  double t8433;
  double t8451;
  double t8499;
  double t8500;
  double t8501;
  double t8463;
  double t8465;
  double t8466;
  double t8480;
  t387 = Sin(var1[3]);
  t2646 = Cos(var1[3]);
  t1564 = Cos(var1[5]);
  t2055 = Sin(var1[4]);
  t4704 = Sin(var1[5]);
  t848 = Sin(var1[9]);
  t2219 = -1.*t1564*t387*t2055;
  t4714 = t2646*t4704;
  t8245 = t2219 + t4714;
  t8306 = Cos(var1[9]);
  t8329 = -1.*t2646*t1564;
  t8331 = -1.*t387*t2055*t4704;
  t8332 = t8329 + t8331;
  t383 = Cos(var1[4]);
  t943 = -0.047*t848;
  t1543 = 0. + t943;
  t8314 = -1.*t8306;
  t8323 = 1. + t8314;
  t8324 = 0.047*t8323;
  t8328 = 0. + t8324;
  t8356 = t2646*t1564*t2055;
  t8357 = t387*t4704;
  t8358 = t8356 + t8357;
  t8360 = -1.*t1564*t387;
  t8361 = t2646*t2055*t4704;
  t8362 = t8360 + t8361;
  t8413 = t1564*t387;
  t8427 = -1.*t2646*t2055*t4704;
  t8429 = t8413 + t8427;
  t8442 = t1564*t387*t2055;
  t8443 = -1.*t2646*t4704;
  t8447 = t8442 + t8443;
  t8433 = t8306*t8358;
  t8451 = t8306*t8447;
  t8499 = t2646*t1564;
  t8500 = t387*t2055*t4704;
  t8501 = t8499 + t8500;
  t8463 = t8306*t383*t1564;
  t8465 = -1.*t383*t848*t4704;
  t8466 = t8463 + t8465;
  t8480 = 0.047*t8466;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=-0.183*t383*t387 + t1543*t8245 + t8328*t8332 + 0.047*(t8306*t8332 + t8245*t848);
  p_output1(10)=0.183*t2646*t383 + t1543*t8358 + t8328*t8362 + 0.047*(t8306*t8362 + t8358*t848);
  p_output1(11)=0;
  p_output1(12)=-0.183*t2055*t2646 + t1543*t1564*t2646*t383 + t2646*t383*t4704*t8328 + 0.047*(t2646*t383*t4704*t8306 + t1564*t2646*t383*t848);
  p_output1(13)=-0.183*t2055*t387 + t1543*t1564*t383*t387 + t383*t387*t4704*t8328 + 0.047*(t383*t387*t4704*t8306 + t1564*t383*t387*t848);
  p_output1(14)=-1.*t1543*t1564*t2055 - 0.183*t383 - 1.*t2055*t4704*t8328 + 0.047*(-1.*t2055*t4704*t8306 - 1.*t1564*t2055*t848);
  p_output1(15)=t8328*t8358 + t1543*t8429 + 0.047*(t8433 + t8429*t848);
  p_output1(16)=t1543*t8332 + t8328*t8447 + 0.047*(t8451 + t8332*t848);
  p_output1(17)=-1.*t1543*t383*t4704 + t1564*t383*t8328 + t8480;
  p_output1(18)=0;
  p_output1(19)=0;
  p_output1(20)=0;
  p_output1(21)=0;
  p_output1(22)=0;
  p_output1(23)=0;
  p_output1(24)=0;
  p_output1(25)=0;
  p_output1(26)=0;
  p_output1(27)=-0.047*t8306*t8358 + 0.047*t8362*t848 + 0.047*(t8433 - 1.*t8362*t848);
  p_output1(28)=-0.047*t8306*t8447 + 0.047*t848*t8501 + 0.047*(t8451 - 1.*t848*t8501);
  p_output1(29)=-0.047*t1564*t383*t8306 + 0.047*t383*t4704*t848 + t8480;
  p_output1(30)=0;
  p_output1(31)=0;
  p_output1(32)=0;
  p_output1(33)=0;
  p_output1(34)=0;
  p_output1(35)=0;
  p_output1(36)=0;
  p_output1(37)=0;
  p_output1(38)=0;
  p_output1(39)=0;
  p_output1(40)=0;
  p_output1(41)=0;
  p_output1(42)=0;
  p_output1(43)=0;
  p_output1(44)=0;
  p_output1(45)=0;
  p_output1(46)=0;
  p_output1(47)=0;
  p_output1(48)=0;
  p_output1(49)=0;
  p_output1(50)=0;
  p_output1(51)=0;
  p_output1(52)=0;
  p_output1(53)=0;
}


       
Eigen::Matrix<double,3,18> Jp_FL_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void Jp_FL_hip_joint(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



