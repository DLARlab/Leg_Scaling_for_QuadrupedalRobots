/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:10:58 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_FL_thigh_joint.h"

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
  double t880;
  double t1635;
  double t1324;
  double t1340;
  double t1661;
  double t1027;
  double t1393;
  double t1685;
  double t1767;
  double t1911;
  double t2076;
  double t2113;
  double t2116;
  double t230;
  double t737;
  double t2800;
  double t3051;
  double t3075;
  double t3090;
  double t362;
  double t518;
  double t549;
  double t564;
  double t1115;
  double t1323;
  double t1948;
  double t1998;
  double t2006;
  double t2032;
  double t3333;
  double t3365;
  double t3418;
  double t3539;
  double t3637;
  double t3698;
  double t2850;
  double t2930;
  double t4452;
  double t4461;
  double t4605;
  double t5405;
  double t5710;
  double t5722;
  double t5858;
  double t5872;
  double t5876;
  double t5974;
  double t5978;
  double t5980;
  double t6007;
  double t6021;
  double t6051;
  double t6055;
  double t6056;
  double t6060;
  double t6086;
  double t6087;
  double t6089;
  double t2524;
  double t6093;
  double t6094;
  double t6123;
  double t6125;
  double t6127;
  double t6151;
  double t6155;
  double t6165;
  double t6168;
  double t6171;
  double t6177;
  double t6180;
  double t6103;
  double t6128;
  double t6129;
  double t6132;
  double t6133;
  double t6135;
  double t6137;
  double t6190;
  double t6193;
  t880 = Sin(var1[3]);
  t1635 = Cos(var1[3]);
  t1324 = Cos(var1[5]);
  t1340 = Sin(var1[4]);
  t1661 = Sin(var1[5]);
  t1027 = Sin(var1[9]);
  t1393 = -1.*t1324*t880*t1340;
  t1685 = t1635*t1661;
  t1767 = t1393 + t1685;
  t1911 = Cos(var1[9]);
  t2076 = -1.*t1635*t1324;
  t2113 = -1.*t880*t1340*t1661;
  t2116 = t2076 + t2113;
  t230 = Cos(var1[10]);
  t737 = Cos(var1[4]);
  t2800 = Sin(var1[10]);
  t3051 = t1911*t1767;
  t3075 = -1.*t1027*t2116;
  t3090 = t3051 + t3075;
  t362 = -1.*t230;
  t518 = 1. + t362;
  t549 = 0.183*t518;
  t564 = 0. + t549;
  t1115 = -0.047*t1027;
  t1323 = 0. + t1115;
  t1948 = -1.*t1911;
  t1998 = 1. + t1948;
  t2006 = 0.047*t1998;
  t2032 = 0. + t2006;
  t3333 = t1635*t1324*t1340;
  t3365 = t880*t1661;
  t3418 = t3333 + t3365;
  t3539 = -1.*t1324*t880;
  t3637 = t1635*t1340*t1661;
  t3698 = t3539 + t3637;
  t2850 = 0.183*t2800;
  t2930 = 0. + t2850;
  t4452 = t1911*t3418;
  t4461 = -1.*t1027*t3698;
  t4605 = t4452 + t4461;
  t5405 = t1911*t1635*t737*t1324;
  t5710 = -1.*t1635*t737*t1027*t1661;
  t5722 = t5405 + t5710;
  t5858 = t1911*t737*t1324*t880;
  t5872 = -1.*t737*t1027*t880*t1661;
  t5876 = t5858 + t5872;
  t5974 = -1.*t1911*t1324*t1340;
  t5978 = t1027*t1340*t1661;
  t5980 = t5974 + t5978;
  t6007 = t1324*t880;
  t6021 = -1.*t1635*t1340*t1661;
  t6051 = t6007 + t6021;
  t6055 = -1.*t1027*t3418;
  t6056 = t1911*t6051;
  t6060 = t6055 + t6056;
  t6086 = t1324*t880*t1340;
  t6087 = -1.*t1635*t1661;
  t6089 = t6086 + t6087;
  t2524 = t1911*t2116;
  t6093 = -1.*t1027*t6089;
  t6094 = t6093 + t2524;
  t6123 = -1.*t737*t1324*t1027;
  t6125 = -1.*t1911*t737*t1661;
  t6127 = t6123 + t6125;
  t6151 = -1.*t1911*t3698;
  t6155 = t6055 + t6151;
  t6165 = t1635*t1324;
  t6168 = t880*t1340*t1661;
  t6171 = t6165 + t6168;
  t6177 = -1.*t1911*t6171;
  t6180 = t6093 + t6177;
  t6103 = t1911*t6089;
  t6128 = t2930*t6127;
  t6129 = -0.183*t2800*t6127;
  t6132 = t1911*t737*t1324;
  t6133 = -1.*t737*t1027*t1661;
  t6135 = t6132 + t6133;
  t6137 = 0.13205*t6135;
  t6190 = -1.*t1027*t6171;
  t6193 = t6103 + t6190;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t1323*t1767 + t2032*t2116 + 0.13205*(t1027*t1767 + t2524) + t2930*t3090 - 1.*t564*t737*t880 + 0.183*(-1.*t2800*t3090 - 1.*t230*t737*t880);
  p_output1(10)=t1323*t3418 + t2032*t3698 + 0.13205*(t1027*t3418 + t1911*t3698) + t2930*t4605 + t1635*t564*t737 + 0.183*(-1.*t2800*t4605 + t1635*t230*t737);
  p_output1(11)=0;
  p_output1(12)=-1.*t1340*t1635*t564 + t2930*t5722 + 0.183*(-1.*t1340*t1635*t230 - 1.*t2800*t5722) + t1323*t1324*t1635*t737 + t1635*t1661*t2032*t737 + 0.13205*(t1027*t1324*t1635*t737 + t1635*t1661*t1911*t737);
  p_output1(13)=t2930*t5876 - 1.*t1340*t564*t880 + t1323*t1324*t737*t880 + t1661*t2032*t737*t880 + 0.183*(-1.*t2800*t5876 - 1.*t1340*t230*t880) + 0.13205*(t1027*t1324*t737*t880 + t1661*t1911*t737*t880);
  p_output1(14)=-1.*t1323*t1324*t1340 + 0.13205*(-1.*t1027*t1324*t1340 - 1.*t1340*t1661*t1911) - 1.*t1340*t1661*t2032 + t2930*t5980 - 1.*t564*t737 + 0.183*(-1.*t2800*t5980 - 1.*t230*t737);
  p_output1(15)=t2032*t3418 + t1323*t6051 + 0.13205*(t4452 + t1027*t6051) - 0.183*t2800*t6060 + t2930*t6060;
  p_output1(16)=t1323*t2116 + t2032*t6089 - 0.183*t2800*t6094 + t2930*t6094 + 0.13205*(t1027*t2116 + t6103);
  p_output1(17)=t6128 + t6129 + t6137 - 1.*t1323*t1661*t737 + t1324*t2032*t737;
  p_output1(18)=0;
  p_output1(19)=0;
  p_output1(20)=0;
  p_output1(21)=0;
  p_output1(22)=0;
  p_output1(23)=0;
  p_output1(24)=0;
  p_output1(25)=0;
  p_output1(26)=0;
  p_output1(27)=-0.047*t1911*t3418 + 0.047*t1027*t3698 + 0.13205*t4605 - 0.183*t2800*t6155 + t2930*t6155;
  p_output1(28)=-0.047*t1911*t6089 + 0.047*t1027*t6171 - 0.183*t2800*t6180 + t2930*t6180 + 0.13205*t6193;
  p_output1(29)=t6128 + t6129 + t6137 + 0.047*t1027*t1661*t737 - 0.047*t1324*t1911*t737;
  p_output1(30)=0.183*t230*t4605 + 0.183*t1635*t2800*t737 + 0.183*(-1.*t230*t4605 - 1.*t1635*t2800*t737);
  p_output1(31)=0.183*t230*t6193 + 0.183*t2800*t737*t880 + 0.183*(-1.*t230*t6193 - 1.*t2800*t737*t880);
  p_output1(32)=-0.183*t1340*t2800 + 0.183*t230*t6135 + 0.183*(t1340*t2800 - 1.*t230*t6135);
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


       
Eigen::Matrix<double,3,18> Jp_FL_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void Jp_FL_thigh_joint(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



