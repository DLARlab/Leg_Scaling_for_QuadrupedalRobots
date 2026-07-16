/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:25:48 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_FL_calf_joint_src.h"

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
  double t238;
  double t916;
  double t1953;
  double t1022;
  double t2051;
  double t680;
  double t389;
  double t430;
  double t801;
  double t1053;
  double t2082;
  double t2112;
  double t2159;
  double t2301;
  double t2610;
  double t2810;
  double t2918;
  double t2943;
  double t3144;
  double t220;
  double t3521;
  double t3879;
  double t3981;
  double t4107;
  double t4138;
  double t4186;
  double t4352;
  double t4380;
  double t4410;
  double t4427;
  double t4752;
  double t4778;
  double t4792;
  double t564;
  double t3316;
  double t3380;
  double t3718;
  double t3757;
  double t3772;
  double t3872;
  double t4436;
  double t4452;
  double t4514;
  double t4566;
  double t4592;
  double t4721;
  double t4816;
  double t4825;
  double t4875;
  double t4894;
  double t4896;
  t238 = Cos(var1[3]);
  t916 = Cos(var1[5]);
  t1953 = Sin(var1[3]);
  t1022 = Sin(var1[4]);
  t2051 = Sin(var1[5]);
  t680 = Cos(var1[10]);
  t389 = Cos(var1[4]);
  t430 = Sin(var1[10]);
  t801 = Cos(var1[9]);
  t1053 = t238*t916*t1022;
  t2082 = t1953*t2051;
  t2112 = t1053 + t2082;
  t2159 = t801*t2112;
  t2301 = Sin(var1[9]);
  t2610 = -1.*t916*t1953;
  t2810 = t238*t1022*t2051;
  t2918 = t2610 + t2810;
  t2943 = -1.*t2301*t2918;
  t3144 = t2159 + t2943;
  t220 = Sin(var1[11]);
  t3521 = Cos(var1[11]);
  t3879 = t916*t1953*t1022;
  t3981 = -1.*t238*t2051;
  t4107 = t3879 + t3981;
  t4138 = t801*t4107;
  t4186 = t238*t916;
  t4352 = t1953*t1022*t2051;
  t4380 = t4186 + t4352;
  t4410 = -1.*t2301*t4380;
  t4427 = t4138 + t4410;
  t4752 = t801*t389*t916;
  t4778 = -1.*t389*t2301*t2051;
  t4792 = t4752 + t4778;
  t564 = t238*t389*t430;
  t3316 = t680*t3144;
  t3380 = t564 + t3316;
  t3718 = t680*t238*t389;
  t3757 = -1.*t430*t3144;
  t3772 = t3718 + t3757;
  t3872 = t389*t430*t1953;
  t4436 = t680*t4427;
  t4452 = t3872 + t4436;
  t4514 = t680*t389*t1953;
  t4566 = -1.*t430*t4427;
  t4592 = t4514 + t4566;
  t4721 = -1.*t430*t1022;
  t4816 = t680*t4792;
  t4825 = t4721 + t4816;
  t4875 = -1.*t680*t1022;
  t4894 = -1.*t430*t4792;
  t4896 = t4875 + t4894;
  p_output1[0]=-1.*t220*t3380 + t3521*t3772;
  p_output1[1]=-1.*t220*t4452 + t3521*t4592;
  p_output1[2]=-1.*t220*t4825 + t3521*t4896;
  p_output1[3]=t2112*t2301 + t2918*t801;
  p_output1[4]=t2301*t4107 + t4380*t801;
  p_output1[5]=t2051*t389*t801 + t2301*t389*t916;
  p_output1[6]=t3380*t3521 + t220*t3772;
  p_output1[7]=t3521*t4452 + t220*t4592;
  p_output1[8]=t3521*t4825 + t220*t4896;
}



void R_FL_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
