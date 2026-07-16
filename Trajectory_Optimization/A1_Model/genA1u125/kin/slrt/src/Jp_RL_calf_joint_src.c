/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:20:44 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RL_calf_joint_src.h"

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
  double t326;
  double t1223;
  double t851;
  double t963;
  double t1306;
  double t535;
  double t997;
  double t1334;
  double t1416;
  double t1599;
  double t1891;
  double t1895;
  double t1936;
  double t306;
  double t2238;
  double t31;
  double t2421;
  double t2459;
  double t2668;
  double t2800;
  double t2811;
  double t2823;
  double t2949;
  double t3190;
  double t3192;
  double t3223;
  double t3479;
  double t3517;
  double t3620;
  double t145;
  double t177;
  double t237;
  double t244;
  double t674;
  double t713;
  double t1648;
  double t1763;
  double t1794;
  double t1856;
  double t4182;
  double t4213;
  double t4284;
  double t4434;
  double t4445;
  double t4449;
  double t2248;
  double t2289;
  double t2898;
  double t3097;
  double t3162;
  double t4512;
  double t4532;
  double t4679;
  double t3442;
  double t3448;
  double t3471;
  double t4816;
  double t4825;
  double t4902;
  double t5082;
  double t5116;
  double t5121;
  double t5962;
  double t5963;
  double t6025;
  double t6208;
  double t6360;
  double t6500;
  double t6527;
  double t6528;
  double t6566;
  double t7272;
  double t7310;
  double t7312;
  double t7375;
  double t7380;
  double t7392;
  double t7502;
  double t7505;
  double t7530;
  double t7858;
  double t7875;
  double t7898;
  double t7948;
  double t7971;
  double t8006;
  double t8063;
  double t8080;
  double t8104;
  double t8461;
  double t8483;
  double t8485;
  double t8510;
  double t8517;
  double t8521;
  double t8756;
  double t8773;
  double t8785;
  double t2075;
  double t8799;
  double t8804;
  double t9020;
  double t9027;
  double t9038;
  double t9153;
  double t9163;
  double t9244;
  double t9245;
  double t9246;
  double t9249;
  double t9251;
  double t8820;
  double t9040;
  double t9047;
  double t9055;
  double t9057;
  double t9059;
  double t9067;
  double t9076;
  double t9077;
  double t9106;
  double t9115;
  double t9126;
  double t9128;
  double t9136;
  double t9138;
  double t9146;
  double t9333;
  double t9334;
  double t9337;
  double t5422;
  double t9258;
  double t9260;
  double t9365;
  double t9367;
  double t9374;
  double t9378;
  double t9379;
  double t9407;
  double t9409;
  double t9413;
  double t9415;
  double t9416;
  double t9418;
  double t5194;
  double t5456;
  double t9349;
  double t9439;
  double t9441;
  double t9443;
  double t9447;
  double t9449;
  double t9471;
  double t9472;
  double t9476;
  double t9385;
  double t9396;
  double t9491;
  double t9492;
  double t9493;
  double t9422;
  double t9432;
  t326 = Sin(var1[3]);
  t1223 = Cos(var1[3]);
  t851 = Cos(var1[5]);
  t963 = Sin(var1[4]);
  t1306 = Sin(var1[5]);
  t535 = Sin(var1[15]);
  t997 = -1.*t851*t326*t963;
  t1334 = t1223*t1306;
  t1416 = t997 + t1334;
  t1599 = Cos(var1[15]);
  t1891 = -1.*t1223*t851;
  t1895 = -1.*t326*t963*t1306;
  t1936 = t1891 + t1895;
  t306 = Cos(var1[4]);
  t2238 = Sin(var1[16]);
  t31 = Cos(var1[16]);
  t2421 = t1599*t1416;
  t2459 = -1.*t535*t1936;
  t2668 = t2421 + t2459;
  t2800 = Cos(var1[17]);
  t2811 = -1.*t2800;
  t2823 = 1. + t2811;
  t2949 = Sin(var1[17]);
  t3190 = -1.*t306*t2238*t326;
  t3192 = t31*t2668;
  t3223 = t3190 + t3192;
  t3479 = -1.*t31*t306*t326;
  t3517 = -1.*t2238*t2668;
  t3620 = t3479 + t3517;
  t145 = -1.*t31;
  t177 = 1. + t145;
  t237 = -0.183*t177;
  t244 = 0. + t237;
  t674 = -0.047*t535;
  t713 = 0. + t674;
  t1648 = -1.*t1599;
  t1763 = 1. + t1648;
  t1794 = 0.047*t1763;
  t1856 = 0. + t1794;
  t4182 = t1223*t851*t963;
  t4213 = t326*t1306;
  t4284 = t4182 + t4213;
  t4434 = -1.*t851*t326;
  t4445 = t1223*t963*t1306;
  t4449 = t4434 + t4445;
  t2248 = -0.183*t2238;
  t2289 = 0. + t2248;
  t2898 = -0.25*t2823;
  t3097 = -0.183*t2949;
  t3162 = 0. + t2898 + t3097;
  t4512 = t1599*t4284;
  t4532 = -1.*t535*t4449;
  t4679 = t4512 + t4532;
  t3442 = -0.183*t2823;
  t3448 = 0.25*t2949;
  t3471 = 0. + t3442 + t3448;
  t4816 = t1223*t306*t2238;
  t4825 = t31*t4679;
  t4902 = t4816 + t4825;
  t5082 = t31*t1223*t306;
  t5116 = -1.*t2238*t4679;
  t5121 = t5082 + t5116;
  t5962 = t1599*t1223*t306*t851;
  t5963 = -1.*t1223*t306*t535*t1306;
  t6025 = t5962 + t5963;
  t6208 = -1.*t1223*t2238*t963;
  t6360 = t31*t6025;
  t6500 = t6208 + t6360;
  t6527 = -1.*t31*t1223*t963;
  t6528 = -1.*t2238*t6025;
  t6566 = t6527 + t6528;
  t7272 = t1599*t306*t851*t326;
  t7310 = -1.*t306*t535*t326*t1306;
  t7312 = t7272 + t7310;
  t7375 = -1.*t2238*t326*t963;
  t7380 = t31*t7312;
  t7392 = t7375 + t7380;
  t7502 = -1.*t31*t326*t963;
  t7505 = -1.*t2238*t7312;
  t7530 = t7502 + t7505;
  t7858 = -1.*t1599*t851*t963;
  t7875 = t535*t963*t1306;
  t7898 = t7858 + t7875;
  t7948 = -1.*t306*t2238;
  t7971 = t31*t7898;
  t8006 = t7948 + t7971;
  t8063 = -1.*t31*t306;
  t8080 = -1.*t2238*t7898;
  t8104 = t8063 + t8080;
  t8461 = t851*t326;
  t8483 = -1.*t1223*t963*t1306;
  t8485 = t8461 + t8483;
  t8510 = -1.*t535*t4284;
  t8517 = t1599*t8485;
  t8521 = t8510 + t8517;
  t8756 = t851*t326*t963;
  t8773 = -1.*t1223*t1306;
  t8785 = t8756 + t8773;
  t2075 = t1599*t1936;
  t8799 = -1.*t535*t8785;
  t8804 = t8799 + t2075;
  t9020 = -1.*t306*t851*t535;
  t9027 = -1.*t1599*t306*t1306;
  t9038 = t9020 + t9027;
  t9153 = -1.*t1599*t4449;
  t9163 = t8510 + t9153;
  t9244 = t1223*t851;
  t9245 = t326*t963*t1306;
  t9246 = t9244 + t9245;
  t9249 = -1.*t1599*t9246;
  t9251 = t8799 + t9249;
  t8820 = t1599*t8785;
  t9040 = t2289*t9038;
  t9047 = t31*t3162*t9038;
  t9055 = -1.*t2238*t3471*t9038;
  t9057 = t1599*t306*t851;
  t9059 = -1.*t306*t535*t1306;
  t9067 = t9057 + t9059;
  t9076 = 0.15331*t9067;
  t9077 = -1.*t2800*t2238*t9038;
  t9106 = -1.*t31*t2949*t9038;
  t9115 = t9077 + t9106;
  t9126 = -0.183*t9115;
  t9128 = t31*t2800*t9038;
  t9136 = -1.*t2238*t2949*t9038;
  t9138 = t9128 + t9136;
  t9146 = -0.25*t9138;
  t9333 = -1.*t1223*t306*t2238;
  t9334 = -1.*t31*t4679;
  t9337 = t9333 + t9334;
  t5422 = t2800*t5121;
  t9258 = -1.*t535*t9246;
  t9260 = t8820 + t9258;
  t9365 = -1.*t31*t9260;
  t9367 = t3190 + t9365;
  t9374 = t31*t306*t326;
  t9378 = -1.*t2238*t9260;
  t9379 = t9374 + t9378;
  t9407 = t2238*t963;
  t9409 = -1.*t31*t9067;
  t9413 = t9407 + t9409;
  t9415 = -1.*t31*t963;
  t9416 = -1.*t2238*t9067;
  t9418 = t9415 + t9416;
  t5194 = -1.*t2949*t4902;
  t5456 = t5194 + t5422;
  t9349 = -1.*t2949*t5121;
  t9439 = -0.183*t2800;
  t9441 = -0.25*t2949;
  t9443 = t9439 + t9441;
  t9447 = 0.25*t2800;
  t9449 = t9447 + t3097;
  t9471 = t306*t2238*t326;
  t9472 = t31*t9260;
  t9476 = t9471 + t9472;
  t9385 = t2800*t9379;
  t9396 = -1.*t2949*t9379;
  t9491 = -1.*t2238*t963;
  t9492 = t31*t9067;
  t9493 = t9491 + t9492;
  t9422 = t2800*t9418;
  t9432 = -1.*t2949*t9418;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1856*t1936 + t2289*t2668 + t3162*t3223 - 1.*t244*t306*t326 + t3471*t3620 - 0.183*(-1.*t2949*t3223 + t2800*t3620) - 0.25*(t2800*t3223 + t2949*t3620) + 0.15331*(t2075 + t1416*t535) + t1416*t713;
  p_output1[10]=t1223*t244*t306 + t1856*t4449 + t2289*t4679 + t3162*t4902 + t3471*t5121 - 0.25*(t2800*t4902 + t2949*t5121) + 0.15331*(t1599*t4449 + t4284*t535) - 0.183*t5456 + t4284*t713;
  p_output1[11]=0;
  p_output1[12]=t1223*t1306*t1856*t306 + t2289*t6025 + t3162*t6500 + t3471*t6566 - 0.183*(-1.*t2949*t6500 + t2800*t6566) - 0.25*(t2800*t6500 + t2949*t6566) + t1223*t306*t713*t851 + 0.15331*(t1223*t1306*t1599*t306 + t1223*t306*t535*t851) - 1.*t1223*t244*t963;
  p_output1[13]=t1306*t1856*t306*t326 + t2289*t7312 + t3162*t7392 + t3471*t7530 - 0.183*(-1.*t2949*t7392 + t2800*t7530) - 0.25*(t2800*t7392 + t2949*t7530) + t306*t326*t713*t851 + 0.15331*(t1306*t1599*t306*t326 + t306*t326*t535*t851) - 1.*t244*t326*t963;
  p_output1[14]=-1.*t244*t306 + t2289*t7898 + t3162*t8006 + t3471*t8104 - 0.183*(-1.*t2949*t8006 + t2800*t8104) - 0.25*(t2800*t8006 + t2949*t8104) - 1.*t1306*t1856*t963 - 1.*t713*t851*t963 + 0.15331*(-1.*t1306*t1599*t963 - 1.*t535*t851*t963);
  p_output1[15]=t1856*t4284 + t713*t8485 + 0.15331*(t4512 + t535*t8485) + t2289*t8521 + t31*t3162*t8521 - 1.*t2238*t3471*t8521 - 0.25*(-1.*t2238*t2949*t8521 + t2800*t31*t8521) - 0.183*(-1.*t2238*t2800*t8521 - 1.*t2949*t31*t8521);
  p_output1[16]=t1936*t713 + t1856*t8785 + t2289*t8804 + t31*t3162*t8804 - 1.*t2238*t3471*t8804 - 0.25*(-1.*t2238*t2949*t8804 + t2800*t31*t8804) - 0.183*(-1.*t2238*t2800*t8804 - 1.*t2949*t31*t8804) + 0.15331*(t1936*t535 + t8820);
  p_output1[17]=-1.*t1306*t306*t713 + t1856*t306*t851 + t9040 + t9047 + t9055 + t9076 + t9126 + t9146;
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
  p_output1[45]=-0.047*t1599*t4284 + 0.15331*t4679 + 0.047*t4449*t535 + t2289*t9163 + t31*t3162*t9163 - 1.*t2238*t3471*t9163 - 0.25*(-1.*t2238*t2949*t9163 + t2800*t31*t9163) - 0.183*(-1.*t2238*t2800*t9163 - 1.*t2949*t31*t9163);
  p_output1[46]=-0.047*t1599*t8785 + 0.047*t535*t9246 + t2289*t9251 + t31*t3162*t9251 - 1.*t2238*t3471*t9251 - 0.25*(-1.*t2238*t2949*t9251 + t2800*t31*t9251) - 0.183*(-1.*t2238*t2800*t9251 - 1.*t2949*t31*t9251) + 0.15331*t9260;
  p_output1[47]=0.047*t1306*t306*t535 - 0.047*t1599*t306*t851 + t9040 + t9047 + t9055 + t9076 + t9126 + t9146;
  p_output1[48]=-0.183*t1223*t2238*t306 - 0.183*t31*t4679 + t3162*t5121 + t3471*t9337 - 0.25*(t5422 + t2949*t9337) - 0.183*(t2800*t9337 + t9349);
  p_output1[49]=-0.183*t2238*t306*t326 - 0.183*t31*t9260 + t3471*t9367 + t3162*t9379 - 0.25*(t2949*t9367 + t9385) - 0.183*(t2800*t9367 + t9396);
  p_output1[50]=-0.183*t31*t9067 + t3471*t9413 + t3162*t9418 - 0.25*(t2949*t9413 + t9422) - 0.183*(t2800*t9413 + t9432) + 0.183*t2238*t963;
  p_output1[51]=-0.25*t5456 - 0.183*(-1.*t2800*t4902 + t9349) + t4902*t9443 + t5121*t9449;
  p_output1[52]=t9379*t9449 + t9443*t9476 - 0.183*(t9396 - 1.*t2800*t9476) - 0.25*(t9385 - 1.*t2949*t9476);
  p_output1[53]=t9418*t9449 + t9443*t9493 - 0.183*(t9432 - 1.*t2800*t9493) - 0.25*(t9422 - 1.*t2949*t9493);
}



void Jp_RL_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
