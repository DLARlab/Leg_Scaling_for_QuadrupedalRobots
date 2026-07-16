/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:04:33 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RL_hip_joint.h"

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
  double t436;
  double t1697;
  double t1245;
  double t1388;
  double t2537;
  double t977;
  double t1522;
  double t3398;
  double t4376;
  double t4675;
  double t5008;
  double t5033;
  double t5038;
  double t394;
  double t1145;
  double t1210;
  double t4933;
  double t4936;
  double t4938;
  double t4981;
  double t5060;
  double t5071;
  double t5096;
  double t5133;
  double t5134;
  double t5135;
  double t5201;
  double t5211;
  double t5251;
  double t5308;
  double t5310;
  double t5312;
  double t5268;
  double t5324;
  double t5391;
  double t5392;
  double t5398;
  double t5356;
  double t5361;
  double t5365;
  double t5369;
  t436 = Sin(var1[3]);
  t1697 = Cos(var1[3]);
  t1245 = Cos(var1[5]);
  t1388 = Sin(var1[4]);
  t2537 = Sin(var1[5]);
  t977 = Sin(var1[15]);
  t1522 = -1.*t1245*t436*t1388;
  t3398 = t1697*t2537;
  t4376 = t1522 + t3398;
  t4675 = Cos(var1[15]);
  t5008 = -1.*t1697*t1245;
  t5033 = -1.*t436*t1388*t2537;
  t5038 = t5008 + t5033;
  t394 = Cos(var1[4]);
  t1145 = -0.047*t977;
  t1210 = 0. + t1145;
  t4933 = -1.*t4675;
  t4936 = 1. + t4933;
  t4938 = 0.047*t4936;
  t4981 = 0. + t4938;
  t5060 = t1697*t1245*t1388;
  t5071 = t436*t2537;
  t5096 = t5060 + t5071;
  t5133 = -1.*t1245*t436;
  t5134 = t1697*t1388*t2537;
  t5135 = t5133 + t5134;
  t5201 = t1245*t436;
  t5211 = -1.*t1697*t1388*t2537;
  t5251 = t5201 + t5211;
  t5308 = t1245*t436*t1388;
  t5310 = -1.*t1697*t2537;
  t5312 = t5308 + t5310;
  t5268 = t4675*t5096;
  t5324 = t4675*t5312;
  t5391 = t1697*t1245;
  t5392 = t436*t1388*t2537;
  t5398 = t5391 + t5392;
  t5356 = t4675*t394*t1245;
  t5361 = -1.*t394*t977*t2537;
  t5365 = t5356 + t5361;
  t5369 = 0.047*t5365;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=0.183*t394*t436 + t1210*t4376 + t4981*t5038 + 0.047*(t4675*t5038 + t4376*t977);
  p_output1(10)=-0.183*t1697*t394 + t1210*t5096 + t4981*t5135 + 0.047*(t4675*t5135 + t5096*t977);
  p_output1(11)=0;
  p_output1(12)=0.183*t1388*t1697 + t1210*t1245*t1697*t394 + t1697*t2537*t394*t4981 + 0.047*(t1697*t2537*t394*t4675 + t1245*t1697*t394*t977);
  p_output1(13)=0.183*t1388*t436 + t1210*t1245*t394*t436 + t2537*t394*t436*t4981 + 0.047*(t2537*t394*t436*t4675 + t1245*t394*t436*t977);
  p_output1(14)=-1.*t1210*t1245*t1388 + 0.183*t394 - 1.*t1388*t2537*t4981 + 0.047*(-1.*t1388*t2537*t4675 - 1.*t1245*t1388*t977);
  p_output1(15)=t4981*t5096 + t1210*t5251 + 0.047*(t5268 + t5251*t977);
  p_output1(16)=t1210*t5038 + t4981*t5312 + 0.047*(t5324 + t5038*t977);
  p_output1(17)=-1.*t1210*t2537*t394 + t1245*t394*t4981 + t5369;
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
  p_output1(45)=-0.047*t4675*t5096 + 0.047*t5135*t977 + 0.047*(t5268 - 1.*t5135*t977);
  p_output1(46)=-0.047*t4675*t5312 + 0.047*t5398*t977 + 0.047*(t5324 - 1.*t5398*t977);
  p_output1(47)=-0.047*t1245*t394*t4675 + t5369 + 0.047*t2537*t394*t977;
  p_output1(48)=0;
  p_output1(49)=0;
  p_output1(50)=0;
  p_output1(51)=0;
  p_output1(52)=0;
  p_output1(53)=0;
}


       
Eigen::Matrix<double,3,18> Jp_RL_hip_joint(const Eigen::Matrix<double,18,1> &var1)
//void Jp_RL_hip_joint(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



