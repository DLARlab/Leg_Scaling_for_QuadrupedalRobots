/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:26:29 GMT-05:00
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
  double t1975;
  double t6963;
  double t6980;
  double t6004;
  double t7011;
  double t3282;
  double t6978;
  double t7035;
  double t7052;
  double t7057;
  double t7068;
  double t7083;
  double t7087;
  double t1954;
  double t4692;
  double t5057;
  double t5535;
  double t5935;
  double t7096;
  double t7100;
  double t7147;
  double t7152;
  double t7153;
  double t7207;
  double t7208;
  double t7210;
  double t7632;
  double t7643;
  double t7668;
  double t7810;
  double t7815;
  double t7817;
  double t7724;
  double t7839;
  double t8051;
  double t8067;
  double t8072;
  double t7960;
  double t7974;
  double t7985;
  double t8005;
  t1975 = Sin(var1[3]);
  t6963 = Cos(var1[5]);
  t6980 = Sin(var1[4]);
  t6004 = Cos(var1[3]);
  t7011 = Sin(var1[5]);
  t3282 = Cos(var1[6]);
  t6978 = -1.*t6004*t6963;
  t7035 = -1.*t1975*t6980*t7011;
  t7052 = t6978 + t7035;
  t7057 = -1.*t6963*t1975*t6980;
  t7068 = t6004*t7011;
  t7083 = t7057 + t7068;
  t7087 = Sin(var1[6]);
  t1954 = Cos(var1[4]);
  t4692 = -1.*t3282;
  t5057 = 1. + t4692;
  t5535 = -0.047*t5057;
  t5935 = 0. + t5535;
  t7096 = 0.047*t7087;
  t7100 = 0. + t7096;
  t7147 = -1.*t6963*t1975;
  t7152 = t6004*t6980*t7011;
  t7153 = t7147 + t7152;
  t7207 = t6004*t6963*t6980;
  t7208 = t1975*t7011;
  t7210 = t7207 + t7208;
  t7632 = t6963*t1975;
  t7643 = -1.*t6004*t6980*t7011;
  t7668 = t7632 + t7643;
  t7810 = t6963*t1975*t6980;
  t7815 = -1.*t6004*t7011;
  t7817 = t7810 + t7815;
  t7724 = t3282*t7210;
  t7839 = t3282*t7817;
  t8051 = t6004*t6963;
  t8067 = t1975*t6980*t7011;
  t8072 = t8051 + t8067;
  t7960 = t1954*t6963*t3282;
  t7974 = -1.*t1954*t7011*t7087;
  t7985 = t7960 + t7974;
  t8005 = -0.047*t7985;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=-0.183*t1954*t1975 + t5935*t7052 - 0.047*(t3282*t7052 + t7083*t7087) + t7083*t7100;
  p_output1(10)=0.183*t1954*t6004 + t5935*t7153 + t7100*t7210 - 0.047*(t3282*t7153 + t7087*t7210);
  p_output1(11)=0;
  p_output1(12)=-0.183*t6004*t6980 + t1954*t5935*t6004*t7011 - 0.047*(t1954*t3282*t6004*t7011 + t1954*t6004*t6963*t7087) + t1954*t6004*t6963*t7100;
  p_output1(13)=-0.183*t1975*t6980 + t1954*t1975*t5935*t7011 - 0.047*(t1954*t1975*t3282*t7011 + t1954*t1975*t6963*t7087) + t1954*t1975*t6963*t7100;
  p_output1(14)=-0.183*t1954 - 1.*t5935*t6980*t7011 - 0.047*(-1.*t3282*t6980*t7011 - 1.*t6963*t6980*t7087) - 1.*t6963*t6980*t7100;
  p_output1(15)=t5935*t7210 + t7100*t7668 - 0.047*(t7087*t7668 + t7724);
  p_output1(16)=t7052*t7100 + t5935*t7817 - 0.047*(t7052*t7087 + t7839);
  p_output1(17)=t1954*t5935*t6963 - 1.*t1954*t7011*t7100 + t8005;
  p_output1(18)=-0.047*t7087*t7153 + 0.047*t3282*t7210 - 0.047*(-1.*t7087*t7153 + t7724);
  p_output1(19)=0.047*t3282*t7817 - 0.047*t7087*t8072 - 0.047*(t7839 - 1.*t7087*t8072);
  p_output1(20)=0.047*t1954*t3282*t6963 - 0.047*t1954*t7011*t7087 + t8005;
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



