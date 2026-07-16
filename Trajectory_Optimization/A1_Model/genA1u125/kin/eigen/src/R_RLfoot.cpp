/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:21:47 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RLfoot.h"

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
  double t628;
  double t2116;
  double t2999;
  double t2126;
  double t3295;
  double t1621;
  double t764;
  double t1016;
  double t1780;
  double t2416;
  double t3597;
  double t3714;
  double t3729;
  double t3748;
  double t4230;
  double t4382;
  double t4460;
  double t4492;
  double t4568;
  double t548;
  double t4666;
  double t5166;
  double t5191;
  double t5229;
  double t5230;
  double t5245;
  double t5257;
  double t5290;
  double t5363;
  double t5396;
  double t5533;
  double t5536;
  double t5573;
  double t1566;
  double t4571;
  double t4580;
  double t4693;
  double t4819;
  double t4840;
  double t5088;
  double t5464;
  double t5473;
  double t5480;
  double t5482;
  double t5483;
  double t5503;
  double t5574;
  double t5601;
  double t5649;
  double t5674;
  double t5677;
  t628 = Cos(var1[3]);
  t2116 = Cos(var1[5]);
  t2999 = Sin(var1[3]);
  t2126 = Sin(var1[4]);
  t3295 = Sin(var1[5]);
  t1621 = Cos(var1[16]);
  t764 = Cos(var1[4]);
  t1016 = Sin(var1[16]);
  t1780 = Cos(var1[15]);
  t2416 = t628*t2116*t2126;
  t3597 = t2999*t3295;
  t3714 = t2416 + t3597;
  t3729 = t1780*t3714;
  t3748 = Sin(var1[15]);
  t4230 = -1.*t2116*t2999;
  t4382 = t628*t2126*t3295;
  t4460 = t4230 + t4382;
  t4492 = -1.*t3748*t4460;
  t4568 = t3729 + t4492;
  t548 = Sin(var1[17]);
  t4666 = Cos(var1[17]);
  t5166 = t2116*t2999*t2126;
  t5191 = -1.*t628*t3295;
  t5229 = t5166 + t5191;
  t5230 = t1780*t5229;
  t5245 = t628*t2116;
  t5257 = t2999*t2126*t3295;
  t5290 = t5245 + t5257;
  t5363 = -1.*t3748*t5290;
  t5396 = t5230 + t5363;
  t5533 = t1780*t764*t2116;
  t5536 = -1.*t764*t3748*t3295;
  t5573 = t5533 + t5536;
  t1566 = t628*t764*t1016;
  t4571 = t1621*t4568;
  t4580 = t1566 + t4571;
  t4693 = t1621*t628*t764;
  t4819 = -1.*t1016*t4568;
  t4840 = t4693 + t4819;
  t5088 = t764*t1016*t2999;
  t5464 = t1621*t5396;
  t5473 = t5088 + t5464;
  t5480 = t1621*t764*t2999;
  t5482 = -1.*t1016*t5396;
  t5483 = t5480 + t5482;
  t5503 = -1.*t1016*t2126;
  t5574 = t1621*t5573;
  t5601 = t5503 + t5574;
  t5649 = -1.*t1621*t2126;
  t5674 = -1.*t1016*t5573;
  t5677 = t5649 + t5674;

  p_output1(0)=t4666*t4840 - 1.*t4580*t548;
  p_output1(1)=-1.*t5473*t548 + t4666*t5483;
  p_output1(2)=-1.*t548*t5601 + t4666*t5677;
  p_output1(3)=t3714*t3748 + t1780*t4460;
  p_output1(4)=t3748*t5229 + t1780*t5290;
  p_output1(5)=t1780*t3295*t764 + t2116*t3748*t764;
  p_output1(6)=t4580*t4666 + t4840*t548;
  p_output1(7)=t4666*t5473 + t548*t5483;
  p_output1(8)=t4666*t5601 + t548*t5677;
}


       
Eigen::Matrix<double,3,3> R_RLfoot(const Eigen::Matrix<double,18,1> &var1)
//void R_RLfoot(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



