/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:17:58 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_FL_calf_joint_src.h"

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
  double t934;
  double t1604;
  double t1484;
  double t1485;
  double t1611;
  double t1208;
  double t1555;
  double t1634;
  double t1646;
  double t1662;
  double t1782;
  double t1802;
  double t1813;
  double t741;
  double t1884;
  double t249;
  double t1901;
  double t1903;
  double t1904;
  double t1906;
  double t1917;
  double t1922;
  double t1932;
  double t1935;
  double t1941;
  double t1944;
  double t1953;
  double t1954;
  double t1955;
  double t345;
  double t407;
  double t478;
  double t727;
  double t1209;
  double t1289;
  double t1671;
  double t1718;
  double t1724;
  double t1753;
  double t2626;
  double t2927;
  double t2953;
  double t3024;
  double t3051;
  double t3143;
  double t1898;
  double t1899;
  double t1931;
  double t1933;
  double t1934;
  double t3590;
  double t3594;
  double t3615;
  double t1949;
  double t1950;
  double t1952;
  double t4120;
  double t4121;
  double t4196;
  double t4221;
  double t4234;
  double t4357;
  double t5643;
  double t5741;
  double t5786;
  double t5885;
  double t5886;
  double t5921;
  double t6077;
  double t6173;
  double t6182;
  double t7113;
  double t7203;
  double t7246;
  double t7313;
  double t7317;
  double t7363;
  double t7461;
  double t7545;
  double t7554;
  double t8313;
  double t8320;
  double t8355;
  double t8483;
  double t8509;
  double t8513;
  double t8536;
  double t8550;
  double t8587;
  double t8952;
  double t8957;
  double t8980;
  double t9046;
  double t9070;
  double t9165;
  double t9835;
  double t9844;
  double t9845;
  double t1855;
  double t9903;
  double t9909;
  double t10024;
  double t10025;
  double t10030;
  double t10066;
  double t10067;
  double t10089;
  double t10090;
  double t10091;
  double t10093;
  double t10094;
  double t9936;
  double t10033;
  double t10037;
  double t10038;
  double t10039;
  double t10041;
  double t10044;
  double t10046;
  double t10048;
  double t10054;
  double t10057;
  double t10058;
  double t10059;
  double t10060;
  double t10061;
  double t10062;
  double t10120;
  double t10121;
  double t10124;
  double t4591;
  double t10100;
  double t10102;
  double t10137;
  double t10138;
  double t10140;
  double t10141;
  double t10148;
  double t10171;
  double t10172;
  double t10173;
  double t10175;
  double t10176;
  double t10177;
  double t4517;
  double t4607;
  double t10131;
  double t10193;
  double t10194;
  double t10195;
  double t10197;
  double t10198;
  double t10207;
  double t10208;
  double t10209;
  double t10158;
  double t10165;
  double t10221;
  double t10222;
  double t10223;
  double t10180;
  double t10187;
  t934 = Sin(var1[3]);
  t1604 = Cos(var1[3]);
  t1484 = Cos(var1[5]);
  t1485 = Sin(var1[4]);
  t1611 = Sin(var1[5]);
  t1208 = Sin(var1[9]);
  t1555 = -1.*t1484*t934*t1485;
  t1634 = t1604*t1611;
  t1646 = t1555 + t1634;
  t1662 = Cos(var1[9]);
  t1782 = -1.*t1604*t1484;
  t1802 = -1.*t934*t1485*t1611;
  t1813 = t1782 + t1802;
  t741 = Cos(var1[4]);
  t1884 = Sin(var1[10]);
  t249 = Cos(var1[10]);
  t1901 = t1662*t1646;
  t1903 = -1.*t1208*t1813;
  t1904 = t1901 + t1903;
  t1906 = Cos(var1[11]);
  t1917 = -1.*t1906;
  t1922 = 1. + t1917;
  t1932 = Sin(var1[11]);
  t1935 = -1.*t741*t1884*t934;
  t1941 = t249*t1904;
  t1944 = t1935 + t1941;
  t1953 = -1.*t249*t741*t934;
  t1954 = -1.*t1884*t1904;
  t1955 = t1953 + t1954;
  t345 = -1.*t249;
  t407 = 1. + t345;
  t478 = 0.183*t407;
  t727 = 0. + t478;
  t1209 = -0.047*t1208;
  t1289 = 0. + t1209;
  t1671 = -1.*t1662;
  t1718 = 1. + t1671;
  t1724 = 0.047*t1718;
  t1753 = 0. + t1724;
  t2626 = t1604*t1484*t1485;
  t2927 = t934*t1611;
  t2953 = t2626 + t2927;
  t3024 = -1.*t1484*t934;
  t3051 = t1604*t1485*t1611;
  t3143 = t3024 + t3051;
  t1898 = 0.183*t1884;
  t1899 = 0. + t1898;
  t1931 = -0.15*t1922;
  t1933 = 0.183*t1932;
  t1934 = 0. + t1931 + t1933;
  t3590 = t1662*t2953;
  t3594 = -1.*t1208*t3143;
  t3615 = t3590 + t3594;
  t1949 = 0.183*t1922;
  t1950 = 0.15*t1932;
  t1952 = 0. + t1949 + t1950;
  t4120 = t1604*t741*t1884;
  t4121 = t249*t3615;
  t4196 = t4120 + t4121;
  t4221 = t249*t1604*t741;
  t4234 = -1.*t1884*t3615;
  t4357 = t4221 + t4234;
  t5643 = t1662*t1604*t741*t1484;
  t5741 = -1.*t1604*t741*t1208*t1611;
  t5786 = t5643 + t5741;
  t5885 = -1.*t1604*t1884*t1485;
  t5886 = t249*t5786;
  t5921 = t5885 + t5886;
  t6077 = -1.*t249*t1604*t1485;
  t6173 = -1.*t1884*t5786;
  t6182 = t6077 + t6173;
  t7113 = t1662*t741*t1484*t934;
  t7203 = -1.*t741*t1208*t934*t1611;
  t7246 = t7113 + t7203;
  t7313 = -1.*t1884*t934*t1485;
  t7317 = t249*t7246;
  t7363 = t7313 + t7317;
  t7461 = -1.*t249*t934*t1485;
  t7545 = -1.*t1884*t7246;
  t7554 = t7461 + t7545;
  t8313 = -1.*t1662*t1484*t1485;
  t8320 = t1208*t1485*t1611;
  t8355 = t8313 + t8320;
  t8483 = -1.*t741*t1884;
  t8509 = t249*t8355;
  t8513 = t8483 + t8509;
  t8536 = -1.*t249*t741;
  t8550 = -1.*t1884*t8355;
  t8587 = t8536 + t8550;
  t8952 = t1484*t934;
  t8957 = -1.*t1604*t1485*t1611;
  t8980 = t8952 + t8957;
  t9046 = -1.*t1208*t2953;
  t9070 = t1662*t8980;
  t9165 = t9046 + t9070;
  t9835 = t1484*t934*t1485;
  t9844 = -1.*t1604*t1611;
  t9845 = t9835 + t9844;
  t1855 = t1662*t1813;
  t9903 = -1.*t1208*t9845;
  t9909 = t9903 + t1855;
  t10024 = -1.*t741*t1484*t1208;
  t10025 = -1.*t1662*t741*t1611;
  t10030 = t10024 + t10025;
  t10066 = -1.*t1662*t3143;
  t10067 = t9046 + t10066;
  t10089 = t1604*t1484;
  t10090 = t934*t1485*t1611;
  t10091 = t10089 + t10090;
  t10093 = -1.*t1662*t10091;
  t10094 = t9903 + t10093;
  t9936 = t1662*t9845;
  t10033 = t1899*t10030;
  t10037 = -1.*t1884*t1952*t10030;
  t10038 = t249*t1934*t10030;
  t10039 = t1662*t741*t1484;
  t10041 = -1.*t741*t1208*t1611;
  t10044 = t10039 + t10041;
  t10046 = 0.11079*t10044;
  t10048 = -1.*t1906*t1884*t10030;
  t10054 = -1.*t249*t1932*t10030;
  t10057 = t10048 + t10054;
  t10058 = 0.183*t10057;
  t10059 = t249*t1906*t10030;
  t10060 = -1.*t1884*t1932*t10030;
  t10061 = t10059 + t10060;
  t10062 = -0.15*t10061;
  t10120 = -1.*t1604*t741*t1884;
  t10121 = -1.*t249*t3615;
  t10124 = t10120 + t10121;
  t4591 = t1906*t4357;
  t10100 = -1.*t1208*t10091;
  t10102 = t9936 + t10100;
  t10137 = -1.*t249*t10102;
  t10138 = t1935 + t10137;
  t10140 = t249*t741*t934;
  t10141 = -1.*t1884*t10102;
  t10148 = t10140 + t10141;
  t10171 = t1884*t1485;
  t10172 = -1.*t249*t10044;
  t10173 = t10171 + t10172;
  t10175 = -1.*t249*t1485;
  t10176 = -1.*t1884*t10044;
  t10177 = t10175 + t10176;
  t4517 = -1.*t1932*t4196;
  t4607 = t4517 + t4591;
  t10131 = -1.*t1932*t4357;
  t10193 = 0.183*t1906;
  t10194 = -0.15*t1932;
  t10195 = t10193 + t10194;
  t10197 = 0.15*t1906;
  t10198 = t10197 + t1933;
  t10207 = t741*t1884*t934;
  t10208 = t249*t10102;
  t10209 = t10207 + t10208;
  t10158 = t1906*t10148;
  t10165 = -1.*t1932*t10148;
  t10221 = -1.*t1884*t1485;
  t10222 = t249*t10044;
  t10223 = t10221 + t10222;
  t10180 = t1906*t10177;
  t10187 = -1.*t1932*t10177;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1289*t1646 + t1753*t1813 + 0.11079*(t1208*t1646 + t1855) + t1899*t1904 + t1934*t1944 + t1952*t1955 + 0.183*(-1.*t1932*t1944 + t1906*t1955) - 0.15*(t1906*t1944 + t1932*t1955) - 1.*t727*t741*t934;
  p_output1[10]=t1289*t2953 + t1753*t3143 + 0.11079*(t1208*t2953 + t1662*t3143) + t1899*t3615 + t1934*t4196 + t1952*t4357 - 0.15*(t1906*t4196 + t1932*t4357) + 0.183*t4607 + t1604*t727*t741;
  p_output1[11]=0;
  p_output1[12]=t1899*t5786 + t1934*t5921 + t1952*t6182 + 0.183*(-1.*t1932*t5921 + t1906*t6182) - 0.15*(t1906*t5921 + t1932*t6182) - 1.*t1485*t1604*t727 + t1289*t1484*t1604*t741 + t1604*t1611*t1753*t741 + 0.11079*(t1208*t1484*t1604*t741 + t1604*t1611*t1662*t741);
  p_output1[13]=t1899*t7246 + t1934*t7363 + t1952*t7554 + 0.183*(-1.*t1932*t7363 + t1906*t7554) - 0.15*(t1906*t7363 + t1932*t7554) - 1.*t1485*t727*t934 + t1289*t1484*t741*t934 + t1611*t1753*t741*t934 + 0.11079*(t1208*t1484*t741*t934 + t1611*t1662*t741*t934);
  p_output1[14]=-1.*t1289*t1484*t1485 + 0.11079*(-1.*t1208*t1484*t1485 - 1.*t1485*t1611*t1662) - 1.*t1485*t1611*t1753 - 1.*t727*t741 + t1899*t8355 + t1934*t8513 + t1952*t8587 + 0.183*(-1.*t1932*t8513 + t1906*t8587) - 0.15*(t1906*t8513 + t1932*t8587);
  p_output1[15]=t1753*t2953 + t1289*t8980 + 0.11079*(t3590 + t1208*t8980) + t1899*t9165 - 1.*t1884*t1952*t9165 + t1934*t249*t9165 - 0.15*(-1.*t1884*t1932*t9165 + t1906*t249*t9165) + 0.183*(-1.*t1884*t1906*t9165 - 1.*t1932*t249*t9165);
  p_output1[16]=t1289*t1813 + t1753*t9845 + t1899*t9909 - 1.*t1884*t1952*t9909 + t1934*t249*t9909 - 0.15*(-1.*t1884*t1932*t9909 + t1906*t249*t9909) + 0.183*(-1.*t1884*t1906*t9909 - 1.*t1932*t249*t9909) + 0.11079*(t1208*t1813 + t9936);
  p_output1[17]=t10033 + t10037 + t10038 + t10046 + t10058 + t10062 - 1.*t1289*t1611*t741 + t1484*t1753*t741;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=t10067*t1899 - 1.*t10067*t1884*t1952 + t10067*t1934*t249 - 0.15*(-1.*t10067*t1884*t1932 + t10067*t1906*t249) + 0.183*(-1.*t10067*t1884*t1906 - 1.*t10067*t1932*t249) - 0.047*t1662*t2953 + 0.047*t1208*t3143 + 0.11079*t3615;
  p_output1[28]=0.11079*t10102 + 0.047*t10091*t1208 + t10094*t1899 - 1.*t10094*t1884*t1952 + t10094*t1934*t249 - 0.15*(-1.*t10094*t1884*t1932 + t10094*t1906*t249) + 0.183*(-1.*t10094*t1884*t1906 - 1.*t10094*t1932*t249) - 0.047*t1662*t9845;
  p_output1[29]=t10033 + t10037 + t10038 + t10046 + t10058 + t10062 + 0.047*t1208*t1611*t741 - 0.047*t1484*t1662*t741;
  p_output1[30]=0.183*(t10131 + t10124*t1906) + t10124*t1952 + 0.183*t249*t3615 + t1934*t4357 - 0.15*(t10124*t1932 + t4591) + 0.183*t1604*t1884*t741;
  p_output1[31]=0.183*(t10165 + t10138*t1906) - 0.15*(t10158 + t10138*t1932) + t10148*t1934 + t10138*t1952 + 0.183*t10102*t249 + 0.183*t1884*t741*t934;
  p_output1[32]=-0.183*t1485*t1884 + 0.183*(t10187 + t10173*t1906) - 0.15*(t10180 + t10173*t1932) + t10177*t1934 + t10173*t1952 + 0.183*t10044*t249;
  p_output1[33]=t10195*t4196 + 0.183*(t10131 - 1.*t1906*t4196) + t10198*t4357 - 0.15*t4607;
  p_output1[34]=t10148*t10198 + t10195*t10209 + 0.183*(t10165 - 1.*t10209*t1906) - 0.15*(t10158 - 1.*t10209*t1932);
  p_output1[35]=t10177*t10198 + t10195*t10223 + 0.183*(t10187 - 1.*t10223*t1906) - 0.15*(t10180 - 1.*t10223*t1932);
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



void Jp_FL_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
