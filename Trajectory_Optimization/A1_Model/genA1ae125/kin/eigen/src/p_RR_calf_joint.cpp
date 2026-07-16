/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:04:30 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RR_calf_joint.h"

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
  double t1584;
  double t3620;
  double t3766;
  double t3638;
  double t3813;
  double t2736;
  double t3727;
  double t3868;
  double t3882;
  double t3974;
  double t4277;
  double t4327;
  double t4335;
  double t1664;
  double t4441;
  double t141;
  double t4458;
  double t4459;
  double t4463;
  double t4476;
  double t4479;
  double t4483;
  double t4487;
  double t4496;
  double t4499;
  double t4501;
  double t4514;
  double t4519;
  double t4520;
  double t158;
  double t170;
  double t176;
  double t878;
  double t2787;
  double t3282;
  double t4040;
  double t4149;
  double t4176;
  double t4199;
  double t4620;
  double t4621;
  double t4632;
  double t4642;
  double t4651;
  double t4655;
  double t4452;
  double t4453;
  double t4486;
  double t4488;
  double t4495;
  double t4671;
  double t4679;
  double t4685;
  double t4505;
  double t4506;
  double t4512;
  double t4687;
  double t4693;
  double t4695;
  double t4705;
  double t4707;
  double t4711;
  double t4796;
  double t4797;
  double t4800;
  double t4804;
  double t4805;
  double t4815;
  double t4823;
  double t4824;
  double t4834;
  t1584 = Cos(var1[3]);
  t3620 = Cos(var1[5]);
  t3766 = Sin(var1[3]);
  t3638 = Sin(var1[4]);
  t3813 = Sin(var1[5]);
  t2736 = Sin(var1[12]);
  t3727 = t1584*t3620*t3638;
  t3868 = t3766*t3813;
  t3882 = t3727 + t3868;
  t3974 = Cos(var1[12]);
  t4277 = -1.*t3620*t3766;
  t4327 = t1584*t3638*t3813;
  t4335 = t4277 + t4327;
  t1664 = Cos(var1[4]);
  t4441 = Sin(var1[13]);
  t141 = Cos(var1[13]);
  t4458 = t3974*t3882;
  t4459 = -1.*t2736*t4335;
  t4463 = t4458 + t4459;
  t4476 = Cos(var1[14]);
  t4479 = -1.*t4476;
  t4483 = 1. + t4479;
  t4487 = Sin(var1[14]);
  t4496 = t1584*t1664*t4441;
  t4499 = t141*t4463;
  t4501 = t4496 + t4499;
  t4514 = t141*t1584*t1664;
  t4519 = -1.*t4441*t4463;
  t4520 = t4514 + t4519;
  t158 = -1.*t141;
  t170 = 1. + t158;
  t176 = -0.183*t170;
  t878 = 0. + t176;
  t2787 = 0.047*t2736;
  t3282 = 0. + t2787;
  t4040 = -1.*t3974;
  t4149 = 1. + t4040;
  t4176 = -0.047*t4149;
  t4199 = 0. + t4176;
  t4620 = t3620*t3766*t3638;
  t4621 = -1.*t1584*t3813;
  t4632 = t4620 + t4621;
  t4642 = t1584*t3620;
  t4651 = t3766*t3638*t3813;
  t4655 = t4642 + t4651;
  t4452 = -0.183*t4441;
  t4453 = 0. + t4452;
  t4486 = -0.25*t4483;
  t4488 = -0.183*t4487;
  t4495 = 0. + t4486 + t4488;
  t4671 = t3974*t4632;
  t4679 = -1.*t2736*t4655;
  t4685 = t4671 + t4679;
  t4505 = -0.183*t4483;
  t4506 = 0.25*t4487;
  t4512 = 0. + t4505 + t4506;
  t4687 = t1664*t4441*t3766;
  t4693 = t141*t4685;
  t4695 = t4687 + t4693;
  t4705 = t141*t1664*t3766;
  t4707 = -1.*t4441*t4685;
  t4711 = t4705 + t4707;
  t4796 = t3974*t1664*t3620;
  t4797 = -1.*t1664*t2736*t3813;
  t4800 = t4796 + t4797;
  t4804 = -1.*t4441*t3638;
  t4805 = t141*t4800;
  t4815 = t4804 + t4805;
  t4823 = -1.*t141*t3638;
  t4824 = -1.*t4441*t4800;
  t4834 = t4823 + t4824;

  p_output1(0)=0. + t3282*t3882 + t4199*t4335 - 0.13205*(t2736*t3882 + t3974*t4335) + t4453*t4463 + t4495*t4501 + t4512*t4520 - 0.183*(-1.*t4487*t4501 + t4476*t4520) - 0.25*(t4476*t4501 + t4487*t4520) + t1584*t1664*t878 + var1(0);
  p_output1(1)=0. + t3282*t4632 + t4199*t4655 - 0.13205*(t2736*t4632 + t3974*t4655) + t4453*t4685 + t4495*t4695 + t4512*t4711 - 0.183*(-1.*t4487*t4695 + t4476*t4711) - 0.25*(t4476*t4695 + t4487*t4711) + t1664*t3766*t878 + var1(1);
  p_output1(2)=0. + t1664*t3282*t3620 - 0.13205*(t1664*t2736*t3620 + t1664*t3813*t3974) + t1664*t3813*t4199 + t4453*t4800 + t4495*t4815 + t4512*t4834 - 0.183*(-1.*t4487*t4815 + t4476*t4834) - 0.25*(t4476*t4815 + t4487*t4834) - 1.*t3638*t878 + var1(2);
}


       
Eigen::Matrix<double,3,1> p_RR_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_RR_calf_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



