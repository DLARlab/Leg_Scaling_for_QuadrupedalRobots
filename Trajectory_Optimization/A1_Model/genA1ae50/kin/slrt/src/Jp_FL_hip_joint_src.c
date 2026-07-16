/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:10:00 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_FL_hip_joint_src.h"

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
  double t4992;
  double t5357;
  double t5295;
  double t5306;
  double t5362;
  double t5123;
  double t5336;
  double t5368;
  double t5370;
  double t5373;
  double t5393;
  double t5399;
  double t5404;
  double t2304;
  double t5215;
  double t5291;
  double t5377;
  double t5381;
  double t5390;
  double t5391;
  double t5425;
  double t5426;
  double t5428;
  double t5438;
  double t5439;
  double t5441;
  double t5554;
  double t5556;
  double t5557;
  double t5603;
  double t5612;
  double t5622;
  double t5567;
  double t5627;
  double t5666;
  double t5675;
  double t5676;
  double t5639;
  double t5644;
  double t5649;
  double t5650;
  t4992 = Sin(var1[3]);
  t5357 = Cos(var1[3]);
  t5295 = Cos(var1[5]);
  t5306 = Sin(var1[4]);
  t5362 = Sin(var1[5]);
  t5123 = Sin(var1[9]);
  t5336 = -1.*t5295*t4992*t5306;
  t5368 = t5357*t5362;
  t5370 = t5336 + t5368;
  t5373 = Cos(var1[9]);
  t5393 = -1.*t5357*t5295;
  t5399 = -1.*t4992*t5306*t5362;
  t5404 = t5393 + t5399;
  t2304 = Cos(var1[4]);
  t5215 = -0.047*t5123;
  t5291 = 0. + t5215;
  t5377 = -1.*t5373;
  t5381 = 1. + t5377;
  t5390 = 0.047*t5381;
  t5391 = 0. + t5390;
  t5425 = t5357*t5295*t5306;
  t5426 = t4992*t5362;
  t5428 = t5425 + t5426;
  t5438 = -1.*t5295*t4992;
  t5439 = t5357*t5306*t5362;
  t5441 = t5438 + t5439;
  t5554 = t5295*t4992;
  t5556 = -1.*t5357*t5306*t5362;
  t5557 = t5554 + t5556;
  t5603 = t5295*t4992*t5306;
  t5612 = -1.*t5357*t5362;
  t5622 = t5603 + t5612;
  t5567 = t5373*t5428;
  t5627 = t5373*t5622;
  t5666 = t5357*t5295;
  t5675 = t4992*t5306*t5362;
  t5676 = t5666 + t5675;
  t5639 = t5373*t2304*t5295;
  t5644 = -1.*t2304*t5123*t5362;
  t5649 = t5639 + t5644;
  t5650 = 0.047*t5649;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=-0.183*t2304*t4992 + t5291*t5370 + t5391*t5404 + 0.047*(t5123*t5370 + t5373*t5404);
  p_output1[10]=0.183*t2304*t5357 + t5291*t5428 + t5391*t5441 + 0.047*(t5123*t5428 + t5373*t5441);
  p_output1[11]=0;
  p_output1[12]=t2304*t5291*t5295*t5357 - 0.183*t5306*t5357 + 0.047*(t2304*t5123*t5295*t5357 + t2304*t5357*t5362*t5373) + t2304*t5357*t5362*t5391;
  p_output1[13]=t2304*t4992*t5291*t5295 - 0.183*t4992*t5306 + 0.047*(t2304*t4992*t5123*t5295 + t2304*t4992*t5362*t5373) + t2304*t4992*t5362*t5391;
  p_output1[14]=-0.183*t2304 - 1.*t5291*t5295*t5306 + 0.047*(-1.*t5123*t5295*t5306 - 1.*t5306*t5362*t5373) - 1.*t5306*t5362*t5391;
  p_output1[15]=t5391*t5428 + t5291*t5557 + 0.047*(t5123*t5557 + t5567);
  p_output1[16]=t5291*t5404 + t5391*t5622 + 0.047*(t5123*t5404 + t5627);
  p_output1[17]=-1.*t2304*t5291*t5362 + t2304*t5295*t5391 + t5650;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=-0.047*t5373*t5428 + 0.047*t5123*t5441 + 0.047*(-1.*t5123*t5441 + t5567);
  p_output1[28]=-0.047*t5373*t5622 + 0.047*t5123*t5676 + 0.047*(t5627 - 1.*t5123*t5676);
  p_output1[29]=0.047*t2304*t5123*t5362 - 0.047*t2304*t5295*t5373 + t5650;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
}



void Jp_FL_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
