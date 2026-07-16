/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:26:40 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_FL_calf_joint.h"

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
  double t430;
  double t982;
  double t757;
  double t801;
  double t1022;
  double t564;
  double t928;
  double t1053;
  double t1107;
  double t1478;
  double t1914;
  double t1938;
  double t1982;
  double t389;
  double t2159;
  double t51;
  double t2308;
  double t2759;
  double t2810;
  double t2918;
  double t2943;
  double t2945;
  double t3006;
  double t3125;
  double t3142;
  double t3144;
  double t3266;
  double t3316;
  double t3335;
  double t108;
  double t151;
  double t238;
  double t261;
  double t680;
  double t692;
  double t1526;
  double t1712;
  double t1789;
  double t1871;
  double t3978;
  double t3981;
  double t4094;
  double t4113;
  double t4138;
  double t4186;
  double t2205;
  double t2301;
  double t3003;
  double t3029;
  double t3032;
  double t4380;
  double t4400;
  double t4410;
  double t3222;
  double t3244;
  double t3249;
  double t4431;
  double t4436;
  double t4499;
  double t4558;
  double t4566;
  double t4587;
  double t4896;
  double t4926;
  double t5160;
  double t5209;
  double t5230;
  double t5248;
  double t5317;
  double t5375;
  double t5497;
  double t5972;
  double t6066;
  double t6126;
  double t6301;
  double t6309;
  double t6341;
  double t6454;
  double t6482;
  double t6517;
  double t7498;
  double t7508;
  double t7547;
  double t7645;
  double t7651;
  double t7678;
  double t7698;
  double t7701;
  double t7703;
  double t7918;
  double t7935;
  double t7956;
  double t7980;
  double t7984;
  double t7994;
  double t8221;
  double t8233;
  double t8246;
  double t2082;
  double t8265;
  double t8267;
  double t8730;
  double t8737;
  double t8742;
  double t8892;
  double t8901;
  double t9042;
  double t9044;
  double t9052;
  double t9063;
  double t9081;
  double t8332;
  double t8754;
  double t8755;
  double t8756;
  double t8759;
  double t8761;
  double t8764;
  double t8787;
  double t8813;
  double t8824;
  double t8833;
  double t8839;
  double t8840;
  double t8842;
  double t8866;
  double t8870;
  double t9215;
  double t9227;
  double t9232;
  double t4691;
  double t9120;
  double t9121;
  double t9296;
  double t9297;
  double t9319;
  double t9321;
  double t9342;
  double t9380;
  double t9385;
  double t9391;
  double t9413;
  double t9418;
  double t9452;
  double t4656;
  double t4721;
  double t9272;
  double t9550;
  double t9557;
  double t9558;
  double t9570;
  double t9578;
  double t9606;
  double t9644;
  double t9647;
  double t9347;
  double t9358;
  double t9687;
  double t9695;
  double t9697;
  double t9491;
  double t9518;
  t430 = Sin(var1[3]);
  t982 = Cos(var1[3]);
  t757 = Cos(var1[5]);
  t801 = Sin(var1[4]);
  t1022 = Sin(var1[5]);
  t564 = Sin(var1[9]);
  t928 = -1.*t757*t430*t801;
  t1053 = t982*t1022;
  t1107 = t928 + t1053;
  t1478 = Cos(var1[9]);
  t1914 = -1.*t982*t757;
  t1938 = -1.*t430*t801*t1022;
  t1982 = t1914 + t1938;
  t389 = Cos(var1[4]);
  t2159 = Sin(var1[10]);
  t51 = Cos(var1[10]);
  t2308 = t1478*t1107;
  t2759 = -1.*t564*t1982;
  t2810 = t2308 + t2759;
  t2918 = Cos(var1[11]);
  t2943 = -1.*t2918;
  t2945 = 1. + t2943;
  t3006 = Sin(var1[11]);
  t3125 = -1.*t389*t2159*t430;
  t3142 = t51*t2810;
  t3144 = t3125 + t3142;
  t3266 = -1.*t51*t389*t430;
  t3316 = -1.*t2159*t2810;
  t3335 = t3266 + t3316;
  t108 = -1.*t51;
  t151 = 1. + t108;
  t238 = 0.183*t151;
  t261 = 0. + t238;
  t680 = -0.047*t564;
  t692 = 0. + t680;
  t1526 = -1.*t1478;
  t1712 = 1. + t1526;
  t1789 = 0.047*t1712;
  t1871 = 0. + t1789;
  t3978 = t982*t757*t801;
  t3981 = t430*t1022;
  t4094 = t3978 + t3981;
  t4113 = -1.*t757*t430;
  t4138 = t982*t801*t1022;
  t4186 = t4113 + t4138;
  t2205 = 0.183*t2159;
  t2301 = 0. + t2205;
  t3003 = -0.3*t2945;
  t3029 = 0.183*t3006;
  t3032 = 0. + t3003 + t3029;
  t4380 = t1478*t4094;
  t4400 = -1.*t564*t4186;
  t4410 = t4380 + t4400;
  t3222 = 0.183*t2945;
  t3244 = 0.3*t3006;
  t3249 = 0. + t3222 + t3244;
  t4431 = t982*t389*t2159;
  t4436 = t51*t4410;
  t4499 = t4431 + t4436;
  t4558 = t51*t982*t389;
  t4566 = -1.*t2159*t4410;
  t4587 = t4558 + t4566;
  t4896 = t1478*t982*t389*t757;
  t4926 = -1.*t982*t389*t564*t1022;
  t5160 = t4896 + t4926;
  t5209 = -1.*t982*t2159*t801;
  t5230 = t51*t5160;
  t5248 = t5209 + t5230;
  t5317 = -1.*t51*t982*t801;
  t5375 = -1.*t2159*t5160;
  t5497 = t5317 + t5375;
  t5972 = t1478*t389*t757*t430;
  t6066 = -1.*t389*t564*t430*t1022;
  t6126 = t5972 + t6066;
  t6301 = -1.*t2159*t430*t801;
  t6309 = t51*t6126;
  t6341 = t6301 + t6309;
  t6454 = -1.*t51*t430*t801;
  t6482 = -1.*t2159*t6126;
  t6517 = t6454 + t6482;
  t7498 = -1.*t1478*t757*t801;
  t7508 = t564*t801*t1022;
  t7547 = t7498 + t7508;
  t7645 = -1.*t389*t2159;
  t7651 = t51*t7547;
  t7678 = t7645 + t7651;
  t7698 = -1.*t51*t389;
  t7701 = -1.*t2159*t7547;
  t7703 = t7698 + t7701;
  t7918 = t757*t430;
  t7935 = -1.*t982*t801*t1022;
  t7956 = t7918 + t7935;
  t7980 = -1.*t564*t4094;
  t7984 = t1478*t7956;
  t7994 = t7980 + t7984;
  t8221 = t757*t430*t801;
  t8233 = -1.*t982*t1022;
  t8246 = t8221 + t8233;
  t2082 = t1478*t1982;
  t8265 = -1.*t564*t8246;
  t8267 = t8265 + t2082;
  t8730 = -1.*t389*t757*t564;
  t8737 = -1.*t1478*t389*t1022;
  t8742 = t8730 + t8737;
  t8892 = -1.*t1478*t4186;
  t8901 = t7980 + t8892;
  t9042 = t982*t757;
  t9044 = t430*t801*t1022;
  t9052 = t9042 + t9044;
  t9063 = -1.*t1478*t9052;
  t9081 = t8265 + t9063;
  t8332 = t1478*t8246;
  t8754 = t2301*t8742;
  t8755 = t51*t3032*t8742;
  t8756 = -1.*t2159*t3249*t8742;
  t8759 = t1478*t389*t757;
  t8761 = -1.*t389*t564*t1022;
  t8764 = t8759 + t8761;
  t8787 = 0.17458*t8764;
  t8813 = -1.*t2918*t2159*t8742;
  t8824 = -1.*t51*t3006*t8742;
  t8833 = t8813 + t8824;
  t8839 = 0.183*t8833;
  t8840 = t51*t2918*t8742;
  t8842 = -1.*t2159*t3006*t8742;
  t8866 = t8840 + t8842;
  t8870 = -0.3*t8866;
  t9215 = -1.*t982*t389*t2159;
  t9227 = -1.*t51*t4410;
  t9232 = t9215 + t9227;
  t4691 = t2918*t4587;
  t9120 = -1.*t564*t9052;
  t9121 = t8332 + t9120;
  t9296 = -1.*t51*t9121;
  t9297 = t3125 + t9296;
  t9319 = t51*t389*t430;
  t9321 = -1.*t2159*t9121;
  t9342 = t9319 + t9321;
  t9380 = t2159*t801;
  t9385 = -1.*t51*t8764;
  t9391 = t9380 + t9385;
  t9413 = -1.*t51*t801;
  t9418 = -1.*t2159*t8764;
  t9452 = t9413 + t9418;
  t4656 = -1.*t3006*t4499;
  t4721 = t4656 + t4691;
  t9272 = -1.*t3006*t4587;
  t9550 = 0.183*t2918;
  t9557 = -0.3*t3006;
  t9558 = t9550 + t9557;
  t9570 = 0.3*t2918;
  t9578 = t9570 + t3029;
  t9606 = t389*t2159*t430;
  t9644 = t51*t9121;
  t9647 = t9606 + t9644;
  t9347 = t2918*t9342;
  t9358 = -1.*t3006*t9342;
  t9687 = -1.*t2159*t801;
  t9695 = t51*t8764;
  t9697 = t9687 + t9695;
  t9491 = t2918*t9452;
  t9518 = -1.*t3006*t9452;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t1871*t1982 + t2301*t2810 + t3032*t3144 + t3249*t3335 + 0.183*(-1.*t3006*t3144 + t2918*t3335) - 0.3*(t2918*t3144 + t3006*t3335) - 1.*t261*t389*t430 + 0.17458*(t2082 + t1107*t564) + t1107*t692;
  p_output1(10)=t1871*t4186 + t2301*t4410 + t3032*t4499 + t3249*t4587 - 0.3*(t2918*t4499 + t3006*t4587) + 0.183*t4721 + 0.17458*(t1478*t4186 + t4094*t564) + t4094*t692 + t261*t389*t982;
  p_output1(11)=0;
  p_output1(12)=t2301*t5160 + t3032*t5248 + t3249*t5497 + 0.183*(-1.*t3006*t5248 + t2918*t5497) - 0.3*(t2918*t5248 + t3006*t5497) + t1022*t1871*t389*t982 + t389*t692*t757*t982 - 1.*t261*t801*t982 + 0.17458*(t1022*t1478*t389*t982 + t389*t564*t757*t982);
  p_output1(13)=t1022*t1871*t389*t430 + t2301*t6126 + t3032*t6341 + t3249*t6517 + 0.183*(-1.*t3006*t6341 + t2918*t6517) - 0.3*(t2918*t6341 + t3006*t6517) + t389*t430*t692*t757 + 0.17458*(t1022*t1478*t389*t430 + t389*t430*t564*t757) - 1.*t261*t430*t801;
  p_output1(14)=-1.*t261*t389 + t2301*t7547 + t3032*t7678 + t3249*t7703 + 0.183*(-1.*t3006*t7678 + t2918*t7703) - 0.3*(t2918*t7678 + t3006*t7703) - 1.*t1022*t1871*t801 - 1.*t692*t757*t801 + 0.17458*(-1.*t1022*t1478*t801 - 1.*t564*t757*t801);
  p_output1(15)=t1871*t4094 + t692*t7956 + 0.17458*(t4380 + t564*t7956) + t2301*t7994 - 1.*t2159*t3249*t7994 + t3032*t51*t7994 - 0.3*(-1.*t2159*t3006*t7994 + t2918*t51*t7994) + 0.183*(-1.*t2159*t2918*t7994 - 1.*t3006*t51*t7994);
  p_output1(16)=t1982*t692 + t1871*t8246 + t2301*t8267 - 1.*t2159*t3249*t8267 + t3032*t51*t8267 - 0.3*(-1.*t2159*t3006*t8267 + t2918*t51*t8267) + 0.183*(-1.*t2159*t2918*t8267 - 1.*t3006*t51*t8267) + 0.17458*(t1982*t564 + t8332);
  p_output1(17)=-1.*t1022*t389*t692 + t1871*t389*t757 + t8754 + t8755 + t8756 + t8787 + t8839 + t8870;
  p_output1(18)=0;
  p_output1(19)=0;
  p_output1(20)=0;
  p_output1(21)=0;
  p_output1(22)=0;
  p_output1(23)=0;
  p_output1(24)=0;
  p_output1(25)=0;
  p_output1(26)=0;
  p_output1(27)=-0.047*t1478*t4094 + 0.17458*t4410 + 0.047*t4186*t564 + t2301*t8901 - 1.*t2159*t3249*t8901 + t3032*t51*t8901 - 0.3*(-1.*t2159*t3006*t8901 + t2918*t51*t8901) + 0.183*(-1.*t2159*t2918*t8901 - 1.*t3006*t51*t8901);
  p_output1(28)=-0.047*t1478*t8246 + 0.047*t564*t9052 + t2301*t9081 - 1.*t2159*t3249*t9081 + t3032*t51*t9081 - 0.3*(-1.*t2159*t3006*t9081 + t2918*t51*t9081) + 0.183*(-1.*t2159*t2918*t9081 - 1.*t3006*t51*t9081) + 0.17458*t9121;
  p_output1(29)=0.047*t1022*t389*t564 - 0.047*t1478*t389*t757 + t8754 + t8755 + t8756 + t8787 + t8839 + t8870;
  p_output1(30)=t3032*t4587 + 0.183*t4410*t51 + t3249*t9232 - 0.3*(t4691 + t3006*t9232) + 0.183*(t2918*t9232 + t9272) + 0.183*t2159*t389*t982;
  p_output1(31)=0.183*t2159*t389*t430 + 0.183*t51*t9121 + t3249*t9297 + t3032*t9342 - 0.3*(t3006*t9297 + t9347) + 0.183*(t2918*t9297 + t9358);
  p_output1(32)=-0.183*t2159*t801 + 0.183*t51*t8764 + t3249*t9391 + t3032*t9452 - 0.3*(t3006*t9391 + t9491) + 0.183*(t2918*t9391 + t9518);
  p_output1(33)=-0.3*t4721 + 0.183*(-1.*t2918*t4499 + t9272) + t4499*t9558 + t4587*t9578;
  p_output1(34)=t9342*t9578 + t9558*t9647 + 0.183*(t9358 - 1.*t2918*t9647) - 0.3*(t9347 - 1.*t3006*t9647);
  p_output1(35)=t9452*t9578 + t9558*t9697 + 0.183*(t9518 - 1.*t2918*t9697) - 0.3*(t9491 - 1.*t3006*t9697);
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


       
Eigen::Matrix<double,3,18> Jp_FL_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void Jp_FL_calf_joint(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



