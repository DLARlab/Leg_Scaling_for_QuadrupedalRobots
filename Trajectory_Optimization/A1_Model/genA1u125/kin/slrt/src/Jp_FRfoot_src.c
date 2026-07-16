/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:20:46 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_FRfoot_src.h"

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
  double t751;
  double t1314;
  double t1464;
  double t1211;
  double t1479;
  double t930;
  double t1456;
  double t1499;
  double t1512;
  double t1579;
  double t1659;
  double t1668;
  double t1688;
  double t376;
  double t1976;
  double t2119;
  double t2134;
  double t370;
  double t2154;
  double t2438;
  double t2469;
  double t2578;
  double t2758;
  double t2927;
  double t2987;
  double t2999;
  double t2364;
  double t2370;
  double t2416;
  double t459;
  double t495;
  double t507;
  double t750;
  double t1043;
  double t1066;
  double t1120;
  double t1179;
  double t1738;
  double t1745;
  double t3485;
  double t3502;
  double t3506;
  double t3595;
  double t3663;
  double t3669;
  double t2165;
  double t2193;
  double t3810;
  double t4034;
  double t4159;
  double t2677;
  double t2881;
  double t2883;
  double t3007;
  double t3034;
  double t3111;
  double t4555;
  double t4561;
  double t4562;
  double t4236;
  double t4403;
  double t4509;
  double t5795;
  double t5806;
  double t6052;
  double t6776;
  double t6786;
  double t6794;
  double t6272;
  double t6371;
  double t6667;
  double t7908;
  double t7912;
  double t7913;
  double t7966;
  double t8001;
  double t8004;
  double t7916;
  double t7918;
  double t7942;
  double t8337;
  double t8354;
  double t8409;
  double t8504;
  double t8523;
  double t8537;
  double t8435;
  double t8469;
  double t8484;
  double t8834;
  double t8837;
  double t8839;
  double t8910;
  double t8935;
  double t8946;
  double t9115;
  double t9116;
  double t9124;
  double t1875;
  double t9192;
  double t9217;
  double t9294;
  double t9308;
  double t9331;
  double t9403;
  double t9407;
  double t9130;
  double t9455;
  double t9456;
  double t9457;
  double t9479;
  double t9481;
  double t9265;
  double t9266;
  double t9272;
  double t9292;
  double t9332;
  double t9337;
  double t9342;
  double t9345;
  double t9348;
  double t9350;
  double t9353;
  double t9357;
  double t9363;
  double t9367;
  double t9373;
  double t4603;
  double t9543;
  double t9544;
  double t9545;
  double t9463;
  double t9470;
  double t9569;
  double t9571;
  double t9573;
  double t9576;
  double t9578;
  double t9609;
  double t9610;
  double t9613;
  double t9618;
  double t9619;
  double t9621;
  double t4620;
  double t4660;
  double t9561;
  double t9644;
  double t9645;
  double t9647;
  double t9653;
  double t9654;
  double t9585;
  double t9668;
  double t9669;
  double t9671;
  double t9602;
  double t9626;
  double t9695;
  double t9696;
  double t9697;
  double t9636;
  t751 = Sin(var1[3]);
  t1314 = Cos(var1[5]);
  t1464 = Sin(var1[4]);
  t1211 = Cos(var1[3]);
  t1479 = Sin(var1[5]);
  t930 = Cos(var1[6]);
  t1456 = -1.*t1211*t1314;
  t1499 = -1.*t751*t1464*t1479;
  t1512 = t1456 + t1499;
  t1579 = -1.*t1314*t751*t1464;
  t1659 = t1211*t1479;
  t1668 = t1579 + t1659;
  t1688 = Sin(var1[6]);
  t376 = Cos(var1[7]);
  t1976 = t930*t1668;
  t2119 = -1.*t1512*t1688;
  t2134 = t1976 + t2119;
  t370 = Cos(var1[4]);
  t2154 = Sin(var1[7]);
  t2438 = Cos(var1[8]);
  t2469 = -1.*t2438;
  t2578 = 1. + t2469;
  t2758 = Sin(var1[8]);
  t2927 = -1.*t370*t376*t751;
  t2987 = -1.*t2134*t2154;
  t2999 = t2927 + t2987;
  t2364 = t376*t2134;
  t2370 = -1.*t370*t751*t2154;
  t2416 = t2364 + t2370;
  t459 = -1.*t376;
  t495 = 1. + t459;
  t507 = 0.183*t495;
  t750 = 0. + t507;
  t1043 = -1.*t930;
  t1066 = 1. + t1043;
  t1120 = -0.047*t1066;
  t1179 = 0. + t1120;
  t1738 = 0.047*t1688;
  t1745 = 0. + t1738;
  t3485 = -1.*t1314*t751;
  t3502 = t1211*t1464*t1479;
  t3506 = t3485 + t3502;
  t3595 = t1211*t1314*t1464;
  t3663 = t751*t1479;
  t3669 = t3595 + t3663;
  t2165 = 0.183*t2154;
  t2193 = 0. + t2165;
  t3810 = t930*t3669;
  t4034 = -1.*t3506*t1688;
  t4159 = t3810 + t4034;
  t2677 = -0.25*t2578;
  t2881 = 0.183*t2758;
  t2883 = 0. + t2677 + t2881;
  t3007 = 0.183*t2578;
  t3034 = 0.25*t2758;
  t3111 = 0. + t3007 + t3034;
  t4555 = t1211*t370*t376;
  t4561 = -1.*t4159*t2154;
  t4562 = t4555 + t4561;
  t4236 = t376*t4159;
  t4403 = t1211*t370*t2154;
  t4509 = t4236 + t4403;
  t5795 = t1211*t370*t1314*t930;
  t5806 = -1.*t1211*t370*t1479*t1688;
  t6052 = t5795 + t5806;
  t6776 = -1.*t1211*t376*t1464;
  t6786 = -1.*t6052*t2154;
  t6794 = t6776 + t6786;
  t6272 = t376*t6052;
  t6371 = -1.*t1211*t1464*t2154;
  t6667 = t6272 + t6371;
  t7908 = t370*t1314*t930*t751;
  t7912 = -1.*t370*t751*t1479*t1688;
  t7913 = t7908 + t7912;
  t7966 = -1.*t376*t751*t1464;
  t8001 = -1.*t7913*t2154;
  t8004 = t7966 + t8001;
  t7916 = t376*t7913;
  t7918 = -1.*t751*t1464*t2154;
  t7942 = t7916 + t7918;
  t8337 = -1.*t1314*t930*t1464;
  t8354 = t1464*t1479*t1688;
  t8409 = t8337 + t8354;
  t8504 = -1.*t370*t376;
  t8523 = -1.*t8409*t2154;
  t8537 = t8504 + t8523;
  t8435 = t376*t8409;
  t8469 = -1.*t370*t2154;
  t8484 = t8435 + t8469;
  t8834 = t1314*t751;
  t8837 = -1.*t1211*t1464*t1479;
  t8839 = t8834 + t8837;
  t8910 = t930*t8839;
  t8935 = -1.*t3669*t1688;
  t8946 = t8910 + t8935;
  t9115 = t1314*t751*t1464;
  t9116 = -1.*t1211*t1479;
  t9124 = t9115 + t9116;
  t1875 = t930*t1512;
  t9192 = -1.*t9124*t1688;
  t9217 = t1875 + t9192;
  t9294 = -1.*t370*t930*t1479;
  t9308 = -1.*t370*t1314*t1688;
  t9331 = t9294 + t9308;
  t9403 = -1.*t930*t3506;
  t9407 = t9403 + t8935;
  t9130 = t930*t9124;
  t9455 = t1211*t1314;
  t9456 = t751*t1464*t1479;
  t9457 = t9455 + t9456;
  t9479 = -1.*t930*t9457;
  t9481 = t9479 + t9192;
  t9265 = t370*t1314*t930;
  t9266 = -1.*t370*t1479*t1688;
  t9272 = t9265 + t9266;
  t9292 = -0.15331*t9272;
  t9332 = t9331*t2193;
  t9337 = t376*t9331*t2883;
  t9342 = -1.*t9331*t2154*t3111;
  t9345 = -1.*t2438*t9331*t2154;
  t9348 = -1.*t376*t9331*t2758;
  t9350 = t9345 + t9348;
  t9353 = 0.183*t9350;
  t9357 = t376*t2438*t9331;
  t9363 = -1.*t9331*t2154*t2758;
  t9367 = t9357 + t9363;
  t9373 = -0.5*t9367;
  t4603 = t2438*t4562;
  t9543 = -1.*t376*t4159;
  t9544 = -1.*t1211*t370*t2154;
  t9545 = t9543 + t9544;
  t9463 = -1.*t9457*t1688;
  t9470 = t9130 + t9463;
  t9569 = t370*t376*t751;
  t9571 = -1.*t9470*t2154;
  t9573 = t9569 + t9571;
  t9576 = -1.*t376*t9470;
  t9578 = t9576 + t2370;
  t9609 = -1.*t376*t1464;
  t9610 = -1.*t9272*t2154;
  t9613 = t9609 + t9610;
  t9618 = -1.*t376*t9272;
  t9619 = t1464*t2154;
  t9621 = t9618 + t9619;
  t4620 = -1.*t4509*t2758;
  t4660 = t4603 + t4620;
  t9561 = -1.*t4562*t2758;
  t9644 = 0.183*t2438;
  t9645 = -0.25*t2758;
  t9647 = t9644 + t9645;
  t9653 = 0.25*t2438;
  t9654 = t9653 + t2881;
  t9585 = t2438*t9573;
  t9668 = t376*t9470;
  t9669 = t370*t751*t2154;
  t9671 = t9668 + t9669;
  t9602 = -1.*t9573*t2758;
  t9626 = t2438*t9613;
  t9695 = t376*t9272;
  t9696 = -1.*t1464*t2154;
  t9697 = t9695 + t9696;
  t9636 = -1.*t9613*t2758;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1179*t1512 + t1668*t1745 - 0.15331*(t1668*t1688 + t1875) + t2134*t2193 + t2416*t2883 + 0.183*(-1.*t2416*t2758 + t2438*t2999) - 0.5*(t2416*t2438 + t2758*t2999) + t2999*t3111 - 1.*t370*t750*t751;
  p_output1[10]=t1179*t3506 + t1745*t3669 + t2193*t4159 + t2883*t4509 + t3111*t4562 - 0.5*(t2438*t4509 + t2758*t4562) + 0.183*t4660 + t1211*t370*t750 - 0.15331*(t1688*t3669 + t3506*t930);
  p_output1[11]=0;
  p_output1[12]=t1179*t1211*t1479*t370 + t1211*t1314*t1745*t370 + t2193*t6052 + t2883*t6667 + t3111*t6794 + 0.183*(-1.*t2758*t6667 + t2438*t6794) - 0.5*(t2438*t6667 + t2758*t6794) - 1.*t1211*t1464*t750 - 0.15331*(t1211*t1314*t1688*t370 + t1211*t1479*t370*t930);
  p_output1[13]=t1179*t1479*t370*t751 + t1314*t1745*t370*t751 - 1.*t1464*t750*t751 + t2193*t7913 + t2883*t7942 + t3111*t8004 + 0.183*(-1.*t2758*t7942 + t2438*t8004) - 0.5*(t2438*t7942 + t2758*t8004) - 0.15331*(t1314*t1688*t370*t751 + t1479*t370*t751*t930);
  p_output1[14]=-1.*t1179*t1464*t1479 - 1.*t1314*t1464*t1745 - 1.*t370*t750 + t2193*t8409 + t2883*t8484 + t3111*t8537 + 0.183*(-1.*t2758*t8484 + t2438*t8537) - 0.5*(t2438*t8484 + t2758*t8537) - 0.15331*(-1.*t1314*t1464*t1688 - 1.*t1464*t1479*t930);
  p_output1[15]=t1179*t3669 + t1745*t8839 - 0.15331*(t3810 + t1688*t8839) + t2193*t8946 - 1.*t2154*t3111*t8946 + t2883*t376*t8946 - 0.5*(-1.*t2154*t2758*t8946 + t2438*t376*t8946) + 0.183*(-1.*t2154*t2438*t8946 - 1.*t2758*t376*t8946);
  p_output1[16]=t1512*t1745 + t1179*t9124 - 0.15331*(t1512*t1688 + t9130) + t2193*t9217 - 1.*t2154*t3111*t9217 + t2883*t376*t9217 - 0.5*(-1.*t2154*t2758*t9217 + t2438*t376*t9217) + 0.183*(-1.*t2154*t2438*t9217 - 1.*t2758*t376*t9217);
  p_output1[17]=t1179*t1314*t370 - 1.*t1479*t1745*t370 + t9292 + t9332 + t9337 + t9342 + t9353 + t9373;
  p_output1[18]=-0.047*t1688*t3506 - 0.15331*t4159 + 0.047*t3669*t930 + t2193*t9407 - 1.*t2154*t3111*t9407 + t2883*t376*t9407 - 0.5*(-1.*t2154*t2758*t9407 + t2438*t376*t9407) + 0.183*(-1.*t2154*t2438*t9407 - 1.*t2758*t376*t9407);
  p_output1[19]=0.047*t9124*t930 - 0.047*t1688*t9457 - 0.15331*t9470 + t2193*t9481 - 1.*t2154*t3111*t9481 + t2883*t376*t9481 - 0.5*(-1.*t2154*t2758*t9481 + t2438*t376*t9481) + 0.183*(-1.*t2154*t2438*t9481 - 1.*t2758*t376*t9481);
  p_output1[20]=-0.047*t1479*t1688*t370 + t9292 + 0.047*t1314*t370*t930 + t9332 + t9337 + t9342 + t9353 + t9373;
  p_output1[21]=0.183*t1211*t2154*t370 + 0.183*t376*t4159 + t2883*t4562 + t3111*t9545 - 0.5*(t4603 + t2758*t9545) + 0.183*(t2438*t9545 + t9561);
  p_output1[22]=0.183*t2154*t370*t751 + 0.183*t376*t9470 + t2883*t9573 + t3111*t9578 - 0.5*(t2758*t9578 + t9585) + 0.183*(t2438*t9578 + t9602);
  p_output1[23]=-0.183*t1464*t2154 + 0.183*t376*t9272 + t2883*t9613 + t3111*t9621 - 0.5*(t2758*t9621 + t9626) + 0.183*(t2438*t9621 + t9636);
  p_output1[24]=-0.5*t4660 + 0.183*(-1.*t2438*t4509 + t9561) + t4509*t9647 + t4562*t9654;
  p_output1[25]=t9573*t9654 + t9647*t9671 + 0.183*(t9602 - 1.*t2438*t9671) - 0.5*(t9585 - 1.*t2758*t9671);
  p_output1[26]=t9613*t9654 + t9647*t9697 + 0.183*(t9636 - 1.*t2438*t9697) - 0.5*(t9626 - 1.*t2758*t9697);
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



void Jp_FRfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
