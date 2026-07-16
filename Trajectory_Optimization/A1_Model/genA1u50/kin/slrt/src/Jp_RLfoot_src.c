/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:13:13 GMT-05:00
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
  double t977;
  double t2327;
  double t2050;
  double t2138;
  double t2495;
  double t1549;
  double t2152;
  double t2534;
  double t2550;
  double t3167;
  double t3637;
  double t3678;
  double t3771;
  double t898;
  double t5055;
  double t204;
  double t7269;
  double t7278;
  double t7284;
  double t7309;
  double t7310;
  double t7311;
  double t7316;
  double t7324;
  double t7337;
  double t7340;
  double t7350;
  double t7356;
  double t7357;
  double t223;
  double t314;
  double t468;
  double t739;
  double t1692;
  double t1710;
  double t3378;
  double t3433;
  double t3443;
  double t3577;
  double t7382;
  double t7384;
  double t7386;
  double t7388;
  double t7389;
  double t7390;
  double t7201;
  double t7267;
  double t7312;
  double t7317;
  double t7318;
  double t7406;
  double t7409;
  double t7411;
  double t7345;
  double t7348;
  double t7349;
  double t7413;
  double t7414;
  double t7415;
  double t7417;
  double t7418;
  double t7419;
  double t7444;
  double t7445;
  double t7446;
  double t7448;
  double t7449;
  double t7450;
  double t7452;
  double t7453;
  double t7454;
  double t7479;
  double t7480;
  double t7481;
  double t7485;
  double t7487;
  double t7489;
  double t7494;
  double t7495;
  double t7496;
  double t7517;
  double t7518;
  double t7519;
  double t7521;
  double t7522;
  double t7523;
  double t7525;
  double t7526;
  double t7529;
  double t7543;
  double t7544;
  double t7545;
  double t7547;
  double t7548;
  double t7549;
  double t7581;
  double t7582;
  double t7583;
  double t4136;
  double t7586;
  double t7587;
  double t7611;
  double t7612;
  double t7613;
  double t7639;
  double t7640;
  double t7662;
  double t7663;
  double t7664;
  double t7666;
  double t7667;
  double t7594;
  double t7616;
  double t7617;
  double t7618;
  double t7619;
  double t7620;
  double t7621;
  double t7622;
  double t7624;
  double t7625;
  double t7626;
  double t7627;
  double t7628;
  double t7630;
  double t7631;
  double t7632;
  double t7691;
  double t7692;
  double t7693;
  double t7422;
  double t7671;
  double t7672;
  double t7706;
  double t7707;
  double t7709;
  double t7710;
  double t7711;
  double t7724;
  double t7725;
  double t7726;
  double t7728;
  double t7729;
  double t7730;
  double t7421;
  double t7423;
  double t7700;
  double t7741;
  double t7742;
  double t7743;
  double t7745;
  double t7746;
  double t7753;
  double t7754;
  double t7755;
  double t7714;
  double t7718;
  double t7765;
  double t7766;
  double t7767;
  double t7733;
  double t7737;
  t977 = Sin(var1[3]);
  t2327 = Cos(var1[3]);
  t2050 = Cos(var1[5]);
  t2138 = Sin(var1[4]);
  t2495 = Sin(var1[5]);
  t1549 = Sin(var1[15]);
  t2152 = -1.*t2050*t977*t2138;
  t2534 = t2327*t2495;
  t2550 = t2152 + t2534;
  t3167 = Cos(var1[15]);
  t3637 = -1.*t2327*t2050;
  t3678 = -1.*t977*t2138*t2495;
  t3771 = t3637 + t3678;
  t898 = Cos(var1[4]);
  t5055 = Sin(var1[16]);
  t204 = Cos(var1[16]);
  t7269 = t3167*t2550;
  t7278 = -1.*t1549*t3771;
  t7284 = t7269 + t7278;
  t7309 = Cos(var1[17]);
  t7310 = -1.*t7309;
  t7311 = 1. + t7310;
  t7316 = Sin(var1[17]);
  t7324 = -1.*t898*t5055*t977;
  t7337 = t204*t7284;
  t7340 = t7324 + t7337;
  t7350 = -1.*t204*t898*t977;
  t7356 = -1.*t5055*t7284;
  t7357 = t7350 + t7356;
  t223 = -1.*t204;
  t314 = 1. + t223;
  t468 = -0.183*t314;
  t739 = 0. + t468;
  t1692 = -0.047*t1549;
  t1710 = 0. + t1692;
  t3378 = -1.*t3167;
  t3433 = 1. + t3378;
  t3443 = 0.047*t3433;
  t3577 = 0. + t3443;
  t7382 = t2327*t2050*t2138;
  t7384 = t977*t2495;
  t7386 = t7382 + t7384;
  t7388 = -1.*t2050*t977;
  t7389 = t2327*t2138*t2495;
  t7390 = t7388 + t7389;
  t7201 = -0.183*t5055;
  t7267 = 0. + t7201;
  t7312 = -0.1*t7311;
  t7317 = -0.183*t7316;
  t7318 = 0. + t7312 + t7317;
  t7406 = t3167*t7386;
  t7409 = -1.*t1549*t7390;
  t7411 = t7406 + t7409;
  t7345 = -0.183*t7311;
  t7348 = 0.1*t7316;
  t7349 = 0. + t7345 + t7348;
  t7413 = t2327*t898*t5055;
  t7414 = t204*t7411;
  t7415 = t7413 + t7414;
  t7417 = t204*t2327*t898;
  t7418 = -1.*t5055*t7411;
  t7419 = t7417 + t7418;
  t7444 = t3167*t2327*t898*t2050;
  t7445 = -1.*t2327*t898*t1549*t2495;
  t7446 = t7444 + t7445;
  t7448 = -1.*t2327*t5055*t2138;
  t7449 = t204*t7446;
  t7450 = t7448 + t7449;
  t7452 = -1.*t204*t2327*t2138;
  t7453 = -1.*t5055*t7446;
  t7454 = t7452 + t7453;
  t7479 = t3167*t898*t2050*t977;
  t7480 = -1.*t898*t1549*t977*t2495;
  t7481 = t7479 + t7480;
  t7485 = -1.*t5055*t977*t2138;
  t7487 = t204*t7481;
  t7489 = t7485 + t7487;
  t7494 = -1.*t204*t977*t2138;
  t7495 = -1.*t5055*t7481;
  t7496 = t7494 + t7495;
  t7517 = -1.*t3167*t2050*t2138;
  t7518 = t1549*t2138*t2495;
  t7519 = t7517 + t7518;
  t7521 = -1.*t898*t5055;
  t7522 = t204*t7519;
  t7523 = t7521 + t7522;
  t7525 = -1.*t204*t898;
  t7526 = -1.*t5055*t7519;
  t7529 = t7525 + t7526;
  t7543 = t2050*t977;
  t7544 = -1.*t2327*t2138*t2495;
  t7545 = t7543 + t7544;
  t7547 = -1.*t1549*t7386;
  t7548 = t3167*t7545;
  t7549 = t7547 + t7548;
  t7581 = t2050*t977*t2138;
  t7582 = -1.*t2327*t2495;
  t7583 = t7581 + t7582;
  t4136 = t3167*t3771;
  t7586 = -1.*t1549*t7583;
  t7587 = t7586 + t4136;
  t7611 = -1.*t898*t2050*t1549;
  t7612 = -1.*t3167*t898*t2495;
  t7613 = t7611 + t7612;
  t7639 = -1.*t3167*t7390;
  t7640 = t7547 + t7639;
  t7662 = t2327*t2050;
  t7663 = t977*t2138*t2495;
  t7664 = t7662 + t7663;
  t7666 = -1.*t3167*t7664;
  t7667 = t7586 + t7666;
  t7594 = t3167*t7583;
  t7616 = t7267*t7613;
  t7617 = t204*t7318*t7613;
  t7618 = -1.*t5055*t7349*t7613;
  t7619 = t3167*t898*t2050;
  t7620 = -1.*t898*t1549*t2495;
  t7621 = t7619 + t7620;
  t7622 = 0.08953*t7621;
  t7624 = -1.*t7309*t5055*t7613;
  t7625 = -1.*t204*t7316*t7613;
  t7626 = t7624 + t7625;
  t7627 = -0.183*t7626;
  t7628 = t204*t7309*t7613;
  t7630 = -1.*t5055*t7316*t7613;
  t7631 = t7628 + t7630;
  t7632 = -0.2*t7631;
  t7691 = -1.*t2327*t898*t5055;
  t7692 = -1.*t204*t7411;
  t7693 = t7691 + t7692;
  t7422 = t7309*t7419;
  t7671 = -1.*t1549*t7664;
  t7672 = t7594 + t7671;
  t7706 = -1.*t204*t7672;
  t7707 = t7324 + t7706;
  t7709 = t204*t898*t977;
  t7710 = -1.*t5055*t7672;
  t7711 = t7709 + t7710;
  t7724 = t5055*t2138;
  t7725 = -1.*t204*t7621;
  t7726 = t7724 + t7725;
  t7728 = -1.*t204*t2138;
  t7729 = -1.*t5055*t7621;
  t7730 = t7728 + t7729;
  t7421 = -1.*t7316*t7415;
  t7423 = t7421 + t7422;
  t7700 = -1.*t7316*t7419;
  t7741 = -0.183*t7309;
  t7742 = -0.1*t7316;
  t7743 = t7741 + t7742;
  t7745 = 0.1*t7309;
  t7746 = t7745 + t7317;
  t7753 = t898*t5055*t977;
  t7754 = t204*t7672;
  t7755 = t7753 + t7754;
  t7714 = t7309*t7711;
  t7718 = -1.*t7316*t7711;
  t7765 = -1.*t5055*t2138;
  t7766 = t204*t7621;
  t7767 = t7765 + t7766;
  t7733 = t7309*t7730;
  t7737 = -1.*t7316*t7730;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1710*t2550 + t3577*t3771 + 0.08953*(t1549*t2550 + t4136) + t7267*t7284 + t7318*t7340 + t7349*t7357 - 0.183*(-1.*t7316*t7340 + t7309*t7357) - 0.2*(t7309*t7340 + t7316*t7357) - 1.*t739*t898*t977;
  p_output1[10]=t1710*t7386 + t3577*t7390 + 0.08953*(t1549*t7386 + t3167*t7390) + t7267*t7411 + t7318*t7415 + t7349*t7419 - 0.2*(t7309*t7415 + t7316*t7419) - 0.183*t7423 + t2327*t739*t898;
  p_output1[11]=0;
  p_output1[12]=-1.*t2138*t2327*t739 + t7267*t7446 + t7318*t7450 + t7349*t7454 - 0.183*(-1.*t7316*t7450 + t7309*t7454) - 0.2*(t7309*t7450 + t7316*t7454) + t1710*t2050*t2327*t898 + t2327*t2495*t3577*t898 + 0.08953*(t1549*t2050*t2327*t898 + t2327*t2495*t3167*t898);
  p_output1[13]=t7267*t7481 + t7318*t7489 + t7349*t7496 - 0.183*(-1.*t7316*t7489 + t7309*t7496) - 0.2*(t7309*t7489 + t7316*t7496) - 1.*t2138*t739*t977 + t1710*t2050*t898*t977 + t2495*t3577*t898*t977 + 0.08953*(t1549*t2050*t898*t977 + t2495*t3167*t898*t977);
  p_output1[14]=-1.*t1710*t2050*t2138 + 0.08953*(-1.*t1549*t2050*t2138 - 1.*t2138*t2495*t3167) - 1.*t2138*t2495*t3577 + t7267*t7519 + t7318*t7523 + t7349*t7529 - 0.183*(-1.*t7316*t7523 + t7309*t7529) - 0.2*(t7309*t7523 + t7316*t7529) - 1.*t739*t898;
  p_output1[15]=t3577*t7386 + t1710*t7545 + 0.08953*(t7406 + t1549*t7545) + t7267*t7549 + t204*t7318*t7549 - 1.*t5055*t7349*t7549 - 0.183*(-1.*t5055*t7309*t7549 - 1.*t204*t7316*t7549) - 0.2*(t204*t7309*t7549 - 1.*t5055*t7316*t7549);
  p_output1[16]=t1710*t3771 + t3577*t7583 + t7267*t7587 + t204*t7318*t7587 - 1.*t5055*t7349*t7587 - 0.183*(-1.*t5055*t7309*t7587 - 1.*t204*t7316*t7587) - 0.2*(t204*t7309*t7587 - 1.*t5055*t7316*t7587) + 0.08953*(t1549*t3771 + t7594);
  p_output1[17]=t7616 + t7617 + t7618 + t7622 + t7627 + t7632 - 1.*t1710*t2495*t898 + t2050*t3577*t898;
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
  p_output1[45]=-0.047*t3167*t7386 + 0.047*t1549*t7390 + 0.08953*t7411 + t7267*t7640 + t204*t7318*t7640 - 1.*t5055*t7349*t7640 - 0.183*(-1.*t5055*t7309*t7640 - 1.*t204*t7316*t7640) - 0.2*(t204*t7309*t7640 - 1.*t5055*t7316*t7640);
  p_output1[46]=-0.047*t3167*t7583 + 0.047*t1549*t7664 + t7267*t7667 + t204*t7318*t7667 - 1.*t5055*t7349*t7667 - 0.183*(-1.*t5055*t7309*t7667 - 1.*t204*t7316*t7667) - 0.2*(t204*t7309*t7667 - 1.*t5055*t7316*t7667) + 0.08953*t7672;
  p_output1[47]=t7616 + t7617 + t7618 + t7622 + t7627 + t7632 + 0.047*t1549*t2495*t898 - 0.047*t2050*t3167*t898;
  p_output1[48]=-0.183*t204*t7411 + t7318*t7419 + t7349*t7693 - 0.2*(t7422 + t7316*t7693) - 0.183*(t7309*t7693 + t7700) - 0.183*t2327*t5055*t898;
  p_output1[49]=-0.183*t204*t7672 + t7349*t7707 + t7318*t7711 - 0.2*(t7316*t7707 + t7714) - 0.183*(t7309*t7707 + t7718) - 0.183*t5055*t898*t977;
  p_output1[50]=0.183*t2138*t5055 - 0.183*t204*t7621 + t7349*t7726 + t7318*t7730 - 0.2*(t7316*t7726 + t7733) - 0.183*(t7309*t7726 + t7737);
  p_output1[51]=-0.2*t7423 - 0.183*(-1.*t7309*t7415 + t7700) + t7415*t7743 + t7419*t7746;
  p_output1[52]=t7711*t7746 + t7743*t7755 - 0.183*(t7718 - 1.*t7309*t7755) - 0.2*(t7714 - 1.*t7316*t7755);
  p_output1[53]=t7730*t7746 + t7743*t7767 - 0.183*(t7737 - 1.*t7309*t7767) - 0.2*(t7733 - 1.*t7316*t7767);
}



void Jp_RLfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
