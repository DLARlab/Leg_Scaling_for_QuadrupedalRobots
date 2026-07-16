/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:21:17 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_FR_calf_joint.h"

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
  double t241;
  double t714;
  double t809;
  double t789;
  double t841;
  double t485;
  double t539;
  double t804;
  double t1157;
  double t1221;
  double t1265;
  double t1329;
  double t1385;
  double t1535;
  double t1538;
  double t1564;
  double t1586;
  double t303;
  double t1686;
  double t206;
  double t2475;
  double t2738;
  double t2876;
  double t2900;
  double t2914;
  double t3057;
  double t3110;
  double t3147;
  double t3155;
  double t2041;
  double t3492;
  double t3522;
  double t3529;
  double t1866;
  double t2030;
  double t2038;
  double t500;
  double t1724;
  double t1795;
  double t3245;
  double t3307;
  double t3367;
  double t2261;
  double t3160;
  double t3173;
  double t3652;
  double t3685;
  double t3785;
  double t3453;
  double t3553;
  double t3555;
  double t4017;
  double t4030;
  double t4068;
  double t5247;
  double t5258;
  double t1828;
  double t2138;
  double t2197;
  double t4287;
  double t4342;
  double t4482;
  double t4763;
  double t4788;
  double t4794;
  double t4827;
  double t4834;
  double t4837;
  double t4863;
  double t4984;
  double t5084;
  double t5110;
  double t4096;
  double t4216;
  double t4218;
  double t5164;
  double t5184;
  double t5266;
  double t5305;
  double t5320;
  double t5345;
  double t5361;
  double t5402;
  double t3234;
  double t3399;
  double t3439;
  double t4546;
  double t4610;
  double t4634;
  double t4245;
  double t4269;
  double t4274;
  double t3603;
  double t3800;
  double t3984;
  double t4674;
  double t4700;
  double t4755;
  t241 = Cos(var1[3]);
  t714 = Cos(var1[5]);
  t809 = Sin(var1[3]);
  t789 = Sin(var1[4]);
  t841 = Sin(var1[5]);
  t485 = Cos(var1[7]);
  t539 = Cos(var1[6]);
  t804 = t241*t714*t789;
  t1157 = t809*t841;
  t1221 = t804 + t1157;
  t1265 = t539*t1221;
  t1329 = -1.*t714*t809;
  t1385 = t241*t789*t841;
  t1535 = t1329 + t1385;
  t1538 = Sin(var1[6]);
  t1564 = -1.*t1535*t1538;
  t1586 = t1265 + t1564;
  t303 = Cos(var1[4]);
  t1686 = Sin(var1[7]);
  t206 = Cos(var1[8]);
  t2475 = t714*t809*t789;
  t2738 = -1.*t241*t841;
  t2876 = t2475 + t2738;
  t2900 = t539*t2876;
  t2914 = t241*t714;
  t3057 = t809*t789*t841;
  t3110 = t2914 + t3057;
  t3147 = -1.*t3110*t1538;
  t3155 = t2900 + t3147;
  t2041 = Sin(var1[8]);
  t3492 = t303*t714*t539;
  t3522 = -1.*t303*t841*t1538;
  t3529 = t3492 + t3522;
  t1866 = t485*t1586;
  t2030 = t241*t303*t1686;
  t2038 = t1866 + t2030;
  t500 = t241*t303*t485;
  t1724 = -1.*t1586*t1686;
  t1795 = t500 + t1724;
  t3245 = t485*t3155;
  t3307 = t303*t809*t1686;
  t3367 = t3245 + t3307;
  t2261 = t303*t485*t809;
  t3160 = -1.*t3155*t1686;
  t3173 = t2261 + t3160;
  t3652 = t485*t3529;
  t3685 = -1.*t789*t1686;
  t3785 = t3652 + t3685;
  t3453 = -1.*t485*t789;
  t3553 = -1.*t3529*t1686;
  t3555 = t3453 + t3553;
  t4017 = t539*t1535;
  t4030 = t1221*t1538;
  t4068 = t4017 + t4030;
  t5247 = -1.*t206;
  t5258 = 1. + t5247;
  t1828 = t206*t1795;
  t2138 = -1.*t2038*t2041;
  t2197 = t1828 + t2138;
  t4287 = t206*t2038;
  t4342 = t1795*t2041;
  t4482 = t4287 + t4342;
  t4763 = -1.*t485;
  t4788 = 1. + t4763;
  t4794 = 0.183*t4788;
  t4827 = 0. + t4794;
  t4834 = -1.*t539;
  t4837 = 1. + t4834;
  t4863 = -0.047*t4837;
  t4984 = 0. + t4863;
  t5084 = 0.047*t1538;
  t5110 = 0. + t5084;
  t4096 = t539*t3110;
  t4216 = t2876*t1538;
  t4218 = t4096 + t4216;
  t5164 = 0.183*t1686;
  t5184 = 0. + t5164;
  t5266 = -0.25*t5258;
  t5305 = 0.183*t2041;
  t5320 = 0. + t5266 + t5305;
  t5345 = 0.183*t5258;
  t5361 = 0.25*t2041;
  t5402 = 0. + t5345 + t5361;
  t3234 = t206*t3173;
  t3399 = -1.*t3367*t2041;
  t3439 = t3234 + t3399;
  t4546 = t206*t3367;
  t4610 = t3173*t2041;
  t4634 = t4546 + t4610;
  t4245 = t303*t539*t841;
  t4269 = t303*t714*t1538;
  t4274 = t4245 + t4269;
  t3603 = t206*t3555;
  t3800 = -1.*t3785*t2041;
  t3984 = t3603 + t3800;
  t4674 = t206*t3785;
  t4700 = t3555*t2041;
  t4755 = t4674 + t4700;

  p_output1(0)=t2197;
  p_output1(1)=t3439;
  p_output1(2)=t3984;
  p_output1(3)=0.;
  p_output1(4)=t4068;
  p_output1(5)=t4218;
  p_output1(6)=t4274;
  p_output1(7)=0.;
  p_output1(8)=t4482;
  p_output1(9)=t4634;
  p_output1(10)=t4755;
  p_output1(11)=0.;
  p_output1(12)=0. + 0.183*t2197 - 0.15331*t4068 - 0.25*t4482 + t241*t303*t4827 + t1535*t4984 + t1221*t5110 + t1586*t5184 + t2038*t5320 + t1795*t5402 + var1(0);
  p_output1(13)=0. + 0.183*t3439 - 0.15331*t4218 - 0.25*t4634 + t3110*t4984 + t2876*t5110 + t3155*t5184 + t3367*t5320 + t3173*t5402 + t303*t4827*t809 + var1(1);
  p_output1(14)=0. + 0.183*t3984 - 0.15331*t4274 - 0.25*t4755 + t3529*t5184 + t3785*t5320 + t3555*t5402 + t303*t5110*t714 - 1.*t4827*t789 + t303*t4984*t841 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_FR_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void H_FR_calf_joint(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



