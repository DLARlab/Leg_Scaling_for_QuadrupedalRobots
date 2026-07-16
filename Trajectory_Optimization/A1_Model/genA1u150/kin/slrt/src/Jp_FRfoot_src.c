/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:26:03 GMT-05:00
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
  double t659;
  double t1165;
  double t1380;
  double t1085;
  double t1388;
  double t738;
  double t1184;
  double t1421;
  double t1463;
  double t1471;
  double t1511;
  double t1516;
  double t1525;
  double t73;
  double t2277;
  double t2392;
  double t2650;
  double t18;
  double t2747;
  double t3069;
  double t3187;
  double t3245;
  double t3315;
  double t3585;
  double t3587;
  double t3626;
  double t2896;
  double t2930;
  double t3064;
  double t198;
  double t217;
  double t533;
  double t534;
  double t740;
  double t766;
  double t780;
  double t943;
  double t1688;
  double t1874;
  double t4677;
  double t4726;
  double t4953;
  double t5118;
  double t5275;
  double t5313;
  double t2859;
  double t2865;
  double t5619;
  double t5631;
  double t5683;
  double t3307;
  double t3393;
  double t3398;
  double t3817;
  double t3860;
  double t3861;
  double t5900;
  double t5953;
  double t5964;
  double t5719;
  double t5796;
  double t5806;
  double t6314;
  double t6315;
  double t6341;
  double t6435;
  double t6454;
  double t6468;
  double t6390;
  double t6401;
  double t6415;
  double t7140;
  double t7167;
  double t7176;
  double t7349;
  double t7384;
  double t7409;
  double t7289;
  double t7290;
  double t7317;
  double t7648;
  double t7650;
  double t7653;
  double t7720;
  double t7739;
  double t7780;
  double t7674;
  double t7680;
  double t7697;
  double t7895;
  double t7924;
  double t7967;
  double t8025;
  double t8033;
  double t8036;
  double t8230;
  double t8231;
  double t8233;
  double t1906;
  double t8305;
  double t8310;
  double t8625;
  double t8658;
  double t8661;
  double t8894;
  double t8898;
  double t8270;
  double t9089;
  double t9104;
  double t9140;
  double t9195;
  double t9207;
  double t8613;
  double t8620;
  double t8621;
  double t8622;
  double t8672;
  double t8713;
  double t8715;
  double t8738;
  double t8740;
  double t8776;
  double t8781;
  double t8806;
  double t8824;
  double t8828;
  double t8837;
  double t5979;
  double t9511;
  double t9513;
  double t9527;
  double t9165;
  double t9171;
  double t9583;
  double t9598;
  double t9650;
  double t9678;
  double t9688;
  double t9762;
  double t9772;
  double t9799;
  double t9823;
  double t9834;
  double t9837;
  double t5984;
  double t6002;
  double t9569;
  double t9888;
  double t9891;
  double t9897;
  double t9918;
  double t9926;
  double t9698;
  double t9968;
  double t9975;
  double t9979;
  double t9737;
  double t9842;
  double t10020;
  double t10030;
  double t10034;
  double t9862;
  t659 = Sin(var1[3]);
  t1165 = Cos(var1[5]);
  t1380 = Sin(var1[4]);
  t1085 = Cos(var1[3]);
  t1388 = Sin(var1[5]);
  t738 = Cos(var1[6]);
  t1184 = -1.*t1085*t1165;
  t1421 = -1.*t659*t1380*t1388;
  t1463 = t1184 + t1421;
  t1471 = -1.*t1165*t659*t1380;
  t1511 = t1085*t1388;
  t1516 = t1471 + t1511;
  t1525 = Sin(var1[6]);
  t73 = Cos(var1[7]);
  t2277 = t738*t1516;
  t2392 = -1.*t1463*t1525;
  t2650 = t2277 + t2392;
  t18 = Cos(var1[4]);
  t2747 = Sin(var1[7]);
  t3069 = Cos(var1[8]);
  t3187 = -1.*t3069;
  t3245 = 1. + t3187;
  t3315 = Sin(var1[8]);
  t3585 = -1.*t18*t73*t659;
  t3587 = -1.*t2650*t2747;
  t3626 = t3585 + t3587;
  t2896 = t73*t2650;
  t2930 = -1.*t18*t659*t2747;
  t3064 = t2896 + t2930;
  t198 = -1.*t73;
  t217 = 1. + t198;
  t533 = 0.183*t217;
  t534 = 0. + t533;
  t740 = -1.*t738;
  t766 = 1. + t740;
  t780 = -0.047*t766;
  t943 = 0. + t780;
  t1688 = 0.047*t1525;
  t1874 = 0. + t1688;
  t4677 = -1.*t1165*t659;
  t4726 = t1085*t1380*t1388;
  t4953 = t4677 + t4726;
  t5118 = t1085*t1165*t1380;
  t5275 = t659*t1388;
  t5313 = t5118 + t5275;
  t2859 = 0.183*t2747;
  t2865 = 0. + t2859;
  t5619 = t738*t5313;
  t5631 = -1.*t4953*t1525;
  t5683 = t5619 + t5631;
  t3307 = -0.3*t3245;
  t3393 = 0.183*t3315;
  t3398 = 0. + t3307 + t3393;
  t3817 = 0.183*t3245;
  t3860 = 0.3*t3315;
  t3861 = 0. + t3817 + t3860;
  t5900 = t1085*t18*t73;
  t5953 = -1.*t5683*t2747;
  t5964 = t5900 + t5953;
  t5719 = t73*t5683;
  t5796 = t1085*t18*t2747;
  t5806 = t5719 + t5796;
  t6314 = t1085*t18*t1165*t738;
  t6315 = -1.*t1085*t18*t1388*t1525;
  t6341 = t6314 + t6315;
  t6435 = -1.*t1085*t73*t1380;
  t6454 = -1.*t6341*t2747;
  t6468 = t6435 + t6454;
  t6390 = t73*t6341;
  t6401 = -1.*t1085*t1380*t2747;
  t6415 = t6390 + t6401;
  t7140 = t18*t1165*t738*t659;
  t7167 = -1.*t18*t659*t1388*t1525;
  t7176 = t7140 + t7167;
  t7349 = -1.*t73*t659*t1380;
  t7384 = -1.*t7176*t2747;
  t7409 = t7349 + t7384;
  t7289 = t73*t7176;
  t7290 = -1.*t659*t1380*t2747;
  t7317 = t7289 + t7290;
  t7648 = -1.*t1165*t738*t1380;
  t7650 = t1380*t1388*t1525;
  t7653 = t7648 + t7650;
  t7720 = -1.*t18*t73;
  t7739 = -1.*t7653*t2747;
  t7780 = t7720 + t7739;
  t7674 = t73*t7653;
  t7680 = -1.*t18*t2747;
  t7697 = t7674 + t7680;
  t7895 = t1165*t659;
  t7924 = -1.*t1085*t1380*t1388;
  t7967 = t7895 + t7924;
  t8025 = t738*t7967;
  t8033 = -1.*t5313*t1525;
  t8036 = t8025 + t8033;
  t8230 = t1165*t659*t1380;
  t8231 = -1.*t1085*t1388;
  t8233 = t8230 + t8231;
  t1906 = t738*t1463;
  t8305 = -1.*t8233*t1525;
  t8310 = t1906 + t8305;
  t8625 = -1.*t18*t738*t1388;
  t8658 = -1.*t18*t1165*t1525;
  t8661 = t8625 + t8658;
  t8894 = -1.*t738*t4953;
  t8898 = t8894 + t8033;
  t8270 = t738*t8233;
  t9089 = t1085*t1165;
  t9104 = t659*t1380*t1388;
  t9140 = t9089 + t9104;
  t9195 = -1.*t738*t9140;
  t9207 = t9195 + t8305;
  t8613 = t18*t1165*t738;
  t8620 = -1.*t18*t1388*t1525;
  t8621 = t8613 + t8620;
  t8622 = -0.17458*t8621;
  t8672 = t8661*t2865;
  t8713 = t73*t8661*t3398;
  t8715 = -1.*t8661*t2747*t3861;
  t8738 = -1.*t3069*t8661*t2747;
  t8740 = -1.*t73*t8661*t3315;
  t8776 = t8738 + t8740;
  t8781 = 0.183*t8776;
  t8806 = t73*t3069*t8661;
  t8824 = -1.*t8661*t2747*t3315;
  t8828 = t8806 + t8824;
  t8837 = -0.6*t8828;
  t5979 = t3069*t5964;
  t9511 = -1.*t73*t5683;
  t9513 = -1.*t1085*t18*t2747;
  t9527 = t9511 + t9513;
  t9165 = -1.*t9140*t1525;
  t9171 = t8270 + t9165;
  t9583 = t18*t73*t659;
  t9598 = -1.*t9171*t2747;
  t9650 = t9583 + t9598;
  t9678 = -1.*t73*t9171;
  t9688 = t9678 + t2930;
  t9762 = -1.*t73*t1380;
  t9772 = -1.*t8621*t2747;
  t9799 = t9762 + t9772;
  t9823 = -1.*t73*t8621;
  t9834 = t1380*t2747;
  t9837 = t9823 + t9834;
  t5984 = -1.*t5806*t3315;
  t6002 = t5979 + t5984;
  t9569 = -1.*t5964*t3315;
  t9888 = 0.183*t3069;
  t9891 = -0.3*t3315;
  t9897 = t9888 + t9891;
  t9918 = 0.3*t3069;
  t9926 = t9918 + t3393;
  t9698 = t3069*t9650;
  t9968 = t73*t9171;
  t9975 = t18*t659*t2747;
  t9979 = t9968 + t9975;
  t9737 = -1.*t9650*t3315;
  t9842 = t3069*t9799;
  t10020 = t73*t8621;
  t10030 = -1.*t1380*t2747;
  t10034 = t10020 + t10030;
  t9862 = -1.*t9799*t3315;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1516*t1874 - 0.17458*(t1516*t1525 + t1906) + t2650*t2865 + t3064*t3398 + 0.183*(-1.*t3064*t3315 + t3069*t3626) - 0.6*(t3064*t3069 + t3315*t3626) + t3626*t3861 - 1.*t18*t534*t659 + t1463*t943;
  p_output1[10]=t1874*t5313 + t1085*t18*t534 + t2865*t5683 + t3398*t5806 + t3861*t5964 - 0.6*(t3069*t5806 + t3315*t5964) + 0.183*t6002 - 0.17458*(t1525*t5313 + t4953*t738) + t4953*t943;
  p_output1[11]=0;
  p_output1[12]=t1085*t1165*t18*t1874 - 1.*t1085*t1380*t534 + t2865*t6341 + t3398*t6415 + t3861*t6468 + 0.183*(-1.*t3315*t6415 + t3069*t6468) - 0.6*(t3069*t6415 + t3315*t6468) - 0.17458*(t1085*t1165*t1525*t18 + t1085*t1388*t18*t738) + t1085*t1388*t18*t943;
  p_output1[13]=t1165*t18*t1874*t659 - 1.*t1380*t534*t659 + t2865*t7176 + t3398*t7317 - 0.17458*(t1165*t1525*t18*t659 + t1388*t18*t659*t738) + t3861*t7409 + 0.183*(-1.*t3315*t7317 + t3069*t7409) - 0.6*(t3069*t7317 + t3315*t7409) + t1388*t18*t659*t943;
  p_output1[14]=-1.*t1165*t1380*t1874 - 1.*t18*t534 - 0.17458*(-1.*t1165*t1380*t1525 - 1.*t1380*t1388*t738) + t2865*t7653 + t3398*t7697 + t3861*t7780 + 0.183*(-1.*t3315*t7697 + t3069*t7780) - 0.6*(t3069*t7697 + t3315*t7780) - 1.*t1380*t1388*t943;
  p_output1[15]=t1874*t7967 - 0.17458*(t5619 + t1525*t7967) + t2865*t8036 - 1.*t2747*t3861*t8036 + t3398*t73*t8036 - 0.6*(-1.*t2747*t3315*t8036 + t3069*t73*t8036) + 0.183*(-1.*t2747*t3069*t8036 - 1.*t3315*t73*t8036) + t5313*t943;
  p_output1[16]=t1463*t1874 - 0.17458*(t1463*t1525 + t8270) + t2865*t8310 - 1.*t2747*t3861*t8310 + t3398*t73*t8310 - 0.6*(-1.*t2747*t3315*t8310 + t3069*t73*t8310) + 0.183*(-1.*t2747*t3069*t8310 - 1.*t3315*t73*t8310) + t8233*t943;
  p_output1[17]=-1.*t1388*t18*t1874 + t8622 + t8672 + t8713 + t8715 + t8781 + t8837 + t1165*t18*t943;
  p_output1[18]=-0.047*t1525*t4953 - 0.17458*t5683 + 0.047*t5313*t738 + t2865*t8898 - 1.*t2747*t3861*t8898 + t3398*t73*t8898 - 0.6*(-1.*t2747*t3315*t8898 + t3069*t73*t8898) + 0.183*(-1.*t2747*t3069*t8898 - 1.*t3315*t73*t8898);
  p_output1[19]=0.047*t738*t8233 - 0.047*t1525*t9140 - 0.17458*t9171 + t2865*t9207 - 1.*t2747*t3861*t9207 + t3398*t73*t9207 - 0.6*(-1.*t2747*t3315*t9207 + t3069*t73*t9207) + 0.183*(-1.*t2747*t3069*t9207 - 1.*t3315*t73*t9207);
  p_output1[20]=-0.047*t1388*t1525*t18 + 0.047*t1165*t18*t738 + t8622 + t8672 + t8713 + t8715 + t8781 + t8837;
  p_output1[21]=0.183*t1085*t18*t2747 + t3398*t5964 + 0.183*t5683*t73 + t3861*t9527 - 0.6*(t5979 + t3315*t9527) + 0.183*(t3069*t9527 + t9569);
  p_output1[22]=0.183*t18*t2747*t659 + 0.183*t73*t9171 + t3398*t9650 + t3861*t9688 - 0.6*(t3315*t9688 + t9698) + 0.183*(t3069*t9688 + t9737);
  p_output1[23]=-0.183*t1380*t2747 + 0.183*t73*t8621 + t3398*t9799 + t3861*t9837 - 0.6*(t3315*t9837 + t9842) + 0.183*(t3069*t9837 + t9862);
  p_output1[24]=-0.6*t6002 + 0.183*(-1.*t3069*t5806 + t9569) + t5806*t9897 + t5964*t9926;
  p_output1[25]=t9650*t9926 + t9897*t9979 + 0.183*(t9737 - 1.*t3069*t9979) - 0.6*(t9698 - 1.*t3315*t9979);
  p_output1[26]=-0.6*(-1.*t10034*t3315 + t9842) + 0.183*(-1.*t10034*t3069 + t9862) + t10034*t9897 + t9799*t9926;
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
