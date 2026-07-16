/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:50:39 GMT-05:00
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
  double t786;
  double t9849;
  double t9832;
  double t9842;
  double t9850;
  double t9791;
  double t9846;
  double t9851;
  double t9852;
  double t9854;
  double t9867;
  double t9871;
  double t9875;
  double t571;
  double t9829;
  double t9831;
  double t9855;
  double t9856;
  double t9862;
  double t9863;
  double t9885;
  double t9886;
  double t9888;
  double t9891;
  double t9892;
  double t9893;
  double t9943;
  double t9944;
  double t9945;
  double t9957;
  double t9959;
  double t9961;
  double t9949;
  double t9965;
  double t10054;
  double t10055;
  double t10056;
  double t9974;
  double t9975;
  double t9976;
  double t9977;
  t786 = Sin(var1[3]);
  t9849 = Cos(var1[3]);
  t9832 = Cos(var1[5]);
  t9842 = Sin(var1[4]);
  t9850 = Sin(var1[5]);
  t9791 = Sin(var1[9]);
  t9846 = -1.*t9832*t786*t9842;
  t9851 = t9849*t9850;
  t9852 = t9846 + t9851;
  t9854 = Cos(var1[9]);
  t9867 = -1.*t9849*t9832;
  t9871 = -1.*t786*t9842*t9850;
  t9875 = t9867 + t9871;
  t571 = Cos(var1[4]);
  t9829 = -0.047*t9791;
  t9831 = 0. + t9829;
  t9855 = -1.*t9854;
  t9856 = 1. + t9855;
  t9862 = 0.047*t9856;
  t9863 = 0. + t9862;
  t9885 = t9849*t9832*t9842;
  t9886 = t786*t9850;
  t9888 = t9885 + t9886;
  t9891 = -1.*t9832*t786;
  t9892 = t9849*t9842*t9850;
  t9893 = t9891 + t9892;
  t9943 = t9832*t786;
  t9944 = -1.*t9849*t9842*t9850;
  t9945 = t9943 + t9944;
  t9957 = t9832*t786*t9842;
  t9959 = -1.*t9849*t9850;
  t9961 = t9957 + t9959;
  t9949 = t9854*t9888;
  t9965 = t9854*t9961;
  t10054 = t9849*t9832;
  t10055 = t786*t9842*t9850;
  t10056 = t10054 + t10055;
  t9974 = t9854*t571*t9832;
  t9975 = -1.*t571*t9791*t9850;
  t9976 = t9974 + t9975;
  t9977 = 0.047*t9976;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=-0.183*t571*t786 + t9831*t9852 + t9863*t9875 + 0.047*(t9791*t9852 + t9854*t9875);
  p_output1[10]=0.183*t571*t9849 + t9831*t9888 + t9863*t9893 + 0.047*(t9791*t9888 + t9854*t9893);
  p_output1[11]=0;
  p_output1[12]=t571*t9831*t9832*t9849 - 0.183*t9842*t9849 + 0.047*(t571*t9791*t9832*t9849 + t571*t9849*t9850*t9854) + t571*t9849*t9850*t9863;
  p_output1[13]=t571*t786*t9831*t9832 - 0.183*t786*t9842 + 0.047*(t571*t786*t9791*t9832 + t571*t786*t9850*t9854) + t571*t786*t9850*t9863;
  p_output1[14]=-0.183*t571 - 1.*t9831*t9832*t9842 + 0.047*(-1.*t9791*t9832*t9842 - 1.*t9842*t9850*t9854) - 1.*t9842*t9850*t9863;
  p_output1[15]=t9863*t9888 + t9831*t9945 + 0.047*(t9791*t9945 + t9949);
  p_output1[16]=t9831*t9875 + t9863*t9961 + 0.047*(t9791*t9875 + t9965);
  p_output1[17]=-1.*t571*t9831*t9850 + t571*t9832*t9863 + t9977;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=-0.047*t9854*t9888 + 0.047*t9791*t9893 + 0.047*(-1.*t9791*t9893 + t9949);
  p_output1[28]=0.047*t10056*t9791 - 0.047*t9854*t9961 + 0.047*(-1.*t10056*t9791 + t9965);
  p_output1[29]=0.047*t571*t9791*t9850 - 0.047*t571*t9832*t9854 + t9977;
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
