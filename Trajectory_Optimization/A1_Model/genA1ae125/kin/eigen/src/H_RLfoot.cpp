/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:04:50 GMT-05:00
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
  double t593;
  double t1248;
  double t1623;
  double t1398;
  double t1634;
  double t1054;
  double t817;
  double t940;
  double t1095;
  double t1518;
  double t1759;
  double t1785;
  double t1786;
  double t1795;
  double t1800;
  double t1904;
  double t1946;
  double t2084;
  double t2098;
  double t277;
  double t2460;
  double t2800;
  double t2930;
  double t3124;
  double t3181;
  double t3324;
  double t3431;
  double t3548;
  double t3614;
  double t3644;
  double t4046;
  double t4063;
  double t4069;
  double t984;
  double t2102;
  double t2153;
  double t2561;
  double t2624;
  double t2652;
  double t2754;
  double t3687;
  double t3710;
  double t3860;
  double t3938;
  double t3944;
  double t3998;
  double t4077;
  double t4080;
  double t4093;
  double t4167;
  double t4180;
  double t4314;
  double t4379;
  double t4457;
  double t5595;
  double t5634;
  double t2191;
  double t2715;
  double t2732;
  double t4891;
  double t4944;
  double t5010;
  double t5256;
  double t5267;
  double t5271;
  double t5313;
  double t5334;
  double t5344;
  double t5362;
  double t5394;
  double t5396;
  double t5499;
  double t4527;
  double t4551;
  double t4567;
  double t5523;
  double t5545;
  double t5645;
  double t5721;
  double t5776;
  double t5977;
  double t6005;
  double t6007;
  double t3778;
  double t3966;
  double t3975;
  double t5018;
  double t5084;
  double t5085;
  double t4616;
  double t4678;
  double t4770;
  double t4088;
  double t4239;
  double t4251;
  double t5186;
  double t5202;
  double t5255;
  t593 = Cos(var1[3]);
  t1248 = Cos(var1[5]);
  t1623 = Sin(var1[3]);
  t1398 = Sin(var1[4]);
  t1634 = Sin(var1[5]);
  t1054 = Cos(var1[16]);
  t817 = Cos(var1[4]);
  t940 = Sin(var1[16]);
  t1095 = Cos(var1[15]);
  t1518 = t593*t1248*t1398;
  t1759 = t1623*t1634;
  t1785 = t1518 + t1759;
  t1786 = t1095*t1785;
  t1795 = Sin(var1[15]);
  t1800 = -1.*t1248*t1623;
  t1904 = t593*t1398*t1634;
  t1946 = t1800 + t1904;
  t2084 = -1.*t1795*t1946;
  t2098 = t1786 + t2084;
  t277 = Sin(var1[17]);
  t2460 = Cos(var1[17]);
  t2800 = t1248*t1623*t1398;
  t2930 = -1.*t593*t1634;
  t3124 = t2800 + t2930;
  t3181 = t1095*t3124;
  t3324 = t593*t1248;
  t3431 = t1623*t1398*t1634;
  t3548 = t3324 + t3431;
  t3614 = -1.*t1795*t3548;
  t3644 = t3181 + t3614;
  t4046 = t1095*t817*t1248;
  t4063 = -1.*t817*t1795*t1634;
  t4069 = t4046 + t4063;
  t984 = t593*t817*t940;
  t2102 = t1054*t2098;
  t2153 = t984 + t2102;
  t2561 = t1054*t593*t817;
  t2624 = -1.*t940*t2098;
  t2652 = t2561 + t2624;
  t2754 = t817*t940*t1623;
  t3687 = t1054*t3644;
  t3710 = t2754 + t3687;
  t3860 = t1054*t817*t1623;
  t3938 = -1.*t940*t3644;
  t3944 = t3860 + t3938;
  t3998 = -1.*t940*t1398;
  t4077 = t1054*t4069;
  t4080 = t3998 + t4077;
  t4093 = -1.*t1054*t1398;
  t4167 = -1.*t940*t4069;
  t4180 = t4093 + t4167;
  t4314 = t1795*t1785;
  t4379 = t1095*t1946;
  t4457 = t4314 + t4379;
  t5595 = -1.*t2460;
  t5634 = 1. + t5595;
  t2191 = -1.*t277*t2153;
  t2715 = t2460*t2652;
  t2732 = t2191 + t2715;
  t4891 = t2460*t2153;
  t4944 = t277*t2652;
  t5010 = t4891 + t4944;
  t5256 = -1.*t1054;
  t5267 = 1. + t5256;
  t5271 = -0.183*t5267;
  t5313 = 0. + t5271;
  t5334 = -0.047*t1795;
  t5344 = 0. + t5334;
  t5362 = -1.*t1095;
  t5394 = 1. + t5362;
  t5396 = 0.047*t5394;
  t5499 = 0. + t5396;
  t4527 = t1795*t3124;
  t4551 = t1095*t3548;
  t4567 = t4527 + t4551;
  t5523 = -0.183*t940;
  t5545 = 0. + t5523;
  t5645 = -0.25*t5634;
  t5721 = -0.183*t277;
  t5776 = 0. + t5645 + t5721;
  t5977 = -0.183*t5634;
  t6005 = 0.25*t277;
  t6007 = 0. + t5977 + t6005;
  t3778 = -1.*t277*t3710;
  t3966 = t2460*t3944;
  t3975 = t3778 + t3966;
  t5018 = t2460*t3710;
  t5084 = t277*t3944;
  t5085 = t5018 + t5084;
  t4616 = t817*t1248*t1795;
  t4678 = t1095*t817*t1634;
  t4770 = t4616 + t4678;
  t4088 = -1.*t277*t4080;
  t4239 = t2460*t4180;
  t4251 = t4088 + t4239;
  t5186 = t2460*t4080;
  t5202 = t277*t4180;
  t5255 = t5186 + t5202;

  p_output1(0)=t2732;
  p_output1(1)=t3975;
  p_output1(2)=t4251;
  p_output1(3)=0.;
  p_output1(4)=t4457;
  p_output1(5)=t4567;
  p_output1(6)=t4770;
  p_output1(7)=0.;
  p_output1(8)=t5010;
  p_output1(9)=t5085;
  p_output1(10)=t5255;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.183*t2732 + 0.13205*t4457 - 0.5*t5010 + t1785*t5344 + t1946*t5499 + t2098*t5545 + t2153*t5776 + t2652*t6007 + t5313*t593*t817 + var1(0);
  p_output1(13)=0. - 0.183*t3975 + 0.13205*t4567 - 0.5*t5085 + t3124*t5344 + t3548*t5499 + t3644*t5545 + t3710*t5776 + t3944*t6007 + t1623*t5313*t817 + var1(1);
  p_output1(14)=0. - 0.183*t4251 + 0.13205*t4770 - 0.5*t5255 - 1.*t1398*t5313 + t4069*t5545 + t4080*t5776 + t4180*t6007 + t1248*t5344*t817 + t1634*t5499*t817 + var1(2);
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



