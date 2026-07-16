/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:21:47 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RLfoot.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE static inline        /* use standard inline */
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
static void output1(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  double t224;
  double t753;
  double t882;
  double t794;
  double t942;
  double t591;
  double t246;
  double t340;
  double t721;
  double t858;
  double t1000;
  double t1090;
  double t1143;
  double t1199;
  double t1204;
  double t1254;
  double t1285;
  double t1308;
  double t1343;
  double t202;
  double t1396;
  double t1848;
  double t2067;
  double t2103;
  double t2140;
  double t2178;
  double t2333;
  double t2339;
  double t2382;
  double t2412;
  double t3015;
  double t3048;
  double t3133;
  double t580;
  double t1356;
  double t1381;
  double t1556;
  double t1722;
  double t1739;
  double t1799;
  double t2607;
  double t2743;
  double t2886;
  double t2901;
  double t2902;
  double t2963;
  double t3171;
  double t3253;
  double t3393;
  double t3424;
  double t3475;
  double t3617;
  double t3644;
  double t3656;
  double t5434;
  double t5446;
  double t1384;
  double t1777;
  double t1780;
  double t4237;
  double t4430;
  double t4460;
  double t4788;
  double t4793;
  double t4819;
  double t4891;
  double t5010;
  double t5088;
  double t5195;
  double t5196;
  double t5229;
  double t5230;
  double t3729;
  double t3748;
  double t4171;
  double t5290;
  double t5363;
  double t5464;
  double t5473;
  double t5475;
  double t5482;
  double t5483;
  double t5488;
  double t2763;
  double t2916;
  double t2948;
  double t4492;
  double t4568;
  double t4571;
  double t4173;
  double t4204;
  double t4230;
  double t3254;
  double t3581;
  double t3597;
  double t4580;
  double t4607;
  double t4666;
  t224 = Cos(var1[3]);
  t753 = Cos(var1[5]);
  t882 = Sin(var1[3]);
  t794 = Sin(var1[4]);
  t942 = Sin(var1[5]);
  t591 = Cos(var1[16]);
  t246 = Cos(var1[4]);
  t340 = Sin(var1[16]);
  t721 = Cos(var1[15]);
  t858 = t224*t753*t794;
  t1000 = t882*t942;
  t1090 = t858 + t1000;
  t1143 = t721*t1090;
  t1199 = Sin(var1[15]);
  t1204 = -1.*t753*t882;
  t1254 = t224*t794*t942;
  t1285 = t1204 + t1254;
  t1308 = -1.*t1199*t1285;
  t1343 = t1143 + t1308;
  t202 = Sin(var1[17]);
  t1396 = Cos(var1[17]);
  t1848 = t753*t882*t794;
  t2067 = -1.*t224*t942;
  t2103 = t1848 + t2067;
  t2140 = t721*t2103;
  t2178 = t224*t753;
  t2333 = t882*t794*t942;
  t2339 = t2178 + t2333;
  t2382 = -1.*t1199*t2339;
  t2412 = t2140 + t2382;
  t3015 = t721*t246*t753;
  t3048 = -1.*t246*t1199*t942;
  t3133 = t3015 + t3048;
  t580 = t224*t246*t340;
  t1356 = t591*t1343;
  t1381 = t580 + t1356;
  t1556 = t591*t224*t246;
  t1722 = -1.*t340*t1343;
  t1739 = t1556 + t1722;
  t1799 = t246*t340*t882;
  t2607 = t591*t2412;
  t2743 = t1799 + t2607;
  t2886 = t591*t246*t882;
  t2901 = -1.*t340*t2412;
  t2902 = t2886 + t2901;
  t2963 = -1.*t340*t794;
  t3171 = t591*t3133;
  t3253 = t2963 + t3171;
  t3393 = -1.*t591*t794;
  t3424 = -1.*t340*t3133;
  t3475 = t3393 + t3424;
  t3617 = t1199*t1090;
  t3644 = t721*t1285;
  t3656 = t3617 + t3644;
  t5434 = -1.*t1396;
  t5446 = 1. + t5434;
  t1384 = -1.*t202*t1381;
  t1777 = t1396*t1739;
  t1780 = t1384 + t1777;
  t4237 = t1396*t1381;
  t4430 = t202*t1739;
  t4460 = t4237 + t4430;
  t4788 = -1.*t591;
  t4793 = 1. + t4788;
  t4819 = -0.183*t4793;
  t4891 = 0. + t4819;
  t5010 = -0.047*t1199;
  t5088 = 0. + t5010;
  t5195 = -1.*t721;
  t5196 = 1. + t5195;
  t5229 = 0.047*t5196;
  t5230 = 0. + t5229;
  t3729 = t1199*t2103;
  t3748 = t721*t2339;
  t4171 = t3729 + t3748;
  t5290 = -0.183*t340;
  t5363 = 0. + t5290;
  t5464 = -0.25*t5446;
  t5473 = -0.183*t202;
  t5475 = 0. + t5464 + t5473;
  t5482 = -0.183*t5446;
  t5483 = 0.25*t202;
  t5488 = 0. + t5482 + t5483;
  t2763 = -1.*t202*t2743;
  t2916 = t1396*t2902;
  t2948 = t2763 + t2916;
  t4492 = t1396*t2743;
  t4568 = t202*t2902;
  t4571 = t4492 + t4568;
  t4173 = t246*t753*t1199;
  t4204 = t721*t246*t942;
  t4230 = t4173 + t4204;
  t3254 = -1.*t202*t3253;
  t3581 = t1396*t3475;
  t3597 = t3254 + t3581;
  t4580 = t1396*t3253;
  t4607 = t202*t3475;
  t4666 = t4580 + t4607;

  p_output1(0)=t1780;
  p_output1(1)=t2948;
  p_output1(2)=t3597;
  p_output1(3)=0.;
  p_output1(4)=t3656;
  p_output1(5)=t4171;
  p_output1(6)=t4230;
  p_output1(7)=0.;
  p_output1(8)=t4460;
  p_output1(9)=t4571;
  p_output1(10)=t4666;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.183*t1780 + 0.15331*t3656 - 0.5*t4460 + t224*t246*t4891 + t1090*t5088 + t1285*t5230 + t1343*t5363 + t1381*t5475 + t1739*t5488 + var1(0);
  p_output1(13)=0. - 0.183*t2948 + 0.15331*t4171 - 0.5*t4571 + t2103*t5088 + t2339*t5230 + t2412*t5363 + t2743*t5475 + t2902*t5488 + t246*t4891*t882 + var1(1);
  p_output1(14)=0. - 0.183*t3597 + 0.15331*t4230 - 0.5*t4666 + t3133*t5363 + t3253*t5475 + t3475*t5488 + t246*t5088*t753 - 1.*t4891*t794 + t246*t5230*t942 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_RLfoot(const Eigen::Matrix<double,18,1> &var1)
//void H_RLfoot(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



