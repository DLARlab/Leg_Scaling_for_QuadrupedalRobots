/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:04:41 GMT-05:00
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
  double t486;
  double t881;
  double t1003;
  double t865;
  double t1230;
  double t656;
  double t948;
  double t1420;
  double t1456;
  double t1525;
  double t1527;
  double t1559;
  double t1802;
  double t140;
  double t2298;
  double t2322;
  double t2396;
  double t92;
  double t2495;
  double t3193;
  double t3236;
  double t3241;
  double t3401;
  double t4385;
  double t4408;
  double t4467;
  double t2861;
  double t3048;
  double t3084;
  double t167;
  double t200;
  double t293;
  double t483;
  double t719;
  double t762;
  double t824;
  double t841;
  double t1816;
  double t1921;
  double t5580;
  double t5707;
  double t5708;
  double t5757;
  double t5766;
  double t5772;
  double t2554;
  double t2559;
  double t6111;
  double t6160;
  double t6162;
  double t3326;
  double t3509;
  double t3671;
  double t4470;
  double t4472;
  double t4535;
  double t6380;
  double t6396;
  double t6401;
  double t6342;
  double t6366;
  double t6367;
  double t6850;
  double t6860;
  double t6869;
  double t6888;
  double t6897;
  double t6983;
  double t6873;
  double t6882;
  double t6885;
  double t7066;
  double t7071;
  double t7078;
  double t7158;
  double t7159;
  double t7167;
  double t7119;
  double t7132;
  double t7144;
  double t7285;
  double t7292;
  double t7293;
  double t7309;
  double t7314;
  double t7320;
  double t7296;
  double t7298;
  double t7302;
  double t7364;
  double t7367;
  double t7368;
  double t7393;
  double t7398;
  double t7422;
  double t7539;
  double t7546;
  double t7547;
  double t2112;
  double t7560;
  double t7561;
  double t7624;
  double t7631;
  double t7632;
  double t7752;
  double t7756;
  double t7554;
  double t7824;
  double t7831;
  double t7835;
  double t7846;
  double t7856;
  double t7614;
  double t7615;
  double t7617;
  double t7618;
  double t7646;
  double t7648;
  double t7649;
  double t7653;
  double t7692;
  double t7695;
  double t7698;
  double t7700;
  double t7709;
  double t7711;
  double t7712;
  double t6413;
  double t7991;
  double t7992;
  double t7996;
  double t7840;
  double t7843;
  double t8049;
  double t8055;
  double t8070;
  double t8088;
  double t8092;
  double t8152;
  double t8157;
  double t8158;
  double t8170;
  double t8187;
  double t8188;
  double t6424;
  double t6470;
  double t8017;
  double t8234;
  double t8249;
  double t8256;
  double t8259;
  double t8260;
  double t8098;
  double t8296;
  double t8300;
  double t8301;
  double t8127;
  double t8201;
  double t8345;
  double t8348;
  double t8350;
  double t8219;
  t486 = Sin(var1[3]);
  t881 = Cos(var1[5]);
  t1003 = Sin(var1[4]);
  t865 = Cos(var1[3]);
  t1230 = Sin(var1[5]);
  t656 = Cos(var1[6]);
  t948 = -1.*t865*t881;
  t1420 = -1.*t486*t1003*t1230;
  t1456 = t948 + t1420;
  t1525 = -1.*t881*t486*t1003;
  t1527 = t865*t1230;
  t1559 = t1525 + t1527;
  t1802 = Sin(var1[6]);
  t140 = Cos(var1[7]);
  t2298 = t656*t1559;
  t2322 = -1.*t1456*t1802;
  t2396 = t2298 + t2322;
  t92 = Cos(var1[4]);
  t2495 = Sin(var1[7]);
  t3193 = Cos(var1[8]);
  t3236 = -1.*t3193;
  t3241 = 1. + t3236;
  t3401 = Sin(var1[8]);
  t4385 = -1.*t92*t140*t486;
  t4408 = -1.*t2396*t2495;
  t4467 = t4385 + t4408;
  t2861 = t140*t2396;
  t3048 = -1.*t92*t486*t2495;
  t3084 = t2861 + t3048;
  t167 = -1.*t140;
  t200 = 1. + t167;
  t293 = 0.183*t200;
  t483 = 0. + t293;
  t719 = -1.*t656;
  t762 = 1. + t719;
  t824 = -0.047*t762;
  t841 = 0. + t824;
  t1816 = 0.047*t1802;
  t1921 = 0. + t1816;
  t5580 = -1.*t881*t486;
  t5707 = t865*t1003*t1230;
  t5708 = t5580 + t5707;
  t5757 = t865*t881*t1003;
  t5766 = t486*t1230;
  t5772 = t5757 + t5766;
  t2554 = 0.183*t2495;
  t2559 = 0. + t2554;
  t6111 = t656*t5772;
  t6160 = -1.*t5708*t1802;
  t6162 = t6111 + t6160;
  t3326 = -0.25*t3241;
  t3509 = 0.183*t3401;
  t3671 = 0. + t3326 + t3509;
  t4470 = 0.183*t3241;
  t4472 = 0.25*t3401;
  t4535 = 0. + t4470 + t4472;
  t6380 = t865*t92*t140;
  t6396 = -1.*t6162*t2495;
  t6401 = t6380 + t6396;
  t6342 = t140*t6162;
  t6366 = t865*t92*t2495;
  t6367 = t6342 + t6366;
  t6850 = t865*t92*t881*t656;
  t6860 = -1.*t865*t92*t1230*t1802;
  t6869 = t6850 + t6860;
  t6888 = -1.*t865*t140*t1003;
  t6897 = -1.*t6869*t2495;
  t6983 = t6888 + t6897;
  t6873 = t140*t6869;
  t6882 = -1.*t865*t1003*t2495;
  t6885 = t6873 + t6882;
  t7066 = t92*t881*t656*t486;
  t7071 = -1.*t92*t486*t1230*t1802;
  t7078 = t7066 + t7071;
  t7158 = -1.*t140*t486*t1003;
  t7159 = -1.*t7078*t2495;
  t7167 = t7158 + t7159;
  t7119 = t140*t7078;
  t7132 = -1.*t486*t1003*t2495;
  t7144 = t7119 + t7132;
  t7285 = -1.*t881*t656*t1003;
  t7292 = t1003*t1230*t1802;
  t7293 = t7285 + t7292;
  t7309 = -1.*t92*t140;
  t7314 = -1.*t7293*t2495;
  t7320 = t7309 + t7314;
  t7296 = t140*t7293;
  t7298 = -1.*t92*t2495;
  t7302 = t7296 + t7298;
  t7364 = t881*t486;
  t7367 = -1.*t865*t1003*t1230;
  t7368 = t7364 + t7367;
  t7393 = t656*t7368;
  t7398 = -1.*t5772*t1802;
  t7422 = t7393 + t7398;
  t7539 = t881*t486*t1003;
  t7546 = -1.*t865*t1230;
  t7547 = t7539 + t7546;
  t2112 = t656*t1456;
  t7560 = -1.*t7547*t1802;
  t7561 = t2112 + t7560;
  t7624 = -1.*t92*t656*t1230;
  t7631 = -1.*t92*t881*t1802;
  t7632 = t7624 + t7631;
  t7752 = -1.*t656*t5708;
  t7756 = t7752 + t7398;
  t7554 = t656*t7547;
  t7824 = t865*t881;
  t7831 = t486*t1003*t1230;
  t7835 = t7824 + t7831;
  t7846 = -1.*t656*t7835;
  t7856 = t7846 + t7560;
  t7614 = t92*t881*t656;
  t7615 = -1.*t92*t1230*t1802;
  t7617 = t7614 + t7615;
  t7618 = -0.13205*t7617;
  t7646 = t7632*t2559;
  t7648 = t140*t7632*t3671;
  t7649 = -1.*t7632*t2495*t4535;
  t7653 = -1.*t3193*t7632*t2495;
  t7692 = -1.*t140*t7632*t3401;
  t7695 = t7653 + t7692;
  t7698 = 0.183*t7695;
  t7700 = t140*t3193*t7632;
  t7709 = -1.*t7632*t2495*t3401;
  t7711 = t7700 + t7709;
  t7712 = -0.5*t7711;
  t6413 = t3193*t6401;
  t7991 = -1.*t140*t6162;
  t7992 = -1.*t865*t92*t2495;
  t7996 = t7991 + t7992;
  t7840 = -1.*t7835*t1802;
  t7843 = t7554 + t7840;
  t8049 = t92*t140*t486;
  t8055 = -1.*t7843*t2495;
  t8070 = t8049 + t8055;
  t8088 = -1.*t140*t7843;
  t8092 = t8088 + t3048;
  t8152 = -1.*t140*t1003;
  t8157 = -1.*t7617*t2495;
  t8158 = t8152 + t8157;
  t8170 = -1.*t140*t7617;
  t8187 = t1003*t2495;
  t8188 = t8170 + t8187;
  t6424 = -1.*t6367*t3401;
  t6470 = t6413 + t6424;
  t8017 = -1.*t6401*t3401;
  t8234 = 0.183*t3193;
  t8249 = -0.25*t3401;
  t8256 = t8234 + t8249;
  t8259 = 0.25*t3193;
  t8260 = t8259 + t3509;
  t8098 = t3193*t8070;
  t8296 = t140*t7843;
  t8300 = t92*t486*t2495;
  t8301 = t8296 + t8300;
  t8127 = -1.*t8070*t3401;
  t8201 = t3193*t8158;
  t8345 = t140*t7617;
  t8348 = -1.*t1003*t2495;
  t8350 = t8345 + t8348;
  t8219 = -1.*t8158*t3401;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t1559*t1921 - 0.13205*(t1559*t1802 + t2112) + t2396*t2559 + t3084*t3671 + 0.183*(-1.*t3084*t3401 + t3193*t4467) - 0.5*(t3084*t3193 + t3401*t4467) + t4467*t4535 + t1456*t841 - 1.*t483*t486*t92;
  p_output1(10)=t1921*t5772 + t2559*t6162 + t3671*t6367 + t4535*t6401 - 0.5*(t3193*t6367 + t3401*t6401) + 0.183*t6470 - 0.13205*(t1802*t5772 + t5708*t656) + t5708*t841 + t483*t865*t92;
  p_output1(11)=0;
  p_output1(12)=t2559*t6869 + t3671*t6885 + t4535*t6983 + 0.183*(-1.*t3401*t6885 + t3193*t6983) - 0.5*(t3193*t6885 + t3401*t6983) - 1.*t1003*t483*t865 + t1230*t841*t865*t92 + t1921*t865*t881*t92 - 0.13205*(t1230*t656*t865*t92 + t1802*t865*t881*t92);
  p_output1(13)=-1.*t1003*t483*t486 + t2559*t7078 + t3671*t7144 + t4535*t7167 + 0.183*(-1.*t3401*t7144 + t3193*t7167) - 0.5*(t3193*t7144 + t3401*t7167) + t1230*t486*t841*t92 + t1921*t486*t881*t92 - 0.13205*(t1230*t486*t656*t92 + t1802*t486*t881*t92);
  p_output1(14)=t2559*t7293 + t3671*t7302 + t4535*t7320 + 0.183*(-1.*t3401*t7302 + t3193*t7320) - 0.5*(t3193*t7302 + t3401*t7320) - 1.*t1003*t1230*t841 - 1.*t1003*t1921*t881 - 0.13205*(-1.*t1003*t1230*t656 - 1.*t1003*t1802*t881) - 1.*t483*t92;
  p_output1(15)=t1921*t7368 - 0.13205*(t6111 + t1802*t7368) + t2559*t7422 + t140*t3671*t7422 - 1.*t2495*t4535*t7422 + 0.183*(-1.*t2495*t3193*t7422 - 1.*t140*t3401*t7422) - 0.5*(t140*t3193*t7422 - 1.*t2495*t3401*t7422) + t5772*t841;
  p_output1(16)=t1456*t1921 - 0.13205*(t1456*t1802 + t7554) + t2559*t7561 + t140*t3671*t7561 - 1.*t2495*t4535*t7561 + 0.183*(-1.*t2495*t3193*t7561 - 1.*t140*t3401*t7561) - 0.5*(t140*t3193*t7561 - 1.*t2495*t3401*t7561) + t7547*t841;
  p_output1(17)=t7618 + t7646 + t7648 + t7649 + t7698 + t7712 - 1.*t1230*t1921*t92 + t841*t881*t92;
  p_output1(18)=-0.047*t1802*t5708 - 0.13205*t6162 + 0.047*t5772*t656 + t2559*t7756 + t140*t3671*t7756 - 1.*t2495*t4535*t7756 + 0.183*(-1.*t2495*t3193*t7756 - 1.*t140*t3401*t7756) - 0.5*(t140*t3193*t7756 - 1.*t2495*t3401*t7756);
  p_output1(19)=0.047*t656*t7547 - 0.047*t1802*t7835 - 0.13205*t7843 + t2559*t7856 + t140*t3671*t7856 - 1.*t2495*t4535*t7856 + 0.183*(-1.*t2495*t3193*t7856 - 1.*t140*t3401*t7856) - 0.5*(t140*t3193*t7856 - 1.*t2495*t3401*t7856);
  p_output1(20)=t7618 + t7646 + t7648 + t7649 + t7698 + t7712 - 0.047*t1230*t1802*t92 + 0.047*t656*t881*t92;
  p_output1(21)=0.183*t140*t6162 + t3671*t6401 + t4535*t7996 - 0.5*(t6413 + t3401*t7996) + 0.183*(t3193*t7996 + t8017) + 0.183*t2495*t865*t92;
  p_output1(22)=0.183*t140*t7843 + t3671*t8070 + t4535*t8092 - 0.5*(t3401*t8092 + t8098) + 0.183*(t3193*t8092 + t8127) + 0.183*t2495*t486*t92;
  p_output1(23)=-0.183*t1003*t2495 + 0.183*t140*t7617 + t3671*t8158 + t4535*t8188 - 0.5*(t3401*t8188 + t8201) + 0.183*(t3193*t8188 + t8219);
  p_output1(24)=-0.5*t6470 + 0.183*(-1.*t3193*t6367 + t8017) + t6367*t8256 + t6401*t8260;
  p_output1(25)=t8070*t8260 + t8256*t8301 + 0.183*(t8127 - 1.*t3193*t8301) - 0.5*(t8098 - 1.*t3401*t8301);
  p_output1(26)=t8158*t8260 + t8256*t8350 + 0.183*(t8219 - 1.*t3193*t8350) - 0.5*(t8201 - 1.*t3401*t8350);
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



