/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:50:36 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FR_calf_joint_src.h"

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
  double t4035;
  double t8410;
  double t8431;
  double t8424;
  double t8432;
  double t8309;
  double t8428;
  double t8534;
  double t8536;
  double t8539;
  double t8608;
  double t8613;
  double t8618;
  double t8057;
  double t8113;
  double t8648;
  double t8662;
  double t8681;
  double t8697;
  double t8738;
  double t8743;
  double t8750;
  double t8756;
  double t8714;
  double t8715;
  double t8726;
  double t8774;
  double t8775;
  double t8777;
  double t8162;
  double t8184;
  double t8236;
  double t8285;
  double t8311;
  double t8323;
  double t8326;
  double t8337;
  double t8622;
  double t8623;
  double t8867;
  double t8884;
  double t8889;
  double t8895;
  double t8899;
  double t8900;
  double t8701;
  double t8704;
  double t8961;
  double t8963;
  double t8965;
  double t8751;
  double t8758;
  double t8761;
  double t8785;
  double t8789;
  double t8807;
  double t8971;
  double t8975;
  double t8980;
  double t8990;
  double t8992;
  double t9002;
  double t9053;
  double t9057;
  double t9064;
  double t9070;
  double t9071;
  double t9079;
  double t9082;
  double t9084;
  double t9086;
  t4035 = Cos(var1[3]);
  t8410 = Cos(var1[5]);
  t8431 = Sin(var1[4]);
  t8424 = Sin(var1[3]);
  t8432 = Sin(var1[5]);
  t8309 = Cos(var1[6]);
  t8428 = -1.*t8410*t8424;
  t8534 = t4035*t8431*t8432;
  t8536 = t8428 + t8534;
  t8539 = t4035*t8410*t8431;
  t8608 = t8424*t8432;
  t8613 = t8539 + t8608;
  t8618 = Sin(var1[6]);
  t8057 = Cos(var1[4]);
  t8113 = Cos(var1[7]);
  t8648 = t8309*t8613;
  t8662 = -1.*t8536*t8618;
  t8681 = t8648 + t8662;
  t8697 = Sin(var1[7]);
  t8738 = Cos(var1[8]);
  t8743 = -1.*t8738;
  t8750 = 1. + t8743;
  t8756 = Sin(var1[8]);
  t8714 = t4035*t8057*t8113;
  t8715 = -1.*t8681*t8697;
  t8726 = t8714 + t8715;
  t8774 = t8113*t8681;
  t8775 = t4035*t8057*t8697;
  t8777 = t8774 + t8775;
  t8162 = -1.*t8113;
  t8184 = 1. + t8162;
  t8236 = 0.183*t8184;
  t8285 = 0. + t8236;
  t8311 = -1.*t8309;
  t8323 = 1. + t8311;
  t8326 = -0.047*t8323;
  t8337 = 0. + t8326;
  t8622 = 0.047*t8618;
  t8623 = 0. + t8622;
  t8867 = t4035*t8410;
  t8884 = t8424*t8431*t8432;
  t8889 = t8867 + t8884;
  t8895 = t8410*t8424*t8431;
  t8899 = -1.*t4035*t8432;
  t8900 = t8895 + t8899;
  t8701 = 0.183*t8697;
  t8704 = 0. + t8701;
  t8961 = t8309*t8900;
  t8963 = -1.*t8889*t8618;
  t8965 = t8961 + t8963;
  t8751 = 0.183*t8750;
  t8758 = 0.15*t8756;
  t8761 = 0. + t8751 + t8758;
  t8785 = -0.15*t8750;
  t8789 = 0.183*t8756;
  t8807 = 0. + t8785 + t8789;
  t8971 = t8057*t8113*t8424;
  t8975 = -1.*t8965*t8697;
  t8980 = t8971 + t8975;
  t8990 = t8113*t8965;
  t8992 = t8057*t8424*t8697;
  t9002 = t8990 + t8992;
  t9053 = t8057*t8410*t8309;
  t9057 = -1.*t8057*t8432*t8618;
  t9064 = t9053 + t9057;
  t9070 = -1.*t8113*t8431;
  t9071 = -1.*t9064*t8697;
  t9079 = t9070 + t9071;
  t9082 = t8113*t9064;
  t9084 = -1.*t8431*t8697;
  t9086 = t9082 + t9084;
  p_output1[0]=0. + t4035*t8057*t8285 + t8337*t8536 - 0.13205*(t8309*t8536 + t8613*t8618) + t8613*t8623 + t8681*t8704 + t8726*t8761 - 0.15*(t8726*t8756 + t8738*t8777) + 0.183*(t8726*t8738 - 1.*t8756*t8777) + t8777*t8807 + var1[0];
  p_output1[1]=0. + t8057*t8285*t8424 + t8337*t8889 + t8623*t8900 - 0.13205*(t8309*t8889 + t8618*t8900) + t8704*t8965 + t8761*t8980 + t8807*t9002 - 0.15*(t8756*t8980 + t8738*t9002) + 0.183*(t8738*t8980 - 1.*t8756*t9002) + var1[1];
  p_output1[2]=0. - 1.*t8285*t8431 + t8057*t8337*t8432 - 0.13205*(t8057*t8309*t8432 + t8057*t8410*t8618) + t8057*t8410*t8623 + t8704*t9064 + t8761*t9079 + t8807*t9086 - 0.15*(t8756*t9079 + t8738*t9086) + 0.183*(t8738*t9079 - 1.*t8756*t9086) + var1[2];
}



void p_FR_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
