/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:20:48 GMT-05:00
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
  double t182;
  double t864;
  double t502;
  double t624;
  double t970;
  double t337;
  double t720;
  double t1207;
  double t1338;
  double t1421;
  double t1698;
  double t1713;
  double t1838;
  double t176;
  double t2070;
  double t69;
  double t2273;
  double t2307;
  double t2439;
  double t2678;
  double t2711;
  double t2737;
  double t2801;
  double t2850;
  double t2901;
  double t2909;
  double t3127;
  double t3196;
  double t3237;
  double t82;
  double t94;
  double t110;
  double t156;
  double t344;
  double t433;
  double t1468;
  double t1490;
  double t1632;
  double t1674;
  double t4091;
  double t4187;
  double t4350;
  double t4414;
  double t4484;
  double t4486;
  double t2215;
  double t2257;
  double t2769;
  double t2804;
  double t2838;
  double t4775;
  double t4812;
  double t4880;
  double t2935;
  double t2974;
  double t3053;
  double t4986;
  double t4996;
  double t5167;
  double t5318;
  double t5369;
  double t5381;
  double t6347;
  double t6368;
  double t6379;
  double t6407;
  double t6408;
  double t6447;
  double t6512;
  double t6514;
  double t6516;
  double t6846;
  double t6885;
  double t6901;
  double t6963;
  double t6988;
  double t6993;
  double t7053;
  double t7058;
  double t7104;
  double t7344;
  double t7345;
  double t7356;
  double t7372;
  double t7382;
  double t7391;
  double t7422;
  double t7423;
  double t7427;
  double t7665;
  double t7672;
  double t7702;
  double t7746;
  double t7775;
  double t7783;
  double t8078;
  double t8093;
  double t8097;
  double t1885;
  double t8110;
  double t8165;
  double t8435;
  double t8439;
  double t8536;
  double t8834;
  double t8838;
  double t8995;
  double t9015;
  double t9026;
  double t9041;
  double t9042;
  double t8224;
  double t8541;
  double t8573;
  double t8590;
  double t8650;
  double t8663;
  double t8740;
  double t8742;
  double t8770;
  double t8772;
  double t8782;
  double t8801;
  double t8803;
  double t8808;
  double t8816;
  double t8820;
  double t9350;
  double t9351;
  double t9357;
  double t5793;
  double t9079;
  double t9093;
  double t9438;
  double t9439;
  double t9442;
  double t9443;
  double t9445;
  double t9499;
  double t9501;
  double t9502;
  double t9504;
  double t9509;
  double t9510;
  double t5703;
  double t5794;
  double t9428;
  double t9565;
  double t9566;
  double t9568;
  double t9575;
  double t9584;
  double t9608;
  double t9616;
  double t9619;
  double t9455;
  double t9486;
  double t9654;
  double t9659;
  double t9660;
  double t9539;
  double t9554;
  t182 = Sin(var1[3]);
  t864 = Cos(var1[3]);
  t502 = Cos(var1[5]);
  t624 = Sin(var1[4]);
  t970 = Sin(var1[5]);
  t337 = Sin(var1[9]);
  t720 = -1.*t502*t182*t624;
  t1207 = t864*t970;
  t1338 = t720 + t1207;
  t1421 = Cos(var1[9]);
  t1698 = -1.*t864*t502;
  t1713 = -1.*t182*t624*t970;
  t1838 = t1698 + t1713;
  t176 = Cos(var1[4]);
  t2070 = Sin(var1[10]);
  t69 = Cos(var1[10]);
  t2273 = t1421*t1338;
  t2307 = -1.*t337*t1838;
  t2439 = t2273 + t2307;
  t2678 = Cos(var1[11]);
  t2711 = -1.*t2678;
  t2737 = 1. + t2711;
  t2801 = Sin(var1[11]);
  t2850 = -1.*t176*t2070*t182;
  t2901 = t69*t2439;
  t2909 = t2850 + t2901;
  t3127 = -1.*t69*t176*t182;
  t3196 = -1.*t2070*t2439;
  t3237 = t3127 + t3196;
  t82 = -1.*t69;
  t94 = 1. + t82;
  t110 = 0.183*t94;
  t156 = 0. + t110;
  t344 = -0.047*t337;
  t433 = 0. + t344;
  t1468 = -1.*t1421;
  t1490 = 1. + t1468;
  t1632 = 0.047*t1490;
  t1674 = 0. + t1632;
  t4091 = t864*t502*t624;
  t4187 = t182*t970;
  t4350 = t4091 + t4187;
  t4414 = -1.*t502*t182;
  t4484 = t864*t624*t970;
  t4486 = t4414 + t4484;
  t2215 = 0.183*t2070;
  t2257 = 0. + t2215;
  t2769 = -0.25*t2737;
  t2804 = 0.183*t2801;
  t2838 = 0. + t2769 + t2804;
  t4775 = t1421*t4350;
  t4812 = -1.*t337*t4486;
  t4880 = t4775 + t4812;
  t2935 = 0.183*t2737;
  t2974 = 0.25*t2801;
  t3053 = 0. + t2935 + t2974;
  t4986 = t864*t176*t2070;
  t4996 = t69*t4880;
  t5167 = t4986 + t4996;
  t5318 = t69*t864*t176;
  t5369 = -1.*t2070*t4880;
  t5381 = t5318 + t5369;
  t6347 = t1421*t864*t176*t502;
  t6368 = -1.*t864*t176*t337*t970;
  t6379 = t6347 + t6368;
  t6407 = -1.*t864*t2070*t624;
  t6408 = t69*t6379;
  t6447 = t6407 + t6408;
  t6512 = -1.*t69*t864*t624;
  t6514 = -1.*t2070*t6379;
  t6516 = t6512 + t6514;
  t6846 = t1421*t176*t502*t182;
  t6885 = -1.*t176*t337*t182*t970;
  t6901 = t6846 + t6885;
  t6963 = -1.*t2070*t182*t624;
  t6988 = t69*t6901;
  t6993 = t6963 + t6988;
  t7053 = -1.*t69*t182*t624;
  t7058 = -1.*t2070*t6901;
  t7104 = t7053 + t7058;
  t7344 = -1.*t1421*t502*t624;
  t7345 = t337*t624*t970;
  t7356 = t7344 + t7345;
  t7372 = -1.*t176*t2070;
  t7382 = t69*t7356;
  t7391 = t7372 + t7382;
  t7422 = -1.*t69*t176;
  t7423 = -1.*t2070*t7356;
  t7427 = t7422 + t7423;
  t7665 = t502*t182;
  t7672 = -1.*t864*t624*t970;
  t7702 = t7665 + t7672;
  t7746 = -1.*t337*t4350;
  t7775 = t1421*t7702;
  t7783 = t7746 + t7775;
  t8078 = t502*t182*t624;
  t8093 = -1.*t864*t970;
  t8097 = t8078 + t8093;
  t1885 = t1421*t1838;
  t8110 = -1.*t337*t8097;
  t8165 = t8110 + t1885;
  t8435 = -1.*t176*t502*t337;
  t8439 = -1.*t1421*t176*t970;
  t8536 = t8435 + t8439;
  t8834 = -1.*t1421*t4486;
  t8838 = t7746 + t8834;
  t8995 = t864*t502;
  t9015 = t182*t624*t970;
  t9026 = t8995 + t9015;
  t9041 = -1.*t1421*t9026;
  t9042 = t8110 + t9041;
  t8224 = t1421*t8097;
  t8541 = t2257*t8536;
  t8573 = t69*t2838*t8536;
  t8590 = -1.*t2070*t3053*t8536;
  t8650 = t1421*t176*t502;
  t8663 = -1.*t176*t337*t970;
  t8740 = t8650 + t8663;
  t8742 = 0.15331*t8740;
  t8770 = -1.*t2678*t2070*t8536;
  t8772 = -1.*t69*t2801*t8536;
  t8782 = t8770 + t8772;
  t8801 = 0.183*t8782;
  t8803 = t69*t2678*t8536;
  t8808 = -1.*t2070*t2801*t8536;
  t8816 = t8803 + t8808;
  t8820 = -0.5*t8816;
  t9350 = -1.*t864*t176*t2070;
  t9351 = -1.*t69*t4880;
  t9357 = t9350 + t9351;
  t5793 = t2678*t5381;
  t9079 = -1.*t337*t9026;
  t9093 = t8224 + t9079;
  t9438 = -1.*t69*t9093;
  t9439 = t2850 + t9438;
  t9442 = t69*t176*t182;
  t9443 = -1.*t2070*t9093;
  t9445 = t9442 + t9443;
  t9499 = t2070*t624;
  t9501 = -1.*t69*t8740;
  t9502 = t9499 + t9501;
  t9504 = -1.*t69*t624;
  t9509 = -1.*t2070*t8740;
  t9510 = t9504 + t9509;
  t5703 = -1.*t2801*t5167;
  t5794 = t5703 + t5793;
  t9428 = -1.*t2801*t5381;
  t9565 = 0.183*t2678;
  t9566 = -0.25*t2801;
  t9568 = t9565 + t9566;
  t9575 = 0.25*t2678;
  t9584 = t9575 + t2804;
  t9608 = t176*t2070*t182;
  t9616 = t69*t9093;
  t9619 = t9608 + t9616;
  t9455 = t2678*t9445;
  t9486 = -1.*t2801*t9445;
  t9654 = -1.*t2070*t624;
  t9659 = t69*t8740;
  t9660 = t9654 + t9659;
  t9539 = t2678*t9510;
  t9554 = -1.*t2801*t9510;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=-1.*t156*t176*t182 + t1674*t1838 + t2257*t2439 + t2838*t2909 + t3053*t3237 + 0.183*(-1.*t2801*t2909 + t2678*t3237) - 0.5*(t2678*t2909 + t2801*t3237) + 0.15331*(t1885 + t1338*t337) + t1338*t433;
  p_output1[10]=t433*t4350 + t1674*t4486 + 0.15331*(t337*t4350 + t1421*t4486) + t2257*t4880 + t2838*t5167 + t3053*t5381 - 0.5*(t2678*t5167 + t2801*t5381) + 0.183*t5794 + t156*t176*t864;
  p_output1[11]=0;
  p_output1[12]=t2257*t6379 + t2838*t6447 + t3053*t6516 + 0.183*(-1.*t2801*t6447 + t2678*t6516) - 0.5*(t2678*t6447 + t2801*t6516) + t176*t433*t502*t864 - 1.*t156*t624*t864 + t1674*t176*t864*t970 + 0.15331*(t176*t337*t502*t864 + t1421*t176*t864*t970);
  p_output1[13]=t176*t182*t433*t502 - 1.*t156*t182*t624 + t2257*t6901 + t2838*t6993 + t3053*t7104 + 0.183*(-1.*t2801*t6993 + t2678*t7104) - 0.5*(t2678*t6993 + t2801*t7104) + t1674*t176*t182*t970 + 0.15331*(t176*t182*t337*t502 + t1421*t176*t182*t970);
  p_output1[14]=-1.*t156*t176 - 1.*t433*t502*t624 + t2257*t7356 + t2838*t7391 + t3053*t7427 + 0.183*(-1.*t2801*t7391 + t2678*t7427) - 0.5*(t2678*t7391 + t2801*t7427) - 1.*t1674*t624*t970 + 0.15331*(-1.*t337*t502*t624 - 1.*t1421*t624*t970);
  p_output1[15]=t1674*t4350 + t433*t7702 + 0.15331*(t4775 + t337*t7702) + t2257*t7783 - 1.*t2070*t3053*t7783 + t2838*t69*t7783 - 0.5*(-1.*t2070*t2801*t7783 + t2678*t69*t7783) + 0.183*(-1.*t2070*t2678*t7783 - 1.*t2801*t69*t7783);
  p_output1[16]=t1838*t433 + t1674*t8097 + t2257*t8165 - 1.*t2070*t3053*t8165 + t2838*t69*t8165 - 0.5*(-1.*t2070*t2801*t8165 + t2678*t69*t8165) + 0.183*(-1.*t2070*t2678*t8165 - 1.*t2801*t69*t8165) + 0.15331*(t1838*t337 + t8224);
  p_output1[17]=t1674*t176*t502 + t8541 + t8573 + t8590 + t8742 + t8801 + t8820 - 1.*t176*t433*t970;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=-0.047*t1421*t4350 + 0.047*t337*t4486 + 0.15331*t4880 + t2257*t8838 - 1.*t2070*t3053*t8838 + t2838*t69*t8838 - 0.5*(-1.*t2070*t2801*t8838 + t2678*t69*t8838) + 0.183*(-1.*t2070*t2678*t8838 - 1.*t2801*t69*t8838);
  p_output1[28]=-0.047*t1421*t8097 + 0.047*t337*t9026 + t2257*t9042 - 1.*t2070*t3053*t9042 + t2838*t69*t9042 - 0.5*(-1.*t2070*t2801*t9042 + t2678*t69*t9042) + 0.183*(-1.*t2070*t2678*t9042 - 1.*t2801*t69*t9042) + 0.15331*t9093;
  p_output1[29]=-0.047*t1421*t176*t502 + t8541 + t8573 + t8590 + t8742 + t8801 + t8820 + 0.047*t176*t337*t970;
  p_output1[30]=t2838*t5381 + 0.183*t4880*t69 + 0.183*t176*t2070*t864 + t3053*t9357 - 0.5*(t5793 + t2801*t9357) + 0.183*(t2678*t9357 + t9428);
  p_output1[31]=0.183*t176*t182*t2070 + 0.183*t69*t9093 + t3053*t9439 + t2838*t9445 - 0.5*(t2801*t9439 + t9455) + 0.183*(t2678*t9439 + t9486);
  p_output1[32]=-0.183*t2070*t624 + 0.183*t69*t8740 + t3053*t9502 + t2838*t9510 - 0.5*(t2801*t9502 + t9539) + 0.183*(t2678*t9502 + t9554);
  p_output1[33]=-0.5*t5794 + 0.183*(-1.*t2678*t5167 + t9428) + t5167*t9568 + t5381*t9584;
  p_output1[34]=t9445*t9584 + t9568*t9619 + 0.183*(t9486 - 1.*t2678*t9619) - 0.5*(t9455 - 1.*t2801*t9619);
  p_output1[35]=t9510*t9584 + t9568*t9660 + 0.183*(t9554 - 1.*t2678*t9660) - 0.5*(t9539 - 1.*t2801*t9660);
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
