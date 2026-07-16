/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:13:57 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RL_calf_joint.h"

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
static void output1(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  double t1087;
  double t2944;
  double t3395;
  double t2947;
  double t3522;
  double t2744;
  double t1743;
  double t2726;
  double t2942;
  double t3257;
  double t3582;
  double t3641;
  double t3682;
  double t3693;
  double t3712;
  double t3722;
  double t3764;
  double t3776;
  double t3824;
  double t1085;
  double t4209;
  double t4523;
  double t4541;
  double t4542;
  double t4545;
  double t4577;
  double t4752;
  double t4757;
  double t4761;
  double t4770;
  double t5005;
  double t5008;
  double t5050;
  double t2743;
  double t3861;
  double t3926;
  double t4283;
  double t4287;
  double t4302;
  double t4422;
  double t4788;
  double t4905;
  double t4917;
  double t4919;
  double t4924;
  double t4999;
  double t5051;
  double t5125;
  double t5211;
  double t5242;
  double t5284;
  t1087 = Cos(var1[3]);
  t2944 = Cos(var1[5]);
  t3395 = Sin(var1[3]);
  t2947 = Sin(var1[4]);
  t3522 = Sin(var1[5]);
  t2744 = Cos(var1[16]);
  t1743 = Cos(var1[4]);
  t2726 = Sin(var1[16]);
  t2942 = Cos(var1[15]);
  t3257 = t1087*t2944*t2947;
  t3582 = t3395*t3522;
  t3641 = t3257 + t3582;
  t3682 = t2942*t3641;
  t3693 = Sin(var1[15]);
  t3712 = -1.*t2944*t3395;
  t3722 = t1087*t2947*t3522;
  t3764 = t3712 + t3722;
  t3776 = -1.*t3693*t3764;
  t3824 = t3682 + t3776;
  t1085 = Sin(var1[17]);
  t4209 = Cos(var1[17]);
  t4523 = t2944*t3395*t2947;
  t4541 = -1.*t1087*t3522;
  t4542 = t4523 + t4541;
  t4545 = t2942*t4542;
  t4577 = t1087*t2944;
  t4752 = t3395*t2947*t3522;
  t4757 = t4577 + t4752;
  t4761 = -1.*t3693*t4757;
  t4770 = t4545 + t4761;
  t5005 = t2942*t1743*t2944;
  t5008 = -1.*t1743*t3693*t3522;
  t5050 = t5005 + t5008;
  t2743 = t1087*t1743*t2726;
  t3861 = t2744*t3824;
  t3926 = t2743 + t3861;
  t4283 = t2744*t1087*t1743;
  t4287 = -1.*t2726*t3824;
  t4302 = t4283 + t4287;
  t4422 = t1743*t2726*t3395;
  t4788 = t2744*t4770;
  t4905 = t4422 + t4788;
  t4917 = t2744*t1743*t3395;
  t4919 = -1.*t2726*t4770;
  t4924 = t4917 + t4919;
  t4999 = -1.*t2726*t2947;
  t5051 = t2744*t5050;
  t5125 = t4999 + t5051;
  t5211 = -1.*t2744*t2947;
  t5242 = -1.*t2726*t5050;
  t5284 = t5211 + t5242;

  p_output1(0)=-1.*t1085*t3926 + t4209*t4302;
  p_output1(1)=-1.*t1085*t4905 + t4209*t4924;
  p_output1(2)=-1.*t1085*t5125 + t4209*t5284;
  p_output1(3)=t3641*t3693 + t2942*t3764;
  p_output1(4)=t3693*t4542 + t2942*t4757;
  p_output1(5)=t1743*t2942*t3522 + t1743*t2944*t3693;
  p_output1(6)=t3926*t4209 + t1085*t4302;
  p_output1(7)=t4209*t4905 + t1085*t4924;
  p_output1(8)=t4209*t5125 + t1085*t5284;
}


       
Eigen::Matrix<double,3,3> R_RL_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_RL_calf_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



