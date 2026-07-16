/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:11:14 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RL_calf_joint.h"

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
  double t853;
  double t1427;
  double t1267;
  double t1277;
  double t1435;
  double t1164;
  double t1296;
  double t1467;
  double t1544;
  double t1766;
  double t2227;
  double t2260;
  double t2462;
  double t745;
  double t2849;
  double t133;
  double t3217;
  double t3242;
  double t3488;
  double t3842;
  double t3872;
  double t4171;
  double t4258;
  double t4467;
  double t4562;
  double t4779;
  double t5056;
  double t5153;
  double t5184;
  double t194;
  double t591;
  double t602;
  double t692;
  double t1204;
  double t1263;
  double t1892;
  double t1955;
  double t2039;
  double t2170;
  double t5539;
  double t5552;
  double t5575;
  double t5585;
  double t5638;
  double t5718;
  double t2978;
  double t3106;
  double t4183;
  double t4321;
  double t4340;
  double t6440;
  double t6473;
  double t6624;
  double t4901;
  double t4983;
  double t4995;
  double t7030;
  double t7068;
  double t7074;
  double t7117;
  double t7154;
  double t7167;
  double t7476;
  double t7481;
  double t7537;
  double t7587;
  double t7590;
  double t7607;
  double t7623;
  double t7680;
  double t7692;
  double t7849;
  double t7856;
  double t7862;
  double t7875;
  double t7880;
  double t7885;
  double t7911;
  double t7912;
  double t7913;
  double t7995;
  double t7996;
  double t7997;
  double t8003;
  double t8004;
  double t8005;
  double t8007;
  double t8008;
  double t8009;
  double t8048;
  double t8049;
  double t8051;
  double t8060;
  double t8062;
  double t8063;
  double t8125;
  double t8127;
  double t8138;
  double t2532;
  double t8145;
  double t8146;
  double t8192;
  double t8193;
  double t8196;
  double t8268;
  double t8269;
  double t8303;
  double t8305;
  double t8306;
  double t8308;
  double t8309;
  double t8162;
  double t8198;
  double t8213;
  double t8238;
  double t8240;
  double t8241;
  double t8243;
  double t8245;
  double t8247;
  double t8250;
  double t8253;
  double t8255;
  double t8258;
  double t8259;
  double t8261;
  double t8262;
  double t8354;
  double t8355;
  double t8357;
  double t7242;
  double t8316;
  double t8317;
  double t8383;
  double t8384;
  double t8388;
  double t8389;
  double t8390;
  double t8415;
  double t8418;
  double t8421;
  double t8423;
  double t8425;
  double t8426;
  double t7236;
  double t7246;
  double t8367;
  double t8457;
  double t8459;
  double t8460;
  double t8462;
  double t8463;
  double t8477;
  double t8478;
  double t8479;
  double t8393;
  double t8401;
  double t8496;
  double t8497;
  double t8501;
  double t8436;
  double t8446;
  t853 = Sin(var1[3]);
  t1427 = Cos(var1[3]);
  t1267 = Cos(var1[5]);
  t1277 = Sin(var1[4]);
  t1435 = Sin(var1[5]);
  t1164 = Sin(var1[15]);
  t1296 = -1.*t1267*t853*t1277;
  t1467 = t1427*t1435;
  t1544 = t1296 + t1467;
  t1766 = Cos(var1[15]);
  t2227 = -1.*t1427*t1267;
  t2260 = -1.*t853*t1277*t1435;
  t2462 = t2227 + t2260;
  t745 = Cos(var1[4]);
  t2849 = Sin(var1[16]);
  t133 = Cos(var1[16]);
  t3217 = t1766*t1544;
  t3242 = -1.*t1164*t2462;
  t3488 = t3217 + t3242;
  t3842 = Cos(var1[17]);
  t3872 = -1.*t3842;
  t4171 = 1. + t3872;
  t4258 = Sin(var1[17]);
  t4467 = -1.*t745*t2849*t853;
  t4562 = t133*t3488;
  t4779 = t4467 + t4562;
  t5056 = -1.*t133*t745*t853;
  t5153 = -1.*t2849*t3488;
  t5184 = t5056 + t5153;
  t194 = -1.*t133;
  t591 = 1. + t194;
  t602 = -0.183*t591;
  t692 = 0. + t602;
  t1204 = -0.047*t1164;
  t1263 = 0. + t1204;
  t1892 = -1.*t1766;
  t1955 = 1. + t1892;
  t2039 = 0.047*t1955;
  t2170 = 0. + t2039;
  t5539 = t1427*t1267*t1277;
  t5552 = t853*t1435;
  t5575 = t5539 + t5552;
  t5585 = -1.*t1267*t853;
  t5638 = t1427*t1277*t1435;
  t5718 = t5585 + t5638;
  t2978 = -0.183*t2849;
  t3106 = 0. + t2978;
  t4183 = -0.1*t4171;
  t4321 = -0.183*t4258;
  t4340 = 0. + t4183 + t4321;
  t6440 = t1766*t5575;
  t6473 = -1.*t1164*t5718;
  t6624 = t6440 + t6473;
  t4901 = -0.183*t4171;
  t4983 = 0.1*t4258;
  t4995 = 0. + t4901 + t4983;
  t7030 = t1427*t745*t2849;
  t7068 = t133*t6624;
  t7074 = t7030 + t7068;
  t7117 = t133*t1427*t745;
  t7154 = -1.*t2849*t6624;
  t7167 = t7117 + t7154;
  t7476 = t1766*t1427*t745*t1267;
  t7481 = -1.*t1427*t745*t1164*t1435;
  t7537 = t7476 + t7481;
  t7587 = -1.*t1427*t2849*t1277;
  t7590 = t133*t7537;
  t7607 = t7587 + t7590;
  t7623 = -1.*t133*t1427*t1277;
  t7680 = -1.*t2849*t7537;
  t7692 = t7623 + t7680;
  t7849 = t1766*t745*t1267*t853;
  t7856 = -1.*t745*t1164*t853*t1435;
  t7862 = t7849 + t7856;
  t7875 = -1.*t2849*t853*t1277;
  t7880 = t133*t7862;
  t7885 = t7875 + t7880;
  t7911 = -1.*t133*t853*t1277;
  t7912 = -1.*t2849*t7862;
  t7913 = t7911 + t7912;
  t7995 = -1.*t1766*t1267*t1277;
  t7996 = t1164*t1277*t1435;
  t7997 = t7995 + t7996;
  t8003 = -1.*t745*t2849;
  t8004 = t133*t7997;
  t8005 = t8003 + t8004;
  t8007 = -1.*t133*t745;
  t8008 = -1.*t2849*t7997;
  t8009 = t8007 + t8008;
  t8048 = t1267*t853;
  t8049 = -1.*t1427*t1277*t1435;
  t8051 = t8048 + t8049;
  t8060 = -1.*t1164*t5575;
  t8062 = t1766*t8051;
  t8063 = t8060 + t8062;
  t8125 = t1267*t853*t1277;
  t8127 = -1.*t1427*t1435;
  t8138 = t8125 + t8127;
  t2532 = t1766*t2462;
  t8145 = -1.*t1164*t8138;
  t8146 = t8145 + t2532;
  t8192 = -1.*t745*t1267*t1164;
  t8193 = -1.*t1766*t745*t1435;
  t8196 = t8192 + t8193;
  t8268 = -1.*t1766*t5718;
  t8269 = t8060 + t8268;
  t8303 = t1427*t1267;
  t8305 = t853*t1277*t1435;
  t8306 = t8303 + t8305;
  t8308 = -1.*t1766*t8306;
  t8309 = t8145 + t8308;
  t8162 = t1766*t8138;
  t8198 = t3106*t8196;
  t8213 = t133*t4340*t8196;
  t8238 = -1.*t2849*t4995*t8196;
  t8240 = t1766*t745*t1267;
  t8241 = -1.*t745*t1164*t1435;
  t8243 = t8240 + t8241;
  t8245 = 0.13205*t8243;
  t8247 = -1.*t3842*t2849*t8196;
  t8250 = -1.*t133*t4258*t8196;
  t8253 = t8247 + t8250;
  t8255 = -0.183*t8253;
  t8258 = t133*t3842*t8196;
  t8259 = -1.*t2849*t4258*t8196;
  t8261 = t8258 + t8259;
  t8262 = -0.1*t8261;
  t8354 = -1.*t1427*t745*t2849;
  t8355 = -1.*t133*t6624;
  t8357 = t8354 + t8355;
  t7242 = t3842*t7167;
  t8316 = -1.*t1164*t8306;
  t8317 = t8162 + t8316;
  t8383 = -1.*t133*t8317;
  t8384 = t4467 + t8383;
  t8388 = t133*t745*t853;
  t8389 = -1.*t2849*t8317;
  t8390 = t8388 + t8389;
  t8415 = t2849*t1277;
  t8418 = -1.*t133*t8243;
  t8421 = t8415 + t8418;
  t8423 = -1.*t133*t1277;
  t8425 = -1.*t2849*t8243;
  t8426 = t8423 + t8425;
  t7236 = -1.*t4258*t7074;
  t7246 = t7236 + t7242;
  t8367 = -1.*t4258*t7167;
  t8457 = -0.183*t3842;
  t8459 = -0.1*t4258;
  t8460 = t8457 + t8459;
  t8462 = 0.1*t3842;
  t8463 = t8462 + t4321;
  t8477 = t745*t2849*t853;
  t8478 = t133*t8317;
  t8479 = t8477 + t8478;
  t8393 = t3842*t8390;
  t8401 = -1.*t4258*t8390;
  t8496 = -1.*t2849*t1277;
  t8497 = t133*t8243;
  t8501 = t8496 + t8497;
  t8436 = t3842*t8426;
  t8446 = -1.*t4258*t8426;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t1263*t1544 + t2170*t2462 + 0.13205*(t1164*t1544 + t2532) + t3106*t3488 + t4340*t4779 + t4995*t5184 - 0.183*(-1.*t4258*t4779 + t3842*t5184) - 0.1*(t3842*t4779 + t4258*t5184) - 1.*t692*t745*t853;
  p_output1(10)=t1263*t5575 + t2170*t5718 + 0.13205*(t1164*t5575 + t1766*t5718) + t3106*t6624 + t4340*t7074 + t4995*t7167 - 0.1*(t3842*t7074 + t4258*t7167) - 0.183*t7246 + t1427*t692*t745;
  p_output1(11)=0;
  p_output1(12)=-1.*t1277*t1427*t692 + t1263*t1267*t1427*t745 + t1427*t1435*t2170*t745 + 0.13205*(t1164*t1267*t1427*t745 + t1427*t1435*t1766*t745) + t3106*t7537 + t4340*t7607 + t4995*t7692 - 0.183*(-1.*t4258*t7607 + t3842*t7692) - 0.1*(t3842*t7607 + t4258*t7692);
  p_output1(13)=t3106*t7862 + t4340*t7885 + t4995*t7913 - 0.183*(-1.*t4258*t7885 + t3842*t7913) - 0.1*(t3842*t7885 + t4258*t7913) - 1.*t1277*t692*t853 + t1263*t1267*t745*t853 + t1435*t2170*t745*t853 + 0.13205*(t1164*t1267*t745*t853 + t1435*t1766*t745*t853);
  p_output1(14)=-1.*t1263*t1267*t1277 + 0.13205*(-1.*t1164*t1267*t1277 - 1.*t1277*t1435*t1766) - 1.*t1277*t1435*t2170 - 1.*t692*t745 + t3106*t7997 + t4340*t8005 + t4995*t8009 - 0.183*(-1.*t4258*t8005 + t3842*t8009) - 0.1*(t3842*t8005 + t4258*t8009);
  p_output1(15)=t2170*t5575 + t1263*t8051 + 0.13205*(t6440 + t1164*t8051) + t3106*t8063 + t133*t4340*t8063 - 1.*t2849*t4995*t8063 - 0.183*(-1.*t2849*t3842*t8063 - 1.*t133*t4258*t8063) - 0.1*(t133*t3842*t8063 - 1.*t2849*t4258*t8063);
  p_output1(16)=t1263*t2462 + t2170*t8138 + t3106*t8146 + t133*t4340*t8146 - 1.*t2849*t4995*t8146 - 0.183*(-1.*t2849*t3842*t8146 - 1.*t133*t4258*t8146) - 0.1*(t133*t3842*t8146 - 1.*t2849*t4258*t8146) + 0.13205*(t1164*t2462 + t8162);
  p_output1(17)=-1.*t1263*t1435*t745 + t1267*t2170*t745 + t8198 + t8213 + t8238 + t8245 + t8255 + t8262;
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
  p_output1(45)=-0.047*t1766*t5575 + 0.047*t1164*t5718 + 0.13205*t6624 + t3106*t8269 + t133*t4340*t8269 - 1.*t2849*t4995*t8269 - 0.183*(-1.*t2849*t3842*t8269 - 1.*t133*t4258*t8269) - 0.1*(t133*t3842*t8269 - 1.*t2849*t4258*t8269);
  p_output1(46)=-0.047*t1766*t8138 + 0.047*t1164*t8306 + t3106*t8309 + t133*t4340*t8309 - 1.*t2849*t4995*t8309 - 0.183*(-1.*t2849*t3842*t8309 - 1.*t133*t4258*t8309) - 0.1*(t133*t3842*t8309 - 1.*t2849*t4258*t8309) + 0.13205*t8317;
  p_output1(47)=0.047*t1164*t1435*t745 - 0.047*t1267*t1766*t745 + t8198 + t8213 + t8238 + t8245 + t8255 + t8262;
  p_output1(48)=-0.183*t133*t6624 + t4340*t7167 - 0.183*t1427*t2849*t745 + t4995*t8357 - 0.1*(t7242 + t4258*t8357) - 0.183*(t3842*t8357 + t8367);
  p_output1(49)=-0.183*t133*t8317 + t4995*t8384 + t4340*t8390 - 0.1*(t4258*t8384 + t8393) - 0.183*(t3842*t8384 + t8401) - 0.183*t2849*t745*t853;
  p_output1(50)=0.183*t1277*t2849 - 0.183*t133*t8243 + t4995*t8421 + t4340*t8426 - 0.1*(t4258*t8421 + t8436) - 0.183*(t3842*t8421 + t8446);
  p_output1(51)=-0.1*t7246 - 0.183*(-1.*t3842*t7074 + t8367) + t7074*t8460 + t7167*t8463;
  p_output1(52)=t8390*t8463 + t8460*t8479 - 0.183*(t8401 - 1.*t3842*t8479) - 0.1*(t8393 - 1.*t4258*t8479);
  p_output1(53)=t8426*t8463 + t8460*t8501 - 0.183*(t8446 - 1.*t3842*t8501) - 0.1*(t8436 - 1.*t4258*t8501);
}


       
Eigen::Matrix<double,3,18> Jp_RL_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void Jp_RL_calf_joint(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



