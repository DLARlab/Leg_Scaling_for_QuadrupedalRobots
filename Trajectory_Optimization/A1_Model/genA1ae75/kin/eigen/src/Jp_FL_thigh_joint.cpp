/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:51:39 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_FL_thigh_joint.h"

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
static void output1(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  double t867;
  double t1477;
  double t1254;
  double t1319;
  double t1652;
  double t927;
  double t1420;
  double t1655;
  double t1672;
  double t1732;
  double t1906;
  double t1926;
  double t2012;
  double t423;
  double t705;
  double t3388;
  double t4236;
  double t4345;
  double t4451;
  double t448;
  double t475;
  double t525;
  double t609;
  double t1064;
  double t1153;
  double t1767;
  double t1770;
  double t1802;
  double t1851;
  double t5410;
  double t5435;
  double t5451;
  double t5531;
  double t5545;
  double t5593;
  double t4006;
  double t4019;
  double t6037;
  double t6050;
  double t6103;
  double t6290;
  double t6306;
  double t6308;
  double t6631;
  double t6635;
  double t6675;
  double t6932;
  double t6947;
  double t6948;
  double t7014;
  double t7028;
  double t7057;
  double t7067;
  double t7069;
  double t7084;
  double t7132;
  double t7148;
  double t7151;
  double t2837;
  double t7164;
  double t7217;
  double t7509;
  double t7583;
  double t7590;
  double t7918;
  double t7988;
  double t8117;
  double t8122;
  double t8166;
  double t8183;
  double t8192;
  double t7290;
  double t7632;
  double t7641;
  double t7642;
  double t7770;
  double t7788;
  double t7816;
  double t8394;
  double t8542;
  t867 = Sin(var1[3]);
  t1477 = Cos(var1[3]);
  t1254 = Cos(var1[5]);
  t1319 = Sin(var1[4]);
  t1652 = Sin(var1[5]);
  t927 = Sin(var1[9]);
  t1420 = -1.*t1254*t867*t1319;
  t1655 = t1477*t1652;
  t1672 = t1420 + t1655;
  t1732 = Cos(var1[9]);
  t1906 = -1.*t1477*t1254;
  t1926 = -1.*t867*t1319*t1652;
  t2012 = t1906 + t1926;
  t423 = Cos(var1[10]);
  t705 = Cos(var1[4]);
  t3388 = Sin(var1[10]);
  t4236 = t1732*t1672;
  t4345 = -1.*t927*t2012;
  t4451 = t4236 + t4345;
  t448 = -1.*t423;
  t475 = 1. + t448;
  t525 = 0.183*t475;
  t609 = 0. + t525;
  t1064 = -0.047*t927;
  t1153 = 0. + t1064;
  t1767 = -1.*t1732;
  t1770 = 1. + t1767;
  t1802 = 0.047*t1770;
  t1851 = 0. + t1802;
  t5410 = t1477*t1254*t1319;
  t5435 = t867*t1652;
  t5451 = t5410 + t5435;
  t5531 = -1.*t1254*t867;
  t5545 = t1477*t1319*t1652;
  t5593 = t5531 + t5545;
  t4006 = 0.183*t3388;
  t4019 = 0. + t4006;
  t6037 = t1732*t5451;
  t6050 = -1.*t927*t5593;
  t6103 = t6037 + t6050;
  t6290 = t1732*t1477*t705*t1254;
  t6306 = -1.*t1477*t705*t927*t1652;
  t6308 = t6290 + t6306;
  t6631 = t1732*t705*t1254*t867;
  t6635 = -1.*t705*t927*t867*t1652;
  t6675 = t6631 + t6635;
  t6932 = -1.*t1732*t1254*t1319;
  t6947 = t927*t1319*t1652;
  t6948 = t6932 + t6947;
  t7014 = t1254*t867;
  t7028 = -1.*t1477*t1319*t1652;
  t7057 = t7014 + t7028;
  t7067 = -1.*t927*t5451;
  t7069 = t1732*t7057;
  t7084 = t7067 + t7069;
  t7132 = t1254*t867*t1319;
  t7148 = -1.*t1477*t1652;
  t7151 = t7132 + t7148;
  t2837 = t1732*t2012;
  t7164 = -1.*t927*t7151;
  t7217 = t7164 + t2837;
  t7509 = -1.*t705*t1254*t927;
  t7583 = -1.*t1732*t705*t1652;
  t7590 = t7509 + t7583;
  t7918 = -1.*t1732*t5593;
  t7988 = t7067 + t7918;
  t8117 = t1477*t1254;
  t8122 = t867*t1319*t1652;
  t8166 = t8117 + t8122;
  t8183 = -1.*t1732*t8166;
  t8192 = t7164 + t8183;
  t7290 = t1732*t7151;
  t7632 = t4019*t7590;
  t7641 = -0.183*t3388*t7590;
  t7642 = t1732*t705*t1254;
  t7770 = -1.*t705*t927*t1652;
  t7788 = t7642 + t7770;
  t7816 = 0.13205*t7788;
  t8394 = -1.*t927*t8166;
  t8542 = t7290 + t8394;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t1153*t1672 + t1851*t2012 + t4019*t4451 - 1.*t609*t705*t867 + 0.183*(-1.*t3388*t4451 - 1.*t423*t705*t867) + 0.13205*(t2837 + t1672*t927);
  p_output1(10)=t1153*t5451 + t1851*t5593 + t4019*t6103 + t1477*t609*t705 + 0.183*(-1.*t3388*t6103 + t1477*t423*t705) + 0.13205*(t1732*t5593 + t5451*t927);
  p_output1(11)=0;
  p_output1(12)=-1.*t1319*t1477*t609 + t4019*t6308 + 0.183*(-1.*t1319*t1477*t423 - 1.*t3388*t6308) + t1153*t1254*t1477*t705 + t1477*t1652*t1851*t705 + 0.13205*(t1477*t1652*t1732*t705 + t1254*t1477*t705*t927);
  p_output1(13)=t4019*t6675 - 1.*t1319*t609*t867 + t1153*t1254*t705*t867 + t1652*t1851*t705*t867 + 0.183*(-1.*t3388*t6675 - 1.*t1319*t423*t867) + 0.13205*(t1652*t1732*t705*t867 + t1254*t705*t867*t927);
  p_output1(14)=-1.*t1153*t1254*t1319 - 1.*t1319*t1652*t1851 + t4019*t6948 - 1.*t609*t705 + 0.183*(-1.*t3388*t6948 - 1.*t423*t705) + 0.13205*(-1.*t1319*t1652*t1732 - 1.*t1254*t1319*t927);
  p_output1(15)=t1851*t5451 + t1153*t7057 - 0.183*t3388*t7084 + t4019*t7084 + 0.13205*(t6037 + t7057*t927);
  p_output1(16)=t1153*t2012 + t1851*t7151 - 0.183*t3388*t7217 + t4019*t7217 + 0.13205*(t7290 + t2012*t927);
  p_output1(17)=-1.*t1153*t1652*t705 + t1254*t1851*t705 + t7632 + t7641 + t7816;
  p_output1(18)=0;
  p_output1(19)=0;
  p_output1(20)=0;
  p_output1(21)=0;
  p_output1(22)=0;
  p_output1(23)=0;
  p_output1(24)=0;
  p_output1(25)=0;
  p_output1(26)=0;
  p_output1(27)=-0.047*t1732*t5451 + 0.13205*t6103 - 0.183*t3388*t7988 + t4019*t7988 + 0.047*t5593*t927;
  p_output1(28)=-0.047*t1732*t7151 - 0.183*t3388*t8192 + t4019*t8192 + 0.13205*t8542 + 0.047*t8166*t927;
  p_output1(29)=-0.047*t1254*t1732*t705 + t7632 + t7641 + t7816 + 0.047*t1652*t705*t927;
  p_output1(30)=0.183*t423*t6103 + 0.183*t1477*t3388*t705 + 0.183*(-1.*t423*t6103 - 1.*t1477*t3388*t705);
  p_output1(31)=0.183*t423*t8542 + 0.183*t3388*t705*t867 + 0.183*(-1.*t423*t8542 - 1.*t3388*t705*t867);
  p_output1(32)=-0.183*t1319*t3388 + 0.183*t423*t7788 + 0.183*(t1319*t3388 - 1.*t423*t7788);
  p_output1(33)=0;
  p_output1(34)=0;
  p_output1(35)=0;
  p_output1(36)=0;
  p_output1(37)=0;
  p_output1(38)=0;
  p_output1(39)=0;
  p_output1(40)=0;
  p_output1(41)=0;
  p_output1(42)=0;
  p_output1(43)=0;
  p_output1(44)=0;
  p_output1(45)=0;
  p_output1(46)=0;
  p_output1(47)=0;
  p_output1(48)=0;
  p_output1(49)=0;
  p_output1(50)=0;
  p_output1(51)=0;
  p_output1(52)=0;
  p_output1(53)=0;
}


       
Eigen::Matrix<double,3,18> Jp_FL_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void Jp_FL_thigh_joint(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



