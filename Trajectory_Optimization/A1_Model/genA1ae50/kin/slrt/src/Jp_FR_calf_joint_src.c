/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:09:58 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_FR_calf_joint_src.h"

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
  double t305;
  double t381;
  double t400;
  double t380;
  double t418;
  double t332;
  double t398;
  double t433;
  double t443;
  double t471;
  double t536;
  double t552;
  double t608;
  double t185;
  double t242;
  double t697;
  double t699;
  double t723;
  double t744;
  double t801;
  double t816;
  double t823;
  double t845;
  double t784;
  double t791;
  double t795;
  double t876;
  double t877;
  double t887;
  double t265;
  double t282;
  double t286;
  double t290;
  double t337;
  double t340;
  double t366;
  double t373;
  double t609;
  double t641;
  double t1094;
  double t1115;
  double t1119;
  double t1151;
  double t1153;
  double t1161;
  double t761;
  double t767;
  double t1230;
  double t1234;
  double t1244;
  double t841;
  double t852;
  double t853;
  double t893;
  double t908;
  double t912;
  double t1263;
  double t1280;
  double t1282;
  double t1288;
  double t1303;
  double t1310;
  double t1500;
  double t1508;
  double t1509;
  double t1519;
  double t1525;
  double t1531;
  double t1567;
  double t1577;
  double t1595;
  double t1822;
  double t1842;
  double t1867;
  double t1877;
  double t1879;
  double t1889;
  double t1907;
  double t1912;
  double t1929;
  double t2145;
  double t2151;
  double t2158;
  double t2192;
  double t2220;
  double t2249;
  double t2333;
  double t2343;
  double t2347;
  double t2452;
  double t2458;
  double t2464;
  double t2521;
  double t2523;
  double t2532;
  double t2634;
  double t2660;
  double t2693;
  double t659;
  double t2842;
  double t2844;
  double t3057;
  double t3062;
  double t3064;
  double t3303;
  double t3305;
  double t2750;
  double t3495;
  double t3499;
  double t3523;
  double t3582;
  double t3586;
  double t3035;
  double t3037;
  double t3040;
  double t3046;
  double t3067;
  double t3079;
  double t3083;
  double t3089;
  double t3108;
  double t3133;
  double t3137;
  double t3147;
  double t3161;
  double t3179;
  double t3212;
  double t1336;
  double t3793;
  double t3813;
  double t3827;
  double t3541;
  double t3557;
  double t4028;
  double t4033;
  double t4035;
  double t3984;
  double t3995;
  double t4225;
  double t4239;
  double t4241;
  double t4193;
  double t4194;
  double t4201;
  double t1344;
  double t1352;
  double t3936;
  double t4317;
  double t4333;
  double t4347;
  double t4351;
  double t4355;
  double t4064;
  double t4415;
  double t4441;
  double t4448;
  double t4147;
  double t4260;
  double t4580;
  double t4591;
  double t4598;
  double t4286;
  t305 = Sin(var1[3]);
  t381 = Cos(var1[5]);
  t400 = Sin(var1[4]);
  t380 = Cos(var1[3]);
  t418 = Sin(var1[5]);
  t332 = Cos(var1[6]);
  t398 = -1.*t380*t381;
  t433 = -1.*t305*t400*t418;
  t443 = t398 + t433;
  t471 = -1.*t381*t305*t400;
  t536 = t380*t418;
  t552 = t471 + t536;
  t608 = Sin(var1[6]);
  t185 = Cos(var1[4]);
  t242 = Cos(var1[7]);
  t697 = t332*t552;
  t699 = -1.*t443*t608;
  t723 = t697 + t699;
  t744 = Sin(var1[7]);
  t801 = Cos(var1[8]);
  t816 = -1.*t801;
  t823 = 1. + t816;
  t845 = Sin(var1[8]);
  t784 = -1.*t185*t242*t305;
  t791 = -1.*t723*t744;
  t795 = t784 + t791;
  t876 = t242*t723;
  t877 = -1.*t185*t305*t744;
  t887 = t876 + t877;
  t265 = -1.*t242;
  t282 = 1. + t265;
  t286 = 0.183*t282;
  t290 = 0. + t286;
  t337 = -1.*t332;
  t340 = 1. + t337;
  t366 = -0.047*t340;
  t373 = 0. + t366;
  t609 = 0.047*t608;
  t641 = 0. + t609;
  t1094 = -1.*t381*t305;
  t1115 = t380*t400*t418;
  t1119 = t1094 + t1115;
  t1151 = t380*t381*t400;
  t1153 = t305*t418;
  t1161 = t1151 + t1153;
  t761 = 0.183*t744;
  t767 = 0. + t761;
  t1230 = t332*t1161;
  t1234 = -1.*t1119*t608;
  t1244 = t1230 + t1234;
  t841 = 0.183*t823;
  t852 = 0.1*t845;
  t853 = 0. + t841 + t852;
  t893 = -0.1*t823;
  t908 = 0.183*t845;
  t912 = 0. + t893 + t908;
  t1263 = t380*t185*t242;
  t1280 = -1.*t1244*t744;
  t1282 = t1263 + t1280;
  t1288 = t242*t1244;
  t1303 = t380*t185*t744;
  t1310 = t1288 + t1303;
  t1500 = t380*t185*t381*t332;
  t1508 = -1.*t380*t185*t418*t608;
  t1509 = t1500 + t1508;
  t1519 = -1.*t380*t242*t400;
  t1525 = -1.*t1509*t744;
  t1531 = t1519 + t1525;
  t1567 = t242*t1509;
  t1577 = -1.*t380*t400*t744;
  t1595 = t1567 + t1577;
  t1822 = t185*t381*t332*t305;
  t1842 = -1.*t185*t305*t418*t608;
  t1867 = t1822 + t1842;
  t1877 = -1.*t242*t305*t400;
  t1879 = -1.*t1867*t744;
  t1889 = t1877 + t1879;
  t1907 = t242*t1867;
  t1912 = -1.*t305*t400*t744;
  t1929 = t1907 + t1912;
  t2145 = -1.*t381*t332*t400;
  t2151 = t400*t418*t608;
  t2158 = t2145 + t2151;
  t2192 = -1.*t185*t242;
  t2220 = -1.*t2158*t744;
  t2249 = t2192 + t2220;
  t2333 = t242*t2158;
  t2343 = -1.*t185*t744;
  t2347 = t2333 + t2343;
  t2452 = t381*t305;
  t2458 = -1.*t380*t400*t418;
  t2464 = t2452 + t2458;
  t2521 = t332*t2464;
  t2523 = -1.*t1161*t608;
  t2532 = t2521 + t2523;
  t2634 = t381*t305*t400;
  t2660 = -1.*t380*t418;
  t2693 = t2634 + t2660;
  t659 = t332*t443;
  t2842 = -1.*t2693*t608;
  t2844 = t659 + t2842;
  t3057 = -1.*t185*t332*t418;
  t3062 = -1.*t185*t381*t608;
  t3064 = t3057 + t3062;
  t3303 = -1.*t332*t1119;
  t3305 = t3303 + t2523;
  t2750 = t332*t2693;
  t3495 = t380*t381;
  t3499 = t305*t400*t418;
  t3523 = t3495 + t3499;
  t3582 = -1.*t332*t3523;
  t3586 = t3582 + t2842;
  t3035 = t185*t381*t332;
  t3037 = -1.*t185*t418*t608;
  t3040 = t3035 + t3037;
  t3046 = -0.13205*t3040;
  t3067 = t3064*t767;
  t3079 = -1.*t3064*t744*t853;
  t3083 = t242*t3064*t912;
  t3089 = -1.*t801*t3064*t744;
  t3108 = -1.*t242*t3064*t845;
  t3133 = t3089 + t3108;
  t3137 = 0.183*t3133;
  t3147 = t242*t801*t3064;
  t3161 = -1.*t3064*t744*t845;
  t3179 = t3147 + t3161;
  t3212 = -0.1*t3179;
  t1336 = t801*t1282;
  t3793 = -1.*t242*t1244;
  t3813 = -1.*t380*t185*t744;
  t3827 = t3793 + t3813;
  t3541 = -1.*t3523*t608;
  t3557 = t2750 + t3541;
  t4028 = t185*t242*t305;
  t4033 = -1.*t3557*t744;
  t4035 = t4028 + t4033;
  t3984 = -1.*t242*t3557;
  t3995 = t3984 + t877;
  t4225 = -1.*t242*t400;
  t4239 = -1.*t3040*t744;
  t4241 = t4225 + t4239;
  t4193 = -1.*t242*t3040;
  t4194 = t400*t744;
  t4201 = t4193 + t4194;
  t1344 = -1.*t1310*t845;
  t1352 = t1336 + t1344;
  t3936 = -1.*t1282*t845;
  t4317 = 0.183*t801;
  t4333 = -0.1*t845;
  t4347 = t4317 + t4333;
  t4351 = 0.1*t801;
  t4355 = t4351 + t908;
  t4064 = t801*t4035;
  t4415 = t242*t3557;
  t4441 = t185*t305*t744;
  t4448 = t4415 + t4441;
  t4147 = -1.*t4035*t845;
  t4260 = t801*t4241;
  t4580 = t242*t3040;
  t4591 = -1.*t400*t744;
  t4598 = t4580 + t4591;
  t4286 = -1.*t4241*t845;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=-1.*t185*t290*t305 + t373*t443 + t552*t641 - 0.13205*(t552*t608 + t659) + t723*t767 + t795*t853 - 0.1*(t795*t845 + t801*t887) + 0.183*(t795*t801 - 1.*t845*t887) + t887*t912;
  p_output1[10]=0.183*t1352 + t1119*t373 + t185*t290*t380 - 0.13205*(t1119*t332 + t1161*t608) + t1161*t641 + t1244*t767 - 0.1*(t1310*t801 + t1282*t845) + t1282*t853 + t1310*t912;
  p_output1[11]=0;
  p_output1[12]=-1.*t290*t380*t400 + t185*t373*t380*t418 - 0.13205*(t185*t332*t380*t418 + t185*t380*t381*t608) + t185*t380*t381*t641 + t1509*t767 - 0.1*(t1595*t801 + t1531*t845) + 0.183*(t1531*t801 - 1.*t1595*t845) + t1531*t853 + t1595*t912;
  p_output1[13]=-1.*t290*t305*t400 + t185*t305*t373*t418 - 0.13205*(t185*t305*t332*t418 + t185*t305*t381*t608) + t185*t305*t381*t641 + t1867*t767 - 0.1*(t1929*t801 + t1889*t845) + 0.183*(t1889*t801 - 1.*t1929*t845) + t1889*t853 + t1929*t912;
  p_output1[14]=-1.*t185*t290 - 1.*t373*t400*t418 - 0.13205*(-1.*t332*t400*t418 - 1.*t381*t400*t608) - 1.*t381*t400*t641 + t2158*t767 - 0.1*(t2347*t801 + t2249*t845) + 0.183*(t2249*t801 - 1.*t2347*t845) + t2249*t853 + t2347*t912;
  p_output1[15]=t1161*t373 - 0.13205*(t1230 + t2464*t608) + t2464*t641 + t2532*t767 + 0.183*(-1.*t2532*t744*t801 - 1.*t242*t2532*t845) - 0.1*(t242*t2532*t801 - 1.*t2532*t744*t845) - 1.*t2532*t744*t853 + t242*t2532*t912;
  p_output1[16]=t2693*t373 - 0.13205*(t2750 + t443*t608) + t443*t641 + t2844*t767 + 0.183*(-1.*t2844*t744*t801 - 1.*t242*t2844*t845) - 0.1*(t242*t2844*t801 - 1.*t2844*t744*t845) - 1.*t2844*t744*t853 + t242*t2844*t912;
  p_output1[17]=t3046 + t3067 + t3079 + t3083 + t3137 + t3212 + t185*t373*t381 - 1.*t185*t418*t641;
  p_output1[18]=-0.13205*t1244 + 0.047*t1161*t332 - 0.047*t1119*t608 + t3305*t767 + 0.183*(-1.*t3305*t744*t801 - 1.*t242*t3305*t845) - 0.1*(t242*t3305*t801 - 1.*t3305*t744*t845) - 1.*t3305*t744*t853 + t242*t3305*t912;
  p_output1[19]=0.047*t2693*t332 - 0.13205*t3557 - 0.047*t3523*t608 + t3586*t767 + 0.183*(-1.*t3586*t744*t801 - 1.*t242*t3586*t845) - 0.1*(t242*t3586*t801 - 1.*t3586*t744*t845) - 1.*t3586*t744*t853 + t242*t3586*t912;
  p_output1[20]=t3046 + t3067 + t3079 + t3083 + t3137 + t3212 + 0.047*t185*t332*t381 - 0.047*t185*t418*t608;
  p_output1[21]=0.183*t1244*t242 + 0.183*t185*t380*t744 + 0.183*(t3936 + t3827*t801) - 0.1*(t1336 + t3827*t845) + t3827*t853 + t1282*t912;
  p_output1[22]=0.183*t242*t3557 + 0.183*t185*t305*t744 + 0.183*(t4147 + t3995*t801) - 0.1*(t4064 + t3995*t845) + t3995*t853 + t4035*t912;
  p_output1[23]=0.183*t242*t3040 - 0.183*t400*t744 + 0.183*(t4286 + t4201*t801) - 0.1*(t4260 + t4201*t845) + t4201*t853 + t4241*t912;
  p_output1[24]=-0.1*t1352 + t1310*t4347 + t1282*t4355 + 0.183*(t3936 - 1.*t1310*t801);
  p_output1[25]=t4035*t4355 + t4347*t4448 + 0.183*(t4147 - 1.*t4448*t801) - 0.1*(t4064 - 1.*t4448*t845);
  p_output1[26]=t4241*t4355 + t4347*t4598 + 0.183*(t4286 - 1.*t4598*t801) - 0.1*(t4260 - 1.*t4598*t845);
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



void Jp_FR_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
