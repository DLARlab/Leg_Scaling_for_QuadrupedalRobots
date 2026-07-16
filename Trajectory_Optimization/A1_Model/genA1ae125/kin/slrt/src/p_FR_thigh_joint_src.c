/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:03:05 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FR_thigh_joint_src.h"

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
  double t1054;
  double t1107;
  double t1112;
  double t1109;
  double t1116;
  double t1091;
  double t1111;
  double t1117;
  double t1119;
  double t1123;
  double t1127;
  double t1129;
  double t1130;
  double t1063;
  double t1071;
  double t1145;
  double t1147;
  double t1150;
  double t1153;
  double t1073;
  double t1084;
  double t1087;
  double t1088;
  double t1098;
  double t1099;
  double t1100;
  double t1102;
  double t1134;
  double t1135;
  double t1190;
  double t1194;
  double t1203;
  double t1207;
  double t1209;
  double t1228;
  double t1155;
  double t1161;
  double t1262;
  double t1266;
  double t1274;
  double t1338;
  double t1343;
  double t1366;
  t1054 = Cos(var1[3]);
  t1107 = Cos(var1[5]);
  t1112 = Sin(var1[4]);
  t1109 = Sin(var1[3]);
  t1116 = Sin(var1[5]);
  t1091 = Cos(var1[6]);
  t1111 = -1.*t1107*t1109;
  t1117 = t1054*t1112*t1116;
  t1119 = t1111 + t1117;
  t1123 = t1054*t1107*t1112;
  t1127 = t1109*t1116;
  t1129 = t1123 + t1127;
  t1130 = Sin(var1[6]);
  t1063 = Cos(var1[4]);
  t1071 = Cos(var1[7]);
  t1145 = t1091*t1129;
  t1147 = -1.*t1119*t1130;
  t1150 = t1145 + t1147;
  t1153 = Sin(var1[7]);
  t1073 = -1.*t1071;
  t1084 = 1. + t1073;
  t1087 = 0.183*t1084;
  t1088 = 0. + t1087;
  t1098 = -1.*t1091;
  t1099 = 1. + t1098;
  t1100 = -0.047*t1099;
  t1102 = 0. + t1100;
  t1134 = 0.047*t1130;
  t1135 = 0. + t1134;
  t1190 = t1054*t1107;
  t1194 = t1109*t1112*t1116;
  t1203 = t1190 + t1194;
  t1207 = t1107*t1109*t1112;
  t1209 = -1.*t1054*t1116;
  t1228 = t1207 + t1209;
  t1155 = 0.183*t1153;
  t1161 = 0. + t1155;
  t1262 = t1091*t1228;
  t1266 = -1.*t1203*t1130;
  t1274 = t1262 + t1266;
  t1338 = t1063*t1107*t1091;
  t1343 = -1.*t1063*t1116*t1130;
  t1366 = t1338 + t1343;
  p_output1[0]=0. + t1054*t1063*t1088 + t1102*t1119 - 0.13205*(t1091*t1119 + t1129*t1130) + t1129*t1135 + 0.183*(t1054*t1063*t1071 - 1.*t1150*t1153) + t1150*t1161 + var1[0];
  p_output1[1]=0. + t1063*t1088*t1109 + t1102*t1203 + t1135*t1228 - 0.13205*(t1091*t1203 + t1130*t1228) + t1161*t1274 + 0.183*(t1063*t1071*t1109 - 1.*t1153*t1274) + var1[1];
  p_output1[2]=0. - 1.*t1088*t1112 + t1063*t1102*t1116 - 0.13205*(t1063*t1091*t1116 + t1063*t1107*t1130) + t1063*t1107*t1135 + t1161*t1366 + 0.183*(-1.*t1071*t1112 - 1.*t1153*t1366) + var1[2];
}



void p_FR_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
