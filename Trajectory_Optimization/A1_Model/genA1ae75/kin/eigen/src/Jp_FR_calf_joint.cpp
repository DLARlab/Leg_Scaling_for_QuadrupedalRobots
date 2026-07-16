/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:51:34 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_FR_calf_joint.h"

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
static void output1(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  double t1200;
  double t2376;
  double t2435;
  double t1854;
  double t2509;
  double t1401;
  double t2379;
  double t2535;
  double t2759;
  double t2916;
  double t2990;
  double t2995;
  double t3075;
  double t438;
  double t983;
  double t3289;
  double t3345;
  double t3369;
  double t3379;
  double t3463;
  double t3512;
  double t3530;
  double t3554;
  double t3436;
  double t3441;
  double t3442;
  double t3583;
  double t3599;
  double t3610;
  double t1012;
  double t1036;
  double t1128;
  double t1152;
  double t1483;
  double t1668;
  double t1706;
  double t1709;
  double t3109;
  double t3124;
  double t3751;
  double t3754;
  double t3756;
  double t3763;
  double t3767;
  double t3778;
  double t3384;
  double t3390;
  double t3895;
  double t3912;
  double t3914;
  double t3544;
  double t3562;
  double t3564;
  double t3616;
  double t3623;
  double t3624;
  double t3939;
  double t3946;
  double t3947;
  double t3962;
  double t3971;
  double t3984;
  double t4122;
  double t4136;
  double t4144;
  double t4166;
  double t4176;
  double t4194;
  double t4262;
  double t4263;
  double t4268;
  double t4378;
  double t4381;
  double t4382;
  double t4386;
  double t4387;
  double t4393;
  double t4528;
  double t4564;
  double t4576;
  double t4788;
  double t4790;
  double t4794;
  double t4821;
  double t4828;
  double t4829;
  double t4832;
  double t4838;
  double t4841;
  double t4892;
  double t4919;
  double t4920;
  double t5028;
  double t5039;
  double t5044;
  double t5118;
  double t5121;
  double t5124;
  double t3184;
  double t5195;
  double t5201;
  double t5772;
  double t5831;
  double t5848;
  double t6122;
  double t6130;
  double t5155;
  double t6525;
  double t6544;
  double t6548;
  double t6660;
  double t6671;
  double t5631;
  double t5683;
  double t5707;
  double t5729;
  double t5882;
  double t5899;
  double t5921;
  double t5931;
  double t5961;
  double t5970;
  double t5980;
  double t5997;
  double t6031;
  double t6037;
  double t6042;
  double t3987;
  double t6988;
  double t6990;
  double t7002;
  double t6566;
  double t6579;
  double t7309;
  double t7496;
  double t7549;
  double t7278;
  double t7290;
  double t8216;
  double t8219;
  double t8387;
  double t7987;
  double t7988;
  double t8078;
  double t3995;
  double t4000;
  double t7094;
  double t8809;
  double t8953;
  double t8959;
  double t8965;
  double t8976;
  double t7567;
  double t9018;
  double t9025;
  double t9028;
  double t7633;
  double t8416;
  double t9065;
  double t9066;
  double t9069;
  double t8665;
  t1200 = Sin(var1[3]);
  t2376 = Cos(var1[5]);
  t2435 = Sin(var1[4]);
  t1854 = Cos(var1[3]);
  t2509 = Sin(var1[5]);
  t1401 = Cos(var1[6]);
  t2379 = -1.*t1854*t2376;
  t2535 = -1.*t1200*t2435*t2509;
  t2759 = t2379 + t2535;
  t2916 = -1.*t2376*t1200*t2435;
  t2990 = t1854*t2509;
  t2995 = t2916 + t2990;
  t3075 = Sin(var1[6]);
  t438 = Cos(var1[4]);
  t983 = Cos(var1[7]);
  t3289 = t1401*t2995;
  t3345 = -1.*t2759*t3075;
  t3369 = t3289 + t3345;
  t3379 = Sin(var1[7]);
  t3463 = Cos(var1[8]);
  t3512 = -1.*t3463;
  t3530 = 1. + t3512;
  t3554 = Sin(var1[8]);
  t3436 = -1.*t438*t983*t1200;
  t3441 = -1.*t3369*t3379;
  t3442 = t3436 + t3441;
  t3583 = t983*t3369;
  t3599 = -1.*t438*t1200*t3379;
  t3610 = t3583 + t3599;
  t1012 = -1.*t983;
  t1036 = 1. + t1012;
  t1128 = 0.183*t1036;
  t1152 = 0. + t1128;
  t1483 = -1.*t1401;
  t1668 = 1. + t1483;
  t1706 = -0.047*t1668;
  t1709 = 0. + t1706;
  t3109 = 0.047*t3075;
  t3124 = 0. + t3109;
  t3751 = -1.*t2376*t1200;
  t3754 = t1854*t2435*t2509;
  t3756 = t3751 + t3754;
  t3763 = t1854*t2376*t2435;
  t3767 = t1200*t2509;
  t3778 = t3763 + t3767;
  t3384 = 0.183*t3379;
  t3390 = 0. + t3384;
  t3895 = t1401*t3778;
  t3912 = -1.*t3756*t3075;
  t3914 = t3895 + t3912;
  t3544 = 0.183*t3530;
  t3562 = 0.15*t3554;
  t3564 = 0. + t3544 + t3562;
  t3616 = -0.15*t3530;
  t3623 = 0.183*t3554;
  t3624 = 0. + t3616 + t3623;
  t3939 = t1854*t438*t983;
  t3946 = -1.*t3914*t3379;
  t3947 = t3939 + t3946;
  t3962 = t983*t3914;
  t3971 = t1854*t438*t3379;
  t3984 = t3962 + t3971;
  t4122 = t1854*t438*t2376*t1401;
  t4136 = -1.*t1854*t438*t2509*t3075;
  t4144 = t4122 + t4136;
  t4166 = -1.*t1854*t983*t2435;
  t4176 = -1.*t4144*t3379;
  t4194 = t4166 + t4176;
  t4262 = t983*t4144;
  t4263 = -1.*t1854*t2435*t3379;
  t4268 = t4262 + t4263;
  t4378 = t438*t2376*t1401*t1200;
  t4381 = -1.*t438*t1200*t2509*t3075;
  t4382 = t4378 + t4381;
  t4386 = -1.*t983*t1200*t2435;
  t4387 = -1.*t4382*t3379;
  t4393 = t4386 + t4387;
  t4528 = t983*t4382;
  t4564 = -1.*t1200*t2435*t3379;
  t4576 = t4528 + t4564;
  t4788 = -1.*t2376*t1401*t2435;
  t4790 = t2435*t2509*t3075;
  t4794 = t4788 + t4790;
  t4821 = -1.*t438*t983;
  t4828 = -1.*t4794*t3379;
  t4829 = t4821 + t4828;
  t4832 = t983*t4794;
  t4838 = -1.*t438*t3379;
  t4841 = t4832 + t4838;
  t4892 = t2376*t1200;
  t4919 = -1.*t1854*t2435*t2509;
  t4920 = t4892 + t4919;
  t5028 = t1401*t4920;
  t5039 = -1.*t3778*t3075;
  t5044 = t5028 + t5039;
  t5118 = t2376*t1200*t2435;
  t5121 = -1.*t1854*t2509;
  t5124 = t5118 + t5121;
  t3184 = t1401*t2759;
  t5195 = -1.*t5124*t3075;
  t5201 = t3184 + t5195;
  t5772 = -1.*t438*t1401*t2509;
  t5831 = -1.*t438*t2376*t3075;
  t5848 = t5772 + t5831;
  t6122 = -1.*t1401*t3756;
  t6130 = t6122 + t5039;
  t5155 = t1401*t5124;
  t6525 = t1854*t2376;
  t6544 = t1200*t2435*t2509;
  t6548 = t6525 + t6544;
  t6660 = -1.*t1401*t6548;
  t6671 = t6660 + t5195;
  t5631 = t438*t2376*t1401;
  t5683 = -1.*t438*t2509*t3075;
  t5707 = t5631 + t5683;
  t5729 = -0.13205*t5707;
  t5882 = t5848*t3390;
  t5899 = -1.*t5848*t3379*t3564;
  t5921 = t983*t5848*t3624;
  t5931 = -1.*t3463*t5848*t3379;
  t5961 = -1.*t983*t5848*t3554;
  t5970 = t5931 + t5961;
  t5980 = 0.183*t5970;
  t5997 = t983*t3463*t5848;
  t6031 = -1.*t5848*t3379*t3554;
  t6037 = t5997 + t6031;
  t6042 = -0.15*t6037;
  t3987 = t3463*t3947;
  t6988 = -1.*t983*t3914;
  t6990 = -1.*t1854*t438*t3379;
  t7002 = t6988 + t6990;
  t6566 = -1.*t6548*t3075;
  t6579 = t5155 + t6566;
  t7309 = t438*t983*t1200;
  t7496 = -1.*t6579*t3379;
  t7549 = t7309 + t7496;
  t7278 = -1.*t983*t6579;
  t7290 = t7278 + t3599;
  t8216 = -1.*t983*t2435;
  t8219 = -1.*t5707*t3379;
  t8387 = t8216 + t8219;
  t7987 = -1.*t983*t5707;
  t7988 = t2435*t3379;
  t8078 = t7987 + t7988;
  t3995 = -1.*t3984*t3554;
  t4000 = t3987 + t3995;
  t7094 = -1.*t3947*t3554;
  t8809 = 0.183*t3463;
  t8953 = -0.15*t3554;
  t8959 = t8809 + t8953;
  t8965 = 0.15*t3463;
  t8976 = t8965 + t3623;
  t7567 = t3463*t7549;
  t9018 = t983*t6579;
  t9025 = t438*t1200*t3379;
  t9028 = t9018 + t9025;
  t7633 = -1.*t7549*t3554;
  t8416 = t3463*t8387;
  t9065 = t983*t5707;
  t9066 = -1.*t2435*t3379;
  t9069 = t9065 + t9066;
  t8665 = -1.*t8387*t3554;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t1709*t2759 + t2995*t3124 - 0.13205*(t2995*t3075 + t3184) + t3369*t3390 + t3442*t3564 - 0.15*(t3442*t3554 + t3463*t3610) + 0.183*(t3442*t3463 - 1.*t3554*t3610) + t3610*t3624 - 1.*t1152*t1200*t438;
  p_output1(10)=t1709*t3756 + t3124*t3778 - 0.13205*(t1401*t3756 + t3075*t3778) + t3390*t3914 + t3564*t3947 + t3624*t3984 - 0.15*(t3554*t3947 + t3463*t3984) + 0.183*t4000 + t1152*t1854*t438;
  p_output1(11)=0;
  p_output1(12)=-1.*t1152*t1854*t2435 + t3390*t4144 + t3564*t4194 + t3624*t4268 - 0.15*(t3554*t4194 + t3463*t4268) + 0.183*(t3463*t4194 - 1.*t3554*t4268) + t1709*t1854*t2509*t438 + t1854*t2376*t3124*t438 - 0.13205*(t1401*t1854*t2509*t438 + t1854*t2376*t3075*t438);
  p_output1(13)=-1.*t1152*t1200*t2435 + t1200*t1709*t2509*t438 + t1200*t2376*t3124*t438 - 0.13205*(t1200*t1401*t2509*t438 + t1200*t2376*t3075*t438) + t3390*t4382 + t3564*t4393 + t3624*t4576 - 0.15*(t3554*t4393 + t3463*t4576) + 0.183*(t3463*t4393 - 1.*t3554*t4576);
  p_output1(14)=-1.*t1709*t2435*t2509 - 0.13205*(-1.*t1401*t2435*t2509 - 1.*t2376*t2435*t3075) - 1.*t2376*t2435*t3124 - 1.*t1152*t438 + t3390*t4794 + t3564*t4829 + t3624*t4841 - 0.15*(t3554*t4829 + t3463*t4841) + 0.183*(t3463*t4829 - 1.*t3554*t4841);
  p_output1(15)=t1709*t3778 + t3124*t4920 - 0.13205*(t3895 + t3075*t4920) + t3390*t5044 - 1.*t3379*t3564*t5044 + t3624*t5044*t983 - 0.15*(-1.*t3379*t3554*t5044 + t3463*t5044*t983) + 0.183*(-1.*t3379*t3463*t5044 - 1.*t3554*t5044*t983);
  p_output1(16)=t2759*t3124 + t1709*t5124 - 0.13205*(t2759*t3075 + t5155) + t3390*t5201 - 1.*t3379*t3564*t5201 + t3624*t5201*t983 - 0.15*(-1.*t3379*t3554*t5201 + t3463*t5201*t983) + 0.183*(-1.*t3379*t3463*t5201 - 1.*t3554*t5201*t983);
  p_output1(17)=t1709*t2376*t438 - 1.*t2509*t3124*t438 + t5729 + t5882 + t5899 + t5921 + t5980 + t6042;
  p_output1(18)=-0.047*t3075*t3756 + 0.047*t1401*t3778 - 0.13205*t3914 + t3390*t6130 - 1.*t3379*t3564*t6130 + t3624*t6130*t983 - 0.15*(-1.*t3379*t3554*t6130 + t3463*t6130*t983) + 0.183*(-1.*t3379*t3463*t6130 - 1.*t3554*t6130*t983);
  p_output1(19)=0.047*t1401*t5124 - 0.047*t3075*t6548 - 0.13205*t6579 + t3390*t6671 - 1.*t3379*t3564*t6671 + t3624*t6671*t983 - 0.15*(-1.*t3379*t3554*t6671 + t3463*t6671*t983) + 0.183*(-1.*t3379*t3463*t6671 - 1.*t3554*t6671*t983);
  p_output1(20)=0.047*t1401*t2376*t438 - 0.047*t2509*t3075*t438 + t5729 + t5882 + t5899 + t5921 + t5980 + t6042;
  p_output1(21)=t3624*t3947 + 0.183*t1854*t3379*t438 + t3564*t7002 - 0.15*(t3987 + t3554*t7002) + 0.183*(t3463*t7002 + t7094) + 0.183*t3914*t983;
  p_output1(22)=0.183*t1200*t3379*t438 + t3564*t7290 + t3624*t7549 - 0.15*(t3554*t7290 + t7567) + 0.183*(t3463*t7290 + t7633) + 0.183*t6579*t983;
  p_output1(23)=-0.183*t2435*t3379 + t3564*t8078 + t3624*t8387 - 0.15*(t3554*t8078 + t8416) + 0.183*(t3463*t8078 + t8665) + 0.183*t5707*t983;
  p_output1(24)=-0.15*t4000 + 0.183*(-1.*t3463*t3984 + t7094) + t3984*t8959 + t3947*t8976;
  p_output1(25)=t7549*t8976 + t8959*t9028 + 0.183*(t7633 - 1.*t3463*t9028) - 0.15*(t7567 - 1.*t3554*t9028);
  p_output1(26)=t8387*t8976 + t8959*t9069 + 0.183*(t8665 - 1.*t3463*t9069) - 0.15*(t8416 - 1.*t3554*t9069);
  p_output1(27)=0;
  p_output1(28)=0;
  p_output1(29)=0;
  p_output1(30)=0;
  p_output1(31)=0;
  p_output1(32)=0;
  p_output1(33)=0;
  p_output1(34)=0;
  p_output1(35)=0;
  p_output1(36)=0;
  p_output1(37)=0;
  p_output1(38)=0;
  p_output1(39)=0;
  p_output1(40)=0;
  p_output1(41)=0;
  p_output1(42)=0;
  p_output1(43)=0;
  p_output1(44)=0;
  p_output1(45)=0;
  p_output1(46)=0;
  p_output1(47)=0;
  p_output1(48)=0;
  p_output1(49)=0;
  p_output1(50)=0;
  p_output1(51)=0;
  p_output1(52)=0;
  p_output1(53)=0;
}


       
Eigen::Matrix<double,3,18> Jp_FR_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void Jp_FR_calf_joint(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



