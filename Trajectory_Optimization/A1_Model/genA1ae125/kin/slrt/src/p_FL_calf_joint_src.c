/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:03:17 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FL_calf_joint_src.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE static __inline__        /* use standard inline */
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
static void output1(double *p_output1,const double *var1)
{
  double t3103;
  double t5991;
  double t6018;
  double t5992;
  double t6020;
  double t5959;
  double t5997;
  double t6031;
  double t6034;
  double t6042;
  double t6054;
  double t6064;
  double t6078;
  double t5850;
  double t6105;
  double t687;
  double t6121;
  double t6138;
  double t6145;
  double t6163;
  double t6165;
  double t6167;
  double t6180;
  double t6195;
  double t6198;
  double t6203;
  double t6219;
  double t6220;
  double t6223;
  double t688;
  double t1816;
  double t2654;
  double t2811;
  double t5977;
  double t5985;
  double t6043;
  double t6045;
  double t6050;
  double t6053;
  double t6249;
  double t6256;
  double t6258;
  double t6265;
  double t6266;
  double t6267;
  double t6112;
  double t6116;
  double t6179;
  double t6183;
  double t6190;
  double t6277;
  double t6282;
  double t6289;
  double t6211;
  double t6212;
  double t6218;
  double t6298;
  double t6306;
  double t6310;
  double t6313;
  double t6314;
  double t6322;
  double t6385;
  double t6387;
  double t6388;
  double t6401;
  double t6405;
  double t6406;
  double t6414;
  double t6415;
  double t6419;
  t3103 = Cos(var1[3]);
  t5991 = Cos(var1[5]);
  t6018 = Sin(var1[3]);
  t5992 = Sin(var1[4]);
  t6020 = Sin(var1[5]);
  t5959 = Sin(var1[9]);
  t5997 = t3103*t5991*t5992;
  t6031 = t6018*t6020;
  t6034 = t5997 + t6031;
  t6042 = Cos(var1[9]);
  t6054 = -1.*t5991*t6018;
  t6064 = t3103*t5992*t6020;
  t6078 = t6054 + t6064;
  t5850 = Cos(var1[4]);
  t6105 = Sin(var1[10]);
  t687 = Cos(var1[10]);
  t6121 = t6042*t6034;
  t6138 = -1.*t5959*t6078;
  t6145 = t6121 + t6138;
  t6163 = Cos(var1[11]);
  t6165 = -1.*t6163;
  t6167 = 1. + t6165;
  t6180 = Sin(var1[11]);
  t6195 = t3103*t5850*t6105;
  t6198 = t687*t6145;
  t6203 = t6195 + t6198;
  t6219 = t687*t3103*t5850;
  t6220 = -1.*t6105*t6145;
  t6223 = t6219 + t6220;
  t688 = -1.*t687;
  t1816 = 1. + t688;
  t2654 = 0.183*t1816;
  t2811 = 0. + t2654;
  t5977 = -0.047*t5959;
  t5985 = 0. + t5977;
  t6043 = -1.*t6042;
  t6045 = 1. + t6043;
  t6050 = 0.047*t6045;
  t6053 = 0. + t6050;
  t6249 = t5991*t6018*t5992;
  t6256 = -1.*t3103*t6020;
  t6258 = t6249 + t6256;
  t6265 = t3103*t5991;
  t6266 = t6018*t5992*t6020;
  t6267 = t6265 + t6266;
  t6112 = 0.183*t6105;
  t6116 = 0. + t6112;
  t6179 = -0.25*t6167;
  t6183 = 0.183*t6180;
  t6190 = 0. + t6179 + t6183;
  t6277 = t6042*t6258;
  t6282 = -1.*t5959*t6267;
  t6289 = t6277 + t6282;
  t6211 = 0.183*t6167;
  t6212 = 0.25*t6180;
  t6218 = 0. + t6211 + t6212;
  t6298 = t5850*t6105*t6018;
  t6306 = t687*t6289;
  t6310 = t6298 + t6306;
  t6313 = t687*t5850*t6018;
  t6314 = -1.*t6105*t6289;
  t6322 = t6313 + t6314;
  t6385 = t6042*t5850*t5991;
  t6387 = -1.*t5850*t5959*t6020;
  t6388 = t6385 + t6387;
  t6401 = -1.*t6105*t5992;
  t6405 = t687*t6388;
  t6406 = t6401 + t6405;
  t6414 = -1.*t687*t5992;
  t6415 = -1.*t6105*t6388;
  t6419 = t6414 + t6415;
  p_output1[0]=0. + t2811*t3103*t5850 + t5985*t6034 + t6053*t6078 + 0.13205*(t5959*t6034 + t6042*t6078) + t6116*t6145 + t6190*t6203 + t6218*t6223 + 0.183*(-1.*t6180*t6203 + t6163*t6223) - 0.25*(t6163*t6203 + t6180*t6223) + var1[0];
  p_output1[1]=0. + t2811*t5850*t6018 + t5985*t6258 + t6053*t6267 + 0.13205*(t5959*t6258 + t6042*t6267) + t6116*t6289 + t6190*t6310 + t6218*t6322 + 0.183*(-1.*t6180*t6310 + t6163*t6322) - 0.25*(t6163*t6310 + t6180*t6322) + var1[1];
  p_output1[2]=0. + t5850*t5985*t5991 - 1.*t2811*t5992 + 0.13205*(t5850*t5959*t5991 + t5850*t6020*t6042) + t5850*t6020*t6053 + t6116*t6388 + t6190*t6406 + t6218*t6419 + 0.183*(-1.*t6180*t6406 + t6163*t6419) - 0.25*(t6163*t6406 + t6180*t6419) + var1[2];
}



void p_FL_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
