/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:26:58 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_FRfoot.h"

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
  double t758;
  double t2787;
  double t3126;
  double t3042;
  double t3308;
  double t1088;
  double t1427;
  double t3064;
  double t3756;
  double t3905;
  double t4008;
  double t4016;
  double t4193;
  double t4339;
  double t4445;
  double t4461;
  double t4463;
  double t845;
  double t4482;
  double t184;
  double t4727;
  double t4744;
  double t4758;
  double t4765;
  double t4782;
  double t4805;
  double t4882;
  double t4909;
  double t5004;
  double t4655;
  double t5263;
  double t5289;
  double t5307;
  double t4569;
  double t4602;
  double t4610;
  double t1262;
  double t4487;
  double t4506;
  double t5098;
  double t5117;
  double t5125;
  double t4703;
  double t5030;
  double t5040;
  double t5389;
  double t5402;
  double t5417;
  double t5253;
  double t5314;
  double t5346;
  t758 = Cos(var1[3]);
  t2787 = Cos(var1[5]);
  t3126 = Sin(var1[3]);
  t3042 = Sin(var1[4]);
  t3308 = Sin(var1[5]);
  t1088 = Cos(var1[7]);
  t1427 = Cos(var1[6]);
  t3064 = t758*t2787*t3042;
  t3756 = t3126*t3308;
  t3905 = t3064 + t3756;
  t4008 = t1427*t3905;
  t4016 = -1.*t2787*t3126;
  t4193 = t758*t3042*t3308;
  t4339 = t4016 + t4193;
  t4445 = Sin(var1[6]);
  t4461 = -1.*t4339*t4445;
  t4463 = t4008 + t4461;
  t845 = Cos(var1[4]);
  t4482 = Sin(var1[7]);
  t184 = Cos(var1[8]);
  t4727 = t2787*t3126*t3042;
  t4744 = -1.*t758*t3308;
  t4758 = t4727 + t4744;
  t4765 = t1427*t4758;
  t4782 = t758*t2787;
  t4805 = t3126*t3042*t3308;
  t4882 = t4782 + t4805;
  t4909 = -1.*t4882*t4445;
  t5004 = t4765 + t4909;
  t4655 = Sin(var1[8]);
  t5263 = t845*t2787*t1427;
  t5289 = -1.*t845*t3308*t4445;
  t5307 = t5263 + t5289;
  t4569 = t1088*t4463;
  t4602 = t758*t845*t4482;
  t4610 = t4569 + t4602;
  t1262 = t758*t845*t1088;
  t4487 = -1.*t4463*t4482;
  t4506 = t1262 + t4487;
  t5098 = t1088*t5004;
  t5117 = t845*t3126*t4482;
  t5125 = t5098 + t5117;
  t4703 = t845*t1088*t3126;
  t5030 = -1.*t5004*t4482;
  t5040 = t4703 + t5030;
  t5389 = t1088*t5307;
  t5402 = -1.*t3042*t4482;
  t5417 = t5389 + t5402;
  t5253 = -1.*t1088*t3042;
  t5314 = -1.*t5307*t4482;
  t5346 = t5253 + t5314;

  p_output1(0)=t184*t4506 - 1.*t4610*t4655;
  p_output1(1)=t184*t5040 - 1.*t4655*t5125;
  p_output1(2)=t184*t5346 - 1.*t4655*t5417;
  p_output1(3)=t1427*t4339 + t3905*t4445;
  p_output1(4)=t4445*t4758 + t1427*t4882;
  p_output1(5)=t1427*t3308*t845 + t2787*t4445*t845;
  p_output1(6)=t184*t4610 + t4506*t4655;
  p_output1(7)=t4655*t5040 + t184*t5125;
  p_output1(8)=t4655*t5346 + t184*t5417;
}


       
Eigen::Matrix<double,3,3> R_FRfoot(const Eigen::Matrix<double,18,1> &var1)
//void R_FRfoot(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



