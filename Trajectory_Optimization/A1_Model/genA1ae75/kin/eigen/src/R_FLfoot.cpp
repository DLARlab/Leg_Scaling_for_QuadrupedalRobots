/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:52:02 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_FLfoot.h"

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
  double t430;
  double t3443;
  double t4724;
  double t3451;
  double t4731;
  double t3194;
  double t951;
  double t1032;
  double t3295;
  double t4567;
  double t4769;
  double t4974;
  double t5025;
  double t5034;
  double t5046;
  double t5128;
  double t5143;
  double t5147;
  double t5158;
  double t238;
  double t5234;
  double t5307;
  double t5310;
  double t5313;
  double t5372;
  double t5391;
  double t5403;
  double t5409;
  double t5411;
  double t5440;
  double t5559;
  double t5565;
  double t5566;
  double t3051;
  double t5163;
  double t5170;
  double t5237;
  double t5257;
  double t5269;
  double t5303;
  double t5446;
  double t5450;
  double t5460;
  double t5505;
  double t5522;
  double t5558;
  double t5572;
  double t5580;
  double t5614;
  double t5618;
  double t5623;
  t430 = Cos(var1[3]);
  t3443 = Cos(var1[5]);
  t4724 = Sin(var1[3]);
  t3451 = Sin(var1[4]);
  t4731 = Sin(var1[5]);
  t3194 = Cos(var1[10]);
  t951 = Cos(var1[4]);
  t1032 = Sin(var1[10]);
  t3295 = Cos(var1[9]);
  t4567 = t430*t3443*t3451;
  t4769 = t4724*t4731;
  t4974 = t4567 + t4769;
  t5025 = t3295*t4974;
  t5034 = Sin(var1[9]);
  t5046 = -1.*t3443*t4724;
  t5128 = t430*t3451*t4731;
  t5143 = t5046 + t5128;
  t5147 = -1.*t5034*t5143;
  t5158 = t5025 + t5147;
  t238 = Sin(var1[11]);
  t5234 = Cos(var1[11]);
  t5307 = t3443*t4724*t3451;
  t5310 = -1.*t430*t4731;
  t5313 = t5307 + t5310;
  t5372 = t3295*t5313;
  t5391 = t430*t3443;
  t5403 = t4724*t3451*t4731;
  t5409 = t5391 + t5403;
  t5411 = -1.*t5034*t5409;
  t5440 = t5372 + t5411;
  t5559 = t3295*t951*t3443;
  t5565 = -1.*t951*t5034*t4731;
  t5566 = t5559 + t5565;
  t3051 = t430*t951*t1032;
  t5163 = t3194*t5158;
  t5170 = t3051 + t5163;
  t5237 = t3194*t430*t951;
  t5257 = -1.*t1032*t5158;
  t5269 = t5237 + t5257;
  t5303 = t951*t1032*t4724;
  t5446 = t3194*t5440;
  t5450 = t5303 + t5446;
  t5460 = t3194*t951*t4724;
  t5505 = -1.*t1032*t5440;
  t5522 = t5460 + t5505;
  t5558 = -1.*t1032*t3451;
  t5572 = t3194*t5566;
  t5580 = t5558 + t5572;
  t5614 = -1.*t3194*t3451;
  t5618 = -1.*t1032*t5566;
  t5623 = t5614 + t5618;

  p_output1(0)=-1.*t238*t5170 + t5234*t5269;
  p_output1(1)=-1.*t238*t5450 + t5234*t5522;
  p_output1(2)=-1.*t238*t5580 + t5234*t5623;
  p_output1(3)=t4974*t5034 + t3295*t5143;
  p_output1(4)=t5034*t5313 + t3295*t5409;
  p_output1(5)=t3295*t4731*t951 + t3443*t5034*t951;
  p_output1(6)=t5170*t5234 + t238*t5269;
  p_output1(7)=t5234*t5450 + t238*t5522;
  p_output1(8)=t5234*t5580 + t238*t5623;
}


       
Eigen::Matrix<double,3,3> R_FLfoot(const Eigen::Matrix<double,18,1> &var1)
//void R_FLfoot(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



