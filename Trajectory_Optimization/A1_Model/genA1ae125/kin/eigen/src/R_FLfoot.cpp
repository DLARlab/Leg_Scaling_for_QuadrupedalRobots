/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:04:45 GMT-05:00
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
  double t835;
  double t3496;
  double t3973;
  double t3640;
  double t4139;
  double t2585;
  double t854;
  double t2382;
  double t2604;
  double t3663;
  double t4279;
  double t4284;
  double t4303;
  double t4304;
  double t4306;
  double t4391;
  double t4447;
  double t4455;
  double t4582;
  double t591;
  double t4799;
  double t4893;
  double t4908;
  double t4934;
  double t4940;
  double t4966;
  double t4989;
  double t5003;
  double t5061;
  double t5064;
  double t5444;
  double t5475;
  double t5556;
  double t2533;
  double t4677;
  double t4700;
  double t4811;
  double t4819;
  double t4822;
  double t4845;
  double t5089;
  double t5188;
  double t5263;
  double t5278;
  double t5295;
  double t5438;
  double t5558;
  double t5593;
  double t5620;
  double t5622;
  double t5642;
  t835 = Cos(var1[3]);
  t3496 = Cos(var1[5]);
  t3973 = Sin(var1[3]);
  t3640 = Sin(var1[4]);
  t4139 = Sin(var1[5]);
  t2585 = Cos(var1[10]);
  t854 = Cos(var1[4]);
  t2382 = Sin(var1[10]);
  t2604 = Cos(var1[9]);
  t3663 = t835*t3496*t3640;
  t4279 = t3973*t4139;
  t4284 = t3663 + t4279;
  t4303 = t2604*t4284;
  t4304 = Sin(var1[9]);
  t4306 = -1.*t3496*t3973;
  t4391 = t835*t3640*t4139;
  t4447 = t4306 + t4391;
  t4455 = -1.*t4304*t4447;
  t4582 = t4303 + t4455;
  t591 = Sin(var1[11]);
  t4799 = Cos(var1[11]);
  t4893 = t3496*t3973*t3640;
  t4908 = -1.*t835*t4139;
  t4934 = t4893 + t4908;
  t4940 = t2604*t4934;
  t4966 = t835*t3496;
  t4989 = t3973*t3640*t4139;
  t5003 = t4966 + t4989;
  t5061 = -1.*t4304*t5003;
  t5064 = t4940 + t5061;
  t5444 = t2604*t854*t3496;
  t5475 = -1.*t854*t4304*t4139;
  t5556 = t5444 + t5475;
  t2533 = t835*t854*t2382;
  t4677 = t2585*t4582;
  t4700 = t2533 + t4677;
  t4811 = t2585*t835*t854;
  t4819 = -1.*t2382*t4582;
  t4822 = t4811 + t4819;
  t4845 = t854*t2382*t3973;
  t5089 = t2585*t5064;
  t5188 = t4845 + t5089;
  t5263 = t2585*t854*t3973;
  t5278 = -1.*t2382*t5064;
  t5295 = t5263 + t5278;
  t5438 = -1.*t2382*t3640;
  t5558 = t2585*t5556;
  t5593 = t5438 + t5558;
  t5620 = -1.*t2585*t3640;
  t5622 = -1.*t2382*t5556;
  t5642 = t5620 + t5622;

  p_output1(0)=t4799*t4822 - 1.*t4700*t591;
  p_output1(1)=t4799*t5295 - 1.*t5188*t591;
  p_output1(2)=t4799*t5642 - 1.*t5593*t591;
  p_output1(3)=t4284*t4304 + t2604*t4447;
  p_output1(4)=t4304*t4934 + t2604*t5003;
  p_output1(5)=t2604*t4139*t854 + t3496*t4304*t854;
  p_output1(6)=t4700*t4799 + t4822*t591;
  p_output1(7)=t4799*t5188 + t5295*t591;
  p_output1(8)=t4799*t5593 + t5642*t591;
}


       
Eigen::Matrix<double,3,3> R_FLfoot(const Eigen::Matrix<double,18,1> &var1)
//void R_FLfoot(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



