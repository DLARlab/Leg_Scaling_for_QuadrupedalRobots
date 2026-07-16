/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:13:34 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_FR_thigh_joint.h"

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
  double t1142;
  double t8025;
  double t8050;
  double t8048;
  double t8058;
  double t1293;
  double t5556;
  double t8021;
  double t8074;
  double t8077;
  double t8064;
  double t8066;
  double t8073;
  double t8049;
  double t8059;
  double t8060;
  double t8086;
  double t8089;
  double t8091;
  double t8082;
  double t8083;
  double t8084;
  double t8061;
  double t8075;
  double t8076;
  double t8085;
  double t8092;
  double t8093;
  double t8099;
  double t8100;
  double t8103;
  t1142 = Cos(var1[3]);
  t8025 = Cos(var1[5]);
  t8050 = Sin(var1[3]);
  t8048 = Sin(var1[4]);
  t8058 = Sin(var1[5]);
  t1293 = Cos(var1[4]);
  t5556 = Cos(var1[7]);
  t8021 = Cos(var1[6]);
  t8074 = Sin(var1[6]);
  t8077 = Sin(var1[7]);
  t8064 = -1.*t8025*t8050;
  t8066 = t1142*t8048*t8058;
  t8073 = t8064 + t8066;
  t8049 = t1142*t8025*t8048;
  t8059 = t8050*t8058;
  t8060 = t8049 + t8059;
  t8086 = t1142*t8025;
  t8089 = t8050*t8048*t8058;
  t8091 = t8086 + t8089;
  t8082 = t8025*t8050*t8048;
  t8083 = -1.*t1142*t8058;
  t8084 = t8082 + t8083;
  t8061 = t8021*t8060;
  t8075 = -1.*t8073*t8074;
  t8076 = t8061 + t8075;
  t8085 = t8021*t8084;
  t8092 = -1.*t8091*t8074;
  t8093 = t8085 + t8092;
  t8099 = t1293*t8025*t8021;
  t8100 = -1.*t1293*t8058*t8074;
  t8103 = t8099 + t8100;

  p_output1(0)=t1142*t1293*t5556 - 1.*t8076*t8077;
  p_output1(1)=t1293*t5556*t8050 - 1.*t8077*t8093;
  p_output1(2)=-1.*t5556*t8048 - 1.*t8077*t8103;
  p_output1(3)=t8021*t8073 + t8060*t8074;
  p_output1(4)=t8074*t8084 + t8021*t8091;
  p_output1(5)=t1293*t8021*t8058 + t1293*t8025*t8074;
  p_output1(6)=t5556*t8076 + t1142*t1293*t8077;
  p_output1(7)=t1293*t8050*t8077 + t5556*t8093;
  p_output1(8)=-1.*t8048*t8077 + t5556*t8103;
}


       
Eigen::Matrix<double,3,3> R_FR_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_FR_thigh_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



