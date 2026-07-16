/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:10:12 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RR_calf_joint_src.h"

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
  double t1002;
  double t2090;
  double t1797;
  double t1957;
  double t2162;
  double t1316;
  double t1992;
  double t2399;
  double t2438;
  double t2505;
  double t3110;
  double t3350;
  double t3352;
  double t995;
  double t3720;
  double t128;
  double t3837;
  double t4018;
  double t4068;
  double t4193;
  double t4385;
  double t5239;
  double t5387;
  double t5984;
  double t6524;
  double t6772;
  double t8422;
  double t8492;
  double t8503;
  double t350;
  double t361;
  double t431;
  double t965;
  double t1630;
  double t1796;
  double t2691;
  double t2730;
  double t2802;
  double t2811;
  double t8637;
  double t8644;
  double t8645;
  double t8651;
  double t8653;
  double t8654;
  double t3827;
  double t3833;
  double t5341;
  double t5578;
  double t5886;
  double t8689;
  double t8691;
  double t8695;
  double t7714;
  double t8368;
  double t8380;
  double t8701;
  double t8704;
  double t8705;
  double t8720;
  double t8725;
  double t8728;
  double t8786;
  double t8793;
  double t8794;
  double t8797;
  double t8798;
  double t8799;
  double t8808;
  double t8814;
  double t8818;
  double t8861;
  double t8862;
  double t8867;
  double t8881;
  double t8884;
  double t8894;
  double t8896;
  double t8898;
  double t8900;
  double t8941;
  double t8942;
  double t8948;
  double t8951;
  double t8953;
  double t8955;
  double t8957;
  double t8958;
  double t8964;
  double t8991;
  double t8993;
  double t8994;
  double t8997;
  double t8998;
  double t9001;
  double t9061;
  double t9062;
  double t9070;
  double t3657;
  double t9096;
  double t9111;
  double t9179;
  double t9183;
  double t9191;
  double t9226;
  double t9227;
  double t9277;
  double t9286;
  double t9291;
  double t9296;
  double t9299;
  double t9143;
  double t9192;
  double t9194;
  double t9197;
  double t9199;
  double t9200;
  double t9208;
  double t9210;
  double t9211;
  double t9212;
  double t9213;
  double t9215;
  double t9216;
  double t9217;
  double t9218;
  double t9219;
  double t9359;
  double t9360;
  double t9361;
  double t8731;
  double t9319;
  double t9323;
  double t9380;
  double t9381;
  double t9384;
  double t9388;
  double t9391;
  double t9425;
  double t9426;
  double t9428;
  double t9431;
  double t9432;
  double t9433;
  double t8730;
  double t8732;
  double t9370;
  double t9448;
  double t9450;
  double t9451;
  double t9456;
  double t9458;
  double t9472;
  double t9473;
  double t9474;
  double t9399;
  double t9409;
  double t9485;
  double t9486;
  double t9487;
  double t9436;
  double t9440;
  t1002 = Sin(var1[3]);
  t2090 = Cos(var1[3]);
  t1797 = Cos(var1[5]);
  t1957 = Sin(var1[4]);
  t2162 = Sin(var1[5]);
  t1316 = Sin(var1[12]);
  t1992 = -1.*t1797*t1002*t1957;
  t2399 = t2090*t2162;
  t2438 = t1992 + t2399;
  t2505 = Cos(var1[12]);
  t3110 = -1.*t2090*t1797;
  t3350 = -1.*t1002*t1957*t2162;
  t3352 = t3110 + t3350;
  t995 = Cos(var1[4]);
  t3720 = Sin(var1[13]);
  t128 = Cos(var1[13]);
  t3837 = t2505*t2438;
  t4018 = -1.*t1316*t3352;
  t4068 = t3837 + t4018;
  t4193 = Cos(var1[14]);
  t4385 = -1.*t4193;
  t5239 = 1. + t4385;
  t5387 = Sin(var1[14]);
  t5984 = -1.*t995*t3720*t1002;
  t6524 = t128*t4068;
  t6772 = t5984 + t6524;
  t8422 = -1.*t128*t995*t1002;
  t8492 = -1.*t3720*t4068;
  t8503 = t8422 + t8492;
  t350 = -1.*t128;
  t361 = 1. + t350;
  t431 = -0.183*t361;
  t965 = 0. + t431;
  t1630 = 0.047*t1316;
  t1796 = 0. + t1630;
  t2691 = -1.*t2505;
  t2730 = 1. + t2691;
  t2802 = -0.047*t2730;
  t2811 = 0. + t2802;
  t8637 = t2090*t1797*t1957;
  t8644 = t1002*t2162;
  t8645 = t8637 + t8644;
  t8651 = -1.*t1797*t1002;
  t8653 = t2090*t1957*t2162;
  t8654 = t8651 + t8653;
  t3827 = -0.183*t3720;
  t3833 = 0. + t3827;
  t5341 = -0.1*t5239;
  t5578 = -0.183*t5387;
  t5886 = 0. + t5341 + t5578;
  t8689 = t2505*t8645;
  t8691 = -1.*t1316*t8654;
  t8695 = t8689 + t8691;
  t7714 = -0.183*t5239;
  t8368 = 0.1*t5387;
  t8380 = 0. + t7714 + t8368;
  t8701 = t2090*t995*t3720;
  t8704 = t128*t8695;
  t8705 = t8701 + t8704;
  t8720 = t128*t2090*t995;
  t8725 = -1.*t3720*t8695;
  t8728 = t8720 + t8725;
  t8786 = t2505*t2090*t995*t1797;
  t8793 = -1.*t2090*t995*t1316*t2162;
  t8794 = t8786 + t8793;
  t8797 = -1.*t2090*t3720*t1957;
  t8798 = t128*t8794;
  t8799 = t8797 + t8798;
  t8808 = -1.*t128*t2090*t1957;
  t8814 = -1.*t3720*t8794;
  t8818 = t8808 + t8814;
  t8861 = t2505*t995*t1797*t1002;
  t8862 = -1.*t995*t1316*t1002*t2162;
  t8867 = t8861 + t8862;
  t8881 = -1.*t3720*t1002*t1957;
  t8884 = t128*t8867;
  t8894 = t8881 + t8884;
  t8896 = -1.*t128*t1002*t1957;
  t8898 = -1.*t3720*t8867;
  t8900 = t8896 + t8898;
  t8941 = -1.*t2505*t1797*t1957;
  t8942 = t1316*t1957*t2162;
  t8948 = t8941 + t8942;
  t8951 = -1.*t995*t3720;
  t8953 = t128*t8948;
  t8955 = t8951 + t8953;
  t8957 = -1.*t128*t995;
  t8958 = -1.*t3720*t8948;
  t8964 = t8957 + t8958;
  t8991 = t1797*t1002;
  t8993 = -1.*t2090*t1957*t2162;
  t8994 = t8991 + t8993;
  t8997 = -1.*t1316*t8645;
  t8998 = t2505*t8994;
  t9001 = t8997 + t8998;
  t9061 = t1797*t1002*t1957;
  t9062 = -1.*t2090*t2162;
  t9070 = t9061 + t9062;
  t3657 = t2505*t3352;
  t9096 = -1.*t1316*t9070;
  t9111 = t9096 + t3657;
  t9179 = -1.*t995*t1797*t1316;
  t9183 = -1.*t2505*t995*t2162;
  t9191 = t9179 + t9183;
  t9226 = -1.*t2505*t8654;
  t9227 = t8997 + t9226;
  t9277 = t2090*t1797;
  t9286 = t1002*t1957*t2162;
  t9291 = t9277 + t9286;
  t9296 = -1.*t2505*t9291;
  t9299 = t9096 + t9296;
  t9143 = t2505*t9070;
  t9192 = t3833*t9191;
  t9194 = t128*t5886*t9191;
  t9197 = -1.*t3720*t8380*t9191;
  t9199 = t2505*t995*t1797;
  t9200 = -1.*t995*t1316*t2162;
  t9208 = t9199 + t9200;
  t9210 = -0.13205*t9208;
  t9211 = -1.*t4193*t3720*t9191;
  t9212 = -1.*t128*t5387*t9191;
  t9213 = t9211 + t9212;
  t9215 = -0.183*t9213;
  t9216 = t128*t4193*t9191;
  t9217 = -1.*t3720*t5387*t9191;
  t9218 = t9216 + t9217;
  t9219 = -0.1*t9218;
  t9359 = -1.*t2090*t995*t3720;
  t9360 = -1.*t128*t8695;
  t9361 = t9359 + t9360;
  t8731 = t4193*t8728;
  t9319 = -1.*t1316*t9291;
  t9323 = t9143 + t9319;
  t9380 = -1.*t128*t9323;
  t9381 = t5984 + t9380;
  t9384 = t128*t995*t1002;
  t9388 = -1.*t3720*t9323;
  t9391 = t9384 + t9388;
  t9425 = t3720*t1957;
  t9426 = -1.*t128*t9208;
  t9428 = t9425 + t9426;
  t9431 = -1.*t128*t1957;
  t9432 = -1.*t3720*t9208;
  t9433 = t9431 + t9432;
  t8730 = -1.*t5387*t8705;
  t8732 = t8730 + t8731;
  t9370 = -1.*t5387*t8728;
  t9448 = -0.183*t4193;
  t9450 = -0.1*t5387;
  t9451 = t9448 + t9450;
  t9456 = 0.1*t4193;
  t9458 = t9456 + t5578;
  t9472 = t995*t3720*t1002;
  t9473 = t128*t9323;
  t9474 = t9472 + t9473;
  t9399 = t4193*t9391;
  t9409 = -1.*t5387*t9391;
  t9485 = -1.*t3720*t1957;
  t9486 = t128*t9208;
  t9487 = t9485 + t9486;
  t9436 = t4193*t9433;
  t9440 = -1.*t5387*t9433;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1796*t2438 + t2811*t3352 - 0.13205*(t1316*t2438 + t3657) + t3833*t4068 + t5886*t6772 + t8380*t8503 - 0.183*(-1.*t5387*t6772 + t4193*t8503) - 0.1*(t4193*t6772 + t5387*t8503) - 1.*t1002*t965*t995;
  p_output1[10]=t1796*t8645 + t2811*t8654 - 0.13205*(t1316*t8645 + t2505*t8654) + t3833*t8695 + t5886*t8705 + t8380*t8728 - 0.1*(t4193*t8705 + t5387*t8728) - 0.183*t8732 + t2090*t965*t995;
  p_output1[11]=0;
  p_output1[12]=t3833*t8794 + t5886*t8799 + t8380*t8818 - 0.183*(-1.*t5387*t8799 + t4193*t8818) - 0.1*(t4193*t8799 + t5387*t8818) - 1.*t1957*t2090*t965 + t1796*t1797*t2090*t995 + t2090*t2162*t2811*t995 - 0.13205*(t1316*t1797*t2090*t995 + t2090*t2162*t2505*t995);
  p_output1[13]=t3833*t8867 + t5886*t8894 + t8380*t8900 - 0.183*(-1.*t5387*t8894 + t4193*t8900) - 0.1*(t4193*t8894 + t5387*t8900) - 1.*t1002*t1957*t965 + t1002*t1796*t1797*t995 + t1002*t2162*t2811*t995 - 0.13205*(t1002*t1316*t1797*t995 + t1002*t2162*t2505*t995);
  p_output1[14]=-1.*t1796*t1797*t1957 - 0.13205*(-1.*t1316*t1797*t1957 - 1.*t1957*t2162*t2505) - 1.*t1957*t2162*t2811 + t3833*t8948 + t5886*t8955 + t8380*t8964 - 0.183*(-1.*t5387*t8955 + t4193*t8964) - 0.1*(t4193*t8955 + t5387*t8964) - 1.*t965*t995;
  p_output1[15]=t2811*t8645 + t1796*t8994 - 0.13205*(t8689 + t1316*t8994) + t3833*t9001 + t128*t5886*t9001 - 1.*t3720*t8380*t9001 - 0.183*(-1.*t3720*t4193*t9001 - 1.*t128*t5387*t9001) - 0.1*(t128*t4193*t9001 - 1.*t3720*t5387*t9001);
  p_output1[16]=t1796*t3352 + t2811*t9070 + t3833*t9111 + t128*t5886*t9111 - 1.*t3720*t8380*t9111 - 0.183*(-1.*t3720*t4193*t9111 - 1.*t128*t5387*t9111) - 0.1*(t128*t4193*t9111 - 1.*t3720*t5387*t9111) - 0.13205*(t1316*t3352 + t9143);
  p_output1[17]=t9192 + t9194 + t9197 + t9210 + t9215 + t9219 - 1.*t1796*t2162*t995 + t1797*t2811*t995;
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
  p_output1[36]=0.047*t2505*t8645 - 0.047*t1316*t8654 - 0.13205*t8695 + t3833*t9227 + t128*t5886*t9227 - 1.*t3720*t8380*t9227 - 0.183*(-1.*t3720*t4193*t9227 - 1.*t128*t5387*t9227) - 0.1*(t128*t4193*t9227 - 1.*t3720*t5387*t9227);
  p_output1[37]=0.047*t2505*t9070 - 0.047*t1316*t9291 + t3833*t9299 + t128*t5886*t9299 - 1.*t3720*t8380*t9299 - 0.183*(-1.*t3720*t4193*t9299 - 1.*t128*t5387*t9299) - 0.1*(t128*t4193*t9299 - 1.*t3720*t5387*t9299) - 0.13205*t9323;
  p_output1[38]=t9192 + t9194 + t9197 + t9210 + t9215 + t9219 - 0.047*t1316*t2162*t995 + 0.047*t1797*t2505*t995;
  p_output1[39]=-0.183*t128*t8695 + t5886*t8728 + t8380*t9361 - 0.1*(t8731 + t5387*t9361) - 0.183*(t4193*t9361 + t9370) - 0.183*t2090*t3720*t995;
  p_output1[40]=-0.183*t128*t9323 + t8380*t9381 + t5886*t9391 - 0.1*(t5387*t9381 + t9399) - 0.183*(t4193*t9381 + t9409) - 0.183*t1002*t3720*t995;
  p_output1[41]=0.183*t1957*t3720 - 0.183*t128*t9208 + t8380*t9428 + t5886*t9433 - 0.1*(t5387*t9428 + t9436) - 0.183*(t4193*t9428 + t9440);
  p_output1[42]=-0.1*t8732 - 0.183*(-1.*t4193*t8705 + t9370) + t8705*t9451 + t8728*t9458;
  p_output1[43]=t9391*t9458 + t9451*t9474 - 0.183*(t9409 - 1.*t4193*t9474) - 0.1*(t9399 - 1.*t5387*t9474);
  p_output1[44]=t9433*t9458 + t9451*t9487 - 0.183*(t9440 - 1.*t4193*t9487) - 0.1*(t9436 - 1.*t5387*t9487);
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



void Jp_RR_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
