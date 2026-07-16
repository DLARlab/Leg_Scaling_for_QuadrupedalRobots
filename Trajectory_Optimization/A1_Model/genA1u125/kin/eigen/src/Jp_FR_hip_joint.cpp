/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:21:11 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_FR_hip_joint.h"

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
  double t1796;
  double t6031;
  double t6540;
  double t5871;
  double t6542;
  double t3323;
  double t6439;
  double t6548;
  double t6555;
  double t6589;
  double t6611;
  double t6616;
  double t6625;
  double t1307;
  double t3518;
  double t4127;
  double t5543;
  double t5708;
  double t6633;
  double t6642;
  double t6854;
  double t6866;
  double t6870;
  double t6879;
  double t6882;
  double t6891;
  double t7175;
  double t7207;
  double t7244;
  double t7331;
  double t7337;
  double t7355;
  double t7293;
  double t7382;
  double t7569;
  double t7582;
  double t7584;
  double t7429;
  double t7439;
  double t7443;
  double t7447;
  t1796 = Sin(var1[3]);
  t6031 = Cos(var1[5]);
  t6540 = Sin(var1[4]);
  t5871 = Cos(var1[3]);
  t6542 = Sin(var1[5]);
  t3323 = Cos(var1[6]);
  t6439 = -1.*t5871*t6031;
  t6548 = -1.*t1796*t6540*t6542;
  t6555 = t6439 + t6548;
  t6589 = -1.*t6031*t1796*t6540;
  t6611 = t5871*t6542;
  t6616 = t6589 + t6611;
  t6625 = Sin(var1[6]);
  t1307 = Cos(var1[4]);
  t3518 = -1.*t3323;
  t4127 = 1. + t3518;
  t5543 = -0.047*t4127;
  t5708 = 0. + t5543;
  t6633 = 0.047*t6625;
  t6642 = 0. + t6633;
  t6854 = -1.*t6031*t1796;
  t6866 = t5871*t6540*t6542;
  t6870 = t6854 + t6866;
  t6879 = t5871*t6031*t6540;
  t6882 = t1796*t6542;
  t6891 = t6879 + t6882;
  t7175 = t6031*t1796;
  t7207 = -1.*t5871*t6540*t6542;
  t7244 = t7175 + t7207;
  t7331 = t6031*t1796*t6540;
  t7337 = -1.*t5871*t6542;
  t7355 = t7331 + t7337;
  t7293 = t3323*t6891;
  t7382 = t3323*t7355;
  t7569 = t5871*t6031;
  t7582 = t1796*t6540*t6542;
  t7584 = t7569 + t7582;
  t7429 = t1307*t6031*t3323;
  t7439 = -1.*t1307*t6542*t6625;
  t7443 = t7429 + t7439;
  t7447 = -0.047*t7443;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=-0.183*t1307*t1796 + t5708*t6555 - 0.047*(t3323*t6555 + t6616*t6625) + t6616*t6642;
  p_output1(10)=0.183*t1307*t5871 + t5708*t6870 + t6642*t6891 - 0.047*(t3323*t6870 + t6625*t6891);
  p_output1(11)=0;
  p_output1(12)=-0.183*t5871*t6540 + t1307*t5708*t5871*t6542 - 0.047*(t1307*t3323*t5871*t6542 + t1307*t5871*t6031*t6625) + t1307*t5871*t6031*t6642;
  p_output1(13)=-0.183*t1796*t6540 + t1307*t1796*t5708*t6542 - 0.047*(t1307*t1796*t3323*t6542 + t1307*t1796*t6031*t6625) + t1307*t1796*t6031*t6642;
  p_output1(14)=-0.183*t1307 - 1.*t5708*t6540*t6542 - 0.047*(-1.*t3323*t6540*t6542 - 1.*t6031*t6540*t6625) - 1.*t6031*t6540*t6642;
  p_output1(15)=t5708*t6891 + t6642*t7244 - 0.047*(t6625*t7244 + t7293);
  p_output1(16)=t6555*t6642 + t5708*t7355 - 0.047*(t6555*t6625 + t7382);
  p_output1(17)=t1307*t5708*t6031 - 1.*t1307*t6542*t6642 + t7447;
  p_output1(18)=-0.047*t6625*t6870 + 0.047*t3323*t6891 - 0.047*(-1.*t6625*t6870 + t7293);
  p_output1(19)=0.047*t3323*t7355 - 0.047*t6625*t7584 - 0.047*(t7382 - 1.*t6625*t7584);
  p_output1(20)=0.047*t1307*t3323*t6031 - 0.047*t1307*t6542*t6625 + t7447;
  p_output1(21)=0;
  p_output1(22)=0;
  p_output1(23)=0;
  p_output1(24)=0;
  p_output1(25)=0;
  p_output1(26)=0;
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


       
Eigen::Matrix<double,3,18> Jp_FR_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void Jp_FR_hip_joint(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



