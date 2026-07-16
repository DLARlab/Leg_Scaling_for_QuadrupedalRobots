/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:18:16 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_FLfoot_src.h"

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
  double t672;
  double t2285;
  double t1954;
  double t2040;
  double t2355;
  double t857;
  double t2098;
  double t2358;
  double t2376;
  double t2930;
  double t3770;
  double t3802;
  double t3981;
  double t585;
  double t4336;
  double t27;
  double t4452;
  double t4712;
  double t4713;
  double t5064;
  double t5098;
  double t5105;
  double t5218;
  double t5939;
  double t6045;
  double t6111;
  double t6335;
  double t6382;
  double t6491;
  double t32;
  double t210;
  double t341;
  double t482;
  double t975;
  double t1776;
  double t3224;
  double t3267;
  double t3400;
  double t3620;
  double t6936;
  double t6961;
  double t6985;
  double t7035;
  double t7083;
  double t7282;
  double t4347;
  double t4393;
  double t5177;
  double t5427;
  double t5815;
  double t7474;
  double t7488;
  double t7490;
  double t6255;
  double t6262;
  double t6284;
  double t7517;
  double t7529;
  double t7557;
  double t7563;
  double t7569;
  double t7621;
  double t8013;
  double t8018;
  double t8021;
  double t8055;
  double t8058;
  double t8059;
  double t8066;
  double t8071;
  double t8073;
  double t8184;
  double t8199;
  double t8213;
  double t8263;
  double t8267;
  double t8274;
  double t8300;
  double t8307;
  double t8319;
  double t8434;
  double t8436;
  double t8437;
  double t8444;
  double t8463;
  double t8464;
  double t8490;
  double t8499;
  double t8502;
  double t8718;
  double t8719;
  double t8739;
  double t8741;
  double t8745;
  double t8746;
  double t8850;
  double t8855;
  double t8866;
  double t4080;
  double t8877;
  double t8883;
  double t9036;
  double t9039;
  double t9042;
  double t9307;
  double t9308;
  double t9478;
  double t9484;
  double t9487;
  double t9498;
  double t9528;
  double t8915;
  double t9050;
  double t9059;
  double t9072;
  double t9076;
  double t9081;
  double t9087;
  double t9090;
  double t9093;
  double t9115;
  double t9144;
  double t9169;
  double t9181;
  double t9186;
  double t9226;
  double t9255;
  double t9751;
  double t9758;
  double t9759;
  double t7656;
  double t9544;
  double t9609;
  double t9790;
  double t9791;
  double t9803;
  double t9808;
  double t9865;
  double t9994;
  double t10042;
  double t10100;
  double t10213;
  double t10242;
  double t10245;
  double t7650;
  double t7665;
  double t9772;
  double t10299;
  double t10304;
  double t10321;
  double t10335;
  double t10336;
  double t10363;
  double t10366;
  double t10371;
  double t9898;
  double t9927;
  double t10401;
  double t10402;
  double t10405;
  double t10273;
  double t10288;
  t672 = Sin(var1[3]);
  t2285 = Cos(var1[3]);
  t1954 = Cos(var1[5]);
  t2040 = Sin(var1[4]);
  t2355 = Sin(var1[5]);
  t857 = Sin(var1[9]);
  t2098 = -1.*t1954*t672*t2040;
  t2358 = t2285*t2355;
  t2376 = t2098 + t2358;
  t2930 = Cos(var1[9]);
  t3770 = -1.*t2285*t1954;
  t3802 = -1.*t672*t2040*t2355;
  t3981 = t3770 + t3802;
  t585 = Cos(var1[4]);
  t4336 = Sin(var1[10]);
  t27 = Cos(var1[10]);
  t4452 = t2930*t2376;
  t4712 = -1.*t857*t3981;
  t4713 = t4452 + t4712;
  t5064 = Cos(var1[11]);
  t5098 = -1.*t5064;
  t5105 = 1. + t5098;
  t5218 = Sin(var1[11]);
  t5939 = -1.*t585*t4336*t672;
  t6045 = t27*t4713;
  t6111 = t5939 + t6045;
  t6335 = -1.*t27*t585*t672;
  t6382 = -1.*t4336*t4713;
  t6491 = t6335 + t6382;
  t32 = -1.*t27;
  t210 = 1. + t32;
  t341 = 0.183*t210;
  t482 = 0. + t341;
  t975 = -0.047*t857;
  t1776 = 0. + t975;
  t3224 = -1.*t2930;
  t3267 = 1. + t3224;
  t3400 = 0.047*t3267;
  t3620 = 0. + t3400;
  t6936 = t2285*t1954*t2040;
  t6961 = t672*t2355;
  t6985 = t6936 + t6961;
  t7035 = -1.*t1954*t672;
  t7083 = t2285*t2040*t2355;
  t7282 = t7035 + t7083;
  t4347 = 0.183*t4336;
  t4393 = 0. + t4347;
  t5177 = -0.15*t5105;
  t5427 = 0.183*t5218;
  t5815 = 0. + t5177 + t5427;
  t7474 = t2930*t6985;
  t7488 = -1.*t857*t7282;
  t7490 = t7474 + t7488;
  t6255 = 0.183*t5105;
  t6262 = 0.15*t5218;
  t6284 = 0. + t6255 + t6262;
  t7517 = t2285*t585*t4336;
  t7529 = t27*t7490;
  t7557 = t7517 + t7529;
  t7563 = t27*t2285*t585;
  t7569 = -1.*t4336*t7490;
  t7621 = t7563 + t7569;
  t8013 = t2930*t2285*t585*t1954;
  t8018 = -1.*t2285*t585*t857*t2355;
  t8021 = t8013 + t8018;
  t8055 = -1.*t2285*t4336*t2040;
  t8058 = t27*t8021;
  t8059 = t8055 + t8058;
  t8066 = -1.*t27*t2285*t2040;
  t8071 = -1.*t4336*t8021;
  t8073 = t8066 + t8071;
  t8184 = t2930*t585*t1954*t672;
  t8199 = -1.*t585*t857*t672*t2355;
  t8213 = t8184 + t8199;
  t8263 = -1.*t4336*t672*t2040;
  t8267 = t27*t8213;
  t8274 = t8263 + t8267;
  t8300 = -1.*t27*t672*t2040;
  t8307 = -1.*t4336*t8213;
  t8319 = t8300 + t8307;
  t8434 = -1.*t2930*t1954*t2040;
  t8436 = t857*t2040*t2355;
  t8437 = t8434 + t8436;
  t8444 = -1.*t585*t4336;
  t8463 = t27*t8437;
  t8464 = t8444 + t8463;
  t8490 = -1.*t27*t585;
  t8499 = -1.*t4336*t8437;
  t8502 = t8490 + t8499;
  t8718 = t1954*t672;
  t8719 = -1.*t2285*t2040*t2355;
  t8739 = t8718 + t8719;
  t8741 = -1.*t857*t6985;
  t8745 = t2930*t8739;
  t8746 = t8741 + t8745;
  t8850 = t1954*t672*t2040;
  t8855 = -1.*t2285*t2355;
  t8866 = t8850 + t8855;
  t4080 = t2930*t3981;
  t8877 = -1.*t857*t8866;
  t8883 = t8877 + t4080;
  t9036 = -1.*t585*t1954*t857;
  t9039 = -1.*t2930*t585*t2355;
  t9042 = t9036 + t9039;
  t9307 = -1.*t2930*t7282;
  t9308 = t8741 + t9307;
  t9478 = t2285*t1954;
  t9484 = t672*t2040*t2355;
  t9487 = t9478 + t9484;
  t9498 = -1.*t2930*t9487;
  t9528 = t8877 + t9498;
  t8915 = t2930*t8866;
  t9050 = t4393*t9042;
  t9059 = -1.*t4336*t6284*t9042;
  t9072 = t27*t5815*t9042;
  t9076 = t2930*t585*t1954;
  t9081 = -1.*t585*t857*t2355;
  t9087 = t9076 + t9081;
  t9090 = 0.11079*t9087;
  t9093 = -1.*t5064*t4336*t9042;
  t9115 = -1.*t27*t5218*t9042;
  t9144 = t9093 + t9115;
  t9169 = 0.183*t9144;
  t9181 = t27*t5064*t9042;
  t9186 = -1.*t4336*t5218*t9042;
  t9226 = t9181 + t9186;
  t9255 = -0.3*t9226;
  t9751 = -1.*t2285*t585*t4336;
  t9758 = -1.*t27*t7490;
  t9759 = t9751 + t9758;
  t7656 = t5064*t7621;
  t9544 = -1.*t857*t9487;
  t9609 = t8915 + t9544;
  t9790 = -1.*t27*t9609;
  t9791 = t5939 + t9790;
  t9803 = t27*t585*t672;
  t9808 = -1.*t4336*t9609;
  t9865 = t9803 + t9808;
  t9994 = t4336*t2040;
  t10042 = -1.*t27*t9087;
  t10100 = t9994 + t10042;
  t10213 = -1.*t27*t2040;
  t10242 = -1.*t4336*t9087;
  t10245 = t10213 + t10242;
  t7650 = -1.*t5218*t7557;
  t7665 = t7650 + t7656;
  t9772 = -1.*t5218*t7621;
  t10299 = 0.183*t5064;
  t10304 = -0.15*t5218;
  t10321 = t10299 + t10304;
  t10335 = 0.15*t5064;
  t10336 = t10335 + t5427;
  t10363 = t585*t4336*t672;
  t10366 = t27*t9609;
  t10371 = t10363 + t10366;
  t9898 = t5064*t9865;
  t9927 = -1.*t5218*t9865;
  t10401 = -1.*t4336*t2040;
  t10402 = t27*t9087;
  t10405 = t10401 + t10402;
  t10273 = t5064*t10245;
  t10288 = -1.*t5218*t10245;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1776*t2376 + t3620*t3981 + t4393*t4713 + t5815*t6111 + t6284*t6491 + 0.183*(-1.*t5218*t6111 + t5064*t6491) - 0.3*(t5064*t6111 + t5218*t6491) - 1.*t482*t585*t672 + 0.11079*(t4080 + t2376*t857);
  p_output1[10]=t2285*t482*t585 + t1776*t6985 + t3620*t7282 + t4393*t7490 + t5815*t7557 + t6284*t7621 - 0.3*(t5064*t7557 + t5218*t7621) + 0.183*t7665 + 0.11079*(t2930*t7282 + t6985*t857);
  p_output1[11]=0;
  p_output1[12]=-1.*t2040*t2285*t482 + t1776*t1954*t2285*t585 + t2285*t2355*t3620*t585 + t4393*t8021 + t5815*t8059 + t6284*t8073 + 0.183*(-1.*t5218*t8059 + t5064*t8073) - 0.3*(t5064*t8059 + t5218*t8073) + 0.11079*(t2285*t2355*t2930*t585 + t1954*t2285*t585*t857);
  p_output1[13]=-1.*t2040*t482*t672 + t1776*t1954*t585*t672 + t2355*t3620*t585*t672 + t4393*t8213 + t5815*t8274 + t6284*t8319 + 0.183*(-1.*t5218*t8274 + t5064*t8319) - 0.3*(t5064*t8274 + t5218*t8319) + 0.11079*(t2355*t2930*t585*t672 + t1954*t585*t672*t857);
  p_output1[14]=-1.*t1776*t1954*t2040 - 1.*t2040*t2355*t3620 - 1.*t482*t585 + t4393*t8437 + t5815*t8464 + t6284*t8502 + 0.183*(-1.*t5218*t8464 + t5064*t8502) - 0.3*(t5064*t8464 + t5218*t8502) + 0.11079*(-1.*t2040*t2355*t2930 - 1.*t1954*t2040*t857);
  p_output1[15]=t3620*t6985 + t1776*t8739 + 0.11079*(t7474 + t857*t8739) + t4393*t8746 + t27*t5815*t8746 - 1.*t4336*t6284*t8746 + 0.183*(-1.*t4336*t5064*t8746 - 1.*t27*t5218*t8746) - 0.3*(t27*t5064*t8746 - 1.*t4336*t5218*t8746);
  p_output1[16]=t1776*t3981 + t3620*t8866 + t4393*t8883 + t27*t5815*t8883 - 1.*t4336*t6284*t8883 + 0.183*(-1.*t4336*t5064*t8883 - 1.*t27*t5218*t8883) - 0.3*(t27*t5064*t8883 - 1.*t4336*t5218*t8883) + 0.11079*(t3981*t857 + t8915);
  p_output1[17]=-1.*t1776*t2355*t585 + t1954*t3620*t585 + t9050 + t9059 + t9072 + t9090 + t9169 + t9255;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=-0.047*t2930*t6985 + 0.11079*t7490 + 0.047*t7282*t857 + t4393*t9308 + t27*t5815*t9308 - 1.*t4336*t6284*t9308 + 0.183*(-1.*t4336*t5064*t9308 - 1.*t27*t5218*t9308) - 0.3*(t27*t5064*t9308 - 1.*t4336*t5218*t9308);
  p_output1[28]=-0.047*t2930*t8866 + 0.047*t857*t9487 + t4393*t9528 + t27*t5815*t9528 - 1.*t4336*t6284*t9528 + 0.183*(-1.*t4336*t5064*t9528 - 1.*t27*t5218*t9528) - 0.3*(t27*t5064*t9528 - 1.*t4336*t5218*t9528) + 0.11079*t9609;
  p_output1[29]=-0.047*t1954*t2930*t585 + 0.047*t2355*t585*t857 + t9050 + t9059 + t9072 + t9090 + t9169 + t9255;
  p_output1[30]=0.183*t2285*t4336*t585 + 0.183*t27*t7490 + t5815*t7621 + t6284*t9759 - 0.3*(t7656 + t5218*t9759) + 0.183*(t5064*t9759 + t9772);
  p_output1[31]=0.183*t4336*t585*t672 + 0.183*t27*t9609 + t6284*t9791 + t5815*t9865 - 0.3*(t5218*t9791 + t9898) + 0.183*(t5064*t9791 + t9927);
  p_output1[32]=-0.183*t2040*t4336 + 0.183*(t10288 + t10100*t5064) - 0.3*(t10273 + t10100*t5218) + t10245*t5815 + t10100*t6284 + 0.183*t27*t9087;
  p_output1[33]=t10321*t7557 + t10336*t7621 - 0.3*t7665 + 0.183*(-1.*t5064*t7557 + t9772);
  p_output1[34]=t10321*t10371 + t10336*t9865 - 0.3*(-1.*t10371*t5218 + t9898) + 0.183*(-1.*t10371*t5064 + t9927);
  p_output1[35]=t10245*t10336 + t10321*t10405 + 0.183*(t10288 - 1.*t10405*t5064) - 0.3*(t10273 - 1.*t10405*t5218);
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



void Jp_FLfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
