/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:13:06 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FRfoot_src.h"

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
  double t749;
  double t5529;
  double t5547;
  double t5538;
  double t5585;
  double t859;
  double t2527;
  double t5542;
  double t5594;
  double t5596;
  double t5598;
  double t5612;
  double t5615;
  double t5616;
  double t5618;
  double t5621;
  double t5622;
  double t750;
  double t5625;
  double t732;
  double t5681;
  double t5682;
  double t5684;
  double t5685;
  double t5686;
  double t5687;
  double t5688;
  double t5689;
  double t5694;
  double t5672;
  double t5722;
  double t5726;
  double t5748;
  double t5644;
  double t5648;
  double t5650;
  double t863;
  double t5635;
  double t5640;
  double t5703;
  double t5708;
  double t5712;
  double t5680;
  double t5698;
  double t5699;
  double t5754;
  double t5755;
  double t5756;
  double t5719;
  double t5749;
  double t5750;
  double t5761;
  double t5777;
  double t5778;
  double t5853;
  double t5854;
  double t5643;
  double t5673;
  double t5674;
  double t5785;
  double t5786;
  double t5787;
  double t5802;
  double t5804;
  double t5809;
  double t5810;
  double t5817;
  double t5818;
  double t5820;
  double t5821;
  double t5841;
  double t5843;
  double t5779;
  double t5780;
  double t5781;
  double t5847;
  double t5848;
  double t5855;
  double t5857;
  double t5858;
  double t5862;
  double t5863;
  double t5864;
  double t5702;
  double t5715;
  double t5718;
  double t5788;
  double t5791;
  double t5794;
  double t5782;
  double t5783;
  double t5784;
  double t5753;
  double t5757;
  double t5758;
  double t5795;
  double t5796;
  double t5797;
  t749 = Cos(var1[3]);
  t5529 = Cos(var1[5]);
  t5547 = Sin(var1[3]);
  t5538 = Sin(var1[4]);
  t5585 = Sin(var1[5]);
  t859 = Cos(var1[7]);
  t2527 = Cos(var1[6]);
  t5542 = t749*t5529*t5538;
  t5594 = t5547*t5585;
  t5596 = t5542 + t5594;
  t5598 = t2527*t5596;
  t5612 = -1.*t5529*t5547;
  t5615 = t749*t5538*t5585;
  t5616 = t5612 + t5615;
  t5618 = Sin(var1[6]);
  t5621 = -1.*t5616*t5618;
  t5622 = t5598 + t5621;
  t750 = Cos(var1[4]);
  t5625 = Sin(var1[7]);
  t732 = Cos(var1[8]);
  t5681 = t5529*t5547*t5538;
  t5682 = -1.*t749*t5585;
  t5684 = t5681 + t5682;
  t5685 = t2527*t5684;
  t5686 = t749*t5529;
  t5687 = t5547*t5538*t5585;
  t5688 = t5686 + t5687;
  t5689 = -1.*t5688*t5618;
  t5694 = t5685 + t5689;
  t5672 = Sin(var1[8]);
  t5722 = t750*t5529*t2527;
  t5726 = -1.*t750*t5585*t5618;
  t5748 = t5722 + t5726;
  t5644 = t859*t5622;
  t5648 = t749*t750*t5625;
  t5650 = t5644 + t5648;
  t863 = t749*t750*t859;
  t5635 = -1.*t5622*t5625;
  t5640 = t863 + t5635;
  t5703 = t859*t5694;
  t5708 = t750*t5547*t5625;
  t5712 = t5703 + t5708;
  t5680 = t750*t859*t5547;
  t5698 = -1.*t5694*t5625;
  t5699 = t5680 + t5698;
  t5754 = t859*t5748;
  t5755 = -1.*t5538*t5625;
  t5756 = t5754 + t5755;
  t5719 = -1.*t859*t5538;
  t5749 = -1.*t5748*t5625;
  t5750 = t5719 + t5749;
  t5761 = t2527*t5616;
  t5777 = t5596*t5618;
  t5778 = t5761 + t5777;
  t5853 = -1.*t732;
  t5854 = 1. + t5853;
  t5643 = t732*t5640;
  t5673 = -1.*t5650*t5672;
  t5674 = t5643 + t5673;
  t5785 = t732*t5650;
  t5786 = t5640*t5672;
  t5787 = t5785 + t5786;
  t5802 = -1.*t859;
  t5804 = 1. + t5802;
  t5809 = 0.183*t5804;
  t5810 = 0. + t5809;
  t5817 = -1.*t2527;
  t5818 = 1. + t5817;
  t5820 = -0.047*t5818;
  t5821 = 0. + t5820;
  t5841 = 0.047*t5618;
  t5843 = 0. + t5841;
  t5779 = t2527*t5688;
  t5780 = t5684*t5618;
  t5781 = t5779 + t5780;
  t5847 = 0.183*t5625;
  t5848 = 0. + t5847;
  t5855 = 0.183*t5854;
  t5857 = 0.1*t5672;
  t5858 = 0. + t5855 + t5857;
  t5862 = -0.1*t5854;
  t5863 = 0.183*t5672;
  t5864 = 0. + t5862 + t5863;
  t5702 = t732*t5699;
  t5715 = -1.*t5712*t5672;
  t5718 = t5702 + t5715;
  t5788 = t732*t5712;
  t5791 = t5699*t5672;
  t5794 = t5788 + t5791;
  t5782 = t750*t2527*t5585;
  t5783 = t750*t5529*t5618;
  t5784 = t5782 + t5783;
  t5753 = t732*t5750;
  t5757 = -1.*t5756*t5672;
  t5758 = t5753 + t5757;
  t5795 = t732*t5756;
  t5796 = t5750*t5672;
  t5797 = t5795 + t5796;
  p_output1[0]=t5674;
  p_output1[1]=t5718;
  p_output1[2]=t5758;
  p_output1[3]=0.;
  p_output1[4]=t5778;
  p_output1[5]=t5781;
  p_output1[6]=t5784;
  p_output1[7]=0.;
  p_output1[8]=t5787;
  p_output1[9]=t5794;
  p_output1[10]=t5797;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.183*t5674 - 0.08953*t5778 - 0.2*t5787 + t5616*t5821 + t5596*t5843 + t5622*t5848 + t5640*t5858 + t5650*t5864 + t5810*t749*t750 + var1[0];
  p_output1[13]=0. + 0.183*t5718 - 0.08953*t5781 - 0.2*t5794 + t5688*t5821 + t5684*t5843 + t5694*t5848 + t5699*t5858 + t5712*t5864 + t5547*t5810*t750 + var1[1];
  p_output1[14]=0. + 0.183*t5758 - 0.08953*t5784 - 0.2*t5797 - 1.*t5538*t5810 + t5748*t5848 + t5750*t5858 + t5756*t5864 + t5585*t5821*t750 + t5529*t5843*t750 + var1[2];
  p_output1[15]=1.;
}



void H_FRfoot_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
