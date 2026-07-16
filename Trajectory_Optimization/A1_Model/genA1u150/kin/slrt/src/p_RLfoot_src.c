/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:26:10 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RLfoot_src.h"

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
  double t3259;
  double t4935;
  double t5270;
  double t5066;
  double t5440;
  double t3994;
  double t5184;
  double t5457;
  double t5539;
  double t5665;
  double t5802;
  double t5815;
  double t5845;
  double t3356;
  double t6174;
  double t392;
  double t6251;
  double t6271;
  double t6300;
  double t6344;
  double t6351;
  double t6418;
  double t6509;
  double t6550;
  double t6564;
  double t6568;
  double t6624;
  double t6625;
  double t6627;
  double t1699;
  double t1845;
  double t2879;
  double t2975;
  double t4299;
  double t4892;
  double t5668;
  double t5730;
  double t5790;
  double t5794;
  double t6830;
  double t6851;
  double t6852;
  double t6868;
  double t6903;
  double t6916;
  double t6218;
  double t6220;
  double t6434;
  double t6540;
  double t6542;
  double t6980;
  double t6999;
  double t7006;
  double t6578;
  double t6579;
  double t6585;
  double t7068;
  double t7083;
  double t7090;
  double t7129;
  double t7164;
  double t7177;
  double t7329;
  double t7330;
  double t7334;
  double t7367;
  double t7370;
  double t7375;
  double t7390;
  double t7393;
  double t7394;
  t3259 = Cos(var1[3]);
  t4935 = Cos(var1[5]);
  t5270 = Sin(var1[3]);
  t5066 = Sin(var1[4]);
  t5440 = Sin(var1[5]);
  t3994 = Sin(var1[15]);
  t5184 = t3259*t4935*t5066;
  t5457 = t5270*t5440;
  t5539 = t5184 + t5457;
  t5665 = Cos(var1[15]);
  t5802 = -1.*t4935*t5270;
  t5815 = t3259*t5066*t5440;
  t5845 = t5802 + t5815;
  t3356 = Cos(var1[4]);
  t6174 = Sin(var1[16]);
  t392 = Cos(var1[16]);
  t6251 = t5665*t5539;
  t6271 = -1.*t3994*t5845;
  t6300 = t6251 + t6271;
  t6344 = Cos(var1[17]);
  t6351 = -1.*t6344;
  t6418 = 1. + t6351;
  t6509 = Sin(var1[17]);
  t6550 = t3259*t3356*t6174;
  t6564 = t392*t6300;
  t6568 = t6550 + t6564;
  t6624 = t392*t3259*t3356;
  t6625 = -1.*t6174*t6300;
  t6627 = t6624 + t6625;
  t1699 = -1.*t392;
  t1845 = 1. + t1699;
  t2879 = -0.183*t1845;
  t2975 = 0. + t2879;
  t4299 = -0.047*t3994;
  t4892 = 0. + t4299;
  t5668 = -1.*t5665;
  t5730 = 1. + t5668;
  t5790 = 0.047*t5730;
  t5794 = 0. + t5790;
  t6830 = t4935*t5270*t5066;
  t6851 = -1.*t3259*t5440;
  t6852 = t6830 + t6851;
  t6868 = t3259*t4935;
  t6903 = t5270*t5066*t5440;
  t6916 = t6868 + t6903;
  t6218 = -0.183*t6174;
  t6220 = 0. + t6218;
  t6434 = -0.3*t6418;
  t6540 = -0.183*t6509;
  t6542 = 0. + t6434 + t6540;
  t6980 = t5665*t6852;
  t6999 = -1.*t3994*t6916;
  t7006 = t6980 + t6999;
  t6578 = -0.183*t6418;
  t6579 = 0.3*t6509;
  t6585 = 0. + t6578 + t6579;
  t7068 = t3356*t6174*t5270;
  t7083 = t392*t7006;
  t7090 = t7068 + t7083;
  t7129 = t392*t3356*t5270;
  t7164 = -1.*t6174*t7006;
  t7177 = t7129 + t7164;
  t7329 = t5665*t3356*t4935;
  t7330 = -1.*t3356*t3994*t5440;
  t7334 = t7329 + t7330;
  t7367 = -1.*t6174*t5066;
  t7370 = t392*t7334;
  t7375 = t7367 + t7370;
  t7390 = -1.*t392*t5066;
  t7393 = -1.*t6174*t7334;
  t7394 = t7390 + t7393;
  p_output1[0]=0. + t2975*t3259*t3356 + t4892*t5539 + t5794*t5845 + 0.17458*(t3994*t5539 + t5665*t5845) + t6220*t6300 + t6542*t6568 + t6585*t6627 - 0.183*(-1.*t6509*t6568 + t6344*t6627) - 0.6*(t6344*t6568 + t6509*t6627) + var1[0];
  p_output1[1]=0. + t2975*t3356*t5270 + t4892*t6852 + t5794*t6916 + 0.17458*(t3994*t6852 + t5665*t6916) + t6220*t7006 + t6542*t7090 + t6585*t7177 - 0.183*(-1.*t6509*t7090 + t6344*t7177) - 0.6*(t6344*t7090 + t6509*t7177) + var1[1];
  p_output1[2]=0. + t3356*t4892*t4935 - 1.*t2975*t5066 + 0.17458*(t3356*t3994*t4935 + t3356*t5440*t5665) + t3356*t5440*t5794 + t6220*t7334 + t6542*t7375 + t6585*t7394 - 0.183*(-1.*t6509*t7375 + t6344*t7394) - 0.6*(t6344*t7375 + t6509*t7394) + var1[2];
}



void p_RLfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
