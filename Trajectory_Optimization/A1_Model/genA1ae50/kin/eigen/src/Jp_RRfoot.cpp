/*
 * Automatically Generated from Mathematica.
 * Tue 24 Feb 2026 01:11:22 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RRfoot.h"

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
  double t980;
  double t1769;
  double t1529;
  double t1558;
  double t1904;
  double t1361;
  double t1616;
  double t1965;
  double t1975;
  double t2289;
  double t2457;
  double t2464;
  double t2470;
  double t934;
  double t2687;
  double t293;
  double t2784;
  double t2844;
  double t2856;
  double t2911;
  double t2914;
  double t2933;
  double t2983;
  double t3060;
  double t3120;
  double t3174;
  double t3264;
  double t3272;
  double t3377;
  double t571;
  double t580;
  double t782;
  double t809;
  double t1455;
  double t1515;
  double t2291;
  double t2309;
  double t2334;
  double t2336;
  double t3989;
  double t4016;
  double t4044;
  double t4264;
  double t4325;
  double t4326;
  double t2696;
  double t2720;
  double t2949;
  double t2988;
  double t2991;
  double t4547;
  double t4572;
  double t4588;
  double t3213;
  double t3237;
  double t3238;
  double t4597;
  double t4601;
  double t4606;
  double t4632;
  double t4650;
  double t4664;
  double t5177;
  double t5188;
  double t5212;
  double t5230;
  double t5231;
  double t5258;
  double t5296;
  double t5322;
  double t5326;
  double t6157;
  double t6186;
  double t6189;
  double t6331;
  double t6335;
  double t6412;
  double t6492;
  double t6500;
  double t6547;
  double t7674;
  double t7705;
  double t7714;
  double t7807;
  double t7927;
  double t7938;
  double t8011;
  double t8015;
  double t8029;
  double t8248;
  double t8254;
  double t8257;
  double t8301;
  double t8307;
  double t8310;
  double t8431;
  double t8445;
  double t8452;
  double t2580;
  double t8469;
  double t8472;
  double t8632;
  double t8633;
  double t8634;
  double t8727;
  double t8738;
  double t8844;
  double t8855;
  double t8856;
  double t8859;
  double t8860;
  double t8548;
  double t8636;
  double t8639;
  double t8640;
  double t8641;
  double t8642;
  double t8644;
  double t8653;
  double t8661;
  double t8677;
  double t8681;
  double t8690;
  double t8697;
  double t8699;
  double t8703;
  double t8707;
  double t8941;
  double t8944;
  double t8945;
  double t4703;
  double t8875;
  double t8879;
  double t8983;
  double t8990;
  double t8996;
  double t8999;
  double t9000;
  double t9026;
  double t9027;
  double t9030;
  double t9033;
  double t9034;
  double t9036;
  double t4682;
  double t4709;
  double t8965;
  double t9064;
  double t9066;
  double t9068;
  double t9071;
  double t9072;
  double t9082;
  double t9083;
  double t9085;
  double t9005;
  double t9010;
  double t9101;
  double t9103;
  double t9107;
  double t9039;
  double t9046;
  t980 = Sin(var1[3]);
  t1769 = Cos(var1[3]);
  t1529 = Cos(var1[5]);
  t1558 = Sin(var1[4]);
  t1904 = Sin(var1[5]);
  t1361 = Sin(var1[12]);
  t1616 = -1.*t1529*t980*t1558;
  t1965 = t1769*t1904;
  t1975 = t1616 + t1965;
  t2289 = Cos(var1[12]);
  t2457 = -1.*t1769*t1529;
  t2464 = -1.*t980*t1558*t1904;
  t2470 = t2457 + t2464;
  t934 = Cos(var1[4]);
  t2687 = Sin(var1[13]);
  t293 = Cos(var1[13]);
  t2784 = t2289*t1975;
  t2844 = -1.*t1361*t2470;
  t2856 = t2784 + t2844;
  t2911 = Cos(var1[14]);
  t2914 = -1.*t2911;
  t2933 = 1. + t2914;
  t2983 = Sin(var1[14]);
  t3060 = -1.*t934*t2687*t980;
  t3120 = t293*t2856;
  t3174 = t3060 + t3120;
  t3264 = -1.*t293*t934*t980;
  t3272 = -1.*t2687*t2856;
  t3377 = t3264 + t3272;
  t571 = -1.*t293;
  t580 = 1. + t571;
  t782 = -0.183*t580;
  t809 = 0. + t782;
  t1455 = 0.047*t1361;
  t1515 = 0. + t1455;
  t2291 = -1.*t2289;
  t2309 = 1. + t2291;
  t2334 = -0.047*t2309;
  t2336 = 0. + t2334;
  t3989 = t1769*t1529*t1558;
  t4016 = t980*t1904;
  t4044 = t3989 + t4016;
  t4264 = -1.*t1529*t980;
  t4325 = t1769*t1558*t1904;
  t4326 = t4264 + t4325;
  t2696 = -0.183*t2687;
  t2720 = 0. + t2696;
  t2949 = -0.1*t2933;
  t2988 = -0.183*t2983;
  t2991 = 0. + t2949 + t2988;
  t4547 = t2289*t4044;
  t4572 = -1.*t1361*t4326;
  t4588 = t4547 + t4572;
  t3213 = -0.183*t2933;
  t3237 = 0.1*t2983;
  t3238 = 0. + t3213 + t3237;
  t4597 = t1769*t934*t2687;
  t4601 = t293*t4588;
  t4606 = t4597 + t4601;
  t4632 = t293*t1769*t934;
  t4650 = -1.*t2687*t4588;
  t4664 = t4632 + t4650;
  t5177 = t2289*t1769*t934*t1529;
  t5188 = -1.*t1769*t934*t1361*t1904;
  t5212 = t5177 + t5188;
  t5230 = -1.*t1769*t2687*t1558;
  t5231 = t293*t5212;
  t5258 = t5230 + t5231;
  t5296 = -1.*t293*t1769*t1558;
  t5322 = -1.*t2687*t5212;
  t5326 = t5296 + t5322;
  t6157 = t2289*t934*t1529*t980;
  t6186 = -1.*t934*t1361*t980*t1904;
  t6189 = t6157 + t6186;
  t6331 = -1.*t2687*t980*t1558;
  t6335 = t293*t6189;
  t6412 = t6331 + t6335;
  t6492 = -1.*t293*t980*t1558;
  t6500 = -1.*t2687*t6189;
  t6547 = t6492 + t6500;
  t7674 = -1.*t2289*t1529*t1558;
  t7705 = t1361*t1558*t1904;
  t7714 = t7674 + t7705;
  t7807 = -1.*t934*t2687;
  t7927 = t293*t7714;
  t7938 = t7807 + t7927;
  t8011 = -1.*t293*t934;
  t8015 = -1.*t2687*t7714;
  t8029 = t8011 + t8015;
  t8248 = t1529*t980;
  t8254 = -1.*t1769*t1558*t1904;
  t8257 = t8248 + t8254;
  t8301 = -1.*t1361*t4044;
  t8307 = t2289*t8257;
  t8310 = t8301 + t8307;
  t8431 = t1529*t980*t1558;
  t8445 = -1.*t1769*t1904;
  t8452 = t8431 + t8445;
  t2580 = t2289*t2470;
  t8469 = -1.*t1361*t8452;
  t8472 = t8469 + t2580;
  t8632 = -1.*t934*t1529*t1361;
  t8633 = -1.*t2289*t934*t1904;
  t8634 = t8632 + t8633;
  t8727 = -1.*t2289*t4326;
  t8738 = t8301 + t8727;
  t8844 = t1769*t1529;
  t8855 = t980*t1558*t1904;
  t8856 = t8844 + t8855;
  t8859 = -1.*t2289*t8856;
  t8860 = t8469 + t8859;
  t8548 = t2289*t8452;
  t8636 = t2720*t8634;
  t8639 = t293*t2991*t8634;
  t8640 = -1.*t2687*t3238*t8634;
  t8641 = t2289*t934*t1529;
  t8642 = -1.*t934*t1361*t1904;
  t8644 = t8641 + t8642;
  t8653 = -0.13205*t8644;
  t8661 = -1.*t2911*t2687*t8634;
  t8677 = -1.*t293*t2983*t8634;
  t8681 = t8661 + t8677;
  t8690 = -0.183*t8681;
  t8697 = t293*t2911*t8634;
  t8699 = -1.*t2687*t2983*t8634;
  t8703 = t8697 + t8699;
  t8707 = -0.2*t8703;
  t8941 = -1.*t1769*t934*t2687;
  t8944 = -1.*t293*t4588;
  t8945 = t8941 + t8944;
  t4703 = t2911*t4664;
  t8875 = -1.*t1361*t8856;
  t8879 = t8548 + t8875;
  t8983 = -1.*t293*t8879;
  t8990 = t3060 + t8983;
  t8996 = t293*t934*t980;
  t8999 = -1.*t2687*t8879;
  t9000 = t8996 + t8999;
  t9026 = t2687*t1558;
  t9027 = -1.*t293*t8644;
  t9030 = t9026 + t9027;
  t9033 = -1.*t293*t1558;
  t9034 = -1.*t2687*t8644;
  t9036 = t9033 + t9034;
  t4682 = -1.*t2983*t4606;
  t4709 = t4682 + t4703;
  t8965 = -1.*t2983*t4664;
  t9064 = -0.183*t2911;
  t9066 = -0.1*t2983;
  t9068 = t9064 + t9066;
  t9071 = 0.1*t2911;
  t9072 = t9071 + t2988;
  t9082 = t934*t2687*t980;
  t9083 = t293*t8879;
  t9085 = t9082 + t9083;
  t9005 = t2911*t9000;
  t9010 = -1.*t2983*t9000;
  t9101 = -1.*t2687*t1558;
  t9103 = t293*t8644;
  t9107 = t9101 + t9103;
  t9039 = t2911*t9036;
  t9046 = -1.*t2983*t9036;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t1515*t1975 + t2336*t2470 - 0.13205*(t1361*t1975 + t2580) + t2720*t2856 + t2991*t3174 + t3238*t3377 - 0.183*(-1.*t2983*t3174 + t2911*t3377) - 0.2*(t2911*t3174 + t2983*t3377) - 1.*t809*t934*t980;
  p_output1(10)=t1515*t4044 + t2336*t4326 - 0.13205*(t1361*t4044 + t2289*t4326) + t2720*t4588 + t2991*t4606 + t3238*t4664 - 0.2*(t2911*t4606 + t2983*t4664) - 0.183*t4709 + t1769*t809*t934;
  p_output1(11)=0;
  p_output1(12)=t2720*t5212 + t2991*t5258 + t3238*t5326 - 0.183*(-1.*t2983*t5258 + t2911*t5326) - 0.2*(t2911*t5258 + t2983*t5326) - 1.*t1558*t1769*t809 + t1515*t1529*t1769*t934 + t1769*t1904*t2336*t934 - 0.13205*(t1361*t1529*t1769*t934 + t1769*t1904*t2289*t934);
  p_output1(13)=t2720*t6189 + t2991*t6412 + t3238*t6547 - 0.183*(-1.*t2983*t6412 + t2911*t6547) - 0.2*(t2911*t6412 + t2983*t6547) - 1.*t1558*t809*t980 + t1515*t1529*t934*t980 + t1904*t2336*t934*t980 - 0.13205*(t1361*t1529*t934*t980 + t1904*t2289*t934*t980);
  p_output1(14)=-1.*t1515*t1529*t1558 - 0.13205*(-1.*t1361*t1529*t1558 - 1.*t1558*t1904*t2289) - 1.*t1558*t1904*t2336 + t2720*t7714 + t2991*t7938 + t3238*t8029 - 0.183*(-1.*t2983*t7938 + t2911*t8029) - 0.2*(t2911*t7938 + t2983*t8029) - 1.*t809*t934;
  p_output1(15)=t2336*t4044 + t1515*t8257 - 0.13205*(t4547 + t1361*t8257) + t2720*t8310 + t293*t2991*t8310 - 1.*t2687*t3238*t8310 - 0.2*(t2911*t293*t8310 - 1.*t2687*t2983*t8310) - 0.183*(-1.*t2687*t2911*t8310 - 1.*t293*t2983*t8310);
  p_output1(16)=t1515*t2470 + t2336*t8452 + t2720*t8472 + t293*t2991*t8472 - 1.*t2687*t3238*t8472 - 0.2*(t2911*t293*t8472 - 1.*t2687*t2983*t8472) - 0.183*(-1.*t2687*t2911*t8472 - 1.*t293*t2983*t8472) - 0.13205*(t1361*t2470 + t8548);
  p_output1(17)=t8636 + t8639 + t8640 + t8653 + t8690 + t8707 - 1.*t1515*t1904*t934 + t1529*t2336*t934;
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
  p_output1(36)=0.047*t2289*t4044 - 0.047*t1361*t4326 - 0.13205*t4588 + t2720*t8738 + t293*t2991*t8738 - 1.*t2687*t3238*t8738 - 0.2*(t2911*t293*t8738 - 1.*t2687*t2983*t8738) - 0.183*(-1.*t2687*t2911*t8738 - 1.*t293*t2983*t8738);
  p_output1(37)=0.047*t2289*t8452 - 0.047*t1361*t8856 + t2720*t8860 + t293*t2991*t8860 - 1.*t2687*t3238*t8860 - 0.2*(t2911*t293*t8860 - 1.*t2687*t2983*t8860) - 0.183*(-1.*t2687*t2911*t8860 - 1.*t293*t2983*t8860) - 0.13205*t8879;
  p_output1(38)=t8636 + t8639 + t8640 + t8653 + t8690 + t8707 - 0.047*t1361*t1904*t934 + 0.047*t1529*t2289*t934;
  p_output1(39)=-0.183*t293*t4588 + t2991*t4664 + t3238*t8945 - 0.2*(t4703 + t2983*t8945) - 0.183*(t2911*t8945 + t8965) - 0.183*t1769*t2687*t934;
  p_output1(40)=-0.183*t293*t8879 + t3238*t8990 + t2991*t9000 - 0.2*(t2983*t8990 + t9005) - 0.183*(t2911*t8990 + t9010) - 0.183*t2687*t934*t980;
  p_output1(41)=0.183*t1558*t2687 - 0.183*t293*t8644 + t3238*t9030 + t2991*t9036 - 0.2*(t2983*t9030 + t9039) - 0.183*(t2911*t9030 + t9046);
  p_output1(42)=-0.2*t4709 - 0.183*(-1.*t2911*t4606 + t8965) + t4606*t9068 + t4664*t9072;
  p_output1(43)=t9000*t9072 + t9068*t9085 - 0.183*(t9010 - 1.*t2911*t9085) - 0.2*(t9005 - 1.*t2983*t9085);
  p_output1(44)=t9036*t9072 + t9068*t9107 - 0.183*(t9046 - 1.*t2911*t9107) - 0.2*(t9039 - 1.*t2983*t9107);
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


       
Eigen::Matrix<double,3,18> Jp_RRfoot(const Eigen::Matrix<double,18,1> &var1)
//void Jp_RRfoot(Eigen::Matrix<double,3,18> &p_output1, const Eigen::Matrix<double,18,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,18>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



