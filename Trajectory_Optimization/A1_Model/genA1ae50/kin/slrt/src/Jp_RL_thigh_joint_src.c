/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:10:17 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RL_thigh_joint_src.h"

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
  double t1884;
  double t3782;
  double t2952;
  double t3232;
  double t4317;
  double t2075;
  double t3424;
  double t5163;
  double t5352;
  double t5956;
  double t6468;
  double t6499;
  double t7162;
  double t218;
  double t1814;
  double t7857;
  double t7902;
  double t7912;
  double t8020;
  double t571;
  double t580;
  double t581;
  double t1338;
  double t2160;
  double t2864;
  double t5972;
  double t6278;
  double t6320;
  double t6460;
  double t8519;
  double t8883;
  double t8886;
  double t8892;
  double t8897;
  double t8902;
  double t7860;
  double t7872;
  double t9032;
  double t9045;
  double t9064;
  double t9904;
  double t9908;
  double t9916;
  double t9957;
  double t9958;
  double t9961;
  double t10001;
  double t10002;
  double t10003;
  double t10021;
  double t10023;
  double t10024;
  double t10027;
  double t10028;
  double t10034;
  double t10059;
  double t10061;
  double t10063;
  double t7710;
  double t10066;
  double t10068;
  double t10093;
  double t10094;
  double t10095;
  double t10115;
  double t10120;
  double t10136;
  double t10138;
  double t10141;
  double t10143;
  double t10145;
  double t10074;
  double t10097;
  double t10099;
  double t10103;
  double t10106;
  double t10108;
  double t10109;
  double t10151;
  double t10154;
  t1884 = Sin(var1[3]);
  t3782 = Cos(var1[3]);
  t2952 = Cos(var1[5]);
  t3232 = Sin(var1[4]);
  t4317 = Sin(var1[5]);
  t2075 = Sin(var1[15]);
  t3424 = -1.*t2952*t1884*t3232;
  t5163 = t3782*t4317;
  t5352 = t3424 + t5163;
  t5956 = Cos(var1[15]);
  t6468 = -1.*t3782*t2952;
  t6499 = -1.*t1884*t3232*t4317;
  t7162 = t6468 + t6499;
  t218 = Cos(var1[16]);
  t1814 = Cos(var1[4]);
  t7857 = Sin(var1[16]);
  t7902 = t5956*t5352;
  t7912 = -1.*t2075*t7162;
  t8020 = t7902 + t7912;
  t571 = -1.*t218;
  t580 = 1. + t571;
  t581 = -0.183*t580;
  t1338 = 0. + t581;
  t2160 = -0.047*t2075;
  t2864 = 0. + t2160;
  t5972 = -1.*t5956;
  t6278 = 1. + t5972;
  t6320 = 0.047*t6278;
  t6460 = 0. + t6320;
  t8519 = t3782*t2952*t3232;
  t8883 = t1884*t4317;
  t8886 = t8519 + t8883;
  t8892 = -1.*t2952*t1884;
  t8897 = t3782*t3232*t4317;
  t8902 = t8892 + t8897;
  t7860 = -0.183*t7857;
  t7872 = 0. + t7860;
  t9032 = t5956*t8886;
  t9045 = -1.*t2075*t8902;
  t9064 = t9032 + t9045;
  t9904 = t5956*t3782*t1814*t2952;
  t9908 = -1.*t3782*t1814*t2075*t4317;
  t9916 = t9904 + t9908;
  t9957 = t5956*t1814*t2952*t1884;
  t9958 = -1.*t1814*t2075*t1884*t4317;
  t9961 = t9957 + t9958;
  t10001 = -1.*t5956*t2952*t3232;
  t10002 = t2075*t3232*t4317;
  t10003 = t10001 + t10002;
  t10021 = t2952*t1884;
  t10023 = -1.*t3782*t3232*t4317;
  t10024 = t10021 + t10023;
  t10027 = -1.*t2075*t8886;
  t10028 = t5956*t10024;
  t10034 = t10027 + t10028;
  t10059 = t2952*t1884*t3232;
  t10061 = -1.*t3782*t4317;
  t10063 = t10059 + t10061;
  t7710 = t5956*t7162;
  t10066 = -1.*t2075*t10063;
  t10068 = t10066 + t7710;
  t10093 = -1.*t1814*t2952*t2075;
  t10094 = -1.*t5956*t1814*t4317;
  t10095 = t10093 + t10094;
  t10115 = -1.*t5956*t8902;
  t10120 = t10027 + t10115;
  t10136 = t3782*t2952;
  t10138 = t1884*t3232*t4317;
  t10141 = t10136 + t10138;
  t10143 = -1.*t5956*t10141;
  t10145 = t10066 + t10143;
  t10074 = t5956*t10063;
  t10097 = t7872*t10095;
  t10099 = 0.183*t7857*t10095;
  t10103 = t5956*t1814*t2952;
  t10106 = -1.*t1814*t2075*t4317;
  t10108 = t10103 + t10106;
  t10109 = 0.13205*t10108;
  t10151 = -1.*t2075*t10141;
  t10154 = t10074 + t10151;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=-1.*t1338*t1814*t1884 + t2864*t5352 + t6460*t7162 + 0.13205*(t2075*t5352 + t7710) + t7872*t8020 - 0.183*(-1.*t1814*t1884*t218 - 1.*t7857*t8020);
  p_output1[10]=t1338*t1814*t3782 + t2864*t8886 + t6460*t8902 + 0.13205*(t2075*t8886 + t5956*t8902) + t7872*t9064 - 0.183*(t1814*t218*t3782 - 1.*t7857*t9064);
  p_output1[11]=0;
  p_output1[12]=t1814*t2864*t2952*t3782 - 1.*t1338*t3232*t3782 + 0.13205*(t1814*t2075*t2952*t3782 + t1814*t3782*t4317*t5956) + t1814*t3782*t4317*t6460 + t7872*t9916 - 0.183*(-1.*t218*t3232*t3782 - 1.*t7857*t9916);
  p_output1[13]=t1814*t1884*t2864*t2952 - 1.*t1338*t1884*t3232 + 0.13205*(t1814*t1884*t2075*t2952 + t1814*t1884*t4317*t5956) + t1814*t1884*t4317*t6460 + t7872*t9961 - 0.183*(-1.*t1884*t218*t3232 - 1.*t7857*t9961);
  p_output1[14]=-1.*t1338*t1814 - 1.*t2864*t2952*t3232 + 0.13205*(-1.*t2075*t2952*t3232 - 1.*t3232*t4317*t5956) - 1.*t3232*t4317*t6460 - 0.183*(-1.*t1814*t218 - 1.*t10003*t7857) + t10003*t7872;
  p_output1[15]=t10024*t2864 + 0.183*t10034*t7857 + t10034*t7872 + t6460*t8886 + 0.13205*(t10024*t2075 + t9032);
  p_output1[16]=t10063*t6460 + t2864*t7162 + 0.13205*(t10074 + t2075*t7162) + 0.183*t10068*t7857 + t10068*t7872;
  p_output1[17]=t10097 + t10099 + t10109 - 1.*t1814*t2864*t4317 + t1814*t2952*t6460;
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
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0.183*t10120*t7857 + t10120*t7872 - 0.047*t5956*t8886 + 0.047*t2075*t8902 + 0.13205*t9064;
  p_output1[46]=0.13205*t10154 + 0.047*t10141*t2075 - 0.047*t10063*t5956 + 0.183*t10145*t7857 + t10145*t7872;
  p_output1[47]=t10097 + t10099 + t10109 + 0.047*t1814*t2075*t4317 - 0.047*t1814*t2952*t5956;
  p_output1[48]=-0.183*t1814*t3782*t7857 - 0.183*t218*t9064 - 0.183*(-1.*t1814*t3782*t7857 - 1.*t218*t9064);
  p_output1[49]=-0.183*t10154*t218 - 0.183*t1814*t1884*t7857 - 0.183*(-1.*t10154*t218 - 1.*t1814*t1884*t7857);
  p_output1[50]=-0.183*t10108*t218 + 0.183*t3232*t7857 - 0.183*(-1.*t10108*t218 + t3232*t7857);
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
}



void Jp_RL_thigh_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
