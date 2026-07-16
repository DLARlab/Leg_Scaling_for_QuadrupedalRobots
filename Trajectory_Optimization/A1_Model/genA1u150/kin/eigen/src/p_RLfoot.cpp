/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:27:03 GMT-05:00
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
  double t2741;
  double t4797;
  double t5419;
  double t5340;
  double t5552;
  double t4198;
  double t5342;
  double t5698;
  double t5868;
  double t5977;
  double t6088;
  double t6104;
  double t6114;
  double t2991;
  double t6354;
  double t440;
  double t6439;
  double t6475;
  double t6498;
  double t6652;
  double t6659;
  double t6666;
  double t6670;
  double t6750;
  double t6786;
  double t6789;
  double t6901;
  double t6957;
  double t6989;
  double t474;
  double t808;
  double t1217;
  double t1592;
  double t4210;
  double t4321;
  double t5995;
  double t6049;
  double t6064;
  double t6070;
  double t7199;
  double t7229;
  double t7234;
  double t7274;
  double t7282;
  double t7316;
  double t6420;
  double t6432;
  double t6668;
  double t6717;
  double t6749;
  double t7470;
  double t7478;
  double t7484;
  double t6865;
  double t6886;
  double t6898;
  double t7500;
  double t7501;
  double t7503;
  double t7543;
  double t7557;
  double t7599;
  double t7746;
  double t7748;
  double t7753;
  double t7776;
  double t7793;
  double t7794;
  double t7808;
  double t7839;
  double t7871;
  t2741 = Cos(var1[3]);
  t4797 = Cos(var1[5]);
  t5419 = Sin(var1[3]);
  t5340 = Sin(var1[4]);
  t5552 = Sin(var1[5]);
  t4198 = Sin(var1[15]);
  t5342 = t2741*t4797*t5340;
  t5698 = t5419*t5552;
  t5868 = t5342 + t5698;
  t5977 = Cos(var1[15]);
  t6088 = -1.*t4797*t5419;
  t6104 = t2741*t5340*t5552;
  t6114 = t6088 + t6104;
  t2991 = Cos(var1[4]);
  t6354 = Sin(var1[16]);
  t440 = Cos(var1[16]);
  t6439 = t5977*t5868;
  t6475 = -1.*t4198*t6114;
  t6498 = t6439 + t6475;
  t6652 = Cos(var1[17]);
  t6659 = -1.*t6652;
  t6666 = 1. + t6659;
  t6670 = Sin(var1[17]);
  t6750 = t2741*t2991*t6354;
  t6786 = t440*t6498;
  t6789 = t6750 + t6786;
  t6901 = t440*t2741*t2991;
  t6957 = -1.*t6354*t6498;
  t6989 = t6901 + t6957;
  t474 = -1.*t440;
  t808 = 1. + t474;
  t1217 = -0.183*t808;
  t1592 = 0. + t1217;
  t4210 = -0.047*t4198;
  t4321 = 0. + t4210;
  t5995 = -1.*t5977;
  t6049 = 1. + t5995;
  t6064 = 0.047*t6049;
  t6070 = 0. + t6064;
  t7199 = t4797*t5419*t5340;
  t7229 = -1.*t2741*t5552;
  t7234 = t7199 + t7229;
  t7274 = t2741*t4797;
  t7282 = t5419*t5340*t5552;
  t7316 = t7274 + t7282;
  t6420 = -0.183*t6354;
  t6432 = 0. + t6420;
  t6668 = -0.3*t6666;
  t6717 = -0.183*t6670;
  t6749 = 0. + t6668 + t6717;
  t7470 = t5977*t7234;
  t7478 = -1.*t4198*t7316;
  t7484 = t7470 + t7478;
  t6865 = -0.183*t6666;
  t6886 = 0.3*t6670;
  t6898 = 0. + t6865 + t6886;
  t7500 = t2991*t6354*t5419;
  t7501 = t440*t7484;
  t7503 = t7500 + t7501;
  t7543 = t440*t2991*t5419;
  t7557 = -1.*t6354*t7484;
  t7599 = t7543 + t7557;
  t7746 = t5977*t2991*t4797;
  t7748 = -1.*t2991*t4198*t5552;
  t7753 = t7746 + t7748;
  t7776 = -1.*t6354*t5340;
  t7793 = t440*t7753;
  t7794 = t7776 + t7793;
  t7808 = -1.*t440*t5340;
  t7839 = -1.*t6354*t7753;
  t7871 = t7808 + t7839;

  p_output1(0)=0. + t1592*t2741*t2991 + t4321*t5868 + t6070*t6114 + 0.17458*(t4198*t5868 + t5977*t6114) + t6432*t6498 + t6749*t6789 + t6898*t6989 - 0.183*(-1.*t6670*t6789 + t6652*t6989) - 0.6*(t6652*t6789 + t6670*t6989) + var1(0);
  p_output1(1)=0. + t1592*t2991*t5419 + t4321*t7234 + t6070*t7316 + 0.17458*(t4198*t7234 + t5977*t7316) + t6432*t7484 + t6749*t7503 + t6898*t7599 - 0.183*(-1.*t6670*t7503 + t6652*t7599) - 0.6*(t6652*t7503 + t6670*t7599) + var1(1);
  p_output1(2)=0. + t2991*t4321*t4797 - 1.*t1592*t5340 + 0.17458*(t2991*t4198*t4797 + t2991*t5552*t5977) + t2991*t5552*t6070 + t6432*t7753 + t6749*t7794 + t6898*t7871 - 0.183*(-1.*t6670*t7794 + t6652*t7871) - 0.6*(t6652*t7794 + t6670*t7871) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_RLfoot(const Eigen::Matrix<double,18,1> &var1)
//void p_RLfoot(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



