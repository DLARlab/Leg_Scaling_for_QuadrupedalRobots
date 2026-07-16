/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:12:57 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RR_calf_joint_src.h"

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
  double t3462;
  double t3491;
  double t3487;
  double t3489;
  double t3494;
  double t3479;
  double t3490;
  double t3499;
  double t3501;
  double t3507;
  double t3527;
  double t3528;
  double t3529;
  double t3451;
  double t3535;
  double t3406;
  double t3538;
  double t3540;
  double t3542;
  double t3547;
  double t3549;
  double t3551;
  double t3556;
  double t3561;
  double t3563;
  double t3564;
  double t3572;
  double t3573;
  double t3574;
  double t3418;
  double t3431;
  double t3449;
  double t3450;
  double t3480;
  double t3484;
  double t3511;
  double t3515;
  double t3516;
  double t3524;
  double t3589;
  double t3591;
  double t3595;
  double t3597;
  double t3598;
  double t3599;
  double t3536;
  double t3537;
  double t3555;
  double t3559;
  double t3560;
  double t3605;
  double t3606;
  double t3607;
  double t3569;
  double t3570;
  double t3571;
  double t3609;
  double t3610;
  double t3611;
  double t3615;
  double t3617;
  double t3619;
  double t3641;
  double t3643;
  double t3645;
  double t3651;
  double t3652;
  double t3653;
  double t3655;
  double t3656;
  double t3657;
  double t3678;
  double t3679;
  double t3680;
  double t3682;
  double t3683;
  double t3684;
  double t3688;
  double t3691;
  double t3692;
  double t3721;
  double t3723;
  double t3725;
  double t3728;
  double t3729;
  double t3732;
  double t3734;
  double t3735;
  double t3736;
  double t3749;
  double t3752;
  double t3753;
  double t3757;
  double t3758;
  double t3759;
  double t3777;
  double t3778;
  double t3779;
  double t3532;
  double t3783;
  double t3784;
  double t3812;
  double t3813;
  double t3815;
  double t3835;
  double t3837;
  double t3854;
  double t3855;
  double t3856;
  double t3858;
  double t3859;
  double t3789;
  double t3816;
  double t3817;
  double t3819;
  double t3820;
  double t3821;
  double t3822;
  double t3823;
  double t3824;
  double t3825;
  double t3826;
  double t3827;
  double t3828;
  double t3829;
  double t3830;
  double t3831;
  double t3880;
  double t3881;
  double t3882;
  double t3625;
  double t3863;
  double t3864;
  double t3895;
  double t3896;
  double t3898;
  double t3899;
  double t3900;
  double t3913;
  double t3914;
  double t3915;
  double t3917;
  double t3918;
  double t3919;
  double t3624;
  double t3626;
  double t3889;
  double t3930;
  double t3931;
  double t3932;
  double t3934;
  double t3935;
  double t3942;
  double t3943;
  double t3944;
  double t3903;
  double t3907;
  double t3954;
  double t3955;
  double t3956;
  double t3922;
  double t3926;
  t3462 = Sin(var1[3]);
  t3491 = Cos(var1[3]);
  t3487 = Cos(var1[5]);
  t3489 = Sin(var1[4]);
  t3494 = Sin(var1[5]);
  t3479 = Sin(var1[12]);
  t3490 = -1.*t3487*t3462*t3489;
  t3499 = t3491*t3494;
  t3501 = t3490 + t3499;
  t3507 = Cos(var1[12]);
  t3527 = -1.*t3491*t3487;
  t3528 = -1.*t3462*t3489*t3494;
  t3529 = t3527 + t3528;
  t3451 = Cos(var1[4]);
  t3535 = Sin(var1[13]);
  t3406 = Cos(var1[13]);
  t3538 = t3507*t3501;
  t3540 = -1.*t3479*t3529;
  t3542 = t3538 + t3540;
  t3547 = Cos(var1[14]);
  t3549 = -1.*t3547;
  t3551 = 1. + t3549;
  t3556 = Sin(var1[14]);
  t3561 = -1.*t3451*t3535*t3462;
  t3563 = t3406*t3542;
  t3564 = t3561 + t3563;
  t3572 = -1.*t3406*t3451*t3462;
  t3573 = -1.*t3535*t3542;
  t3574 = t3572 + t3573;
  t3418 = -1.*t3406;
  t3431 = 1. + t3418;
  t3449 = -0.183*t3431;
  t3450 = 0. + t3449;
  t3480 = 0.047*t3479;
  t3484 = 0. + t3480;
  t3511 = -1.*t3507;
  t3515 = 1. + t3511;
  t3516 = -0.047*t3515;
  t3524 = 0. + t3516;
  t3589 = t3491*t3487*t3489;
  t3591 = t3462*t3494;
  t3595 = t3589 + t3591;
  t3597 = -1.*t3487*t3462;
  t3598 = t3491*t3489*t3494;
  t3599 = t3597 + t3598;
  t3536 = -0.183*t3535;
  t3537 = 0. + t3536;
  t3555 = -0.1*t3551;
  t3559 = -0.183*t3556;
  t3560 = 0. + t3555 + t3559;
  t3605 = t3507*t3595;
  t3606 = -1.*t3479*t3599;
  t3607 = t3605 + t3606;
  t3569 = -0.183*t3551;
  t3570 = 0.1*t3556;
  t3571 = 0. + t3569 + t3570;
  t3609 = t3491*t3451*t3535;
  t3610 = t3406*t3607;
  t3611 = t3609 + t3610;
  t3615 = t3406*t3491*t3451;
  t3617 = -1.*t3535*t3607;
  t3619 = t3615 + t3617;
  t3641 = t3507*t3491*t3451*t3487;
  t3643 = -1.*t3491*t3451*t3479*t3494;
  t3645 = t3641 + t3643;
  t3651 = -1.*t3491*t3535*t3489;
  t3652 = t3406*t3645;
  t3653 = t3651 + t3652;
  t3655 = -1.*t3406*t3491*t3489;
  t3656 = -1.*t3535*t3645;
  t3657 = t3655 + t3656;
  t3678 = t3507*t3451*t3487*t3462;
  t3679 = -1.*t3451*t3479*t3462*t3494;
  t3680 = t3678 + t3679;
  t3682 = -1.*t3535*t3462*t3489;
  t3683 = t3406*t3680;
  t3684 = t3682 + t3683;
  t3688 = -1.*t3406*t3462*t3489;
  t3691 = -1.*t3535*t3680;
  t3692 = t3688 + t3691;
  t3721 = -1.*t3507*t3487*t3489;
  t3723 = t3479*t3489*t3494;
  t3725 = t3721 + t3723;
  t3728 = -1.*t3451*t3535;
  t3729 = t3406*t3725;
  t3732 = t3728 + t3729;
  t3734 = -1.*t3406*t3451;
  t3735 = -1.*t3535*t3725;
  t3736 = t3734 + t3735;
  t3749 = t3487*t3462;
  t3752 = -1.*t3491*t3489*t3494;
  t3753 = t3749 + t3752;
  t3757 = -1.*t3479*t3595;
  t3758 = t3507*t3753;
  t3759 = t3757 + t3758;
  t3777 = t3487*t3462*t3489;
  t3778 = -1.*t3491*t3494;
  t3779 = t3777 + t3778;
  t3532 = t3507*t3529;
  t3783 = -1.*t3479*t3779;
  t3784 = t3783 + t3532;
  t3812 = -1.*t3451*t3487*t3479;
  t3813 = -1.*t3507*t3451*t3494;
  t3815 = t3812 + t3813;
  t3835 = -1.*t3507*t3599;
  t3837 = t3757 + t3835;
  t3854 = t3491*t3487;
  t3855 = t3462*t3489*t3494;
  t3856 = t3854 + t3855;
  t3858 = -1.*t3507*t3856;
  t3859 = t3783 + t3858;
  t3789 = t3507*t3779;
  t3816 = t3537*t3815;
  t3817 = t3406*t3560*t3815;
  t3819 = -1.*t3535*t3571*t3815;
  t3820 = t3507*t3451*t3487;
  t3821 = -1.*t3451*t3479*t3494;
  t3822 = t3820 + t3821;
  t3823 = -0.08953*t3822;
  t3824 = -1.*t3547*t3535*t3815;
  t3825 = -1.*t3406*t3556*t3815;
  t3826 = t3824 + t3825;
  t3827 = -0.183*t3826;
  t3828 = t3406*t3547*t3815;
  t3829 = -1.*t3535*t3556*t3815;
  t3830 = t3828 + t3829;
  t3831 = -0.1*t3830;
  t3880 = -1.*t3491*t3451*t3535;
  t3881 = -1.*t3406*t3607;
  t3882 = t3880 + t3881;
  t3625 = t3547*t3619;
  t3863 = -1.*t3479*t3856;
  t3864 = t3789 + t3863;
  t3895 = -1.*t3406*t3864;
  t3896 = t3561 + t3895;
  t3898 = t3406*t3451*t3462;
  t3899 = -1.*t3535*t3864;
  t3900 = t3898 + t3899;
  t3913 = t3535*t3489;
  t3914 = -1.*t3406*t3822;
  t3915 = t3913 + t3914;
  t3917 = -1.*t3406*t3489;
  t3918 = -1.*t3535*t3822;
  t3919 = t3917 + t3918;
  t3624 = -1.*t3556*t3611;
  t3626 = t3624 + t3625;
  t3889 = -1.*t3556*t3619;
  t3930 = -0.183*t3547;
  t3931 = -0.1*t3556;
  t3932 = t3930 + t3931;
  t3934 = 0.1*t3547;
  t3935 = t3934 + t3559;
  t3942 = t3451*t3535*t3462;
  t3943 = t3406*t3864;
  t3944 = t3942 + t3943;
  t3903 = t3547*t3900;
  t3907 = -1.*t3556*t3900;
  t3954 = -1.*t3535*t3489;
  t3955 = t3406*t3822;
  t3956 = t3954 + t3955;
  t3922 = t3547*t3919;
  t3926 = -1.*t3556*t3919;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=-1.*t3450*t3451*t3462 + t3484*t3501 + t3524*t3529 - 0.08953*(t3479*t3501 + t3532) + t3537*t3542 + t3560*t3564 + t3571*t3574 - 0.183*(-1.*t3556*t3564 + t3547*t3574) - 0.1*(t3547*t3564 + t3556*t3574);
  p_output1[10]=t3450*t3451*t3491 + t3484*t3595 + t3524*t3599 - 0.08953*(t3479*t3595 + t3507*t3599) + t3537*t3607 + t3560*t3611 + t3571*t3619 - 0.1*(t3547*t3611 + t3556*t3619) - 0.183*t3626;
  p_output1[11]=0;
  p_output1[12]=t3451*t3484*t3487*t3491 - 1.*t3450*t3489*t3491 - 0.08953*(t3451*t3479*t3487*t3491 + t3451*t3491*t3494*t3507) + t3451*t3491*t3494*t3524 + t3537*t3645 + t3560*t3653 + t3571*t3657 - 0.183*(-1.*t3556*t3653 + t3547*t3657) - 0.1*(t3547*t3653 + t3556*t3657);
  p_output1[13]=t3451*t3462*t3484*t3487 - 1.*t3450*t3462*t3489 - 0.08953*(t3451*t3462*t3479*t3487 + t3451*t3462*t3494*t3507) + t3451*t3462*t3494*t3524 + t3537*t3680 + t3560*t3684 + t3571*t3692 - 0.183*(-1.*t3556*t3684 + t3547*t3692) - 0.1*(t3547*t3684 + t3556*t3692);
  p_output1[14]=-1.*t3450*t3451 - 1.*t3484*t3487*t3489 - 0.08953*(-1.*t3479*t3487*t3489 - 1.*t3489*t3494*t3507) - 1.*t3489*t3494*t3524 + t3537*t3725 + t3560*t3732 + t3571*t3736 - 0.183*(-1.*t3556*t3732 + t3547*t3736) - 0.1*(t3547*t3732 + t3556*t3736);
  p_output1[15]=t3524*t3595 + t3484*t3753 - 0.08953*(t3605 + t3479*t3753) + t3537*t3759 + t3406*t3560*t3759 - 1.*t3535*t3571*t3759 - 0.183*(-1.*t3535*t3547*t3759 - 1.*t3406*t3556*t3759) - 0.1*(t3406*t3547*t3759 - 1.*t3535*t3556*t3759);
  p_output1[16]=t3484*t3529 + t3524*t3779 + t3537*t3784 + t3406*t3560*t3784 - 1.*t3535*t3571*t3784 - 0.183*(-1.*t3535*t3547*t3784 - 1.*t3406*t3556*t3784) - 0.1*(t3406*t3547*t3784 - 1.*t3535*t3556*t3784) - 0.08953*(t3479*t3529 + t3789);
  p_output1[17]=-1.*t3451*t3484*t3494 + t3451*t3487*t3524 + t3816 + t3817 + t3819 + t3823 + t3827 + t3831;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0.047*t3507*t3595 - 0.047*t3479*t3599 - 0.08953*t3607 + t3537*t3837 + t3406*t3560*t3837 - 1.*t3535*t3571*t3837 - 0.183*(-1.*t3535*t3547*t3837 - 1.*t3406*t3556*t3837) - 0.1*(t3406*t3547*t3837 - 1.*t3535*t3556*t3837);
  p_output1[37]=0.047*t3507*t3779 - 0.047*t3479*t3856 + t3537*t3859 + t3406*t3560*t3859 - 1.*t3535*t3571*t3859 - 0.183*(-1.*t3535*t3547*t3859 - 1.*t3406*t3556*t3859) - 0.1*(t3406*t3547*t3859 - 1.*t3535*t3556*t3859) - 0.08953*t3864;
  p_output1[38]=-0.047*t3451*t3479*t3494 + 0.047*t3451*t3487*t3507 + t3816 + t3817 + t3819 + t3823 + t3827 + t3831;
  p_output1[39]=-0.183*t3451*t3491*t3535 - 0.183*t3406*t3607 + t3560*t3619 + t3571*t3882 - 0.1*(t3625 + t3556*t3882) - 0.183*(t3547*t3882 + t3889);
  p_output1[40]=-0.183*t3451*t3462*t3535 - 0.183*t3406*t3864 + t3571*t3896 + t3560*t3900 - 0.1*(t3556*t3896 + t3903) - 0.183*(t3547*t3896 + t3907);
  p_output1[41]=0.183*t3489*t3535 - 0.183*t3406*t3822 + t3571*t3915 + t3560*t3919 - 0.1*(t3556*t3915 + t3922) - 0.183*(t3547*t3915 + t3926);
  p_output1[42]=-0.1*t3626 - 0.183*(-1.*t3547*t3611 + t3889) + t3611*t3932 + t3619*t3935;
  p_output1[43]=t3900*t3935 + t3932*t3944 - 0.183*(t3907 - 1.*t3547*t3944) - 0.1*(t3903 - 1.*t3556*t3944);
  p_output1[44]=t3919*t3935 + t3932*t3956 - 0.183*(t3926 - 1.*t3547*t3956) - 0.1*(t3922 - 1.*t3556*t3956);
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
}



void Jp_RR_calf_joint_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
