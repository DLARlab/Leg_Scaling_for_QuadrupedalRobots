/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:50:52 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RR_calf_joint_src.h"

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
  double t355;
  double t954;
  double t1176;
  double t1046;
  double t1181;
  double t754;
  double t431;
  double t598;
  double t835;
  double t1121;
  double t1219;
  double t1240;
  double t1412;
  double t1512;
  double t1524;
  double t1614;
  double t1679;
  double t2713;
  double t3124;
  double t260;
  double t5004;
  double t7060;
  double t7533;
  double t7670;
  double t7746;
  double t7870;
  double t8305;
  double t8669;
  double t8809;
  double t9200;
  double t10619;
  double t10626;
  double t10682;
  double t665;
  double t3870;
  double t4189;
  double t5017;
  double t5356;
  double t5497;
  double t6138;
  double t9336;
  double t9865;
  double t10440;
  double t10476;
  double t10539;
  double t10618;
  double t10685;
  double t10686;
  double t10695;
  double t10709;
  double t10720;
  double t10740;
  double t10751;
  double t10752;
  double t10875;
  double t10880;
  double t4890;
  double t6007;
  double t6045;
  double t10788;
  double t10792;
  double t10794;
  double t10809;
  double t10811;
  double t10819;
  double t10821;
  double t10832;
  double t10833;
  double t10835;
  double t10836;
  double t10841;
  double t10842;
  double t10760;
  double t10766;
  double t10774;
  double t10855;
  double t10858;
  double t10882;
  double t10883;
  double t10884;
  double t10886;
  double t10887;
  double t10888;
  double t10332;
  double t10584;
  double t10609;
  double t10795;
  double t10797;
  double t10798;
  double t10776;
  double t10779;
  double t10784;
  double t10689;
  double t10732;
  double t10735;
  double t10799;
  double t10802;
  double t10805;
  t355 = Cos(var1[3]);
  t954 = Cos(var1[5]);
  t1176 = Sin(var1[3]);
  t1046 = Sin(var1[4]);
  t1181 = Sin(var1[5]);
  t754 = Cos(var1[13]);
  t431 = Cos(var1[4]);
  t598 = Sin(var1[13]);
  t835 = Cos(var1[12]);
  t1121 = t355*t954*t1046;
  t1219 = t1176*t1181;
  t1240 = t1121 + t1219;
  t1412 = t835*t1240;
  t1512 = Sin(var1[12]);
  t1524 = -1.*t954*t1176;
  t1614 = t355*t1046*t1181;
  t1679 = t1524 + t1614;
  t2713 = -1.*t1512*t1679;
  t3124 = t1412 + t2713;
  t260 = Sin(var1[14]);
  t5004 = Cos(var1[14]);
  t7060 = t954*t1176*t1046;
  t7533 = -1.*t355*t1181;
  t7670 = t7060 + t7533;
  t7746 = t835*t7670;
  t7870 = t355*t954;
  t8305 = t1176*t1046*t1181;
  t8669 = t7870 + t8305;
  t8809 = -1.*t1512*t8669;
  t9200 = t7746 + t8809;
  t10619 = t835*t431*t954;
  t10626 = -1.*t431*t1512*t1181;
  t10682 = t10619 + t10626;
  t665 = t355*t431*t598;
  t3870 = t754*t3124;
  t4189 = t665 + t3870;
  t5017 = t754*t355*t431;
  t5356 = -1.*t598*t3124;
  t5497 = t5017 + t5356;
  t6138 = t431*t598*t1176;
  t9336 = t754*t9200;
  t9865 = t6138 + t9336;
  t10440 = t754*t431*t1176;
  t10476 = -1.*t598*t9200;
  t10539 = t10440 + t10476;
  t10618 = -1.*t598*t1046;
  t10685 = t754*t10682;
  t10686 = t10618 + t10685;
  t10695 = -1.*t754*t1046;
  t10709 = -1.*t598*t10682;
  t10720 = t10695 + t10709;
  t10740 = t1512*t1240;
  t10751 = t835*t1679;
  t10752 = t10740 + t10751;
  t10875 = -1.*t5004;
  t10880 = 1. + t10875;
  t4890 = -1.*t260*t4189;
  t6007 = t5004*t5497;
  t6045 = t4890 + t6007;
  t10788 = t5004*t4189;
  t10792 = t260*t5497;
  t10794 = t10788 + t10792;
  t10809 = -1.*t754;
  t10811 = 1. + t10809;
  t10819 = -0.183*t10811;
  t10821 = 0. + t10819;
  t10832 = 0.047*t1512;
  t10833 = 0. + t10832;
  t10835 = -1.*t835;
  t10836 = 1. + t10835;
  t10841 = -0.047*t10836;
  t10842 = 0. + t10841;
  t10760 = t1512*t7670;
  t10766 = t835*t8669;
  t10774 = t10760 + t10766;
  t10855 = -0.183*t598;
  t10858 = 0. + t10855;
  t10882 = -0.15*t10880;
  t10883 = -0.183*t260;
  t10884 = 0. + t10882 + t10883;
  t10886 = -0.183*t10880;
  t10887 = 0.15*t260;
  t10888 = 0. + t10886 + t10887;
  t10332 = -1.*t260*t9865;
  t10584 = t5004*t10539;
  t10609 = t10332 + t10584;
  t10795 = t5004*t9865;
  t10797 = t260*t10539;
  t10798 = t10795 + t10797;
  t10776 = t431*t954*t1512;
  t10779 = t835*t431*t1181;
  t10784 = t10776 + t10779;
  t10689 = -1.*t260*t10686;
  t10732 = t5004*t10720;
  t10735 = t10689 + t10732;
  t10799 = t5004*t10686;
  t10802 = t260*t10720;
  t10805 = t10799 + t10802;
  p_output1[0]=t6045;
  p_output1[1]=t10609;
  p_output1[2]=t10735;
  p_output1[3]=0.;
  p_output1[4]=t10752;
  p_output1[5]=t10774;
  p_output1[6]=t10784;
  p_output1[7]=0.;
  p_output1[8]=t10794;
  p_output1[9]=t10798;
  p_output1[10]=t10805;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.13205*t10752 - 0.15*t10794 + t10833*t1240 + t10842*t1679 + t10858*t3124 + t10884*t4189 + t10821*t355*t431 + t10888*t5497 - 0.183*t6045 + var1[0];
  p_output1[13]=0. - 0.183*t10609 - 0.13205*t10774 - 0.15*t10798 + t10539*t10888 + t10821*t1176*t431 + t10833*t7670 + t10842*t8669 + t10858*t9200 + t10884*t9865 + var1[1];
  p_output1[14]=0. - 0.183*t10735 - 0.13205*t10784 - 0.15*t10805 - 1.*t1046*t10821 + t10682*t10858 + t10686*t10884 + t10720*t10888 + t10842*t1181*t431 + t10833*t431*t954 + var1[2];
  p_output1[15]=1.;
}



void H_RR_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
