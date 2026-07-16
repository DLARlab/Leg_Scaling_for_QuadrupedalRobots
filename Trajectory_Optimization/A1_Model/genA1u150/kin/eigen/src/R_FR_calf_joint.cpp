/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:26:35 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_FR_calf_joint.h"

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
  double t314;
  double t2459;
  double t2929;
  double t2839;
  double t3158;
  double t1038;
  double t1512;
  double t2885;
  double t3381;
  double t3483;
  double t3746;
  double t3920;
  double t3969;
  double t3998;
  double t4273;
  double t4342;
  double t4344;
  double t372;
  double t4347;
  double t56;
  double t4515;
  double t4595;
  double t4628;
  double t4632;
  double t4634;
  double t4652;
  double t4664;
  double t4669;
  double t4674;
  double t4442;
  double t4833;
  double t4857;
  double t4910;
  double t4387;
  double t4389;
  double t4434;
  double t1425;
  double t4362;
  double t4369;
  double t4760;
  double t4764;
  double t4780;
  double t4505;
  double t4700;
  double t4709;
  double t4984;
  double t4991;
  double t5073;
  double t4832;
  double t4934;
  double t4959;
  t314 = Cos(var1[3]);
  t2459 = Cos(var1[5]);
  t2929 = Sin(var1[3]);
  t2839 = Sin(var1[4]);
  t3158 = Sin(var1[5]);
  t1038 = Cos(var1[7]);
  t1512 = Cos(var1[6]);
  t2885 = t314*t2459*t2839;
  t3381 = t2929*t3158;
  t3483 = t2885 + t3381;
  t3746 = t1512*t3483;
  t3920 = -1.*t2459*t2929;
  t3969 = t314*t2839*t3158;
  t3998 = t3920 + t3969;
  t4273 = Sin(var1[6]);
  t4342 = -1.*t3998*t4273;
  t4344 = t3746 + t4342;
  t372 = Cos(var1[4]);
  t4347 = Sin(var1[7]);
  t56 = Cos(var1[8]);
  t4515 = t2459*t2929*t2839;
  t4595 = -1.*t314*t3158;
  t4628 = t4515 + t4595;
  t4632 = t1512*t4628;
  t4634 = t314*t2459;
  t4652 = t2929*t2839*t3158;
  t4664 = t4634 + t4652;
  t4669 = -1.*t4664*t4273;
  t4674 = t4632 + t4669;
  t4442 = Sin(var1[8]);
  t4833 = t372*t2459*t1512;
  t4857 = -1.*t372*t3158*t4273;
  t4910 = t4833 + t4857;
  t4387 = t1038*t4344;
  t4389 = t314*t372*t4347;
  t4434 = t4387 + t4389;
  t1425 = t314*t372*t1038;
  t4362 = -1.*t4344*t4347;
  t4369 = t1425 + t4362;
  t4760 = t1038*t4674;
  t4764 = t372*t2929*t4347;
  t4780 = t4760 + t4764;
  t4505 = t372*t1038*t2929;
  t4700 = -1.*t4674*t4347;
  t4709 = t4505 + t4700;
  t4984 = t1038*t4910;
  t4991 = -1.*t2839*t4347;
  t5073 = t4984 + t4991;
  t4832 = -1.*t1038*t2839;
  t4934 = -1.*t4910*t4347;
  t4959 = t4832 + t4934;

  p_output1(0)=-1.*t4434*t4442 + t4369*t56;
  p_output1(1)=-1.*t4442*t4780 + t4709*t56;
  p_output1(2)=-1.*t4442*t5073 + t4959*t56;
  p_output1(3)=t1512*t3998 + t3483*t4273;
  p_output1(4)=t4273*t4628 + t1512*t4664;
  p_output1(5)=t1512*t3158*t372 + t2459*t372*t4273;
  p_output1(6)=t4369*t4442 + t4434*t56;
  p_output1(7)=t4442*t4709 + t4780*t56;
  p_output1(8)=t4442*t4959 + t5073*t56;
}


       
Eigen::Matrix<double,3,3> R_FR_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_FR_calf_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



