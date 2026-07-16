/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:13:36 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_FR_calf_joint.h"

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
  double t597;
  double t1472;
  double t1835;
  double t1226;
  double t1858;
  double t948;
  double t1503;
  double t2172;
  double t3060;
  double t3227;
  double t3331;
  double t3663;
  double t3688;
  double t156;
  double t348;
  double t4350;
  double t4625;
  double t4750;
  double t5509;
  double t8153;
  double t8154;
  double t8162;
  double t8174;
  double t7465;
  double t8078;
  double t8141;
  double t8184;
  double t8189;
  double t8191;
  double t418;
  double t488;
  double t539;
  double t554;
  double t1006;
  double t1018;
  double t1090;
  double t1154;
  double t3729;
  double t3742;
  double t8226;
  double t8231;
  double t8235;
  double t8240;
  double t8242;
  double t8244;
  double t5582;
  double t5912;
  double t8251;
  double t8252;
  double t8253;
  double t8172;
  double t8175;
  double t8181;
  double t8192;
  double t8200;
  double t8204;
  double t8257;
  double t8265;
  double t8268;
  double t8271;
  double t8272;
  double t8274;
  double t8299;
  double t8300;
  double t8301;
  double t8303;
  double t8304;
  double t8305;
  double t8307;
  double t8308;
  double t8309;
  double t8334;
  double t8335;
  double t8336;
  double t8338;
  double t8339;
  double t8340;
  double t8342;
  double t8343;
  double t8345;
  double t8370;
  double t8371;
  double t8372;
  double t8376;
  double t8377;
  double t8378;
  double t8380;
  double t8381;
  double t8382;
  double t8396;
  double t8399;
  double t8400;
  double t8405;
  double t8406;
  double t8407;
  double t8434;
  double t8437;
  double t8438;
  double t3889;
  double t8445;
  double t8446;
  double t8470;
  double t8471;
  double t8472;
  double t8492;
  double t8493;
  double t8441;
  double t8512;
  double t8516;
  double t8518;
  double t8524;
  double t8525;
  double t8466;
  double t8467;
  double t8468;
  double t8469;
  double t8473;
  double t8474;
  double t8475;
  double t8478;
  double t8479;
  double t8480;
  double t8481;
  double t8482;
  double t8483;
  double t8484;
  double t8486;
  double t8276;
  double t8544;
  double t8545;
  double t8546;
  double t8520;
  double t8521;
  double t8564;
  double t8565;
  double t8566;
  double t8561;
  double t8562;
  double t8583;
  double t8584;
  double t8585;
  double t8579;
  double t8580;
  double t8581;
  double t8277;
  double t8278;
  double t8555;
  double t8596;
  double t8597;
  double t8598;
  double t8600;
  double t8601;
  double t8568;
  double t8608;
  double t8609;
  double t8610;
  double t8573;
  double t8587;
  double t8620;
  double t8621;
  double t8622;
  double t8592;
  t597 = Sin(var1[3]);
  t1472 = Cos(var1[5]);
  t1835 = Sin(var1[4]);
  t1226 = Cos(var1[3]);
  t1858 = Sin(var1[5]);
  t948 = Cos(var1[6]);
  t1503 = -1.*t1226*t1472;
  t2172 = -1.*t597*t1835*t1858;
  t3060 = t1503 + t2172;
  t3227 = -1.*t1472*t597*t1835;
  t3331 = t1226*t1858;
  t3663 = t3227 + t3331;
  t3688 = Sin(var1[6]);
  t156 = Cos(var1[4]);
  t348 = Cos(var1[7]);
  t4350 = t948*t3663;
  t4625 = -1.*t3060*t3688;
  t4750 = t4350 + t4625;
  t5509 = Sin(var1[7]);
  t8153 = Cos(var1[8]);
  t8154 = -1.*t8153;
  t8162 = 1. + t8154;
  t8174 = Sin(var1[8]);
  t7465 = -1.*t156*t348*t597;
  t8078 = -1.*t4750*t5509;
  t8141 = t7465 + t8078;
  t8184 = t348*t4750;
  t8189 = -1.*t156*t597*t5509;
  t8191 = t8184 + t8189;
  t418 = -1.*t348;
  t488 = 1. + t418;
  t539 = 0.183*t488;
  t554 = 0. + t539;
  t1006 = -1.*t948;
  t1018 = 1. + t1006;
  t1090 = -0.047*t1018;
  t1154 = 0. + t1090;
  t3729 = 0.047*t3688;
  t3742 = 0. + t3729;
  t8226 = -1.*t1472*t597;
  t8231 = t1226*t1835*t1858;
  t8235 = t8226 + t8231;
  t8240 = t1226*t1472*t1835;
  t8242 = t597*t1858;
  t8244 = t8240 + t8242;
  t5582 = 0.183*t5509;
  t5912 = 0. + t5582;
  t8251 = t948*t8244;
  t8252 = -1.*t8235*t3688;
  t8253 = t8251 + t8252;
  t8172 = 0.183*t8162;
  t8175 = 0.1*t8174;
  t8181 = 0. + t8172 + t8175;
  t8192 = -0.1*t8162;
  t8200 = 0.183*t8174;
  t8204 = 0. + t8192 + t8200;
  t8257 = t1226*t156*t348;
  t8265 = -1.*t8253*t5509;
  t8268 = t8257 + t8265;
  t8271 = t348*t8253;
  t8272 = t1226*t156*t5509;
  t8274 = t8271 + t8272;
  t8299 = t1226*t156*t1472*t948;
  t8300 = -1.*t1226*t156*t1858*t3688;
  t8301 = t8299 + t8300;
  t8303 = -1.*t1226*t348*t1835;
  t8304 = -1.*t8301*t5509;
  t8305 = t8303 + t8304;
  t8307 = t348*t8301;
  t8308 = -1.*t1226*t1835*t5509;
  t8309 = t8307 + t8308;
  t8334 = t156*t1472*t948*t597;
  t8335 = -1.*t156*t597*t1858*t3688;
  t8336 = t8334 + t8335;
  t8338 = -1.*t348*t597*t1835;
  t8339 = -1.*t8336*t5509;
  t8340 = t8338 + t8339;
  t8342 = t348*t8336;
  t8343 = -1.*t597*t1835*t5509;
  t8345 = t8342 + t8343;
  t8370 = -1.*t1472*t948*t1835;
  t8371 = t1835*t1858*t3688;
  t8372 = t8370 + t8371;
  t8376 = -1.*t156*t348;
  t8377 = -1.*t8372*t5509;
  t8378 = t8376 + t8377;
  t8380 = t348*t8372;
  t8381 = -1.*t156*t5509;
  t8382 = t8380 + t8381;
  t8396 = t1472*t597;
  t8399 = -1.*t1226*t1835*t1858;
  t8400 = t8396 + t8399;
  t8405 = t948*t8400;
  t8406 = -1.*t8244*t3688;
  t8407 = t8405 + t8406;
  t8434 = t1472*t597*t1835;
  t8437 = -1.*t1226*t1858;
  t8438 = t8434 + t8437;
  t3889 = t948*t3060;
  t8445 = -1.*t8438*t3688;
  t8446 = t3889 + t8445;
  t8470 = -1.*t156*t948*t1858;
  t8471 = -1.*t156*t1472*t3688;
  t8472 = t8470 + t8471;
  t8492 = -1.*t948*t8235;
  t8493 = t8492 + t8406;
  t8441 = t948*t8438;
  t8512 = t1226*t1472;
  t8516 = t597*t1835*t1858;
  t8518 = t8512 + t8516;
  t8524 = -1.*t948*t8518;
  t8525 = t8524 + t8445;
  t8466 = t156*t1472*t948;
  t8467 = -1.*t156*t1858*t3688;
  t8468 = t8466 + t8467;
  t8469 = -0.08953*t8468;
  t8473 = t8472*t5912;
  t8474 = -1.*t8472*t5509*t8181;
  t8475 = t348*t8472*t8204;
  t8478 = -1.*t8153*t8472*t5509;
  t8479 = -1.*t348*t8472*t8174;
  t8480 = t8478 + t8479;
  t8481 = 0.183*t8480;
  t8482 = t348*t8153*t8472;
  t8483 = -1.*t8472*t5509*t8174;
  t8484 = t8482 + t8483;
  t8486 = -0.1*t8484;
  t8276 = t8153*t8268;
  t8544 = -1.*t348*t8253;
  t8545 = -1.*t1226*t156*t5509;
  t8546 = t8544 + t8545;
  t8520 = -1.*t8518*t3688;
  t8521 = t8441 + t8520;
  t8564 = t156*t348*t597;
  t8565 = -1.*t8521*t5509;
  t8566 = t8564 + t8565;
  t8561 = -1.*t348*t8521;
  t8562 = t8561 + t8189;
  t8583 = -1.*t348*t1835;
  t8584 = -1.*t8468*t5509;
  t8585 = t8583 + t8584;
  t8579 = -1.*t348*t8468;
  t8580 = t1835*t5509;
  t8581 = t8579 + t8580;
  t8277 = -1.*t8274*t8174;
  t8278 = t8276 + t8277;
  t8555 = -1.*t8268*t8174;
  t8596 = 0.183*t8153;
  t8597 = -0.1*t8174;
  t8598 = t8596 + t8597;
  t8600 = 0.1*t8153;
  t8601 = t8600 + t8200;
  t8568 = t8153*t8566;
  t8608 = t348*t8521;
  t8609 = t156*t597*t5509;
  t8610 = t8608 + t8609;
  t8573 = -1.*t8566*t8174;
  t8587 = t8153*t8585;
  t8620 = t348*t8468;
  t8621 = -1.*t1835*t5509;
  t8622 = t8620 + t8621;
  t8592 = -1.*t8585*t8174;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t1154*t3060 + t3663*t3742 - 0.08953*(t3663*t3688 + t3889) + t4750*t5912 - 1.*t156*t554*t597 + t8141*t8181 - 0.1*(t8141*t8174 + t8153*t8191) + 0.183*(t8141*t8153 - 1.*t8174*t8191) + t8191*t8204;
  p_output1(10)=t1226*t156*t554 + t1154*t8235 + t3742*t8244 + t5912*t8253 + t8181*t8268 + t8204*t8274 - 0.1*(t8174*t8268 + t8153*t8274) + 0.183*t8278 - 0.08953*(t3688*t8244 + t8235*t948);
  p_output1(11)=0;
  p_output1(12)=t1154*t1226*t156*t1858 + t1226*t1472*t156*t3742 - 1.*t1226*t1835*t554 + t5912*t8301 + t8181*t8305 + t8204*t8309 - 0.1*(t8174*t8305 + t8153*t8309) + 0.183*(t8153*t8305 - 1.*t8174*t8309) - 0.08953*(t1226*t1472*t156*t3688 + t1226*t156*t1858*t948);
  p_output1(13)=t1154*t156*t1858*t597 + t1472*t156*t3742*t597 - 1.*t1835*t554*t597 + t5912*t8336 + t8181*t8340 + t8204*t8345 - 0.1*(t8174*t8340 + t8153*t8345) + 0.183*(t8153*t8340 - 1.*t8174*t8345) - 0.08953*(t1472*t156*t3688*t597 + t156*t1858*t597*t948);
  p_output1(14)=-1.*t1154*t1835*t1858 - 1.*t1472*t1835*t3742 - 1.*t156*t554 + t5912*t8372 + t8181*t8378 + t8204*t8382 - 0.1*(t8174*t8378 + t8153*t8382) + 0.183*(t8153*t8378 - 1.*t8174*t8382) - 0.08953*(-1.*t1472*t1835*t3688 - 1.*t1835*t1858*t948);
  p_output1(15)=t1154*t8244 + t3742*t8400 - 0.08953*(t8251 + t3688*t8400) + t5912*t8407 - 1.*t5509*t8181*t8407 + t348*t8204*t8407 + 0.183*(-1.*t5509*t8153*t8407 - 1.*t348*t8174*t8407) - 0.1*(t348*t8153*t8407 - 1.*t5509*t8174*t8407);
  p_output1(16)=t3060*t3742 + t1154*t8438 - 0.08953*(t3060*t3688 + t8441) + t5912*t8446 - 1.*t5509*t8181*t8446 + t348*t8204*t8446 + 0.183*(-1.*t5509*t8153*t8446 - 1.*t348*t8174*t8446) - 0.1*(t348*t8153*t8446 - 1.*t5509*t8174*t8446);
  p_output1(17)=t1154*t1472*t156 - 1.*t156*t1858*t3742 + t8469 + t8473 + t8474 + t8475 + t8481 + t8486;
  p_output1(18)=-0.047*t3688*t8235 - 0.08953*t8253 + t5912*t8493 - 1.*t5509*t8181*t8493 + t348*t8204*t8493 + 0.183*(-1.*t5509*t8153*t8493 - 1.*t348*t8174*t8493) - 0.1*(t348*t8153*t8493 - 1.*t5509*t8174*t8493) + 0.047*t8244*t948;
  p_output1(19)=-0.047*t3688*t8518 - 0.08953*t8521 + t5912*t8525 - 1.*t5509*t8181*t8525 + t348*t8204*t8525 + 0.183*(-1.*t5509*t8153*t8525 - 1.*t348*t8174*t8525) - 0.1*(t348*t8153*t8525 - 1.*t5509*t8174*t8525) + 0.047*t8438*t948;
  p_output1(20)=-0.047*t156*t1858*t3688 + t8469 + t8473 + t8474 + t8475 + t8481 + t8486 + 0.047*t1472*t156*t948;
  p_output1(21)=0.183*t1226*t156*t5509 + 0.183*t348*t8253 + t8204*t8268 + t8181*t8546 - 0.1*(t8276 + t8174*t8546) + 0.183*(t8153*t8546 + t8555);
  p_output1(22)=0.183*t156*t5509*t597 + 0.183*t348*t8521 + t8181*t8562 + t8204*t8566 - 0.1*(t8174*t8562 + t8568) + 0.183*(t8153*t8562 + t8573);
  p_output1(23)=-0.183*t1835*t5509 + 0.183*t348*t8468 + t8181*t8581 + t8204*t8585 - 0.1*(t8174*t8581 + t8587) + 0.183*(t8153*t8581 + t8592);
  p_output1(24)=-0.1*t8278 + 0.183*(-1.*t8153*t8274 + t8555) + t8274*t8598 + t8268*t8601;
  p_output1(25)=t8566*t8601 + t8598*t8610 + 0.183*(t8573 - 1.*t8153*t8610) - 0.1*(t8568 - 1.*t8174*t8610);
  p_output1(26)=t8585*t8601 + t8598*t8622 + 0.183*(t8592 - 1.*t8153*t8622) - 0.1*(t8587 - 1.*t8174*t8622);
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


       
Eigen::Matrix<double,3,18> Jp_FR_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void Jp_FR_calf_joint(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



