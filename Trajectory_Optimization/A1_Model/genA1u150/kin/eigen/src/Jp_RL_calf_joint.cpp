/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:26:54 GMT-05:00
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
  double t597;
  double t934;
  double t810;
  double t841;
  double t1154;
  double t769;
  double t929;
  double t1264;
  double t1294;
  double t1550;
  double t2268;
  double t2430;
  double t2665;
  double t525;
  double t2861;
  double t124;
  double t2922;
  double t2982;
  double t3324;
  double t3452;
  double t3529;
  double t3611;
  double t3781;
  double t3982;
  double t4157;
  double t4231;
  double t4633;
  double t4650;
  double t4694;
  double t209;
  double t214;
  double t222;
  double t241;
  double t776;
  double t793;
  double t1910;
  double t1965;
  double t2141;
  double t2199;
  double t5149;
  double t5264;
  double t5337;
  double t5405;
  double t5444;
  double t5554;
  double t2867;
  double t2915;
  double t3629;
  double t3822;
  double t3966;
  double t6393;
  double t6402;
  double t6492;
  double t4408;
  double t4471;
  double t4494;
  double t6520;
  double t6569;
  double t6571;
  double t6773;
  double t6843;
  double t7070;
  double t7796;
  double t7802;
  double t7816;
  double t7844;
  double t7849;
  double t7852;
  double t7879;
  double t7885;
  double t7888;
  double t8410;
  double t8421;
  double t8426;
  double t8435;
  double t8463;
  double t8481;
  double t8526;
  double t8529;
  double t8536;
  double t8767;
  double t8802;
  double t8811;
  double t8927;
  double t8932;
  double t8933;
  double t8939;
  double t8951;
  double t8953;
  double t9020;
  double t9023;
  double t9027;
  double t9044;
  double t9053;
  double t9085;
  double t9184;
  double t9194;
  double t9199;
  double t2790;
  double t9216;
  double t9220;
  double t9305;
  double t9307;
  double t9309;
  double t9408;
  double t9412;
  double t9557;
  double t9558;
  double t9579;
  double t9586;
  double t9593;
  double t9235;
  double t9311;
  double t9313;
  double t9330;
  double t9344;
  double t9345;
  double t9350;
  double t9351;
  double t9352;
  double t9364;
  double t9366;
  double t9377;
  double t9381;
  double t9386;
  double t9387;
  double t9389;
  double t9695;
  double t9702;
  double t9706;
  double t7081;
  double t9605;
  double t9606;
  double t9757;
  double t9759;
  double t9765;
  double t9766;
  double t9770;
  double t9815;
  double t9816;
  double t9818;
  double t9824;
  double t9826;
  double t9828;
  double t7080;
  double t7162;
  double t9733;
  double t9882;
  double t9889;
  double t9891;
  double t9896;
  double t9898;
  double t9921;
  double t9922;
  double t9924;
  double t9782;
  double t9793;
  double t9946;
  double t9950;
  double t9952;
  double t9836;
  double t9858;
  t597 = Sin(var1[3]);
  t934 = Cos(var1[3]);
  t810 = Cos(var1[5]);
  t841 = Sin(var1[4]);
  t1154 = Sin(var1[5]);
  t769 = Sin(var1[15]);
  t929 = -1.*t810*t597*t841;
  t1264 = t934*t1154;
  t1294 = t929 + t1264;
  t1550 = Cos(var1[15]);
  t2268 = -1.*t934*t810;
  t2430 = -1.*t597*t841*t1154;
  t2665 = t2268 + t2430;
  t525 = Cos(var1[4]);
  t2861 = Sin(var1[16]);
  t124 = Cos(var1[16]);
  t2922 = t1550*t1294;
  t2982 = -1.*t769*t2665;
  t3324 = t2922 + t2982;
  t3452 = Cos(var1[17]);
  t3529 = -1.*t3452;
  t3611 = 1. + t3529;
  t3781 = Sin(var1[17]);
  t3982 = -1.*t525*t2861*t597;
  t4157 = t124*t3324;
  t4231 = t3982 + t4157;
  t4633 = -1.*t124*t525*t597;
  t4650 = -1.*t2861*t3324;
  t4694 = t4633 + t4650;
  t209 = -1.*t124;
  t214 = 1. + t209;
  t222 = -0.183*t214;
  t241 = 0. + t222;
  t776 = -0.047*t769;
  t793 = 0. + t776;
  t1910 = -1.*t1550;
  t1965 = 1. + t1910;
  t2141 = 0.047*t1965;
  t2199 = 0. + t2141;
  t5149 = t934*t810*t841;
  t5264 = t597*t1154;
  t5337 = t5149 + t5264;
  t5405 = -1.*t810*t597;
  t5444 = t934*t841*t1154;
  t5554 = t5405 + t5444;
  t2867 = -0.183*t2861;
  t2915 = 0. + t2867;
  t3629 = -0.3*t3611;
  t3822 = -0.183*t3781;
  t3966 = 0. + t3629 + t3822;
  t6393 = t1550*t5337;
  t6402 = -1.*t769*t5554;
  t6492 = t6393 + t6402;
  t4408 = -0.183*t3611;
  t4471 = 0.3*t3781;
  t4494 = 0. + t4408 + t4471;
  t6520 = t934*t525*t2861;
  t6569 = t124*t6492;
  t6571 = t6520 + t6569;
  t6773 = t124*t934*t525;
  t6843 = -1.*t2861*t6492;
  t7070 = t6773 + t6843;
  t7796 = t1550*t934*t525*t810;
  t7802 = -1.*t934*t525*t769*t1154;
  t7816 = t7796 + t7802;
  t7844 = -1.*t934*t2861*t841;
  t7849 = t124*t7816;
  t7852 = t7844 + t7849;
  t7879 = -1.*t124*t934*t841;
  t7885 = -1.*t2861*t7816;
  t7888 = t7879 + t7885;
  t8410 = t1550*t525*t810*t597;
  t8421 = -1.*t525*t769*t597*t1154;
  t8426 = t8410 + t8421;
  t8435 = -1.*t2861*t597*t841;
  t8463 = t124*t8426;
  t8481 = t8435 + t8463;
  t8526 = -1.*t124*t597*t841;
  t8529 = -1.*t2861*t8426;
  t8536 = t8526 + t8529;
  t8767 = -1.*t1550*t810*t841;
  t8802 = t769*t841*t1154;
  t8811 = t8767 + t8802;
  t8927 = -1.*t525*t2861;
  t8932 = t124*t8811;
  t8933 = t8927 + t8932;
  t8939 = -1.*t124*t525;
  t8951 = -1.*t2861*t8811;
  t8953 = t8939 + t8951;
  t9020 = t810*t597;
  t9023 = -1.*t934*t841*t1154;
  t9027 = t9020 + t9023;
  t9044 = -1.*t769*t5337;
  t9053 = t1550*t9027;
  t9085 = t9044 + t9053;
  t9184 = t810*t597*t841;
  t9194 = -1.*t934*t1154;
  t9199 = t9184 + t9194;
  t2790 = t1550*t2665;
  t9216 = -1.*t769*t9199;
  t9220 = t9216 + t2790;
  t9305 = -1.*t525*t810*t769;
  t9307 = -1.*t1550*t525*t1154;
  t9309 = t9305 + t9307;
  t9408 = -1.*t1550*t5554;
  t9412 = t9044 + t9408;
  t9557 = t934*t810;
  t9558 = t597*t841*t1154;
  t9579 = t9557 + t9558;
  t9586 = -1.*t1550*t9579;
  t9593 = t9216 + t9586;
  t9235 = t1550*t9199;
  t9311 = t2915*t9309;
  t9313 = t124*t3966*t9309;
  t9330 = -1.*t2861*t4494*t9309;
  t9344 = t1550*t525*t810;
  t9345 = -1.*t525*t769*t1154;
  t9350 = t9344 + t9345;
  t9351 = 0.17458*t9350;
  t9352 = -1.*t3452*t2861*t9309;
  t9364 = -1.*t124*t3781*t9309;
  t9366 = t9352 + t9364;
  t9377 = -0.183*t9366;
  t9381 = t124*t3452*t9309;
  t9386 = -1.*t2861*t3781*t9309;
  t9387 = t9381 + t9386;
  t9389 = -0.3*t9387;
  t9695 = -1.*t934*t525*t2861;
  t9702 = -1.*t124*t6492;
  t9706 = t9695 + t9702;
  t7081 = t3452*t7070;
  t9605 = -1.*t769*t9579;
  t9606 = t9235 + t9605;
  t9757 = -1.*t124*t9606;
  t9759 = t3982 + t9757;
  t9765 = t124*t525*t597;
  t9766 = -1.*t2861*t9606;
  t9770 = t9765 + t9766;
  t9815 = t2861*t841;
  t9816 = -1.*t124*t9350;
  t9818 = t9815 + t9816;
  t9824 = -1.*t124*t841;
  t9826 = -1.*t2861*t9350;
  t9828 = t9824 + t9826;
  t7080 = -1.*t3781*t6571;
  t7162 = t7080 + t7081;
  t9733 = -1.*t3781*t7070;
  t9882 = -0.183*t3452;
  t9889 = -0.3*t3781;
  t9891 = t9882 + t9889;
  t9896 = 0.3*t3452;
  t9898 = t9896 + t3822;
  t9921 = t525*t2861*t597;
  t9922 = t124*t9606;
  t9924 = t9921 + t9922;
  t9782 = t3452*t9770;
  t9793 = -1.*t3781*t9770;
  t9946 = -1.*t2861*t841;
  t9950 = t124*t9350;
  t9952 = t9946 + t9950;
  t9836 = t3452*t9828;
  t9858 = -1.*t3781*t9828;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t2199*t2665 + t2915*t3324 + t3966*t4231 + t4494*t4694 - 0.183*(-1.*t3781*t4231 + t3452*t4694) - 0.3*(t3452*t4231 + t3781*t4694) - 1.*t241*t525*t597 + 0.17458*(t2790 + t1294*t769) + t1294*t793;
  p_output1(10)=t2199*t5554 + t2915*t6492 + t3966*t6571 + t4494*t7070 - 0.3*(t3452*t6571 + t3781*t7070) - 0.183*t7162 + 0.17458*(t1550*t5554 + t5337*t769) + t5337*t793 + t241*t525*t934;
  p_output1(11)=0;
  p_output1(12)=t2915*t7816 + t3966*t7852 + t4494*t7888 - 0.183*(-1.*t3781*t7852 + t3452*t7888) - 0.3*(t3452*t7852 + t3781*t7888) + t1154*t2199*t525*t934 + t525*t793*t810*t934 - 1.*t241*t841*t934 + 0.17458*(t1154*t1550*t525*t934 + t525*t769*t810*t934);
  p_output1(13)=t1154*t2199*t525*t597 + t525*t597*t793*t810 + 0.17458*(t1154*t1550*t525*t597 + t525*t597*t769*t810) - 1.*t241*t597*t841 + t2915*t8426 + t3966*t8481 + t4494*t8536 - 0.183*(-1.*t3781*t8481 + t3452*t8536) - 0.3*(t3452*t8481 + t3781*t8536);
  p_output1(14)=-1.*t241*t525 - 1.*t1154*t2199*t841 - 1.*t793*t810*t841 + 0.17458*(-1.*t1154*t1550*t841 - 1.*t769*t810*t841) + t2915*t8811 + t3966*t8933 + t4494*t8953 - 0.183*(-1.*t3781*t8933 + t3452*t8953) - 0.3*(t3452*t8933 + t3781*t8953);
  p_output1(15)=t2199*t5337 + t793*t9027 + 0.17458*(t6393 + t769*t9027) + t2915*t9085 + t124*t3966*t9085 - 1.*t2861*t4494*t9085 - 0.183*(-1.*t2861*t3452*t9085 - 1.*t124*t3781*t9085) - 0.3*(t124*t3452*t9085 - 1.*t2861*t3781*t9085);
  p_output1(16)=t2665*t793 + t2199*t9199 + t2915*t9220 + t124*t3966*t9220 - 1.*t2861*t4494*t9220 - 0.183*(-1.*t2861*t3452*t9220 - 1.*t124*t3781*t9220) - 0.3*(t124*t3452*t9220 - 1.*t2861*t3781*t9220) + 0.17458*(t2665*t769 + t9235);
  p_output1(17)=-1.*t1154*t525*t793 + t2199*t525*t810 + t9311 + t9313 + t9330 + t9351 + t9377 + t9389;
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
  p_output1(45)=-0.047*t1550*t5337 + 0.17458*t6492 + 0.047*t5554*t769 + t2915*t9412 + t124*t3966*t9412 - 1.*t2861*t4494*t9412 - 0.183*(-1.*t2861*t3452*t9412 - 1.*t124*t3781*t9412) - 0.3*(t124*t3452*t9412 - 1.*t2861*t3781*t9412);
  p_output1(46)=-0.047*t1550*t9199 + 0.047*t769*t9579 + t2915*t9593 + t124*t3966*t9593 - 1.*t2861*t4494*t9593 - 0.183*(-1.*t2861*t3452*t9593 - 1.*t124*t3781*t9593) - 0.3*(t124*t3452*t9593 - 1.*t2861*t3781*t9593) + 0.17458*t9606;
  p_output1(47)=0.047*t1154*t525*t769 - 0.047*t1550*t525*t810 + t9311 + t9313 + t9330 + t9351 + t9377 + t9389;
  p_output1(48)=-0.183*t124*t6492 + t3966*t7070 - 0.183*t2861*t525*t934 + t4494*t9706 - 0.3*(t7081 + t3781*t9706) - 0.183*(t3452*t9706 + t9733);
  p_output1(49)=-0.183*t2861*t525*t597 - 0.183*t124*t9606 + t4494*t9759 + t3966*t9770 - 0.3*(t3781*t9759 + t9782) - 0.183*(t3452*t9759 + t9793);
  p_output1(50)=0.183*t2861*t841 - 0.183*t124*t9350 + t4494*t9818 + t3966*t9828 - 0.3*(t3781*t9818 + t9836) - 0.183*(t3452*t9818 + t9858);
  p_output1(51)=-0.3*t7162 - 0.183*(-1.*t3452*t6571 + t9733) + t6571*t9891 + t7070*t9898;
  p_output1(52)=t9770*t9898 + t9891*t9924 - 0.183*(t9793 - 1.*t3452*t9924) - 0.3*(t9782 - 1.*t3781*t9924);
  p_output1(53)=t9828*t9898 + t9891*t9952 - 0.183*(t9858 - 1.*t3452*t9952) - 0.3*(t9836 - 1.*t3781*t9952);
}


       
Eigen::Matrix<double,3,18> Jp_RL_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void Jp_RL_calf_joint(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



