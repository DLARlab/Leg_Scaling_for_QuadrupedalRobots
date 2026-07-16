/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:26:08 GMT-05:00
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
  double t262;
  double t779;
  double t542;
  double t572;
  double t828;
  double t350;
  double t593;
  double t838;
  double t850;
  double t1095;
  double t1183;
  double t1197;
  double t1215;
  double t251;
  double t1383;
  double t14;
  double t1604;
  double t1637;
  double t1647;
  double t1661;
  double t1675;
  double t1680;
  double t1725;
  double t1873;
  double t1878;
  double t1899;
  double t1996;
  double t2088;
  double t2096;
  double t96;
  double t167;
  double t169;
  double t200;
  double t432;
  double t460;
  double t1097;
  double t1131;
  double t1137;
  double t1182;
  double t2283;
  double t2287;
  double t2289;
  double t2338;
  double t2362;
  double t2462;
  double t1465;
  double t1585;
  double t1687;
  double t1729;
  double t1863;
  double t2585;
  double t2586;
  double t2602;
  double t1908;
  double t1962;
  double t1973;
  double t2659;
  double t2768;
  double t2811;
  double t2957;
  double t3000;
  double t3051;
  double t3456;
  double t3493;
  double t3517;
  double t3642;
  double t3670;
  double t3741;
  double t3750;
  double t3780;
  double t3818;
  double t4264;
  double t4292;
  double t4293;
  double t4379;
  double t4404;
  double t4415;
  double t4422;
  double t4428;
  double t4521;
  double t5062;
  double t5066;
  double t5122;
  double t5163;
  double t5457;
  double t5473;
  double t5666;
  double t5682;
  double t5687;
  double t6220;
  double t6230;
  double t6333;
  double t6399;
  double t6434;
  double t6436;
  double t7011;
  double t7024;
  double t7040;
  double t1304;
  double t7124;
  double t7132;
  double t7537;
  double t7568;
  double t7620;
  double t7916;
  double t7919;
  double t8094;
  double t8102;
  double t8166;
  double t8188;
  double t8196;
  double t7223;
  double t7646;
  double t7657;
  double t7691;
  double t7712;
  double t7719;
  double t7733;
  double t7741;
  double t7766;
  double t7781;
  double t7782;
  double t7789;
  double t7807;
  double t7808;
  double t7822;
  double t7824;
  double t8337;
  double t8339;
  double t8343;
  double t3209;
  double t8206;
  double t8239;
  double t8470;
  double t8474;
  double t8486;
  double t8491;
  double t8516;
  double t8701;
  double t8710;
  double t8724;
  double t8729;
  double t8733;
  double t8736;
  double t3120;
  double t3216;
  double t8443;
  double t8815;
  double t8857;
  double t8876;
  double t8896;
  double t8918;
  double t8976;
  double t8984;
  double t8986;
  double t8524;
  double t8635;
  double t9194;
  double t9214;
  double t9217;
  double t8757;
  double t8779;
  t262 = Sin(var1[3]);
  t779 = Cos(var1[3]);
  t542 = Cos(var1[5]);
  t572 = Sin(var1[4]);
  t828 = Sin(var1[5]);
  t350 = Sin(var1[12]);
  t593 = -1.*t542*t262*t572;
  t838 = t779*t828;
  t850 = t593 + t838;
  t1095 = Cos(var1[12]);
  t1183 = -1.*t779*t542;
  t1197 = -1.*t262*t572*t828;
  t1215 = t1183 + t1197;
  t251 = Cos(var1[4]);
  t1383 = Sin(var1[13]);
  t14 = Cos(var1[13]);
  t1604 = t1095*t850;
  t1637 = -1.*t350*t1215;
  t1647 = t1604 + t1637;
  t1661 = Cos(var1[14]);
  t1675 = -1.*t1661;
  t1680 = 1. + t1675;
  t1725 = Sin(var1[14]);
  t1873 = -1.*t251*t1383*t262;
  t1878 = t14*t1647;
  t1899 = t1873 + t1878;
  t1996 = -1.*t14*t251*t262;
  t2088 = -1.*t1383*t1647;
  t2096 = t1996 + t2088;
  t96 = -1.*t14;
  t167 = 1. + t96;
  t169 = -0.183*t167;
  t200 = 0. + t169;
  t432 = 0.047*t350;
  t460 = 0. + t432;
  t1097 = -1.*t1095;
  t1131 = 1. + t1097;
  t1137 = -0.047*t1131;
  t1182 = 0. + t1137;
  t2283 = t779*t542*t572;
  t2287 = t262*t828;
  t2289 = t2283 + t2287;
  t2338 = -1.*t542*t262;
  t2362 = t779*t572*t828;
  t2462 = t2338 + t2362;
  t1465 = -0.183*t1383;
  t1585 = 0. + t1465;
  t1687 = -0.3*t1680;
  t1729 = -0.183*t1725;
  t1863 = 0. + t1687 + t1729;
  t2585 = t1095*t2289;
  t2586 = -1.*t350*t2462;
  t2602 = t2585 + t2586;
  t1908 = -0.183*t1680;
  t1962 = 0.3*t1725;
  t1973 = 0. + t1908 + t1962;
  t2659 = t779*t251*t1383;
  t2768 = t14*t2602;
  t2811 = t2659 + t2768;
  t2957 = t14*t779*t251;
  t3000 = -1.*t1383*t2602;
  t3051 = t2957 + t3000;
  t3456 = t1095*t779*t251*t542;
  t3493 = -1.*t779*t251*t350*t828;
  t3517 = t3456 + t3493;
  t3642 = -1.*t779*t1383*t572;
  t3670 = t14*t3517;
  t3741 = t3642 + t3670;
  t3750 = -1.*t14*t779*t572;
  t3780 = -1.*t1383*t3517;
  t3818 = t3750 + t3780;
  t4264 = t1095*t251*t542*t262;
  t4292 = -1.*t251*t350*t262*t828;
  t4293 = t4264 + t4292;
  t4379 = -1.*t1383*t262*t572;
  t4404 = t14*t4293;
  t4415 = t4379 + t4404;
  t4422 = -1.*t14*t262*t572;
  t4428 = -1.*t1383*t4293;
  t4521 = t4422 + t4428;
  t5062 = -1.*t1095*t542*t572;
  t5066 = t350*t572*t828;
  t5122 = t5062 + t5066;
  t5163 = -1.*t251*t1383;
  t5457 = t14*t5122;
  t5473 = t5163 + t5457;
  t5666 = -1.*t14*t251;
  t5682 = -1.*t1383*t5122;
  t5687 = t5666 + t5682;
  t6220 = t542*t262;
  t6230 = -1.*t779*t572*t828;
  t6333 = t6220 + t6230;
  t6399 = -1.*t350*t2289;
  t6434 = t1095*t6333;
  t6436 = t6399 + t6434;
  t7011 = t542*t262*t572;
  t7024 = -1.*t779*t828;
  t7040 = t7011 + t7024;
  t1304 = t1095*t1215;
  t7124 = -1.*t350*t7040;
  t7132 = t7124 + t1304;
  t7537 = -1.*t251*t542*t350;
  t7568 = -1.*t1095*t251*t828;
  t7620 = t7537 + t7568;
  t7916 = -1.*t1095*t2462;
  t7919 = t6399 + t7916;
  t8094 = t779*t542;
  t8102 = t262*t572*t828;
  t8166 = t8094 + t8102;
  t8188 = -1.*t1095*t8166;
  t8196 = t7124 + t8188;
  t7223 = t1095*t7040;
  t7646 = t1585*t7620;
  t7657 = t14*t1863*t7620;
  t7691 = -1.*t1383*t1973*t7620;
  t7712 = t1095*t251*t542;
  t7719 = -1.*t251*t350*t828;
  t7733 = t7712 + t7719;
  t7741 = -0.17458*t7733;
  t7766 = -1.*t1661*t1383*t7620;
  t7781 = -1.*t14*t1725*t7620;
  t7782 = t7766 + t7781;
  t7789 = -0.183*t7782;
  t7807 = t14*t1661*t7620;
  t7808 = -1.*t1383*t1725*t7620;
  t7822 = t7807 + t7808;
  t7824 = -0.6*t7822;
  t8337 = -1.*t779*t251*t1383;
  t8339 = -1.*t14*t2602;
  t8343 = t8337 + t8339;
  t3209 = t1661*t3051;
  t8206 = -1.*t350*t8166;
  t8239 = t7223 + t8206;
  t8470 = -1.*t14*t8239;
  t8474 = t1873 + t8470;
  t8486 = t14*t251*t262;
  t8491 = -1.*t1383*t8239;
  t8516 = t8486 + t8491;
  t8701 = t1383*t572;
  t8710 = -1.*t14*t7733;
  t8724 = t8701 + t8710;
  t8729 = -1.*t14*t572;
  t8733 = -1.*t1383*t7733;
  t8736 = t8729 + t8733;
  t3120 = -1.*t1725*t2811;
  t3216 = t3120 + t3209;
  t8443 = -1.*t1725*t3051;
  t8815 = -0.183*t1661;
  t8857 = -0.3*t1725;
  t8876 = t8815 + t8857;
  t8896 = 0.3*t1661;
  t8918 = t8896 + t1729;
  t8976 = t251*t1383*t262;
  t8984 = t14*t8239;
  t8986 = t8976 + t8984;
  t8524 = t1661*t8516;
  t8635 = -1.*t1725*t8516;
  t9194 = -1.*t1383*t572;
  t9214 = t14*t7733;
  t9217 = t9194 + t9214;
  t8757 = t1661*t8736;
  t8779 = -1.*t1725*t8736;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1182*t1215 + t1585*t1647 + t1863*t1899 + t1973*t2096 - 0.183*(-1.*t1725*t1899 + t1661*t2096) - 0.6*(t1661*t1899 + t1725*t2096) - 1.*t200*t251*t262 + t460*t850 - 0.17458*(t1304 + t350*t850);
  p_output1[10]=t1182*t2462 + t1585*t2602 + t1863*t2811 + t1973*t3051 - 0.6*(t1661*t2811 + t1725*t3051) - 0.183*t3216 - 0.17458*(t1095*t2462 + t2289*t350) + t2289*t460 + t200*t251*t779;
  p_output1[11]=0;
  p_output1[12]=t1585*t3517 + t1863*t3741 + t1973*t3818 - 0.183*(-1.*t1725*t3741 + t1661*t3818) - 0.6*(t1661*t3741 + t1725*t3818) + t251*t460*t542*t779 - 1.*t200*t572*t779 + t1182*t251*t779*t828 - 0.17458*(t251*t350*t542*t779 + t1095*t251*t779*t828);
  p_output1[13]=t1585*t4293 + t1863*t4415 + t1973*t4521 - 0.183*(-1.*t1725*t4415 + t1661*t4521) - 0.6*(t1661*t4415 + t1725*t4521) + t251*t262*t460*t542 - 1.*t200*t262*t572 + t1182*t251*t262*t828 - 0.17458*(t251*t262*t350*t542 + t1095*t251*t262*t828);
  p_output1[14]=-1.*t200*t251 + t1585*t5122 + t1863*t5473 + t1973*t5687 - 0.183*(-1.*t1725*t5473 + t1661*t5687) - 0.6*(t1661*t5473 + t1725*t5687) - 1.*t460*t542*t572 - 1.*t1182*t572*t828 - 0.17458*(-1.*t350*t542*t572 - 1.*t1095*t572*t828);
  p_output1[15]=t1182*t2289 + t460*t6333 - 0.17458*(t2585 + t350*t6333) + t1585*t6436 + t14*t1863*t6436 - 1.*t1383*t1973*t6436 - 0.6*(t14*t1661*t6436 - 1.*t1383*t1725*t6436) - 0.183*(-1.*t1383*t1661*t6436 - 1.*t14*t1725*t6436);
  p_output1[16]=t1215*t460 + t1182*t7040 + t1585*t7132 + t14*t1863*t7132 - 1.*t1383*t1973*t7132 - 0.6*(t14*t1661*t7132 - 1.*t1383*t1725*t7132) - 0.183*(-1.*t1383*t1661*t7132 - 1.*t14*t1725*t7132) - 0.17458*(t1215*t350 + t7223);
  p_output1[17]=t1182*t251*t542 + t7646 + t7657 + t7691 + t7741 + t7789 + t7824 - 1.*t251*t460*t828;
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
  p_output1[36]=0.047*t1095*t2289 - 0.17458*t2602 - 0.047*t2462*t350 + t1585*t7919 + t14*t1863*t7919 - 1.*t1383*t1973*t7919 - 0.6*(t14*t1661*t7919 - 1.*t1383*t1725*t7919) - 0.183*(-1.*t1383*t1661*t7919 - 1.*t14*t1725*t7919);
  p_output1[37]=0.047*t1095*t7040 - 0.047*t350*t8166 + t1585*t8196 + t14*t1863*t8196 - 1.*t1383*t1973*t8196 - 0.6*(t14*t1661*t8196 - 1.*t1383*t1725*t8196) - 0.183*(-1.*t1383*t1661*t8196 - 1.*t14*t1725*t8196) - 0.17458*t8239;
  p_output1[38]=0.047*t1095*t251*t542 + t7646 + t7657 + t7691 + t7741 + t7789 + t7824 - 0.047*t251*t350*t828;
  p_output1[39]=-0.183*t14*t2602 + t1863*t3051 - 0.183*t1383*t251*t779 + t1973*t8343 - 0.6*(t3209 + t1725*t8343) - 0.183*(t1661*t8343 + t8443);
  p_output1[40]=-0.183*t1383*t251*t262 - 0.183*t14*t8239 + t1973*t8474 + t1863*t8516 - 0.6*(t1725*t8474 + t8524) - 0.183*(t1661*t8474 + t8635);
  p_output1[41]=0.183*t1383*t572 - 0.183*t14*t7733 + t1973*t8724 + t1863*t8736 - 0.6*(t1725*t8724 + t8757) - 0.183*(t1661*t8724 + t8779);
  p_output1[42]=-0.6*t3216 - 0.183*(-1.*t1661*t2811 + t8443) + t2811*t8876 + t3051*t8918;
  p_output1[43]=t8516*t8918 + t8876*t8986 - 0.183*(t8635 - 1.*t1661*t8986) - 0.6*(t8524 - 1.*t1725*t8986);
  p_output1[44]=t8736*t8918 + t8876*t9217 - 0.183*(t8779 - 1.*t1661*t9217) - 0.6*(t8757 - 1.*t1725*t9217);
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
