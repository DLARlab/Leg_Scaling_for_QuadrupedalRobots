/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:14:07 GMT-05:00
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
  double t1539;
  double t3737;
  double t4628;
  double t3930;
  double t4802;
  double t3298;
  double t1566;
  double t3124;
  double t3467;
  double t4129;
  double t4872;
  double t4874;
  double t5033;
  double t5112;
  double t5157;
  double t5158;
  double t5181;
  double t5193;
  double t5198;
  double t1170;
  double t5214;
  double t5251;
  double t5252;
  double t5253;
  double t5258;
  double t5259;
  double t5377;
  double t5391;
  double t5394;
  double t5395;
  double t5603;
  double t5617;
  double t5631;
  double t3261;
  double t5201;
  double t5202;
  double t5217;
  double t5227;
  double t5236;
  double t5249;
  double t5396;
  double t5411;
  double t5421;
  double t5439;
  double t5445;
  double t5590;
  double t5650;
  double t5677;
  double t5734;
  double t5747;
  double t5781;
  t1539 = Cos(var1[3]);
  t3737 = Cos(var1[5]);
  t4628 = Sin(var1[3]);
  t3930 = Sin(var1[4]);
  t4802 = Sin(var1[5]);
  t3298 = Cos(var1[16]);
  t1566 = Cos(var1[4]);
  t3124 = Sin(var1[16]);
  t3467 = Cos(var1[15]);
  t4129 = t1539*t3737*t3930;
  t4872 = t4628*t4802;
  t4874 = t4129 + t4872;
  t5033 = t3467*t4874;
  t5112 = Sin(var1[15]);
  t5157 = -1.*t3737*t4628;
  t5158 = t1539*t3930*t4802;
  t5181 = t5157 + t5158;
  t5193 = -1.*t5112*t5181;
  t5198 = t5033 + t5193;
  t1170 = Sin(var1[17]);
  t5214 = Cos(var1[17]);
  t5251 = t3737*t4628*t3930;
  t5252 = -1.*t1539*t4802;
  t5253 = t5251 + t5252;
  t5258 = t3467*t5253;
  t5259 = t1539*t3737;
  t5377 = t4628*t3930*t4802;
  t5391 = t5259 + t5377;
  t5394 = -1.*t5112*t5391;
  t5395 = t5258 + t5394;
  t5603 = t3467*t1566*t3737;
  t5617 = -1.*t1566*t5112*t4802;
  t5631 = t5603 + t5617;
  t3261 = t1539*t1566*t3124;
  t5201 = t3298*t5198;
  t5202 = t3261 + t5201;
  t5217 = t3298*t1539*t1566;
  t5227 = -1.*t3124*t5198;
  t5236 = t5217 + t5227;
  t5249 = t1566*t3124*t4628;
  t5396 = t3298*t5395;
  t5411 = t5249 + t5396;
  t5421 = t3298*t1566*t4628;
  t5439 = -1.*t3124*t5395;
  t5445 = t5421 + t5439;
  t5590 = -1.*t3124*t3930;
  t5650 = t3298*t5631;
  t5677 = t5590 + t5650;
  t5734 = -1.*t3298*t3930;
  t5747 = -1.*t3124*t5631;
  t5781 = t5734 + t5747;

  p_output1(0)=-1.*t1170*t5202 + t5214*t5236;
  p_output1(1)=-1.*t1170*t5411 + t5214*t5445;
  p_output1(2)=-1.*t1170*t5677 + t5214*t5781;
  p_output1(3)=t4874*t5112 + t3467*t5181;
  p_output1(4)=t5112*t5253 + t3467*t5391;
  p_output1(5)=t1566*t3467*t4802 + t1566*t3737*t5112;
  p_output1(6)=t5202*t5214 + t1170*t5236;
  p_output1(7)=t5214*t5411 + t1170*t5445;
  p_output1(8)=t5214*t5677 + t1170*t5781;
}


       
Eigen::Matrix<double,3,3> R_RLfoot(const Eigen::Matrix<double,18,1> &var1)
//void R_RLfoot(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



