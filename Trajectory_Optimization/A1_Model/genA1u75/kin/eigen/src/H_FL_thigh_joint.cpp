/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:18:49 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FL_thigh_joint.h"

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
  double t717;
  double t1429;
  double t1639;
  double t1508;
  double t2050;
  double t700;
  double t744;
  double t1326;
  double t1425;
  double t2801;
  double t1547;
  double t2475;
  double t2755;
  double t3058;
  double t3133;
  double t3214;
  double t3971;
  double t4235;
  double t4409;
  double t4535;
  double t4548;
  double t4549;
  double t2779;
  double t3274;
  double t3624;
  double t4490;
  double t4553;
  double t4619;
  double t4801;
  double t4891;
  double t4898;
  double t4955;
  double t4975;
  double t4987;
  double t1137;
  double t3637;
  double t3654;
  double t5619;
  double t5652;
  double t5669;
  double t5849;
  double t5906;
  double t6039;
  double t6122;
  double t6140;
  double t6155;
  double t6299;
  double t4998;
  double t5039;
  double t5117;
  double t6387;
  double t6692;
  double t3678;
  double t4769;
  double t4776;
  double t5200;
  double t5256;
  double t5329;
  double t4793;
  double t4909;
  double t4913;
  t717 = Cos(var1[3]);
  t1429 = Cos(var1[5]);
  t1639 = Sin(var1[3]);
  t1508 = Sin(var1[4]);
  t2050 = Sin(var1[5]);
  t700 = Cos(var1[10]);
  t744 = Cos(var1[4]);
  t1326 = Sin(var1[10]);
  t1425 = Cos(var1[9]);
  t2801 = Sin(var1[9]);
  t1547 = t717*t1429*t1508;
  t2475 = t1639*t2050;
  t2755 = t1547 + t2475;
  t3058 = -1.*t1429*t1639;
  t3133 = t717*t1508*t2050;
  t3214 = t3058 + t3133;
  t3971 = t1429*t1639*t1508;
  t4235 = -1.*t717*t2050;
  t4409 = t3971 + t4235;
  t4535 = t717*t1429;
  t4548 = t1639*t1508*t2050;
  t4549 = t4535 + t4548;
  t2779 = t1425*t2755;
  t3274 = -1.*t2801*t3214;
  t3624 = t2779 + t3274;
  t4490 = t1425*t4409;
  t4553 = -1.*t2801*t4549;
  t4619 = t4490 + t4553;
  t4801 = t1425*t744*t1429;
  t4891 = -1.*t744*t2801*t2050;
  t4898 = t4801 + t4891;
  t4955 = t2801*t2755;
  t4975 = t1425*t3214;
  t4987 = t4955 + t4975;
  t1137 = t700*t717*t744;
  t3637 = -1.*t1326*t3624;
  t3654 = t1137 + t3637;
  t5619 = -1.*t700;
  t5652 = 1. + t5619;
  t5669 = 0.183*t5652;
  t5849 = 0. + t5669;
  t5906 = -0.047*t2801;
  t6039 = 0. + t5906;
  t6122 = -1.*t1425;
  t6140 = 1. + t6122;
  t6155 = 0.047*t6140;
  t6299 = 0. + t6155;
  t4998 = t2801*t4409;
  t5039 = t1425*t4549;
  t5117 = t4998 + t5039;
  t6387 = 0.183*t1326;
  t6692 = 0. + t6387;
  t3678 = t700*t744*t1639;
  t4769 = -1.*t1326*t4619;
  t4776 = t3678 + t4769;
  t5200 = t744*t1429*t2801;
  t5256 = t1425*t744*t2050;
  t5329 = t5200 + t5256;
  t4793 = -1.*t700*t1508;
  t4909 = -1.*t1326*t4898;
  t4913 = t4793 + t4909;

  p_output1(0)=t3654;
  p_output1(1)=t4776;
  p_output1(2)=t4913;
  p_output1(3)=0.;
  p_output1(4)=t4987;
  p_output1(5)=t5117;
  p_output1(6)=t5329;
  p_output1(7)=0.;
  p_output1(8)=t3624*t700 + t1326*t717*t744;
  p_output1(9)=t4619*t700 + t1326*t1639*t744;
  p_output1(10)=-1.*t1326*t1508 + t4898*t700;
  p_output1(11)=0.;
  p_output1(12)=0. + 0.183*t3654 + 0.11079*t4987 + t2755*t6039 + t3214*t6299 + t3624*t6692 + t5849*t717*t744 + var1(0);
  p_output1(13)=0. + 0.183*t4776 + 0.11079*t5117 + t4409*t6039 + t4549*t6299 + t4619*t6692 + t1639*t5849*t744 + var1(1);
  p_output1(14)=0. + 0.183*t4913 + 0.11079*t5329 - 1.*t1508*t5849 + t4898*t6692 + t1429*t6039*t744 + t2050*t6299*t744 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_FL_thigh_joint(const Eigen::Matrix<double,18,1> &var1)
//void H_FL_thigh_joint(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



