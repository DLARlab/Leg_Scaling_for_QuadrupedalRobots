/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:19:12 GMT-05:00
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
  double t270;
  double t920;
  double t1557;
  double t1086;
  double t1654;
  double t709;
  double t393;
  double t581;
  double t901;
  double t1399;
  double t1872;
  double t1873;
  double t1908;
  double t2029;
  double t2107;
  double t2117;
  double t2172;
  double t2234;
  double t2304;
  double t63;
  double t2579;
  double t3184;
  double t3215;
  double t3251;
  double t3440;
  double t3445;
  double t3450;
  double t3461;
  double t3466;
  double t3484;
  double t3697;
  double t3699;
  double t3707;
  double t633;
  double t2326;
  double t2488;
  double t2784;
  double t2798;
  double t2906;
  double t3117;
  double t3535;
  double t3539;
  double t3591;
  double t3592;
  double t3684;
  double t3694;
  double t3716;
  double t3767;
  double t3786;
  double t3799;
  double t3811;
  double t3881;
  double t3886;
  double t3931;
  double t4744;
  double t4751;
  double t2501;
  double t2984;
  double t3015;
  double t4134;
  double t4140;
  double t4148;
  double t4359;
  double t4393;
  double t4398;
  double t4495;
  double t4514;
  double t4515;
  double t4607;
  double t4610;
  double t4615;
  double t4624;
  double t3959;
  double t3992;
  double t4005;
  double t4661;
  double t4724;
  double t4773;
  double t4791;
  double t4799;
  double t4804;
  double t4820;
  double t4834;
  double t3586;
  double t3687;
  double t3689;
  double t4160;
  double t4203;
  double t4299;
  double t4011;
  double t4101;
  double t4121;
  double t3775;
  double t3849;
  double t3857;
  double t4308;
  double t4312;
  double t4358;
  t270 = Cos(var1[3]);
  t920 = Cos(var1[5]);
  t1557 = Sin(var1[3]);
  t1086 = Sin(var1[4]);
  t1654 = Sin(var1[5]);
  t709 = Cos(var1[13]);
  t393 = Cos(var1[4]);
  t581 = Sin(var1[13]);
  t901 = Cos(var1[12]);
  t1399 = t270*t920*t1086;
  t1872 = t1557*t1654;
  t1873 = t1399 + t1872;
  t1908 = t901*t1873;
  t2029 = Sin(var1[12]);
  t2107 = -1.*t920*t1557;
  t2117 = t270*t1086*t1654;
  t2172 = t2107 + t2117;
  t2234 = -1.*t2029*t2172;
  t2304 = t1908 + t2234;
  t63 = Sin(var1[14]);
  t2579 = Cos(var1[14]);
  t3184 = t920*t1557*t1086;
  t3215 = -1.*t270*t1654;
  t3251 = t3184 + t3215;
  t3440 = t901*t3251;
  t3445 = t270*t920;
  t3450 = t1557*t1086*t1654;
  t3461 = t3445 + t3450;
  t3466 = -1.*t2029*t3461;
  t3484 = t3440 + t3466;
  t3697 = t901*t393*t920;
  t3699 = -1.*t393*t2029*t1654;
  t3707 = t3697 + t3699;
  t633 = t270*t393*t581;
  t2326 = t709*t2304;
  t2488 = t633 + t2326;
  t2784 = t709*t270*t393;
  t2798 = -1.*t581*t2304;
  t2906 = t2784 + t2798;
  t3117 = t393*t581*t1557;
  t3535 = t709*t3484;
  t3539 = t3117 + t3535;
  t3591 = t709*t393*t1557;
  t3592 = -1.*t581*t3484;
  t3684 = t3591 + t3592;
  t3694 = -1.*t581*t1086;
  t3716 = t709*t3707;
  t3767 = t3694 + t3716;
  t3786 = -1.*t709*t1086;
  t3799 = -1.*t581*t3707;
  t3811 = t3786 + t3799;
  t3881 = t2029*t1873;
  t3886 = t901*t2172;
  t3931 = t3881 + t3886;
  t4744 = -1.*t2579;
  t4751 = 1. + t4744;
  t2501 = -1.*t63*t2488;
  t2984 = t2579*t2906;
  t3015 = t2501 + t2984;
  t4134 = t2579*t2488;
  t4140 = t63*t2906;
  t4148 = t4134 + t4140;
  t4359 = -1.*t709;
  t4393 = 1. + t4359;
  t4398 = -0.183*t4393;
  t4495 = 0. + t4398;
  t4514 = 0.047*t2029;
  t4515 = 0. + t4514;
  t4607 = -1.*t901;
  t4610 = 1. + t4607;
  t4615 = -0.047*t4610;
  t4624 = 0. + t4615;
  t3959 = t2029*t3251;
  t3992 = t901*t3461;
  t4005 = t3959 + t3992;
  t4661 = -0.183*t581;
  t4724 = 0. + t4661;
  t4773 = -0.15*t4751;
  t4791 = -0.183*t63;
  t4799 = 0. + t4773 + t4791;
  t4804 = -0.183*t4751;
  t4820 = 0.15*t63;
  t4834 = 0. + t4804 + t4820;
  t3586 = -1.*t63*t3539;
  t3687 = t2579*t3684;
  t3689 = t3586 + t3687;
  t4160 = t2579*t3539;
  t4203 = t63*t3684;
  t4299 = t4160 + t4203;
  t4011 = t393*t920*t2029;
  t4101 = t901*t393*t1654;
  t4121 = t4011 + t4101;
  t3775 = -1.*t63*t3767;
  t3849 = t2579*t3811;
  t3857 = t3775 + t3849;
  t4308 = t2579*t3767;
  t4312 = t63*t3811;
  t4358 = t4308 + t4312;

  p_output1(0)=t3015;
  p_output1(1)=t3689;
  p_output1(2)=t3857;
  p_output1(3)=0.;
  p_output1(4)=t3931;
  p_output1(5)=t4005;
  p_output1(6)=t4121;
  p_output1(7)=0.;
  p_output1(8)=t4148;
  p_output1(9)=t4299;
  p_output1(10)=t4358;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.183*t3015 - 0.11079*t3931 - 0.3*t4148 + t270*t393*t4495 + t1873*t4515 + t2172*t4624 + t2304*t4724 + t2488*t4799 + t2906*t4834 + var1(0);
  p_output1(13)=0. - 0.183*t3689 - 0.11079*t4005 - 0.3*t4299 + t1557*t393*t4495 + t3251*t4515 + t3461*t4624 + t3484*t4724 + t3539*t4799 + t3684*t4834 + var1(1);
  p_output1(14)=0. - 0.183*t3857 - 0.11079*t4121 - 0.3*t4358 - 1.*t1086*t4495 + t1654*t393*t4624 + t3707*t4724 + t3767*t4799 + t3811*t4834 + t393*t4515*t920 + var1(2);
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



