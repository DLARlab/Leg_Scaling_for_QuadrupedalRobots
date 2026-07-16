/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:03:08 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FR_calf_joint_src.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE static __inline__        /* use standard inline */
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
static void output1(double *p_output1,const double *var1)
{
  double t1090;
  double t2632;
  double t2638;
  double t2634;
  double t2644;
  double t2602;
  double t2635;
  double t2653;
  double t2655;
  double t2657;
  double t2658;
  double t2671;
  double t2674;
  double t2545;
  double t2699;
  double t2701;
  double t2705;
  double t2529;
  double t2707;
  double t2729;
  double t2730;
  double t2745;
  double t2758;
  double t2766;
  double t2772;
  double t2775;
  double t2723;
  double t2724;
  double t2728;
  double t2556;
  double t2566;
  double t2585;
  double t2599;
  double t2620;
  double t2624;
  double t2625;
  double t2628;
  double t2676;
  double t2677;
  double t2825;
  double t2828;
  double t2829;
  double t2838;
  double t2842;
  double t2848;
  double t2714;
  double t2715;
  double t2891;
  double t2894;
  double t2895;
  double t2748;
  double t2761;
  double t2762;
  double t2780;
  double t2786;
  double t2791;
  double t2907;
  double t2908;
  double t2909;
  double t2900;
  double t2901;
  double t2904;
  double t2942;
  double t2944;
  double t2945;
  double t2977;
  double t2981;
  double t2987;
  double t2953;
  double t2958;
  double t2962;
  t1090 = Cos(var1[3]);
  t2632 = Cos(var1[5]);
  t2638 = Sin(var1[4]);
  t2634 = Sin(var1[3]);
  t2644 = Sin(var1[5]);
  t2602 = Cos(var1[6]);
  t2635 = -1.*t2632*t2634;
  t2653 = t1090*t2638*t2644;
  t2655 = t2635 + t2653;
  t2657 = t1090*t2632*t2638;
  t2658 = t2634*t2644;
  t2671 = t2657 + t2658;
  t2674 = Sin(var1[6]);
  t2545 = Cos(var1[7]);
  t2699 = t2602*t2671;
  t2701 = -1.*t2655*t2674;
  t2705 = t2699 + t2701;
  t2529 = Cos(var1[4]);
  t2707 = Sin(var1[7]);
  t2729 = Cos(var1[8]);
  t2730 = -1.*t2729;
  t2745 = 1. + t2730;
  t2758 = Sin(var1[8]);
  t2766 = t1090*t2529*t2545;
  t2772 = -1.*t2705*t2707;
  t2775 = t2766 + t2772;
  t2723 = t2545*t2705;
  t2724 = t1090*t2529*t2707;
  t2728 = t2723 + t2724;
  t2556 = -1.*t2545;
  t2566 = 1. + t2556;
  t2585 = 0.183*t2566;
  t2599 = 0. + t2585;
  t2620 = -1.*t2602;
  t2624 = 1. + t2620;
  t2625 = -0.047*t2624;
  t2628 = 0. + t2625;
  t2676 = 0.047*t2674;
  t2677 = 0. + t2676;
  t2825 = t1090*t2632;
  t2828 = t2634*t2638*t2644;
  t2829 = t2825 + t2828;
  t2838 = t2632*t2634*t2638;
  t2842 = -1.*t1090*t2644;
  t2848 = t2838 + t2842;
  t2714 = 0.183*t2707;
  t2715 = 0. + t2714;
  t2891 = t2602*t2848;
  t2894 = -1.*t2829*t2674;
  t2895 = t2891 + t2894;
  t2748 = -0.25*t2745;
  t2761 = 0.183*t2758;
  t2762 = 0. + t2748 + t2761;
  t2780 = 0.183*t2745;
  t2786 = 0.25*t2758;
  t2791 = 0. + t2780 + t2786;
  t2907 = t2529*t2545*t2634;
  t2908 = -1.*t2895*t2707;
  t2909 = t2907 + t2908;
  t2900 = t2545*t2895;
  t2901 = t2529*t2634*t2707;
  t2904 = t2900 + t2901;
  t2942 = t2529*t2632*t2602;
  t2944 = -1.*t2529*t2644*t2674;
  t2945 = t2942 + t2944;
  t2977 = -1.*t2545*t2638;
  t2981 = -1.*t2945*t2707;
  t2987 = t2977 + t2981;
  t2953 = t2545*t2945;
  t2958 = -1.*t2638*t2707;
  t2962 = t2953 + t2958;
  p_output1[0]=0. + t1090*t2529*t2599 + t2628*t2655 - 0.13205*(t2602*t2655 + t2671*t2674) + t2671*t2677 + t2705*t2715 + t2728*t2762 + 0.183*(-1.*t2728*t2758 + t2729*t2775) - 0.25*(t2728*t2729 + t2758*t2775) + t2775*t2791 + var1[0];
  p_output1[1]=0. + t2529*t2599*t2634 + t2628*t2829 + t2677*t2848 - 0.13205*(t2602*t2829 + t2674*t2848) + t2715*t2895 + t2762*t2904 + t2791*t2909 + 0.183*(-1.*t2758*t2904 + t2729*t2909) - 0.25*(t2729*t2904 + t2758*t2909) + var1[1];
  p_output1[2]=0. - 1.*t2599*t2638 + t2529*t2628*t2644 - 0.13205*(t2529*t2602*t2644 + t2529*t2632*t2674) + t2529*t2632*t2677 + t2715*t2945 + t2762*t2962 + t2791*t2987 + 0.183*(-1.*t2758*t2962 + t2729*t2987) - 0.25*(t2729*t2962 + t2758*t2987) + var1[2];
}



void p_FR_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
