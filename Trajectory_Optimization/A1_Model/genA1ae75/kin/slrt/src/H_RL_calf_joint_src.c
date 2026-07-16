/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:51:00 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RL_calf_joint_src.h"

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
  double t322;
  double t469;
  double t523;
  double t492;
  double t528;
  double t399;
  double t341;
  double t343;
  double t434;
  double t522;
  double t533;
  double t556;
  double t559;
  double t560;
  double t562;
  double t574;
  double t588;
  double t628;
  double t640;
  double t266;
  double t752;
  double t791;
  double t794;
  double t799;
  double t805;
  double t838;
  double t839;
  double t842;
  double t843;
  double t848;
  double t939;
  double t960;
  double t966;
  double t352;
  double t654;
  double t707;
  double t758;
  double t777;
  double t779;
  double t790;
  double t851;
  double t870;
  double t872;
  double t874;
  double t896;
  double t938;
  double t999;
  double t1013;
  double t1026;
  double t1036;
  double t1082;
  double t1103;
  double t1108;
  double t1118;
  double t1291;
  double t1308;
  double t722;
  double t784;
  double t788;
  double t1149;
  double t1160;
  double t1167;
  double t1221;
  double t1224;
  double t1228;
  double t1230;
  double t1237;
  double t1239;
  double t1252;
  double t1259;
  double t1261;
  double t1262;
  double t1119;
  double t1136;
  double t1141;
  double t1276;
  double t1283;
  double t1315;
  double t1317;
  double t1320;
  double t1325;
  double t1331;
  double t1334;
  double t871;
  double t905;
  double t925;
  double t1170;
  double t1180;
  double t1185;
  double t1145;
  double t1146;
  double t1147;
  double t1020;
  double t1100;
  double t1101;
  double t1195;
  double t1196;
  double t1208;
  t322 = Cos(var1[3]);
  t469 = Cos(var1[5]);
  t523 = Sin(var1[3]);
  t492 = Sin(var1[4]);
  t528 = Sin(var1[5]);
  t399 = Cos(var1[16]);
  t341 = Cos(var1[4]);
  t343 = Sin(var1[16]);
  t434 = Cos(var1[15]);
  t522 = t322*t469*t492;
  t533 = t523*t528;
  t556 = t522 + t533;
  t559 = t434*t556;
  t560 = Sin(var1[15]);
  t562 = -1.*t469*t523;
  t574 = t322*t492*t528;
  t588 = t562 + t574;
  t628 = -1.*t560*t588;
  t640 = t559 + t628;
  t266 = Sin(var1[17]);
  t752 = Cos(var1[17]);
  t791 = t469*t523*t492;
  t794 = -1.*t322*t528;
  t799 = t791 + t794;
  t805 = t434*t799;
  t838 = t322*t469;
  t839 = t523*t492*t528;
  t842 = t838 + t839;
  t843 = -1.*t560*t842;
  t848 = t805 + t843;
  t939 = t434*t341*t469;
  t960 = -1.*t341*t560*t528;
  t966 = t939 + t960;
  t352 = t322*t341*t343;
  t654 = t399*t640;
  t707 = t352 + t654;
  t758 = t399*t322*t341;
  t777 = -1.*t343*t640;
  t779 = t758 + t777;
  t790 = t341*t343*t523;
  t851 = t399*t848;
  t870 = t790 + t851;
  t872 = t399*t341*t523;
  t874 = -1.*t343*t848;
  t896 = t872 + t874;
  t938 = -1.*t343*t492;
  t999 = t399*t966;
  t1013 = t938 + t999;
  t1026 = -1.*t399*t492;
  t1036 = -1.*t343*t966;
  t1082 = t1026 + t1036;
  t1103 = t560*t556;
  t1108 = t434*t588;
  t1118 = t1103 + t1108;
  t1291 = -1.*t752;
  t1308 = 1. + t1291;
  t722 = -1.*t266*t707;
  t784 = t752*t779;
  t788 = t722 + t784;
  t1149 = t752*t707;
  t1160 = t266*t779;
  t1167 = t1149 + t1160;
  t1221 = -1.*t399;
  t1224 = 1. + t1221;
  t1228 = -0.183*t1224;
  t1230 = 0. + t1228;
  t1237 = -0.047*t560;
  t1239 = 0. + t1237;
  t1252 = -1.*t434;
  t1259 = 1. + t1252;
  t1261 = 0.047*t1259;
  t1262 = 0. + t1261;
  t1119 = t560*t799;
  t1136 = t434*t842;
  t1141 = t1119 + t1136;
  t1276 = -0.183*t343;
  t1283 = 0. + t1276;
  t1315 = -0.15*t1308;
  t1317 = -0.183*t266;
  t1320 = 0. + t1315 + t1317;
  t1325 = -0.183*t1308;
  t1331 = 0.15*t266;
  t1334 = 0. + t1325 + t1331;
  t871 = -1.*t266*t870;
  t905 = t752*t896;
  t925 = t871 + t905;
  t1170 = t752*t870;
  t1180 = t266*t896;
  t1185 = t1170 + t1180;
  t1145 = t341*t469*t560;
  t1146 = t434*t341*t528;
  t1147 = t1145 + t1146;
  t1020 = -1.*t266*t1013;
  t1100 = t752*t1082;
  t1101 = t1020 + t1100;
  t1195 = t752*t1013;
  t1196 = t266*t1082;
  t1208 = t1195 + t1196;
  p_output1[0]=t788;
  p_output1[1]=t925;
  p_output1[2]=t1101;
  p_output1[3]=0.;
  p_output1[4]=t1118;
  p_output1[5]=t1141;
  p_output1[6]=t1147;
  p_output1[7]=0.;
  p_output1[8]=t1167;
  p_output1[9]=t1185;
  p_output1[10]=t1208;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.13205*t1118 - 0.15*t1167 + t1230*t322*t341 + t1239*t556 + t1262*t588 + t1283*t640 + t1320*t707 + t1334*t779 - 0.183*t788 + var1[0];
  p_output1[13]=0. + 0.13205*t1141 - 0.15*t1185 + t1230*t341*t523 + t1239*t799 + t1262*t842 + t1283*t848 + t1320*t870 + t1334*t896 - 0.183*t925 + var1[1];
  p_output1[14]=0. - 0.183*t1101 + 0.13205*t1147 - 0.15*t1208 + t1013*t1320 + t1082*t1334 + t1239*t341*t469 - 1.*t1230*t492 + t1262*t341*t528 + t1283*t966 + var1[2];
  p_output1[15]=1.;
}



void H_RL_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
