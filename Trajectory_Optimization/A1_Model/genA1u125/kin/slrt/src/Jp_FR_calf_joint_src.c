/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:20:22 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_FR_calf_joint_src.h"

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
  double t862;
  double t1610;
  double t1829;
  double t1572;
  double t1882;
  double t1055;
  double t1707;
  double t1890;
  double t2317;
  double t2371;
  double t2376;
  double t2404;
  double t2520;
  double t116;
  double t3191;
  double t3199;
  double t3207;
  double t87;
  double t3218;
  double t3560;
  double t3821;
  double t3876;
  double t3955;
  double t4031;
  double t4035;
  double t4122;
  double t3500;
  double t3511;
  double t3542;
  double t158;
  double t186;
  double t487;
  double t490;
  double t1387;
  double t1395;
  double t1488;
  double t1489;
  double t2782;
  double t2805;
  double t5258;
  double t5332;
  double t5373;
  double t5496;
  double t5509;
  double t5543;
  double t3301;
  double t3354;
  double t5984;
  double t5987;
  double t5995;
  double t3927;
  double t3975;
  double t4016;
  double t4180;
  double t4266;
  double t4343;
  double t6271;
  double t6311;
  double t6314;
  double t6180;
  double t6183;
  double t6192;
  double t6810;
  double t6909;
  double t6918;
  double t7025;
  double t7051;
  double t7092;
  double t6936;
  double t6959;
  double t6969;
  double t7365;
  double t7384;
  double t7390;
  double t7438;
  double t7449;
  double t7452;
  double t7398;
  double t7412;
  double t7413;
  double t7562;
  double t7584;
  double t7590;
  double t7690;
  double t7718;
  double t7749;
  double t7624;
  double t7677;
  double t7687;
  double t7894;
  double t7895;
  double t7933;
  double t8032;
  double t8051;
  double t8053;
  double t8180;
  double t8185;
  double t8187;
  double t2886;
  double t8216;
  double t8218;
  double t8293;
  double t8294;
  double t8297;
  double t8460;
  double t8464;
  double t8203;
  double t8565;
  double t8580;
  double t8594;
  double t8632;
  double t8649;
  double t8283;
  double t8284;
  double t8285;
  double t8290;
  double t8298;
  double t8304;
  double t8305;
  double t8314;
  double t8319;
  double t8327;
  double t8328;
  double t8401;
  double t8415;
  double t8424;
  double t8428;
  double t6346;
  double t8731;
  double t8738;
  double t8747;
  double t8615;
  double t8619;
  double t8799;
  double t8817;
  double t8832;
  double t8840;
  double t8841;
  double t8987;
  double t8994;
  double t9001;
  double t9012;
  double t9013;
  double t9017;
  double t6349;
  double t6354;
  double t8777;
  double t9083;
  double t9089;
  double t9094;
  double t9096;
  double t9098;
  double t8915;
  double t9154;
  double t9158;
  double t9174;
  double t8944;
  double t9045;
  double t9211;
  double t9231;
  double t9234;
  double t9072;
  t862 = Sin(var1[3]);
  t1610 = Cos(var1[5]);
  t1829 = Sin(var1[4]);
  t1572 = Cos(var1[3]);
  t1882 = Sin(var1[5]);
  t1055 = Cos(var1[6]);
  t1707 = -1.*t1572*t1610;
  t1890 = -1.*t862*t1829*t1882;
  t2317 = t1707 + t1890;
  t2371 = -1.*t1610*t862*t1829;
  t2376 = t1572*t1882;
  t2404 = t2371 + t2376;
  t2520 = Sin(var1[6]);
  t116 = Cos(var1[7]);
  t3191 = t1055*t2404;
  t3199 = -1.*t2317*t2520;
  t3207 = t3191 + t3199;
  t87 = Cos(var1[4]);
  t3218 = Sin(var1[7]);
  t3560 = Cos(var1[8]);
  t3821 = -1.*t3560;
  t3876 = 1. + t3821;
  t3955 = Sin(var1[8]);
  t4031 = -1.*t87*t116*t862;
  t4035 = -1.*t3207*t3218;
  t4122 = t4031 + t4035;
  t3500 = t116*t3207;
  t3511 = -1.*t87*t862*t3218;
  t3542 = t3500 + t3511;
  t158 = -1.*t116;
  t186 = 1. + t158;
  t487 = 0.183*t186;
  t490 = 0. + t487;
  t1387 = -1.*t1055;
  t1395 = 1. + t1387;
  t1488 = -0.047*t1395;
  t1489 = 0. + t1488;
  t2782 = 0.047*t2520;
  t2805 = 0. + t2782;
  t5258 = -1.*t1610*t862;
  t5332 = t1572*t1829*t1882;
  t5373 = t5258 + t5332;
  t5496 = t1572*t1610*t1829;
  t5509 = t862*t1882;
  t5543 = t5496 + t5509;
  t3301 = 0.183*t3218;
  t3354 = 0. + t3301;
  t5984 = t1055*t5543;
  t5987 = -1.*t5373*t2520;
  t5995 = t5984 + t5987;
  t3927 = -0.25*t3876;
  t3975 = 0.183*t3955;
  t4016 = 0. + t3927 + t3975;
  t4180 = 0.183*t3876;
  t4266 = 0.25*t3955;
  t4343 = 0. + t4180 + t4266;
  t6271 = t1572*t87*t116;
  t6311 = -1.*t5995*t3218;
  t6314 = t6271 + t6311;
  t6180 = t116*t5995;
  t6183 = t1572*t87*t3218;
  t6192 = t6180 + t6183;
  t6810 = t1572*t87*t1610*t1055;
  t6909 = -1.*t1572*t87*t1882*t2520;
  t6918 = t6810 + t6909;
  t7025 = -1.*t1572*t116*t1829;
  t7051 = -1.*t6918*t3218;
  t7092 = t7025 + t7051;
  t6936 = t116*t6918;
  t6959 = -1.*t1572*t1829*t3218;
  t6969 = t6936 + t6959;
  t7365 = t87*t1610*t1055*t862;
  t7384 = -1.*t87*t862*t1882*t2520;
  t7390 = t7365 + t7384;
  t7438 = -1.*t116*t862*t1829;
  t7449 = -1.*t7390*t3218;
  t7452 = t7438 + t7449;
  t7398 = t116*t7390;
  t7412 = -1.*t862*t1829*t3218;
  t7413 = t7398 + t7412;
  t7562 = -1.*t1610*t1055*t1829;
  t7584 = t1829*t1882*t2520;
  t7590 = t7562 + t7584;
  t7690 = -1.*t87*t116;
  t7718 = -1.*t7590*t3218;
  t7749 = t7690 + t7718;
  t7624 = t116*t7590;
  t7677 = -1.*t87*t3218;
  t7687 = t7624 + t7677;
  t7894 = t1610*t862;
  t7895 = -1.*t1572*t1829*t1882;
  t7933 = t7894 + t7895;
  t8032 = t1055*t7933;
  t8051 = -1.*t5543*t2520;
  t8053 = t8032 + t8051;
  t8180 = t1610*t862*t1829;
  t8185 = -1.*t1572*t1882;
  t8187 = t8180 + t8185;
  t2886 = t1055*t2317;
  t8216 = -1.*t8187*t2520;
  t8218 = t2886 + t8216;
  t8293 = -1.*t87*t1055*t1882;
  t8294 = -1.*t87*t1610*t2520;
  t8297 = t8293 + t8294;
  t8460 = -1.*t1055*t5373;
  t8464 = t8460 + t8051;
  t8203 = t1055*t8187;
  t8565 = t1572*t1610;
  t8580 = t862*t1829*t1882;
  t8594 = t8565 + t8580;
  t8632 = -1.*t1055*t8594;
  t8649 = t8632 + t8216;
  t8283 = t87*t1610*t1055;
  t8284 = -1.*t87*t1882*t2520;
  t8285 = t8283 + t8284;
  t8290 = -0.15331*t8285;
  t8298 = t8297*t3354;
  t8304 = t116*t8297*t4016;
  t8305 = -1.*t8297*t3218*t4343;
  t8314 = -1.*t3560*t8297*t3218;
  t8319 = -1.*t116*t8297*t3955;
  t8327 = t8314 + t8319;
  t8328 = 0.183*t8327;
  t8401 = t116*t3560*t8297;
  t8415 = -1.*t8297*t3218*t3955;
  t8424 = t8401 + t8415;
  t8428 = -0.25*t8424;
  t6346 = t3560*t6314;
  t8731 = -1.*t116*t5995;
  t8738 = -1.*t1572*t87*t3218;
  t8747 = t8731 + t8738;
  t8615 = -1.*t8594*t2520;
  t8619 = t8203 + t8615;
  t8799 = t87*t116*t862;
  t8817 = -1.*t8619*t3218;
  t8832 = t8799 + t8817;
  t8840 = -1.*t116*t8619;
  t8841 = t8840 + t3511;
  t8987 = -1.*t116*t1829;
  t8994 = -1.*t8285*t3218;
  t9001 = t8987 + t8994;
  t9012 = -1.*t116*t8285;
  t9013 = t1829*t3218;
  t9017 = t9012 + t9013;
  t6349 = -1.*t6192*t3955;
  t6354 = t6346 + t6349;
  t8777 = -1.*t6314*t3955;
  t9083 = 0.183*t3560;
  t9089 = -0.25*t3955;
  t9094 = t9083 + t9089;
  t9096 = 0.25*t3560;
  t9098 = t9096 + t3975;
  t8915 = t3560*t8832;
  t9154 = t116*t8619;
  t9158 = t87*t862*t3218;
  t9174 = t9154 + t9158;
  t8944 = -1.*t8832*t3955;
  t9045 = t3560*t9001;
  t9211 = t116*t8285;
  t9231 = -1.*t1829*t3218;
  t9234 = t9211 + t9231;
  t9072 = -1.*t9001*t3955;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1489*t2317 + t2404*t2805 - 0.15331*(t2404*t2520 + t2886) + t3207*t3354 + t3542*t4016 + 0.183*(-1.*t3542*t3955 + t3560*t4122) - 0.25*(t3542*t3560 + t3955*t4122) + t4122*t4343 - 1.*t490*t862*t87;
  p_output1[10]=t1489*t5373 + t2805*t5543 - 0.15331*(t1055*t5373 + t2520*t5543) + t3354*t5995 + t4016*t6192 + t4343*t6314 - 0.25*(t3560*t6192 + t3955*t6314) + 0.183*t6354 + t1572*t490*t87;
  p_output1[11]=0;
  p_output1[12]=-1.*t1572*t1829*t490 + t3354*t6918 + t4016*t6969 + t4343*t7092 + 0.183*(-1.*t3955*t6969 + t3560*t7092) - 0.25*(t3560*t6969 + t3955*t7092) + t1489*t1572*t1882*t87 + t1572*t1610*t2805*t87 - 0.15331*(t1055*t1572*t1882*t87 + t1572*t1610*t2520*t87);
  p_output1[13]=t3354*t7390 + t4016*t7413 + t4343*t7452 + 0.183*(-1.*t3955*t7413 + t3560*t7452) - 0.25*(t3560*t7413 + t3955*t7452) - 1.*t1829*t490*t862 + t1489*t1882*t862*t87 + t1610*t2805*t862*t87 - 0.15331*(t1055*t1882*t862*t87 + t1610*t2520*t862*t87);
  p_output1[14]=-1.*t1489*t1829*t1882 - 0.15331*(-1.*t1055*t1829*t1882 - 1.*t1610*t1829*t2520) - 1.*t1610*t1829*t2805 + t3354*t7590 + t4016*t7687 + t4343*t7749 + 0.183*(-1.*t3955*t7687 + t3560*t7749) - 0.25*(t3560*t7687 + t3955*t7749) - 1.*t490*t87;
  p_output1[15]=t1489*t5543 + t2805*t7933 - 0.15331*(t5984 + t2520*t7933) + t3354*t8053 + t116*t4016*t8053 - 1.*t3218*t4343*t8053 + 0.183*(-1.*t3218*t3560*t8053 - 1.*t116*t3955*t8053) - 0.25*(t116*t3560*t8053 - 1.*t3218*t3955*t8053);
  p_output1[16]=t2317*t2805 + t1489*t8187 - 0.15331*(t2317*t2520 + t8203) + t3354*t8218 + t116*t4016*t8218 - 1.*t3218*t4343*t8218 + 0.183*(-1.*t3218*t3560*t8218 - 1.*t116*t3955*t8218) - 0.25*(t116*t3560*t8218 - 1.*t3218*t3955*t8218);
  p_output1[17]=t8290 + t8298 + t8304 + t8305 + t8328 + t8428 + t1489*t1610*t87 - 1.*t1882*t2805*t87;
  p_output1[18]=-0.047*t2520*t5373 + 0.047*t1055*t5543 - 0.15331*t5995 + t3354*t8464 + t116*t4016*t8464 - 1.*t3218*t4343*t8464 + 0.183*(-1.*t3218*t3560*t8464 - 1.*t116*t3955*t8464) - 0.25*(t116*t3560*t8464 - 1.*t3218*t3955*t8464);
  p_output1[19]=0.047*t1055*t8187 - 0.047*t2520*t8594 - 0.15331*t8619 + t3354*t8649 + t116*t4016*t8649 - 1.*t3218*t4343*t8649 + 0.183*(-1.*t3218*t3560*t8649 - 1.*t116*t3955*t8649) - 0.25*(t116*t3560*t8649 - 1.*t3218*t3955*t8649);
  p_output1[20]=t8290 + t8298 + t8304 + t8305 + t8328 + t8428 + 0.047*t1055*t1610*t87 - 0.047*t1882*t2520*t87;
  p_output1[21]=0.183*t116*t5995 + t4016*t6314 + 0.183*t1572*t3218*t87 + t4343*t8747 - 0.25*(t6346 + t3955*t8747) + 0.183*(t3560*t8747 + t8777);
  p_output1[22]=0.183*t116*t8619 + 0.183*t3218*t862*t87 + t4016*t8832 + t4343*t8841 - 0.25*(t3955*t8841 + t8915) + 0.183*(t3560*t8841 + t8944);
  p_output1[23]=-0.183*t1829*t3218 + 0.183*t116*t8285 + t4016*t9001 + t4343*t9017 - 0.25*(t3955*t9017 + t9045) + 0.183*(t3560*t9017 + t9072);
  p_output1[24]=-0.25*t6354 + 0.183*(-1.*t3560*t6192 + t8777) + t6192*t9094 + t6314*t9098;
  p_output1[25]=t8832*t9098 + t9094*t9174 + 0.183*(t8944 - 1.*t3560*t9174) - 0.25*(t8915 - 1.*t3955*t9174);
  p_output1[26]=t9001*t9098 + t9094*t9234 + 0.183*(t9072 - 1.*t3560*t9234) - 0.25*(t9045 - 1.*t3955*t9234);
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



void Jp_FR_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
