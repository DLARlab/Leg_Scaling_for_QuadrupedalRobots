/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:13:36 GMT-05:00
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
  double t70;
  double t717;
  double t1090;
  double t831;
  double t1106;
  double t386;
  double t714;
  double t832;
  double t1138;
  double t1140;
  double t1833;
  double t1834;
  double t1839;
  double t2196;
  double t2211;
  double t2241;
  double t2247;
  double t251;
  double t2265;
  double t55;
  double t3707;
  double t3763;
  double t3767;
  double t3786;
  double t3851;
  double t3886;
  double t4076;
  double t4211;
  double t4285;
  double t3331;
  double t5044;
  double t5048;
  double t5053;
  double t3309;
  double t3324;
  double t3325;
  double t558;
  double t2320;
  double t2588;
  double t4350;
  double t4376;
  double t4392;
  double t3431;
  double t4289;
  double t4299;
  double t5582;
  double t5912;
  double t6090;
  double t4525;
  double t5098;
  double t5124;
  double t8200;
  double t8209;
  double t8214;
  double t8287;
  double t8288;
  double t3253;
  double t3401;
  double t3421;
  double t8222;
  double t8225;
  double t8240;
  double t8251;
  double t8256;
  double t8257;
  double t8269;
  double t8272;
  double t8275;
  double t8276;
  double t8278;
  double t8280;
  double t8281;
  double t8216;
  double t8217;
  double t8218;
  double t8284;
  double t8285;
  double t8291;
  double t8295;
  double t8296;
  double t8302;
  double t8306;
  double t8307;
  double t4304;
  double t4414;
  double t4455;
  double t8242;
  double t8245;
  double t8246;
  double t8219;
  double t8220;
  double t8221;
  double t5238;
  double t8172;
  double t8184;
  double t8248;
  double t8249;
  double t8250;
  t70 = Cos(var1[3]);
  t717 = Cos(var1[5]);
  t1090 = Sin(var1[3]);
  t831 = Sin(var1[4]);
  t1106 = Sin(var1[5]);
  t386 = Cos(var1[7]);
  t714 = Cos(var1[6]);
  t832 = t70*t717*t831;
  t1138 = t1090*t1106;
  t1140 = t832 + t1138;
  t1833 = t714*t1140;
  t1834 = -1.*t717*t1090;
  t1839 = t70*t831*t1106;
  t2196 = t1834 + t1839;
  t2211 = Sin(var1[6]);
  t2241 = -1.*t2196*t2211;
  t2247 = t1833 + t2241;
  t251 = Cos(var1[4]);
  t2265 = Sin(var1[7]);
  t55 = Cos(var1[8]);
  t3707 = t717*t1090*t831;
  t3763 = -1.*t70*t1106;
  t3767 = t3707 + t3763;
  t3786 = t714*t3767;
  t3851 = t70*t717;
  t3886 = t1090*t831*t1106;
  t4076 = t3851 + t3886;
  t4211 = -1.*t4076*t2211;
  t4285 = t3786 + t4211;
  t3331 = Sin(var1[8]);
  t5044 = t251*t717*t714;
  t5048 = -1.*t251*t1106*t2211;
  t5053 = t5044 + t5048;
  t3309 = t386*t2247;
  t3324 = t70*t251*t2265;
  t3325 = t3309 + t3324;
  t558 = t70*t251*t386;
  t2320 = -1.*t2247*t2265;
  t2588 = t558 + t2320;
  t4350 = t386*t4285;
  t4376 = t251*t1090*t2265;
  t4392 = t4350 + t4376;
  t3431 = t251*t386*t1090;
  t4289 = -1.*t4285*t2265;
  t4299 = t3431 + t4289;
  t5582 = t386*t5053;
  t5912 = -1.*t831*t2265;
  t6090 = t5582 + t5912;
  t4525 = -1.*t386*t831;
  t5098 = -1.*t5053*t2265;
  t5124 = t4525 + t5098;
  t8200 = t714*t2196;
  t8209 = t1140*t2211;
  t8214 = t8200 + t8209;
  t8287 = -1.*t55;
  t8288 = 1. + t8287;
  t3253 = t55*t2588;
  t3401 = -1.*t3325*t3331;
  t3421 = t3253 + t3401;
  t8222 = t55*t3325;
  t8225 = t2588*t3331;
  t8240 = t8222 + t8225;
  t8251 = -1.*t386;
  t8256 = 1. + t8251;
  t8257 = 0.183*t8256;
  t8269 = 0. + t8257;
  t8272 = -1.*t714;
  t8275 = 1. + t8272;
  t8276 = -0.047*t8275;
  t8278 = 0. + t8276;
  t8280 = 0.047*t2211;
  t8281 = 0. + t8280;
  t8216 = t714*t4076;
  t8217 = t3767*t2211;
  t8218 = t8216 + t8217;
  t8284 = 0.183*t2265;
  t8285 = 0. + t8284;
  t8291 = 0.183*t8288;
  t8295 = 0.1*t3331;
  t8296 = 0. + t8291 + t8295;
  t8302 = -0.1*t8288;
  t8306 = 0.183*t3331;
  t8307 = 0. + t8302 + t8306;
  t4304 = t55*t4299;
  t4414 = -1.*t4392*t3331;
  t4455 = t4304 + t4414;
  t8242 = t55*t4392;
  t8245 = t4299*t3331;
  t8246 = t8242 + t8245;
  t8219 = t251*t714*t1106;
  t8220 = t251*t717*t2211;
  t8221 = t8219 + t8220;
  t5238 = t55*t5124;
  t8172 = -1.*t6090*t3331;
  t8184 = t5238 + t8172;
  t8248 = t55*t6090;
  t8249 = t5124*t3331;
  t8250 = t8248 + t8249;

  p_output1(0)=t3421;
  p_output1(1)=t4455;
  p_output1(2)=t8184;
  p_output1(3)=0.;
  p_output1(4)=t8214;
  p_output1(5)=t8218;
  p_output1(6)=t8221;
  p_output1(7)=0.;
  p_output1(8)=t8240;
  p_output1(9)=t8246;
  p_output1(10)=t8250;
  p_output1(11)=0.;
  p_output1(12)=0. + 0.183*t3421 - 0.08953*t8214 - 0.1*t8240 + t251*t70*t8269 + t2196*t8278 + t1140*t8281 + t2247*t8285 + t2588*t8296 + t3325*t8307 + var1(0);
  p_output1(13)=0. + 0.183*t4455 - 0.08953*t8218 - 0.1*t8246 + t1090*t251*t8269 + t4076*t8278 + t3767*t8281 + t4285*t8285 + t4299*t8296 + t4392*t8307 + var1(1);
  p_output1(14)=0. + 0.183*t8184 - 0.08953*t8221 - 0.1*t8250 + t1106*t251*t8278 + t251*t717*t8281 + t5053*t8285 + t5124*t8296 + t6090*t8307 - 1.*t8269*t831 + var1(2);
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



