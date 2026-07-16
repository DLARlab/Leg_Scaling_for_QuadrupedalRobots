/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:03:43 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RRfoot_src.h"

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
  double t600;
  double t904;
  double t844;
  double t859;
  double t1016;
  double t753;
  double t862;
  double t1081;
  double t1315;
  double t1404;
  double t1820;
  double t1878;
  double t1885;
  double t577;
  double t2448;
  double t151;
  double t2530;
  double t2548;
  double t2551;
  double t2562;
  double t2564;
  double t2580;
  double t2633;
  double t2679;
  double t2691;
  double t2695;
  double t2727;
  double t2862;
  double t2863;
  double t343;
  double t482;
  double t490;
  double t554;
  double t798;
  double t833;
  double t1435;
  double t1451;
  double t1669;
  double t1785;
  double t3607;
  double t3618;
  double t3697;
  double t3939;
  double t4038;
  double t4051;
  double t2478;
  double t2491;
  double t2601;
  double t2662;
  double t2671;
  double t4555;
  double t4567;
  double t4576;
  double t2698;
  double t2712;
  double t2716;
  double t4638;
  double t4759;
  double t4786;
  double t4827;
  double t4951;
  double t5102;
  double t5746;
  double t5762;
  double t5764;
  double t5769;
  double t5841;
  double t5847;
  double t5885;
  double t5887;
  double t5896;
  double t7848;
  double t7931;
  double t8456;
  double t8515;
  double t8541;
  double t8630;
  double t8690;
  double t8738;
  double t8759;
  double t8944;
  double t8958;
  double t8972;
  double t9019;
  double t9025;
  double t9034;
  double t9036;
  double t9037;
  double t9039;
  double t9124;
  double t9130;
  double t9136;
  double t9143;
  double t9147;
  double t9148;
  double t9193;
  double t9195;
  double t9199;
  double t2182;
  double t9202;
  double t9203;
  double t9237;
  double t9239;
  double t9240;
  double t9277;
  double t9278;
  double t9302;
  double t9303;
  double t9304;
  double t9306;
  double t9307;
  double t9210;
  double t9241;
  double t9242;
  double t9246;
  double t9248;
  double t9249;
  double t9251;
  double t9253;
  double t9254;
  double t9255;
  double t9257;
  double t9258;
  double t9260;
  double t9262;
  double t9266;
  double t9268;
  double t9334;
  double t9335;
  double t9336;
  double t5234;
  double t9311;
  double t9312;
  double t9367;
  double t9368;
  double t9370;
  double t9371;
  double t9374;
  double t9394;
  double t9395;
  double t9396;
  double t9398;
  double t9399;
  double t9400;
  double t5203;
  double t5293;
  double t9357;
  double t9415;
  double t9416;
  double t9417;
  double t9419;
  double t9421;
  double t9431;
  double t9434;
  double t9435;
  double t9377;
  double t9381;
  double t9449;
  double t9450;
  double t9456;
  double t9403;
  double t9408;
  t600 = Sin(var1[3]);
  t904 = Cos(var1[3]);
  t844 = Cos(var1[5]);
  t859 = Sin(var1[4]);
  t1016 = Sin(var1[5]);
  t753 = Sin(var1[12]);
  t862 = -1.*t844*t600*t859;
  t1081 = t904*t1016;
  t1315 = t862 + t1081;
  t1404 = Cos(var1[12]);
  t1820 = -1.*t904*t844;
  t1878 = -1.*t600*t859*t1016;
  t1885 = t1820 + t1878;
  t577 = Cos(var1[4]);
  t2448 = Sin(var1[13]);
  t151 = Cos(var1[13]);
  t2530 = t1404*t1315;
  t2548 = -1.*t753*t1885;
  t2551 = t2530 + t2548;
  t2562 = Cos(var1[14]);
  t2564 = -1.*t2562;
  t2580 = 1. + t2564;
  t2633 = Sin(var1[14]);
  t2679 = -1.*t577*t2448*t600;
  t2691 = t151*t2551;
  t2695 = t2679 + t2691;
  t2727 = -1.*t151*t577*t600;
  t2862 = -1.*t2448*t2551;
  t2863 = t2727 + t2862;
  t343 = -1.*t151;
  t482 = 1. + t343;
  t490 = -0.183*t482;
  t554 = 0. + t490;
  t798 = 0.047*t753;
  t833 = 0. + t798;
  t1435 = -1.*t1404;
  t1451 = 1. + t1435;
  t1669 = -0.047*t1451;
  t1785 = 0. + t1669;
  t3607 = t904*t844*t859;
  t3618 = t600*t1016;
  t3697 = t3607 + t3618;
  t3939 = -1.*t844*t600;
  t4038 = t904*t859*t1016;
  t4051 = t3939 + t4038;
  t2478 = -0.183*t2448;
  t2491 = 0. + t2478;
  t2601 = -0.25*t2580;
  t2662 = -0.183*t2633;
  t2671 = 0. + t2601 + t2662;
  t4555 = t1404*t3697;
  t4567 = -1.*t753*t4051;
  t4576 = t4555 + t4567;
  t2698 = -0.183*t2580;
  t2712 = 0.25*t2633;
  t2716 = 0. + t2698 + t2712;
  t4638 = t904*t577*t2448;
  t4759 = t151*t4576;
  t4786 = t4638 + t4759;
  t4827 = t151*t904*t577;
  t4951 = -1.*t2448*t4576;
  t5102 = t4827 + t4951;
  t5746 = t1404*t904*t577*t844;
  t5762 = -1.*t904*t577*t753*t1016;
  t5764 = t5746 + t5762;
  t5769 = -1.*t904*t2448*t859;
  t5841 = t151*t5764;
  t5847 = t5769 + t5841;
  t5885 = -1.*t151*t904*t859;
  t5887 = -1.*t2448*t5764;
  t5896 = t5885 + t5887;
  t7848 = t1404*t577*t844*t600;
  t7931 = -1.*t577*t753*t600*t1016;
  t8456 = t7848 + t7931;
  t8515 = -1.*t2448*t600*t859;
  t8541 = t151*t8456;
  t8630 = t8515 + t8541;
  t8690 = -1.*t151*t600*t859;
  t8738 = -1.*t2448*t8456;
  t8759 = t8690 + t8738;
  t8944 = -1.*t1404*t844*t859;
  t8958 = t753*t859*t1016;
  t8972 = t8944 + t8958;
  t9019 = -1.*t577*t2448;
  t9025 = t151*t8972;
  t9034 = t9019 + t9025;
  t9036 = -1.*t151*t577;
  t9037 = -1.*t2448*t8972;
  t9039 = t9036 + t9037;
  t9124 = t844*t600;
  t9130 = -1.*t904*t859*t1016;
  t9136 = t9124 + t9130;
  t9143 = -1.*t753*t3697;
  t9147 = t1404*t9136;
  t9148 = t9143 + t9147;
  t9193 = t844*t600*t859;
  t9195 = -1.*t904*t1016;
  t9199 = t9193 + t9195;
  t2182 = t1404*t1885;
  t9202 = -1.*t753*t9199;
  t9203 = t9202 + t2182;
  t9237 = -1.*t577*t844*t753;
  t9239 = -1.*t1404*t577*t1016;
  t9240 = t9237 + t9239;
  t9277 = -1.*t1404*t4051;
  t9278 = t9143 + t9277;
  t9302 = t904*t844;
  t9303 = t600*t859*t1016;
  t9304 = t9302 + t9303;
  t9306 = -1.*t1404*t9304;
  t9307 = t9202 + t9306;
  t9210 = t1404*t9199;
  t9241 = t2491*t9240;
  t9242 = t151*t2671*t9240;
  t9246 = -1.*t2448*t2716*t9240;
  t9248 = t1404*t577*t844;
  t9249 = -1.*t577*t753*t1016;
  t9251 = t9248 + t9249;
  t9253 = -0.13205*t9251;
  t9254 = -1.*t2562*t2448*t9240;
  t9255 = -1.*t151*t2633*t9240;
  t9257 = t9254 + t9255;
  t9258 = -0.183*t9257;
  t9260 = t151*t2562*t9240;
  t9262 = -1.*t2448*t2633*t9240;
  t9266 = t9260 + t9262;
  t9268 = -0.5*t9266;
  t9334 = -1.*t904*t577*t2448;
  t9335 = -1.*t151*t4576;
  t9336 = t9334 + t9335;
  t5234 = t2562*t5102;
  t9311 = -1.*t753*t9304;
  t9312 = t9210 + t9311;
  t9367 = -1.*t151*t9312;
  t9368 = t2679 + t9367;
  t9370 = t151*t577*t600;
  t9371 = -1.*t2448*t9312;
  t9374 = t9370 + t9371;
  t9394 = t2448*t859;
  t9395 = -1.*t151*t9251;
  t9396 = t9394 + t9395;
  t9398 = -1.*t151*t859;
  t9399 = -1.*t2448*t9251;
  t9400 = t9398 + t9399;
  t5203 = -1.*t2633*t4786;
  t5293 = t5203 + t5234;
  t9357 = -1.*t2633*t5102;
  t9415 = -0.183*t2562;
  t9416 = -0.25*t2633;
  t9417 = t9415 + t9416;
  t9419 = 0.25*t2562;
  t9421 = t9419 + t2662;
  t9431 = t577*t2448*t600;
  t9434 = t151*t9312;
  t9435 = t9431 + t9434;
  t9377 = t2562*t9374;
  t9381 = -1.*t2633*t9374;
  t9449 = -1.*t2448*t859;
  t9450 = t151*t9251;
  t9456 = t9449 + t9450;
  t9403 = t2562*t9400;
  t9408 = -1.*t2633*t9400;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1785*t1885 + t2491*t2551 + t2671*t2695 + t2716*t2863 - 0.183*(-1.*t2633*t2695 + t2562*t2863) - 0.5*(t2562*t2695 + t2633*t2863) - 1.*t554*t577*t600 - 0.13205*(t2182 + t1315*t753) + t1315*t833;
  p_output1[10]=t1785*t4051 + t2491*t4576 + t2671*t4786 + t2716*t5102 - 0.5*(t2562*t4786 + t2633*t5102) - 0.183*t5293 - 0.13205*(t1404*t4051 + t3697*t753) + t3697*t833 + t554*t577*t904;
  p_output1[11]=0;
  p_output1[12]=t2491*t5764 + t2671*t5847 + t2716*t5896 - 0.183*(-1.*t2633*t5847 + t2562*t5896) - 0.5*(t2562*t5847 + t2633*t5896) + t1016*t1785*t577*t904 + t577*t833*t844*t904 - 1.*t554*t859*t904 - 0.13205*(t1016*t1404*t577*t904 + t577*t753*t844*t904);
  p_output1[13]=t1016*t1785*t577*t600 + t577*t600*t833*t844 - 0.13205*(t1016*t1404*t577*t600 + t577*t600*t753*t844) + t2491*t8456 - 1.*t554*t600*t859 + t2671*t8630 + t2716*t8759 - 0.183*(-1.*t2633*t8630 + t2562*t8759) - 0.5*(t2562*t8630 + t2633*t8759);
  p_output1[14]=-1.*t554*t577 - 1.*t1016*t1785*t859 - 1.*t833*t844*t859 - 0.13205*(-1.*t1016*t1404*t859 - 1.*t753*t844*t859) + t2491*t8972 + t2671*t9034 + t2716*t9039 - 0.183*(-1.*t2633*t9034 + t2562*t9039) - 0.5*(t2562*t9034 + t2633*t9039);
  p_output1[15]=t1785*t3697 + t833*t9136 - 0.13205*(t4555 + t753*t9136) + t2491*t9148 + t151*t2671*t9148 - 1.*t2448*t2716*t9148 - 0.183*(-1.*t2448*t2562*t9148 - 1.*t151*t2633*t9148) - 0.5*(t151*t2562*t9148 - 1.*t2448*t2633*t9148);
  p_output1[16]=t1885*t833 + t1785*t9199 + t2491*t9203 + t151*t2671*t9203 - 1.*t2448*t2716*t9203 - 0.183*(-1.*t2448*t2562*t9203 - 1.*t151*t2633*t9203) - 0.5*(t151*t2562*t9203 - 1.*t2448*t2633*t9203) - 0.13205*(t1885*t753 + t9210);
  p_output1[17]=-1.*t1016*t577*t833 + t1785*t577*t844 + t9241 + t9242 + t9246 + t9253 + t9258 + t9268;
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
  p_output1[36]=0.047*t1404*t3697 - 0.13205*t4576 - 0.047*t4051*t753 + t2491*t9278 + t151*t2671*t9278 - 1.*t2448*t2716*t9278 - 0.183*(-1.*t2448*t2562*t9278 - 1.*t151*t2633*t9278) - 0.5*(t151*t2562*t9278 - 1.*t2448*t2633*t9278);
  p_output1[37]=0.047*t1404*t9199 - 0.047*t753*t9304 + t2491*t9307 + t151*t2671*t9307 - 1.*t2448*t2716*t9307 - 0.183*(-1.*t2448*t2562*t9307 - 1.*t151*t2633*t9307) - 0.5*(t151*t2562*t9307 - 1.*t2448*t2633*t9307) - 0.13205*t9312;
  p_output1[38]=-0.047*t1016*t577*t753 + 0.047*t1404*t577*t844 + t9241 + t9242 + t9246 + t9253 + t9258 + t9268;
  p_output1[39]=-0.183*t151*t4576 + t2671*t5102 - 0.183*t2448*t577*t904 + t2716*t9336 - 0.5*(t5234 + t2633*t9336) - 0.183*(t2562*t9336 + t9357);
  p_output1[40]=-0.183*t2448*t577*t600 - 0.183*t151*t9312 + t2716*t9368 + t2671*t9374 - 0.5*(t2633*t9368 + t9377) - 0.183*(t2562*t9368 + t9381);
  p_output1[41]=0.183*t2448*t859 - 0.183*t151*t9251 + t2716*t9396 + t2671*t9400 - 0.5*(t2633*t9396 + t9403) - 0.183*(t2562*t9396 + t9408);
  p_output1[42]=-0.5*t5293 - 0.183*(-1.*t2562*t4786 + t9357) + t4786*t9417 + t5102*t9421;
  p_output1[43]=t9374*t9421 + t9417*t9435 - 0.183*(t9381 - 1.*t2562*t9435) - 0.5*(t9377 - 1.*t2633*t9435);
  p_output1[44]=t9400*t9421 + t9417*t9456 - 0.183*(t9408 - 1.*t2562*t9456) - 0.5*(t9403 - 1.*t2633*t9456);
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



void Jp_RRfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
