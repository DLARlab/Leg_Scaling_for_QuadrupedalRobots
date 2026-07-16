/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:12:57 GMT-05:00
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
  double t3555;
  double t3623;
  double t3635;
  double t3632;
  double t3636;
  double t3589;
  double t3580;
  double t3583;
  double t3604;
  double t3634;
  double t3637;
  double t3638;
  double t3641;
  double t3647;
  double t3652;
  double t3654;
  double t3665;
  double t3670;
  double t3674;
  double t1051;
  double t3696;
  double t3707;
  double t3708;
  double t3715;
  double t3723;
  double t3733;
  double t3738;
  double t3740;
  double t3744;
  double t3745;
  double t3766;
  double t3767;
  double t3774;
  double t3587;
  double t3675;
  double t3676;
  double t3701;
  double t3702;
  double t3703;
  double t3706;
  double t3746;
  double t3747;
  double t3753;
  double t3754;
  double t3758;
  double t3765;
  double t3776;
  double t3780;
  double t3789;
  double t3790;
  double t3793;
  double t3800;
  double t3801;
  double t3802;
  double t3875;
  double t3876;
  double t3681;
  double t3704;
  double t3705;
  double t3828;
  double t3832;
  double t3834;
  double t3850;
  double t3851;
  double t3852;
  double t3853;
  double t3855;
  double t3857;
  double t3862;
  double t3866;
  double t3868;
  double t3869;
  double t3803;
  double t3804;
  double t3805;
  double t3872;
  double t3873;
  double t3877;
  double t3878;
  double t3879;
  double t3883;
  double t3884;
  double t3885;
  double t3749;
  double t3762;
  double t3764;
  double t3839;
  double t3843;
  double t3844;
  double t3807;
  double t3808;
  double t3820;
  double t3788;
  double t3797;
  double t3798;
  double t3845;
  double t3847;
  double t3849;
  t3555 = Cos(var1[3]);
  t3623 = Cos(var1[5]);
  t3635 = Sin(var1[3]);
  t3632 = Sin(var1[4]);
  t3636 = Sin(var1[5]);
  t3589 = Cos(var1[13]);
  t3580 = Cos(var1[4]);
  t3583 = Sin(var1[13]);
  t3604 = Cos(var1[12]);
  t3634 = t3555*t3623*t3632;
  t3637 = t3635*t3636;
  t3638 = t3634 + t3637;
  t3641 = t3604*t3638;
  t3647 = Sin(var1[12]);
  t3652 = -1.*t3623*t3635;
  t3654 = t3555*t3632*t3636;
  t3665 = t3652 + t3654;
  t3670 = -1.*t3647*t3665;
  t3674 = t3641 + t3670;
  t1051 = Sin(var1[14]);
  t3696 = Cos(var1[14]);
  t3707 = t3623*t3635*t3632;
  t3708 = -1.*t3555*t3636;
  t3715 = t3707 + t3708;
  t3723 = t3604*t3715;
  t3733 = t3555*t3623;
  t3738 = t3635*t3632*t3636;
  t3740 = t3733 + t3738;
  t3744 = -1.*t3647*t3740;
  t3745 = t3723 + t3744;
  t3766 = t3604*t3580*t3623;
  t3767 = -1.*t3580*t3647*t3636;
  t3774 = t3766 + t3767;
  t3587 = t3555*t3580*t3583;
  t3675 = t3589*t3674;
  t3676 = t3587 + t3675;
  t3701 = t3589*t3555*t3580;
  t3702 = -1.*t3583*t3674;
  t3703 = t3701 + t3702;
  t3706 = t3580*t3583*t3635;
  t3746 = t3589*t3745;
  t3747 = t3706 + t3746;
  t3753 = t3589*t3580*t3635;
  t3754 = -1.*t3583*t3745;
  t3758 = t3753 + t3754;
  t3765 = -1.*t3583*t3632;
  t3776 = t3589*t3774;
  t3780 = t3765 + t3776;
  t3789 = -1.*t3589*t3632;
  t3790 = -1.*t3583*t3774;
  t3793 = t3789 + t3790;
  t3800 = t3647*t3638;
  t3801 = t3604*t3665;
  t3802 = t3800 + t3801;
  t3875 = -1.*t3696;
  t3876 = 1. + t3875;
  t3681 = -1.*t1051*t3676;
  t3704 = t3696*t3703;
  t3705 = t3681 + t3704;
  t3828 = t3696*t3676;
  t3832 = t1051*t3703;
  t3834 = t3828 + t3832;
  t3850 = -1.*t3589;
  t3851 = 1. + t3850;
  t3852 = -0.183*t3851;
  t3853 = 0. + t3852;
  t3855 = 0.047*t3647;
  t3857 = 0. + t3855;
  t3862 = -1.*t3604;
  t3866 = 1. + t3862;
  t3868 = -0.047*t3866;
  t3869 = 0. + t3868;
  t3803 = t3647*t3715;
  t3804 = t3604*t3740;
  t3805 = t3803 + t3804;
  t3872 = -0.183*t3583;
  t3873 = 0. + t3872;
  t3877 = -0.1*t3876;
  t3878 = -0.183*t1051;
  t3879 = 0. + t3877 + t3878;
  t3883 = -0.183*t3876;
  t3884 = 0.1*t1051;
  t3885 = 0. + t3883 + t3884;
  t3749 = -1.*t1051*t3747;
  t3762 = t3696*t3758;
  t3764 = t3749 + t3762;
  t3839 = t3696*t3747;
  t3843 = t1051*t3758;
  t3844 = t3839 + t3843;
  t3807 = t3580*t3623*t3647;
  t3808 = t3604*t3580*t3636;
  t3820 = t3807 + t3808;
  t3788 = -1.*t1051*t3780;
  t3797 = t3696*t3793;
  t3798 = t3788 + t3797;
  t3845 = t3696*t3780;
  t3847 = t1051*t3793;
  t3849 = t3845 + t3847;
  p_output1[0]=t3705;
  p_output1[1]=t3764;
  p_output1[2]=t3798;
  p_output1[3]=0.;
  p_output1[4]=t3802;
  p_output1[5]=t3805;
  p_output1[6]=t3820;
  p_output1[7]=0.;
  p_output1[8]=t3834;
  p_output1[9]=t3844;
  p_output1[10]=t3849;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.183*t3705 - 0.08953*t3802 - 0.1*t3834 + t3555*t3580*t3853 + t3638*t3857 + t3665*t3869 + t3674*t3873 + t3676*t3879 + t3703*t3885 + var1[0];
  p_output1[13]=0. - 0.183*t3764 - 0.08953*t3805 - 0.1*t3844 + t3580*t3635*t3853 + t3715*t3857 + t3740*t3869 + t3745*t3873 + t3747*t3879 + t3758*t3885 + var1[1];
  p_output1[14]=0. - 0.183*t3798 - 0.08953*t3820 - 0.1*t3849 - 1.*t3632*t3853 + t3580*t3623*t3857 + t3580*t3636*t3869 + t3774*t3873 + t3780*t3879 + t3793*t3885 + var1[2];
  p_output1[15]=1.;
}



void H_RR_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
