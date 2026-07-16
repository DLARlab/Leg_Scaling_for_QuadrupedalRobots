/*
 * Automatically Generated from Mathematica.
 * Wed 11 Feb 2026 23:19:09 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_FLfoot.h"

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
  double t794;
  double t1577;
  double t1467;
  double t1522;
  double t1699;
  double t1062;
  double t1569;
  double t1729;
  double t1730;
  double t1746;
  double t2248;
  double t2344;
  double t2387;
  double t698;
  double t2808;
  double t141;
  double t3098;
  double t3145;
  double t3410;
  double t3562;
  double t3615;
  double t3657;
  double t3941;
  double t4073;
  double t4144;
  double t4179;
  double t4451;
  double t4514;
  double t4616;
  double t144;
  double t175;
  double t210;
  double t497;
  double t1269;
  double t1435;
  double t1889;
  double t1899;
  double t1912;
  double t2154;
  double t5985;
  double t6220;
  double t6363;
  double t6446;
  double t6513;
  double t6578;
  double t2902;
  double t2905;
  double t3836;
  double t4019;
  double t4052;
  double t6824;
  double t6864;
  double t6888;
  double t4307;
  double t4317;
  double t4320;
  double t6970;
  double t7006;
  double t7032;
  double t7099;
  double t7112;
  double t7121;
  double t7795;
  double t7796;
  double t7805;
  double t7830;
  double t7835;
  double t7854;
  double t7864;
  double t7866;
  double t7868;
  double t8202;
  double t8207;
  double t8235;
  double t8270;
  double t8311;
  double t8334;
  double t8383;
  double t8405;
  double t8406;
  double t8715;
  double t8726;
  double t8749;
  double t8774;
  double t8776;
  double t8780;
  double t8804;
  double t8805;
  double t8807;
  double t8909;
  double t8918;
  double t8937;
  double t8973;
  double t8990;
  double t9003;
  double t9177;
  double t9184;
  double t9186;
  double t2521;
  double t9230;
  double t9243;
  double t9521;
  double t9529;
  double t9538;
  double t9737;
  double t9738;
  double t9823;
  double t9834;
  double t9842;
  double t9878;
  double t9892;
  double t9298;
  double t9558;
  double t9567;
  double t9590;
  double t9607;
  double t9617;
  double t9632;
  double t9636;
  double t9638;
  double t9643;
  double t9644;
  double t9664;
  double t9667;
  double t9677;
  double t9687;
  double t9688;
  double t10070;
  double t10072;
  double t10084;
  double t7332;
  double t9900;
  double t9928;
  double t10187;
  double t10188;
  double t10202;
  double t10218;
  double t10219;
  double t10262;
  double t10263;
  double t10264;
  double t10278;
  double t10280;
  double t10285;
  double t7322;
  double t7358;
  double t10137;
  double t10325;
  double t10330;
  double t10331;
  double t10339;
  double t10342;
  double t10366;
  double t10368;
  double t10373;
  double t10227;
  double t10247;
  double t10400;
  double t10406;
  double t10407;
  double t10292;
  double t10310;
  t794 = Sin(var1[3]);
  t1577 = Cos(var1[3]);
  t1467 = Cos(var1[5]);
  t1522 = Sin(var1[4]);
  t1699 = Sin(var1[5]);
  t1062 = Sin(var1[9]);
  t1569 = -1.*t1467*t794*t1522;
  t1729 = t1577*t1699;
  t1730 = t1569 + t1729;
  t1746 = Cos(var1[9]);
  t2248 = -1.*t1577*t1467;
  t2344 = -1.*t794*t1522*t1699;
  t2387 = t2248 + t2344;
  t698 = Cos(var1[4]);
  t2808 = Sin(var1[10]);
  t141 = Cos(var1[10]);
  t3098 = t1746*t1730;
  t3145 = -1.*t1062*t2387;
  t3410 = t3098 + t3145;
  t3562 = Cos(var1[11]);
  t3615 = -1.*t3562;
  t3657 = 1. + t3615;
  t3941 = Sin(var1[11]);
  t4073 = -1.*t698*t2808*t794;
  t4144 = t141*t3410;
  t4179 = t4073 + t4144;
  t4451 = -1.*t141*t698*t794;
  t4514 = -1.*t2808*t3410;
  t4616 = t4451 + t4514;
  t144 = -1.*t141;
  t175 = 1. + t144;
  t210 = 0.183*t175;
  t497 = 0. + t210;
  t1269 = -0.047*t1062;
  t1435 = 0. + t1269;
  t1889 = -1.*t1746;
  t1899 = 1. + t1889;
  t1912 = 0.047*t1899;
  t2154 = 0. + t1912;
  t5985 = t1577*t1467*t1522;
  t6220 = t794*t1699;
  t6363 = t5985 + t6220;
  t6446 = -1.*t1467*t794;
  t6513 = t1577*t1522*t1699;
  t6578 = t6446 + t6513;
  t2902 = 0.183*t2808;
  t2905 = 0. + t2902;
  t3836 = -0.15*t3657;
  t4019 = 0.183*t3941;
  t4052 = 0. + t3836 + t4019;
  t6824 = t1746*t6363;
  t6864 = -1.*t1062*t6578;
  t6888 = t6824 + t6864;
  t4307 = 0.183*t3657;
  t4317 = 0.15*t3941;
  t4320 = 0. + t4307 + t4317;
  t6970 = t1577*t698*t2808;
  t7006 = t141*t6888;
  t7032 = t6970 + t7006;
  t7099 = t141*t1577*t698;
  t7112 = -1.*t2808*t6888;
  t7121 = t7099 + t7112;
  t7795 = t1746*t1577*t698*t1467;
  t7796 = -1.*t1577*t698*t1062*t1699;
  t7805 = t7795 + t7796;
  t7830 = -1.*t1577*t2808*t1522;
  t7835 = t141*t7805;
  t7854 = t7830 + t7835;
  t7864 = -1.*t141*t1577*t1522;
  t7866 = -1.*t2808*t7805;
  t7868 = t7864 + t7866;
  t8202 = t1746*t698*t1467*t794;
  t8207 = -1.*t698*t1062*t794*t1699;
  t8235 = t8202 + t8207;
  t8270 = -1.*t2808*t794*t1522;
  t8311 = t141*t8235;
  t8334 = t8270 + t8311;
  t8383 = -1.*t141*t794*t1522;
  t8405 = -1.*t2808*t8235;
  t8406 = t8383 + t8405;
  t8715 = -1.*t1746*t1467*t1522;
  t8726 = t1062*t1522*t1699;
  t8749 = t8715 + t8726;
  t8774 = -1.*t698*t2808;
  t8776 = t141*t8749;
  t8780 = t8774 + t8776;
  t8804 = -1.*t141*t698;
  t8805 = -1.*t2808*t8749;
  t8807 = t8804 + t8805;
  t8909 = t1467*t794;
  t8918 = -1.*t1577*t1522*t1699;
  t8937 = t8909 + t8918;
  t8973 = -1.*t1062*t6363;
  t8990 = t1746*t8937;
  t9003 = t8973 + t8990;
  t9177 = t1467*t794*t1522;
  t9184 = -1.*t1577*t1699;
  t9186 = t9177 + t9184;
  t2521 = t1746*t2387;
  t9230 = -1.*t1062*t9186;
  t9243 = t9230 + t2521;
  t9521 = -1.*t698*t1467*t1062;
  t9529 = -1.*t1746*t698*t1699;
  t9538 = t9521 + t9529;
  t9737 = -1.*t1746*t6578;
  t9738 = t8973 + t9737;
  t9823 = t1577*t1467;
  t9834 = t794*t1522*t1699;
  t9842 = t9823 + t9834;
  t9878 = -1.*t1746*t9842;
  t9892 = t9230 + t9878;
  t9298 = t1746*t9186;
  t9558 = t2905*t9538;
  t9567 = -1.*t2808*t4320*t9538;
  t9590 = t141*t4052*t9538;
  t9607 = t1746*t698*t1467;
  t9617 = -1.*t698*t1062*t1699;
  t9632 = t9607 + t9617;
  t9636 = 0.11079*t9632;
  t9638 = -1.*t3562*t2808*t9538;
  t9643 = -1.*t141*t3941*t9538;
  t9644 = t9638 + t9643;
  t9664 = 0.183*t9644;
  t9667 = t141*t3562*t9538;
  t9677 = -1.*t2808*t3941*t9538;
  t9687 = t9667 + t9677;
  t9688 = -0.3*t9687;
  t10070 = -1.*t1577*t698*t2808;
  t10072 = -1.*t141*t6888;
  t10084 = t10070 + t10072;
  t7332 = t3562*t7121;
  t9900 = -1.*t1062*t9842;
  t9928 = t9298 + t9900;
  t10187 = -1.*t141*t9928;
  t10188 = t4073 + t10187;
  t10202 = t141*t698*t794;
  t10218 = -1.*t2808*t9928;
  t10219 = t10202 + t10218;
  t10262 = t2808*t1522;
  t10263 = -1.*t141*t9632;
  t10264 = t10262 + t10263;
  t10278 = -1.*t141*t1522;
  t10280 = -1.*t2808*t9632;
  t10285 = t10278 + t10280;
  t7322 = -1.*t3941*t7032;
  t7358 = t7322 + t7332;
  t10137 = -1.*t3941*t7121;
  t10325 = 0.183*t3562;
  t10330 = -0.15*t3941;
  t10331 = t10325 + t10330;
  t10339 = 0.15*t3562;
  t10342 = t10339 + t4019;
  t10366 = t698*t2808*t794;
  t10368 = t141*t9928;
  t10373 = t10366 + t10368;
  t10227 = t3562*t10219;
  t10247 = -1.*t3941*t10219;
  t10400 = -1.*t2808*t1522;
  t10406 = t141*t9632;
  t10407 = t10400 + t10406;
  t10292 = t3562*t10285;
  t10310 = -1.*t3941*t10285;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t1435*t1730 + t2154*t2387 + 0.11079*(t1062*t1730 + t2521) + t2905*t3410 + t4052*t4179 + t4320*t4616 + 0.183*(-1.*t3941*t4179 + t3562*t4616) - 0.3*(t3562*t4179 + t3941*t4616) - 1.*t497*t698*t794;
  p_output1(10)=t1435*t6363 + t2154*t6578 + 0.11079*(t1062*t6363 + t1746*t6578) + t2905*t6888 + t1577*t497*t698 + t4052*t7032 + t4320*t7121 - 0.3*(t3562*t7032 + t3941*t7121) + 0.183*t7358;
  p_output1(11)=0;
  p_output1(12)=-1.*t1522*t1577*t497 + t1435*t1467*t1577*t698 + t1577*t1699*t2154*t698 + 0.11079*(t1062*t1467*t1577*t698 + t1577*t1699*t1746*t698) + t2905*t7805 + t4052*t7854 + t4320*t7868 + 0.183*(-1.*t3941*t7854 + t3562*t7868) - 0.3*(t3562*t7854 + t3941*t7868);
  p_output1(13)=-1.*t1522*t497*t794 + t1435*t1467*t698*t794 + t1699*t2154*t698*t794 + 0.11079*(t1062*t1467*t698*t794 + t1699*t1746*t698*t794) + t2905*t8235 + t4052*t8334 + t4320*t8406 + 0.183*(-1.*t3941*t8334 + t3562*t8406) - 0.3*(t3562*t8334 + t3941*t8406);
  p_output1(14)=-1.*t1435*t1467*t1522 + 0.11079*(-1.*t1062*t1467*t1522 - 1.*t1522*t1699*t1746) - 1.*t1522*t1699*t2154 - 1.*t497*t698 + t2905*t8749 + t4052*t8780 + t4320*t8807 + 0.183*(-1.*t3941*t8780 + t3562*t8807) - 0.3*(t3562*t8780 + t3941*t8807);
  p_output1(15)=t2154*t6363 + t1435*t8937 + 0.11079*(t6824 + t1062*t8937) + t2905*t9003 + t141*t4052*t9003 - 1.*t2808*t4320*t9003 + 0.183*(-1.*t2808*t3562*t9003 - 1.*t141*t3941*t9003) - 0.3*(t141*t3562*t9003 - 1.*t2808*t3941*t9003);
  p_output1(16)=t1435*t2387 + t2154*t9186 + t2905*t9243 + t141*t4052*t9243 - 1.*t2808*t4320*t9243 + 0.183*(-1.*t2808*t3562*t9243 - 1.*t141*t3941*t9243) - 0.3*(t141*t3562*t9243 - 1.*t2808*t3941*t9243) + 0.11079*(t1062*t2387 + t9298);
  p_output1(17)=-1.*t1435*t1699*t698 + t1467*t2154*t698 + t9558 + t9567 + t9590 + t9636 + t9664 + t9688;
  p_output1(18)=0;
  p_output1(19)=0;
  p_output1(20)=0;
  p_output1(21)=0;
  p_output1(22)=0;
  p_output1(23)=0;
  p_output1(24)=0;
  p_output1(25)=0;
  p_output1(26)=0;
  p_output1(27)=-0.047*t1746*t6363 + 0.047*t1062*t6578 + 0.11079*t6888 + t2905*t9738 + t141*t4052*t9738 - 1.*t2808*t4320*t9738 + 0.183*(-1.*t2808*t3562*t9738 - 1.*t141*t3941*t9738) - 0.3*(t141*t3562*t9738 - 1.*t2808*t3941*t9738);
  p_output1(28)=-0.047*t1746*t9186 + 0.047*t1062*t9842 + t2905*t9892 + t141*t4052*t9892 - 1.*t2808*t4320*t9892 + 0.183*(-1.*t2808*t3562*t9892 - 1.*t141*t3941*t9892) - 0.3*(t141*t3562*t9892 - 1.*t2808*t3941*t9892) + 0.11079*t9928;
  p_output1(29)=0.047*t1062*t1699*t698 - 0.047*t1467*t1746*t698 + t9558 + t9567 + t9590 + t9636 + t9664 + t9688;
  p_output1(30)=0.183*(t10137 + t10084*t3562) + t10084*t4320 + 0.183*t141*t6888 + 0.183*t1577*t2808*t698 + t4052*t7121 - 0.3*(t10084*t3941 + t7332);
  p_output1(31)=0.183*(t10247 + t10188*t3562) - 0.3*(t10227 + t10188*t3941) + t10219*t4052 + t10188*t4320 + 0.183*t2808*t698*t794 + 0.183*t141*t9928;
  p_output1(32)=-0.183*t1522*t2808 + 0.183*(t10310 + t10264*t3562) - 0.3*(t10292 + t10264*t3941) + t10285*t4052 + t10264*t4320 + 0.183*t141*t9632;
  p_output1(33)=t10331*t7032 + 0.183*(t10137 - 1.*t3562*t7032) + t10342*t7121 - 0.3*t7358;
  p_output1(34)=t10219*t10342 + t10331*t10373 + 0.183*(t10247 - 1.*t10373*t3562) - 0.3*(t10227 - 1.*t10373*t3941);
  p_output1(35)=t10285*t10342 + t10331*t10407 + 0.183*(t10310 - 1.*t10407*t3562) - 0.3*(t10292 - 1.*t10407*t3941);
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


       
Eigen::Matrix<double,3,18> Jp_FLfoot(const Eigen::Matrix<double,18,1> &var1)
//void Jp_FLfoot(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



