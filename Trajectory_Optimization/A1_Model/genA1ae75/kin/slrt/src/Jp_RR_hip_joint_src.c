/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:50:47 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RR_hip_joint_src.h"

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
  double t7791;
  double t8143;
  double t8111;
  double t8130;
  double t8144;
  double t8002;
  double t8139;
  double t8150;
  double t8154;
  double t8160;
  double t8173;
  double t8177;
  double t8199;
  double t5817;
  double t8011;
  double t8031;
  double t8164;
  double t8165;
  double t8166;
  double t8170;
  double t8239;
  double t8240;
  double t8242;
  double t8289;
  double t8314;
  double t8317;
  double t8449;
  double t8450;
  double t8455;
  double t8500;
  double t8507;
  double t8512;
  double t8459;
  double t8520;
  double t8573;
  double t8577;
  double t8578;
  double t8533;
  double t8546;
  double t8554;
  double t8555;
  t7791 = Sin(var1[3]);
  t8143 = Cos(var1[3]);
  t8111 = Cos(var1[5]);
  t8130 = Sin(var1[4]);
  t8144 = Sin(var1[5]);
  t8002 = Sin(var1[12]);
  t8139 = -1.*t8111*t7791*t8130;
  t8150 = t8143*t8144;
  t8154 = t8139 + t8150;
  t8160 = Cos(var1[12]);
  t8173 = -1.*t8143*t8111;
  t8177 = -1.*t7791*t8130*t8144;
  t8199 = t8173 + t8177;
  t5817 = Cos(var1[4]);
  t8011 = 0.047*t8002;
  t8031 = 0. + t8011;
  t8164 = -1.*t8160;
  t8165 = 1. + t8164;
  t8166 = -0.047*t8165;
  t8170 = 0. + t8166;
  t8239 = t8143*t8111*t8130;
  t8240 = t7791*t8144;
  t8242 = t8239 + t8240;
  t8289 = -1.*t8111*t7791;
  t8314 = t8143*t8130*t8144;
  t8317 = t8289 + t8314;
  t8449 = t8111*t7791;
  t8450 = -1.*t8143*t8130*t8144;
  t8455 = t8449 + t8450;
  t8500 = t8111*t7791*t8130;
  t8507 = -1.*t8143*t8144;
  t8512 = t8500 + t8507;
  t8459 = t8160*t8242;
  t8520 = t8160*t8512;
  t8573 = t8143*t8111;
  t8577 = t7791*t8130*t8144;
  t8578 = t8573 + t8577;
  t8533 = t8160*t5817*t8111;
  t8546 = -1.*t5817*t8002*t8144;
  t8554 = t8533 + t8546;
  t8555 = -0.047*t8554;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=0.183*t5817*t7791 + t8031*t8154 + t8170*t8199 - 0.047*(t8002*t8154 + t8160*t8199);
  p_output1[10]=-0.183*t5817*t8143 + t8031*t8242 + t8170*t8317 - 0.047*(t8002*t8242 + t8160*t8317);
  p_output1[11]=0;
  p_output1[12]=t5817*t8031*t8111*t8143 + 0.183*t8130*t8143 - 0.047*(t5817*t8002*t8111*t8143 + t5817*t8143*t8144*t8160) + t5817*t8143*t8144*t8170;
  p_output1[13]=t5817*t7791*t8031*t8111 + 0.183*t7791*t8130 - 0.047*(t5817*t7791*t8002*t8111 + t5817*t7791*t8144*t8160) + t5817*t7791*t8144*t8170;
  p_output1[14]=0.183*t5817 - 1.*t8031*t8111*t8130 - 0.047*(-1.*t8002*t8111*t8130 - 1.*t8130*t8144*t8160) - 1.*t8130*t8144*t8170;
  p_output1[15]=t8170*t8242 + t8031*t8455 - 0.047*(t8002*t8455 + t8459);
  p_output1[16]=t8031*t8199 + t8170*t8512 - 0.047*(t8002*t8199 + t8520);
  p_output1[17]=-1.*t5817*t8031*t8144 + t5817*t8111*t8170 + t8555;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0.047*t8160*t8242 - 0.047*t8002*t8317 - 0.047*(-1.*t8002*t8317 + t8459);
  p_output1[37]=0.047*t8160*t8512 - 0.047*t8002*t8578 - 0.047*(t8520 - 1.*t8002*t8578);
  p_output1[38]=-0.047*t5817*t8002*t8144 + 0.047*t5817*t8111*t8160 + t8555;
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



void Jp_RR_hip_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
