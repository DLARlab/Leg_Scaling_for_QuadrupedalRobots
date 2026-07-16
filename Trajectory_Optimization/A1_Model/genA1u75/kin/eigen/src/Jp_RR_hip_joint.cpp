/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:18:53 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RR_hip_joint.h"

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
  double t38;
  double t1025;
  double t849;
  double t972;
  double t1032;
  double t359;
  double t1015;
  double t1190;
  double t1343;
  double t1470;
  double t2348;
  double t2393;
  double t2417;
  double t35;
  double t471;
  double t837;
  double t1842;
  double t1861;
  double t2159;
  double t2226;
  double t2591;
  double t2753;
  double t2773;
  double t2871;
  double t2886;
  double t2889;
  double t7741;
  double t7847;
  double t7934;
  double t8094;
  double t8123;
  double t8141;
  double t7980;
  double t8254;
  double t8584;
  double t8593;
  double t8613;
  double t8408;
  double t8427;
  double t8433;
  double t8448;
  t38 = Sin(var1[3]);
  t1025 = Cos(var1[3]);
  t849 = Cos(var1[5]);
  t972 = Sin(var1[4]);
  t1032 = Sin(var1[5]);
  t359 = Sin(var1[12]);
  t1015 = -1.*t849*t38*t972;
  t1190 = t1025*t1032;
  t1343 = t1015 + t1190;
  t1470 = Cos(var1[12]);
  t2348 = -1.*t1025*t849;
  t2393 = -1.*t38*t972*t1032;
  t2417 = t2348 + t2393;
  t35 = Cos(var1[4]);
  t471 = 0.047*t359;
  t837 = 0. + t471;
  t1842 = -1.*t1470;
  t1861 = 1. + t1842;
  t2159 = -0.047*t1861;
  t2226 = 0. + t2159;
  t2591 = t1025*t849*t972;
  t2753 = t38*t1032;
  t2773 = t2591 + t2753;
  t2871 = -1.*t849*t38;
  t2886 = t1025*t972*t1032;
  t2889 = t2871 + t2886;
  t7741 = t849*t38;
  t7847 = -1.*t1025*t972*t1032;
  t7934 = t7741 + t7847;
  t8094 = t849*t38*t972;
  t8123 = -1.*t1025*t1032;
  t8141 = t8094 + t8123;
  t7980 = t1470*t2773;
  t8254 = t1470*t8141;
  t8584 = t1025*t849;
  t8593 = t38*t972*t1032;
  t8613 = t8584 + t8593;
  t8408 = t1470*t35*t849;
  t8427 = -1.*t35*t359*t1032;
  t8433 = t8408 + t8427;
  t8448 = -0.047*t8433;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t2226*t2417 - 0.047*(t1470*t2417 + t1343*t359) + 0.183*t35*t38 + t1343*t837;
  p_output1(10)=t2226*t2889 - 0.183*t1025*t35 - 0.047*(t1470*t2889 + t2773*t359) + t2773*t837;
  p_output1(11)=0;
  p_output1(12)=t1025*t1032*t2226*t35 + t1025*t35*t837*t849 - 0.047*(t1025*t1032*t1470*t35 + t1025*t35*t359*t849) + 0.183*t1025*t972;
  p_output1(13)=t1032*t2226*t35*t38 + t35*t38*t837*t849 - 0.047*(t1032*t1470*t35*t38 + t35*t359*t38*t849) + 0.183*t38*t972;
  p_output1(14)=0.183*t35 - 1.*t1032*t2226*t972 - 1.*t837*t849*t972 - 0.047*(-1.*t1032*t1470*t972 - 1.*t359*t849*t972);
  p_output1(15)=t2226*t2773 - 0.047*(t359*t7934 + t7980) + t7934*t837;
  p_output1(16)=t2226*t8141 - 0.047*(t2417*t359 + t8254) + t2417*t837;
  p_output1(17)=-1.*t1032*t35*t837 + t8448 + t2226*t35*t849;
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
  p_output1(36)=0.047*t1470*t2773 - 0.047*t2889*t359 - 0.047*(-1.*t2889*t359 + t7980);
  p_output1(37)=0.047*t1470*t8141 - 0.047*t359*t8613 - 0.047*(t8254 - 1.*t359*t8613);
  p_output1(38)=-0.047*t1032*t35*t359 + t8448 + 0.047*t1470*t35*t849;
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


       
Eigen::Matrix<double,3,18> Jp_RR_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void Jp_RR_hip_joint(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



