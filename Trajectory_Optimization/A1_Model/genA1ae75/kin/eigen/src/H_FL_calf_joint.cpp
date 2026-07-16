/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:51:42 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FL_calf_joint.h"

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
  double t463;
  double t1089;
  double t1293;
  double t1137;
  double t1468;
  double t922;
  double t521;
  double t660;
  double t1081;
  double t1159;
  double t1511;
  double t1810;
  double t1825;
  double t1834;
  double t1842;
  double t1848;
  double t1853;
  double t1873;
  double t1961;
  double t332;
  double t2390;
  double t3339;
  double t3386;
  double t3387;
  double t3464;
  double t3753;
  double t3765;
  double t3852;
  double t3857;
  double t3882;
  double t4672;
  double t4716;
  double t4726;
  double t752;
  double t2003;
  double t2057;
  double t2714;
  double t2772;
  double t2834;
  double t3219;
  double t3917;
  double t4065;
  double t4200;
  double t4242;
  double t4344;
  double t4620;
  double t4755;
  double t4760;
  double t4893;
  double t4903;
  double t4907;
  double t5514;
  double t5561;
  double t5705;
  double t7456;
  double t7511;
  double t2278;
  double t2882;
  double t3038;
  double t6040;
  double t6325;
  double t6484;
  double t6928;
  double t7059;
  double t7091;
  double t7093;
  double t7131;
  double t7189;
  double t7300;
  double t7308;
  double t7314;
  double t7315;
  double t5733;
  double t5847;
  double t5857;
  double t7410;
  double t7420;
  double t7517;
  double t7520;
  double t7536;
  double t7565;
  double t7609;
  double t7637;
  double t4069;
  double t4483;
  double t4601;
  double t6494;
  double t6515;
  double t6529;
  double t5909;
  double t5983;
  double t5990;
  double t4826;
  double t5185;
  double t5408;
  double t6571;
  double t6590;
  double t6903;
  t463 = Cos(var1[3]);
  t1089 = Cos(var1[5]);
  t1293 = Sin(var1[3]);
  t1137 = Sin(var1[4]);
  t1468 = Sin(var1[5]);
  t922 = Cos(var1[10]);
  t521 = Cos(var1[4]);
  t660 = Sin(var1[10]);
  t1081 = Cos(var1[9]);
  t1159 = t463*t1089*t1137;
  t1511 = t1293*t1468;
  t1810 = t1159 + t1511;
  t1825 = t1081*t1810;
  t1834 = Sin(var1[9]);
  t1842 = -1.*t1089*t1293;
  t1848 = t463*t1137*t1468;
  t1853 = t1842 + t1848;
  t1873 = -1.*t1834*t1853;
  t1961 = t1825 + t1873;
  t332 = Sin(var1[11]);
  t2390 = Cos(var1[11]);
  t3339 = t1089*t1293*t1137;
  t3386 = -1.*t463*t1468;
  t3387 = t3339 + t3386;
  t3464 = t1081*t3387;
  t3753 = t463*t1089;
  t3765 = t1293*t1137*t1468;
  t3852 = t3753 + t3765;
  t3857 = -1.*t1834*t3852;
  t3882 = t3464 + t3857;
  t4672 = t1081*t521*t1089;
  t4716 = -1.*t521*t1834*t1468;
  t4726 = t4672 + t4716;
  t752 = t463*t521*t660;
  t2003 = t922*t1961;
  t2057 = t752 + t2003;
  t2714 = t922*t463*t521;
  t2772 = -1.*t660*t1961;
  t2834 = t2714 + t2772;
  t3219 = t521*t660*t1293;
  t3917 = t922*t3882;
  t4065 = t3219 + t3917;
  t4200 = t922*t521*t1293;
  t4242 = -1.*t660*t3882;
  t4344 = t4200 + t4242;
  t4620 = -1.*t660*t1137;
  t4755 = t922*t4726;
  t4760 = t4620 + t4755;
  t4893 = -1.*t922*t1137;
  t4903 = -1.*t660*t4726;
  t4907 = t4893 + t4903;
  t5514 = t1834*t1810;
  t5561 = t1081*t1853;
  t5705 = t5514 + t5561;
  t7456 = -1.*t2390;
  t7511 = 1. + t7456;
  t2278 = -1.*t332*t2057;
  t2882 = t2390*t2834;
  t3038 = t2278 + t2882;
  t6040 = t2390*t2057;
  t6325 = t332*t2834;
  t6484 = t6040 + t6325;
  t6928 = -1.*t922;
  t7059 = 1. + t6928;
  t7091 = 0.183*t7059;
  t7093 = 0. + t7091;
  t7131 = -0.047*t1834;
  t7189 = 0. + t7131;
  t7300 = -1.*t1081;
  t7308 = 1. + t7300;
  t7314 = 0.047*t7308;
  t7315 = 0. + t7314;
  t5733 = t1834*t3387;
  t5847 = t1081*t3852;
  t5857 = t5733 + t5847;
  t7410 = 0.183*t660;
  t7420 = 0. + t7410;
  t7517 = -0.15*t7511;
  t7520 = 0.183*t332;
  t7536 = 0. + t7517 + t7520;
  t7565 = 0.183*t7511;
  t7609 = 0.15*t332;
  t7637 = 0. + t7565 + t7609;
  t4069 = -1.*t332*t4065;
  t4483 = t2390*t4344;
  t4601 = t4069 + t4483;
  t6494 = t2390*t4065;
  t6515 = t332*t4344;
  t6529 = t6494 + t6515;
  t5909 = t521*t1089*t1834;
  t5983 = t1081*t521*t1468;
  t5990 = t5909 + t5983;
  t4826 = -1.*t332*t4760;
  t5185 = t2390*t4907;
  t5408 = t4826 + t5185;
  t6571 = t2390*t4760;
  t6590 = t332*t4907;
  t6903 = t6571 + t6590;

  p_output1(0)=t3038;
  p_output1(1)=t4601;
  p_output1(2)=t5408;
  p_output1(3)=0.;
  p_output1(4)=t5705;
  p_output1(5)=t5857;
  p_output1(6)=t5990;
  p_output1(7)=0.;
  p_output1(8)=t6484;
  p_output1(9)=t6529;
  p_output1(10)=t6903;
  p_output1(11)=0.;
  p_output1(12)=0. + 0.183*t3038 + 0.13205*t5705 - 0.15*t6484 + t463*t521*t7093 + t1810*t7189 + t1853*t7315 + t1961*t7420 + t2057*t7536 + t2834*t7637 + var1(0);
  p_output1(13)=0. + 0.183*t4601 + 0.13205*t5857 - 0.15*t6529 + t1293*t521*t7093 + t3387*t7189 + t3852*t7315 + t3882*t7420 + t4065*t7536 + t4344*t7637 + var1(1);
  p_output1(14)=0. + 0.183*t5408 + 0.13205*t5990 - 0.15*t6903 - 1.*t1137*t7093 + t1089*t521*t7189 + t1468*t521*t7315 + t4726*t7420 + t4760*t7536 + t4907*t7637 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_FL_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void H_FL_calf_joint(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



