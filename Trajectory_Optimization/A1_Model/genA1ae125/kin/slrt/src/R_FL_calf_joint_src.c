/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:03:19 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_FL_calf_joint_src.h"

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
  double t1538;
  double t5178;
  double t5781;
  double t5389;
  double t5797;
  double t4876;
  double t3361;
  double t4573;
  double t5174;
  double t5760;
  double t5918;
  double t5981;
  double t5988;
  double t6012;
  double t6022;
  double t6034;
  double t6036;
  double t6038;
  double t6039;
  double t377;
  double t6061;
  double t6164;
  double t6177;
  double t6179;
  double t6184;
  double t6225;
  double t6226;
  double t6230;
  double t6253;
  double t6270;
  double t6327;
  double t6329;
  double t6330;
  double t4845;
  double t6049;
  double t6055;
  double t6062;
  double t6064;
  double t6084;
  double t6157;
  double t6298;
  double t6307;
  double t6312;
  double t6313;
  double t6316;
  double t6325;
  double t6332;
  double t6341;
  double t6345;
  double t6349;
  double t6352;
  t1538 = Cos(var1[3]);
  t5178 = Cos(var1[5]);
  t5781 = Sin(var1[3]);
  t5389 = Sin(var1[4]);
  t5797 = Sin(var1[5]);
  t4876 = Cos(var1[10]);
  t3361 = Cos(var1[4]);
  t4573 = Sin(var1[10]);
  t5174 = Cos(var1[9]);
  t5760 = t1538*t5178*t5389;
  t5918 = t5781*t5797;
  t5981 = t5760 + t5918;
  t5988 = t5174*t5981;
  t6012 = Sin(var1[9]);
  t6022 = -1.*t5178*t5781;
  t6034 = t1538*t5389*t5797;
  t6036 = t6022 + t6034;
  t6038 = -1.*t6012*t6036;
  t6039 = t5988 + t6038;
  t377 = Sin(var1[11]);
  t6061 = Cos(var1[11]);
  t6164 = t5178*t5781*t5389;
  t6177 = -1.*t1538*t5797;
  t6179 = t6164 + t6177;
  t6184 = t5174*t6179;
  t6225 = t1538*t5178;
  t6226 = t5781*t5389*t5797;
  t6230 = t6225 + t6226;
  t6253 = -1.*t6012*t6230;
  t6270 = t6184 + t6253;
  t6327 = t5174*t3361*t5178;
  t6329 = -1.*t3361*t6012*t5797;
  t6330 = t6327 + t6329;
  t4845 = t1538*t3361*t4573;
  t6049 = t4876*t6039;
  t6055 = t4845 + t6049;
  t6062 = t4876*t1538*t3361;
  t6064 = -1.*t4573*t6039;
  t6084 = t6062 + t6064;
  t6157 = t3361*t4573*t5781;
  t6298 = t4876*t6270;
  t6307 = t6157 + t6298;
  t6312 = t4876*t3361*t5781;
  t6313 = -1.*t4573*t6270;
  t6316 = t6312 + t6313;
  t6325 = -1.*t4573*t5389;
  t6332 = t4876*t6330;
  t6341 = t6325 + t6332;
  t6345 = -1.*t4876*t5389;
  t6349 = -1.*t4573*t6330;
  t6352 = t6345 + t6349;
  p_output1[0]=-1.*t377*t6055 + t6061*t6084;
  p_output1[1]=-1.*t377*t6307 + t6061*t6316;
  p_output1[2]=-1.*t377*t6341 + t6061*t6352;
  p_output1[3]=t5981*t6012 + t5174*t6036;
  p_output1[4]=t6012*t6179 + t5174*t6230;
  p_output1[5]=t3361*t5174*t5797 + t3361*t5178*t6012;
  p_output1[6]=t6055*t6061 + t377*t6084;
  p_output1[7]=t6061*t6307 + t377*t6316;
  p_output1[8]=t6061*t6341 + t377*t6352;
}



void R_FL_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
