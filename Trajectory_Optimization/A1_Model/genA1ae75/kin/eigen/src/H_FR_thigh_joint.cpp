/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:51:32 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FR_thigh_joint.h"

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
  double t924;
  double t2080;
  double t2202;
  double t2105;
  double t2233;
  double t1524;
  double t1708;
  double t2064;
  double t2452;
  double t2473;
  double t2392;
  double t2427;
  double t2432;
  double t2196;
  double t2373;
  double t2374;
  double t2522;
  double t2523;
  double t2524;
  double t2502;
  double t2504;
  double t2516;
  double t2391;
  double t2463;
  double t2464;
  double t2517;
  double t2529;
  double t2539;
  double t2584;
  double t2588;
  double t2595;
  double t2606;
  double t2618;
  double t2619;
  double t2046;
  double t2484;
  double t2492;
  double t2721;
  double t2722;
  double t2746;
  double t2748;
  double t2758;
  double t2761;
  double t2767;
  double t2781;
  double t2784;
  double t2786;
  double t2641;
  double t2643;
  double t2644;
  double t2798;
  double t2800;
  double t2500;
  double t2556;
  double t2570;
  double t2645;
  double t2648;
  double t2655;
  double t2577;
  double t2599;
  double t2602;
  t924 = Cos(var1[3]);
  t2080 = Cos(var1[5]);
  t2202 = Sin(var1[3]);
  t2105 = Sin(var1[4]);
  t2233 = Sin(var1[5]);
  t1524 = Cos(var1[4]);
  t1708 = Cos(var1[7]);
  t2064 = Cos(var1[6]);
  t2452 = Sin(var1[6]);
  t2473 = Sin(var1[7]);
  t2392 = -1.*t2080*t2202;
  t2427 = t924*t2105*t2233;
  t2432 = t2392 + t2427;
  t2196 = t924*t2080*t2105;
  t2373 = t2202*t2233;
  t2374 = t2196 + t2373;
  t2522 = t924*t2080;
  t2523 = t2202*t2105*t2233;
  t2524 = t2522 + t2523;
  t2502 = t2080*t2202*t2105;
  t2504 = -1.*t924*t2233;
  t2516 = t2502 + t2504;
  t2391 = t2064*t2374;
  t2463 = -1.*t2432*t2452;
  t2464 = t2391 + t2463;
  t2517 = t2064*t2516;
  t2529 = -1.*t2524*t2452;
  t2539 = t2517 + t2529;
  t2584 = t1524*t2080*t2064;
  t2588 = -1.*t1524*t2233*t2452;
  t2595 = t2584 + t2588;
  t2606 = t2064*t2432;
  t2618 = t2374*t2452;
  t2619 = t2606 + t2618;
  t2046 = t924*t1524*t1708;
  t2484 = -1.*t2464*t2473;
  t2492 = t2046 + t2484;
  t2721 = -1.*t1708;
  t2722 = 1. + t2721;
  t2746 = 0.183*t2722;
  t2748 = 0. + t2746;
  t2758 = -1.*t2064;
  t2761 = 1. + t2758;
  t2767 = -0.047*t2761;
  t2781 = 0. + t2767;
  t2784 = 0.047*t2452;
  t2786 = 0. + t2784;
  t2641 = t2064*t2524;
  t2643 = t2516*t2452;
  t2644 = t2641 + t2643;
  t2798 = 0.183*t2473;
  t2800 = 0. + t2798;
  t2500 = t1524*t1708*t2202;
  t2556 = -1.*t2539*t2473;
  t2570 = t2500 + t2556;
  t2645 = t1524*t2064*t2233;
  t2648 = t1524*t2080*t2452;
  t2655 = t2645 + t2648;
  t2577 = -1.*t1708*t2105;
  t2599 = -1.*t2595*t2473;
  t2602 = t2577 + t2599;

  p_output1(0)=t2492;
  p_output1(1)=t2570;
  p_output1(2)=t2602;
  p_output1(3)=0.;
  p_output1(4)=t2619;
  p_output1(5)=t2644;
  p_output1(6)=t2655;
  p_output1(7)=0.;
  p_output1(8)=t1708*t2464 + t1524*t2473*t924;
  p_output1(9)=t1524*t2202*t2473 + t1708*t2539;
  p_output1(10)=-1.*t2105*t2473 + t1708*t2595;
  p_output1(11)=0.;
  p_output1(12)=0. + 0.183*t2492 - 0.13205*t2619 + t2432*t2781 + t2374*t2786 + t2464*t2800 + t1524*t2748*t924 + var1(0);
  p_output1(13)=0. + 0.183*t2570 - 0.13205*t2644 + t1524*t2202*t2748 + t2524*t2781 + t2516*t2786 + t2539*t2800 + var1(1);
  p_output1(14)=0. + 0.183*t2602 - 0.13205*t2655 - 1.*t2105*t2748 + t1524*t2233*t2781 + t1524*t2080*t2786 + t2595*t2800 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_FR_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void H_FR_thigh_joint(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



