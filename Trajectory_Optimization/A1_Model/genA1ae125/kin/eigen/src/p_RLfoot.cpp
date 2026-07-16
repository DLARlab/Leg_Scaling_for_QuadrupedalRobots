/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:04:49 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RLfoot.h"

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
static void output1(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  double t449;
  double t1837;
  double t3268;
  double t1925;
  double t3908;
  double t1427;
  double t2194;
  double t4133;
  double t4555;
  double t4645;
  double t4979;
  double t4997;
  double t5000;
  double t508;
  double t5051;
  double t172;
  double t5087;
  double t5105;
  double t5112;
  double t5123;
  double t5136;
  double t5143;
  double t5215;
  double t5334;
  double t5362;
  double t5380;
  double t5523;
  double t5528;
  double t5535;
  double t182;
  double t341;
  double t428;
  double t447;
  double t1490;
  double t1788;
  double t4648;
  double t4763;
  double t4884;
  double t4963;
  double t6093;
  double t6103;
  double t6121;
  double t6151;
  double t6161;
  double t6198;
  double t5067;
  double t5084;
  double t5146;
  double t5234;
  double t5332;
  double t6445;
  double t6489;
  double t6509;
  double t5487;
  double t5498;
  double t5512;
  double t6584;
  double t6606;
  double t6610;
  double t6708;
  double t6732;
  double t6751;
  double t7005;
  double t7009;
  double t7022;
  double t7054;
  double t7063;
  double t7065;
  double t7148;
  double t7189;
  double t7197;
  t449 = Cos(var1[3]);
  t1837 = Cos(var1[5]);
  t3268 = Sin(var1[3]);
  t1925 = Sin(var1[4]);
  t3908 = Sin(var1[5]);
  t1427 = Sin(var1[15]);
  t2194 = t449*t1837*t1925;
  t4133 = t3268*t3908;
  t4555 = t2194 + t4133;
  t4645 = Cos(var1[15]);
  t4979 = -1.*t1837*t3268;
  t4997 = t449*t1925*t3908;
  t5000 = t4979 + t4997;
  t508 = Cos(var1[4]);
  t5051 = Sin(var1[16]);
  t172 = Cos(var1[16]);
  t5087 = t4645*t4555;
  t5105 = -1.*t1427*t5000;
  t5112 = t5087 + t5105;
  t5123 = Cos(var1[17]);
  t5136 = -1.*t5123;
  t5143 = 1. + t5136;
  t5215 = Sin(var1[17]);
  t5334 = t449*t508*t5051;
  t5362 = t172*t5112;
  t5380 = t5334 + t5362;
  t5523 = t172*t449*t508;
  t5528 = -1.*t5051*t5112;
  t5535 = t5523 + t5528;
  t182 = -1.*t172;
  t341 = 1. + t182;
  t428 = -0.183*t341;
  t447 = 0. + t428;
  t1490 = -0.047*t1427;
  t1788 = 0. + t1490;
  t4648 = -1.*t4645;
  t4763 = 1. + t4648;
  t4884 = 0.047*t4763;
  t4963 = 0. + t4884;
  t6093 = t1837*t3268*t1925;
  t6103 = -1.*t449*t3908;
  t6121 = t6093 + t6103;
  t6151 = t449*t1837;
  t6161 = t3268*t1925*t3908;
  t6198 = t6151 + t6161;
  t5067 = -0.183*t5051;
  t5084 = 0. + t5067;
  t5146 = -0.25*t5143;
  t5234 = -0.183*t5215;
  t5332 = 0. + t5146 + t5234;
  t6445 = t4645*t6121;
  t6489 = -1.*t1427*t6198;
  t6509 = t6445 + t6489;
  t5487 = -0.183*t5143;
  t5498 = 0.25*t5215;
  t5512 = 0. + t5487 + t5498;
  t6584 = t508*t5051*t3268;
  t6606 = t172*t6509;
  t6610 = t6584 + t6606;
  t6708 = t172*t508*t3268;
  t6732 = -1.*t5051*t6509;
  t6751 = t6708 + t6732;
  t7005 = t4645*t508*t1837;
  t7009 = -1.*t508*t1427*t3908;
  t7022 = t7005 + t7009;
  t7054 = -1.*t5051*t1925;
  t7063 = t172*t7022;
  t7065 = t7054 + t7063;
  t7148 = -1.*t172*t1925;
  t7189 = -1.*t5051*t7022;
  t7197 = t7148 + t7189;

  p_output1(0)=0. + t1788*t4555 + t4963*t5000 + 0.13205*(t1427*t4555 + t4645*t5000) + t447*t449*t508 + t5084*t5112 + t5332*t5380 + t5512*t5535 - 0.183*(-1.*t5215*t5380 + t5123*t5535) - 0.5*(t5123*t5380 + t5215*t5535) + var1(0);
  p_output1(1)=0. + t3268*t447*t508 + t1788*t6121 + t4963*t6198 + 0.13205*(t1427*t6121 + t4645*t6198) + t5084*t6509 + t5332*t6610 + t5512*t6751 - 0.183*(-1.*t5215*t6610 + t5123*t6751) - 0.5*(t5123*t6610 + t5215*t6751) + var1(1);
  p_output1(2)=0. - 1.*t1925*t447 + t1788*t1837*t508 + t3908*t4963*t508 + 0.13205*(t1427*t1837*t508 + t3908*t4645*t508) + t5084*t7022 + t5332*t7065 + t5512*t7197 - 0.183*(-1.*t5215*t7065 + t5123*t7197) - 0.5*(t5123*t7065 + t5215*t7197) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_RLfoot(const Eigen::Matrix<double,18,1> &var1)
//void p_RLfoot(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



