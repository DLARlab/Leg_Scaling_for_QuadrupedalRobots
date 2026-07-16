/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:25:47 GMT-05:00
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
  double t346;
  double t702;
  double t817;
  double t708;
  double t946;
  double t640;
  double t400;
  double t480;
  double t682;
  double t791;
  double t1034;
  double t1110;
  double t1124;
  double t1133;
  double t1313;
  double t1348;
  double t1367;
  double t1368;
  double t1451;
  double t288;
  double t1571;
  double t2248;
  double t2277;
  double t2287;
  double t2298;
  double t2364;
  double t2392;
  double t2453;
  double t2468;
  double t2470;
  double t2710;
  double t2765;
  double t2845;
  double t609;
  double t1488;
  double t1519;
  double t1741;
  double t1761;
  double t1774;
  double t2106;
  double t2533;
  double t2592;
  double t2610;
  double t2618;
  double t2625;
  double t2671;
  double t2918;
  double t2954;
  double t3082;
  double t3150;
  double t3161;
  double t3351;
  double t3359;
  double t3365;
  double t4231;
  double t4304;
  double t1534;
  double t1821;
  double t2062;
  double t3619;
  double t3622;
  double t3623;
  double t3824;
  double t3848;
  double t3879;
  double t3919;
  double t3952;
  double t3964;
  double t3995;
  double t4077;
  double t4107;
  double t4118;
  double t3371;
  double t3389;
  double t3438;
  double t4168;
  double t4175;
  double t4323;
  double t4353;
  double t4409;
  double t4486;
  double t4488;
  double t4501;
  double t2593;
  double t2637;
  double t2664;
  double t3643;
  double t3651;
  double t3658;
  double t3466;
  double t3583;
  double t3613;
  double t3066;
  double t3243;
  double t3305;
  double t3659;
  double t3661;
  double t3692;
  t346 = Cos(var1[3]);
  t702 = Cos(var1[5]);
  t817 = Sin(var1[3]);
  t708 = Sin(var1[4]);
  t946 = Sin(var1[5]);
  t640 = Cos(var1[10]);
  t400 = Cos(var1[4]);
  t480 = Sin(var1[10]);
  t682 = Cos(var1[9]);
  t791 = t346*t702*t708;
  t1034 = t817*t946;
  t1110 = t791 + t1034;
  t1124 = t682*t1110;
  t1133 = Sin(var1[9]);
  t1313 = -1.*t702*t817;
  t1348 = t346*t708*t946;
  t1367 = t1313 + t1348;
  t1368 = -1.*t1133*t1367;
  t1451 = t1124 + t1368;
  t288 = Sin(var1[11]);
  t1571 = Cos(var1[11]);
  t2248 = t702*t817*t708;
  t2277 = -1.*t346*t946;
  t2287 = t2248 + t2277;
  t2298 = t682*t2287;
  t2364 = t346*t702;
  t2392 = t817*t708*t946;
  t2453 = t2364 + t2392;
  t2468 = -1.*t1133*t2453;
  t2470 = t2298 + t2468;
  t2710 = t682*t400*t702;
  t2765 = -1.*t400*t1133*t946;
  t2845 = t2710 + t2765;
  t609 = t346*t400*t480;
  t1488 = t640*t1451;
  t1519 = t609 + t1488;
  t1741 = t640*t346*t400;
  t1761 = -1.*t480*t1451;
  t1774 = t1741 + t1761;
  t2106 = t400*t480*t817;
  t2533 = t640*t2470;
  t2592 = t2106 + t2533;
  t2610 = t640*t400*t817;
  t2618 = -1.*t480*t2470;
  t2625 = t2610 + t2618;
  t2671 = -1.*t480*t708;
  t2918 = t640*t2845;
  t2954 = t2671 + t2918;
  t3082 = -1.*t640*t708;
  t3150 = -1.*t480*t2845;
  t3161 = t3082 + t3150;
  t3351 = t1133*t1110;
  t3359 = t682*t1367;
  t3365 = t3351 + t3359;
  t4231 = -1.*t1571;
  t4304 = 1. + t4231;
  t1534 = -1.*t288*t1519;
  t1821 = t1571*t1774;
  t2062 = t1534 + t1821;
  t3619 = t1571*t1519;
  t3622 = t288*t1774;
  t3623 = t3619 + t3622;
  t3824 = -1.*t640;
  t3848 = 1. + t3824;
  t3879 = 0.183*t3848;
  t3919 = 0. + t3879;
  t3952 = -0.047*t1133;
  t3964 = 0. + t3952;
  t3995 = -1.*t682;
  t4077 = 1. + t3995;
  t4107 = 0.047*t4077;
  t4118 = 0. + t4107;
  t3371 = t1133*t2287;
  t3389 = t682*t2453;
  t3438 = t3371 + t3389;
  t4168 = 0.183*t480;
  t4175 = 0. + t4168;
  t4323 = -0.3*t4304;
  t4353 = 0.183*t288;
  t4409 = 0. + t4323 + t4353;
  t4486 = 0.183*t4304;
  t4488 = 0.3*t288;
  t4501 = 0. + t4486 + t4488;
  t2593 = -1.*t288*t2592;
  t2637 = t1571*t2625;
  t2664 = t2593 + t2637;
  t3643 = t1571*t2592;
  t3651 = t288*t2625;
  t3658 = t3643 + t3651;
  t3466 = t400*t702*t1133;
  t3583 = t682*t400*t946;
  t3613 = t3466 + t3583;
  t3066 = -1.*t288*t2954;
  t3243 = t1571*t3161;
  t3305 = t3066 + t3243;
  t3659 = t1571*t2954;
  t3661 = t288*t3161;
  t3692 = t3659 + t3661;
  p_output1[0]=t2062;
  p_output1[1]=t2664;
  p_output1[2]=t3305;
  p_output1[3]=0.;
  p_output1[4]=t3365;
  p_output1[5]=t3438;
  p_output1[6]=t3613;
  p_output1[7]=0.;
  p_output1[8]=t3623;
  p_output1[9]=t3658;
  p_output1[10]=t3692;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.183*t2062 + 0.17458*t3365 - 0.3*t3623 + t1110*t3964 + t346*t3919*t400 + t1367*t4118 + t1451*t4175 + t1519*t4409 + t1774*t4501 + var1[0];
  p_output1[13]=0. + 0.183*t2664 + 0.17458*t3438 - 0.3*t3658 + t2287*t3964 + t2453*t4118 + t2470*t4175 + t2592*t4409 + t2625*t4501 + t3919*t400*t817 + var1[1];
  p_output1[14]=0. + 0.183*t3305 + 0.17458*t3613 - 0.3*t3692 + t2845*t4175 + t2954*t4409 + t3161*t4501 + t3964*t400*t702 - 1.*t3919*t708 + t400*t4118*t946 + var1[2];
  p_output1[15]=1.;
}



void H_FL_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
