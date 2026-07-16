/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:51:42 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_FL_calf_joint.h"

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
static void output1(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  double t569;
  double t2040;
  double t3464;
  double t2882;
  double t3770;
  double t1388;
  double t996;
  double t1048;
  double t1994;
  double t3387;
  double t4455;
  double t4580;
  double t4601;
  double t4862;
  double t5131;
  double t5133;
  double t5185;
  double t5408;
  double t5514;
  double t60;
  double t5847;
  double t6484;
  double t6494;
  double t6515;
  double t6529;
  double t6541;
  double t6571;
  double t6590;
  double t6903;
  double t7091;
  double t7420;
  double t7455;
  double t7517;
  double t1216;
  double t5561;
  double t5705;
  double t5857;
  double t5909;
  double t5983;
  double t6325;
  double t7103;
  double t7131;
  double t7233;
  double t7314;
  double t7315;
  double t7410;
  double t7520;
  double t7536;
  double t7565;
  double t7609;
  double t7637;
  t569 = Cos(var1[3]);
  t2040 = Cos(var1[5]);
  t3464 = Sin(var1[3]);
  t2882 = Sin(var1[4]);
  t3770 = Sin(var1[5]);
  t1388 = Cos(var1[10]);
  t996 = Cos(var1[4]);
  t1048 = Sin(var1[10]);
  t1994 = Cos(var1[9]);
  t3387 = t569*t2040*t2882;
  t4455 = t3464*t3770;
  t4580 = t3387 + t4455;
  t4601 = t1994*t4580;
  t4862 = Sin(var1[9]);
  t5131 = -1.*t2040*t3464;
  t5133 = t569*t2882*t3770;
  t5185 = t5131 + t5133;
  t5408 = -1.*t4862*t5185;
  t5514 = t4601 + t5408;
  t60 = Sin(var1[11]);
  t5847 = Cos(var1[11]);
  t6484 = t2040*t3464*t2882;
  t6494 = -1.*t569*t3770;
  t6515 = t6484 + t6494;
  t6529 = t1994*t6515;
  t6541 = t569*t2040;
  t6571 = t3464*t2882*t3770;
  t6590 = t6541 + t6571;
  t6903 = -1.*t4862*t6590;
  t7091 = t6529 + t6903;
  t7420 = t1994*t996*t2040;
  t7455 = -1.*t996*t4862*t3770;
  t7517 = t7420 + t7455;
  t1216 = t569*t996*t1048;
  t5561 = t1388*t5514;
  t5705 = t1216 + t5561;
  t5857 = t1388*t569*t996;
  t5909 = -1.*t1048*t5514;
  t5983 = t5857 + t5909;
  t6325 = t996*t1048*t3464;
  t7103 = t1388*t7091;
  t7131 = t6325 + t7103;
  t7233 = t1388*t996*t3464;
  t7314 = -1.*t1048*t7091;
  t7315 = t7233 + t7314;
  t7410 = -1.*t1048*t2882;
  t7520 = t1388*t7517;
  t7536 = t7410 + t7520;
  t7565 = -1.*t1388*t2882;
  t7609 = -1.*t1048*t7517;
  t7637 = t7565 + t7609;

  p_output1(0)=t5847*t5983 - 1.*t5705*t60;
  p_output1(1)=-1.*t60*t7131 + t5847*t7315;
  p_output1(2)=-1.*t60*t7536 + t5847*t7637;
  p_output1(3)=t4580*t4862 + t1994*t5185;
  p_output1(4)=t4862*t6515 + t1994*t6590;
  p_output1(5)=t1994*t3770*t996 + t2040*t4862*t996;
  p_output1(6)=t5705*t5847 + t5983*t60;
  p_output1(7)=t5847*t7131 + t60*t7315;
  p_output1(8)=t5847*t7536 + t60*t7637;
}


       
Eigen::Matrix<double,3,3> R_FL_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_FL_calf_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



