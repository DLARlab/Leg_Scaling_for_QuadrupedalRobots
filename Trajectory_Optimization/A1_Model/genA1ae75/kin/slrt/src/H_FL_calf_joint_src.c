/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:50:45 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FL_calf_joint_src.h"

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
  double t1194;
  double t2203;
  double t3300;
  double t3119;
  double t3328;
  double t1823;
  double t1613;
  double t1716;
  double t2169;
  double t3265;
  double t3346;
  double t3382;
  double t3442;
  double t3505;
  double t3553;
  double t3976;
  double t4133;
  double t4165;
  double t4276;
  double t540;
  double t4947;
  double t5629;
  double t5631;
  double t5707;
  double t5710;
  double t5713;
  double t5714;
  double t5720;
  double t5723;
  double t5727;
  double t5844;
  double t5845;
  double t5882;
  double t1752;
  double t4543;
  double t4571;
  double t5104;
  double t5200;
  double t5201;
  double t5619;
  double t5741;
  double t5759;
  double t5806;
  double t5810;
  double t5811;
  double t5842;
  double t5921;
  double t5922;
  double t6041;
  double t6118;
  double t6122;
  double t6144;
  double t6149;
  double t6152;
  double t6775;
  double t6869;
  double t4668;
  double t5211;
  double t5513;
  double t6229;
  double t6230;
  double t6242;
  double t6532;
  double t6534;
  double t6606;
  double t6626;
  double t6671;
  double t6675;
  double t6722;
  double t6724;
  double t6725;
  double t6727;
  double t6208;
  double t6210;
  double t6216;
  double t6742;
  double t6761;
  double t6882;
  double t6890;
  double t6918;
  double t6947;
  double t6948;
  double t6958;
  double t5763;
  double t5831;
  double t5841;
  double t6246;
  double t6249;
  double t6443;
  double t6217;
  double t6218;
  double t6225;
  double t5967;
  double t6130;
  double t6143;
  double t6447;
  double t6450;
  double t6510;
  t1194 = Cos(var1[3]);
  t2203 = Cos(var1[5]);
  t3300 = Sin(var1[3]);
  t3119 = Sin(var1[4]);
  t3328 = Sin(var1[5]);
  t1823 = Cos(var1[10]);
  t1613 = Cos(var1[4]);
  t1716 = Sin(var1[10]);
  t2169 = Cos(var1[9]);
  t3265 = t1194*t2203*t3119;
  t3346 = t3300*t3328;
  t3382 = t3265 + t3346;
  t3442 = t2169*t3382;
  t3505 = Sin(var1[9]);
  t3553 = -1.*t2203*t3300;
  t3976 = t1194*t3119*t3328;
  t4133 = t3553 + t3976;
  t4165 = -1.*t3505*t4133;
  t4276 = t3442 + t4165;
  t540 = Sin(var1[11]);
  t4947 = Cos(var1[11]);
  t5629 = t2203*t3300*t3119;
  t5631 = -1.*t1194*t3328;
  t5707 = t5629 + t5631;
  t5710 = t2169*t5707;
  t5713 = t1194*t2203;
  t5714 = t3300*t3119*t3328;
  t5720 = t5713 + t5714;
  t5723 = -1.*t3505*t5720;
  t5727 = t5710 + t5723;
  t5844 = t2169*t1613*t2203;
  t5845 = -1.*t1613*t3505*t3328;
  t5882 = t5844 + t5845;
  t1752 = t1194*t1613*t1716;
  t4543 = t1823*t4276;
  t4571 = t1752 + t4543;
  t5104 = t1823*t1194*t1613;
  t5200 = -1.*t1716*t4276;
  t5201 = t5104 + t5200;
  t5619 = t1613*t1716*t3300;
  t5741 = t1823*t5727;
  t5759 = t5619 + t5741;
  t5806 = t1823*t1613*t3300;
  t5810 = -1.*t1716*t5727;
  t5811 = t5806 + t5810;
  t5842 = -1.*t1716*t3119;
  t5921 = t1823*t5882;
  t5922 = t5842 + t5921;
  t6041 = -1.*t1823*t3119;
  t6118 = -1.*t1716*t5882;
  t6122 = t6041 + t6118;
  t6144 = t3505*t3382;
  t6149 = t2169*t4133;
  t6152 = t6144 + t6149;
  t6775 = -1.*t4947;
  t6869 = 1. + t6775;
  t4668 = -1.*t540*t4571;
  t5211 = t4947*t5201;
  t5513 = t4668 + t5211;
  t6229 = t4947*t4571;
  t6230 = t540*t5201;
  t6242 = t6229 + t6230;
  t6532 = -1.*t1823;
  t6534 = 1. + t6532;
  t6606 = 0.183*t6534;
  t6626 = 0. + t6606;
  t6671 = -0.047*t3505;
  t6675 = 0. + t6671;
  t6722 = -1.*t2169;
  t6724 = 1. + t6722;
  t6725 = 0.047*t6724;
  t6727 = 0. + t6725;
  t6208 = t3505*t5707;
  t6210 = t2169*t5720;
  t6216 = t6208 + t6210;
  t6742 = 0.183*t1716;
  t6761 = 0. + t6742;
  t6882 = -0.15*t6869;
  t6890 = 0.183*t540;
  t6918 = 0. + t6882 + t6890;
  t6947 = 0.183*t6869;
  t6948 = 0.15*t540;
  t6958 = 0. + t6947 + t6948;
  t5763 = -1.*t540*t5759;
  t5831 = t4947*t5811;
  t5841 = t5763 + t5831;
  t6246 = t4947*t5759;
  t6249 = t540*t5811;
  t6443 = t6246 + t6249;
  t6217 = t1613*t2203*t3505;
  t6218 = t2169*t1613*t3328;
  t6225 = t6217 + t6218;
  t5967 = -1.*t540*t5922;
  t6130 = t4947*t6122;
  t6143 = t5967 + t6130;
  t6447 = t4947*t5922;
  t6450 = t540*t6122;
  t6510 = t6447 + t6450;
  p_output1[0]=t5513;
  p_output1[1]=t5841;
  p_output1[2]=t6143;
  p_output1[3]=0.;
  p_output1[4]=t6152;
  p_output1[5]=t6216;
  p_output1[6]=t6225;
  p_output1[7]=0.;
  p_output1[8]=t6242;
  p_output1[9]=t6443;
  p_output1[10]=t6510;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.183*t5513 + 0.13205*t6152 - 0.15*t6242 + t1194*t1613*t6626 + t3382*t6675 + t4133*t6727 + t4276*t6761 + t4571*t6918 + t5201*t6958 + var1[0];
  p_output1[13]=0. + 0.183*t5841 + 0.13205*t6216 - 0.15*t6443 + t1613*t3300*t6626 + t5707*t6675 + t5720*t6727 + t5727*t6761 + t5759*t6918 + t5811*t6958 + var1[1];
  p_output1[14]=0. + 0.183*t6143 + 0.13205*t6225 - 0.15*t6510 - 1.*t3119*t6626 + t1613*t2203*t6675 + t1613*t3328*t6727 + t5882*t6761 + t5922*t6918 + t6122*t6958 + var1[2];
  p_output1[15]=1.;
}



void H_FL_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
