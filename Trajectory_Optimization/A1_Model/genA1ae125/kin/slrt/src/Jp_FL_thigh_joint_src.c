/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:03:15 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_FL_thigh_joint_src.h"

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
  double t256;
  double t417;
  double t323;
  double t352;
  double t422;
  double t268;
  double t369;
  double t466;
  double t474;
  double t503;
  double t602;
  double t603;
  double t631;
  double t130;
  double t241;
  double t702;
  double t724;
  double t742;
  double t746;
  double t145;
  double t182;
  double t196;
  double t238;
  double t275;
  double t309;
  double t536;
  double t541;
  double t566;
  double t574;
  double t798;
  double t803;
  double t808;
  double t825;
  double t831;
  double t833;
  double t703;
  double t720;
  double t872;
  double t883;
  double t886;
  double t964;
  double t969;
  double t972;
  double t5355;
  double t5362;
  double t5366;
  double t5502;
  double t5503;
  double t5504;
  double t5528;
  double t5532;
  double t5534;
  double t5540;
  double t5542;
  double t5543;
  double t5559;
  double t5560;
  double t5565;
  double t663;
  double t5578;
  double t5581;
  double t5604;
  double t5609;
  double t5614;
  double t5659;
  double t5660;
  double t5683;
  double t5684;
  double t5688;
  double t5692;
  double t5698;
  double t5588;
  double t5619;
  double t5624;
  double t5629;
  double t5631;
  double t5633;
  double t5649;
  double t5704;
  double t5705;
  t256 = Sin(var1[3]);
  t417 = Cos(var1[3]);
  t323 = Cos(var1[5]);
  t352 = Sin(var1[4]);
  t422 = Sin(var1[5]);
  t268 = Sin(var1[9]);
  t369 = -1.*t323*t256*t352;
  t466 = t417*t422;
  t474 = t369 + t466;
  t503 = Cos(var1[9]);
  t602 = -1.*t417*t323;
  t603 = -1.*t256*t352*t422;
  t631 = t602 + t603;
  t130 = Cos(var1[10]);
  t241 = Cos(var1[4]);
  t702 = Sin(var1[10]);
  t724 = t503*t474;
  t742 = -1.*t268*t631;
  t746 = t724 + t742;
  t145 = -1.*t130;
  t182 = 1. + t145;
  t196 = 0.183*t182;
  t238 = 0. + t196;
  t275 = -0.047*t268;
  t309 = 0. + t275;
  t536 = -1.*t503;
  t541 = 1. + t536;
  t566 = 0.047*t541;
  t574 = 0. + t566;
  t798 = t417*t323*t352;
  t803 = t256*t422;
  t808 = t798 + t803;
  t825 = -1.*t323*t256;
  t831 = t417*t352*t422;
  t833 = t825 + t831;
  t703 = 0.183*t702;
  t720 = 0. + t703;
  t872 = t503*t808;
  t883 = -1.*t268*t833;
  t886 = t872 + t883;
  t964 = t503*t417*t241*t323;
  t969 = -1.*t417*t241*t268*t422;
  t972 = t964 + t969;
  t5355 = t503*t241*t323*t256;
  t5362 = -1.*t241*t268*t256*t422;
  t5366 = t5355 + t5362;
  t5502 = -1.*t503*t323*t352;
  t5503 = t268*t352*t422;
  t5504 = t5502 + t5503;
  t5528 = t323*t256;
  t5532 = -1.*t417*t352*t422;
  t5534 = t5528 + t5532;
  t5540 = -1.*t268*t808;
  t5542 = t503*t5534;
  t5543 = t5540 + t5542;
  t5559 = t323*t256*t352;
  t5560 = -1.*t417*t422;
  t5565 = t5559 + t5560;
  t663 = t503*t631;
  t5578 = -1.*t268*t5565;
  t5581 = t5578 + t663;
  t5604 = -1.*t241*t323*t268;
  t5609 = -1.*t503*t241*t422;
  t5614 = t5604 + t5609;
  t5659 = -1.*t503*t833;
  t5660 = t5540 + t5659;
  t5683 = t417*t323;
  t5684 = t256*t352*t422;
  t5688 = t5683 + t5684;
  t5692 = -1.*t503*t5688;
  t5698 = t5578 + t5692;
  t5588 = t503*t5565;
  t5619 = t720*t5614;
  t5624 = -0.183*t702*t5614;
  t5629 = t503*t241*t323;
  t5631 = -1.*t241*t268*t422;
  t5633 = t5629 + t5631;
  t5649 = 0.13205*t5633;
  t5704 = -1.*t268*t5688;
  t5705 = t5588 + t5704;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=-1.*t238*t241*t256 + t309*t474 + t574*t631 + 0.13205*(t268*t474 + t663) + t720*t746 + 0.183*(-1.*t130*t241*t256 - 1.*t702*t746);
  p_output1[10]=t238*t241*t417 + t309*t808 + t574*t833 + 0.13205*(t268*t808 + t503*t833) + t720*t886 + 0.183*(t130*t241*t417 - 1.*t702*t886);
  p_output1[11]=0;
  p_output1[12]=t241*t309*t323*t417 - 1.*t238*t352*t417 + 0.13205*(t241*t268*t323*t417 + t241*t417*t422*t503) + t241*t417*t422*t574 + t720*t972 + 0.183*(-1.*t130*t352*t417 - 1.*t702*t972);
  p_output1[13]=t241*t256*t309*t323 - 1.*t238*t256*t352 + 0.13205*(t241*t256*t268*t323 + t241*t256*t422*t503) + t241*t256*t422*t574 + 0.183*(-1.*t130*t256*t352 - 1.*t5366*t702) + t5366*t720;
  p_output1[14]=-1.*t238*t241 - 1.*t309*t323*t352 + 0.13205*(-1.*t268*t323*t352 - 1.*t352*t422*t503) - 1.*t352*t422*t574 + 0.183*(-1.*t130*t241 - 1.*t5504*t702) + t5504*t720;
  p_output1[15]=t309*t5534 - 0.183*t5543*t702 + t5543*t720 + t574*t808 + 0.13205*(t268*t5534 + t872);
  p_output1[16]=t5565*t574 + t309*t631 + 0.13205*(t5588 + t268*t631) - 0.183*t5581*t702 + t5581*t720;
  p_output1[17]=-1.*t241*t309*t422 + t5619 + t5624 + t5649 + t241*t323*t574;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=-0.183*t5660*t702 + t5660*t720 - 0.047*t503*t808 + 0.047*t268*t833 + 0.13205*t886;
  p_output1[28]=-0.047*t503*t5565 + 0.047*t268*t5688 + 0.13205*t5705 - 0.183*t5698*t702 + t5698*t720;
  p_output1[29]=0.047*t241*t268*t422 - 0.047*t241*t323*t503 + t5619 + t5624 + t5649;
  p_output1[30]=0.183*t241*t417*t702 + 0.183*t130*t886 + 0.183*(-1.*t241*t417*t702 - 1.*t130*t886);
  p_output1[31]=0.183*t130*t5705 + 0.183*t241*t256*t702 + 0.183*(-1.*t130*t5705 - 1.*t241*t256*t702);
  p_output1[32]=0.183*t130*t5633 - 0.183*t352*t702 + 0.183*(-1.*t130*t5633 + t352*t702);
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



void Jp_FL_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
