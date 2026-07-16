/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 09:04:44 GMT-05:00
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
  double t1101;
  double t1444;
  double t1211;
  double t1310;
  double t1537;
  double t1166;
  double t1356;
  double t1760;
  double t1842;
  double t1945;
  double t2417;
  double t2552;
  double t2573;
  double t944;
  double t2697;
  double t309;
  double t2829;
  double t2880;
  double t2892;
  double t3042;
  double t3229;
  double t3400;
  double t3444;
  double t3590;
  double t3745;
  double t3757;
  double t4106;
  double t4173;
  double t4175;
  double t446;
  double t682;
  double t744;
  double t754;
  double t1179;
  double t1208;
  double t2060;
  double t2088;
  double t2317;
  double t2407;
  double t4940;
  double t4966;
  double t5042;
  double t5082;
  double t5089;
  double t5126;
  double t2734;
  double t2755;
  double t3415;
  double t3529;
  double t3554;
  double t5475;
  double t5520;
  double t5579;
  double t3959;
  double t3973;
  double t4016;
  double t5615;
  double t5664;
  double t5685;
  double t5878;
  double t5955;
  double t6033;
  double t6655;
  double t6665;
  double t6745;
  double t6925;
  double t6969;
  double t7016;
  double t7123;
  double t7152;
  double t7173;
  double t7464;
  double t7484;
  double t7487;
  double t7500;
  double t7507;
  double t7510;
  double t7523;
  double t7529;
  double t7532;
  double t7737;
  double t7746;
  double t7766;
  double t7771;
  double t7796;
  double t7823;
  double t7858;
  double t7860;
  double t7866;
  double t7931;
  double t7957;
  double t7964;
  double t7970;
  double t7977;
  double t7997;
  double t8134;
  double t8138;
  double t8143;
  double t2637;
  double t8156;
  double t8164;
  double t8281;
  double t8282;
  double t8286;
  double t8355;
  double t8360;
  double t8411;
  double t8415;
  double t8417;
  double t8420;
  double t8441;
  double t8214;
  double t8290;
  double t8291;
  double t8294;
  double t8295;
  double t8296;
  double t8300;
  double t8306;
  double t8308;
  double t8309;
  double t8310;
  double t8311;
  double t8314;
  double t8316;
  double t8322;
  double t8323;
  double t8509;
  double t8518;
  double t8520;
  double t6185;
  double t8465;
  double t8468;
  double t8579;
  double t8585;
  double t8593;
  double t8594;
  double t8595;
  double t8680;
  double t8686;
  double t8690;
  double t8700;
  double t8706;
  double t8713;
  double t6136;
  double t6189;
  double t8567;
  double t8740;
  double t8748;
  double t8750;
  double t8761;
  double t8762;
  double t8792;
  double t8793;
  double t8796;
  double t8613;
  double t8634;
  double t8829;
  double t8832;
  double t8839;
  double t8719;
  double t8728;
  t1101 = Sin(var1[3]);
  t1444 = Cos(var1[3]);
  t1211 = Cos(var1[5]);
  t1310 = Sin(var1[4]);
  t1537 = Sin(var1[5]);
  t1166 = Sin(var1[9]);
  t1356 = -1.*t1211*t1101*t1310;
  t1760 = t1444*t1537;
  t1842 = t1356 + t1760;
  t1945 = Cos(var1[9]);
  t2417 = -1.*t1444*t1211;
  t2552 = -1.*t1101*t1310*t1537;
  t2573 = t2417 + t2552;
  t944 = Cos(var1[4]);
  t2697 = Sin(var1[10]);
  t309 = Cos(var1[10]);
  t2829 = t1945*t1842;
  t2880 = -1.*t1166*t2573;
  t2892 = t2829 + t2880;
  t3042 = Cos(var1[11]);
  t3229 = -1.*t3042;
  t3400 = 1. + t3229;
  t3444 = Sin(var1[11]);
  t3590 = -1.*t944*t2697*t1101;
  t3745 = t309*t2892;
  t3757 = t3590 + t3745;
  t4106 = -1.*t309*t944*t1101;
  t4173 = -1.*t2697*t2892;
  t4175 = t4106 + t4173;
  t446 = -1.*t309;
  t682 = 1. + t446;
  t744 = 0.183*t682;
  t754 = 0. + t744;
  t1179 = -0.047*t1166;
  t1208 = 0. + t1179;
  t2060 = -1.*t1945;
  t2088 = 1. + t2060;
  t2317 = 0.047*t2088;
  t2407 = 0. + t2317;
  t4940 = t1444*t1211*t1310;
  t4966 = t1101*t1537;
  t5042 = t4940 + t4966;
  t5082 = -1.*t1211*t1101;
  t5089 = t1444*t1310*t1537;
  t5126 = t5082 + t5089;
  t2734 = 0.183*t2697;
  t2755 = 0. + t2734;
  t3415 = -0.25*t3400;
  t3529 = 0.183*t3444;
  t3554 = 0. + t3415 + t3529;
  t5475 = t1945*t5042;
  t5520 = -1.*t1166*t5126;
  t5579 = t5475 + t5520;
  t3959 = 0.183*t3400;
  t3973 = 0.25*t3444;
  t4016 = 0. + t3959 + t3973;
  t5615 = t1444*t944*t2697;
  t5664 = t309*t5579;
  t5685 = t5615 + t5664;
  t5878 = t309*t1444*t944;
  t5955 = -1.*t2697*t5579;
  t6033 = t5878 + t5955;
  t6655 = t1945*t1444*t944*t1211;
  t6665 = -1.*t1444*t944*t1166*t1537;
  t6745 = t6655 + t6665;
  t6925 = -1.*t1444*t2697*t1310;
  t6969 = t309*t6745;
  t7016 = t6925 + t6969;
  t7123 = -1.*t309*t1444*t1310;
  t7152 = -1.*t2697*t6745;
  t7173 = t7123 + t7152;
  t7464 = t1945*t944*t1211*t1101;
  t7484 = -1.*t944*t1166*t1101*t1537;
  t7487 = t7464 + t7484;
  t7500 = -1.*t2697*t1101*t1310;
  t7507 = t309*t7487;
  t7510 = t7500 + t7507;
  t7523 = -1.*t309*t1101*t1310;
  t7529 = -1.*t2697*t7487;
  t7532 = t7523 + t7529;
  t7737 = -1.*t1945*t1211*t1310;
  t7746 = t1166*t1310*t1537;
  t7766 = t7737 + t7746;
  t7771 = -1.*t944*t2697;
  t7796 = t309*t7766;
  t7823 = t7771 + t7796;
  t7858 = -1.*t309*t944;
  t7860 = -1.*t2697*t7766;
  t7866 = t7858 + t7860;
  t7931 = t1211*t1101;
  t7957 = -1.*t1444*t1310*t1537;
  t7964 = t7931 + t7957;
  t7970 = -1.*t1166*t5042;
  t7977 = t1945*t7964;
  t7997 = t7970 + t7977;
  t8134 = t1211*t1101*t1310;
  t8138 = -1.*t1444*t1537;
  t8143 = t8134 + t8138;
  t2637 = t1945*t2573;
  t8156 = -1.*t1166*t8143;
  t8164 = t8156 + t2637;
  t8281 = -1.*t944*t1211*t1166;
  t8282 = -1.*t1945*t944*t1537;
  t8286 = t8281 + t8282;
  t8355 = -1.*t1945*t5126;
  t8360 = t7970 + t8355;
  t8411 = t1444*t1211;
  t8415 = t1101*t1310*t1537;
  t8417 = t8411 + t8415;
  t8420 = -1.*t1945*t8417;
  t8441 = t8156 + t8420;
  t8214 = t1945*t8143;
  t8290 = t2755*t8286;
  t8291 = t309*t3554*t8286;
  t8294 = -1.*t2697*t4016*t8286;
  t8295 = t1945*t944*t1211;
  t8296 = -1.*t944*t1166*t1537;
  t8300 = t8295 + t8296;
  t8306 = 0.13205*t8300;
  t8308 = -1.*t3042*t2697*t8286;
  t8309 = -1.*t309*t3444*t8286;
  t8310 = t8308 + t8309;
  t8311 = 0.183*t8310;
  t8314 = t309*t3042*t8286;
  t8316 = -1.*t2697*t3444*t8286;
  t8322 = t8314 + t8316;
  t8323 = -0.5*t8322;
  t8509 = -1.*t1444*t944*t2697;
  t8518 = -1.*t309*t5579;
  t8520 = t8509 + t8518;
  t6185 = t3042*t6033;
  t8465 = -1.*t1166*t8417;
  t8468 = t8214 + t8465;
  t8579 = -1.*t309*t8468;
  t8585 = t3590 + t8579;
  t8593 = t309*t944*t1101;
  t8594 = -1.*t2697*t8468;
  t8595 = t8593 + t8594;
  t8680 = t2697*t1310;
  t8686 = -1.*t309*t8300;
  t8690 = t8680 + t8686;
  t8700 = -1.*t309*t1310;
  t8706 = -1.*t2697*t8300;
  t8713 = t8700 + t8706;
  t6136 = -1.*t3444*t5685;
  t6189 = t6136 + t6185;
  t8567 = -1.*t3444*t6033;
  t8740 = 0.183*t3042;
  t8748 = -0.25*t3444;
  t8750 = t8740 + t8748;
  t8761 = 0.25*t3042;
  t8762 = t8761 + t3529;
  t8792 = t944*t2697*t1101;
  t8793 = t309*t8468;
  t8796 = t8792 + t8793;
  t8613 = t3042*t8595;
  t8634 = -1.*t3444*t8595;
  t8829 = -1.*t2697*t1310;
  t8832 = t309*t8300;
  t8839 = t8829 + t8832;
  t8719 = t3042*t8713;
  t8728 = -1.*t3444*t8713;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t1208*t1842 + t2407*t2573 + 0.13205*(t1166*t1842 + t2637) + t2755*t2892 + t3554*t3757 + t4016*t4175 + 0.183*(-1.*t3444*t3757 + t3042*t4175) - 0.5*(t3042*t3757 + t3444*t4175) - 1.*t1101*t754*t944;
  p_output1(10)=t1208*t5042 + t2407*t5126 + 0.13205*(t1166*t5042 + t1945*t5126) + t2755*t5579 + t3554*t5685 + t4016*t6033 - 0.5*(t3042*t5685 + t3444*t6033) + 0.183*t6189 + t1444*t754*t944;
  p_output1(11)=0;
  p_output1(12)=t2755*t6745 + t3554*t7016 + t4016*t7173 + 0.183*(-1.*t3444*t7016 + t3042*t7173) - 0.5*(t3042*t7016 + t3444*t7173) - 1.*t1310*t1444*t754 + t1208*t1211*t1444*t944 + t1444*t1537*t2407*t944 + 0.13205*(t1166*t1211*t1444*t944 + t1444*t1537*t1945*t944);
  p_output1(13)=t2755*t7487 + t3554*t7510 + t4016*t7532 + 0.183*(-1.*t3444*t7510 + t3042*t7532) - 0.5*(t3042*t7510 + t3444*t7532) - 1.*t1101*t1310*t754 + t1101*t1208*t1211*t944 + t1101*t1537*t2407*t944 + 0.13205*(t1101*t1166*t1211*t944 + t1101*t1537*t1945*t944);
  p_output1(14)=-1.*t1208*t1211*t1310 + 0.13205*(-1.*t1166*t1211*t1310 - 1.*t1310*t1537*t1945) - 1.*t1310*t1537*t2407 + t2755*t7766 + t3554*t7823 + t4016*t7866 + 0.183*(-1.*t3444*t7823 + t3042*t7866) - 0.5*(t3042*t7823 + t3444*t7866) - 1.*t754*t944;
  p_output1(15)=t2407*t5042 + t1208*t7964 + 0.13205*(t5475 + t1166*t7964) + t2755*t7997 + t309*t3554*t7997 - 1.*t2697*t4016*t7997 - 0.5*(t3042*t309*t7997 - 1.*t2697*t3444*t7997) + 0.183*(-1.*t2697*t3042*t7997 - 1.*t309*t3444*t7997);
  p_output1(16)=t1208*t2573 + t2407*t8143 + t2755*t8164 + t309*t3554*t8164 - 1.*t2697*t4016*t8164 - 0.5*(t3042*t309*t8164 - 1.*t2697*t3444*t8164) + 0.183*(-1.*t2697*t3042*t8164 - 1.*t309*t3444*t8164) + 0.13205*(t1166*t2573 + t8214);
  p_output1(17)=t8290 + t8291 + t8294 + t8306 + t8311 + t8323 - 1.*t1208*t1537*t944 + t1211*t2407*t944;
  p_output1(18)=0;
  p_output1(19)=0;
  p_output1(20)=0;
  p_output1(21)=0;
  p_output1(22)=0;
  p_output1(23)=0;
  p_output1(24)=0;
  p_output1(25)=0;
  p_output1(26)=0;
  p_output1(27)=-0.047*t1945*t5042 + 0.047*t1166*t5126 + 0.13205*t5579 + t2755*t8360 + t309*t3554*t8360 - 1.*t2697*t4016*t8360 - 0.5*(t3042*t309*t8360 - 1.*t2697*t3444*t8360) + 0.183*(-1.*t2697*t3042*t8360 - 1.*t309*t3444*t8360);
  p_output1(28)=-0.047*t1945*t8143 + 0.047*t1166*t8417 + t2755*t8441 + t309*t3554*t8441 - 1.*t2697*t4016*t8441 - 0.5*(t3042*t309*t8441 - 1.*t2697*t3444*t8441) + 0.183*(-1.*t2697*t3042*t8441 - 1.*t309*t3444*t8441) + 0.13205*t8468;
  p_output1(29)=t8290 + t8291 + t8294 + t8306 + t8311 + t8323 + 0.047*t1166*t1537*t944 - 0.047*t1211*t1945*t944;
  p_output1(30)=0.183*t309*t5579 + t3554*t6033 + t4016*t8520 - 0.5*(t6185 + t3444*t8520) + 0.183*(t3042*t8520 + t8567) + 0.183*t1444*t2697*t944;
  p_output1(31)=0.183*t309*t8468 + t4016*t8585 + t3554*t8595 - 0.5*(t3444*t8585 + t8613) + 0.183*(t3042*t8585 + t8634) + 0.183*t1101*t2697*t944;
  p_output1(32)=-0.183*t1310*t2697 + 0.183*t309*t8300 + t4016*t8690 + t3554*t8713 - 0.5*(t3444*t8690 + t8719) + 0.183*(t3042*t8690 + t8728);
  p_output1(33)=-0.5*t6189 + 0.183*(-1.*t3042*t5685 + t8567) + t5685*t8750 + t6033*t8762;
  p_output1(34)=t8595*t8762 + t8750*t8796 + 0.183*(t8634 - 1.*t3042*t8796) - 0.5*(t8613 - 1.*t3444*t8796);
  p_output1(35)=t8713*t8762 + t8750*t8839 + 0.183*(t8728 - 1.*t3042*t8839) - 0.5*(t8719 - 1.*t3444*t8839);
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



