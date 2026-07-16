/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:26:55 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RL_calf_joint.h"

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
  double t532;
  double t1089;
  double t1385;
  double t1228;
  double t1407;
  double t787;
  double t674;
  double t776;
  double t825;
  double t1298;
  double t1481;
  double t1494;
  double t1667;
  double t1837;
  double t1845;
  double t1853;
  double t1902;
  double t2032;
  double t2141;
  double t340;
  double t2391;
  double t2848;
  double t2867;
  double t2876;
  double t2901;
  double t2915;
  double t2922;
  double t3063;
  double t3173;
  double t3207;
  double t3642;
  double t3709;
  double t3822;
  double t783;
  double t2237;
  double t2353;
  double t2412;
  double t2473;
  double t2581;
  double t2814;
  double t3235;
  double t3251;
  double t3390;
  double t3469;
  double t3507;
  double t3634;
  double t3881;
  double t3979;
  double t4298;
  double t4305;
  double t4332;
  double t4416;
  double t4422;
  double t4456;
  double t5498;
  double t5510;
  double t2379;
  double t2617;
  double t2806;
  double t4756;
  double t4784;
  double t4788;
  double t4980;
  double t4993;
  double t4994;
  double t5016;
  double t5137;
  double t5149;
  double t5176;
  double t5179;
  double t5246;
  double t5264;
  double t4471;
  double t4509;
  double t4708;
  double t5383;
  double t5400;
  double t5543;
  double t5580;
  double t5604;
  double t5631;
  double t5673;
  double t5800;
  double t3346;
  double t3625;
  double t3629;
  double t4793;
  double t4812;
  double t4830;
  double t4713;
  double t4734;
  double t4746;
  double t4160;
  double t4371;
  double t4408;
  double t4856;
  double t4937;
  double t4954;
  t532 = Cos(var1[3]);
  t1089 = Cos(var1[5]);
  t1385 = Sin(var1[3]);
  t1228 = Sin(var1[4]);
  t1407 = Sin(var1[5]);
  t787 = Cos(var1[16]);
  t674 = Cos(var1[4]);
  t776 = Sin(var1[16]);
  t825 = Cos(var1[15]);
  t1298 = t532*t1089*t1228;
  t1481 = t1385*t1407;
  t1494 = t1298 + t1481;
  t1667 = t825*t1494;
  t1837 = Sin(var1[15]);
  t1845 = -1.*t1089*t1385;
  t1853 = t532*t1228*t1407;
  t1902 = t1845 + t1853;
  t2032 = -1.*t1837*t1902;
  t2141 = t1667 + t2032;
  t340 = Sin(var1[17]);
  t2391 = Cos(var1[17]);
  t2848 = t1089*t1385*t1228;
  t2867 = -1.*t532*t1407;
  t2876 = t2848 + t2867;
  t2901 = t825*t2876;
  t2915 = t532*t1089;
  t2922 = t1385*t1228*t1407;
  t3063 = t2915 + t2922;
  t3173 = -1.*t1837*t3063;
  t3207 = t2901 + t3173;
  t3642 = t825*t674*t1089;
  t3709 = -1.*t674*t1837*t1407;
  t3822 = t3642 + t3709;
  t783 = t532*t674*t776;
  t2237 = t787*t2141;
  t2353 = t783 + t2237;
  t2412 = t787*t532*t674;
  t2473 = -1.*t776*t2141;
  t2581 = t2412 + t2473;
  t2814 = t674*t776*t1385;
  t3235 = t787*t3207;
  t3251 = t2814 + t3235;
  t3390 = t787*t674*t1385;
  t3469 = -1.*t776*t3207;
  t3507 = t3390 + t3469;
  t3634 = -1.*t776*t1228;
  t3881 = t787*t3822;
  t3979 = t3634 + t3881;
  t4298 = -1.*t787*t1228;
  t4305 = -1.*t776*t3822;
  t4332 = t4298 + t4305;
  t4416 = t1837*t1494;
  t4422 = t825*t1902;
  t4456 = t4416 + t4422;
  t5498 = -1.*t2391;
  t5510 = 1. + t5498;
  t2379 = -1.*t340*t2353;
  t2617 = t2391*t2581;
  t2806 = t2379 + t2617;
  t4756 = t2391*t2353;
  t4784 = t340*t2581;
  t4788 = t4756 + t4784;
  t4980 = -1.*t787;
  t4993 = 1. + t4980;
  t4994 = -0.183*t4993;
  t5016 = 0. + t4994;
  t5137 = -0.047*t1837;
  t5149 = 0. + t5137;
  t5176 = -1.*t825;
  t5179 = 1. + t5176;
  t5246 = 0.047*t5179;
  t5264 = 0. + t5246;
  t4471 = t1837*t2876;
  t4509 = t825*t3063;
  t4708 = t4471 + t4509;
  t5383 = -0.183*t776;
  t5400 = 0. + t5383;
  t5543 = -0.3*t5510;
  t5580 = -0.183*t340;
  t5604 = 0. + t5543 + t5580;
  t5631 = -0.183*t5510;
  t5673 = 0.3*t340;
  t5800 = 0. + t5631 + t5673;
  t3346 = -1.*t340*t3251;
  t3625 = t2391*t3507;
  t3629 = t3346 + t3625;
  t4793 = t2391*t3251;
  t4812 = t340*t3507;
  t4830 = t4793 + t4812;
  t4713 = t674*t1089*t1837;
  t4734 = t825*t674*t1407;
  t4746 = t4713 + t4734;
  t4160 = -1.*t340*t3979;
  t4371 = t2391*t4332;
  t4408 = t4160 + t4371;
  t4856 = t2391*t3979;
  t4937 = t340*t4332;
  t4954 = t4856 + t4937;

  p_output1(0)=t2806;
  p_output1(1)=t3629;
  p_output1(2)=t4408;
  p_output1(3)=0.;
  p_output1(4)=t4456;
  p_output1(5)=t4708;
  p_output1(6)=t4746;
  p_output1(7)=0.;
  p_output1(8)=t4788;
  p_output1(9)=t4830;
  p_output1(10)=t4954;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.183*t2806 + 0.17458*t4456 - 0.3*t4788 + t1494*t5149 + t1902*t5264 + t2141*t5400 + t2353*t5604 + t2581*t5800 + t5016*t532*t674 + var1(0);
  p_output1(13)=0. - 0.183*t3629 + 0.17458*t4708 - 0.3*t4830 + t2876*t5149 + t3063*t5264 + t3207*t5400 + t3251*t5604 + t3507*t5800 + t1385*t5016*t674 + var1(1);
  p_output1(14)=0. - 0.183*t4408 + 0.17458*t4746 - 0.3*t4954 - 1.*t1228*t5016 + t3822*t5400 + t3979*t5604 + t4332*t5800 + t1089*t5149*t674 + t1407*t5264*t674 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_RL_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void H_RL_calf_joint(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



