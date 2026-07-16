/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:11:17 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_FRfoot.h"

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
  double t670;
  double t1243;
  double t1269;
  double t1201;
  double t1360;
  double t779;
  double t1268;
  double t1533;
  double t1573;
  double t1620;
  double t1680;
  double t1686;
  double t1765;
  double t187;
  double t375;
  double t2207;
  double t2373;
  double t2412;
  double t2437;
  double t2900;
  double t3164;
  double t3255;
  double t4036;
  double t2697;
  double t2769;
  double t2810;
  double t4225;
  double t4308;
  double t4337;
  double t414;
  double t451;
  double t458;
  double t463;
  double t854;
  double t1042;
  double t1058;
  double t1085;
  double t1864;
  double t1959;
  double t5257;
  double t5260;
  double t5288;
  double t5390;
  double t5430;
  double t5570;
  double t2439;
  double t2486;
  double t5909;
  double t5914;
  double t6009;
  double t3270;
  double t4134;
  double t4145;
  double t4538;
  double t4550;
  double t4551;
  double t6339;
  double t6367;
  double t6428;
  double t6519;
  double t6611;
  double t6945;
  double t7708;
  double t7729;
  double t7751;
  double t7771;
  double t7778;
  double t7779;
  double t7786;
  double t7792;
  double t7802;
  double t8018;
  double t8019;
  double t8037;
  double t8047;
  double t8070;
  double t8071;
  double t8099;
  double t8104;
  double t8111;
  double t8261;
  double t8263;
  double t8265;
  double t8271;
  double t8272;
  double t8273;
  double t8278;
  double t8281;
  double t8283;
  double t8329;
  double t8330;
  double t8331;
  double t8342;
  double t8344;
  double t8347;
  double t8395;
  double t8400;
  double t8402;
  double t2018;
  double t8433;
  double t8434;
  double t8485;
  double t8487;
  double t8488;
  double t8556;
  double t8562;
  double t8405;
  double t8593;
  double t8594;
  double t8595;
  double t8603;
  double t8607;
  double t8473;
  double t8478;
  double t8480;
  double t8482;
  double t8491;
  double t8492;
  double t8495;
  double t8497;
  double t8502;
  double t8508;
  double t8510;
  double t8511;
  double t8513;
  double t8515;
  double t8517;
  double t6962;
  double t8649;
  double t8651;
  double t8653;
  double t8598;
  double t8599;
  double t8690;
  double t8691;
  double t8692;
  double t8679;
  double t8684;
  double t8783;
  double t8784;
  double t8787;
  double t8766;
  double t8769;
  double t8778;
  double t6965;
  double t7023;
  double t8667;
  double t8815;
  double t8816;
  double t8820;
  double t8824;
  double t8831;
  double t8700;
  double t8843;
  double t8847;
  double t8849;
  double t8721;
  double t8790;
  double t8860;
  double t8861;
  double t8863;
  double t8800;
  t670 = Sin(var1[3]);
  t1243 = Cos(var1[5]);
  t1269 = Sin(var1[4]);
  t1201 = Cos(var1[3]);
  t1360 = Sin(var1[5]);
  t779 = Cos(var1[6]);
  t1268 = -1.*t1201*t1243;
  t1533 = -1.*t670*t1269*t1360;
  t1573 = t1268 + t1533;
  t1620 = -1.*t1243*t670*t1269;
  t1680 = t1201*t1360;
  t1686 = t1620 + t1680;
  t1765 = Sin(var1[6]);
  t187 = Cos(var1[4]);
  t375 = Cos(var1[7]);
  t2207 = t779*t1686;
  t2373 = -1.*t1573*t1765;
  t2412 = t2207 + t2373;
  t2437 = Sin(var1[7]);
  t2900 = Cos(var1[8]);
  t3164 = -1.*t2900;
  t3255 = 1. + t3164;
  t4036 = Sin(var1[8]);
  t2697 = -1.*t187*t375*t670;
  t2769 = -1.*t2412*t2437;
  t2810 = t2697 + t2769;
  t4225 = t375*t2412;
  t4308 = -1.*t187*t670*t2437;
  t4337 = t4225 + t4308;
  t414 = -1.*t375;
  t451 = 1. + t414;
  t458 = 0.183*t451;
  t463 = 0. + t458;
  t854 = -1.*t779;
  t1042 = 1. + t854;
  t1058 = -0.047*t1042;
  t1085 = 0. + t1058;
  t1864 = 0.047*t1765;
  t1959 = 0. + t1864;
  t5257 = -1.*t1243*t670;
  t5260 = t1201*t1269*t1360;
  t5288 = t5257 + t5260;
  t5390 = t1201*t1243*t1269;
  t5430 = t670*t1360;
  t5570 = t5390 + t5430;
  t2439 = 0.183*t2437;
  t2486 = 0. + t2439;
  t5909 = t779*t5570;
  t5914 = -1.*t5288*t1765;
  t6009 = t5909 + t5914;
  t3270 = 0.183*t3255;
  t4134 = 0.1*t4036;
  t4145 = 0. + t3270 + t4134;
  t4538 = -0.1*t3255;
  t4550 = 0.183*t4036;
  t4551 = 0. + t4538 + t4550;
  t6339 = t1201*t187*t375;
  t6367 = -1.*t6009*t2437;
  t6428 = t6339 + t6367;
  t6519 = t375*t6009;
  t6611 = t1201*t187*t2437;
  t6945 = t6519 + t6611;
  t7708 = t1201*t187*t1243*t779;
  t7729 = -1.*t1201*t187*t1360*t1765;
  t7751 = t7708 + t7729;
  t7771 = -1.*t1201*t375*t1269;
  t7778 = -1.*t7751*t2437;
  t7779 = t7771 + t7778;
  t7786 = t375*t7751;
  t7792 = -1.*t1201*t1269*t2437;
  t7802 = t7786 + t7792;
  t8018 = t187*t1243*t779*t670;
  t8019 = -1.*t187*t670*t1360*t1765;
  t8037 = t8018 + t8019;
  t8047 = -1.*t375*t670*t1269;
  t8070 = -1.*t8037*t2437;
  t8071 = t8047 + t8070;
  t8099 = t375*t8037;
  t8104 = -1.*t670*t1269*t2437;
  t8111 = t8099 + t8104;
  t8261 = -1.*t1243*t779*t1269;
  t8263 = t1269*t1360*t1765;
  t8265 = t8261 + t8263;
  t8271 = -1.*t187*t375;
  t8272 = -1.*t8265*t2437;
  t8273 = t8271 + t8272;
  t8278 = t375*t8265;
  t8281 = -1.*t187*t2437;
  t8283 = t8278 + t8281;
  t8329 = t1243*t670;
  t8330 = -1.*t1201*t1269*t1360;
  t8331 = t8329 + t8330;
  t8342 = t779*t8331;
  t8344 = -1.*t5570*t1765;
  t8347 = t8342 + t8344;
  t8395 = t1243*t670*t1269;
  t8400 = -1.*t1201*t1360;
  t8402 = t8395 + t8400;
  t2018 = t779*t1573;
  t8433 = -1.*t8402*t1765;
  t8434 = t2018 + t8433;
  t8485 = -1.*t187*t779*t1360;
  t8487 = -1.*t187*t1243*t1765;
  t8488 = t8485 + t8487;
  t8556 = -1.*t779*t5288;
  t8562 = t8556 + t8344;
  t8405 = t779*t8402;
  t8593 = t1201*t1243;
  t8594 = t670*t1269*t1360;
  t8595 = t8593 + t8594;
  t8603 = -1.*t779*t8595;
  t8607 = t8603 + t8433;
  t8473 = t187*t1243*t779;
  t8478 = -1.*t187*t1360*t1765;
  t8480 = t8473 + t8478;
  t8482 = -0.13205*t8480;
  t8491 = t8488*t2486;
  t8492 = -1.*t8488*t2437*t4145;
  t8495 = t375*t8488*t4551;
  t8497 = -1.*t2900*t8488*t2437;
  t8502 = -1.*t375*t8488*t4036;
  t8508 = t8497 + t8502;
  t8510 = 0.183*t8508;
  t8511 = t375*t2900*t8488;
  t8513 = -1.*t8488*t2437*t4036;
  t8515 = t8511 + t8513;
  t8517 = -0.2*t8515;
  t6962 = t2900*t6428;
  t8649 = -1.*t375*t6009;
  t8651 = -1.*t1201*t187*t2437;
  t8653 = t8649 + t8651;
  t8598 = -1.*t8595*t1765;
  t8599 = t8405 + t8598;
  t8690 = t187*t375*t670;
  t8691 = -1.*t8599*t2437;
  t8692 = t8690 + t8691;
  t8679 = -1.*t375*t8599;
  t8684 = t8679 + t4308;
  t8783 = -1.*t375*t1269;
  t8784 = -1.*t8480*t2437;
  t8787 = t8783 + t8784;
  t8766 = -1.*t375*t8480;
  t8769 = t1269*t2437;
  t8778 = t8766 + t8769;
  t6965 = -1.*t6945*t4036;
  t7023 = t6962 + t6965;
  t8667 = -1.*t6428*t4036;
  t8815 = 0.183*t2900;
  t8816 = -0.1*t4036;
  t8820 = t8815 + t8816;
  t8824 = 0.1*t2900;
  t8831 = t8824 + t4550;
  t8700 = t2900*t8692;
  t8843 = t375*t8599;
  t8847 = t187*t670*t2437;
  t8849 = t8843 + t8847;
  t8721 = -1.*t8692*t4036;
  t8790 = t2900*t8787;
  t8860 = t375*t8480;
  t8861 = -1.*t1269*t2437;
  t8863 = t8860 + t8861;
  t8800 = -1.*t8787*t4036;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t1085*t1573 + t1686*t1959 - 0.13205*(t1686*t1765 + t2018) + t2412*t2486 + t2810*t4145 - 0.2*(t2810*t4036 + t2900*t4337) + 0.183*(t2810*t2900 - 1.*t4036*t4337) + t4337*t4551 - 1.*t187*t463*t670;
  p_output1(10)=t1201*t187*t463 + t1085*t5288 + t1959*t5570 + t2486*t6009 + t4145*t6428 + t4551*t6945 - 0.2*(t4036*t6428 + t2900*t6945) + 0.183*t7023 - 0.13205*(t1765*t5570 + t5288*t779);
  p_output1(11)=0;
  p_output1(12)=t1085*t1201*t1360*t187 + t1201*t1243*t187*t1959 - 1.*t1201*t1269*t463 + t2486*t7751 + t4145*t7779 - 0.13205*(t1201*t1243*t1765*t187 + t1201*t1360*t187*t779) + t4551*t7802 - 0.2*(t4036*t7779 + t2900*t7802) + 0.183*(t2900*t7779 - 1.*t4036*t7802);
  p_output1(13)=t1085*t1360*t187*t670 + t1243*t187*t1959*t670 - 1.*t1269*t463*t670 - 0.13205*(t1243*t1765*t187*t670 + t1360*t187*t670*t779) + t2486*t8037 + t4145*t8071 + t4551*t8111 - 0.2*(t4036*t8071 + t2900*t8111) + 0.183*(t2900*t8071 - 1.*t4036*t8111);
  p_output1(14)=-1.*t1085*t1269*t1360 - 1.*t1243*t1269*t1959 - 1.*t187*t463 - 0.13205*(-1.*t1243*t1269*t1765 - 1.*t1269*t1360*t779) + t2486*t8265 + t4145*t8273 + t4551*t8283 - 0.2*(t4036*t8273 + t2900*t8283) + 0.183*(t2900*t8273 - 1.*t4036*t8283);
  p_output1(15)=t1085*t5570 + t1959*t8331 - 0.13205*(t5909 + t1765*t8331) + t2486*t8347 - 1.*t2437*t4145*t8347 + t375*t4551*t8347 - 0.2*(t2900*t375*t8347 - 1.*t2437*t4036*t8347) + 0.183*(-1.*t2437*t2900*t8347 - 1.*t375*t4036*t8347);
  p_output1(16)=t1573*t1959 + t1085*t8402 - 0.13205*(t1573*t1765 + t8405) + t2486*t8434 - 1.*t2437*t4145*t8434 + t375*t4551*t8434 - 0.2*(t2900*t375*t8434 - 1.*t2437*t4036*t8434) + 0.183*(-1.*t2437*t2900*t8434 - 1.*t375*t4036*t8434);
  p_output1(17)=t1085*t1243*t187 - 1.*t1360*t187*t1959 + t8482 + t8491 + t8492 + t8495 + t8510 + t8517;
  p_output1(18)=-0.047*t1765*t5288 - 0.13205*t6009 + 0.047*t5570*t779 + t2486*t8562 - 1.*t2437*t4145*t8562 + t375*t4551*t8562 - 0.2*(t2900*t375*t8562 - 1.*t2437*t4036*t8562) + 0.183*(-1.*t2437*t2900*t8562 - 1.*t375*t4036*t8562);
  p_output1(19)=0.047*t779*t8402 - 0.047*t1765*t8595 - 0.13205*t8599 + t2486*t8607 - 1.*t2437*t4145*t8607 + t375*t4551*t8607 - 0.2*(t2900*t375*t8607 - 1.*t2437*t4036*t8607) + 0.183*(-1.*t2437*t2900*t8607 - 1.*t375*t4036*t8607);
  p_output1(20)=-0.047*t1360*t1765*t187 + 0.047*t1243*t187*t779 + t8482 + t8491 + t8492 + t8495 + t8510 + t8517;
  p_output1(21)=0.183*t1201*t187*t2437 + 0.183*t375*t6009 + t4551*t6428 + t4145*t8653 - 0.2*(t6962 + t4036*t8653) + 0.183*(t2900*t8653 + t8667);
  p_output1(22)=0.183*t187*t2437*t670 + 0.183*t375*t8599 + t4145*t8684 + t4551*t8692 - 0.2*(t4036*t8684 + t8700) + 0.183*(t2900*t8684 + t8721);
  p_output1(23)=-0.183*t1269*t2437 + 0.183*t375*t8480 + t4145*t8778 + t4551*t8787 - 0.2*(t4036*t8778 + t8790) + 0.183*(t2900*t8778 + t8800);
  p_output1(24)=-0.2*t7023 + 0.183*(-1.*t2900*t6945 + t8667) + t6945*t8820 + t6428*t8831;
  p_output1(25)=t8692*t8831 + t8820*t8849 + 0.183*(t8721 - 1.*t2900*t8849) - 0.2*(t8700 - 1.*t4036*t8849);
  p_output1(26)=t8787*t8831 + t8820*t8863 + 0.183*(t8800 - 1.*t2900*t8863) - 0.2*(t8790 - 1.*t4036*t8863);
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


       
Eigen::Matrix<double,3,18> Jp_FRfoot(const Eigen::Matrix<double,18,1> &var1)
//void Jp_FRfoot(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



