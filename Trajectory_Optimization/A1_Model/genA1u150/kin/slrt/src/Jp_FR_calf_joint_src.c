/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:25:40 GMT-05:00
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
  double t520;
  double t1202;
  double t1401;
  double t1149;
  double t1469;
  double t835;
  double t1290;
  double t1498;
  double t1541;
  double t1845;
  double t1854;
  double t1884;
  double t1907;
  double t305;
  double t2064;
  double t2098;
  double t2165;
  double t294;
  double t2170;
  double t2531;
  double t2548;
  double t2613;
  double t2834;
  double t3019;
  double t3041;
  double t3046;
  double t2371;
  double t2477;
  double t2480;
  double t324;
  double t406;
  double t411;
  double t475;
  double t917;
  double t1043;
  double t1066;
  double t1071;
  double t1912;
  double t1946;
  double t3915;
  double t3928;
  double t3942;
  double t3965;
  double t4152;
  double t4247;
  double t2172;
  double t2269;
  double t4599;
  double t4680;
  double t4771;
  double t2826;
  double t2969;
  double t2989;
  double t3195;
  double t3196;
  double t3220;
  double t4888;
  double t4905;
  double t4921;
  double t4786;
  double t4803;
  double t4831;
  double t5927;
  double t5956;
  double t6027;
  double t6604;
  double t6778;
  double t6837;
  double t6252;
  double t6274;
  double t6291;
  double t7488;
  double t7497;
  double t7503;
  double t7593;
  double t7737;
  double t7802;
  double t7549;
  double t7550;
  double t7551;
  double t8048;
  double t8059;
  double t8064;
  double t8137;
  double t8148;
  double t8151;
  double t8112;
  double t8122;
  double t8133;
  double t8465;
  double t8478;
  double t8488;
  double t8568;
  double t8599;
  double t8614;
  double t8714;
  double t8722;
  double t8736;
  double t1996;
  double t8793;
  double t8817;
  double t8979;
  double t8997;
  double t9007;
  double t9131;
  double t9135;
  double t8750;
  double t9269;
  double t9272;
  double t9274;
  double t9289;
  double t9296;
  double t8946;
  double t8968;
  double t8969;
  double t8973;
  double t9029;
  double t9034;
  double t9036;
  double t9041;
  double t9042;
  double t9055;
  double t9059;
  double t9071;
  double t9090;
  double t9093;
  double t9101;
  double t4986;
  double t9458;
  double t9469;
  double t9471;
  double t9281;
  double t9286;
  double t9595;
  double t9612;
  double t9630;
  double t9641;
  double t9643;
  double t9854;
  double t9861;
  double t9866;
  double t9870;
  double t9872;
  double t9875;
  double t4998;
  double t5027;
  double t9531;
  double t9925;
  double t9931;
  double t9932;
  double t9942;
  double t9943;
  double t9657;
  double t9959;
  double t9962;
  double t9963;
  double t9785;
  double t9901;
  double t9991;
  double t9993;
  double t9998;
  double t9916;
  t520 = Sin(var1[3]);
  t1202 = Cos(var1[5]);
  t1401 = Sin(var1[4]);
  t1149 = Cos(var1[3]);
  t1469 = Sin(var1[5]);
  t835 = Cos(var1[6]);
  t1290 = -1.*t1149*t1202;
  t1498 = -1.*t520*t1401*t1469;
  t1541 = t1290 + t1498;
  t1845 = -1.*t1202*t520*t1401;
  t1854 = t1149*t1469;
  t1884 = t1845 + t1854;
  t1907 = Sin(var1[6]);
  t305 = Cos(var1[7]);
  t2064 = t835*t1884;
  t2098 = -1.*t1541*t1907;
  t2165 = t2064 + t2098;
  t294 = Cos(var1[4]);
  t2170 = Sin(var1[7]);
  t2531 = Cos(var1[8]);
  t2548 = -1.*t2531;
  t2613 = 1. + t2548;
  t2834 = Sin(var1[8]);
  t3019 = -1.*t294*t305*t520;
  t3041 = -1.*t2165*t2170;
  t3046 = t3019 + t3041;
  t2371 = t305*t2165;
  t2477 = -1.*t294*t520*t2170;
  t2480 = t2371 + t2477;
  t324 = -1.*t305;
  t406 = 1. + t324;
  t411 = 0.183*t406;
  t475 = 0. + t411;
  t917 = -1.*t835;
  t1043 = 1. + t917;
  t1066 = -0.047*t1043;
  t1071 = 0. + t1066;
  t1912 = 0.047*t1907;
  t1946 = 0. + t1912;
  t3915 = -1.*t1202*t520;
  t3928 = t1149*t1401*t1469;
  t3942 = t3915 + t3928;
  t3965 = t1149*t1202*t1401;
  t4152 = t520*t1469;
  t4247 = t3965 + t4152;
  t2172 = 0.183*t2170;
  t2269 = 0. + t2172;
  t4599 = t835*t4247;
  t4680 = -1.*t3942*t1907;
  t4771 = t4599 + t4680;
  t2826 = -0.3*t2613;
  t2969 = 0.183*t2834;
  t2989 = 0. + t2826 + t2969;
  t3195 = 0.183*t2613;
  t3196 = 0.3*t2834;
  t3220 = 0. + t3195 + t3196;
  t4888 = t1149*t294*t305;
  t4905 = -1.*t4771*t2170;
  t4921 = t4888 + t4905;
  t4786 = t305*t4771;
  t4803 = t1149*t294*t2170;
  t4831 = t4786 + t4803;
  t5927 = t1149*t294*t1202*t835;
  t5956 = -1.*t1149*t294*t1469*t1907;
  t6027 = t5927 + t5956;
  t6604 = -1.*t1149*t305*t1401;
  t6778 = -1.*t6027*t2170;
  t6837 = t6604 + t6778;
  t6252 = t305*t6027;
  t6274 = -1.*t1149*t1401*t2170;
  t6291 = t6252 + t6274;
  t7488 = t294*t1202*t835*t520;
  t7497 = -1.*t294*t520*t1469*t1907;
  t7503 = t7488 + t7497;
  t7593 = -1.*t305*t520*t1401;
  t7737 = -1.*t7503*t2170;
  t7802 = t7593 + t7737;
  t7549 = t305*t7503;
  t7550 = -1.*t520*t1401*t2170;
  t7551 = t7549 + t7550;
  t8048 = -1.*t1202*t835*t1401;
  t8059 = t1401*t1469*t1907;
  t8064 = t8048 + t8059;
  t8137 = -1.*t294*t305;
  t8148 = -1.*t8064*t2170;
  t8151 = t8137 + t8148;
  t8112 = t305*t8064;
  t8122 = -1.*t294*t2170;
  t8133 = t8112 + t8122;
  t8465 = t1202*t520;
  t8478 = -1.*t1149*t1401*t1469;
  t8488 = t8465 + t8478;
  t8568 = t835*t8488;
  t8599 = -1.*t4247*t1907;
  t8614 = t8568 + t8599;
  t8714 = t1202*t520*t1401;
  t8722 = -1.*t1149*t1469;
  t8736 = t8714 + t8722;
  t1996 = t835*t1541;
  t8793 = -1.*t8736*t1907;
  t8817 = t1996 + t8793;
  t8979 = -1.*t294*t835*t1469;
  t8997 = -1.*t294*t1202*t1907;
  t9007 = t8979 + t8997;
  t9131 = -1.*t835*t3942;
  t9135 = t9131 + t8599;
  t8750 = t835*t8736;
  t9269 = t1149*t1202;
  t9272 = t520*t1401*t1469;
  t9274 = t9269 + t9272;
  t9289 = -1.*t835*t9274;
  t9296 = t9289 + t8793;
  t8946 = t294*t1202*t835;
  t8968 = -1.*t294*t1469*t1907;
  t8969 = t8946 + t8968;
  t8973 = -0.17458*t8969;
  t9029 = t9007*t2269;
  t9034 = t305*t9007*t2989;
  t9036 = -1.*t9007*t2170*t3220;
  t9041 = -1.*t2531*t9007*t2170;
  t9042 = -1.*t305*t9007*t2834;
  t9055 = t9041 + t9042;
  t9059 = 0.183*t9055;
  t9071 = t305*t2531*t9007;
  t9090 = -1.*t9007*t2170*t2834;
  t9093 = t9071 + t9090;
  t9101 = -0.3*t9093;
  t4986 = t2531*t4921;
  t9458 = -1.*t305*t4771;
  t9469 = -1.*t1149*t294*t2170;
  t9471 = t9458 + t9469;
  t9281 = -1.*t9274*t1907;
  t9286 = t8750 + t9281;
  t9595 = t294*t305*t520;
  t9612 = -1.*t9286*t2170;
  t9630 = t9595 + t9612;
  t9641 = -1.*t305*t9286;
  t9643 = t9641 + t2477;
  t9854 = -1.*t305*t1401;
  t9861 = -1.*t8969*t2170;
  t9866 = t9854 + t9861;
  t9870 = -1.*t305*t8969;
  t9872 = t1401*t2170;
  t9875 = t9870 + t9872;
  t4998 = -1.*t4831*t2834;
  t5027 = t4986 + t4998;
  t9531 = -1.*t4921*t2834;
  t9925 = 0.183*t2531;
  t9931 = -0.3*t2834;
  t9932 = t9925 + t9931;
  t9942 = 0.3*t2531;
  t9943 = t9942 + t2969;
  t9657 = t2531*t9630;
  t9959 = t305*t9286;
  t9962 = t294*t520*t2170;
  t9963 = t9959 + t9962;
  t9785 = -1.*t9630*t2834;
  t9901 = t2531*t9866;
  t9991 = t305*t8969;
  t9993 = -1.*t1401*t2170;
  t9998 = t9991 + t9993;
  t9916 = -1.*t9866*t2834;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1071*t1541 + t1884*t1946 - 0.17458*(t1884*t1907 + t1996) + t2165*t2269 + t2480*t2989 + 0.183*(-1.*t2480*t2834 + t2531*t3046) - 0.3*(t2480*t2531 + t2834*t3046) + t3046*t3220 - 1.*t294*t475*t520;
  p_output1[10]=t1071*t3942 + t1946*t4247 + t1149*t294*t475 + t2269*t4771 + t2989*t4831 + t3220*t4921 - 0.3*(t2531*t4831 + t2834*t4921) + 0.183*t5027 - 0.17458*(t1907*t4247 + t3942*t835);
  p_output1[11]=0;
  p_output1[12]=t1071*t1149*t1469*t294 + t1149*t1202*t1946*t294 - 1.*t1149*t1401*t475 + t2269*t6027 + t2989*t6291 + t3220*t6837 + 0.183*(-1.*t2834*t6291 + t2531*t6837) - 0.3*(t2531*t6291 + t2834*t6837) - 0.17458*(t1149*t1202*t1907*t294 + t1149*t1469*t294*t835);
  p_output1[13]=t1071*t1469*t294*t520 + t1202*t1946*t294*t520 - 1.*t1401*t475*t520 + t2269*t7503 + t2989*t7551 + t3220*t7802 + 0.183*(-1.*t2834*t7551 + t2531*t7802) - 0.3*(t2531*t7551 + t2834*t7802) - 0.17458*(t1202*t1907*t294*t520 + t1469*t294*t520*t835);
  p_output1[14]=-1.*t1071*t1401*t1469 - 1.*t1202*t1401*t1946 - 1.*t294*t475 + t2269*t8064 + t2989*t8133 + t3220*t8151 + 0.183*(-1.*t2834*t8133 + t2531*t8151) - 0.3*(t2531*t8133 + t2834*t8151) - 0.17458*(-1.*t1202*t1401*t1907 - 1.*t1401*t1469*t835);
  p_output1[15]=t1071*t4247 + t1946*t8488 - 0.17458*(t4599 + t1907*t8488) + t2269*t8614 + t2989*t305*t8614 - 1.*t2170*t3220*t8614 - 0.3*(-1.*t2170*t2834*t8614 + t2531*t305*t8614) + 0.183*(-1.*t2170*t2531*t8614 - 1.*t2834*t305*t8614);
  p_output1[16]=t1541*t1946 + t1071*t8736 - 0.17458*(t1541*t1907 + t8750) + t2269*t8817 + t2989*t305*t8817 - 1.*t2170*t3220*t8817 - 0.3*(-1.*t2170*t2834*t8817 + t2531*t305*t8817) + 0.183*(-1.*t2170*t2531*t8817 - 1.*t2834*t305*t8817);
  p_output1[17]=t1071*t1202*t294 - 1.*t1469*t1946*t294 + t8973 + t9029 + t9034 + t9036 + t9059 + t9101;
  p_output1[18]=-0.047*t1907*t3942 - 0.17458*t4771 + 0.047*t4247*t835 + t2269*t9135 + t2989*t305*t9135 - 1.*t2170*t3220*t9135 - 0.3*(-1.*t2170*t2834*t9135 + t2531*t305*t9135) + 0.183*(-1.*t2170*t2531*t9135 - 1.*t2834*t305*t9135);
  p_output1[19]=0.047*t835*t8736 - 0.047*t1907*t9274 - 0.17458*t9286 + t2269*t9296 + t2989*t305*t9296 - 1.*t2170*t3220*t9296 - 0.3*(-1.*t2170*t2834*t9296 + t2531*t305*t9296) + 0.183*(-1.*t2170*t2531*t9296 - 1.*t2834*t305*t9296);
  p_output1[20]=-0.047*t1469*t1907*t294 + 0.047*t1202*t294*t835 + t8973 + t9029 + t9034 + t9036 + t9059 + t9101;
  p_output1[21]=0.183*t1149*t2170*t294 + 0.183*t305*t4771 + t2989*t4921 + t3220*t9471 - 0.3*(t4986 + t2834*t9471) + 0.183*(t2531*t9471 + t9531);
  p_output1[22]=0.183*t2170*t294*t520 + 0.183*t305*t9286 + t2989*t9630 + t3220*t9643 - 0.3*(t2834*t9643 + t9657) + 0.183*(t2531*t9643 + t9785);
  p_output1[23]=-0.183*t1401*t2170 + 0.183*t305*t8969 + t2989*t9866 + t3220*t9875 - 0.3*(t2834*t9875 + t9901) + 0.183*(t2531*t9875 + t9916);
  p_output1[24]=-0.3*t5027 + 0.183*(-1.*t2531*t4831 + t9531) + t4831*t9932 + t4921*t9943;
  p_output1[25]=t9630*t9943 + t9932*t9963 + 0.183*(t9785 - 1.*t2531*t9963) - 0.3*(t9657 - 1.*t2834*t9963);
  p_output1[26]=t9866*t9943 + t9932*t9998 + 0.183*(t9916 - 1.*t2531*t9998) - 0.3*(t9901 - 1.*t2834*t9998);
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
