/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:03:27 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RR_calf_joint_src.h"

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
  double t673;
  double t1075;
  double t1137;
  double t1122;
  double t1151;
  double t1003;
  double t866;
  double t868;
  double t1028;
  double t1125;
  double t1170;
  double t1179;
  double t1359;
  double t1361;
  double t1367;
  double t1380;
  double t1420;
  double t1435;
  double t1446;
  double t462;
  double t1637;
  double t1754;
  double t1766;
  double t1871;
  double t1884;
  double t2099;
  double t2311;
  double t2565;
  double t2737;
  double t2782;
  double t4230;
  double t4245;
  double t4450;
  double t871;
  double t1468;
  double t1508;
  double t1646;
  double t1651;
  double t1666;
  double t1753;
  double t2790;
  double t2923;
  double t2948;
  double t3084;
  double t3126;
  double t4083;
  double t4595;
  double t4732;
  double t5056;
  double t5321;
  double t5417;
  double t5726;
  double t5752;
  double t5767;
  double t6976;
  double t6979;
  double t1515;
  double t1674;
  double t1697;
  double t6088;
  double t6457;
  double t6640;
  double t6858;
  double t6866;
  double t6917;
  double t6920;
  double t6923;
  double t6925;
  double t6928;
  double t6930;
  double t6936;
  double t6942;
  double t5791;
  double t5796;
  double t5916;
  double t6954;
  double t6962;
  double t6982;
  double t6984;
  double t6990;
  double t7017;
  double t7019;
  double t7020;
  double t2929;
  double t3558;
  double t3661;
  double t6698;
  double t6739;
  double t6741;
  double t5924;
  double t5932;
  double t5960;
  double t4947;
  double t5645;
  double t5714;
  double t6833;
  double t6845;
  double t6848;
  t673 = Cos(var1[3]);
  t1075 = Cos(var1[5]);
  t1137 = Sin(var1[3]);
  t1122 = Sin(var1[4]);
  t1151 = Sin(var1[5]);
  t1003 = Cos(var1[13]);
  t866 = Cos(var1[4]);
  t868 = Sin(var1[13]);
  t1028 = Cos(var1[12]);
  t1125 = t673*t1075*t1122;
  t1170 = t1137*t1151;
  t1179 = t1125 + t1170;
  t1359 = t1028*t1179;
  t1361 = Sin(var1[12]);
  t1367 = -1.*t1075*t1137;
  t1380 = t673*t1122*t1151;
  t1420 = t1367 + t1380;
  t1435 = -1.*t1361*t1420;
  t1446 = t1359 + t1435;
  t462 = Sin(var1[14]);
  t1637 = Cos(var1[14]);
  t1754 = t1075*t1137*t1122;
  t1766 = -1.*t673*t1151;
  t1871 = t1754 + t1766;
  t1884 = t1028*t1871;
  t2099 = t673*t1075;
  t2311 = t1137*t1122*t1151;
  t2565 = t2099 + t2311;
  t2737 = -1.*t1361*t2565;
  t2782 = t1884 + t2737;
  t4230 = t1028*t866*t1075;
  t4245 = -1.*t866*t1361*t1151;
  t4450 = t4230 + t4245;
  t871 = t673*t866*t868;
  t1468 = t1003*t1446;
  t1508 = t871 + t1468;
  t1646 = t1003*t673*t866;
  t1651 = -1.*t868*t1446;
  t1666 = t1646 + t1651;
  t1753 = t866*t868*t1137;
  t2790 = t1003*t2782;
  t2923 = t1753 + t2790;
  t2948 = t1003*t866*t1137;
  t3084 = -1.*t868*t2782;
  t3126 = t2948 + t3084;
  t4083 = -1.*t868*t1122;
  t4595 = t1003*t4450;
  t4732 = t4083 + t4595;
  t5056 = -1.*t1003*t1122;
  t5321 = -1.*t868*t4450;
  t5417 = t5056 + t5321;
  t5726 = t1361*t1179;
  t5752 = t1028*t1420;
  t5767 = t5726 + t5752;
  t6976 = -1.*t1637;
  t6979 = 1. + t6976;
  t1515 = -1.*t462*t1508;
  t1674 = t1637*t1666;
  t1697 = t1515 + t1674;
  t6088 = t1637*t1508;
  t6457 = t462*t1666;
  t6640 = t6088 + t6457;
  t6858 = -1.*t1003;
  t6866 = 1. + t6858;
  t6917 = -0.183*t6866;
  t6920 = 0. + t6917;
  t6923 = 0.047*t1361;
  t6925 = 0. + t6923;
  t6928 = -1.*t1028;
  t6930 = 1. + t6928;
  t6936 = -0.047*t6930;
  t6942 = 0. + t6936;
  t5791 = t1361*t1871;
  t5796 = t1028*t2565;
  t5916 = t5791 + t5796;
  t6954 = -0.183*t868;
  t6962 = 0. + t6954;
  t6982 = -0.25*t6979;
  t6984 = -0.183*t462;
  t6990 = 0. + t6982 + t6984;
  t7017 = -0.183*t6979;
  t7019 = 0.25*t462;
  t7020 = 0. + t7017 + t7019;
  t2929 = -1.*t462*t2923;
  t3558 = t1637*t3126;
  t3661 = t2929 + t3558;
  t6698 = t1637*t2923;
  t6739 = t462*t3126;
  t6741 = t6698 + t6739;
  t5924 = t866*t1075*t1361;
  t5932 = t1028*t866*t1151;
  t5960 = t5924 + t5932;
  t4947 = -1.*t462*t4732;
  t5645 = t1637*t5417;
  t5714 = t4947 + t5645;
  t6833 = t1637*t4732;
  t6845 = t462*t5417;
  t6848 = t6833 + t6845;
  p_output1[0]=t1697;
  p_output1[1]=t3661;
  p_output1[2]=t5714;
  p_output1[3]=0.;
  p_output1[4]=t5767;
  p_output1[5]=t5916;
  p_output1[6]=t5960;
  p_output1[7]=0.;
  p_output1[8]=t6640;
  p_output1[9]=t6741;
  p_output1[10]=t6848;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.183*t1697 - 0.13205*t5767 - 0.25*t6640 + t1179*t6925 + t1420*t6942 + t1446*t6962 + t1508*t6990 + t1666*t7020 + t673*t6920*t866 + var1[0];
  p_output1[13]=0. - 0.183*t3661 - 0.13205*t5916 - 0.25*t6741 + t1871*t6925 + t2565*t6942 + t2782*t6962 + t2923*t6990 + t3126*t7020 + t1137*t6920*t866 + var1[1];
  p_output1[14]=0. - 0.183*t5714 - 0.13205*t5960 - 0.25*t6848 - 1.*t1122*t6920 + t4450*t6962 + t4732*t6990 + t5417*t7020 + t1075*t6925*t866 + t1151*t6942*t866 + var1[2];
  p_output1[15]=1.;
}



void H_RR_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
