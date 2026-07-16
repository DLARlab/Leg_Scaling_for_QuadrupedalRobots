/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:13:31 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FR_hip_joint.h"

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
  double t206;
  double t7840;
  double t7845;
  double t7841;
  double t7846;
  double t3332;
  double t7843;
  double t7847;
  double t7848;
  double t7850;
  double t7851;
  double t7852;
  double t7853;
  double t866;
  double t4969;
  double t7831;
  double t7834;
  double t7838;
  double t7854;
  double t7855;
  double t7864;
  double t7865;
  double t7866;
  double t7868;
  double t7869;
  double t7870;
  t206 = Cos(var1[3]);
  t7840 = Cos(var1[5]);
  t7845 = Sin(var1[4]);
  t7841 = Sin(var1[3]);
  t7846 = Sin(var1[5]);
  t3332 = Cos(var1[6]);
  t7843 = -1.*t7840*t7841;
  t7847 = t206*t7845*t7846;
  t7848 = t7843 + t7847;
  t7850 = t206*t7840*t7845;
  t7851 = t7841*t7846;
  t7852 = t7850 + t7851;
  t7853 = Sin(var1[6]);
  t866 = Cos(var1[4]);
  t4969 = -1.*t3332;
  t7831 = 1. + t4969;
  t7834 = -0.047*t7831;
  t7838 = 0. + t7834;
  t7854 = 0.047*t7853;
  t7855 = 0. + t7854;
  t7864 = t206*t7840;
  t7865 = t7841*t7845*t7846;
  t7866 = t7864 + t7865;
  t7868 = t7840*t7841*t7845;
  t7869 = -1.*t206*t7846;
  t7870 = t7868 + t7869;

  p_output1(0)=0. + t7838*t7848 - 0.047*(t3332*t7848 + t7852*t7853) + t7852*t7855 + 0.183*t206*t866 + var1(0);
  p_output1(1)=0. + t7838*t7866 + t7855*t7870 - 0.047*(t3332*t7866 + t7853*t7870) + 0.183*t7841*t866 + var1(1);
  p_output1(2)=0. - 0.183*t7845 + t7838*t7846*t866 + t7840*t7855*t866 - 0.047*(t3332*t7846*t866 + t7840*t7853*t866) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_FR_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_FR_hip_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



