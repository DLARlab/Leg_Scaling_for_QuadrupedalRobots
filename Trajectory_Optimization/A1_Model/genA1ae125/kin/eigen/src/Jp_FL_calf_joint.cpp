/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:04:22 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_FL_calf_joint.h"

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
  double t726;
  double t991;
  double t917;
  double t923;
  double t995;
  double t829;
  double t947;
  double t1025;
  double t1050;
  double t1109;
  double t1731;
  double t1743;
  double t1936;
  double t692;
  double t2461;
  double t380;
  double t2474;
  double t2475;
  double t2477;
  double t2501;
  double t2519;
  double t2526;
  double t2616;
  double t2725;
  double t2733;
  double t2797;
  double t2818;
  double t2821;
  double t2831;
  double t488;
  double t555;
  double t572;
  double t603;
  double t900;
  double t908;
  double t1111;
  double t1132;
  double t1406;
  double t1689;
  double t2970;
  double t2974;
  double t2992;
  double t3007;
  double t3016;
  double t3021;
  double t2463;
  double t2469;
  double t2544;
  double t2629;
  double t2673;
  double t3068;
  double t3080;
  double t3095;
  double t2809;
  double t2816;
  double t2817;
  double t3116;
  double t3117;
  double t3123;
  double t3126;
  double t3142;
  double t3185;
  double t3296;
  double t3297;
  double t3298;
  double t3309;
  double t3313;
  double t3325;
  double t3331;
  double t3338;
  double t3352;
  double t3422;
  double t3425;
  double t3428;
  double t3468;
  double t3480;
  double t3490;
  double t3494;
  double t3495;
  double t3498;
  double t3583;
  double t3585;
  double t3589;
  double t3593;
  double t3595;
  double t3614;
  double t3631;
  double t3632;
  double t3643;
  double t3699;
  double t3700;
  double t3703;
  double t3734;
  double t3773;
  double t3808;
  double t3849;
  double t3856;
  double t3858;
  double t2444;
  double t3901;
  double t3914;
  double t4011;
  double t4018;
  double t4024;
  double t4065;
  double t4073;
  double t4117;
  double t4120;
  double t4123;
  double t4125;
  double t4128;
  double t3975;
  double t4027;
  double t4031;
  double t4032;
  double t4036;
  double t4037;
  double t4041;
  double t4042;
  double t4043;
  double t4045;
  double t4049;
  double t4052;
  double t4053;
  double t4054;
  double t4055;
  double t4058;
  double t4217;
  double t4218;
  double t4220;
  double t3194;
  double t4139;
  double t4142;
  double t4328;
  double t4329;
  double t4335;
  double t4336;
  double t4342;
  double t4392;
  double t4394;
  double t4395;
  double t4398;
  double t4399;
  double t4402;
  double t3189;
  double t3201;
  double t4295;
  double t4426;
  double t4427;
  double t4430;
  double t4435;
  double t4436;
  double t4445;
  double t4446;
  double t4448;
  double t4360;
  double t4371;
  double t4468;
  double t4473;
  double t4477;
  double t4414;
  double t4422;
  t726 = Sin(var1[3]);
  t991 = Cos(var1[3]);
  t917 = Cos(var1[5]);
  t923 = Sin(var1[4]);
  t995 = Sin(var1[5]);
  t829 = Sin(var1[9]);
  t947 = -1.*t917*t726*t923;
  t1025 = t991*t995;
  t1050 = t947 + t1025;
  t1109 = Cos(var1[9]);
  t1731 = -1.*t991*t917;
  t1743 = -1.*t726*t923*t995;
  t1936 = t1731 + t1743;
  t692 = Cos(var1[4]);
  t2461 = Sin(var1[10]);
  t380 = Cos(var1[10]);
  t2474 = t1109*t1050;
  t2475 = -1.*t829*t1936;
  t2477 = t2474 + t2475;
  t2501 = Cos(var1[11]);
  t2519 = -1.*t2501;
  t2526 = 1. + t2519;
  t2616 = Sin(var1[11]);
  t2725 = -1.*t692*t2461*t726;
  t2733 = t380*t2477;
  t2797 = t2725 + t2733;
  t2818 = -1.*t380*t692*t726;
  t2821 = -1.*t2461*t2477;
  t2831 = t2818 + t2821;
  t488 = -1.*t380;
  t555 = 1. + t488;
  t572 = 0.183*t555;
  t603 = 0. + t572;
  t900 = -0.047*t829;
  t908 = 0. + t900;
  t1111 = -1.*t1109;
  t1132 = 1. + t1111;
  t1406 = 0.047*t1132;
  t1689 = 0. + t1406;
  t2970 = t991*t917*t923;
  t2974 = t726*t995;
  t2992 = t2970 + t2974;
  t3007 = -1.*t917*t726;
  t3016 = t991*t923*t995;
  t3021 = t3007 + t3016;
  t2463 = 0.183*t2461;
  t2469 = 0. + t2463;
  t2544 = -0.25*t2526;
  t2629 = 0.183*t2616;
  t2673 = 0. + t2544 + t2629;
  t3068 = t1109*t2992;
  t3080 = -1.*t829*t3021;
  t3095 = t3068 + t3080;
  t2809 = 0.183*t2526;
  t2816 = 0.25*t2616;
  t2817 = 0. + t2809 + t2816;
  t3116 = t991*t692*t2461;
  t3117 = t380*t3095;
  t3123 = t3116 + t3117;
  t3126 = t380*t991*t692;
  t3142 = -1.*t2461*t3095;
  t3185 = t3126 + t3142;
  t3296 = t1109*t991*t692*t917;
  t3297 = -1.*t991*t692*t829*t995;
  t3298 = t3296 + t3297;
  t3309 = -1.*t991*t2461*t923;
  t3313 = t380*t3298;
  t3325 = t3309 + t3313;
  t3331 = -1.*t380*t991*t923;
  t3338 = -1.*t2461*t3298;
  t3352 = t3331 + t3338;
  t3422 = t1109*t692*t917*t726;
  t3425 = -1.*t692*t829*t726*t995;
  t3428 = t3422 + t3425;
  t3468 = -1.*t2461*t726*t923;
  t3480 = t380*t3428;
  t3490 = t3468 + t3480;
  t3494 = -1.*t380*t726*t923;
  t3495 = -1.*t2461*t3428;
  t3498 = t3494 + t3495;
  t3583 = -1.*t1109*t917*t923;
  t3585 = t829*t923*t995;
  t3589 = t3583 + t3585;
  t3593 = -1.*t692*t2461;
  t3595 = t380*t3589;
  t3614 = t3593 + t3595;
  t3631 = -1.*t380*t692;
  t3632 = -1.*t2461*t3589;
  t3643 = t3631 + t3632;
  t3699 = t917*t726;
  t3700 = -1.*t991*t923*t995;
  t3703 = t3699 + t3700;
  t3734 = -1.*t829*t2992;
  t3773 = t1109*t3703;
  t3808 = t3734 + t3773;
  t3849 = t917*t726*t923;
  t3856 = -1.*t991*t995;
  t3858 = t3849 + t3856;
  t2444 = t1109*t1936;
  t3901 = -1.*t829*t3858;
  t3914 = t3901 + t2444;
  t4011 = -1.*t692*t917*t829;
  t4018 = -1.*t1109*t692*t995;
  t4024 = t4011 + t4018;
  t4065 = -1.*t1109*t3021;
  t4073 = t3734 + t4065;
  t4117 = t991*t917;
  t4120 = t726*t923*t995;
  t4123 = t4117 + t4120;
  t4125 = -1.*t1109*t4123;
  t4128 = t3901 + t4125;
  t3975 = t1109*t3858;
  t4027 = t2469*t4024;
  t4031 = t380*t2673*t4024;
  t4032 = -1.*t2461*t2817*t4024;
  t4036 = t1109*t692*t917;
  t4037 = -1.*t692*t829*t995;
  t4041 = t4036 + t4037;
  t4042 = 0.13205*t4041;
  t4043 = -1.*t2501*t2461*t4024;
  t4045 = -1.*t380*t2616*t4024;
  t4049 = t4043 + t4045;
  t4052 = 0.183*t4049;
  t4053 = t380*t2501*t4024;
  t4054 = -1.*t2461*t2616*t4024;
  t4055 = t4053 + t4054;
  t4058 = -0.25*t4055;
  t4217 = -1.*t991*t692*t2461;
  t4218 = -1.*t380*t3095;
  t4220 = t4217 + t4218;
  t3194 = t2501*t3185;
  t4139 = -1.*t829*t4123;
  t4142 = t3975 + t4139;
  t4328 = -1.*t380*t4142;
  t4329 = t2725 + t4328;
  t4335 = t380*t692*t726;
  t4336 = -1.*t2461*t4142;
  t4342 = t4335 + t4336;
  t4392 = t2461*t923;
  t4394 = -1.*t380*t4041;
  t4395 = t4392 + t4394;
  t4398 = -1.*t380*t923;
  t4399 = -1.*t2461*t4041;
  t4402 = t4398 + t4399;
  t3189 = -1.*t2616*t3123;
  t3201 = t3189 + t3194;
  t4295 = -1.*t2616*t3185;
  t4426 = 0.183*t2501;
  t4427 = -0.25*t2616;
  t4430 = t4426 + t4427;
  t4435 = 0.25*t2501;
  t4436 = t4435 + t2629;
  t4445 = t692*t2461*t726;
  t4446 = t380*t4142;
  t4448 = t4445 + t4446;
  t4360 = t2501*t4342;
  t4371 = -1.*t2616*t4342;
  t4468 = -1.*t2461*t923;
  t4473 = t380*t4041;
  t4477 = t4468 + t4473;
  t4414 = t2501*t4402;
  t4422 = -1.*t2616*t4402;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t1689*t1936 + t2469*t2477 + t2673*t2797 + t2817*t2831 + 0.183*(-1.*t2616*t2797 + t2501*t2831) - 0.25*(t2501*t2797 + t2616*t2831) - 1.*t603*t692*t726 + 0.13205*(t2444 + t1050*t829) + t1050*t908;
  p_output1(10)=t1689*t3021 + t2469*t3095 + t2673*t3123 + t2817*t3185 - 0.25*(t2501*t3123 + t2616*t3185) + 0.183*t3201 + 0.13205*(t1109*t3021 + t2992*t829) + t2992*t908 + t603*t692*t991;
  p_output1(11)=0;
  p_output1(12)=t2469*t3298 + t2673*t3325 + t2817*t3352 + 0.183*(-1.*t2616*t3325 + t2501*t3352) - 0.25*(t2501*t3325 + t2616*t3352) + t692*t908*t917*t991 - 1.*t603*t923*t991 + t1689*t692*t991*t995 + 0.13205*(t692*t829*t917*t991 + t1109*t692*t991*t995);
  p_output1(13)=t2469*t3428 + t2673*t3490 + t2817*t3498 + 0.183*(-1.*t2616*t3490 + t2501*t3498) - 0.25*(t2501*t3490 + t2616*t3498) + t692*t726*t908*t917 - 1.*t603*t726*t923 + t1689*t692*t726*t995 + 0.13205*(t692*t726*t829*t917 + t1109*t692*t726*t995);
  p_output1(14)=t2469*t3589 + t2673*t3614 + t2817*t3643 + 0.183*(-1.*t2616*t3614 + t2501*t3643) - 0.25*(t2501*t3614 + t2616*t3643) - 1.*t603*t692 - 1.*t908*t917*t923 - 1.*t1689*t923*t995 + 0.13205*(-1.*t829*t917*t923 - 1.*t1109*t923*t995);
  p_output1(15)=t1689*t2992 + t2469*t3808 - 1.*t2461*t2817*t3808 + t2673*t380*t3808 - 0.25*(-1.*t2461*t2616*t3808 + t2501*t380*t3808) + 0.183*(-1.*t2461*t2501*t3808 - 1.*t2616*t380*t3808) + 0.13205*(t3068 + t3703*t829) + t3703*t908;
  p_output1(16)=t1689*t3858 + t2469*t3914 - 1.*t2461*t2817*t3914 + t2673*t380*t3914 - 0.25*(-1.*t2461*t2616*t3914 + t2501*t380*t3914) + 0.183*(-1.*t2461*t2501*t3914 - 1.*t2616*t380*t3914) + 0.13205*(t3975 + t1936*t829) + t1936*t908;
  p_output1(17)=t4027 + t4031 + t4032 + t4042 + t4052 + t4058 + t1689*t692*t917 - 1.*t692*t908*t995;
  p_output1(18)=0;
  p_output1(19)=0;
  p_output1(20)=0;
  p_output1(21)=0;
  p_output1(22)=0;
  p_output1(23)=0;
  p_output1(24)=0;
  p_output1(25)=0;
  p_output1(26)=0;
  p_output1(27)=-0.047*t1109*t2992 + 0.13205*t3095 + t2469*t4073 - 1.*t2461*t2817*t4073 + t2673*t380*t4073 - 0.25*(-1.*t2461*t2616*t4073 + t2501*t380*t4073) + 0.183*(-1.*t2461*t2501*t4073 - 1.*t2616*t380*t4073) + 0.047*t3021*t829;
  p_output1(28)=-0.047*t1109*t3858 + t2469*t4128 - 1.*t2461*t2817*t4128 + t2673*t380*t4128 - 0.25*(-1.*t2461*t2616*t4128 + t2501*t380*t4128) + 0.183*(-1.*t2461*t2501*t4128 - 1.*t2616*t380*t4128) + 0.13205*t4142 + 0.047*t4123*t829;
  p_output1(29)=t4027 + t4031 + t4032 + t4042 + t4052 + t4058 - 0.047*t1109*t692*t917 + 0.047*t692*t829*t995;
  p_output1(30)=t2673*t3185 + 0.183*t3095*t380 + t2817*t4220 - 0.25*(t3194 + t2616*t4220) + 0.183*(t2501*t4220 + t4295) + 0.183*t2461*t692*t991;
  p_output1(31)=0.183*t380*t4142 + t2817*t4329 + t2673*t4342 - 0.25*(t2616*t4329 + t4360) + 0.183*(t2501*t4329 + t4371) + 0.183*t2461*t692*t726;
  p_output1(32)=0.183*t380*t4041 + t2817*t4395 + t2673*t4402 - 0.25*(t2616*t4395 + t4414) + 0.183*(t2501*t4395 + t4422) - 0.183*t2461*t923;
  p_output1(33)=-0.25*t3201 + 0.183*(-1.*t2501*t3123 + t4295) + t3123*t4430 + t3185*t4436;
  p_output1(34)=t4342*t4436 + t4430*t4448 + 0.183*(t4371 - 1.*t2501*t4448) - 0.25*(t4360 - 1.*t2616*t4448);
  p_output1(35)=t4402*t4436 + t4430*t4477 + 0.183*(t4422 - 1.*t2501*t4477) - 0.25*(t4414 - 1.*t2616*t4477);
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


       
Eigen::Matrix<double,3,18> Jp_FL_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void Jp_FL_calf_joint(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



