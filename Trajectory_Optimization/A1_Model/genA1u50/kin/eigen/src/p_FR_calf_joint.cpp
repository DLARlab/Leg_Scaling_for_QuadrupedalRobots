/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:13:35 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_FR_calf_joint.h"

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
static void output1(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  double t381;
  double t8104;
  double t8121;
  double t8105;
  double t8125;
  double t1860;
  double t8119;
  double t8126;
  double t8127;
  double t8131;
  double t8136;
  double t8137;
  double t8138;
  double t394;
  double t444;
  double t8162;
  double t8167;
  double t8169;
  double t8170;
  double t8178;
  double t8179;
  double t8180;
  double t8182;
  double t8175;
  double t8176;
  double t8177;
  double t8186;
  double t8187;
  double t8188;
  double t475;
  double t547;
  double t1013;
  double t1065;
  double t3821;
  double t5543;
  double t8078;
  double t8080;
  double t8139;
  double t8140;
  double t8209;
  double t8211;
  double t8212;
  double t8214;
  double t8215;
  double t8216;
  double t8171;
  double t8172;
  double t8222;
  double t8223;
  double t8224;
  double t8181;
  double t8183;
  double t8184;
  double t8189;
  double t8191;
  double t8192;
  double t8226;
  double t8227;
  double t8228;
  double t8235;
  double t8236;
  double t8239;
  double t8257;
  double t8258;
  double t8259;
  double t8261;
  double t8262;
  double t8263;
  double t8265;
  double t8266;
  double t8267;
  t381 = Cos(var1[3]);
  t8104 = Cos(var1[5]);
  t8121 = Sin(var1[4]);
  t8105 = Sin(var1[3]);
  t8125 = Sin(var1[5]);
  t1860 = Cos(var1[6]);
  t8119 = -1.*t8104*t8105;
  t8126 = t381*t8121*t8125;
  t8127 = t8119 + t8126;
  t8131 = t381*t8104*t8121;
  t8136 = t8105*t8125;
  t8137 = t8131 + t8136;
  t8138 = Sin(var1[6]);
  t394 = Cos(var1[4]);
  t444 = Cos(var1[7]);
  t8162 = t1860*t8137;
  t8167 = -1.*t8127*t8138;
  t8169 = t8162 + t8167;
  t8170 = Sin(var1[7]);
  t8178 = Cos(var1[8]);
  t8179 = -1.*t8178;
  t8180 = 1. + t8179;
  t8182 = Sin(var1[8]);
  t8175 = t381*t394*t444;
  t8176 = -1.*t8169*t8170;
  t8177 = t8175 + t8176;
  t8186 = t444*t8169;
  t8187 = t381*t394*t8170;
  t8188 = t8186 + t8187;
  t475 = -1.*t444;
  t547 = 1. + t475;
  t1013 = 0.183*t547;
  t1065 = 0. + t1013;
  t3821 = -1.*t1860;
  t5543 = 1. + t3821;
  t8078 = -0.047*t5543;
  t8080 = 0. + t8078;
  t8139 = 0.047*t8138;
  t8140 = 0. + t8139;
  t8209 = t381*t8104;
  t8211 = t8105*t8121*t8125;
  t8212 = t8209 + t8211;
  t8214 = t8104*t8105*t8121;
  t8215 = -1.*t381*t8125;
  t8216 = t8214 + t8215;
  t8171 = 0.183*t8170;
  t8172 = 0. + t8171;
  t8222 = t1860*t8216;
  t8223 = -1.*t8212*t8138;
  t8224 = t8222 + t8223;
  t8181 = 0.183*t8180;
  t8183 = 0.1*t8182;
  t8184 = 0. + t8181 + t8183;
  t8189 = -0.1*t8180;
  t8191 = 0.183*t8182;
  t8192 = 0. + t8189 + t8191;
  t8226 = t394*t444*t8105;
  t8227 = -1.*t8224*t8170;
  t8228 = t8226 + t8227;
  t8235 = t444*t8224;
  t8236 = t394*t8105*t8170;
  t8239 = t8235 + t8236;
  t8257 = t394*t8104*t1860;
  t8258 = -1.*t394*t8125*t8138;
  t8259 = t8257 + t8258;
  t8261 = -1.*t444*t8121;
  t8262 = -1.*t8259*t8170;
  t8263 = t8261 + t8262;
  t8265 = t444*t8259;
  t8266 = -1.*t8121*t8170;
  t8267 = t8265 + t8266;

  p_output1(0)=0. + t1065*t381*t394 + t8080*t8127 - 0.08953*(t1860*t8127 + t8137*t8138) + t8137*t8140 + t8169*t8172 + t8177*t8184 - 0.1*(t8177*t8182 + t8178*t8188) + 0.183*(t8177*t8178 - 1.*t8182*t8188) + t8188*t8192 + var1(0);
  p_output1(1)=0. + t1065*t394*t8105 + t8080*t8212 + t8140*t8216 - 0.08953*(t1860*t8212 + t8138*t8216) + t8172*t8224 + t8184*t8228 + t8192*t8239 - 0.1*(t8182*t8228 + t8178*t8239) + 0.183*(t8178*t8228 - 1.*t8182*t8239) + var1(1);
  p_output1(2)=0. - 1.*t1065*t8121 + t394*t8080*t8125 - 0.08953*(t1860*t394*t8125 + t394*t8104*t8138) + t394*t8104*t8140 + t8172*t8259 + t8184*t8263 + t8192*t8267 - 0.1*(t8182*t8263 + t8178*t8267) + 0.183*(t8178*t8263 - 1.*t8182*t8267) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_FR_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void p_FR_calf_joint(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



