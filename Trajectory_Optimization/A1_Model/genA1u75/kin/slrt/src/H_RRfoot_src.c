/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:18:19 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RRfoot_src.h"

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
  double t682;
  double t923;
  double t1342;
  double t1026;
  double t1373;
  double t759;
  double t720;
  double t735;
  double t786;
  double t1198;
  double t1395;
  double t1542;
  double t1556;
  double t1698;
  double t1763;
  double t1818;
  double t1830;
  double t1843;
  double t1854;
  double t234;
  double t2217;
  double t2708;
  double t2710;
  double t2715;
  double t2729;
  double t2730;
  double t2736;
  double t2741;
  double t2748;
  double t2770;
  double t3024;
  double t3127;
  double t3140;
  double t743;
  double t1872;
  double t1974;
  double t2231;
  double t2240;
  double t2265;
  double t2706;
  double t2796;
  double t2844;
  double t2861;
  double t2863;
  double t2875;
  double t2998;
  double t3158;
  double t3174;
  double t3254;
  double t3326;
  double t3363;
  double t3526;
  double t3530;
  double t3532;
  double t4204;
  double t4225;
  double t2155;
  double t2341;
  double t2701;
  double t3639;
  double t3664;
  double t3671;
  double t3839;
  double t3875;
  double t3915;
  double t3931;
  double t3952;
  double t3954;
  double t3997;
  double t4023;
  double t4042;
  double t4065;
  double t3574;
  double t3581;
  double t3587;
  double t4098;
  double t4125;
  double t4227;
  double t4251;
  double t4285;
  double t4303;
  double t4356;
  double t4426;
  double t2845;
  double t2971;
  double t2973;
  double t3685;
  double t3736;
  double t3816;
  double t3600;
  double t3611;
  double t3625;
  double t3219;
  double t3365;
  double t3508;
  double t3817;
  double t3818;
  double t3823;
  t682 = Cos(var1[3]);
  t923 = Cos(var1[5]);
  t1342 = Sin(var1[3]);
  t1026 = Sin(var1[4]);
  t1373 = Sin(var1[5]);
  t759 = Cos(var1[13]);
  t720 = Cos(var1[4]);
  t735 = Sin(var1[13]);
  t786 = Cos(var1[12]);
  t1198 = t682*t923*t1026;
  t1395 = t1342*t1373;
  t1542 = t1198 + t1395;
  t1556 = t786*t1542;
  t1698 = Sin(var1[12]);
  t1763 = -1.*t923*t1342;
  t1818 = t682*t1026*t1373;
  t1830 = t1763 + t1818;
  t1843 = -1.*t1698*t1830;
  t1854 = t1556 + t1843;
  t234 = Sin(var1[14]);
  t2217 = Cos(var1[14]);
  t2708 = t923*t1342*t1026;
  t2710 = -1.*t682*t1373;
  t2715 = t2708 + t2710;
  t2729 = t786*t2715;
  t2730 = t682*t923;
  t2736 = t1342*t1026*t1373;
  t2741 = t2730 + t2736;
  t2748 = -1.*t1698*t2741;
  t2770 = t2729 + t2748;
  t3024 = t786*t720*t923;
  t3127 = -1.*t720*t1698*t1373;
  t3140 = t3024 + t3127;
  t743 = t682*t720*t735;
  t1872 = t759*t1854;
  t1974 = t743 + t1872;
  t2231 = t759*t682*t720;
  t2240 = -1.*t735*t1854;
  t2265 = t2231 + t2240;
  t2706 = t720*t735*t1342;
  t2796 = t759*t2770;
  t2844 = t2706 + t2796;
  t2861 = t759*t720*t1342;
  t2863 = -1.*t735*t2770;
  t2875 = t2861 + t2863;
  t2998 = -1.*t735*t1026;
  t3158 = t759*t3140;
  t3174 = t2998 + t3158;
  t3254 = -1.*t759*t1026;
  t3326 = -1.*t735*t3140;
  t3363 = t3254 + t3326;
  t3526 = t1698*t1542;
  t3530 = t786*t1830;
  t3532 = t3526 + t3530;
  t4204 = -1.*t2217;
  t4225 = 1. + t4204;
  t2155 = -1.*t234*t1974;
  t2341 = t2217*t2265;
  t2701 = t2155 + t2341;
  t3639 = t2217*t1974;
  t3664 = t234*t2265;
  t3671 = t3639 + t3664;
  t3839 = -1.*t759;
  t3875 = 1. + t3839;
  t3915 = -0.183*t3875;
  t3931 = 0. + t3915;
  t3952 = 0.047*t1698;
  t3954 = 0. + t3952;
  t3997 = -1.*t786;
  t4023 = 1. + t3997;
  t4042 = -0.047*t4023;
  t4065 = 0. + t4042;
  t3574 = t1698*t2715;
  t3581 = t786*t2741;
  t3587 = t3574 + t3581;
  t4098 = -0.183*t735;
  t4125 = 0. + t4098;
  t4227 = -0.15*t4225;
  t4251 = -0.183*t234;
  t4285 = 0. + t4227 + t4251;
  t4303 = -0.183*t4225;
  t4356 = 0.15*t234;
  t4426 = 0. + t4303 + t4356;
  t2845 = -1.*t234*t2844;
  t2971 = t2217*t2875;
  t2973 = t2845 + t2971;
  t3685 = t2217*t2844;
  t3736 = t234*t2875;
  t3816 = t3685 + t3736;
  t3600 = t720*t923*t1698;
  t3611 = t786*t720*t1373;
  t3625 = t3600 + t3611;
  t3219 = -1.*t234*t3174;
  t3365 = t2217*t3363;
  t3508 = t3219 + t3365;
  t3817 = t2217*t3174;
  t3818 = t234*t3363;
  t3823 = t3817 + t3818;
  p_output1[0]=t2701;
  p_output1[1]=t2973;
  p_output1[2]=t3508;
  p_output1[3]=0.;
  p_output1[4]=t3532;
  p_output1[5]=t3587;
  p_output1[6]=t3625;
  p_output1[7]=0.;
  p_output1[8]=t3671;
  p_output1[9]=t3816;
  p_output1[10]=t3823;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.183*t2701 - 0.11079*t3532 - 0.3*t3671 + t1542*t3954 + t1830*t4065 + t1854*t4125 + t1974*t4285 + t2265*t4426 + t3931*t682*t720 + var1[0];
  p_output1[13]=0. - 0.183*t2973 - 0.11079*t3587 - 0.3*t3816 + t2715*t3954 + t2741*t4065 + t2770*t4125 + t2844*t4285 + t2875*t4426 + t1342*t3931*t720 + var1[1];
  p_output1[14]=0. - 0.183*t3508 - 0.11079*t3625 - 0.3*t3823 - 1.*t1026*t3931 + t3140*t4125 + t3174*t4285 + t3363*t4426 + t1373*t4065*t720 + t3954*t720*t923 + var1[2];
  p_output1[15]=1.;
}



void H_RRfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
