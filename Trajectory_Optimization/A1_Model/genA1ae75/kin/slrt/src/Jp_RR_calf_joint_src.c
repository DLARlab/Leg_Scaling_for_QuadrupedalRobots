/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:50:52 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RR_calf_joint_src.h"

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
  double t1795;
  double t3875;
  double t3762;
  double t3777;
  double t4411;
  double t2195;
  double t3789;
  double t4551;
  double t4674;
  double t5009;
  double t5451;
  double t5696;
  double t8563;
  double t1781;
  double t10436;
  double t121;
  double t10476;
  double t10509;
  double t10521;
  double t10544;
  double t10546;
  double t10555;
  double t10559;
  double t10603;
  double t10609;
  double t10613;
  double t10650;
  double t10665;
  double t10667;
  double t591;
  double t1033;
  double t1046;
  double t1575;
  double t2713;
  double t3273;
  double t5314;
  double t5332;
  double t5356;
  double t5407;
  double t10699;
  double t10704;
  double t10705;
  double t10711;
  double t10720;
  double t10723;
  double t10440;
  double t10443;
  double t10556;
  double t10584;
  double t10596;
  double t10744;
  double t10748;
  double t10749;
  double t10619;
  double t10622;
  double t10647;
  double t10752;
  double t10756;
  double t10757;
  double t10760;
  double t10762;
  double t10764;
  double t10799;
  double t10800;
  double t10801;
  double t10808;
  double t10809;
  double t10810;
  double t10812;
  double t10813;
  double t10817;
  double t10853;
  double t10854;
  double t10856;
  double t10864;
  double t10866;
  double t10870;
  double t10876;
  double t10878;
  double t10879;
  double t10906;
  double t10908;
  double t10910;
  double t10917;
  double t10918;
  double t10919;
  double t10922;
  double t10923;
  double t10929;
  double t10953;
  double t10954;
  double t10955;
  double t10957;
  double t10958;
  double t10959;
  double t11016;
  double t11018;
  double t11020;
  double t9476;
  double t11025;
  double t11029;
  double t11089;
  double t11090;
  double t11091;
  double t11148;
  double t11151;
  double t11189;
  double t11191;
  double t11192;
  double t11195;
  double t11196;
  double t11042;
  double t11097;
  double t11099;
  double t11100;
  double t11104;
  double t11106;
  double t11108;
  double t11109;
  double t11115;
  double t11118;
  double t11123;
  double t11126;
  double t11128;
  double t11132;
  double t11133;
  double t11135;
  double t11224;
  double t11225;
  double t11226;
  double t10769;
  double t11200;
  double t11201;
  double t11246;
  double t11247;
  double t11249;
  double t11250;
  double t11252;
  double t11267;
  double t11268;
  double t11269;
  double t11271;
  double t11272;
  double t11275;
  double t10768;
  double t10773;
  double t11238;
  double t11293;
  double t11294;
  double t11295;
  double t11297;
  double t11298;
  double t11305;
  double t11306;
  double t11307;
  double t11255;
  double t11261;
  double t11323;
  double t11325;
  double t11327;
  double t11284;
  double t11289;
  t1795 = Sin(var1[3]);
  t3875 = Cos(var1[3]);
  t3762 = Cos(var1[5]);
  t3777 = Sin(var1[4]);
  t4411 = Sin(var1[5]);
  t2195 = Sin(var1[12]);
  t3789 = -1.*t3762*t1795*t3777;
  t4551 = t3875*t4411;
  t4674 = t3789 + t4551;
  t5009 = Cos(var1[12]);
  t5451 = -1.*t3875*t3762;
  t5696 = -1.*t1795*t3777*t4411;
  t8563 = t5451 + t5696;
  t1781 = Cos(var1[4]);
  t10436 = Sin(var1[13]);
  t121 = Cos(var1[13]);
  t10476 = t5009*t4674;
  t10509 = -1.*t2195*t8563;
  t10521 = t10476 + t10509;
  t10544 = Cos(var1[14]);
  t10546 = -1.*t10544;
  t10555 = 1. + t10546;
  t10559 = Sin(var1[14]);
  t10603 = -1.*t1781*t10436*t1795;
  t10609 = t121*t10521;
  t10613 = t10603 + t10609;
  t10650 = -1.*t121*t1781*t1795;
  t10665 = -1.*t10436*t10521;
  t10667 = t10650 + t10665;
  t591 = -1.*t121;
  t1033 = 1. + t591;
  t1046 = -0.183*t1033;
  t1575 = 0. + t1046;
  t2713 = 0.047*t2195;
  t3273 = 0. + t2713;
  t5314 = -1.*t5009;
  t5332 = 1. + t5314;
  t5356 = -0.047*t5332;
  t5407 = 0. + t5356;
  t10699 = t3875*t3762*t3777;
  t10704 = t1795*t4411;
  t10705 = t10699 + t10704;
  t10711 = -1.*t3762*t1795;
  t10720 = t3875*t3777*t4411;
  t10723 = t10711 + t10720;
  t10440 = -0.183*t10436;
  t10443 = 0. + t10440;
  t10556 = -0.15*t10555;
  t10584 = -0.183*t10559;
  t10596 = 0. + t10556 + t10584;
  t10744 = t5009*t10705;
  t10748 = -1.*t2195*t10723;
  t10749 = t10744 + t10748;
  t10619 = -0.183*t10555;
  t10622 = 0.15*t10559;
  t10647 = 0. + t10619 + t10622;
  t10752 = t3875*t1781*t10436;
  t10756 = t121*t10749;
  t10757 = t10752 + t10756;
  t10760 = t121*t3875*t1781;
  t10762 = -1.*t10436*t10749;
  t10764 = t10760 + t10762;
  t10799 = t5009*t3875*t1781*t3762;
  t10800 = -1.*t3875*t1781*t2195*t4411;
  t10801 = t10799 + t10800;
  t10808 = -1.*t3875*t10436*t3777;
  t10809 = t121*t10801;
  t10810 = t10808 + t10809;
  t10812 = -1.*t121*t3875*t3777;
  t10813 = -1.*t10436*t10801;
  t10817 = t10812 + t10813;
  t10853 = t5009*t1781*t3762*t1795;
  t10854 = -1.*t1781*t2195*t1795*t4411;
  t10856 = t10853 + t10854;
  t10864 = -1.*t10436*t1795*t3777;
  t10866 = t121*t10856;
  t10870 = t10864 + t10866;
  t10876 = -1.*t121*t1795*t3777;
  t10878 = -1.*t10436*t10856;
  t10879 = t10876 + t10878;
  t10906 = -1.*t5009*t3762*t3777;
  t10908 = t2195*t3777*t4411;
  t10910 = t10906 + t10908;
  t10917 = -1.*t1781*t10436;
  t10918 = t121*t10910;
  t10919 = t10917 + t10918;
  t10922 = -1.*t121*t1781;
  t10923 = -1.*t10436*t10910;
  t10929 = t10922 + t10923;
  t10953 = t3762*t1795;
  t10954 = -1.*t3875*t3777*t4411;
  t10955 = t10953 + t10954;
  t10957 = -1.*t2195*t10705;
  t10958 = t5009*t10955;
  t10959 = t10957 + t10958;
  t11016 = t3762*t1795*t3777;
  t11018 = -1.*t3875*t4411;
  t11020 = t11016 + t11018;
  t9476 = t5009*t8563;
  t11025 = -1.*t2195*t11020;
  t11029 = t11025 + t9476;
  t11089 = -1.*t1781*t3762*t2195;
  t11090 = -1.*t5009*t1781*t4411;
  t11091 = t11089 + t11090;
  t11148 = -1.*t5009*t10723;
  t11151 = t10957 + t11148;
  t11189 = t3875*t3762;
  t11191 = t1795*t3777*t4411;
  t11192 = t11189 + t11191;
  t11195 = -1.*t5009*t11192;
  t11196 = t11025 + t11195;
  t11042 = t5009*t11020;
  t11097 = t10443*t11091;
  t11099 = t121*t10596*t11091;
  t11100 = -1.*t10436*t10647*t11091;
  t11104 = t5009*t1781*t3762;
  t11106 = -1.*t1781*t2195*t4411;
  t11108 = t11104 + t11106;
  t11109 = -0.13205*t11108;
  t11115 = -1.*t10544*t10436*t11091;
  t11118 = -1.*t121*t10559*t11091;
  t11123 = t11115 + t11118;
  t11126 = -0.183*t11123;
  t11128 = t121*t10544*t11091;
  t11132 = -1.*t10436*t10559*t11091;
  t11133 = t11128 + t11132;
  t11135 = -0.15*t11133;
  t11224 = -1.*t3875*t1781*t10436;
  t11225 = -1.*t121*t10749;
  t11226 = t11224 + t11225;
  t10769 = t10544*t10764;
  t11200 = -1.*t2195*t11192;
  t11201 = t11042 + t11200;
  t11246 = -1.*t121*t11201;
  t11247 = t10603 + t11246;
  t11249 = t121*t1781*t1795;
  t11250 = -1.*t10436*t11201;
  t11252 = t11249 + t11250;
  t11267 = t10436*t3777;
  t11268 = -1.*t121*t11108;
  t11269 = t11267 + t11268;
  t11271 = -1.*t121*t3777;
  t11272 = -1.*t10436*t11108;
  t11275 = t11271 + t11272;
  t10768 = -1.*t10559*t10757;
  t10773 = t10768 + t10769;
  t11238 = -1.*t10559*t10764;
  t11293 = -0.183*t10544;
  t11294 = -0.15*t10559;
  t11295 = t11293 + t11294;
  t11297 = 0.15*t10544;
  t11298 = t11297 + t10584;
  t11305 = t1781*t10436*t1795;
  t11306 = t121*t11201;
  t11307 = t11305 + t11306;
  t11255 = t10544*t11252;
  t11261 = -1.*t10559*t11252;
  t11323 = -1.*t10436*t3777;
  t11325 = t121*t11108;
  t11327 = t11323 + t11325;
  t11284 = t10544*t11275;
  t11289 = -1.*t10559*t11275;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t10443*t10521 + t10596*t10613 + t10647*t10667 - 0.183*(-1.*t10559*t10613 + t10544*t10667) - 0.15*(t10544*t10613 + t10559*t10667) - 1.*t1575*t1781*t1795 + t3273*t4674 + t5407*t8563 - 0.13205*(t2195*t4674 + t9476);
  p_output1[10]=t10443*t10749 + t10596*t10757 + t10647*t10764 - 0.15*(t10544*t10757 + t10559*t10764) - 0.183*t10773 + t10705*t3273 + t1575*t1781*t3875 - 0.13205*(t10705*t2195 + t10723*t5009) + t10723*t5407;
  p_output1[11]=0;
  p_output1[12]=t10443*t10801 + t10596*t10810 + t10647*t10817 - 0.183*(-1.*t10559*t10810 + t10544*t10817) - 0.15*(t10544*t10810 + t10559*t10817) + t1781*t3273*t3762*t3875 - 1.*t1575*t3777*t3875 - 0.13205*(t1781*t2195*t3762*t3875 + t1781*t3875*t4411*t5009) + t1781*t3875*t4411*t5407;
  p_output1[13]=t10443*t10856 + t10596*t10870 + t10647*t10879 - 0.183*(-1.*t10559*t10870 + t10544*t10879) - 0.15*(t10544*t10870 + t10559*t10879) + t1781*t1795*t3273*t3762 - 1.*t1575*t1795*t3777 - 0.13205*(t1781*t1795*t2195*t3762 + t1781*t1795*t4411*t5009) + t1781*t1795*t4411*t5407;
  p_output1[14]=t10443*t10910 + t10596*t10919 + t10647*t10929 - 0.183*(-1.*t10559*t10919 + t10544*t10929) - 0.15*(t10544*t10919 + t10559*t10929) - 1.*t1575*t1781 - 1.*t3273*t3762*t3777 - 0.13205*(-1.*t2195*t3762*t3777 - 1.*t3777*t4411*t5009) - 1.*t3777*t4411*t5407;
  p_output1[15]=t10443*t10959 - 1.*t10436*t10647*t10959 + t10596*t10959*t121 - 0.15*(-1.*t10436*t10559*t10959 + t10544*t10959*t121) - 0.183*(-1.*t10436*t10544*t10959 - 1.*t10559*t10959*t121) - 0.13205*(t10744 + t10955*t2195) + t10955*t3273 + t10705*t5407;
  p_output1[16]=t10443*t11029 - 1.*t10436*t10647*t11029 + t10596*t11029*t121 - 0.15*(-1.*t10436*t10559*t11029 + t10544*t11029*t121) - 0.183*(-1.*t10436*t10544*t11029 - 1.*t10559*t11029*t121) + t11020*t5407 + t3273*t8563 - 0.13205*(t11042 + t2195*t8563);
  p_output1[17]=t11097 + t11099 + t11100 + t11109 + t11126 + t11135 - 1.*t1781*t3273*t4411 + t1781*t3762*t5407;
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
  p_output1[36]=-0.13205*t10749 + t10443*t11151 - 1.*t10436*t10647*t11151 + t10596*t11151*t121 - 0.15*(-1.*t10436*t10559*t11151 + t10544*t11151*t121) - 0.183*(-1.*t10436*t10544*t11151 - 1.*t10559*t11151*t121) - 0.047*t10723*t2195 + 0.047*t10705*t5009;
  p_output1[37]=t10443*t11196 - 1.*t10436*t10647*t11196 - 0.13205*t11201 + t10596*t11196*t121 - 0.15*(-1.*t10436*t10559*t11196 + t10544*t11196*t121) - 0.183*(-1.*t10436*t10544*t11196 - 1.*t10559*t11196*t121) - 0.047*t11192*t2195 + 0.047*t11020*t5009;
  p_output1[38]=t11097 + t11099 + t11100 + t11109 + t11126 + t11135 - 0.047*t1781*t2195*t4411 + 0.047*t1781*t3762*t5009;
  p_output1[39]=t10596*t10764 + t10647*t11226 - 0.15*(t10769 + t10559*t11226) - 0.183*(t10544*t11226 + t11238) - 0.183*t10749*t121 - 0.183*t10436*t1781*t3875;
  p_output1[40]=t10647*t11247 + t10596*t11252 - 0.15*(t10559*t11247 + t11255) - 0.183*(t10544*t11247 + t11261) - 0.183*t11201*t121 - 0.183*t10436*t1781*t1795;
  p_output1[41]=t10647*t11269 + t10596*t11275 - 0.15*(t10559*t11269 + t11284) - 0.183*(t10544*t11269 + t11289) - 0.183*t11108*t121 + 0.183*t10436*t3777;
  p_output1[42]=-0.15*t10773 - 0.183*(-1.*t10544*t10757 + t11238) + t10757*t11295 + t10764*t11298;
  p_output1[43]=t11252*t11298 + t11295*t11307 - 0.183*(t11261 - 1.*t10544*t11307) - 0.15*(t11255 - 1.*t10559*t11307);
  p_output1[44]=t11275*t11298 + t11295*t11327 - 0.183*(t11289 - 1.*t10544*t11327) - 0.15*(t11284 - 1.*t10559*t11327);
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



void Jp_RR_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
