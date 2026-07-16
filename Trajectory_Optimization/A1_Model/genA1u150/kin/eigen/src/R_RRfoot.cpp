/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:27:02 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RRfoot.h"

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
  double t2968;
  double t4376;
  double t5003;
  double t4855;
  double t5027;
  double t4095;
  double t3213;
  double t3365;
  double t4239;
  double t4992;
  double t5037;
  double t5042;
  double t5045;
  double t5079;
  double t5085;
  double t5095;
  double t5099;
  double t5108;
  double t5120;
  double t2628;
  double t5231;
  double t5353;
  double t5356;
  double t5395;
  double t5407;
  double t5437;
  double t5443;
  double t5454;
  double t5476;
  double t5494;
  double t5658;
  double t5671;
  double t5672;
  double t3509;
  double t5129;
  double t5224;
  double t5238;
  double t5286;
  double t5335;
  double t5348;
  double t5546;
  double t5557;
  double t5572;
  double t5578;
  double t5605;
  double t5647;
  double t5683;
  double t5693;
  double t5708;
  double t5744;
  double t5836;
  t2968 = Cos(var1[3]);
  t4376 = Cos(var1[5]);
  t5003 = Sin(var1[3]);
  t4855 = Sin(var1[4]);
  t5027 = Sin(var1[5]);
  t4095 = Cos(var1[13]);
  t3213 = Cos(var1[4]);
  t3365 = Sin(var1[13]);
  t4239 = Cos(var1[12]);
  t4992 = t2968*t4376*t4855;
  t5037 = t5003*t5027;
  t5042 = t4992 + t5037;
  t5045 = t4239*t5042;
  t5079 = Sin(var1[12]);
  t5085 = -1.*t4376*t5003;
  t5095 = t2968*t4855*t5027;
  t5099 = t5085 + t5095;
  t5108 = -1.*t5079*t5099;
  t5120 = t5045 + t5108;
  t2628 = Sin(var1[14]);
  t5231 = Cos(var1[14]);
  t5353 = t4376*t5003*t4855;
  t5356 = -1.*t2968*t5027;
  t5395 = t5353 + t5356;
  t5407 = t4239*t5395;
  t5437 = t2968*t4376;
  t5443 = t5003*t4855*t5027;
  t5454 = t5437 + t5443;
  t5476 = -1.*t5079*t5454;
  t5494 = t5407 + t5476;
  t5658 = t4239*t3213*t4376;
  t5671 = -1.*t3213*t5079*t5027;
  t5672 = t5658 + t5671;
  t3509 = t2968*t3213*t3365;
  t5129 = t4095*t5120;
  t5224 = t3509 + t5129;
  t5238 = t4095*t2968*t3213;
  t5286 = -1.*t3365*t5120;
  t5335 = t5238 + t5286;
  t5348 = t3213*t3365*t5003;
  t5546 = t4095*t5494;
  t5557 = t5348 + t5546;
  t5572 = t4095*t3213*t5003;
  t5578 = -1.*t3365*t5494;
  t5605 = t5572 + t5578;
  t5647 = -1.*t3365*t4855;
  t5683 = t4095*t5672;
  t5693 = t5647 + t5683;
  t5708 = -1.*t4095*t4855;
  t5744 = -1.*t3365*t5672;
  t5836 = t5708 + t5744;

  p_output1(0)=-1.*t2628*t5224 + t5231*t5335;
  p_output1(1)=-1.*t2628*t5557 + t5231*t5605;
  p_output1(2)=-1.*t2628*t5693 + t5231*t5836;
  p_output1(3)=t5042*t5079 + t4239*t5099;
  p_output1(4)=t5079*t5395 + t4239*t5454;
  p_output1(5)=t3213*t4239*t5027 + t3213*t4376*t5079;
  p_output1(6)=t5224*t5231 + t2628*t5335;
  p_output1(7)=t5231*t5557 + t2628*t5605;
  p_output1(8)=t5231*t5693 + t2628*t5836;
}


       
Eigen::Matrix<double,3,3> R_RRfoot(const Eigen::Matrix<double,18,1> &var1)
//void R_RRfoot(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



