/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:10:14 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RR_calf_joint_src.h"

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
  double t3555;
  double t8987;
  double t9054;
  double t8988;
  double t9060;
  double t8904;
  double t4938;
  double t8807;
  double t8956;
  double t9034;
  double t9132;
  double t9143;
  double t9145;
  double t9147;
  double t9159;
  double t9160;
  double t9161;
  double t9162;
  double t9163;
  double t1157;
  double t9172;
  double t9224;
  double t9232;
  double t9233;
  double t9234;
  double t9236;
  double t9237;
  double t9238;
  double t9240;
  double t9245;
  double t9328;
  double t9329;
  double t9336;
  double t8903;
  double t9164;
  double t9166;
  double t9199;
  double t9213;
  double t9216;
  double t9223;
  double t9250;
  double t9261;
  double t9286;
  double t9293;
  double t9307;
  double t9325;
  double t9337;
  double t9343;
  double t9347;
  double t9351;
  double t9353;
  t3555 = Cos(var1[3]);
  t8987 = Cos(var1[5]);
  t9054 = Sin(var1[3]);
  t8988 = Sin(var1[4]);
  t9060 = Sin(var1[5]);
  t8904 = Cos(var1[13]);
  t4938 = Cos(var1[4]);
  t8807 = Sin(var1[13]);
  t8956 = Cos(var1[12]);
  t9034 = t3555*t8987*t8988;
  t9132 = t9054*t9060;
  t9143 = t9034 + t9132;
  t9145 = t8956*t9143;
  t9147 = Sin(var1[12]);
  t9159 = -1.*t8987*t9054;
  t9160 = t3555*t8988*t9060;
  t9161 = t9159 + t9160;
  t9162 = -1.*t9147*t9161;
  t9163 = t9145 + t9162;
  t1157 = Sin(var1[14]);
  t9172 = Cos(var1[14]);
  t9224 = t8987*t9054*t8988;
  t9232 = -1.*t3555*t9060;
  t9233 = t9224 + t9232;
  t9234 = t8956*t9233;
  t9236 = t3555*t8987;
  t9237 = t9054*t8988*t9060;
  t9238 = t9236 + t9237;
  t9240 = -1.*t9147*t9238;
  t9245 = t9234 + t9240;
  t9328 = t8956*t4938*t8987;
  t9329 = -1.*t4938*t9147*t9060;
  t9336 = t9328 + t9329;
  t8903 = t3555*t4938*t8807;
  t9164 = t8904*t9163;
  t9166 = t8903 + t9164;
  t9199 = t8904*t3555*t4938;
  t9213 = -1.*t8807*t9163;
  t9216 = t9199 + t9213;
  t9223 = t4938*t8807*t9054;
  t9250 = t8904*t9245;
  t9261 = t9223 + t9250;
  t9286 = t8904*t4938*t9054;
  t9293 = -1.*t8807*t9245;
  t9307 = t9286 + t9293;
  t9325 = -1.*t8807*t8988;
  t9337 = t8904*t9336;
  t9343 = t9325 + t9337;
  t9347 = -1.*t8904*t8988;
  t9351 = -1.*t8807*t9336;
  t9353 = t9347 + t9351;
  p_output1[0]=-1.*t1157*t9166 + t9172*t9216;
  p_output1[1]=-1.*t1157*t9261 + t9172*t9307;
  p_output1[2]=-1.*t1157*t9343 + t9172*t9353;
  p_output1[3]=t9143*t9147 + t8956*t9161;
  p_output1[4]=t9147*t9233 + t8956*t9238;
  p_output1[5]=t4938*t8956*t9060 + t4938*t8987*t9147;
  p_output1[6]=t9166*t9172 + t1157*t9216;
  p_output1[7]=t9172*t9261 + t1157*t9307;
  p_output1[8]=t9172*t9343 + t1157*t9353;
}



void R_RR_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
