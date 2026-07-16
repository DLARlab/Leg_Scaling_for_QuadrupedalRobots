/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:04:31 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RR_calf_joint.h"

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
  double t427;
  double t983;
  double t1234;
  double t1027;
  double t1240;
  double t755;
  double t545;
  double t730;
  double t889;
  double t1135;
  double t1246;
  double t1268;
  double t1333;
  double t1377;
  double t1440;
  double t1442;
  double t1464;
  double t1509;
  double t1647;
  double t381;
  double t1910;
  double t2687;
  double t2735;
  double t2752;
  double t2787;
  double t2847;
  double t2853;
  double t2883;
  double t3040;
  double t3047;
  double t3492;
  double t3701;
  double t3739;
  double t745;
  double t1814;
  double t1849;
  double t2024;
  double t2074;
  double t2211;
  double t2650;
  double t3064;
  double t3071;
  double t3115;
  double t3143;
  double t3204;
  double t3452;
  double t3743;
  double t3746;
  double t3884;
  double t3911;
  double t3935;
  double t4033;
  double t4064;
  double t4109;
  double t4782;
  double t4788;
  double t1905;
  double t2597;
  double t2648;
  double t4502;
  double t4504;
  double t4505;
  double t4597;
  double t4617;
  double t4620;
  double t4632;
  double t4660;
  double t4664;
  double t4671;
  double t4686;
  double t4696;
  double t4715;
  double t4327;
  double t4372;
  double t4406;
  double t4766;
  double t4771;
  double t4789;
  double t4795;
  double t4796;
  double t4818;
  double t4835;
  double t4843;
  double t3110;
  double t3207;
  double t3237;
  double t4506;
  double t4518;
  double t4532;
  double t4464;
  double t4486;
  double t4488;
  double t3749;
  double t3987;
  double t4013;
  double t4553;
  double t4557;
  double t4574;
  t427 = Cos(var1[3]);
  t983 = Cos(var1[5]);
  t1234 = Sin(var1[3]);
  t1027 = Sin(var1[4]);
  t1240 = Sin(var1[5]);
  t755 = Cos(var1[13]);
  t545 = Cos(var1[4]);
  t730 = Sin(var1[13]);
  t889 = Cos(var1[12]);
  t1135 = t427*t983*t1027;
  t1246 = t1234*t1240;
  t1268 = t1135 + t1246;
  t1333 = t889*t1268;
  t1377 = Sin(var1[12]);
  t1440 = -1.*t983*t1234;
  t1442 = t427*t1027*t1240;
  t1464 = t1440 + t1442;
  t1509 = -1.*t1377*t1464;
  t1647 = t1333 + t1509;
  t381 = Sin(var1[14]);
  t1910 = Cos(var1[14]);
  t2687 = t983*t1234*t1027;
  t2735 = -1.*t427*t1240;
  t2752 = t2687 + t2735;
  t2787 = t889*t2752;
  t2847 = t427*t983;
  t2853 = t1234*t1027*t1240;
  t2883 = t2847 + t2853;
  t3040 = -1.*t1377*t2883;
  t3047 = t2787 + t3040;
  t3492 = t889*t545*t983;
  t3701 = -1.*t545*t1377*t1240;
  t3739 = t3492 + t3701;
  t745 = t427*t545*t730;
  t1814 = t755*t1647;
  t1849 = t745 + t1814;
  t2024 = t755*t427*t545;
  t2074 = -1.*t730*t1647;
  t2211 = t2024 + t2074;
  t2650 = t545*t730*t1234;
  t3064 = t755*t3047;
  t3071 = t2650 + t3064;
  t3115 = t755*t545*t1234;
  t3143 = -1.*t730*t3047;
  t3204 = t3115 + t3143;
  t3452 = -1.*t730*t1027;
  t3743 = t755*t3739;
  t3746 = t3452 + t3743;
  t3884 = -1.*t755*t1027;
  t3911 = -1.*t730*t3739;
  t3935 = t3884 + t3911;
  t4033 = t1377*t1268;
  t4064 = t889*t1464;
  t4109 = t4033 + t4064;
  t4782 = -1.*t1910;
  t4788 = 1. + t4782;
  t1905 = -1.*t381*t1849;
  t2597 = t1910*t2211;
  t2648 = t1905 + t2597;
  t4502 = t1910*t1849;
  t4504 = t381*t2211;
  t4505 = t4502 + t4504;
  t4597 = -1.*t755;
  t4617 = 1. + t4597;
  t4620 = -0.183*t4617;
  t4632 = 0. + t4620;
  t4660 = 0.047*t1377;
  t4664 = 0. + t4660;
  t4671 = -1.*t889;
  t4686 = 1. + t4671;
  t4696 = -0.047*t4686;
  t4715 = 0. + t4696;
  t4327 = t1377*t2752;
  t4372 = t889*t2883;
  t4406 = t4327 + t4372;
  t4766 = -0.183*t730;
  t4771 = 0. + t4766;
  t4789 = -0.25*t4788;
  t4795 = -0.183*t381;
  t4796 = 0. + t4789 + t4795;
  t4818 = -0.183*t4788;
  t4835 = 0.25*t381;
  t4843 = 0. + t4818 + t4835;
  t3110 = -1.*t381*t3071;
  t3207 = t1910*t3204;
  t3237 = t3110 + t3207;
  t4506 = t1910*t3071;
  t4518 = t381*t3204;
  t4532 = t4506 + t4518;
  t4464 = t545*t983*t1377;
  t4486 = t889*t545*t1240;
  t4488 = t4464 + t4486;
  t3749 = -1.*t381*t3746;
  t3987 = t1910*t3935;
  t4013 = t3749 + t3987;
  t4553 = t1910*t3746;
  t4557 = t381*t3935;
  t4574 = t4553 + t4557;

  p_output1(0)=t2648;
  p_output1(1)=t3237;
  p_output1(2)=t4013;
  p_output1(3)=0.;
  p_output1(4)=t4109;
  p_output1(5)=t4406;
  p_output1(6)=t4488;
  p_output1(7)=0.;
  p_output1(8)=t4505;
  p_output1(9)=t4532;
  p_output1(10)=t4574;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.183*t2648 - 0.13205*t4109 - 0.25*t4505 + t1268*t4664 + t1464*t4715 + t1647*t4771 + t1849*t4796 + t2211*t4843 + t427*t4632*t545 + var1(0);
  p_output1(13)=0. - 0.183*t3237 - 0.13205*t4406 - 0.25*t4532 + t2752*t4664 + t2883*t4715 + t3047*t4771 + t3071*t4796 + t3204*t4843 + t1234*t4632*t545 + var1(1);
  p_output1(14)=0. - 0.183*t4013 - 0.13205*t4488 - 0.25*t4574 - 1.*t1027*t4632 + t3739*t4771 + t3746*t4796 + t3935*t4843 + t1240*t4715*t545 + t4664*t545*t983 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_RR_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void H_RR_calf_joint(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



