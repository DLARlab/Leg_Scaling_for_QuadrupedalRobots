/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:25:52 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RR_thigh_joint_src.h"

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
  double t452;
  double t2218;
  double t1751;
  double t1983;
  double t2365;
  double t1346;
  double t2109;
  double t2587;
  double t2782;
  double t3121;
  double t3629;
  double t3632;
  double t3683;
  double t97;
  double t437;
  double t4109;
  double t4340;
  double t4370;
  double t4465;
  double t110;
  double t113;
  double t130;
  double t278;
  double t1393;
  double t1400;
  double t3304;
  double t3345;
  double t3439;
  double t3492;
  double t4863;
  double t4899;
  double t5124;
  double t5184;
  double t5222;
  double t5266;
  double t4200;
  double t4274;
  double t5417;
  double t5424;
  double t5428;
  double t5837;
  double t5849;
  double t5859;
  double t7369;
  double t7422;
  double t7426;
  double t7798;
  double t7804;
  double t7821;
  double t7966;
  double t7976;
  double t7980;
  double t8034;
  double t8037;
  double t8056;
  double t8153;
  double t8157;
  double t8160;
  double t4028;
  double t8189;
  double t8192;
  double t8262;
  double t8276;
  double t8281;
  double t8523;
  double t8528;
  double t8584;
  double t8586;
  double t8591;
  double t8603;
  double t8608;
  double t8215;
  double t8294;
  double t8295;
  double t8334;
  double t8335;
  double t8366;
  double t8462;
  double t8631;
  double t8634;
  t452 = Sin(var1[3]);
  t2218 = Cos(var1[3]);
  t1751 = Cos(var1[5]);
  t1983 = Sin(var1[4]);
  t2365 = Sin(var1[5]);
  t1346 = Sin(var1[12]);
  t2109 = -1.*t1751*t452*t1983;
  t2587 = t2218*t2365;
  t2782 = t2109 + t2587;
  t3121 = Cos(var1[12]);
  t3629 = -1.*t2218*t1751;
  t3632 = -1.*t452*t1983*t2365;
  t3683 = t3629 + t3632;
  t97 = Cos(var1[13]);
  t437 = Cos(var1[4]);
  t4109 = Sin(var1[13]);
  t4340 = t3121*t2782;
  t4370 = -1.*t1346*t3683;
  t4465 = t4340 + t4370;
  t110 = -1.*t97;
  t113 = 1. + t110;
  t130 = -0.183*t113;
  t278 = 0. + t130;
  t1393 = 0.047*t1346;
  t1400 = 0. + t1393;
  t3304 = -1.*t3121;
  t3345 = 1. + t3304;
  t3439 = -0.047*t3345;
  t3492 = 0. + t3439;
  t4863 = t2218*t1751*t1983;
  t4899 = t452*t2365;
  t5124 = t4863 + t4899;
  t5184 = -1.*t1751*t452;
  t5222 = t2218*t1983*t2365;
  t5266 = t5184 + t5222;
  t4200 = -0.183*t4109;
  t4274 = 0. + t4200;
  t5417 = t3121*t5124;
  t5424 = -1.*t1346*t5266;
  t5428 = t5417 + t5424;
  t5837 = t3121*t2218*t437*t1751;
  t5849 = -1.*t2218*t437*t1346*t2365;
  t5859 = t5837 + t5849;
  t7369 = t3121*t437*t1751*t452;
  t7422 = -1.*t437*t1346*t452*t2365;
  t7426 = t7369 + t7422;
  t7798 = -1.*t3121*t1751*t1983;
  t7804 = t1346*t1983*t2365;
  t7821 = t7798 + t7804;
  t7966 = t1751*t452;
  t7976 = -1.*t2218*t1983*t2365;
  t7980 = t7966 + t7976;
  t8034 = -1.*t1346*t5124;
  t8037 = t3121*t7980;
  t8056 = t8034 + t8037;
  t8153 = t1751*t452*t1983;
  t8157 = -1.*t2218*t2365;
  t8160 = t8153 + t8157;
  t4028 = t3121*t3683;
  t8189 = -1.*t1346*t8160;
  t8192 = t8189 + t4028;
  t8262 = -1.*t437*t1751*t1346;
  t8276 = -1.*t3121*t437*t2365;
  t8281 = t8262 + t8276;
  t8523 = -1.*t3121*t5266;
  t8528 = t8034 + t8523;
  t8584 = t2218*t1751;
  t8586 = t452*t1983*t2365;
  t8591 = t8584 + t8586;
  t8603 = -1.*t3121*t8591;
  t8608 = t8189 + t8603;
  t8215 = t3121*t8160;
  t8294 = t4274*t8281;
  t8295 = 0.183*t4109*t8281;
  t8334 = t3121*t437*t1751;
  t8335 = -1.*t437*t1346*t2365;
  t8366 = t8334 + t8335;
  t8462 = -0.17458*t8366;
  t8631 = -1.*t1346*t8591;
  t8634 = t8215 + t8631;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1400*t2782 + t3492*t3683 - 0.17458*(t1346*t2782 + t4028) + t4274*t4465 - 1.*t278*t437*t452 - 0.183*(-1.*t4109*t4465 - 1.*t437*t452*t97);
  p_output1[10]=t2218*t278*t437 + t1400*t5124 + t3492*t5266 - 0.17458*(t1346*t5124 + t3121*t5266) + t4274*t5428 - 0.183*(-1.*t4109*t5428 + t2218*t437*t97);
  p_output1[11]=0;
  p_output1[12]=-1.*t1983*t2218*t278 + t1400*t1751*t2218*t437 + t2218*t2365*t3492*t437 - 0.17458*(t1346*t1751*t2218*t437 + t2218*t2365*t3121*t437) + t4274*t5859 - 0.183*(-1.*t4109*t5859 - 1.*t1983*t2218*t97);
  p_output1[13]=-1.*t1983*t278*t452 + t1400*t1751*t437*t452 + t2365*t3492*t437*t452 - 0.17458*(t1346*t1751*t437*t452 + t2365*t3121*t437*t452) + t4274*t7426 - 0.183*(-1.*t4109*t7426 - 1.*t1983*t452*t97);
  p_output1[14]=-1.*t1400*t1751*t1983 - 0.17458*(-1.*t1346*t1751*t1983 - 1.*t1983*t2365*t3121) - 1.*t1983*t2365*t3492 - 1.*t278*t437 + t4274*t7821 - 0.183*(-1.*t4109*t7821 - 1.*t437*t97);
  p_output1[15]=t3492*t5124 + t1400*t7980 - 0.17458*(t5417 + t1346*t7980) + 0.183*t4109*t8056 + t4274*t8056;
  p_output1[16]=t1400*t3683 + t3492*t8160 + 0.183*t4109*t8192 + t4274*t8192 - 0.17458*(t1346*t3683 + t8215);
  p_output1[17]=-1.*t1400*t2365*t437 + t1751*t3492*t437 + t8294 + t8295 + t8462;
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
  p_output1[36]=0.047*t3121*t5124 - 0.047*t1346*t5266 - 0.17458*t5428 + 0.183*t4109*t8528 + t4274*t8528;
  p_output1[37]=0.047*t3121*t8160 - 0.047*t1346*t8591 + 0.183*t4109*t8608 + t4274*t8608 - 0.17458*t8634;
  p_output1[38]=-0.047*t1346*t2365*t437 + 0.047*t1751*t3121*t437 + t8294 + t8295 + t8462;
  p_output1[39]=-0.183*t2218*t4109*t437 - 0.183*t5428*t97 - 0.183*(-1.*t2218*t4109*t437 - 1.*t5428*t97);
  p_output1[40]=-0.183*t4109*t437*t452 - 0.183*t8634*t97 - 0.183*(-1.*t4109*t437*t452 - 1.*t8634*t97);
  p_output1[41]=0.183*t1983*t4109 - 0.183*t8366*t97 - 0.183*(t1983*t4109 - 1.*t8366*t97);
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



void Jp_RR_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
