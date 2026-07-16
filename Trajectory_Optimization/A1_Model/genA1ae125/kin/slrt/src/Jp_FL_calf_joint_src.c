/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:03:17 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_FL_calf_joint_src.h"

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
  double t1326;
  double t1786;
  double t1629;
  double t1634;
  double t1795;
  double t1409;
  double t1736;
  double t1819;
  double t1828;
  double t2097;
  double t2154;
  double t2157;
  double t2173;
  double t1095;
  double t2243;
  double t124;
  double t2273;
  double t2293;
  double t2297;
  double t2300;
  double t2306;
  double t2309;
  double t2323;
  double t2339;
  double t2340;
  double t2341;
  double t2369;
  double t2383;
  double t2478;
  double t131;
  double t324;
  double t793;
  double t1092;
  double t1443;
  double t1450;
  double t2107;
  double t2149;
  double t2150;
  double t2153;
  double t2606;
  double t2608;
  double t2619;
  double t2633;
  double t2645;
  double t2648;
  double t2244;
  double t2261;
  double t2322;
  double t2324;
  double t2326;
  double t2845;
  double t2847;
  double t2858;
  double t2347;
  double t2351;
  double t2353;
  double t2910;
  double t2911;
  double t2919;
  double t2937;
  double t2938;
  double t2941;
  double t3179;
  double t3181;
  double t3182;
  double t3234;
  double t3264;
  double t3270;
  double t3286;
  double t3305;
  double t3346;
  double t3616;
  double t3618;
  double t3621;
  double t3636;
  double t3642;
  double t3645;
  double t3648;
  double t3667;
  double t3713;
  double t3764;
  double t3794;
  double t3800;
  double t3827;
  double t3828;
  double t3832;
  double t3851;
  double t3855;
  double t3857;
  double t4565;
  double t4567;
  double t4570;
  double t4580;
  double t4582;
  double t4609;
  double t4952;
  double t4965;
  double t4969;
  double t2187;
  double t4983;
  double t5004;
  double t5325;
  double t5326;
  double t5327;
  double t5756;
  double t5757;
  double t5900;
  double t5902;
  double t5903;
  double t5911;
  double t5913;
  double t5027;
  double t5432;
  double t5443;
  double t5464;
  double t5466;
  double t5470;
  double t5471;
  double t5472;
  double t5493;
  double t5561;
  double t5598;
  double t5600;
  double t5606;
  double t5647;
  double t5691;
  double t5693;
  double t6041;
  double t6048;
  double t6049;
  double t3006;
  double t5926;
  double t5930;
  double t6104;
  double t6106;
  double t6114;
  double t6115;
  double t6117;
  double t6177;
  double t6178;
  double t6179;
  double t6190;
  double t6198;
  double t6210;
  double t3004;
  double t3008;
  double t6085;
  double t6309;
  double t6312;
  double t6313;
  double t6320;
  double t6323;
  double t6335;
  double t6336;
  double t6337;
  double t6124;
  double t6134;
  double t6359;
  double t6364;
  double t6368;
  double t6218;
  double t6238;
  t1326 = Sin(var1[3]);
  t1786 = Cos(var1[3]);
  t1629 = Cos(var1[5]);
  t1634 = Sin(var1[4]);
  t1795 = Sin(var1[5]);
  t1409 = Sin(var1[9]);
  t1736 = -1.*t1629*t1326*t1634;
  t1819 = t1786*t1795;
  t1828 = t1736 + t1819;
  t2097 = Cos(var1[9]);
  t2154 = -1.*t1786*t1629;
  t2157 = -1.*t1326*t1634*t1795;
  t2173 = t2154 + t2157;
  t1095 = Cos(var1[4]);
  t2243 = Sin(var1[10]);
  t124 = Cos(var1[10]);
  t2273 = t2097*t1828;
  t2293 = -1.*t1409*t2173;
  t2297 = t2273 + t2293;
  t2300 = Cos(var1[11]);
  t2306 = -1.*t2300;
  t2309 = 1. + t2306;
  t2323 = Sin(var1[11]);
  t2339 = -1.*t1095*t2243*t1326;
  t2340 = t124*t2297;
  t2341 = t2339 + t2340;
  t2369 = -1.*t124*t1095*t1326;
  t2383 = -1.*t2243*t2297;
  t2478 = t2369 + t2383;
  t131 = -1.*t124;
  t324 = 1. + t131;
  t793 = 0.183*t324;
  t1092 = 0. + t793;
  t1443 = -0.047*t1409;
  t1450 = 0. + t1443;
  t2107 = -1.*t2097;
  t2149 = 1. + t2107;
  t2150 = 0.047*t2149;
  t2153 = 0. + t2150;
  t2606 = t1786*t1629*t1634;
  t2608 = t1326*t1795;
  t2619 = t2606 + t2608;
  t2633 = -1.*t1629*t1326;
  t2645 = t1786*t1634*t1795;
  t2648 = t2633 + t2645;
  t2244 = 0.183*t2243;
  t2261 = 0. + t2244;
  t2322 = -0.25*t2309;
  t2324 = 0.183*t2323;
  t2326 = 0. + t2322 + t2324;
  t2845 = t2097*t2619;
  t2847 = -1.*t1409*t2648;
  t2858 = t2845 + t2847;
  t2347 = 0.183*t2309;
  t2351 = 0.25*t2323;
  t2353 = 0. + t2347 + t2351;
  t2910 = t1786*t1095*t2243;
  t2911 = t124*t2858;
  t2919 = t2910 + t2911;
  t2937 = t124*t1786*t1095;
  t2938 = -1.*t2243*t2858;
  t2941 = t2937 + t2938;
  t3179 = t2097*t1786*t1095*t1629;
  t3181 = -1.*t1786*t1095*t1409*t1795;
  t3182 = t3179 + t3181;
  t3234 = -1.*t1786*t2243*t1634;
  t3264 = t124*t3182;
  t3270 = t3234 + t3264;
  t3286 = -1.*t124*t1786*t1634;
  t3305 = -1.*t2243*t3182;
  t3346 = t3286 + t3305;
  t3616 = t2097*t1095*t1629*t1326;
  t3618 = -1.*t1095*t1409*t1326*t1795;
  t3621 = t3616 + t3618;
  t3636 = -1.*t2243*t1326*t1634;
  t3642 = t124*t3621;
  t3645 = t3636 + t3642;
  t3648 = -1.*t124*t1326*t1634;
  t3667 = -1.*t2243*t3621;
  t3713 = t3648 + t3667;
  t3764 = -1.*t2097*t1629*t1634;
  t3794 = t1409*t1634*t1795;
  t3800 = t3764 + t3794;
  t3827 = -1.*t1095*t2243;
  t3828 = t124*t3800;
  t3832 = t3827 + t3828;
  t3851 = -1.*t124*t1095;
  t3855 = -1.*t2243*t3800;
  t3857 = t3851 + t3855;
  t4565 = t1629*t1326;
  t4567 = -1.*t1786*t1634*t1795;
  t4570 = t4565 + t4567;
  t4580 = -1.*t1409*t2619;
  t4582 = t2097*t4570;
  t4609 = t4580 + t4582;
  t4952 = t1629*t1326*t1634;
  t4965 = -1.*t1786*t1795;
  t4969 = t4952 + t4965;
  t2187 = t2097*t2173;
  t4983 = -1.*t1409*t4969;
  t5004 = t4983 + t2187;
  t5325 = -1.*t1095*t1629*t1409;
  t5326 = -1.*t2097*t1095*t1795;
  t5327 = t5325 + t5326;
  t5756 = -1.*t2097*t2648;
  t5757 = t4580 + t5756;
  t5900 = t1786*t1629;
  t5902 = t1326*t1634*t1795;
  t5903 = t5900 + t5902;
  t5911 = -1.*t2097*t5903;
  t5913 = t4983 + t5911;
  t5027 = t2097*t4969;
  t5432 = t2261*t5327;
  t5443 = t124*t2326*t5327;
  t5464 = -1.*t2243*t2353*t5327;
  t5466 = t2097*t1095*t1629;
  t5470 = -1.*t1095*t1409*t1795;
  t5471 = t5466 + t5470;
  t5472 = 0.13205*t5471;
  t5493 = -1.*t2300*t2243*t5327;
  t5561 = -1.*t124*t2323*t5327;
  t5598 = t5493 + t5561;
  t5600 = 0.183*t5598;
  t5606 = t124*t2300*t5327;
  t5647 = -1.*t2243*t2323*t5327;
  t5691 = t5606 + t5647;
  t5693 = -0.25*t5691;
  t6041 = -1.*t1786*t1095*t2243;
  t6048 = -1.*t124*t2858;
  t6049 = t6041 + t6048;
  t3006 = t2300*t2941;
  t5926 = -1.*t1409*t5903;
  t5930 = t5027 + t5926;
  t6104 = -1.*t124*t5930;
  t6106 = t2339 + t6104;
  t6114 = t124*t1095*t1326;
  t6115 = -1.*t2243*t5930;
  t6117 = t6114 + t6115;
  t6177 = t2243*t1634;
  t6178 = -1.*t124*t5471;
  t6179 = t6177 + t6178;
  t6190 = -1.*t124*t1634;
  t6198 = -1.*t2243*t5471;
  t6210 = t6190 + t6198;
  t3004 = -1.*t2323*t2919;
  t3008 = t3004 + t3006;
  t6085 = -1.*t2323*t2941;
  t6309 = 0.183*t2300;
  t6312 = -0.25*t2323;
  t6313 = t6309 + t6312;
  t6320 = 0.25*t2300;
  t6323 = t6320 + t2324;
  t6335 = t1095*t2243*t1326;
  t6336 = t124*t5930;
  t6337 = t6335 + t6336;
  t6124 = t2300*t6117;
  t6134 = -1.*t2323*t6117;
  t6359 = -1.*t2243*t1634;
  t6364 = t124*t5471;
  t6368 = t6359 + t6364;
  t6218 = t2300*t6210;
  t6238 = -1.*t2323*t6210;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=-1.*t1092*t1095*t1326 + t1450*t1828 + t2153*t2173 + 0.13205*(t1409*t1828 + t2187) + t2261*t2297 + t2326*t2341 + t2353*t2478 + 0.183*(-1.*t2323*t2341 + t2300*t2478) - 0.25*(t2300*t2341 + t2323*t2478);
  p_output1[10]=t1092*t1095*t1786 + t1450*t2619 + t2153*t2648 + 0.13205*(t1409*t2619 + t2097*t2648) + t2261*t2858 + t2326*t2919 + t2353*t2941 - 0.25*(t2300*t2919 + t2323*t2941) + 0.183*t3008;
  p_output1[11]=0;
  p_output1[12]=t1095*t1450*t1629*t1786 - 1.*t1092*t1634*t1786 + 0.13205*(t1095*t1409*t1629*t1786 + t1095*t1786*t1795*t2097) + t1095*t1786*t1795*t2153 + t2261*t3182 + t2326*t3270 + t2353*t3346 + 0.183*(-1.*t2323*t3270 + t2300*t3346) - 0.25*(t2300*t3270 + t2323*t3346);
  p_output1[13]=t1095*t1326*t1450*t1629 - 1.*t1092*t1326*t1634 + 0.13205*(t1095*t1326*t1409*t1629 + t1095*t1326*t1795*t2097) + t1095*t1326*t1795*t2153 + t2261*t3621 + t2326*t3645 + t2353*t3713 + 0.183*(-1.*t2323*t3645 + t2300*t3713) - 0.25*(t2300*t3645 + t2323*t3713);
  p_output1[14]=-1.*t1092*t1095 - 1.*t1450*t1629*t1634 + 0.13205*(-1.*t1409*t1629*t1634 - 1.*t1634*t1795*t2097) - 1.*t1634*t1795*t2153 + t2261*t3800 + t2326*t3832 + t2353*t3857 + 0.183*(-1.*t2323*t3832 + t2300*t3857) - 0.25*(t2300*t3832 + t2323*t3857);
  p_output1[15]=t2153*t2619 + t1450*t4570 + 0.13205*(t2845 + t1409*t4570) + t2261*t4609 + t124*t2326*t4609 - 1.*t2243*t2353*t4609 + 0.183*(-1.*t2243*t2300*t4609 - 1.*t124*t2323*t4609) - 0.25*(t124*t2300*t4609 - 1.*t2243*t2323*t4609);
  p_output1[16]=t1450*t2173 + t2153*t4969 + t2261*t5004 + t124*t2326*t5004 - 1.*t2243*t2353*t5004 + 0.183*(-1.*t2243*t2300*t5004 - 1.*t124*t2323*t5004) - 0.25*(t124*t2300*t5004 - 1.*t2243*t2323*t5004) + 0.13205*(t1409*t2173 + t5027);
  p_output1[17]=-1.*t1095*t1450*t1795 + t1095*t1629*t2153 + t5432 + t5443 + t5464 + t5472 + t5600 + t5693;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=-0.047*t2097*t2619 + 0.047*t1409*t2648 + 0.13205*t2858 + t2261*t5757 + t124*t2326*t5757 - 1.*t2243*t2353*t5757 + 0.183*(-1.*t2243*t2300*t5757 - 1.*t124*t2323*t5757) - 0.25*(t124*t2300*t5757 - 1.*t2243*t2323*t5757);
  p_output1[28]=-0.047*t2097*t4969 + 0.047*t1409*t5903 + t2261*t5913 + t124*t2326*t5913 - 1.*t2243*t2353*t5913 + 0.183*(-1.*t2243*t2300*t5913 - 1.*t124*t2323*t5913) - 0.25*(t124*t2300*t5913 - 1.*t2243*t2323*t5913) + 0.13205*t5930;
  p_output1[29]=0.047*t1095*t1409*t1795 - 0.047*t1095*t1629*t2097 + t5432 + t5443 + t5464 + t5472 + t5600 + t5693;
  p_output1[30]=0.183*t1095*t1786*t2243 + 0.183*t124*t2858 + t2326*t2941 + t2353*t6049 - 0.25*(t3006 + t2323*t6049) + 0.183*(t2300*t6049 + t6085);
  p_output1[31]=0.183*t1095*t1326*t2243 + 0.183*t124*t5930 + t2353*t6106 + t2326*t6117 - 0.25*(t2323*t6106 + t6124) + 0.183*(t2300*t6106 + t6134);
  p_output1[32]=-0.183*t1634*t2243 + 0.183*t124*t5471 + t2353*t6179 + t2326*t6210 - 0.25*(t2323*t6179 + t6218) + 0.183*(t2300*t6179 + t6238);
  p_output1[33]=-0.25*t3008 + 0.183*(-1.*t2300*t2919 + t6085) + t2919*t6313 + t2941*t6323;
  p_output1[34]=t6117*t6323 + t6313*t6337 + 0.183*(t6134 - 1.*t2300*t6337) - 0.25*(t6124 - 1.*t2323*t6337);
  p_output1[35]=t6210*t6323 + t6313*t6368 + 0.183*(t6238 - 1.*t2300*t6368) - 0.25*(t6218 - 1.*t2323*t6368);
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



void Jp_FL_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
