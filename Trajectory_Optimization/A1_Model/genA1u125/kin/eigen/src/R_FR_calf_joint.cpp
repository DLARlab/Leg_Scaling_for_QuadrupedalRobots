/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:21:17 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_FR_calf_joint.h"

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
  double t1983;
  double t3439;
  double t3632;
  double t3474;
  double t3930;
  double t3057;
  double t3345;
  double t3492;
  double t3980;
  double t4109;
  double t4200;
  double t4274;
  double t4524;
  double t4546;
  double t4576;
  double t4610;
  double t4863;
  double t3038;
  double t5110;
  double t1400;
  double t5361;
  double t5389;
  double t5402;
  double t5417;
  double t5424;
  double t5428;
  double t5462;
  double t5467;
  double t5468;
  double t5305;
  double t5807;
  double t5810;
  double t5822;
  double t5184;
  double t5222;
  double t5266;
  double t3121;
  double t5124;
  double t5137;
  double t5621;
  double t5641;
  double t5721;
  double t5345;
  double t5478;
  double t5616;
  double t5849;
  double t5859;
  double t5872;
  double t5804;
  double t5825;
  double t5837;
  t1983 = Cos(var1[3]);
  t3439 = Cos(var1[5]);
  t3632 = Sin(var1[3]);
  t3474 = Sin(var1[4]);
  t3930 = Sin(var1[5]);
  t3057 = Cos(var1[7]);
  t3345 = Cos(var1[6]);
  t3492 = t1983*t3439*t3474;
  t3980 = t3632*t3930;
  t4109 = t3492 + t3980;
  t4200 = t3345*t4109;
  t4274 = -1.*t3439*t3632;
  t4524 = t1983*t3474*t3930;
  t4546 = t4274 + t4524;
  t4576 = Sin(var1[6]);
  t4610 = -1.*t4546*t4576;
  t4863 = t4200 + t4610;
  t3038 = Cos(var1[4]);
  t5110 = Sin(var1[7]);
  t1400 = Cos(var1[8]);
  t5361 = t3439*t3632*t3474;
  t5389 = -1.*t1983*t3930;
  t5402 = t5361 + t5389;
  t5417 = t3345*t5402;
  t5424 = t1983*t3439;
  t5428 = t3632*t3474*t3930;
  t5462 = t5424 + t5428;
  t5467 = -1.*t5462*t4576;
  t5468 = t5417 + t5467;
  t5305 = Sin(var1[8]);
  t5807 = t3038*t3439*t3345;
  t5810 = -1.*t3038*t3930*t4576;
  t5822 = t5807 + t5810;
  t5184 = t3057*t4863;
  t5222 = t1983*t3038*t5110;
  t5266 = t5184 + t5222;
  t3121 = t1983*t3038*t3057;
  t5124 = -1.*t4863*t5110;
  t5137 = t3121 + t5124;
  t5621 = t3057*t5468;
  t5641 = t3038*t3632*t5110;
  t5721 = t5621 + t5641;
  t5345 = t3038*t3057*t3632;
  t5478 = -1.*t5468*t5110;
  t5616 = t5345 + t5478;
  t5849 = t3057*t5822;
  t5859 = -1.*t3474*t5110;
  t5872 = t5849 + t5859;
  t5804 = -1.*t3057*t3474;
  t5825 = -1.*t5822*t5110;
  t5837 = t5804 + t5825;

  p_output1(0)=t1400*t5137 - 1.*t5266*t5305;
  p_output1(1)=t1400*t5616 - 1.*t5305*t5721;
  p_output1(2)=t1400*t5837 - 1.*t5305*t5872;
  p_output1(3)=t3345*t4546 + t4109*t4576;
  p_output1(4)=t4576*t5402 + t3345*t5462;
  p_output1(5)=t3038*t3345*t3930 + t3038*t3439*t4576;
  p_output1(6)=t1400*t5266 + t5137*t5305;
  p_output1(7)=t5305*t5616 + t1400*t5721;
  p_output1(8)=t5305*t5837 + t1400*t5872;
}


       
Eigen::Matrix<double,3,3> R_FR_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void R_FR_calf_joint(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



