/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:21:44 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RRfoot.h"

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
  double t446;
  double t1085;
  double t1380;
  double t1224;
  double t1594;
  double t763;
  double t486;
  double t511;
  double t955;
  double t1360;
  double t1779;
  double t1830;
  double t1864;
  double t1896;
  double t1906;
  double t1925;
  double t1963;
  double t2094;
  double t2141;
  double t21;
  double t2417;
  double t2889;
  double t2972;
  double t3027;
  double t3127;
  double t3143;
  double t3154;
  double t3176;
  double t3192;
  double t3200;
  double t3596;
  double t3639;
  double t3642;
  double t761;
  double t2220;
  double t2221;
  double t2572;
  double t2685;
  double t2745;
  double t2828;
  double t3313;
  double t3325;
  double t3395;
  double t3452;
  double t3495;
  double t3591;
  double t3676;
  double t3679;
  double t3752;
  double t3780;
  double t3817;
  double t4091;
  double t4202;
  double t4273;
  double t5989;
  double t6080;
  double t2383;
  double t2794;
  double t2806;
  double t4632;
  double t4676;
  double t4727;
  double t5448;
  double t5487;
  double t5524;
  double t5561;
  double t5633;
  double t5671;
  double t5860;
  double t5868;
  double t5885;
  double t5919;
  double t4388;
  double t4448;
  double t4485;
  double t5976;
  double t5983;
  double t6179;
  double t6346;
  double t6363;
  double t6460;
  double t6469;
  double t6685;
  double t3362;
  double t3553;
  double t3582;
  double t4797;
  double t4815;
  double t4833;
  double t4525;
  double t4547;
  double t4562;
  double t3701;
  double t4014;
  double t4083;
  double t4991;
  double t5386;
  double t5420;
  t446 = Cos(var1[3]);
  t1085 = Cos(var1[5]);
  t1380 = Sin(var1[3]);
  t1224 = Sin(var1[4]);
  t1594 = Sin(var1[5]);
  t763 = Cos(var1[13]);
  t486 = Cos(var1[4]);
  t511 = Sin(var1[13]);
  t955 = Cos(var1[12]);
  t1360 = t446*t1085*t1224;
  t1779 = t1380*t1594;
  t1830 = t1360 + t1779;
  t1864 = t955*t1830;
  t1896 = Sin(var1[12]);
  t1906 = -1.*t1085*t1380;
  t1925 = t446*t1224*t1594;
  t1963 = t1906 + t1925;
  t2094 = -1.*t1896*t1963;
  t2141 = t1864 + t2094;
  t21 = Sin(var1[14]);
  t2417 = Cos(var1[14]);
  t2889 = t1085*t1380*t1224;
  t2972 = -1.*t446*t1594;
  t3027 = t2889 + t2972;
  t3127 = t955*t3027;
  t3143 = t446*t1085;
  t3154 = t1380*t1224*t1594;
  t3176 = t3143 + t3154;
  t3192 = -1.*t1896*t3176;
  t3200 = t3127 + t3192;
  t3596 = t955*t486*t1085;
  t3639 = -1.*t486*t1896*t1594;
  t3642 = t3596 + t3639;
  t761 = t446*t486*t511;
  t2220 = t763*t2141;
  t2221 = t761 + t2220;
  t2572 = t763*t446*t486;
  t2685 = -1.*t511*t2141;
  t2745 = t2572 + t2685;
  t2828 = t486*t511*t1380;
  t3313 = t763*t3200;
  t3325 = t2828 + t3313;
  t3395 = t763*t486*t1380;
  t3452 = -1.*t511*t3200;
  t3495 = t3395 + t3452;
  t3591 = -1.*t511*t1224;
  t3676 = t763*t3642;
  t3679 = t3591 + t3676;
  t3752 = -1.*t763*t1224;
  t3780 = -1.*t511*t3642;
  t3817 = t3752 + t3780;
  t4091 = t1896*t1830;
  t4202 = t955*t1963;
  t4273 = t4091 + t4202;
  t5989 = -1.*t2417;
  t6080 = 1. + t5989;
  t2383 = -1.*t21*t2221;
  t2794 = t2417*t2745;
  t2806 = t2383 + t2794;
  t4632 = t2417*t2221;
  t4676 = t21*t2745;
  t4727 = t4632 + t4676;
  t5448 = -1.*t763;
  t5487 = 1. + t5448;
  t5524 = -0.183*t5487;
  t5561 = 0. + t5524;
  t5633 = 0.047*t1896;
  t5671 = 0. + t5633;
  t5860 = -1.*t955;
  t5868 = 1. + t5860;
  t5885 = -0.047*t5868;
  t5919 = 0. + t5885;
  t4388 = t1896*t3027;
  t4448 = t955*t3176;
  t4485 = t4388 + t4448;
  t5976 = -0.183*t511;
  t5983 = 0. + t5976;
  t6179 = -0.25*t6080;
  t6346 = -0.183*t21;
  t6363 = 0. + t6179 + t6346;
  t6460 = -0.183*t6080;
  t6469 = 0.25*t21;
  t6685 = 0. + t6460 + t6469;
  t3362 = -1.*t21*t3325;
  t3553 = t2417*t3495;
  t3582 = t3362 + t3553;
  t4797 = t2417*t3325;
  t4815 = t21*t3495;
  t4833 = t4797 + t4815;
  t4525 = t486*t1085*t1896;
  t4547 = t955*t486*t1594;
  t4562 = t4525 + t4547;
  t3701 = -1.*t21*t3679;
  t4014 = t2417*t3817;
  t4083 = t3701 + t4014;
  t4991 = t2417*t3679;
  t5386 = t21*t3817;
  t5420 = t4991 + t5386;

  p_output1(0)=t2806;
  p_output1(1)=t3582;
  p_output1(2)=t4083;
  p_output1(3)=0.;
  p_output1(4)=t4273;
  p_output1(5)=t4485;
  p_output1(6)=t4562;
  p_output1(7)=0.;
  p_output1(8)=t4727;
  p_output1(9)=t4833;
  p_output1(10)=t5420;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.183*t2806 - 0.15331*t4273 - 0.5*t4727 + t446*t486*t5561 + t1830*t5671 + t1963*t5919 + t2141*t5983 + t2221*t6363 + t2745*t6685 + var1(0);
  p_output1(13)=0. - 0.183*t3582 - 0.15331*t4485 - 0.5*t4833 + t1380*t486*t5561 + t3027*t5671 + t3176*t5919 + t3200*t5983 + t3325*t6363 + t3495*t6685 + var1(1);
  p_output1(14)=0. - 0.183*t4083 - 0.15331*t4562 - 0.5*t5420 - 1.*t1224*t5561 + t1085*t486*t5671 + t1594*t486*t5919 + t3642*t5983 + t3679*t6363 + t3817*t6685 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_RRfoot(const Eigen::Matrix<double,18,1> &var1)
//void H_RRfoot(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



