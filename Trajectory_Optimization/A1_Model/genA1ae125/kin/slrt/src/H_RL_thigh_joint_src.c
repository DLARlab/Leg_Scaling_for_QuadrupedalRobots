/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:03:33 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RL_thigh_joint_src.h"

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
  double t454;
  double t719;
  double t762;
  double t736;
  double t794;
  double t294;
  double t507;
  double t550;
  double t623;
  double t875;
  double t738;
  double t796;
  double t814;
  double t881;
  double t899;
  double t937;
  double t994;
  double t1004;
  double t1007;
  double t1018;
  double t1020;
  double t1023;
  double t817;
  double t941;
  double t943;
  double t1011;
  double t1031;
  double t1159;
  double t1199;
  double t1201;
  double t1214;
  double t1226;
  double t1227;
  double t1229;
  double t531;
  double t967;
  double t983;
  double t1261;
  double t1265;
  double t1267;
  double t1273;
  double t1278;
  double t1284;
  double t1290;
  double t1293;
  double t1301;
  double t1302;
  double t1232;
  double t1234;
  double t1235;
  double t1307;
  double t1308;
  double t984;
  double t1183;
  double t1186;
  double t1238;
  double t1239;
  double t1240;
  double t1189;
  double t1215;
  double t1219;
  t454 = Cos(var1[3]);
  t719 = Cos(var1[5]);
  t762 = Sin(var1[3]);
  t736 = Sin(var1[4]);
  t794 = Sin(var1[5]);
  t294 = Cos(var1[16]);
  t507 = Cos(var1[4]);
  t550 = Sin(var1[16]);
  t623 = Cos(var1[15]);
  t875 = Sin(var1[15]);
  t738 = t454*t719*t736;
  t796 = t762*t794;
  t814 = t738 + t796;
  t881 = -1.*t719*t762;
  t899 = t454*t736*t794;
  t937 = t881 + t899;
  t994 = t719*t762*t736;
  t1004 = -1.*t454*t794;
  t1007 = t994 + t1004;
  t1018 = t454*t719;
  t1020 = t762*t736*t794;
  t1023 = t1018 + t1020;
  t817 = t623*t814;
  t941 = -1.*t875*t937;
  t943 = t817 + t941;
  t1011 = t623*t1007;
  t1031 = -1.*t875*t1023;
  t1159 = t1011 + t1031;
  t1199 = t623*t507*t719;
  t1201 = -1.*t507*t875*t794;
  t1214 = t1199 + t1201;
  t1226 = t875*t814;
  t1227 = t623*t937;
  t1229 = t1226 + t1227;
  t531 = t294*t454*t507;
  t967 = -1.*t550*t943;
  t983 = t531 + t967;
  t1261 = -1.*t294;
  t1265 = 1. + t1261;
  t1267 = -0.183*t1265;
  t1273 = 0. + t1267;
  t1278 = -0.047*t875;
  t1284 = 0. + t1278;
  t1290 = -1.*t623;
  t1293 = 1. + t1290;
  t1301 = 0.047*t1293;
  t1302 = 0. + t1301;
  t1232 = t875*t1007;
  t1234 = t623*t1023;
  t1235 = t1232 + t1234;
  t1307 = -0.183*t550;
  t1308 = 0. + t1307;
  t984 = t294*t507*t762;
  t1183 = -1.*t550*t1159;
  t1186 = t984 + t1183;
  t1238 = t507*t719*t875;
  t1239 = t623*t507*t794;
  t1240 = t1238 + t1239;
  t1189 = -1.*t294*t736;
  t1215 = -1.*t550*t1214;
  t1219 = t1189 + t1215;
  p_output1[0]=t983;
  p_output1[1]=t1186;
  p_output1[2]=t1219;
  p_output1[3]=0.;
  p_output1[4]=t1229;
  p_output1[5]=t1235;
  p_output1[6]=t1240;
  p_output1[7]=0.;
  p_output1[8]=t454*t507*t550 + t294*t943;
  p_output1[9]=t1159*t294 + t507*t550*t762;
  p_output1[10]=t1214*t294 - 1.*t550*t736;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.13205*t1229 + t1273*t454*t507 + t1284*t814 + t1302*t937 + t1308*t943 - 0.183*t983 + var1[0];
  p_output1[13]=0. - 0.183*t1186 + 0.13205*t1235 + t1007*t1284 + t1023*t1302 + t1159*t1308 + t1273*t507*t762 + var1[1];
  p_output1[14]=0. - 0.183*t1219 + 0.13205*t1240 + t1214*t1308 + t1284*t507*t719 - 1.*t1273*t736 + t1302*t507*t794 + var1[2];
  p_output1[15]=1.;
}



void H_RL_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
