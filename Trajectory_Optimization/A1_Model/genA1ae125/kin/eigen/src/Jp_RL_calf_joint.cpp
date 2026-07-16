/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:04:39 GMT-05:00
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
  double t493;
  double t1441;
  double t905;
  double t1217;
  double t1466;
  double t557;
  double t1264;
  double t1479;
  double t1506;
  double t1901;
  double t2053;
  double t2132;
  double t2133;
  double t404;
  double t2536;
  double t131;
  double t2636;
  double t2660;
  double t2661;
  double t2700;
  double t2713;
  double t2965;
  double t2999;
  double t3114;
  double t3176;
  double t3195;
  double t3432;
  double t3545;
  double t3580;
  double t142;
  double t189;
  double t324;
  double t400;
  double t619;
  double t766;
  double t1926;
  double t1982;
  double t2001;
  double t2029;
  double t5375;
  double t5397;
  double t5419;
  double t5563;
  double t5591;
  double t5604;
  double t2595;
  double t2617;
  double t2975;
  double t3005;
  double t3113;
  double t6059;
  double t6079;
  double t6112;
  double t3291;
  double t3308;
  double t3330;
  double t6118;
  double t6124;
  double t6147;
  double t6165;
  double t6201;
  double t6266;
  double t6466;
  double t6467;
  double t6468;
  double t6543;
  double t6553;
  double t6564;
  double t6579;
  double t6580;
  double t6583;
  double t6669;
  double t6670;
  double t6673;
  double t6675;
  double t6679;
  double t6680;
  double t6689;
  double t6691;
  double t6693;
  double t6784;
  double t6800;
  double t6815;
  double t6847;
  double t6854;
  double t6855;
  double t6863;
  double t6868;
  double t6876;
  double t6943;
  double t6947;
  double t6950;
  double t6962;
  double t6978;
  double t6980;
  double t7027;
  double t7030;
  double t7031;
  double t2368;
  double t7035;
  double t7036;
  double t7101;
  double t7103;
  double t7106;
  double t7164;
  double t7165;
  double t7217;
  double t7220;
  double t7222;
  double t7229;
  double t7232;
  double t7056;
  double t7109;
  double t7114;
  double t7128;
  double t7132;
  double t7133;
  double t7134;
  double t7136;
  double t7137;
  double t7139;
  double t7144;
  double t7145;
  double t7150;
  double t7154;
  double t7155;
  double t7156;
  double t7299;
  double t7300;
  double t7302;
  double t6292;
  double t7243;
  double t7252;
  double t7343;
  double t7344;
  double t7348;
  double t7349;
  double t7352;
  double t7398;
  double t7405;
  double t7410;
  double t7425;
  double t7438;
  double t7444;
  double t6286;
  double t6308;
  double t7334;
  double t7507;
  double t7511;
  double t7523;
  double t7539;
  double t7546;
  double t7578;
  double t7581;
  double t7584;
  double t7362;
  double t7370;
  double t7664;
  double t7677;
  double t7679;
  double t7455;
  double t7475;
  t493 = Sin(var1[3]);
  t1441 = Cos(var1[3]);
  t905 = Cos(var1[5]);
  t1217 = Sin(var1[4]);
  t1466 = Sin(var1[5]);
  t557 = Sin(var1[15]);
  t1264 = -1.*t905*t493*t1217;
  t1479 = t1441*t1466;
  t1506 = t1264 + t1479;
  t1901 = Cos(var1[15]);
  t2053 = -1.*t1441*t905;
  t2132 = -1.*t493*t1217*t1466;
  t2133 = t2053 + t2132;
  t404 = Cos(var1[4]);
  t2536 = Sin(var1[16]);
  t131 = Cos(var1[16]);
  t2636 = t1901*t1506;
  t2660 = -1.*t557*t2133;
  t2661 = t2636 + t2660;
  t2700 = Cos(var1[17]);
  t2713 = -1.*t2700;
  t2965 = 1. + t2713;
  t2999 = Sin(var1[17]);
  t3114 = -1.*t404*t2536*t493;
  t3176 = t131*t2661;
  t3195 = t3114 + t3176;
  t3432 = -1.*t131*t404*t493;
  t3545 = -1.*t2536*t2661;
  t3580 = t3432 + t3545;
  t142 = -1.*t131;
  t189 = 1. + t142;
  t324 = -0.183*t189;
  t400 = 0. + t324;
  t619 = -0.047*t557;
  t766 = 0. + t619;
  t1926 = -1.*t1901;
  t1982 = 1. + t1926;
  t2001 = 0.047*t1982;
  t2029 = 0. + t2001;
  t5375 = t1441*t905*t1217;
  t5397 = t493*t1466;
  t5419 = t5375 + t5397;
  t5563 = -1.*t905*t493;
  t5591 = t1441*t1217*t1466;
  t5604 = t5563 + t5591;
  t2595 = -0.183*t2536;
  t2617 = 0. + t2595;
  t2975 = -0.25*t2965;
  t3005 = -0.183*t2999;
  t3113 = 0. + t2975 + t3005;
  t6059 = t1901*t5419;
  t6079 = -1.*t557*t5604;
  t6112 = t6059 + t6079;
  t3291 = -0.183*t2965;
  t3308 = 0.25*t2999;
  t3330 = 0. + t3291 + t3308;
  t6118 = t1441*t404*t2536;
  t6124 = t131*t6112;
  t6147 = t6118 + t6124;
  t6165 = t131*t1441*t404;
  t6201 = -1.*t2536*t6112;
  t6266 = t6165 + t6201;
  t6466 = t1901*t1441*t404*t905;
  t6467 = -1.*t1441*t404*t557*t1466;
  t6468 = t6466 + t6467;
  t6543 = -1.*t1441*t2536*t1217;
  t6553 = t131*t6468;
  t6564 = t6543 + t6553;
  t6579 = -1.*t131*t1441*t1217;
  t6580 = -1.*t2536*t6468;
  t6583 = t6579 + t6580;
  t6669 = t1901*t404*t905*t493;
  t6670 = -1.*t404*t557*t493*t1466;
  t6673 = t6669 + t6670;
  t6675 = -1.*t2536*t493*t1217;
  t6679 = t131*t6673;
  t6680 = t6675 + t6679;
  t6689 = -1.*t131*t493*t1217;
  t6691 = -1.*t2536*t6673;
  t6693 = t6689 + t6691;
  t6784 = -1.*t1901*t905*t1217;
  t6800 = t557*t1217*t1466;
  t6815 = t6784 + t6800;
  t6847 = -1.*t404*t2536;
  t6854 = t131*t6815;
  t6855 = t6847 + t6854;
  t6863 = -1.*t131*t404;
  t6868 = -1.*t2536*t6815;
  t6876 = t6863 + t6868;
  t6943 = t905*t493;
  t6947 = -1.*t1441*t1217*t1466;
  t6950 = t6943 + t6947;
  t6962 = -1.*t557*t5419;
  t6978 = t1901*t6950;
  t6980 = t6962 + t6978;
  t7027 = t905*t493*t1217;
  t7030 = -1.*t1441*t1466;
  t7031 = t7027 + t7030;
  t2368 = t1901*t2133;
  t7035 = -1.*t557*t7031;
  t7036 = t7035 + t2368;
  t7101 = -1.*t404*t905*t557;
  t7103 = -1.*t1901*t404*t1466;
  t7106 = t7101 + t7103;
  t7164 = -1.*t1901*t5604;
  t7165 = t6962 + t7164;
  t7217 = t1441*t905;
  t7220 = t493*t1217*t1466;
  t7222 = t7217 + t7220;
  t7229 = -1.*t1901*t7222;
  t7232 = t7035 + t7229;
  t7056 = t1901*t7031;
  t7109 = t2617*t7106;
  t7114 = t131*t3113*t7106;
  t7128 = -1.*t2536*t3330*t7106;
  t7132 = t1901*t404*t905;
  t7133 = -1.*t404*t557*t1466;
  t7134 = t7132 + t7133;
  t7136 = 0.13205*t7134;
  t7137 = -1.*t2700*t2536*t7106;
  t7139 = -1.*t131*t2999*t7106;
  t7144 = t7137 + t7139;
  t7145 = -0.183*t7144;
  t7150 = t131*t2700*t7106;
  t7154 = -1.*t2536*t2999*t7106;
  t7155 = t7150 + t7154;
  t7156 = -0.25*t7155;
  t7299 = -1.*t1441*t404*t2536;
  t7300 = -1.*t131*t6112;
  t7302 = t7299 + t7300;
  t6292 = t2700*t6266;
  t7243 = -1.*t557*t7222;
  t7252 = t7056 + t7243;
  t7343 = -1.*t131*t7252;
  t7344 = t3114 + t7343;
  t7348 = t131*t404*t493;
  t7349 = -1.*t2536*t7252;
  t7352 = t7348 + t7349;
  t7398 = t2536*t1217;
  t7405 = -1.*t131*t7134;
  t7410 = t7398 + t7405;
  t7425 = -1.*t131*t1217;
  t7438 = -1.*t2536*t7134;
  t7444 = t7425 + t7438;
  t6286 = -1.*t2999*t6147;
  t6308 = t6286 + t6292;
  t7334 = -1.*t2999*t6266;
  t7507 = -0.183*t2700;
  t7511 = -0.25*t2999;
  t7523 = t7507 + t7511;
  t7539 = 0.25*t2700;
  t7546 = t7539 + t3005;
  t7578 = t404*t2536*t493;
  t7581 = t131*t7252;
  t7584 = t7578 + t7581;
  t7362 = t2700*t7352;
  t7370 = -1.*t2999*t7352;
  t7664 = -1.*t2536*t1217;
  t7677 = t131*t7134;
  t7679 = t7664 + t7677;
  t7455 = t2700*t7444;
  t7475 = -1.*t2999*t7444;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t2029*t2133 + t2617*t2661 + t3113*t3195 + t3330*t3580 - 0.183*(-1.*t2999*t3195 + t2700*t3580) - 0.25*(t2700*t3195 + t2999*t3580) - 1.*t400*t404*t493 + 0.13205*(t2368 + t1506*t557) + t1506*t766;
  p_output1(10)=t1441*t400*t404 + t2029*t5604 + 0.13205*(t5419*t557 + t1901*t5604) + t2617*t6112 + t3113*t6147 + t3330*t6266 - 0.25*(t2700*t6147 + t2999*t6266) - 0.183*t6308 + t5419*t766;
  p_output1(11)=0;
  p_output1(12)=-1.*t1217*t1441*t400 + t1441*t1466*t2029*t404 + t2617*t6468 + t3113*t6564 + t3330*t6583 - 0.183*(-1.*t2999*t6564 + t2700*t6583) - 0.25*(t2700*t6564 + t2999*t6583) + t1441*t404*t766*t905 + 0.13205*(t1441*t1466*t1901*t404 + t1441*t404*t557*t905);
  p_output1(13)=-1.*t1217*t400*t493 + t1466*t2029*t404*t493 + t2617*t6673 + t3113*t6680 + t3330*t6693 - 0.183*(-1.*t2999*t6680 + t2700*t6693) - 0.25*(t2700*t6680 + t2999*t6693) + t404*t493*t766*t905 + 0.13205*(t1466*t1901*t404*t493 + t404*t493*t557*t905);
  p_output1(14)=-1.*t1217*t1466*t2029 - 1.*t400*t404 + t2617*t6815 + t3113*t6855 + t3330*t6876 - 0.183*(-1.*t2999*t6855 + t2700*t6876) - 0.25*(t2700*t6855 + t2999*t6876) - 1.*t1217*t766*t905 + 0.13205*(-1.*t1217*t1466*t1901 - 1.*t1217*t557*t905);
  p_output1(15)=t2029*t5419 + 0.13205*(t6059 + t557*t6950) + t2617*t6980 + t131*t3113*t6980 - 1.*t2536*t3330*t6980 - 0.183*(-1.*t2536*t2700*t6980 - 1.*t131*t2999*t6980) - 0.25*(t131*t2700*t6980 - 1.*t2536*t2999*t6980) + t6950*t766;
  p_output1(16)=t2029*t7031 + t2617*t7036 + t131*t3113*t7036 - 1.*t2536*t3330*t7036 - 0.183*(-1.*t2536*t2700*t7036 - 1.*t131*t2999*t7036) - 0.25*(t131*t2700*t7036 - 1.*t2536*t2999*t7036) + 0.13205*(t2133*t557 + t7056) + t2133*t766;
  p_output1(17)=t7109 + t7114 + t7128 + t7136 + t7145 + t7156 - 1.*t1466*t404*t766 + t2029*t404*t905;
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
  p_output1(45)=-0.047*t1901*t5419 + 0.047*t557*t5604 + 0.13205*t6112 + t2617*t7165 + t131*t3113*t7165 - 1.*t2536*t3330*t7165 - 0.183*(-1.*t2536*t2700*t7165 - 1.*t131*t2999*t7165) - 0.25*(t131*t2700*t7165 - 1.*t2536*t2999*t7165);
  p_output1(46)=-0.047*t1901*t7031 + 0.047*t557*t7222 + t2617*t7232 + t131*t3113*t7232 - 1.*t2536*t3330*t7232 - 0.183*(-1.*t2536*t2700*t7232 - 1.*t131*t2999*t7232) - 0.25*(t131*t2700*t7232 - 1.*t2536*t2999*t7232) + 0.13205*t7252;
  p_output1(47)=0.047*t1466*t404*t557 + t7109 + t7114 + t7128 + t7136 + t7145 + t7156 - 0.047*t1901*t404*t905;
  p_output1(48)=-0.183*t1441*t2536*t404 - 0.183*t131*t6112 + t3113*t6266 + t3330*t7302 - 0.25*(t6292 + t2999*t7302) - 0.183*(t2700*t7302 + t7334);
  p_output1(49)=-0.183*t2536*t404*t493 - 0.183*t131*t7252 + t3330*t7344 + t3113*t7352 - 0.25*(t2999*t7344 + t7362) - 0.183*(t2700*t7344 + t7370);
  p_output1(50)=0.183*t1217*t2536 - 0.183*t131*t7134 + t3330*t7410 + t3113*t7444 - 0.25*(t2999*t7410 + t7455) - 0.183*(t2700*t7410 + t7475);
  p_output1(51)=-0.25*t6308 - 0.183*(-1.*t2700*t6147 + t7334) + t6147*t7523 + t6266*t7546;
  p_output1(52)=t7352*t7546 + t7523*t7584 - 0.183*(t7370 - 1.*t2700*t7584) - 0.25*(t7362 - 1.*t2999*t7584);
  p_output1(53)=t7444*t7546 + t7523*t7679 - 0.183*(t7475 - 1.*t2700*t7679) - 0.25*(t7455 - 1.*t2999*t7679);
}


       
Eigen::Matrix<double,3,18> Jp_RL_calf_joint(const Eigen::Matrix<double,18,1> &var1)
//void Jp_RL_calf_joint(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



