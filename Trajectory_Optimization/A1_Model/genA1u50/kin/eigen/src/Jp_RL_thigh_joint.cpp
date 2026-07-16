/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:13:54 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RL_thigh_joint.h"

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
  double t460;
  double t1546;
  double t1259;
  double t1470;
  double t1552;
  double t484;
  double t1545;
  double t1842;
  double t1853;
  double t2061;
  double t2509;
  double t2851;
  double t2872;
  double t310;
  double t459;
  double t3791;
  double t4039;
  double t4046;
  double t4055;
  double t333;
  double t344;
  double t374;
  double t412;
  double t740;
  double t746;
  double t2124;
  double t2129;
  double t2191;
  double t2195;
  double t4425;
  double t4680;
  double t4746;
  double t5074;
  double t5145;
  double t5338;
  double t3927;
  double t4011;
  double t5638;
  double t5641;
  double t5663;
  double t6348;
  double t6378;
  double t6386;
  double t6543;
  double t6837;
  double t6851;
  double t8854;
  double t8858;
  double t8861;
  double t8958;
  double t8959;
  double t8960;
  double t8968;
  double t9013;
  double t9038;
  double t9061;
  double t9064;
  double t9066;
  double t3498;
  double t9081;
  double t9084;
  double t9097;
  double t9106;
  double t9111;
  double t9126;
  double t9134;
  double t9152;
  double t9154;
  double t9156;
  double t9158;
  double t9159;
  double t9088;
  double t9117;
  double t9118;
  double t9119;
  double t9120;
  double t9121;
  double t9122;
  double t9168;
  double t9169;
  t460 = Sin(var1[3]);
  t1546 = Cos(var1[3]);
  t1259 = Cos(var1[5]);
  t1470 = Sin(var1[4]);
  t1552 = Sin(var1[5]);
  t484 = Sin(var1[15]);
  t1545 = -1.*t1259*t460*t1470;
  t1842 = t1546*t1552;
  t1853 = t1545 + t1842;
  t2061 = Cos(var1[15]);
  t2509 = -1.*t1546*t1259;
  t2851 = -1.*t460*t1470*t1552;
  t2872 = t2509 + t2851;
  t310 = Cos(var1[16]);
  t459 = Cos(var1[4]);
  t3791 = Sin(var1[16]);
  t4039 = t2061*t1853;
  t4046 = -1.*t484*t2872;
  t4055 = t4039 + t4046;
  t333 = -1.*t310;
  t344 = 1. + t333;
  t374 = -0.183*t344;
  t412 = 0. + t374;
  t740 = -0.047*t484;
  t746 = 0. + t740;
  t2124 = -1.*t2061;
  t2129 = 1. + t2124;
  t2191 = 0.047*t2129;
  t2195 = 0. + t2191;
  t4425 = t1546*t1259*t1470;
  t4680 = t460*t1552;
  t4746 = t4425 + t4680;
  t5074 = -1.*t1259*t460;
  t5145 = t1546*t1470*t1552;
  t5338 = t5074 + t5145;
  t3927 = -0.183*t3791;
  t4011 = 0. + t3927;
  t5638 = t2061*t4746;
  t5641 = -1.*t484*t5338;
  t5663 = t5638 + t5641;
  t6348 = t2061*t1546*t459*t1259;
  t6378 = -1.*t1546*t459*t484*t1552;
  t6386 = t6348 + t6378;
  t6543 = t2061*t459*t1259*t460;
  t6837 = -1.*t459*t484*t460*t1552;
  t6851 = t6543 + t6837;
  t8854 = -1.*t2061*t1259*t1470;
  t8858 = t484*t1470*t1552;
  t8861 = t8854 + t8858;
  t8958 = t1259*t460;
  t8959 = -1.*t1546*t1470*t1552;
  t8960 = t8958 + t8959;
  t8968 = -1.*t484*t4746;
  t9013 = t2061*t8960;
  t9038 = t8968 + t9013;
  t9061 = t1259*t460*t1470;
  t9064 = -1.*t1546*t1552;
  t9066 = t9061 + t9064;
  t3498 = t2061*t2872;
  t9081 = -1.*t484*t9066;
  t9084 = t9081 + t3498;
  t9097 = -1.*t459*t1259*t484;
  t9106 = -1.*t2061*t459*t1552;
  t9111 = t9097 + t9106;
  t9126 = -1.*t2061*t5338;
  t9134 = t8968 + t9126;
  t9152 = t1546*t1259;
  t9154 = t460*t1470*t1552;
  t9156 = t9152 + t9154;
  t9158 = -1.*t2061*t9156;
  t9159 = t9081 + t9158;
  t9088 = t2061*t9066;
  t9117 = t4011*t9111;
  t9118 = 0.183*t3791*t9111;
  t9119 = t2061*t459*t1259;
  t9120 = -1.*t459*t484*t1552;
  t9121 = t9119 + t9120;
  t9122 = 0.08953*t9121;
  t9168 = -1.*t484*t9156;
  t9169 = t9088 + t9168;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t2195*t2872 + t4011*t4055 - 1.*t412*t459*t460 - 0.183*(-1.*t3791*t4055 - 1.*t310*t459*t460) + 0.08953*(t3498 + t1853*t484) + t1853*t746;
  p_output1(10)=t1546*t412*t459 + t2195*t5338 + 0.08953*(t4746*t484 + t2061*t5338) + t4011*t5663 - 0.183*(t1546*t310*t459 - 1.*t3791*t5663) + t4746*t746;
  p_output1(11)=0;
  p_output1(12)=-1.*t1470*t1546*t412 + t1546*t1552*t2195*t459 + 0.08953*(t1546*t1552*t2061*t459 + t1259*t1546*t459*t484) + t4011*t6386 - 0.183*(-1.*t1470*t1546*t310 - 1.*t3791*t6386) + t1259*t1546*t459*t746;
  p_output1(13)=-1.*t1470*t412*t460 + t1552*t2195*t459*t460 + 0.08953*(t1552*t2061*t459*t460 + t1259*t459*t460*t484) + t4011*t6851 - 0.183*(-1.*t1470*t310*t460 - 1.*t3791*t6851) + t1259*t459*t460*t746;
  p_output1(14)=-1.*t1470*t1552*t2195 - 1.*t412*t459 + 0.08953*(-1.*t1470*t1552*t2061 - 1.*t1259*t1470*t484) - 1.*t1259*t1470*t746 + t4011*t8861 - 0.183*(-1.*t310*t459 - 1.*t3791*t8861);
  p_output1(15)=t2195*t4746 + t746*t8960 + 0.08953*(t5638 + t484*t8960) + 0.183*t3791*t9038 + t4011*t9038;
  p_output1(16)=t2872*t746 + t2195*t9066 + 0.183*t3791*t9084 + t4011*t9084 + 0.08953*(t2872*t484 + t9088);
  p_output1(17)=t1259*t2195*t459 - 1.*t1552*t459*t746 + t9117 + t9118 + t9122;
  p_output1(18)=0;
  p_output1(19)=0;
  p_output1(20)=0;
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
  p_output1(45)=-0.047*t2061*t4746 + 0.047*t484*t5338 + 0.08953*t5663 + 0.183*t3791*t9134 + t4011*t9134;
  p_output1(46)=-0.047*t2061*t9066 + 0.047*t484*t9156 + 0.183*t3791*t9159 + t4011*t9159 + 0.08953*t9169;
  p_output1(47)=-0.047*t1259*t2061*t459 + 0.047*t1552*t459*t484 + t9117 + t9118 + t9122;
  p_output1(48)=-0.183*t1546*t3791*t459 - 0.183*t310*t5663 - 0.183*(-1.*t1546*t3791*t459 - 1.*t310*t5663);
  p_output1(49)=-0.183*t3791*t459*t460 - 0.183*t310*t9169 - 0.183*(-1.*t3791*t459*t460 - 1.*t310*t9169);
  p_output1(50)=0.183*t1470*t3791 - 0.183*t310*t9121 - 0.183*(t1470*t3791 - 1.*t310*t9121);
  p_output1(51)=0;
  p_output1(52)=0;
  p_output1(53)=0;
}


       
Eigen::Matrix<double,3,18> Jp_RL_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void Jp_RL_thigh_joint(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



