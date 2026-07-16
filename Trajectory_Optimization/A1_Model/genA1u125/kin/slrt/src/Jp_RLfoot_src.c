/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:20:53 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RLfoot_src.h"

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
  double t1145;
  double t1685;
  double t1491;
  double t1544;
  double t1693;
  double t1458;
  double t1557;
  double t1694;
  double t1697;
  double t1746;
  double t1924;
  double t1998;
  double t2003;
  double t1029;
  double t2429;
  double t34;
  double t2496;
  double t2516;
  double t2531;
  double t2573;
  double t2692;
  double t2814;
  double t2995;
  double t3252;
  double t3281;
  double t3349;
  double t3739;
  double t3830;
  double t3893;
  double t158;
  double t310;
  double t813;
  double t920;
  double t1474;
  double t1475;
  double t1777;
  double t1799;
  double t1834;
  double t1921;
  double t4897;
  double t4946;
  double t4952;
  double t5109;
  double t5130;
  double t5154;
  double t2480;
  double t2492;
  double t2915;
  double t3099;
  double t3240;
  double t5300;
  double t5321;
  double t5353;
  double t3461;
  double t3532;
  double t3540;
  double t5411;
  double t5518;
  double t5519;
  double t5526;
  double t5573;
  double t5600;
  double t6073;
  double t6090;
  double t6094;
  double t6120;
  double t6143;
  double t6173;
  double t6198;
  double t6212;
  double t6235;
  double t6611;
  double t6612;
  double t6621;
  double t6630;
  double t6633;
  double t6663;
  double t6727;
  double t6730;
  double t6735;
  double t6971;
  double t7003;
  double t7029;
  double t7049;
  double t7107;
  double t7140;
  double t7226;
  double t7251;
  double t7262;
  double t7364;
  double t7377;
  double t7382;
  double t7389;
  double t7394;
  double t7403;
  double t7572;
  double t7573;
  double t7576;
  double t2219;
  double t7589;
  double t7601;
  double t7848;
  double t7878;
  double t7891;
  double t8127;
  double t8149;
  double t8356;
  double t8358;
  double t8359;
  double t8388;
  double t8389;
  double t7631;
  double t7894;
  double t7905;
  double t7907;
  double t7923;
  double t7951;
  double t7956;
  double t7970;
  double t7986;
  double t7998;
  double t8003;
  double t8015;
  double t8018;
  double t8019;
  double t8020;
  double t8047;
  double t8638;
  double t8696;
  double t8712;
  double t5787;
  double t8432;
  double t8434;
  double t8889;
  double t8890;
  double t8895;
  double t8908;
  double t8909;
  double t9118;
  double t9152;
  double t9156;
  double t9186;
  double t9195;
  double t9203;
  double t5763;
  double t5789;
  double t8839;
  double t9376;
  double t9386;
  double t9391;
  double t9411;
  double t9435;
  double t9503;
  double t9523;
  double t9535;
  double t8959;
  double t8988;
  double t9612;
  double t9640;
  double t9645;
  double t9252;
  double t9319;
  t1145 = Sin(var1[3]);
  t1685 = Cos(var1[3]);
  t1491 = Cos(var1[5]);
  t1544 = Sin(var1[4]);
  t1693 = Sin(var1[5]);
  t1458 = Sin(var1[15]);
  t1557 = -1.*t1491*t1145*t1544;
  t1694 = t1685*t1693;
  t1697 = t1557 + t1694;
  t1746 = Cos(var1[15]);
  t1924 = -1.*t1685*t1491;
  t1998 = -1.*t1145*t1544*t1693;
  t2003 = t1924 + t1998;
  t1029 = Cos(var1[4]);
  t2429 = Sin(var1[16]);
  t34 = Cos(var1[16]);
  t2496 = t1746*t1697;
  t2516 = -1.*t1458*t2003;
  t2531 = t2496 + t2516;
  t2573 = Cos(var1[17]);
  t2692 = -1.*t2573;
  t2814 = 1. + t2692;
  t2995 = Sin(var1[17]);
  t3252 = -1.*t1029*t2429*t1145;
  t3281 = t34*t2531;
  t3349 = t3252 + t3281;
  t3739 = -1.*t34*t1029*t1145;
  t3830 = -1.*t2429*t2531;
  t3893 = t3739 + t3830;
  t158 = -1.*t34;
  t310 = 1. + t158;
  t813 = -0.183*t310;
  t920 = 0. + t813;
  t1474 = -0.047*t1458;
  t1475 = 0. + t1474;
  t1777 = -1.*t1746;
  t1799 = 1. + t1777;
  t1834 = 0.047*t1799;
  t1921 = 0. + t1834;
  t4897 = t1685*t1491*t1544;
  t4946 = t1145*t1693;
  t4952 = t4897 + t4946;
  t5109 = -1.*t1491*t1145;
  t5130 = t1685*t1544*t1693;
  t5154 = t5109 + t5130;
  t2480 = -0.183*t2429;
  t2492 = 0. + t2480;
  t2915 = -0.25*t2814;
  t3099 = -0.183*t2995;
  t3240 = 0. + t2915 + t3099;
  t5300 = t1746*t4952;
  t5321 = -1.*t1458*t5154;
  t5353 = t5300 + t5321;
  t3461 = -0.183*t2814;
  t3532 = 0.25*t2995;
  t3540 = 0. + t3461 + t3532;
  t5411 = t1685*t1029*t2429;
  t5518 = t34*t5353;
  t5519 = t5411 + t5518;
  t5526 = t34*t1685*t1029;
  t5573 = -1.*t2429*t5353;
  t5600 = t5526 + t5573;
  t6073 = t1746*t1685*t1029*t1491;
  t6090 = -1.*t1685*t1029*t1458*t1693;
  t6094 = t6073 + t6090;
  t6120 = -1.*t1685*t2429*t1544;
  t6143 = t34*t6094;
  t6173 = t6120 + t6143;
  t6198 = -1.*t34*t1685*t1544;
  t6212 = -1.*t2429*t6094;
  t6235 = t6198 + t6212;
  t6611 = t1746*t1029*t1491*t1145;
  t6612 = -1.*t1029*t1458*t1145*t1693;
  t6621 = t6611 + t6612;
  t6630 = -1.*t2429*t1145*t1544;
  t6633 = t34*t6621;
  t6663 = t6630 + t6633;
  t6727 = -1.*t34*t1145*t1544;
  t6730 = -1.*t2429*t6621;
  t6735 = t6727 + t6730;
  t6971 = -1.*t1746*t1491*t1544;
  t7003 = t1458*t1544*t1693;
  t7029 = t6971 + t7003;
  t7049 = -1.*t1029*t2429;
  t7107 = t34*t7029;
  t7140 = t7049 + t7107;
  t7226 = -1.*t34*t1029;
  t7251 = -1.*t2429*t7029;
  t7262 = t7226 + t7251;
  t7364 = t1491*t1145;
  t7377 = -1.*t1685*t1544*t1693;
  t7382 = t7364 + t7377;
  t7389 = -1.*t1458*t4952;
  t7394 = t1746*t7382;
  t7403 = t7389 + t7394;
  t7572 = t1491*t1145*t1544;
  t7573 = -1.*t1685*t1693;
  t7576 = t7572 + t7573;
  t2219 = t1746*t2003;
  t7589 = -1.*t1458*t7576;
  t7601 = t7589 + t2219;
  t7848 = -1.*t1029*t1491*t1458;
  t7878 = -1.*t1746*t1029*t1693;
  t7891 = t7848 + t7878;
  t8127 = -1.*t1746*t5154;
  t8149 = t7389 + t8127;
  t8356 = t1685*t1491;
  t8358 = t1145*t1544*t1693;
  t8359 = t8356 + t8358;
  t8388 = -1.*t1746*t8359;
  t8389 = t7589 + t8388;
  t7631 = t1746*t7576;
  t7894 = t2492*t7891;
  t7905 = t34*t3240*t7891;
  t7907 = -1.*t2429*t3540*t7891;
  t7923 = t1746*t1029*t1491;
  t7951 = -1.*t1029*t1458*t1693;
  t7956 = t7923 + t7951;
  t7970 = 0.15331*t7956;
  t7986 = -1.*t2573*t2429*t7891;
  t7998 = -1.*t34*t2995*t7891;
  t8003 = t7986 + t7998;
  t8015 = -0.183*t8003;
  t8018 = t34*t2573*t7891;
  t8019 = -1.*t2429*t2995*t7891;
  t8020 = t8018 + t8019;
  t8047 = -0.5*t8020;
  t8638 = -1.*t1685*t1029*t2429;
  t8696 = -1.*t34*t5353;
  t8712 = t8638 + t8696;
  t5787 = t2573*t5600;
  t8432 = -1.*t1458*t8359;
  t8434 = t7631 + t8432;
  t8889 = -1.*t34*t8434;
  t8890 = t3252 + t8889;
  t8895 = t34*t1029*t1145;
  t8908 = -1.*t2429*t8434;
  t8909 = t8895 + t8908;
  t9118 = t2429*t1544;
  t9152 = -1.*t34*t7956;
  t9156 = t9118 + t9152;
  t9186 = -1.*t34*t1544;
  t9195 = -1.*t2429*t7956;
  t9203 = t9186 + t9195;
  t5763 = -1.*t2995*t5519;
  t5789 = t5763 + t5787;
  t8839 = -1.*t2995*t5600;
  t9376 = -0.183*t2573;
  t9386 = -0.25*t2995;
  t9391 = t9376 + t9386;
  t9411 = 0.25*t2573;
  t9435 = t9411 + t3099;
  t9503 = t1029*t2429*t1145;
  t9523 = t34*t8434;
  t9535 = t9503 + t9523;
  t8959 = t2573*t8909;
  t8988 = -1.*t2995*t8909;
  t9612 = -1.*t2429*t1544;
  t9640 = t34*t7956;
  t9645 = t9612 + t9640;
  t9252 = t2573*t9203;
  t9319 = -1.*t2995*t9203;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1475*t1697 + t1921*t2003 + 0.15331*(t1458*t1697 + t2219) + t2492*t2531 + t3240*t3349 + t3540*t3893 - 0.183*(-1.*t2995*t3349 + t2573*t3893) - 0.5*(t2573*t3349 + t2995*t3893) - 1.*t1029*t1145*t920;
  p_output1[10]=t1475*t4952 + t1921*t5154 + 0.15331*(t1458*t4952 + t1746*t5154) + t2492*t5353 + t3240*t5519 + t3540*t5600 - 0.5*(t2573*t5519 + t2995*t5600) - 0.183*t5789 + t1029*t1685*t920;
  p_output1[11]=0;
  p_output1[12]=t1029*t1475*t1491*t1685 + 0.15331*(t1029*t1458*t1491*t1685 + t1029*t1685*t1693*t1746) + t1029*t1685*t1693*t1921 + t2492*t6094 + t3240*t6173 + t3540*t6235 - 0.183*(-1.*t2995*t6173 + t2573*t6235) - 0.5*(t2573*t6173 + t2995*t6235) - 1.*t1544*t1685*t920;
  p_output1[13]=t1029*t1145*t1475*t1491 + 0.15331*(t1029*t1145*t1458*t1491 + t1029*t1145*t1693*t1746) + t1029*t1145*t1693*t1921 + t2492*t6621 + t3240*t6663 + t3540*t6735 - 0.183*(-1.*t2995*t6663 + t2573*t6735) - 0.5*(t2573*t6663 + t2995*t6735) - 1.*t1145*t1544*t920;
  p_output1[14]=-1.*t1475*t1491*t1544 + 0.15331*(-1.*t1458*t1491*t1544 - 1.*t1544*t1693*t1746) - 1.*t1544*t1693*t1921 + t2492*t7029 + t3240*t7140 + t3540*t7262 - 0.183*(-1.*t2995*t7140 + t2573*t7262) - 0.5*(t2573*t7140 + t2995*t7262) - 1.*t1029*t920;
  p_output1[15]=t1921*t4952 + t1475*t7382 + 0.15331*(t5300 + t1458*t7382) + t2492*t7403 + t3240*t34*t7403 - 1.*t2429*t3540*t7403 - 0.5*(-1.*t2429*t2995*t7403 + t2573*t34*t7403) - 0.183*(-1.*t2429*t2573*t7403 - 1.*t2995*t34*t7403);
  p_output1[16]=t1475*t2003 + t1921*t7576 + t2492*t7601 + t3240*t34*t7601 - 1.*t2429*t3540*t7601 - 0.5*(-1.*t2429*t2995*t7601 + t2573*t34*t7601) - 0.183*(-1.*t2429*t2573*t7601 - 1.*t2995*t34*t7601) + 0.15331*(t1458*t2003 + t7631);
  p_output1[17]=-1.*t1029*t1475*t1693 + t1029*t1491*t1921 + t7894 + t7905 + t7907 + t7970 + t8015 + t8047;
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
  p_output1[45]=-0.047*t1746*t4952 + 0.047*t1458*t5154 + 0.15331*t5353 + t2492*t8149 + t3240*t34*t8149 - 1.*t2429*t3540*t8149 - 0.5*(-1.*t2429*t2995*t8149 + t2573*t34*t8149) - 0.183*(-1.*t2429*t2573*t8149 - 1.*t2995*t34*t8149);
  p_output1[46]=-0.047*t1746*t7576 + 0.047*t1458*t8359 + t2492*t8389 + t3240*t34*t8389 - 1.*t2429*t3540*t8389 - 0.5*(-1.*t2429*t2995*t8389 + t2573*t34*t8389) - 0.183*(-1.*t2429*t2573*t8389 - 1.*t2995*t34*t8389) + 0.15331*t8434;
  p_output1[47]=0.047*t1029*t1458*t1693 - 0.047*t1029*t1491*t1746 + t7894 + t7905 + t7907 + t7970 + t8015 + t8047;
  p_output1[48]=-0.183*t1029*t1685*t2429 - 0.183*t34*t5353 + t3240*t5600 + t3540*t8712 - 0.5*(t5787 + t2995*t8712) - 0.183*(t2573*t8712 + t8839);
  p_output1[49]=-0.183*t1029*t1145*t2429 - 0.183*t34*t8434 + t3540*t8890 + t3240*t8909 - 0.5*(t2995*t8890 + t8959) - 0.183*(t2573*t8890 + t8988);
  p_output1[50]=0.183*t1544*t2429 - 0.183*t34*t7956 + t3540*t9156 + t3240*t9203 - 0.5*(t2995*t9156 + t9252) - 0.183*(t2573*t9156 + t9319);
  p_output1[51]=-0.5*t5789 - 0.183*(-1.*t2573*t5519 + t8839) + t5519*t9391 + t5600*t9435;
  p_output1[52]=t8909*t9435 + t9391*t9535 - 0.183*(t8988 - 1.*t2573*t9535) - 0.5*(t8959 - 1.*t2995*t9535);
  p_output1[53]=t9203*t9435 + t9391*t9645 - 0.183*(t9319 - 1.*t2573*t9645) - 0.5*(t9252 - 1.*t2995*t9645);
}



void Jp_RLfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
